/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Qpl.Annotation>$$op_Implicit
ENTRY_POINT: 04a1c338
PROGRAM: vandalizer-libil2cpp.so
SCORE: 77
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Qpl_Annotation>__op_Implicit
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  ulong uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  long unaff_x19;
  long unaff_x20;
  int unaff_w21;
  long unaff_x22;
  ulong unaff_x25;
  uint uVar5;
  ulong uVar6;
  undefined4 *puVar7;
  
  uVar6 = unaff_x25;
                    /* try { // try from 04a1c348 to 04b1c35f has its CatchHandler @ 04a1c3d8 */
  while (uVar1 = uVar6 + 1, (uint)uVar1 < (uint)param_1) {
    uVar2 = *(undefined4 *)(unaff_x22 + uVar1 * 4 + 0x20);
    if ((long)unaff_x25 <= (long)uVar6) {
      do {
        uVar5 = (uint)uVar6;
                    /* try { // try from 04a1c360 to 04b1c3c7 has its CatchHandler @ 04a1c264 */
        if ((uint)param_1 <= uVar5) goto LAB_04a1c408;
        puVar7 = (undefined4 *)(unaff_x22 + (long)(int)uVar5 * 4 + 0x20);
        uVar3 = *puVar7;
        if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_031f2390();
        }
        if ((*(byte *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
          FUN_0322bef4();
        }
        iVar4 = (**(code **)(unaff_x20 + 0x18))
                          (*(undefined8 *)(unaff_x20 + 0x40),uVar2,uVar3,
                           *(undefined8 *)(unaff_x20 + 0x28));
        param_1 = *(undefined8 *)(unaff_x22 + 0x18);
        if (-1 < iVar4) break;
        if (((uint)param_1 <= uVar5) || ((uint)param_1 <= uVar5 + 1)) goto LAB_04a1c408;
        uVar6 = (ulong)(uVar5 - 1);
        *(undefined4 *)(unaff_x22 + (long)(int)(uVar5 + 1) * 4 + 0x20) = *puVar7;
      } while (unaff_w21 <= (int)(uVar5 - 1));
    }
    uVar5 = (int)uVar6 + 1;
    if ((uint)param_1 <= uVar5) break;
    *(undefined4 *)(unaff_x22 + (long)(int)uVar5 * 4 + 0x20) = uVar2;
    uVar6 = uVar1;
    if (uVar1 == (long)param_4) {
      return;
    }
  }
LAB_04a1c408:
                    /* WARNING: Subroutine does not return */
  FUN_031f2398();
}


