/*
FUNCTION_NAME: FUN_072de688
ENTRY_POINT: 072de688
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void FUN_072de688(long param_1,long *param_2,uint param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if ((DAT_0988fb26 & 1) == 0) {
    FUN_04077588(PTR_DAT_092c4098);
    FUN_04077588(PTR_DAT_092c2888);
    FUN_04077588(PTR_DAT_092c3c50);
    FUN_04077588(PTR_DAT_092c3c48);
    DAT_0988fb26 = 1;
  }
  uVar1 = FUN_07316860(param_2,0,0);
  if ((uVar1 & 1) != 0) {
    if (*(long *)(param_1 + 0x30) == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x30) + 0x10);
    }
    uVar3 = *(undefined8 *)PTR_DAT_092c3c48;
    uVar2 = FUN_073168f0(uVar2,0);
    if (param_2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    (**(code **)(*param_2 + 0x1b8))(param_2,uVar3,uVar2,*(undefined8 *)(*param_2 + 0x1c0));
    if (*(long *)(param_1 + 0x30) == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x30) + 0x18);
    }
    uVar3 = *(undefined8 *)PTR_DAT_092c3c50;
    uVar2 = FUN_073168f0(uVar2,0);
    (**(code **)(*param_2 + 0x1b8))(param_2,uVar3,uVar2,*(undefined8 *)(*param_2 + 0x1c0));
  }
  Unity_Collections_NativeArray<OVRPlugin_Qpl_Annotation>__CopyTo
            (param_1,param_2,param_3 & 1,*(undefined8 *)PTR_DAT_092c4098);
  return;
}


