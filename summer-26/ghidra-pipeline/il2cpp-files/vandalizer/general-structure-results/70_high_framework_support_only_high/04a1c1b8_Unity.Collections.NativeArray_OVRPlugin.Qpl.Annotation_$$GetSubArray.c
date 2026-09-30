/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Qpl.Annotation>$$GetSubArray
ENTRY_POINT: 04a1c1b8
PROGRAM: vandalizer-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_8;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Qpl_Annotation>__GetSubArray(undefined8 param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char in_NG;
  char in_OV;
  uint uVar4;
  int iVar5;
  int in_w3;
  long in_x4;
  long in_x5;
  long unaff_x19;
  undefined4 *puVar6;
  uint unaff_w23;
  int unaff_w24;
  uint uVar7;
  uint unaff_w27;
  int unaff_w28;
  int unaff_w29;
  undefined8 in_stack_00000008;
  
  uVar4 = (uint)param_1;
  if (in_NG == in_OV) {
    do {
      uVar7 = unaff_w23 * 2;
      uVar4 = (uint)param_1;
      if ((int)uVar7 < unaff_w24) {
        uVar1 = uVar7 + in_w3;
        if ((uVar4 <= uVar1 - 1) || (uVar4 <= uVar1)) goto LAB_04a1c2f4;
        if (in_x4 == 0) {
LAB_04a1c2f8:
                    /* WARNING: Subroutine does not return */
          FUN_031f2390();
        }
        uVar2 = *(undefined4 *)(unaff_x19 + (long)(int)(uVar1 - 1) * 4 + 0x20);
        uVar3 = *(undefined4 *)(unaff_x19 + (long)(int)uVar1 * 4 + 0x20);
        if ((*(byte *)(*(long *)(in_x5 + 0x20) + 0x135) & 1) == 0) {
          FUN_0322bef4();
        }
        uVar4 = (**(code **)(in_x4 + 0x18))
                          (*(undefined8 *)(in_x4 + 0x40),uVar2,uVar3,*(undefined8 *)(in_x4 + 0x28));
        uVar7 = uVar7 | uVar4 >> 0x1f;
        unaff_w27 = unaff_w28 + uVar7;
        if (*(uint *)(unaff_x19 + 0x18) <= unaff_w27) goto LAB_04a1c2f4;
      }
      else {
        unaff_w27 = unaff_w28 + uVar7;
        if (uVar4 <= unaff_w27) goto LAB_04a1c2f4;
        if (in_x4 == 0) goto LAB_04a1c2f8;
      }
      puVar6 = (undefined4 *)(unaff_x19 + (long)(int)unaff_w27 * 4 + 0x20);
      uVar2 = *puVar6;
      if ((*(byte *)(*(long *)(in_x5 + 0x20) + 0x135) & 1) == 0) {
        FUN_0322bef4();
      }
      iVar5 = (**(code **)(in_x4 + 0x18))
                        (*(undefined8 *)(in_x4 + 0x40),in_stack_00000008._4_4_,uVar2,
                         *(undefined8 *)(in_x4 + 0x28));
      param_1 = *(undefined8 *)(unaff_x19 + 0x18);
      uVar4 = (uint)param_1;
      if (-1 < iVar5) {
        unaff_w27 = unaff_w28 + unaff_w23;
        break;
      }
      if ((uVar4 <= unaff_w27) || (uVar4 <= unaff_w28 + unaff_w23)) goto LAB_04a1c2f4;
      *(undefined4 *)(unaff_x19 + (long)(int)(unaff_w28 + unaff_w23) * 4 + 0x20) = *puVar6;
      unaff_w23 = uVar7;
    } while ((int)uVar7 <= unaff_w29);
  }
  if (unaff_w27 < uVar4) {
    *(undefined4 *)(unaff_x19 + (long)(int)unaff_w27 * 4 + 0x20) = in_stack_00000008._4_4_;
    return;
  }
LAB_04a1c2f4:
                    /* WARNING: Subroutine does not return */
  FUN_031f2398();
}


