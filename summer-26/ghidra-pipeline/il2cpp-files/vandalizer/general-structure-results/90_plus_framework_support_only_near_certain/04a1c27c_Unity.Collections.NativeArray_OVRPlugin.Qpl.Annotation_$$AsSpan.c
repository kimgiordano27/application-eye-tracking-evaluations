/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Qpl.Annotation>$$AsSpan
ENTRY_POINT: 04a1c27c
PROGRAM: vandalizer-libil2cpp.so
SCORE: 97
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_8;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_4
*/


void Unity_Collections_NativeArray<OVRPlugin_Qpl_Annotation>__AsSpan
               (code *param_1,undefined8 param_2,ulong param_3,undefined8 param_4,undefined8 param_5
               )

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  undefined4 *unaff_x22;
  uint unaff_w23;
  int unaff_w24;
  uint unaff_w25;
  uint uVar6;
  undefined4 unaff_w26;
  uint unaff_w27;
  int unaff_w28;
  int unaff_w29;
  int iStack0000000000000008;
  uint uStack000000000000000c;
  
  while( true ) {
    uVar6 = unaff_w25;
    iVar5 = (*param_1)(param_2,param_3,unaff_w26,param_5);
    uVar4 = (uint)*(undefined8 *)(unaff_x19 + 0x18);
    if (-1 < iVar5) break;
    if ((uVar4 <= unaff_w27) || (uVar4 <= unaff_w28 + unaff_w23)) goto LAB_04a1c2f4;
                    /* try { // try from 04a1c2b0 to 04b1c32f has its CatchHandler @ 04a1c330 */
    *(undefined4 *)(unaff_x19 + (long)(int)(unaff_w28 + unaff_w23) * 4 + 0x20) = *unaff_x22;
    if (unaff_w29 < (int)uVar6)
    goto Unity_Collections_NativeArray<OVRPlugin_Qpl_Annotation>__AsReadOnlySpan;
    unaff_w25 = uVar6 * 2;
    if ((int)unaff_w25 < unaff_w24) {
      uVar1 = unaff_w25 + iStack0000000000000008;
      if ((uVar4 <= uVar1 - 1) || (uVar4 <= uVar1)) goto LAB_04a1c2f4;
      if (unaff_x21 == 0) {
LAB_04a1c2f8:
                    /* WARNING: Subroutine does not return */
        FUN_031f2390();
      }
      uVar2 = *(undefined4 *)(unaff_x19 + (long)(int)(uVar1 - 1) * 4 + 0x20);
      uVar3 = *(undefined4 *)(unaff_x19 + (long)(int)uVar1 * 4 + 0x20);
      if ((*(byte *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
        FUN_0322bef4();
      }
      uVar4 = (**(code **)(unaff_x21 + 0x18))
                        (*(undefined8 *)(unaff_x21 + 0x40),uVar2,uVar3,
                         *(undefined8 *)(unaff_x21 + 0x28));
      unaff_w25 = unaff_w25 | uVar4 >> 0x1f;
      unaff_w27 = unaff_w28 + unaff_w25;
      if (*(uint *)(unaff_x19 + 0x18) <= unaff_w27) goto LAB_04a1c2f4;
    }
    else {
      unaff_w27 = unaff_w28 + unaff_w25;
      if (uVar4 <= unaff_w27) goto LAB_04a1c2f4;
      if (unaff_x21 == 0) goto LAB_04a1c2f8;
    }
    unaff_x22 = (undefined4 *)(unaff_x19 + (long)(int)unaff_w27 * 4 + 0x20);
    unaff_w26 = *unaff_x22;
    if ((*(byte *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
      FUN_0322bef4();
    }
    param_1 = *(code **)(unaff_x21 + 0x18);
    param_2 = *(undefined8 *)(unaff_x21 + 0x40);
    param_5 = *(undefined8 *)(unaff_x21 + 0x28);
    param_3 = (ulong)uStack000000000000000c;
    unaff_w23 = uVar6;
  }
  unaff_w27 = unaff_w28 + unaff_w23;
Unity_Collections_NativeArray<OVRPlugin_Qpl_Annotation>__AsReadOnlySpan:
  if (unaff_w27 < uVar4) {
    *(uint *)(unaff_x19 + (long)(int)unaff_w27 * 4 + 0x20) = uStack000000000000000c;
    return;
  }
LAB_04a1c2f4:
                    /* WARNING: Subroutine does not return */
  FUN_031f2398();
}


