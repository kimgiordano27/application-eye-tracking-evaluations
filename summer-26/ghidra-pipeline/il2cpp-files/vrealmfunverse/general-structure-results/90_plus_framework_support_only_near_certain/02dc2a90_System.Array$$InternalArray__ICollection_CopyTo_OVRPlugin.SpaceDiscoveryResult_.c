/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_CopyTo<OVRPlugin.SpaceDiscoveryResult>
ENTRY_POINT: 02dc2a90
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 97
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector;ray_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;ray_or_cast_sink_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array__InternalArray__ICollection_CopyTo<OVRPlugin_SpaceDiscoveryResult>(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x19;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000010;
  undefined4 in_stack_00000018;
  undefined4 in_stack_00000028;
  undefined4 uStack000000000000002c;
  
  puVar1 = PTR_DAT_06312310;
  if (*(char *)(unaff_x19 + 0x4c) != '\0') {
    uStack000000000000002c = *(undefined4 *)(unaff_x19 + 0x50);
    uVar2 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                      (*(undefined8 *)(PTR_DAT_06312310 + 0x78),&stack0x0000002c);
    in_stack_00000028 = *(undefined4 *)(unaff_x19 + 0x54);
    uVar3 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                      (*(undefined8 *)(puVar1 + 0x78),&stack0x00000028);
    in_stack_00000010 = in_stack_00000000;
    uVar4 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                      (*(undefined8 *)PTR_DAT_06312438,&stack0x00000010);
    uVar2 = FUN_04c0af6c(*(undefined8 *)PTR_DAT_0631b190,uVar2,uVar3,uVar4,0);
    if (*(int *)(*(long *)PTR_DAT_06312d90 + 0xe4) == 0) {
      thunk_FUN_02b9ad44(*(long *)PTR_DAT_06312d90);
    }
    FUN_05c44914(uVar2,0);
  }
  return;
}


