/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.Watch.ToDisplayStringSignature<__Il2CppFullySharedGenericType>$$EndInvoke
ENTRY_POINT: 03f9dcf4
PROGRAM: hellodot-libil2cpp.so
SCORE: 86
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_4;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Manager_Watch_ToDisplayStringSignature<__Il2CppFullySharedGenericType>__EndInvoke
               (long param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  
  if (*(long *)(param_1 + 0x10) != 0) {
    FUN_04679414(*(long *)(param_1 + 0x10),
                 *(undefined8 *)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 0x98));
    lVar2 = *(long *)(param_1 + 0x18);
    if ((lVar2 != 0) && (0 < (int)*(ulong *)(lVar2 + 0x18))) {
      uVar3 = 0;
      uVar1 = *(ulong *)(lVar2 + 0x18) & 0xffffffff;
      puVar4 = (undefined8 *)(lVar2 + 0x28);
      do {
        if (uVar1 <= uVar3) {
                    /* WARNING: Subroutine does not return */
          FUN_02ce7c84();
        }
        if (*(long *)(param_1 + 0x10) == 0) goto LAB_03f9dd8c;
        FUN_0467928c(*(long *)(param_1 + 0x10),puVar4[-1],*puVar4,
                     *(undefined8 *)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 0xa0));
        uVar1 = (ulong)*(uint *)(lVar2 + 0x18);
        uVar3 = uVar3 + 1;
        puVar4 = puVar4 + 2;
      } while ((long)uVar3 < (long)(int)*(uint *)(lVar2 + 0x18));
    }
    return;
  }
LAB_03f9dd8c:
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c7c();
}


