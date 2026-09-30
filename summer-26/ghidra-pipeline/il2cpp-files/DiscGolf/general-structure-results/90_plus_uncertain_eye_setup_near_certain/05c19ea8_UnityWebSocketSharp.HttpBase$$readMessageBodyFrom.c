/*
FUNCTION_NAME: UnityWebSocketSharp.HttpBase$$readMessageBodyFrom
ENTRY_POINT: 05c19ea8
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 96
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_10;telemetry_or_network_hits_1;functionality_eye_api_context_without_clear_sink_hits_1
*/


void UnityWebSocketSharp_HttpBase__readMessageBodyFrom(long *param_1)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  long unaff_x19;
  undefined8 uVar5;
  
  uVar5 = *(undefined8 *)(unaff_x19 + 0x160);
  if (*(int *)(*param_1 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  uVar2 = FUN_05c093b0(uVar5,0,0);
  if ((uVar2 & 1) == 0) {
    if (*(long *)(unaff_x19 + 0x40) == 0) goto LAB_05c1a050;
    uVar2 = FUN_05c0b38c(*(long *)(unaff_x19 + 0x40),0);
    lVar3 = *(long *)(unaff_x19 + 0x40);
    if ((uVar2 & 1) != 0) goto LAB_05c19f04;
LAB_05c19edc:
    if (lVar3 == 0) goto LAB_05c1a050;
    uVar5 = 0x84;
  }
  else {
    lVar3 = *(long *)(unaff_x19 + 0x160);
    if (*(char *)(unaff_x19 + 0x158) != '\0') goto LAB_05c19edc;
LAB_05c19f04:
    if (lVar3 == 0) goto LAB_05c1a050;
    uVar5 = 4;
  }
  uVar5 = FUN_05c0fd18(lVar3,uVar5,2,0);
  if (*(long *)(unaff_x19 + 0x90) == 0) goto LAB_05c1a050;
  FUN_05cee21c(*(long *)(unaff_x19 + 0x90),*(undefined8 *)OVRPlugin_OVRP_1_128_0_TypeInfo,uVar5,0);
  puVar1 = PTR_DAT_069fba08;
  if (*(long *)(unaff_x19 + 0x78) != 0) {
    uVar5 = UnityEngine_InputSystem_XR_TrackedPoseDriver__UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize
                      (*(long *)(unaff_x19 + 0x78),*(undefined8 *)(unaff_x19 + 0x40),0);
    uVar2 = FUN_0536ba54(uVar5,*(undefined8 *)puVar1,0);
    lVar3 = *(long *)(unaff_x19 + 0x90);
    if ((uVar2 & 1) == 0) {
      if (lVar3 == 0) goto LAB_05c1a050;
      FUN_05ced5b8(lVar3,*(undefined8 *)
                          Method_System_Collections_Generic_Dictionary<string,_InputControlLayout_ControlItem>__ctor__
                   ,0);
    }
    else {
      if (lVar3 == 0) goto LAB_05c1a050;
      FUN_05ced564(lVar3,*(undefined8 *)
                          Method_System_Collections_Generic_Dictionary<string,_InputControlLayout_ControlItem>__ctor__
                   ,uVar5,0);
    }
  }
  lVar3 = 0;
  if ((*(uint *)(unaff_x19 + 0x134) & 1) != 0) {
    lVar3 = *(long *)
             Method_System_Collections_Generic_Dictionary<string,_HttpHeaders_HeaderBucket>_get_Item__
    ;
  }
  plVar4 = (long *)
           Method_System_Collections_Generic_Dictionary<string,_HttpHeaders_HeaderBucket>_set_Item__
  ;
  if (lVar3 != 0) {
    plVar4 = (long *)
             Method_System_Collections_Generic_Dictionary<string,_InputControlLayout_ControlItem>_Clear__
    ;
  }
  if ((*(uint *)(unaff_x19 + 0x134) & 2) != 0) {
    lVar3 = *plVar4;
  }
  if (lVar3 != 0) {
    if (*(long *)(unaff_x19 + 0x90) == 0) goto LAB_05c1a050;
    FUN_05ced564(*(long *)(unaff_x19 + 0x90),
                 *(undefined8 *)Mono_Security_Cryptography_PKCS8_EncryptedPrivateKeyInfo_TypeInfo,
                 lVar3,0);
  }
  if ((*(char *)(unaff_x19 + 0xba) == '\0') && (*(char *)(unaff_x19 + 0xb9) != '\0')) {
    FUN_05c1a0f0();
  }
  plVar4 = *(long **)(unaff_x19 + 0x90);
  if (plVar4 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x05c1a038. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar4 + 0x168))(plVar4,*(undefined8 *)(*plVar4 + 0x170));
    return;
  }
LAB_05c1a050:
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


