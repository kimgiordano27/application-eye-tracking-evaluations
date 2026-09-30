/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_CopyTo<OVRPlugin.SpaceQueryResult>
ENTRY_POINT: 0382ad0c
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 73
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array__InternalArray__ICollection_CopyTo<OVRPlugin_SpaceQueryResult>(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long unaff_x21;
  
  puVar1 = PTR_DAT_079fb3f0;
  if ((*(byte *)(unaff_x21 + 0xe4b) & 1) == 0) {
    FUN_03642964(PTR_DAT_079fb3f0);
    FUN_03642964(PTR_DAT_079fb400);
    *(undefined1 *)(unaff_x21 + 0xe4b) = 1;
  }
  puVar2 = PTR_DAT_079fb400;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_036a1978();
  }
  uVar3 = FUN_0382adc0();
  FUN_0382a938(param_1,uVar3,1);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_036a1978();
  }
  uVar4 = FUN_0382ae24();
  if ((uVar4 & 1) == 0) {
    return;
  }
  thunk_FUN_036aa1c8(PTR_DAT_079fb400);
  FUN_03156be4();
  uVar3 = FUN_0382aeac();
  uVar5 = thunk_FUN_036aa1c8(PTR_DAT_079fb600);
                    /* WARNING: Subroutine does not return */
  FUN_03642acc(uVar3,uVar5);
}


