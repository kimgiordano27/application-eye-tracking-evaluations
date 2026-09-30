/*
FUNCTION_NAME: OVRPlugin.OVRP_1_106_0$$ovrp_GetUnifiedConsent
ENTRY_POINT: 04f89138
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_106_0__ovrp_GetUnifiedConsent(undefined4 param_1,long param_2,long *param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  if ((DAT_066c9d44 & 1) == 0) {
    FUN_02b3c81c(System_Xml_XmlElement_var);
    DAT_066c9d44 = 1;
  }
  puVar1 = System_Xml_XmlElement_var;
  uVar4 = 0;
  do {
    lVar2 = *(long *)puVar1;
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
      lVar2 = *(long *)puVar1;
    }
    if (**(long **)(lVar2 + 0xb8) == 0) {
LAB_04f89214:
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    if ((long)*(int *)(**(long **)(lVar2 + 0xb8) + 0x18) <= (long)uVar4) {
      return;
    }
    lVar2 = *param_3;
    if (lVar2 == 0) goto LAB_04f89214;
    if (*(uint *)(lVar2 + 0x18) <= uVar4) {
LAB_04f89218:
                    /* WARNING: Subroutine does not return */
      FUN_02b3cacc();
    }
    lVar3 = *(long *)(param_2 + 0x140);
    if (lVar3 == 0) goto LAB_04f89214;
    if (*(uint *)(lVar3 + 0x18) <= uVar4) goto LAB_04f89218;
    lVar2 = lVar2 + uVar4 * 0x10;
    uVar5 = *(undefined8 *)(lVar2 + 0x20);
    lVar3 = lVar3 + uVar4 * 0x10;
    *(undefined8 *)(lVar3 + 0x28) = *(undefined8 *)(lVar2 + 0x28);
    *(undefined8 *)(lVar3 + 0x20) = uVar5;
    lVar2 = *(long *)(param_2 + 0xd0);
    if (lVar2 == 0) goto LAB_04f89214;
    if (*(uint *)(lVar2 + 0x18) <= uVar4) goto LAB_04f89218;
    lVar3 = uVar4 * 4;
    uVar4 = uVar4 + 1;
    *(undefined4 *)(lVar2 + lVar3 + 0x20) = param_1;
  } while( true );
}


