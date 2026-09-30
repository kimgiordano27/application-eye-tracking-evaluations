/*
FUNCTION_NAME: OVRManager$$get_eyeFovPremultipliedAlphaModeEnabled
ENTRY_POINT: 03666768
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__get_eyeFovPremultipliedAlphaModeEnabled(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined8 uVar11;
  long *unaff_x23;
  
  puVar1 = Method_System_Runtime_CompilerServices_StrongBox<object>__ctor__;
  if (*(long *)(param_1 + 8) == 0) {
    if (*(int *)(param_2 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
      param_2 = *unaff_x23;
    }
    uVar11 = **(undefined8 **)(param_2 + 0xb8);
    uVar8 = thunk_FUN_01f117cc(*(undefined8 *)
                                Method_Mono_Globalization_Unicode_MSCompatUnicodeTable_<>c_<BuildTailoringTables>b__17_0__
                              );
    FUN_03a14f80(uVar8,uVar11,
                 *(undefined8 *)
                  Method_UnityEngine_Rendering_Universal_Internal_MainLightShadowCasterPass_<>c_<Render>b__27_0__
                 ,0);
    puVar9 = (undefined8 *)(*(long *)(*unaff_x23 + 0xb8) + 8);
    *puVar9 = uVar8;
    thunk_FUN_01f51358(puVar9,uVar8);
  }
  puVar7 = Method_System_Runtime_InteropServices_Marshal_<>c_<GetCustomMarshalerInstance>b__201_0__;
  puVar6 = Method_Meta_Conduit_Manifest_<>c_<ResolveErrorHandlers>b__30_1__;
  puVar5 = Method_Meta_Conduit_Manifest_<>c_<ResolveErrorHandlers>b__30_0__;
  puVar4 = Method_Meta_Conduit_Manifest_<>c_<ResolveAllActions>b__29_0__;
  puVar3 = 
  Method_UnityEngine_Rendering_Universal_Internal_MainLightShadowCasterPass_<>c_<Render>b__27_1__;
  puVar2 = Method_System_DateTimeParse_ParseExact__;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  uVar8 = FUN_03a13880();
  uVar8 = FUN_03a13644(uVar8,*(undefined8 *)puVar7,*(undefined8 *)puVar2,8,0);
  uVar8 = FUN_03a13644(uVar8,*(undefined8 *)puVar4,*(undefined8 *)puVar3,8,0);
  lVar10 = FUN_03a13644(uVar8,*(undefined8 *)puVar6,*(undefined8 *)puVar5,8,0);
  if (lVar10 != 0) {
    FUN_03412ab4(lVar10,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


