/*
FUNCTION_NAME: OVR.OpenVR.IVRChaperoneSetup._GetWorkingSeatedZeroPoseToRawTrackingPose$$BeginInvoke
ENTRY_POINT: 0904cd1c
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


void OVR_OpenVR_IVRChaperoneSetup__GetWorkingSeatedZeroPoseToRawTrackingPose__BeginInvoke
               (long param_1)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x21;
  long *plVar5;
  long unaff_x22;
  
  plVar5 = *(long **)(unaff_x21 + 0x850);
  if ((*(byte *)(unaff_x22 + 0xf67) & 1) == 0) {
    FUN_04947ee4(PTR_DAT_0ac77858);
    FUN_04947ee4(PTR_DAT_0ac77860);
    FUN_04947ee4(PTR_DAT_0ac77850);
    *(undefined1 *)(unaff_x22 + 0xf67) = 1;
  }
  lVar1 = *plVar5;
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_049a583c();
    lVar1 = *plVar5;
  }
  lVar1 = *(long *)(*(long *)(lVar1 + 0xb8) + 8);
  if (lVar1 != 0) {
    uVar2 = FUN_0870d5a0(lVar1,param_1,*(undefined8 *)PTR_DAT_0ac77860);
    if ((uVar2 & 1) != 0) {
      thunk_FUN_049ae08c(PTR_DAT_0ac09cb8);
      uVar3 = thunk_FUN_04983f60();
      uVar4 = thunk_FUN_049ae08c(PTR_DAT_0ac77868);
      FUN_08cc420c(uVar3,uVar4,0);
      uVar4 = thunk_FUN_049ae08c(PTR_DAT_0ac77870);
                    /* WARNING: Subroutine does not return */
      FUN_04948050(uVar3,uVar4);
    }
    if (*(int *)(*plVar5 + 0xe4) == 0) {
      thunk_FUN_049a583c();
    }
    uVar3 = FUN_0904ce40();
    if (param_1 != 0) {
      uVar3 = FUN_0a17d830(param_1,uVar3,0);
      lVar1 = *(long *)(*(long *)(*plVar5 + 0xb8) + 8);
      if (lVar1 != 0) {
        System_Collections_Immutable_DisposableEnumeratorAdapter<KeyValuePair<object,_object>,_ImmutableList_Enumerator<KeyValuePair<object,_object>>>___ctor
                  (lVar1,param_1,uVar3,*(undefined8 *)PTR_DAT_0ac77858);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


