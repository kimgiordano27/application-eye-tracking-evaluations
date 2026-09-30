/*
FUNCTION_NAME: Meta.XR.EnvironmentRaycastManager.EnvironmentRaycastProviderDepthManager$$Meta.XR.IEnvironmentRaycastProvider.SetEnabled
ENTRY_POINT: 04dc5cc0
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;ray_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;ray_or_cast_sink_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Meta_XR_EnvironmentRaycastManager_EnvironmentRaycastProviderDepthManager__Meta_XR_IEnvironmentRaycastProvider_SetEnabled
               (long param_1,void *param_2,void *param_3,size_t param_4)

{
  ushort uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long unaff_x21;
  code *pcVar5;
  long unaff_x22;
  
  memcpy(param_2,param_3,param_4);
  lVar3 = *(long *)(unaff_x21 + 0x20);
  uVar1 = *(ushort *)(lVar3 + 0x135);
  lVar4 = lVar3;
  if ((uVar1 & 1) == 0) {
    lVar3 = FUN_02f41e9c(lVar3);
    uVar1 = *(ushort *)(*(long *)(unaff_x21 + 0x20) + 0x135);
    lVar4 = *(long *)(unaff_x21 + 0x20);
  }
  pcVar5 = (code *)**(undefined8 **)(*(long *)(lVar3 + 0xc0) + 0x270);
  memcpy(&stack0x00000008,&stack0x00001008,0x1000);
  if ((uVar1 & 1) == 0) {
    FUN_02f41e9c(lVar4);
  }
  iVar2 = (*pcVar5)();
  if (*(long *)(unaff_x22 + 0x28) != param_1) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar2 == 0);
  }
  return;
}


