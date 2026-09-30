/*
FUNCTION_NAME: OVRPlugin.OVRP_1_38_0$$ovrp_GetTrackingTransformRelativePose
ENTRY_POINT: 0516a194
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 94
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_38_0__ovrp_GetTrackingTransformRelativePose(void)

{
  ushort uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long *unaff_x19;
  long *unaff_x21;
  int unaff_w23;
  
  if (unaff_w23 == 0) {
    FUN_0566d8ec();
  }
  else {
    FUN_0566e328();
  }
  uVar2 = FUN_050f0eb8();
  if (unaff_x21 != (long *)0x0) {
    if ((uVar2 & 1) == 0) {
      uVar3 = (**(code **)(*unaff_x21 + 0x238))();
    }
    else {
      uVar3 = (**(code **)(*unaff_x21 + 0x1c8))();
    }
    uVar2 = FUN_050f0eb8(uVar3,0);
    if (unaff_x19 != (long *)0x0) {
      lVar5 = *unaff_x19;
      uVar1 = *(ushort *)(lVar5 + 0x12e);
      uVar6 = (ulong)uVar1;
      if ((uVar2 & 1) == 0) {
        if (uVar1 != 0) {
          piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_06782640) {
              puVar4 = (undefined8 *)(lVar5 + (long)(*piVar7 + 9) * 0x10 + 0x138);
              goto LAB_0516a2bc;
            }
            uVar6 = uVar6 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar6 != 0);
        }
        puVar4 = (undefined8 *)FUN_02d9a5d4();
LAB_0516a2bc:
                    /* WARNING: Could not recover jumptable at 0x0516a2dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)*puVar4)();
        return;
      }
      if (uVar1 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_06782640) {
            puVar4 = (undefined8 *)(lVar5 + (long)(*piVar7 + 8) * 0x10 + 0x138);
            goto LAB_0516a28c;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar4 = (undefined8 *)FUN_02d9a5d4();
LAB_0516a28c:
                    /* WARNING: Could not recover jumptable at 0x0516a2a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)*puVar4)();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


