/*
FUNCTION_NAME: OVRPlugin.Media$$IsCastingToRemoteClient
ENTRY_POINT: 03167c04
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_Media__IsCastingToRemoteClient
               (long param_1,undefined1 param_2 [16],undefined4 param_3,undefined4 param_4,
               undefined8 param_5,long param_6)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  long in_x9;
  ulong uVar5;
  int *piVar6;
  long unaff_x19;
  long *plVar7;
  ulong uVar8;
  ulong uVar9;
  long *plVar10;
  long *unaff_x23;
  long lVar11;
  undefined4 uVar12;
  
  piVar6 = (int *)(*(long *)(param_1 + 0xb0) + 8);
  do {
    if (*(long *)(piVar6 + -2) == param_6) {
      puVar2 = (undefined8 *)(param_1 + (long)*piVar6 * 0x10 + 0x138);
      goto LAB_03167c40;
    }
    in_x9 = in_x9 + -1;
    piVar6 = piVar6 + 4;
  } while (in_x9 != 0);
  puVar2 = (undefined8 *)FUN_01ae9f78();
LAB_03167c40:
  uVar1 = (*(code *)*puVar2)();
  plVar7 = (long *)(unaff_x19 + 0x30);
  uVar9 = (ulong)uVar1;
  if ((*plVar7 == 0) || (uVar1 != *(uint *)(*plVar7 + 0x18))) {
    uVar3 = FUN_01b47fd0(*(undefined8 *)
                          Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_2__,
                         uVar9);
    *(undefined8 *)(unaff_x19 + 0x30) = uVar3;
    thunk_FUN_01b4f09c(plVar7,uVar3);
    if (*(long *)(unaff_x19 + 0x28) == 0) goto LAB_03167d78;
    FUN_038fcf60(*(long *)(unaff_x19 + 0x28),uVar9,0);
  }
  if (0 < (int)uVar1) {
    uVar8 = 0;
    do {
      if ((*(long *)(unaff_x19 + 0x20) == 0) ||
         (plVar10 = *(long **)(*(long *)(unaff_x19 + 0x20) + 0x138), plVar10 == (long *)0x0))
      goto LAB_03167d78;
      lVar4 = *plVar10;
      lVar11 = *(long *)(unaff_x19 + 0x30);
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *unaff_x23) {
            puVar2 = (undefined8 *)(lVar4 + (long)(*piVar6 + 1) * 0x10 + 0x138);
            goto LAB_03167d18;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar2 = (undefined8 *)FUN_01ae9f78(plVar10,*unaff_x23,1);
LAB_03167d18:
      uVar12 = (*(code *)*puVar2)(plVar10,uVar8 & 0xffffffff,puVar2[1]);
      if (lVar11 == 0) goto LAB_03167d78;
      if (*(uint *)(lVar11 + 0x18) <= uVar8) {
                    /* WARNING: Subroutine does not return */
        FUN_01b48180();
      }
      lVar11 = lVar11 + uVar8 * 0xc;
      uVar8 = uVar8 + 1;
      *(undefined4 *)(lVar11 + 0x20) = uVar12;
      *(undefined4 *)(lVar11 + 0x24) = param_3;
      *(undefined4 *)(lVar11 + 0x28) = param_4;
    } while (uVar8 != uVar9);
  }
  if (*(long *)(unaff_x19 + 0x28) != 0) {
    FUN_038fd298(*(long *)(unaff_x19 + 0x28),*plVar7,0);
    return;
  }
LAB_03167d78:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


