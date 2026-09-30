/*
FUNCTION_NAME: OVRPlugin$$UpdateInsightPassthroughGeometryTransform
ENTRY_POINT: 031498e4
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 93
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;paired_field_refs_with_eye_source;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0314998c) */

void OVRPlugin__UpdateInsightPassthroughGeometryTransform(undefined8 param_1,int param_2)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long unaff_x19;
  undefined8 unaff_x21;
  long *unaff_x22;
  long lVar8;
  long *unaff_x25;
  
  if (param_2 != 1) {
    if (unaff_x22 != (long *)0x0) {
      lVar8 = *unaff_x22;
      uVar6 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *unaff_x25) {
            puVar3 = (undefined8 *)(lVar8 + (long)*piVar7 * 0x10 + 0x138);
            goto code_r0x03149974;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar3 = (undefined8 *)FUN_01ae9f78();
code_r0x03149974:
      (*(code *)*puVar3)();
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bbda54(param_1);
  }
  plVar4 = (long *)__cxa_begin_catch();
  lVar8 = *plVar4;
  __cxa_end_catch();
  if (unaff_x22 != (long *)0x0) {
    lVar5 = *unaff_x22;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *unaff_x25) {
          puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_03149818;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)FUN_01ae9f78();
LAB_03149818:
    (*(code *)*puVar3)();
  }
  puVar1 = PTR_DAT_03d7ff50;
  if (lVar8 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab0160(lVar8);
  }
  uVar2 = FUN_03922ce0();
  lVar8 = thunk_FUN_01afaadc(*(undefined8 *)puVar1);
  FUN_03081994(lVar8,0);
  *(undefined4 *)(lVar8 + 0x10) = uVar2;
  *(undefined8 *)(lVar8 + 0x18) = unaff_x21;
  thunk_FUN_01b4f09c();
  *(long *)(unaff_x19 + 0x58) = lVar8;
  thunk_FUN_01b4f09c((long *)(unaff_x19 + 0x58),lVar8);
  lVar8 = *(long *)(unaff_x19 + 0x68);
  if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01b48178();
  }
  uVar2 = (**(code **)(lVar8 + 0x18))(*(undefined8 *)(lVar8 + 0x40),*(undefined8 *)(lVar8 + 0x28));
  *(undefined4 *)(unaff_x19 + 0x78) = uVar2;
  FUN_030d1618();
  return;
}


