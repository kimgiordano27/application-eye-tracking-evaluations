/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceQueryResult>$$GetSubArray
ENTRY_POINT: 04c3f890
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 94
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_8;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__GetSubArray
               (undefined1 param_1 [16],undefined8 param_2,undefined8 param_3,long param_4)

{
  long *unaff_x19;
  long unaff_x20;
  long unaff_x22;
  float fVar1;
  float fVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  FUN_0373b518(*(undefined8 *)(param_4 + 0xf00));
  *(undefined1 *)(unaff_x22 + 0x7b0) = 1;
  if (unaff_x20 != 0) {
    uVar3 = FUN_03fe0414();
    uVar5 = param_2;
    uVar6 = param_3;
    uVar4 = FUN_03fe0414();
    fVar1 = (float)FUN_03fe028c();
    if ((char)unaff_x19[0x16] == '\0') {
      fVar2 = 1.0;
    }
    else {
      fVar2 = (float)FUN_075b6260(0);
    }
                    /* WARNING: Could not recover jumptable at 0x04c3f968. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*unaff_x19 + 0x5f8))(uVar3,param_2,param_3,uVar4,uVar5,uVar6,fVar1 * fVar2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}


