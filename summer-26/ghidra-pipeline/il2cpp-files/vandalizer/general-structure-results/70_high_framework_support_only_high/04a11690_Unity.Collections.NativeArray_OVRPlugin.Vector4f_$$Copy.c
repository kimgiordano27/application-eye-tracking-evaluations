/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4f>$$Copy
ENTRY_POINT: 04a11690
PROGRAM: vandalizer-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector4f>__Copy(void)

{
  undefined1 in_CY;
  uint uVar1;
  int iVar2;
  uint in_w8;
  uint in_w9;
  uint in_w10;
  long unaff_x19;
  undefined8 *puVar3;
  long unaff_x21;
  long unaff_x22;
  uint unaff_w23;
  int unaff_w24;
  uint unaff_w25;
  undefined8 uVar4;
  uint uVar5;
  undefined8 uVar6;
  int unaff_w28;
  int unaff_w29;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  
  while ((!(bool)in_CY && (in_w8 < in_w10))) {
    if (unaff_x22 == 0) {
LAB_04a11798:
                    /* WARNING: Subroutine does not return */
      FUN_031f2390();
    }
    uVar4 = *(undefined8 *)(unaff_x19 + (long)(int)in_w9 * 8 + 0x20);
    uVar6 = *(undefined8 *)(unaff_x19 + (long)(int)in_w8 * 8 + 0x20);
    if ((*(byte *)(*(long *)(unaff_x21 + 0x20) + 0x135) & 1) == 0) {
      FUN_0322bef4();
    }
    uVar1 = (**(code **)(unaff_x22 + 0x18))
                      (*(undefined8 *)(unaff_x22 + 0x40),uVar4,uVar6,
                       *(undefined8 *)(unaff_x22 + 0x28));
    unaff_w25 = unaff_w25 | uVar1 >> 0x1f;
    uVar1 = unaff_w23;
    do {
      unaff_w23 = unaff_w25;
      uVar5 = unaff_w28 + unaff_w23;
      if (*(uint *)(unaff_x19 + 0x18) <= uVar5) goto LAB_04a11794;
      puVar3 = (undefined8 *)(unaff_x19 + (long)(int)uVar5 * 8 + 0x20);
      uVar4 = *puVar3;
      if (unaff_x22 == 0) goto LAB_04a11798;
      if ((*(byte *)(*(long *)(unaff_x21 + 0x20) + 0x135) & 1) == 0) {
        FUN_0322bef4();
      }
      iVar2 = (**(code **)(unaff_x22 + 0x18))
                        (*(undefined8 *)(unaff_x22 + 0x40),in_stack_00000008,uVar4,
                         *(undefined8 *)(unaff_x22 + 0x28));
      if (-1 < iVar2) {
        uVar5 = unaff_w28 + uVar1;
LAB_04a1175c:
        if (uVar5 < *(uint *)(unaff_x19 + 0x18)) {
          *(undefined8 *)(unaff_x19 + (long)(int)uVar5 * 8 + 0x20) = in_stack_00000008;
          return;
        }
        goto LAB_04a11794;
      }
      if ((*(uint *)(unaff_x19 + 0x18) <= uVar5) ||
         (*(uint *)(unaff_x19 + 0x18) <= unaff_w28 + uVar1)) goto LAB_04a11794;
      *(undefined8 *)(unaff_x19 + (long)(int)(unaff_w28 + uVar1) * 8 + 0x20) = *puVar3;
      if (unaff_w29 < (int)unaff_w23) goto LAB_04a1175c;
      unaff_w25 = unaff_w23 * 2;
      uVar1 = unaff_w23;
    } while (unaff_w24 <= (int)unaff_w25);
    in_w10 = *(uint *)(unaff_x19 + 0x18);
    in_w8 = unaff_w25 + in_stack_00000000._4_4_;
    in_w9 = in_w8 - 1;
    in_CY = in_w10 <= in_w9;
  }
LAB_04a11794:
                    /* WARNING: Subroutine does not return */
  FUN_031f2398();
}


