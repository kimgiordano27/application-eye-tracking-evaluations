/*
FUNCTION_NAME: FUN_05d12a28
ENTRY_POINT: 05d12a28
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_7;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_5
*/


undefined1 FUN_05d12a28(long param_1)

{
  undefined *puVar1;
  bool bVar2;
  int iVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  
  if ((DAT_06dc2ec3 & 1) == 0) {
    FUN_02d965b8(OVRPlugin_OVRP_1_121_0_TypeInfo);
    FUN_02d965b8(
                Method_System_Collections_Generic_Dictionary<string,_StylePropertyValue>_ContainsKey__
                );
    FUN_02d965b8(
                Method_Unity_XR_CoreUtils_Bindings_Variables_BindableEnum<XRInputModalityManager_InputMode>__ctor__
                );
    FUN_02d965b8(OVRPlugin_OVRP_1_119_0_TypeInfo);
    DAT_06dc2ec3 = 1;
  }
  if (*(char *)(param_1 + 0x81) == '\0') {
    *(undefined1 *)(param_1 + 0x81) = 1;
    if (*(long *)(param_1 + 0x30) == 0) {
LAB_05d12b80:
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    uVar4 = FUN_05ccbaa0(*(long *)(param_1 + 0x30),*(undefined8 *)OVRPlugin_OVRP_1_119_0_TypeInfo,0)
    ;
    uVar5 = FUN_0536c9cc(uVar4,0);
    puVar1 = OVRPlugin_OVRP_1_121_0_TypeInfo;
    if ((uVar5 & 1) == 0) {
      iVar3 = FUN_0536a4b0(uVar4,*(undefined8 *)
                                  Method_System_Collections_Generic_Dictionary<string,_StylePropertyValue>_ContainsKey__
                           ,5,0);
      bVar2 = iVar3 == 0;
    }
    else {
      uVar4 = *(undefined8 *)(param_1 + 0x48);
      lVar6 = *(long *)OVRPlugin_OVRP_1_121_0_TypeInfo;
      if (*(int *)(lVar6 + 0xe4) == 0) {
        thunk_FUN_02df485c();
        lVar6 = *(long *)puVar1;
      }
      uVar5 = FUN_05507938(uVar4,*(undefined8 *)(*(long *)(lVar6 + 0xb8) + 0x10),0);
      if ((uVar5 & 1) == 0) {
        if (*(long *)(param_1 + 0x30) == 0) goto LAB_05d12b80;
        uVar4 = FUN_05ccbaa0(*(long *)(param_1 + 0x30),
                             *(undefined8 *)
                              Method_System_Collections_Generic_Dictionary<string,_StylePropertyValue>_ContainsKey__
                             ,0);
        uVar5 = FUN_0536c9cc(uVar4,0);
        if ((uVar5 & 1) != 0) goto LAB_05d12b1c;
        iVar3 = FUN_0536a4b0(uVar4,*(undefined8 *)
                                    Method_Unity_XR_CoreUtils_Bindings_Variables_BindableEnum<XRInputModalityManager_InputMode>__ctor__
                             ,5,0);
        bVar2 = iVar3 != 0;
      }
      else {
        bVar2 = true;
      }
    }
    *(bool *)(param_1 + 0x82) = bVar2;
  }
LAB_05d12b1c:
  return *(undefined1 *)(param_1 + 0x82);
}


