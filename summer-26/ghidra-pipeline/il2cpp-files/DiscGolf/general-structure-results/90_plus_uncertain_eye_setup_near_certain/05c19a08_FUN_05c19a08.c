/*
FUNCTION_NAME: FUN_05c19a08
ENTRY_POINT: 05c19a08
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 116
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_13;weak_xr_or_state_hits_14;validity_or_gating_hits_21;telemetry_or_network_hits_1;functionality_eye_api_context_without_clear_sink_hits_13
*/


void FUN_05c19a08(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  bool bVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  long lVar8;
  ulong uVar9;
  long *plVar10;
  undefined8 uVar11;
  undefined1 uVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  
  if ((DAT_06dc270d & 1) == 0) {
    FUN_02d965b8(OVRPlugin_OVRP_1_121_0_TypeInfo);
    FUN_02d965b8(PTR_DAT_069ff488);
    FUN_02d965b8(OVRPlugin_OVRP_1_128_0_TypeInfo);
    FUN_02d965b8(
                Method_System_Collections_Generic_Dictionary<string,_HttpHeaders_HeaderBucket>_get_Item__
                );
    FUN_02d965b8(PTR_DAT_06a132d8);
    FUN_02d965b8(Mono_Security_Cryptography_PKCS8_EncryptedPrivateKeyInfo_TypeInfo);
    FUN_02d965b8(
                Method_System_Collections_Generic_Dictionary<string,_HttpHeaders_HeaderBucket>_set_Item__
                );
    FUN_02d965b8(
                Method_System_Collections_Generic_Dictionary<string,_InputControlLayout_ControlItem>__ctor__
                );
    FUN_02d965b8(OVRPlugin_OVRP_1_129_0_TypeInfo);
    FUN_02d965b8(OVRPlugin_OVRP_1_44_0_TypeInfo);
    FUN_02d965b8(PTR_DAT_06a0db58);
    FUN_02d965b8(
                Method_System_Collections_Generic_Dictionary<string,_StylePropertyValue>_ContainsKey__
                );
    FUN_02d965b8(OVRPlugin_OVRP_1_119_0_TypeInfo);
    FUN_02d965b8(Assets_Scripts_Menu_PlayerSave_<>c__DisplayClass56_0_TypeInfo);
    FUN_02d965b8(Unity_Services_CloudSave_Internal_PlayerDataService_<>c__DisplayClass11_0_TypeInfo)
    ;
    FUN_02d965b8(PTR_DAT_069fba08);
    FUN_02d965b8(
                Method_System_Collections_Generic_Dictionary<string,_InputControlLayout_ControlItem>_Clear__
                );
    FUN_02d965b8(
                Method_System_Collections_Generic_Dictionary<string,_InputControlLayout_ControlItem>_GetEnumerator__
                );
    FUN_02d965b8(PTR_DAT_069fcde0);
    DAT_06dc270d = 1;
  }
  if (*(char *)(param_1 + 0xe0) == '\0') {
    lVar8 = *(long *)(param_1 + 0x68);
    if (lVar8 == -1) {
      lVar8 = *(long *)(param_1 + 0x90);
      if (lVar8 == 0) goto LAB_05c1a050;
      bVar3 = false;
      puVar13 = (undefined8 *)PTR_DAT_06a0db58;
    }
    else {
      if ((*(int *)(param_1 + 0x174) == 1) || (*(int *)(param_1 + 0x184) == 1)) {
        if ((*(char *)(param_1 + 0x60) == '\0') &&
           ((lVar8 < 1 && (*(char *)(param_1 + 0x11c) == '\0')))) {
          if (*(long *)(param_1 + 0x90) == 0) goto LAB_05c1a050;
          FUN_05ced5b8(*(long *)(param_1 + 0x90),*(undefined8 *)PTR_DAT_06a0db58,0);
        }
        else {
          if (*(long *)(param_1 + 0x90) == 0) goto LAB_05c1a050;
          FUN_05cee21c(*(long *)(param_1 + 0x90),*(undefined8 *)PTR_DAT_06a0db58,
                       *(undefined8 *)PTR_DAT_069fcde0,0);
        }
LAB_05c19bb0:
        bVar3 = false;
      }
      else {
        bVar3 = 0 < lVar8;
        if (((*(char *)(param_1 + 0x60) == '\0') && (lVar8 < 1)) &&
           (*(char *)(param_1 + 0x11c) == '\0')) goto LAB_05c19bb0;
        lVar8 = *(long *)(param_1 + 0x90);
        uVar14 = FUN_054e67fc((long *)(param_1 + 0x68),0);
        if (lVar8 == 0) goto LAB_05c1a050;
        FUN_05cee21c(lVar8,*(undefined8 *)PTR_DAT_06a0db58,uVar14,0);
      }
      lVar8 = *(long *)(param_1 + 0x90);
      puVar13 = (undefined8 *)OVRPlugin_OVRP_1_129_0_TypeInfo;
      if (lVar8 == 0) goto LAB_05c1a050;
    }
  }
  else {
    if (*(long *)(param_1 + 0x90) == 0) goto LAB_05c1a050;
    FUN_05ced564(*(long *)(param_1 + 0x90),*(undefined8 *)OVRPlugin_OVRP_1_129_0_TypeInfo,
                 *(undefined8 *)OVRPlugin_OVRP_1_44_0_TypeInfo,0);
    lVar8 = *(long *)(param_1 + 0x90);
    if (lVar8 == 0) goto LAB_05c1a050;
    bVar3 = true;
    puVar13 = (undefined8 *)PTR_DAT_06a0db58;
  }
  puVar1 = OVRPlugin_OVRP_1_121_0_TypeInfo;
  FUN_05ced5b8(lVar8,*puVar13,0);
  lVar8 = *(long *)puVar1;
  uVar14 = *(undefined8 *)(param_1 + 0xd0);
  if (*(int *)(lVar8 + 0xe4) == 0) {
    thunk_FUN_02df485c();
    lVar8 = *(long *)puVar1;
  }
  puVar2 = Unity_Services_CloudSave_Internal_PlayerDataService_<>c__DisplayClass11_0_TypeInfo;
  bVar4 = FUN_05507938(uVar14,*(undefined8 *)(*(long *)(lVar8 + 0xb8) + 0x10),0);
  if ((bVar3 & bVar4) == 1) {
    if (*(long *)(param_1 + 0xe8) == 0) goto LAB_05c1a050;
    uVar9 = FUN_05c1a054();
    if ((uVar9 & 1) == 0) goto LAB_05c19cd4;
    if (*(long *)(param_1 + 0x90) == 0) goto LAB_05c1a050;
    FUN_05ced564(*(long *)(param_1 + 0x90),*(undefined8 *)puVar2,
                 *(undefined8 *)Assets_Scripts_Menu_PlayerSave_<>c__DisplayClass56_0_TypeInfo,0);
    uVar12 = 1;
  }
  else {
LAB_05c19cd4:
    if (*(long *)(param_1 + 0x90) == 0) goto LAB_05c1a050;
    FUN_05ced5b8(*(long *)(param_1 + 0x90),*(undefined8 *)puVar2,0);
    uVar12 = 0;
  }
  lVar8 = *(long *)(param_1 + 0xe8);
  *(undefined1 *)(param_1 + 0x124) = uVar12;
  if (lVar8 == 0) goto LAB_05c1a050;
  if (*(char *)(lVar8 + 0x30) == '\0') {
    bVar3 = false;
    puVar13 = (undefined8 *)OVRPlugin_OVRP_1_119_0_TypeInfo;
  }
  else {
    bVar3 = *(char *)(lVar8 + 0x32) == '\0';
    puVar13 = (undefined8 *)
              Method_System_Collections_Generic_Dictionary<string,_InputControlLayout_ControlItem>_GetEnumerator__
    ;
    if (!bVar3) {
      puVar13 = (undefined8 *)OVRPlugin_OVRP_1_119_0_TypeInfo;
    }
  }
  if (*(long *)(param_1 + 0x90) == 0) goto LAB_05c1a050;
  uVar14 = *puVar13;
  puVar13 = (undefined8 *)OVRPlugin_OVRP_1_119_0_TypeInfo;
  if (!bVar3) {
    puVar13 = (undefined8 *)
              Method_System_Collections_Generic_Dictionary<string,_InputControlLayout_ControlItem>_GetEnumerator__
    ;
  }
  FUN_05ced5b8(*(long *)(param_1 + 0x90),*puVar13,0);
  plVar10 = *(long **)(param_1 + 0xe8);
  if (plVar10 == (long *)0x0) goto LAB_05c1a050;
  uVar11 = (**(code **)(*plVar10 + 0x178))(plVar10,*(undefined8 *)(*plVar10 + 0x180));
  uVar9 = FUN_05507938(uVar11,0,0);
  if ((uVar9 & 1) == 0) {
    lVar8 = *(long *)puVar1;
    if (*(int *)(lVar8 + 0xe4) == 0) {
      thunk_FUN_02df485c();
      lVar8 = *(long *)puVar1;
    }
    uVar5 = FUN_05507938(uVar11,*(undefined8 *)(*(long *)(lVar8 + 0xb8) + 8),0);
  }
  else {
    uVar5 = 1;
  }
  if (*(char *)(param_1 + 0x98) == '\0') {
LAB_05c19e50:
    lVar8 = *(long *)puVar1;
    uVar11 = *(undefined8 *)(param_1 + 0xc0);
    if (*(int *)(lVar8 + 0xe4) == 0) {
      thunk_FUN_02df485c();
      lVar8 = *(long *)puVar1;
    }
    uVar9 = FUN_05507938(uVar11,*(undefined8 *)(*(long *)(lVar8 + 0xb8) + 0x10),0);
    if ((uVar9 & 1) != 0) {
      lVar8 = *(long *)(param_1 + 0x90);
      puVar13 = (undefined8 *)PTR_DAT_06a132d8;
joined_r0x05c19e38:
      if (lVar8 == 0) goto LAB_05c1a050;
      FUN_05ced564(lVar8,uVar14,*puVar13,0);
    }
  }
  else {
    lVar8 = *(long *)puVar1;
    uVar11 = *(undefined8 *)(param_1 + 0xc0);
    if (*(int *)(lVar8 + 0xe4) == 0) {
      thunk_FUN_02df485c();
      lVar8 = *(long *)puVar1;
    }
    uVar6 = FUN_05507938(uVar11,*(undefined8 *)(*(long *)(lVar8 + 0xb8) + 8),0);
    if (((uVar5 | uVar6) & 1) != 0) {
      if (*(long *)(param_1 + 0x90) == 0) goto LAB_05c1a050;
      lVar8 = FUN_05ccbaa0(*(long *)(param_1 + 0x90),uVar14,0);
      if (lVar8 != 0) {
        if ((*(long *)(param_1 + 0x90) == 0) ||
           (lVar8 = FUN_05ccbaa0(*(long *)(param_1 + 0x90),uVar14,0), lVar8 == 0))
        goto LAB_05c1a050;
        iVar7 = FUN_0537232c(lVar8,*(undefined8 *)
                                    Method_System_Collections_Generic_Dictionary<string,_StylePropertyValue>_ContainsKey__
                             ,5,0);
        if (iVar7 != -1) goto LAB_05c19ea0;
      }
      lVar8 = *(long *)(param_1 + 0x90);
      puVar13 = (undefined8 *)
                Method_System_Collections_Generic_Dictionary<string,_StylePropertyValue>_ContainsKey__
      ;
      goto joined_r0x05c19e38;
    }
    if (*(char *)(param_1 + 0x98) == '\0') goto LAB_05c19e50;
  }
LAB_05c19ea0:
  uVar14 = *(undefined8 *)(param_1 + 0x160);
  if (*(int *)(*(long *)PTR_DAT_069ff488 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  uVar9 = FUN_05c093b0(uVar14,0,0);
  if ((uVar9 & 1) == 0) {
    if (*(long *)(param_1 + 0x40) == 0) goto LAB_05c1a050;
    uVar9 = FUN_05c0b38c(*(long *)(param_1 + 0x40),0);
    lVar8 = *(long *)(param_1 + 0x40);
    if ((uVar9 & 1) != 0) goto LAB_05c19f04;
LAB_05c19edc:
    if (lVar8 == 0) goto LAB_05c1a050;
    uVar14 = 0x84;
  }
  else {
    lVar8 = *(long *)(param_1 + 0x160);
    if (*(char *)(param_1 + 0x158) != '\0') goto LAB_05c19edc;
LAB_05c19f04:
    if (lVar8 == 0) goto LAB_05c1a050;
    uVar14 = 4;
  }
  uVar14 = FUN_05c0fd18(lVar8,uVar14,2,0);
  if (*(long *)(param_1 + 0x90) == 0) goto LAB_05c1a050;
  FUN_05cee21c(*(long *)(param_1 + 0x90),*(undefined8 *)OVRPlugin_OVRP_1_128_0_TypeInfo,uVar14,0);
  puVar1 = PTR_DAT_069fba08;
  if (*(long *)(param_1 + 0x78) != 0) {
    uVar14 = UnityEngine_InputSystem_XR_TrackedPoseDriver__UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize
                       (*(long *)(param_1 + 0x78),*(undefined8 *)(param_1 + 0x40),0);
    uVar9 = FUN_0536ba54(uVar14,*(undefined8 *)puVar1,0);
    lVar8 = *(long *)(param_1 + 0x90);
    if ((uVar9 & 1) == 0) {
      if (lVar8 == 0) goto LAB_05c1a050;
      FUN_05ced5b8(lVar8,*(undefined8 *)
                          Method_System_Collections_Generic_Dictionary<string,_InputControlLayout_ControlItem>__ctor__
                   ,0);
    }
    else {
      if (lVar8 == 0) goto LAB_05c1a050;
      FUN_05ced564(lVar8,*(undefined8 *)
                          Method_System_Collections_Generic_Dictionary<string,_InputControlLayout_ControlItem>__ctor__
                   ,uVar14,0);
    }
  }
  lVar8 = 0;
  if ((*(uint *)(param_1 + 0x134) & 1) != 0) {
    lVar8 = *(long *)
             Method_System_Collections_Generic_Dictionary<string,_HttpHeaders_HeaderBucket>_get_Item__
    ;
  }
  plVar10 = (long *)
            Method_System_Collections_Generic_Dictionary<string,_HttpHeaders_HeaderBucket>_set_Item__
  ;
  if (lVar8 != 0) {
    plVar10 = (long *)
              Method_System_Collections_Generic_Dictionary<string,_InputControlLayout_ControlItem>_Clear__
    ;
  }
  if ((*(uint *)(param_1 + 0x134) & 2) != 0) {
    lVar8 = *plVar10;
  }
  if (lVar8 != 0) {
    if (*(long *)(param_1 + 0x90) == 0) goto LAB_05c1a050;
    FUN_05ced564(*(long *)(param_1 + 0x90),
                 *(undefined8 *)Mono_Security_Cryptography_PKCS8_EncryptedPrivateKeyInfo_TypeInfo,
                 lVar8,0);
  }
  if ((*(char *)(param_1 + 0xba) == '\0') && (*(char *)(param_1 + 0xb9) != '\0')) {
    FUN_05c1a0f0(param_1);
  }
  plVar10 = *(long **)(param_1 + 0x90);
  if (plVar10 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x05c1a038. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar10 + 0x168))(plVar10,*(undefined8 *)(*plVar10 + 0x170));
    return;
  }
LAB_05c1a050:
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


