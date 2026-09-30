/*
FUNCTION_NAME: FUN_0391dc44
ENTRY_POINT: 0391dc44
PROGRAM: gunraiders-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_21;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_14;frame_or_lifecycle_behavior
*/


void FUN_0391dc44(long param_1,long param_2)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long local_38;
  
  if ((DAT_04539980 & 1) == 0) {
    FUN_01c5d288(Method_TMPro_SetPropertyUtility_SetClass<TMP_InputField_SubmitEvent>__);
    FUN_01c5d288(Method_TMPro_SetPropertyUtility_SetClass<TMP_InputField_TextSelectionEvent>__);
    FUN_01c5d288(
                Method_UnityEngine_Experimental_Rendering_RenderGraphModule_RenderGraph_AddRenderPass<RenderObjectsPass_PassData>__
                );
    FUN_01c5d288(Method_TMPro_SetPropertyUtility_SetClass<TMP_InputField_TouchScreenKeyboardEvent>__
                );
    FUN_01c5d288(Method_UnityEngine_Rendering_Universal_RenderingLayerUtils_GetBits__);
    FUN_01c5d288(Method_UnityEngine_Rendering_Universal_RenderingLayerUtils_GetFormat__);
    FUN_01c5d288(Method_Oculus_Platform_Request_HandleMessage__);
    FUN_01c5d288(Method_UnityEngine_ResourceManagement_ResourceManager_OnInstanceOperationDestroy__)
    ;
    FUN_01c5d288(
                Method_UnityEngine_Experimental_Rendering_RenderGraphModule_RenderGraph_UpdateResourceAllocationAndSynchronization__
                );
    FUN_01c5d288(Method_System_Net_Cache_RequestCacheProtocol__ctor__);
    FUN_01c5d288(Method_System_Net_Cache_RequestCacheValidator_CreateValidator__);
    FUN_01c5d288(Method_System_Net_Configuration_RequestCachingSection__ctor__);
    FUN_01c5d288(Method_System_Net_Configuration_RequestCachingSection_DeserializeElement__);
    FUN_01c5d288(Method_System_Net_Configuration_RequestCachingSection_get_DefaultPolicyLevel__);
    DAT_04539980 = 1;
  }
  puVar3 = Method_System_Net_Cache_RequestCacheProtocol__ctor__;
  puVar2 = 
  Method_UnityEngine_Experimental_Rendering_RenderGraphModule_RenderGraph_UpdateResourceAllocationAndSynchronization__
  ;
  local_38 = 0;
  if (*(long *)(param_1 + 0x88) == 0) goto LAB_0391e150;
  lVar6 = FUN_039dc20c(*(long *)(param_1 + 0x88),
                       *(undefined8 *)
                        Method_UnityEngine_Experimental_Rendering_RenderGraphModule_RenderGraph_UpdateResourceAllocationAndSynchronization__
                       ,0);
  if (lVar6 == 0) {
    bVar4 = false;
  }
  else {
    iVar5 = FUN_03157278(lVar6,*(undefined8 *)puVar3,5,0);
    bVar4 = iVar5 != -1;
  }
  if (*(long *)(param_1 + 0x88) == 0) goto LAB_0391e150;
  uVar7 = FUN_039dc20c(*(long *)(param_1 + 0x88),
                       *(undefined8 *)
                        Method_System_Net_Cache_RequestCacheValidator_CreateValidator__,0);
  if (((bVar4) || (uVar8 = FUN_031532a8(uVar7,0), (uVar8 & 1) != 0)) ||
     (uVar8 = FUN_032d10ec(uVar7,&local_38,0), (uVar8 & 1) == 0)) {
    local_38 = 0x7fffffffffffffff;
  }
  uVar8 = FUN_0391dbb0(param_1);
  if ((uVar8 & 1) == 0) {
LAB_0391ddf0:
    bVar4 = false;
  }
  else {
    if (*(long *)(param_1 + 0x88) == 0) goto LAB_0391e150;
    lVar6 = FUN_039dc20c(*(long *)(param_1 + 0x88),*(undefined8 *)puVar2,0);
    if (lVar6 == 0) goto LAB_0391ddf0;
    iVar5 = FUN_03157278(lVar6,*(undefined8 *)puVar3,5,0);
    bVar4 = iVar5 != -1;
  }
  puVar2 = 
  Method_UnityEngine_Experimental_Rendering_RenderGraphModule_RenderGraph_AddRenderPass<RenderObjectsPass_PassData>__
  ;
  *(bool *)(param_1 + 0xa9) = bVar4;
  uVar7 = *(undefined8 *)(param_1 + 0xa0);
  lVar6 = *(long *)puVar2;
  if (*(int *)(lVar6 + 0xe0) == 0) {
    thunk_FUN_01c1d1e8();
    lVar6 = *(long *)puVar2;
  }
  uVar8 = FUN_032f0a68(uVar7,*(undefined8 *)(*(long *)(lVar6 + 0xb8) + 0x10),0);
  if ((uVar8 & 1) != 0) {
    if (*(long *)(param_1 + 0x80) == 0) goto LAB_0391e150;
    if (*(char *)(*(long *)(param_1 + 0x80) + 0x98) != '\0') {
      lVar9 = *(long *)(param_1 + 0x88);
      *(undefined1 *)(param_1 + 0xa8) = 1;
      lVar6 = FUN_03914d08(param_1,0);
      if ((lVar6 == 0) || (lVar9 == 0)) goto LAB_0391e150;
      puVar1 = (undefined8 *)
               Method_System_Net_Configuration_RequestCachingSection_DeserializeElement__;
      if (*(char *)(lVar6 + 0x30) != '\0') {
        puVar1 = (undefined8 *)
                 Method_System_Net_Configuration_RequestCachingSection_get_DefaultPolicyLevel__;
      }
      lVar6 = FUN_039dc20c(lVar9,*puVar1,0);
      if (lVar6 != 0) {
        lVar6 = FUN_03156b24(lVar6,0);
        if (lVar6 == 0) goto LAB_0391e150;
        iVar5 = FUN_03157278(lVar6,*(undefined8 *)
                                    Method_System_Net_Configuration_RequestCachingSection__ctor__,4,
                             0);
        *(bool *)(param_1 + 0xa8) = iVar5 != -1;
        iVar5 = FUN_03157278(lVar6,*(undefined8 *)
                                    Method_UnityEngine_Rendering_Universal_RenderingLayerUtils_GetFormat__
                             ,4,0);
        if (iVar5 != -1) {
          *(undefined1 *)(param_1 + 0xa8) = 0;
        }
      }
      if ((*(char *)(param_1 + 0xa9) == '\0') && (local_38 == 0x7fffffffffffffff)) {
        *(undefined1 *)(param_1 + 0xa8) = 0;
      }
    }
  }
  puVar2 = Method_TMPro_SetPropertyUtility_SetClass<TMP_InputField_SubmitEvent>__;
  uVar8 = FUN_0391dbb0(param_1);
  if ((uVar8 & 1) == 0) {
LAB_0391df80:
    *(undefined1 *)(param_1 + 0x61) = 1;
    uVar10 = *(undefined8 *)(param_1 + 0x50);
    uVar7 = thunk_FUN_01c496e0(*(undefined8 *)puVar2);
    FUN_03a10f1c(uVar7,uVar10,0,param_2,0);
    *(undefined8 *)(param_1 + 0x58) = uVar7;
  }
  else {
    if (*(char *)(param_1 + 0xa9) == '\0') {
      if (param_2 == 0) goto LAB_0391e150;
      if (local_38 <= *(int *)(param_2 + 0x1c)) goto LAB_0391df80;
    }
    else if (param_2 == 0) goto LAB_0391e150;
    lVar6 = *(long *)(param_1 + 0x80);
    if (*(int *)(param_2 + 0x1c) < 1) {
      if (lVar6 == 0) goto LAB_0391e150;
      uVar7 = *(undefined8 *)(lVar6 + 0x90);
    }
    else {
      if (lVar6 == 0) goto LAB_0391e150;
      uVar10 = *(undefined8 *)(param_1 + 0x50);
      uVar11 = *(undefined8 *)(lVar6 + 0x90);
      uVar7 = thunk_FUN_01c496e0(*(undefined8 *)puVar2);
      FUN_03a10f1c(uVar7,uVar10,uVar11,param_2,0);
    }
  }
  lVar6 = local_38;
  if (*(char *)(param_1 + 0xa9) == '\0') {
    if (*(char *)(param_1 + 0x61) == '\0') {
      uVar10 = *(undefined8 *)(param_1 + 0x50);
      if (local_38 == 0x7fffffffffffffff) {
        uVar11 = thunk_FUN_01c496e0(*(undefined8 *)puVar2);
        FUN_03a10f1c(uVar11,uVar10,uVar7,0,0);
      }
      else {
        uVar11 = thunk_FUN_01c496e0(*(undefined8 *)
                                     Method_TMPro_SetPropertyUtility_SetClass<TMP_InputField_TextSelectionEvent>__
                                   );
        FUN_03904f40(uVar11,uVar10,uVar7,lVar6,0);
      }
      goto LAB_0391dff4;
    }
  }
  else {
    uVar10 = *(undefined8 *)(param_1 + 0x50);
    uVar12 = *(undefined8 *)(param_1 + 0x88);
    uVar11 = thunk_FUN_01c496e0(*(undefined8 *)
                                 Method_TMPro_SetPropertyUtility_SetClass<TMP_InputField_TouchScreenKeyboardEvent>__
                               );
    FUN_0390ced8(uVar11,uVar10,uVar7,uVar12,0);
LAB_0391dff4:
    *(undefined8 *)(param_1 + 0x58) = uVar11;
  }
  puVar2 = Method_UnityEngine_Rendering_Universal_RenderingLayerUtils_GetBits__;
  if (*(long *)(param_1 + 0x88) == 0) goto LAB_0391e150;
  uVar7 = FUN_039dc20c(*(long *)(param_1 + 0x88),
                       *(undefined8 *)
                        Method_UnityEngine_ResourceManagement_ResourceManager_OnInstanceOperationDestroy__
                       ,0);
  uVar8 = thunk_FUN_03152714(uVar7,*(undefined8 *)puVar2,0);
  if ((uVar8 & 1) == 0) {
LAB_0391e04c:
    uVar8 = thunk_FUN_03152714(uVar7,*(undefined8 *)Method_Oculus_Platform_Request_HandleMessage__,0
                              );
    if ((uVar8 & 1) != 0) {
      if (*(long *)(param_1 + 0x40) == 0) goto LAB_0391e150;
      if ((*(byte *)(*(long *)(param_1 + 0x40) + 0x134) >> 1 & 1) != 0) {
        uVar7 = *(undefined8 *)(param_1 + 0x50);
        uVar10 = *(undefined8 *)(param_1 + 0x58);
        uVar11 = 1;
        goto LAB_0391e08c;
      }
    }
  }
  else {
    if (*(long *)(param_1 + 0x40) == 0) goto LAB_0391e150;
    if ((*(byte *)(*(long *)(param_1 + 0x40) + 0x134) & 1) == 0) goto LAB_0391e04c;
    uVar7 = *(undefined8 *)(param_1 + 0x50);
    uVar10 = *(undefined8 *)(param_1 + 0x58);
    uVar11 = 0;
LAB_0391e08c:
    uVar7 = FUN_03901c14(uVar7,uVar10,uVar11,0);
    *(undefined8 *)(param_1 + 0x58) = uVar7;
    if (*(long *)(param_1 + 0x88) == 0) goto LAB_0391e150;
    FUN_039f960c(*(long *)(param_1 + 0x88),0xd,0);
  }
  uVar8 = FUN_0391dbb0(param_1);
  if ((uVar8 & 1) == 0) {
    *(undefined1 *)(param_1 + 0x60) = 1;
    if (*(long *)(param_1 + 0x50) == 0) {
LAB_0391e150:
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4a4();
    }
    FUN_03917980(*(long *)(param_1 + 0x50),1,0);
  }
  return;
}


