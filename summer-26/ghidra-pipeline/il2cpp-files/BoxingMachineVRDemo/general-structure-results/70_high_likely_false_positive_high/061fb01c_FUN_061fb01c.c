/*
FUNCTION_NAME: FUN_061fb01c
ENTRY_POINT: 061fb01c
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 89
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_6;ui_or_gameplay_sink_hits_2;strong_file_logging_hits_3;telemetry_or_network_hits_2;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_061fb01c(long param_1)

{
  undefined *puVar1;
  long lVar2;
  
  if ((DAT_06b8b3e7 & 1) == 0) {
    FUN_02d6084c(Method_UnityEngine_UIElements_UQueryExtensions_Q<Toggle>__);
    FUN_02d6084c(Method_UnityEngine_UIElements_UQueryExtensions_Query<Button>__);
    FUN_02d6084c(Method_UnityEngine_UIElements_UQueryExtensions_Q__);
    FUN_02d6084c(Method_UnityEngine_VFX_Utility_URPCameraBinder_RequestHistoryAccess__);
    FUN_02d6084c(Method_System_Xml_UTF16Decoder_GetCharCount__);
    FUN_02d6084c(Method_UnityEngine_UIElements_UIR_UIRenderDevice_OnFlushPendingResources__);
    DAT_06b8b3e7 = 1;
  }
  puVar1 = Method_UnityEngine_UIElements_UIR_UIRenderDevice_OnFlushPendingResources__;
  if (*(long *)(param_1 + 0x20) != 0) {
    lVar2 = *(long *)Method_UnityEngine_UIElements_UIR_UIRenderDevice_OnFlushPendingResources__;
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar2 = *(long *)puVar1;
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x28);
    if (lVar2 == 0) goto LAB_061fb170;
    FUN_03375db0(lVar2,*(undefined8 *)(param_1 + 0x20),
                 *(undefined8 *)
                  Method_UnityEngine_VFX_Utility_URPCameraBinder_RequestHistoryAccess__);
    lVar2 = *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x38);
    if (lVar2 == 0) goto LAB_061fb170;
    FUN_03375db0(lVar2,*(undefined8 *)(param_1 + 0x30),
                 *(undefined8 *)Method_UnityEngine_UIElements_UQueryExtensions_Q__);
    lVar2 = *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x40);
    if (lVar2 == 0) goto LAB_061fb170;
    FUN_03375db0(lVar2,*(undefined8 *)(param_1 + 0x38),
                 *(undefined8 *)Method_UnityEngine_UIElements_UQueryExtensions_Q<Toggle>__);
    lVar2 = *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x30);
    if (lVar2 == 0) goto LAB_061fb170;
    FUN_03375db0(lVar2,*(undefined8 *)(param_1 + 0x28),
                 *(undefined8 *)Method_System_Xml_UTF16Decoder_GetCharCount__);
  }
  lVar2 = *(long *)puVar1;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar2 = *(long *)puVar1;
  }
  lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x20);
  if (lVar2 != 0) {
    FUN_03375db0(lVar2,param_1,
                 *(undefined8 *)Method_UnityEngine_UIElements_UQueryExtensions_Query<Button>__);
    return;
  }
LAB_061fb170:
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


