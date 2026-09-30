/*
FUNCTION_NAME: PlayFab.PlayFabExperimentationAPI$$UpdateExclusionGroup
ENTRY_POINT: 051c0974
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_4;ray_or_cast_sink_hits_1;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


undefined8 PlayFab_PlayFabExperimentationAPI__UpdateExclusionGroup(void)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long unaff_x19;
  undefined8 *unaff_x20;
  long lVar8;
  long *plVar9;
  long in_stack_00000018;
  undefined8 *in_stack_00000020;
  long in_stack_00000028;
  undefined8 *in_stack_00000030;
  int in_stack_00000040;
  
  uVar2 = thunk_FUN_02db0278();
  iVar1 = in_stack_00000040;
  if ((uVar2 & 1) == 0) {
    puVar7 = (undefined8 *)__cxa_allocate_exception(8);
    *puVar7 = *unaff_x20;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar7,&PTR_PTR_06204328,0);
  }
  plVar9 = (long *)*unaff_x20;
  *(long **)(&stack0x00000038 + (long)in_stack_00000040 * 8) = plVar9;
  in_stack_00000040 = in_stack_00000040 + 1;
  __cxa_end_catch();
  lVar8 = *(long *)(unaff_x19 + 0x48);
  uVar3 = thunk_FUN_02db45e8(PTR_DAT_06646310);
  lVar4 = FUN_02d4dd2c(uVar3,6);
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d4dee8();
  }
  uVar3 = thunk_FUN_02db45e8(PlayFab_ClientModels_UnlockContainerInstanceRequest_var);
  FUN_0291b630(lVar4,0,uVar3);
  thunk_FUN_02db45e8(TMPro_TMP_CharacterInfo_var);
  uVar3 = FUN_05038b8c();
  FUN_0291b630(lVar4,1,uVar3);
  uVar3 = thunk_FUN_02db45e8(PlayFab_ClientModels_UnlockContainerItemRequest_var);
  FUN_0291b630(lVar4,2,uVar3);
  uVar3 = *(undefined8 *)(unaff_x19 + 0x30);
  lVar5 = thunk_FUN_02db45e8(UnityEngine_SphereCollider_var);
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  uVar3 = FUN_051dc450(uVar3,0,0);
  FUN_0291b630(lVar4,3,uVar3);
  uVar3 = thunk_FUN_02db45e8(PlayFab_ClientModels_UnlockContainerItemResult_var);
  FUN_0291b630(lVar4,4,uVar3);
  if (plVar9 == (long *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = (**(code **)(*plVar9 + 0x168))(plVar9,*(undefined8 *)(*plVar9 + 0x170));
  }
  FUN_0291b630(lVar4,5,uVar3);
  uVar3 = FUN_04e80ce4(lVar4,0);
  if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d4dee8();
  }
  uVar6 = thunk_FUN_02db45e8(PlayFab_ProfilesModels_SetGlobalPolicyResponse_var);
  FUN_02cb93f8(0,uVar6,lVar8,1,uVar3);
  in_stack_00000040 = iVar1;
  RootMotion_FinalIK_GrounderQuadruped_Foot___ctor(*in_stack_00000020,0);
  if (in_stack_00000018 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d4dee0();
  }
  RootMotion_FinalIK_GrounderQuadruped_Foot___ctor(*in_stack_00000030,0);
  if (in_stack_00000028 == 0) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d4dee0(in_stack_00000028);
}


