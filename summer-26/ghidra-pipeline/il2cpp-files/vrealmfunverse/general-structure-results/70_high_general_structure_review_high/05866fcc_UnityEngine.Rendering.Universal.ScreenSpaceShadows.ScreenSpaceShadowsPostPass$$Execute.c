/*
FUNCTION_NAME: UnityEngine.Rendering.Universal.ScreenSpaceShadows.ScreenSpaceShadowsPostPass$$Execute
ENTRY_POINT: 05866fcc
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_4;ray_or_cast_sink_hits_1;telemetry_or_network_hits_2
*/


void UnityEngine_Rendering_Universal_ScreenSpaceShadows_ScreenSpaceShadowsPostPass__Execute(void)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  long in_stack_00000038;
  
  FUN_0452ddc0();
  if ((in_stack_00000038 != 0) && (*(long *)(in_stack_00000038 + 0x10) != 0)) {
    FUN_04a7217c();
    lVar2 = in_stack_00000038;
    puVar1 = Method_Unity_Collections_NativeList<InstanceCullerViewStats>__ctor__;
    if ((in_stack_00000038 != 0) && (*(long *)(in_stack_00000038 + 0x10) != 0)) {
      FUN_04a71b00(&stack0x00000020,*(long *)(in_stack_00000038 + 0x10),
                   *(undefined8 *)Method_Unity_Collections_NativeList<InstanceCullerViewStats>_Add__
                  );
      uVar3 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody(*(undefined8 *)puVar1);
      *(undefined8 *)(lVar2 + 0x18) = uVar3;
      thunk_FUN_02bb0e9c((undefined8 *)(lVar2 + 0x18),uVar3);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


