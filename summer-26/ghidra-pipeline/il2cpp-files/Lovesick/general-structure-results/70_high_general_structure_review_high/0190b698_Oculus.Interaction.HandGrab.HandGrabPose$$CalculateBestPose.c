/*
FUNCTION_NAME: Oculus.Interaction.HandGrab.HandGrabPose$$CalculateBestPose
ENTRY_POINT: 0190b698
PROGRAM: Lovesick-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_3;telemetry_or_network_hits_4
*/


void Oculus_Interaction_HandGrab_HandGrabPose__CalculateBestPose(void)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  undefined8 *puVar4;
  long unaff_x19;
  long unaff_x20;
  long *plVar5;
  
  thunk_FUN_00d48444();
  thunk_FUN_00d48444(UnityEngine_UI_InputField_var);
  thunk_FUN_00d48444(
                    UnityEngine_XR_Interaction_Toolkit_Utilities_BurstMathUtility_ProjectOnPlane_00000933_PostfixBurstDelegate_var
                    );
  thunk_FUN_00d48444(PTR_DAT_033f2898);
  thunk_FUN_00d48444(PTR_DAT_033eef28);
  thunk_FUN_00d48444(Method_Newtonsoft_Json_Utilities_CollectionUtils_AddRangeDistinct<JToken>__);
  thunk_FUN_00d48444(
                    Method_DG_Tweening_DOTweenModuleUI_<>c__DisplayClass39_0_<DOBlendableColor>b__1__
                    );
  *(undefined1 *)(unaff_x20 + 0xfb1) = 1;
  plVar2 = *(long **)(unaff_x19 + 0x50);
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x178))(plVar2,*(undefined8 *)(*plVar2 + 0x180));
    *(undefined8 *)(unaff_x19 + 0x50) = 0;
  }
  puVar1 = Method_DG_Tweening_DOTweenModuleUI_<>c__DisplayClass39_0_<DOBlendableColor>b__1__;
  plVar2 = *(long **)(unaff_x19 + 0x58);
  if ((plVar2 == (long *)0x0) ||
     ((((lVar3 = *plVar2, puVar4 = (undefined8 *)PTR_DAT_033eef28, plVar5 = (long *)PTR_DAT_033f6a60
        , lVar3 != *(long *)PTR_DAT_033f6a60 &&
        (puVar4 = (undefined8 *)
                  UnityEngine_XR_Interaction_Toolkit_Utilities_BurstMathUtility_ProjectOnPlane_00000933_PostfixBurstDelegate_var
        , plVar5 = (long *)
                   Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<VRequestResponse<Dictionary<string,_string>>>_Create__
        , lVar3 != *(long *)
                    Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<VRequestResponse<Dictionary<string,_string>>>_Create__
        )) && (puVar4 = (undefined8 *)PTR_DAT_033f2898,
              plVar5 = (long *)
                       Field_<PrivateImplementationDetails>_7A5DCFD7518F8A0A3FA422FA014FF84FE08070112345B17E00C0FB0AFC6D7461
              , lVar3 != *(long *)
                          Field_<PrivateImplementationDetails>_7A5DCFD7518F8A0A3FA422FA014FF84FE08070112345B17E00C0FB0AFC6D7461
              )) &&
      (puVar4 = (undefined8 *)
                Method_Newtonsoft_Json_Utilities_CollectionUtils_AddRangeDistinct<JToken>__,
      plVar5 = (long *)UnityEngine_UI_InputField_var,
      lVar3 != *(long *)UnityEngine_UI_InputField_var)))) {
    if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    FUN_02661754(*(undefined8 *)puVar1,0);
    return;
  }
  lVar3 = thunk_FUN_00d62348(*puVar4);
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  if (*plVar2 != *plVar5) {
                    /* WARNING: Subroutine does not return */
    FUN_00da544c(plVar2);
  }
  FUN_017b46ec(lVar3,0);
  *(long *)(lVar3 + 0x10) = unaff_x19;
  *(long **)(lVar3 + 0x18) = plVar2;
  *(long *)(unaff_x19 + 0x50) = lVar3;
  return;
}


