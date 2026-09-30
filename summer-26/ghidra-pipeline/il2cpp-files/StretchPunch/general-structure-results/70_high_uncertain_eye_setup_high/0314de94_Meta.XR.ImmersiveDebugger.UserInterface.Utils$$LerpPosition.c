/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Utils$$LerpPosition
ENTRY_POINT: 0314de94
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


long Meta_XR_ImmersiveDebugger_UserInterface_Utils__LerpPosition(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long unaff_x19;
  long lVar8;
  ulong uVar9;
  
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_033a44fc(8);
  }
  if ((*(byte *)(**(long **)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x135) & 1) == 0) {
    FUN_01dde7f8();
  }
  lVar4 = thunk_FUN_01de27b8();
  FUN_0314cefc(lVar4,*(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x110));
  if (0 < *(int *)(param_1 + 0x18)) {
    lVar8 = 0;
    uVar9 = 0;
    do {
      lVar6 = *(long *)(param_1 + 0x10);
      if (lVar6 == 0) goto LAB_0314dfc4;
      if (*(uint *)(lVar6 + 0x18) <= uVar9) {
LAB_0314dfc8:
                    /* WARNING: Subroutine does not return */
        FUN_01d7db78();
      }
      if (param_2 == 0) goto LAB_0314dfc4;
      uVar5 = (**(code **)(param_2 + 0x18))
                        (*(undefined8 *)(param_2 + 0x40),*(undefined8 *)(lVar6 + lVar8 + 0x20),
                         *(undefined8 *)(lVar6 + lVar8 + 0x28),*(undefined8 *)(param_2 + 0x28));
      if ((uVar5 & 1) != 0) {
        lVar6 = *(long *)(param_1 + 0x10);
        if (lVar6 == 0) goto LAB_0314dfc4;
        if (*(uint *)(lVar6 + 0x18) <= uVar9) goto LAB_0314dfc8;
        if (lVar4 == 0) {
LAB_0314dfc4:
                    /* WARNING: Subroutine does not return */
          FUN_01d7db70();
        }
        uVar1 = *(undefined8 *)(lVar6 + lVar8 + 0x20);
        uVar2 = *(undefined8 *)(lVar6 + lVar8 + 0x28);
        lVar6 = *(long *)(lVar4 + 0x10);
        lVar7 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x80);
        *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
        if (lVar6 == 0) goto LAB_0314dfc4;
        uVar3 = *(uint *)(lVar4 + 0x18);
        if (uVar3 < *(uint *)(lVar6 + 0x18)) {
          lVar6 = lVar6 + (long)(int)uVar3 * 0x10;
          *(uint *)(lVar4 + 0x18) = uVar3 + 1;
          *(undefined8 *)(lVar6 + 0x20) = uVar1;
          *(undefined8 *)(lVar6 + 0x28) = uVar2;
        }
        else {
          FUN_0314d764(lVar4,uVar1,uVar2,
                       *(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
        }
      }
      uVar9 = uVar9 + 1;
      lVar8 = lVar8 + 0x10;
    } while ((long)uVar9 < (long)*(int *)(param_1 + 0x18));
  }
  return lVar4;
}


