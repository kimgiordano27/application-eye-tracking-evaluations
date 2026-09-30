/*
FUNCTION_NAME: FUN_02605e98
ENTRY_POINT: 02605e98
PROGRAM: Lovesick-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ray_interaction;data_collection
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_3;ray_or_cast_sink_hits_2;strong_file_logging_hits_2
*/


void FUN_02605e98(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  undefined8 local_40;
  undefined8 uStack_38;
  
  puVar3 = UnityEngine_Rendering_SupportedRenderingFeatures_TypeInfo;
  if ((DAT_037833a3 & 1) == 0) {
    thunk_FUN_00d48444(STMTools_Links_LinkController_<>c__DisplayClass17_0_TypeInfo);
    thunk_FUN_00d48444(UnityEngine_Rendering_SupportedRenderingFeatures_TypeInfo);
    thunk_FUN_00d48444(PTR_DAT_033ee8d0);
    thunk_FUN_00d48444(
                      Method_UnityEngine_XR_Interaction_Toolkit_Utilities_BaseRegistrationList<IXRInteractor>_get_flushedCount__
                      );
    thunk_FUN_00d48444(Method_UnityEngine_Component_GetComponentInChildren<CollisionSubscriber>__);
    DAT_037833a3 = 1;
  }
  puVar4 = 
  Method_UnityEngine_XR_Interaction_Toolkit_Utilities_BaseRegistrationList<IXRInteractor>_get_flushedCount__
  ;
  lVar6 = *(long *)puVar3;
  local_40 = 0;
  uStack_38 = 0;
  if (*(int *)(lVar6 + 0xe0) == 0) {
    thunk_FUN_00d32864();
    lVar6 = *(long *)puVar3;
  }
  puVar3 = PTR_DAT_033ee8d0;
  uVar1 = *(undefined8 *)(*(long *)(lVar6 + 0xb8) + 0x180);
  uVar2 = *(undefined8 *)(*(long *)(lVar6 + 0xb8) + 0x188);
  if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
    thunk_FUN_00d32864(*(long *)puVar4);
  }
  puVar5 = Method_UnityEngine_Component_GetComponentInChildren<CollisionSubscriber>__;
  puVar4 = STMTools_Links_LinkController_<>c__DisplayClass17_0_TypeInfo;
  lVar6 = FUN_010f7e1c(uVar1,uVar2,*(undefined8 *)puVar3);
  if (lVar6 == 0) {
    uVar8 = UnityEngine_TextCore_Text_TextGenerator__GenerateText(0x164,&local_40);
    uVar2 = uStack_38;
    uVar1 = local_40;
    if ((uVar8 & 1) == 0) {
      FUN_026066c8(param_1,0);
    }
    else {
      lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar4);
      if (lVar6 == 0) goto LAB_02606010;
      FUN_011c181c(lVar6,param_1,*(undefined8 *)puVar5,0);
      FUN_02606bd0(param_1,uVar1,uVar2,lVar6);
    }
  }
  else {
    lVar7 = thunk_FUN_00d62348(*(undefined8 *)puVar4);
    if (lVar7 == 0) {
LAB_02606010:
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    FUN_011c181c(lVar7,param_1,*(undefined8 *)puVar5,0);
    FUN_026069c4(param_1,lVar6,lVar7);
  }
  return;
}


