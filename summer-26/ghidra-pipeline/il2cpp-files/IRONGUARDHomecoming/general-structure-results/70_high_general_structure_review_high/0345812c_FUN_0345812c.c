/*
FUNCTION_NAME: FUN_0345812c
ENTRY_POINT: 0345812c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 88
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior;source_validity_pose_sink_structure
*/


void FUN_0345812c(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  long *plVar5;
  undefined4 *puVar6;
  long lVar7;
  undefined8 uVar8;
  
  if ((DAT_0483291b & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Unity_VisualScripting_SavedVariables_SaveDeclarations__);
    thunk_FUN_01efb3a4(Method_Unity_VisualScripting_ScalarExponentiate_Exponentiate__);
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_UIElements_ObjectPool<VisualElementFocusChangeTarget>__ctor__
                      );
    thunk_FUN_01efb3a4(Method_System_RuntimeType_IsEnumDefined__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__);
    thunk_FUN_01efb3a4(Method_Unity_VisualScripting_ScalarRoot_Root__);
    thunk_FUN_01efb3a4(Method_UnityEngine_SceneManagement_Scene_GetRootGameObjects__);
    thunk_FUN_01efb3a4(Method_Unity_VisualScripting_Formula_GetArgumentIndex__);
    DAT_0483291b = 1;
  }
  puVar1 = Method_Unity_VisualScripting_Formula_GetArgumentIndex__;
  if (param_1 == 0) {
    thunk_FUN_01efb3a4(Method_System_Reflection_RuntimeMethodInfo_GetGenericMethodDefinition__);
    uVar3 = thunk_FUN_01f117cc();
    uVar8 = thunk_FUN_01efb3a4(
                              Method_Phantom_Environment_Scripts_SceneBoundsChecker_CancelBoundsPolling__
                              );
    FUN_03454990(uVar3,uVar8);
    uVar8 = thunk_FUN_01efb3a4(
                              Method_Phantom_Environment_Scripts_SceneBoundsChecker_OnActiveSceneChanged__
                              );
                    /* WARNING: Subroutine does not return */
    FUN_01f08910(uVar3,uVar8);
  }
  uVar3 = FUN_034127bc(param_1,0);
  uVar4 = FUN_0340e600(uVar3,*(undefined8 *)puVar1,0);
  if ((((uVar4 & 1) != 0) &&
      (uVar4 = FUN_0340e600(uVar3,*(undefined8 *)Method_Unity_VisualScripting_ScalarRoot_Root__,0),
      (uVar4 & 1) != 0)) &&
     (uVar4 = FUN_0340e600(uVar3,*(undefined8 *)
                                  Method_UnityEngine_SceneManagement_Scene_GetRootGameObjects__,0),
     (uVar4 & 1) != 0)) {
    uVar3 = thunk_FUN_01efb3a4(
                              Method_Phantom_Environment_Scripts_SceneBoundsChecker_StartBoundsPolling__
                              );
    uVar3 = FUN_03405678(uVar3,param_1,0);
    thunk_FUN_01efb3a4(Method_System_Reflection_RuntimeMethodInfo_GetGenericMethodDefinition__);
    uVar8 = thunk_FUN_01f117cc();
    FUN_03454990(uVar8,uVar3);
    uVar3 = thunk_FUN_01efb3a4(
                              Method_Phantom_Environment_Scripts_SceneBoundsChecker_OnActiveSceneChanged__
                              );
                    /* WARNING: Subroutine does not return */
    FUN_01f08910(uVar8,uVar3);
  }
  puVar1 = Method_UnityEngine_UIElements_ObjectPool<VisualElementFocusChangeTarget>__ctor__;
  uVar8 = *(undefined8 *)Method_Unity_VisualScripting_SavedVariables_SaveDeclarations__;
  if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__ + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  puVar2 = Method_System_RuntimeType_IsEnumDefined__;
  uVar8 = FUN_03579868(uVar8,0);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c(*(long *)puVar1);
  }
  plVar5 = (long *)FUN_0359d4c0(uVar8,uVar3,1,0);
  lVar7 = *(long *)puVar2;
  if (*(int *)(lVar7 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c(lVar7);
  }
  if (plVar5 != (long *)0x0) {
    if (*(long *)(*plVar5 + 0x40) ==
        *(long *)(*(long *)Method_Unity_VisualScripting_ScalarExponentiate_Exponentiate__ + 0x40)) {
      puVar6 = (undefined4 *)thunk_FUN_01f11920();
      *(undefined4 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x1c) = *puVar6;
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01f08cfc(plVar5);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


