/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Qpl.Annotation>$$op_Implicit
ENTRY_POINT: 04a1c304
PROGRAM: vandalizer-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Qpl_Annotation>__op_Implicit
               (long param_1,int param_2,int param_3,long param_4,long param_5)

{
  ulong uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 uVar5;
  uint uVar6;
  ulong uVar7;
  undefined4 *puVar8;
  
  if (param_2 < param_3) {
    if (param_1 == 0) {
LAB_04a1c40c:
                    /* WARNING: Subroutine does not return */
      FUN_031f2390();
    }
    uVar5 = *(undefined8 *)(param_1 + 0x18);
                    /* catch(type#1 @ 0718d318) { ... } // from try @ 04a1c2b0 with catch @ 04a1c330
                       try { // try from 04a1c330 to 04b1c347 has its CatchHandler @ 04a1c264 */
    uVar7 = (long)param_2;
    do {
      uVar1 = uVar7 + 1;
      if ((uint)uVar5 <= (uint)uVar1) {
LAB_04a1c408:
                    /* WARNING: Subroutine does not return */
        FUN_031f2398();
      }
      uVar2 = *(undefined4 *)(param_1 + uVar1 * 4 + 0x20);
      if ((long)param_2 <= (long)uVar7) {
        do {
          uVar6 = (uint)uVar7;
          if ((uint)uVar5 <= uVar6) goto LAB_04a1c408;
          puVar8 = (undefined4 *)(param_1 + (long)(int)uVar6 * 4 + 0x20);
          uVar3 = *puVar8;
          if (param_4 == 0) goto LAB_04a1c40c;
          if ((*(byte *)(*(long *)(param_5 + 0x20) + 0x135) & 1) == 0) {
            FUN_0322bef4();
          }
          iVar4 = (**(code **)(param_4 + 0x18))
                            (*(undefined8 *)(param_4 + 0x40),uVar2,uVar3,
                             *(undefined8 *)(param_4 + 0x28));
          uVar5 = *(undefined8 *)(param_1 + 0x18);
          if (-1 < iVar4) break;
          if (((uint)uVar5 <= uVar6) || ((uint)uVar5 <= uVar6 + 1)) goto LAB_04a1c408;
          uVar7 = (ulong)(uVar6 - 1);
          *(undefined4 *)(param_1 + (long)(int)(uVar6 + 1) * 4 + 0x20) = *puVar8;
        } while (param_2 <= (int)(uVar6 - 1));
      }
      uVar6 = (int)uVar7 + 1;
      if ((uint)uVar5 <= uVar6) goto LAB_04a1c408;
      *(undefined4 *)(param_1 + (long)(int)uVar6 * 4 + 0x20) = uVar2;
      uVar7 = uVar1;
    } while (uVar1 != (long)param_3);
  }
  return;
}


