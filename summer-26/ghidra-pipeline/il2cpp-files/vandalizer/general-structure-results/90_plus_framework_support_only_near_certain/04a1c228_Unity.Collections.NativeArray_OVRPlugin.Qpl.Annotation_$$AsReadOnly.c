/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Qpl.Annotation>$$AsReadOnly
ENTRY_POINT: 04a1c228
PROGRAM: vandalizer-libil2cpp.so
SCORE: 97
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_8;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_4
*/


void Unity_Collections_NativeArray<OVRPlugin_Qpl_Annotation>__AsReadOnly
               (code *param_1,undefined8 param_2,ulong param_3,ulong param_4,undefined8 param_5)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  undefined4 *puVar5;
  uint unaff_w23;
  uint uVar6;
  int unaff_w24;
  uint unaff_w25;
  int unaff_w28;
  int unaff_w29;
  int iStack0000000000000008;
  undefined4 uStack000000000000000c;
  
code_r0x04a1c228:
  uVar2 = (*param_1)(param_2,param_3,param_4,param_5);
  unaff_w25 = unaff_w25 | uVar2 >> 0x1f;
  uVar2 = unaff_w28 + unaff_w25;
  uVar6 = unaff_w23;
  if (uVar2 < *(uint *)(unaff_x19 + 0x18)) {
    do {
      unaff_w23 = unaff_w25;
      puVar5 = (undefined4 *)(unaff_x19 + (long)(int)uVar2 * 4 + 0x20);
      uVar1 = *puVar5;
                    /* try { // try from 04a1c264 to 04b1c2af has its CatchHandler @ 04a1c264
                       catch() { ... } // from try @ 04a1c264 with catch @ 04a1c264
                       catch() { ... } // from try @ 04a1c330 with catch @ 04a1c264
                       catch() { ... } // from try @ 04a1c360 with catch @ 04a1c264
                       catch() { ... } // from try @ 04a1c3e0 with catch @ 04a1c264 */
      if ((*(byte *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
        FUN_0322bef4();
      }
      iVar3 = (**(code **)(unaff_x21 + 0x18))
                        (*(undefined8 *)(unaff_x21 + 0x40),uStack000000000000000c,uVar1,
                         *(undefined8 *)(unaff_x21 + 0x28));
      uVar4 = (uint)*(undefined8 *)(unaff_x19 + 0x18);
      if (-1 < iVar3) {
        uVar2 = unaff_w28 + uVar6;
Unity_Collections_NativeArray<OVRPlugin_Qpl_Annotation>__AsReadOnlySpan:
        if (uVar2 < uVar4) {
          *(undefined4 *)(unaff_x19 + (long)(int)uVar2 * 4 + 0x20) = uStack000000000000000c;
          return;
        }
        break;
      }
      if ((uVar4 <= uVar2) || (uVar4 <= unaff_w28 + uVar6)) break;
      *(undefined4 *)(unaff_x19 + (long)(int)(unaff_w28 + uVar6) * 4 + 0x20) = *puVar5;
      if (unaff_w29 < (int)unaff_w23)
      goto Unity_Collections_NativeArray<OVRPlugin_Qpl_Annotation>__AsReadOnlySpan;
      unaff_w25 = unaff_w23 * 2;
      if ((int)unaff_w25 < unaff_w24) goto code_r0x04a1c1d4;
      uVar2 = unaff_w28 + unaff_w25;
      if (uVar4 <= uVar2) break;
      uVar6 = unaff_w23;
      if (unaff_x21 == 0) goto LAB_04a1c2f8;
    } while( true );
  }
LAB_04a1c2f4:
                    /* WARNING: Subroutine does not return */
  FUN_031f2398();
code_r0x04a1c1d4:
  uVar2 = unaff_w25 + iStack0000000000000008;
  if ((uVar4 <= uVar2 - 1) || (uVar4 <= uVar2)) goto LAB_04a1c2f4;
  if (unaff_x21 == 0) {
LAB_04a1c2f8:
                    /* WARNING: Subroutine does not return */
    FUN_031f2390();
  }
  uVar6 = *(uint *)(unaff_x19 + (long)(int)(uVar2 - 1) * 4 + 0x20);
  uVar2 = *(uint *)(unaff_x19 + (long)(int)uVar2 * 4 + 0x20);
  if ((*(byte *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
    FUN_0322bef4();
  }
  param_1 = *(code **)(unaff_x21 + 0x18);
  param_2 = *(undefined8 *)(unaff_x21 + 0x40);
  param_5 = *(undefined8 *)(unaff_x21 + 0x28);
  param_3 = (ulong)uVar6;
  param_4 = (ulong)uVar2;
  goto code_r0x04a1c228;
}


