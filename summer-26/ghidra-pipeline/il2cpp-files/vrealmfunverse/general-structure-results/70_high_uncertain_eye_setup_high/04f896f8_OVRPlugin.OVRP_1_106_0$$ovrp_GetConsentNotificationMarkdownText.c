/*
FUNCTION_NAME: OVRPlugin.OVRP_1_106_0$$ovrp_GetConsentNotificationMarkdownText
ENTRY_POINT: 04f896f8
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_106_0__ovrp_GetConsentNotificationMarkdownText
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               long param_5,undefined4 *param_6)

{
  undefined4 uVar1;
  undefined *puVar2;
  uint uVar3;
  long lVar4;
  undefined4 local_24;
  
  puVar2 = System_Xml_XmlElement_var;
  if ((DAT_066c9d48 & 1) == 0) {
    FUN_02b3c81c(System_Xml_XmlElement_var);
    DAT_066c9d48 = 1;
  }
  uVar1 = *param_6;
  local_24 = 0;
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
  uVar3 = FUN_04f89420(uVar1);
  lVar4 = *(long *)(param_5 + 0x140);
  if (lVar4 != 0) {
    if (uVar3 < *(uint *)(lVar4 + 0x18)) {
      lVar4 = lVar4 + (long)(int)uVar3 * 0x10;
      *(undefined4 *)(lVar4 + 0x20) = param_1;
      *(undefined4 *)(lVar4 + 0x24) = param_2;
      *(undefined4 *)(lVar4 + 0x28) = param_3;
      *(undefined4 *)(lVar4 + 0x2c) = param_4;
      lVar4 = *(long *)(param_5 + 0xd0);
      if (lVar4 == 0) goto LAB_04f897e4;
      if (uVar3 < *(uint *)(lVar4 + 0x18)) {
        *(undefined4 *)(lVar4 + (long)(int)uVar3 * 4 + 0x20) = 0x3f800000;
        local_24 = 2;
        FUN_04f897ec(param_5,uVar3,&local_24,0);
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_02b3cacc();
  }
LAB_04f897e4:
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


