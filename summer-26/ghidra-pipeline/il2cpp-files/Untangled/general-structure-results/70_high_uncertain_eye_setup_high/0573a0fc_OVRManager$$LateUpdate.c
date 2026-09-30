/*
FUNCTION_NAME: OVRManager$$LateUpdate
ENTRY_POINT: 0573a0fc
PROGRAM: Untangled-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__LateUpdate(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  undefined4 unaff_w20;
  long unaff_x21;
  long unaff_x22;
  long *plVar9;
  
  FUN_02f07e70(PTR_DAT_06d587c8);
  FUN_02f07e70(PTR_DAT_06d58920);
  *(undefined1 *)(unaff_x22 + 0x92f) = 1;
  uVar2 = FUN_05739cf8();
  puVar1 = PTR_DAT_06d58920;
  plVar9 = *(long **)(unaff_x21 + 0x10);
  if (plVar9 != (long *)0x0) {
    lVar5 = *plVar9;
    uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_06d587c8) {
          puVar3 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_0573a18c;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar3 = (undefined8 *)FUN_02eea86c(plVar9,*(long *)PTR_DAT_06d587c8,0);
LAB_0573a18c:
    uVar4 = (*(code *)*puVar3)(plVar9,unaff_w20,puVar3[1]);
    lVar5 = FUN_05739cf8(uVar4,uVar4);
    lVar6 = *(long *)puVar1;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_02f12b58(lVar6);
      lVar6 = *(long *)puVar1;
    }
    plVar9 = (long *)**(undefined8 **)(lVar6 + 0xb8);
    if (plVar9 != (long *)0x0) {
      lVar6 = *plVar9;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_06d58d10) {
            puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_0573a220;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar3 = (undefined8 *)FUN_02eea86c(plVar9,*(long *)PTR_DAT_06d58d10,0);
LAB_0573a220:
      uVar7 = (*(code *)*puVar3)(plVar9,lVar5,uVar2,puVar3[1]);
      if ((uVar7 & 1) == 0) {
        FUN_057399bc();
        if (lVar5 != 0) {
          FUN_05739d78();
        }
      }
      else if (*(long *)(unaff_x21 + 0x18) != 0) {
        FUN_04c74618(*(long *)(unaff_x21 + 0x18),uVar2);
      }
      FUN_04995dd8();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


