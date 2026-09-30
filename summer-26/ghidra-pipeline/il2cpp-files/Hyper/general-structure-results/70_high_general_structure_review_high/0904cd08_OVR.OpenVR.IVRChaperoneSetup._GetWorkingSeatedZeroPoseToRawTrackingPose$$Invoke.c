/*
FUNCTION_NAME: OVR.OpenVR.IVRChaperoneSetup._GetWorkingSeatedZeroPoseToRawTrackingPose$$Invoke
ENTRY_POINT: 0904cd08
PROGRAM: Hyper-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_1;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure
*/


void OVR_OpenVR_IVRChaperoneSetup__GetWorkingSeatedZeroPoseToRawTrackingPose__Invoke
               (long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar1 = PTR_DAT_0ac77850;
  if ((DAT_0b32ff67 & 1) == 0) {
    FUN_04947ee4(PTR_DAT_0ac77858);
    FUN_04947ee4(PTR_DAT_0ac77860);
    FUN_04947ee4(PTR_DAT_0ac77850);
    DAT_0b32ff67 = 1;
  }
  lVar2 = *(long *)puVar1;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_049a583c();
    lVar2 = *(long *)puVar1;
  }
  lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 8);
  if (lVar2 != 0) {
    uVar3 = FUN_0870d5a0(lVar2,param_1,*(undefined8 *)PTR_DAT_0ac77860);
    if ((uVar3 & 1) != 0) {
      thunk_FUN_049ae08c(PTR_DAT_0ac09cb8);
      uVar4 = thunk_FUN_04983f60();
      uVar5 = thunk_FUN_049ae08c(PTR_DAT_0ac77868);
      FUN_08cc420c(uVar4,uVar5,0);
      uVar5 = thunk_FUN_049ae08c(PTR_DAT_0ac77870);
                    /* WARNING: Subroutine does not return */
      FUN_04948050(uVar4,uVar5);
    }
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_049a583c();
    }
    uVar4 = FUN_0904ce40(param_2);
    if (param_1 != 0) {
      uVar4 = FUN_0a17d830(param_1,uVar4,0);
      lVar2 = *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 8);
      if (lVar2 != 0) {
        System_Collections_Immutable_DisposableEnumeratorAdapter<KeyValuePair<object,_object>,_ImmutableList_Enumerator<KeyValuePair<object,_object>>>___ctor
                  (lVar2,param_1,uVar4,*(undefined8 *)PTR_DAT_0ac77858);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


