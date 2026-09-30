/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4f>$$Copy
ENTRY_POINT: 04a1162c
PROGRAM: vandalizer-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector4f>__Copy
               (long param_1,uint param_2,int param_3,int param_4,long param_5,long param_6)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint in_w8;
  undefined8 uVar4;
  undefined8 *puVar5;
  uint uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int unaff_w28;
  
  uVar2 = unaff_w28 + param_2;
  if (uVar2 < in_w8) {
    uVar4 = *(undefined8 *)(param_1 + (long)(int)uVar2 * 8 + 0x20);
    iVar1 = param_3;
    if (param_3 < 0) {
      iVar1 = param_3 + 1;
    }
    if ((int)param_2 <= iVar1 >> 1) {
      do {
        uVar6 = param_2 * 2;
        if ((int)uVar6 < param_3) {
          uVar2 = uVar6 + param_4;
          if ((*(uint *)(param_1 + 0x18) <= uVar2 - 1) || (*(uint *)(param_1 + 0x18) <= uVar2))
          goto LAB_04a11794;
          if (param_5 == 0) goto LAB_04a11798;
          uVar7 = *(undefined8 *)(param_1 + (long)(int)(uVar2 - 1) * 8 + 0x20);
          uVar8 = *(undefined8 *)(param_1 + (long)(int)uVar2 * 8 + 0x20);
          if ((*(byte *)(*(long *)(param_6 + 0x20) + 0x135) & 1) == 0) {
            FUN_0322bef4();
          }
          uVar2 = (**(code **)(param_5 + 0x18))
                            (*(undefined8 *)(param_5 + 0x40),uVar7,uVar8,
                             *(undefined8 *)(param_5 + 0x28));
          uVar6 = uVar6 | uVar2 >> 0x1f;
        }
        uVar2 = unaff_w28 + uVar6;
        if (*(uint *)(param_1 + 0x18) <= uVar2) goto LAB_04a11794;
        puVar5 = (undefined8 *)(param_1 + (long)(int)uVar2 * 8 + 0x20);
        uVar7 = *puVar5;
        if (param_5 == 0) {
LAB_04a11798:
                    /* WARNING: Subroutine does not return */
          FUN_031f2390();
        }
        if ((*(byte *)(*(long *)(param_6 + 0x20) + 0x135) & 1) == 0) {
          FUN_0322bef4();
        }
        iVar3 = (**(code **)(param_5 + 0x18))
                          (*(undefined8 *)(param_5 + 0x40),uVar4,uVar7,
                           *(undefined8 *)(param_5 + 0x28));
        if (-1 < iVar3) {
          uVar2 = unaff_w28 + param_2;
          break;
        }
        if ((*(uint *)(param_1 + 0x18) <= uVar2) ||
           (*(uint *)(param_1 + 0x18) <= unaff_w28 + param_2)) goto LAB_04a11794;
        *(undefined8 *)(param_1 + (long)(int)(unaff_w28 + param_2) * 8 + 0x20) = *puVar5;
        param_2 = uVar6;
      } while ((int)uVar6 <= iVar1 >> 1);
      in_w8 = *(uint *)(param_1 + 0x18);
    }
    if (uVar2 < in_w8) {
      *(undefined8 *)(param_1 + (long)(int)uVar2 * 8 + 0x20) = uVar4;
      return;
    }
  }
LAB_04a11794:
                    /* WARNING: Subroutine does not return */
  FUN_031f2398();
}


