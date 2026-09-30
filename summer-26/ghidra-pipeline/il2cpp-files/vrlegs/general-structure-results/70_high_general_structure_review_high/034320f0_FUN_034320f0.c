/*
FUNCTION_NAME: FUN_034320f0
ENTRY_POINT: 034320f0
PROGRAM: vrlegs-libil2cpp.so
SCORE: 84
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_11;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x03432328) */
/* WARNING: Removing unreachable block (ram,0x034328f0) */
/* WARNING: Removing unreachable block (ram,0x03432938) */
/* WARNING: Removing unreachable block (ram,0x03432928) */

void FUN_034320f0(long param_1,undefined8 param_2,long *param_3)

{
  undefined4 uVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  long lVar13;
  long *plVar14;
  long lVar15;
  undefined8 uVar16;
  long lVar17;
  byte bVar18;
  undefined1 auVar19 [16];
  undefined1 local_88 [8];
  undefined1 local_80 [8];
  undefined1 local_78 [8];
  undefined1 local_70 [8];
  undefined8 local_68;
  
  puVar3 = System_Security_PermissionSet_TypeInfo;
  local_68 = param_2;
  if ((DAT_0412d649 & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03cd7b90);
    FUN_01ab69ac(System_Security_PermissionSet_TypeInfo);
    FUN_01ab69ac(FluffyUnderware_DevTools_QueuedCallback_TypeInfo);
    FUN_01ab69ac(System_Linq_Expressions_Interpreter_QuoteInstruction_TypeInfo);
    FUN_01ab69ac(System_Threading_Tasks_ParallelEtwProvider_TypeInfo);
    FUN_01ab69ac(PTR_DAT_03cbe688);
    FUN_01ab69ac(PTR_DAT_03cd9310);
    FUN_01ab69ac(System_Security_Cryptography_RC2_TypeInfo);
    FUN_01ab69ac(Mono_Security_Interface_MonoLocalCertificateSelectionCallback_TypeInfo);
    FUN_01ab69ac(Mono_Net_Security_MonoSslClientAuthenticationOptions_TypeInfo);
    FUN_01ab69ac(Mono_CompilerServices_SymbolWriter_MonoSymbolFileException_TypeInfo);
    FUN_01ab69ac(System_Security_Cryptography_RC2CryptoServiceProvider_TypeInfo);
    FUN_01ab69ac(System_Security_Cryptography_RC2Transform_TypeInfo);
    FUN_01ab69ac(QFSW_QC_MonoTargetType_TypeInfo);
    FUN_01ab69ac(Mono_Security_Interface_MonoTlsConnectionInfo_TypeInfo);
    FUN_01ab69ac(Unity_Services_RemoteConfig_RCUnityWebRequest_TypeInfo);
    FUN_01ab69ac(PTR_DAT_03cc8ee0);
    FUN_01ab69ac(FMOD_RESULT_TypeInfo);
    FUN_01ab69ac(Mono_Net_Security_MonoTlsProviderFactory_TypeInfo);
    FUN_01ab69ac(Mono_Security_Interface_MonoTlsSettings_TypeInfo);
    FUN_01ab69ac(System_MulticastNotSupportedException_TypeInfo);
    FUN_01ab69ac(System_Security_Cryptography_RIPEMD160Managed_TypeInfo);
    FUN_01ab69ac(System_Net_Http_MonoWebRequestHandler_TypeInfo);
    FUN_01ab69ac(System_Security_Cryptography_RNGCryptoServiceProvider_TypeInfo);
    FUN_01ab69ac(_Common_Gameplay_Scripts_RPCManager_TypeInfo);
    DAT_0412d649 = 1;
  }
  lVar13 = *(long *)puVar3;
  local_70[0] = 0;
  local_78[0] = 0;
  iVar11 = *(int *)((long)param_3 + 0x234);
  bVar2 = *(byte *)(param_3 + 0x4a);
  lVar15 = *param_3;
  if (*(int *)(lVar13 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
    lVar13 = *(long *)puVar3;
  }
  puVar4 = PTR_DAT_03cd9310;
  FUN_033a2190(local_70,0,**(undefined8 **)(lVar13 + 0xb8),0);
  if (*(char *)(param_1 + 0x51) != '\0') {
    FUN_033fecb4(param_1 + 0xb0,lVar15,param_3,0);
    lVar13 = *(long *)puVar3;
    if (*(int *)(lVar13 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      lVar13 = *(long *)puVar3;
    }
    local_80[0] = 0;
    FUN_033a2190(local_80,0,*(undefined8 *)(*(long *)(lVar13 + 0xb8) + 0x10),0);
    local_78[0] = local_80[0];
    FUN_03668734(param_1 + 0x68,0);
    FUN_033a2194(local_78,0);
    lVar13 = *(long *)puVar3;
    if (*(int *)(lVar13 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      lVar13 = *(long *)puVar3;
    }
    local_88[0] = 0;
    FUN_033a2190(local_88,0,*(undefined8 *)(*(long *)(lVar13 + 0xb8) + 0x18),0);
    puVar3 = System_Security_Cryptography_RC2_TypeInfo;
    local_78[0] = local_88[0];
    lVar17 = *(long *)System_Security_Cryptography_RC2_TypeInfo;
    lVar13 = *(long *)(param_1 + 0x88);
    plVar14 = *(long **)(lVar17 + 0x38);
    if (plVar14 == (long *)0x0) {
      FUN_01a47054(lVar17);
      plVar14 = *(long **)(lVar17 + 0x38);
    }
    puVar6 = System_Linq_Expressions_Interpreter_QuoteInstruction_TypeInfo;
    auVar19 = FUN_01f0be78(param_1 + 0x78,*(undefined4 *)(*plVar14 + 0xfc),
                           *(undefined8 *)
                            System_Linq_Expressions_Interpreter_QuoteInstruction_TypeInfo);
    puVar5 = FluffyUnderware_DevTools_QueuedCallback_TypeInfo;
    if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    FUN_01f7ff64(lVar13,auVar19._0_8_,auVar19._8_8_,
                 *(undefined8 *)FluffyUnderware_DevTools_QueuedCallback_TypeInfo);
    lVar17 = *(long *)puVar3;
    lVar13 = *(long *)(param_1 + 0xa0);
    plVar14 = *(long **)(lVar17 + 0x38);
    if (plVar14 == (long *)0x0) {
      FUN_01a47054(lVar17);
      plVar14 = *(long **)(lVar17 + 0x38);
    }
    auVar19 = FUN_01f0be78(param_1 + 0x90,*(undefined4 *)(*plVar14 + 0xfc),*(undefined8 *)puVar6);
    if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    FUN_01f7ff64(lVar13,auVar19._0_8_,auVar19._8_8_,*(undefined8 *)puVar5);
    uVar16 = *(undefined8 *)(param_1 + 0x88);
    if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    iVar10 = FUN_03419fdc(0);
    if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    FUN_036f2df4(lVar15,uVar16,*(undefined8 *)FMOD_RESULT_TypeInfo,0,iVar10 << 2,0);
    uVar16 = *(undefined8 *)(param_1 + 0xa0);
    iVar10 = FUN_03419fe4(0);
    FUN_036f2df4(lVar15,uVar16,*(undefined8 *)System_Security_Cryptography_RIPEMD160Managed_TypeInfo
                 ,0,iVar10 << 2,0);
    FUN_033a2194(local_78,0);
    FUN_032e937c(*(undefined4 *)(param_1 + 0x134),*(undefined4 *)(param_1 + 0x138),
                 (float)*(int *)(param_1 + 0x13c),(float)*(int *)(param_1 + 0x54),0);
    if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    FUN_036f2b4c(lVar15,*(undefined8 *)System_Security_Cryptography_RC2Transform_TypeInfo,0);
    FUN_032dbe88(*(float *)((long)param_3 + 0x134) / (float)*(int *)(param_1 + 0x58),
                 *(float *)(param_3 + 0x27) / (float)*(int *)(param_1 + 0x58),0);
    FUN_032e937c(0);
    FUN_036f2b4c(lVar15,*(undefined8 *)_Common_Gameplay_Scripts_RPCManager_TypeInfo,0);
    FUN_032e937c((float)*(int *)(param_1 + 0x140),
                 (float)(*(int *)(param_1 + 0x60) * *(int *)(param_1 + 0x5c)),0,0,0);
    FUN_036f2b4c(lVar15,*(undefined8 *)
                         System_Security_Cryptography_RC2CryptoServiceProvider_TypeInfo,0);
  }
  *(undefined4 *)(param_1 + 0x18) = 0;
  FUN_03432ddc(param_1,lVar15,param_3 + 0x46);
  FUN_03432f20(param_1,lVar15,param_3);
  puVar3 = PTR_DAT_03cd7b90;
  if (param_3[0x3b] == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  if ((*(char *)(param_3[0x3b] + 0x1a7) == '\0') || (*(char *)((long)param_3 + 0x255) == '\0')) {
    bVar7 = 0 < iVar11;
  }
  else {
    bVar7 = true;
  }
  if ((bVar7 & bVar2) == 0) {
    bVar18 = 0;
  }
  else {
    bVar18 = *(byte *)(param_1 + 0x51) ^ 1;
  }
  uVar16 = *(undefined8 *)Mono_Net_Security_MonoSslClientAuthenticationOptions_TypeInfo;
  if (*(int *)(*(long *)PTR_DAT_03cd7b90 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  FUN_033b3414(lVar15,uVar16,bVar18 != 0,0);
  bVar18 = 0;
  if ((bVar2 == 0) && (bVar7 != false)) {
    bVar18 = *(byte *)(param_1 + 0x51) ^ 1;
  }
  uVar16 = *(undefined8 *)Mono_Security_Interface_MonoTlsConnectionInfo_TypeInfo;
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  FUN_033b3414(lVar15,uVar16,bVar18 != 0,0);
  FUN_033b3414(lVar15,*(undefined8 *)
                       Mono_CompilerServices_SymbolWriter_MonoSymbolFileException_TypeInfo,
               *(undefined1 *)(param_1 + 0x51),0);
  if (*(char *)((long)param_3 + 0x251) == '\0') {
    bVar8 = false;
    bVar7 = false;
    bVar9 = false;
  }
  else {
    bVar7 = *(int *)(param_1 + 0x18) == 1;
    if (bVar7) {
      iVar11 = FUN_0368cf40(0);
      bVar8 = iVar11 == 0;
      if (*(char *)((long)param_3 + 0x251) == '\0') {
        bVar9 = false;
        bVar7 = true;
        goto FUN_034326d0;
      }
    }
    else {
      bVar8 = false;
    }
    bVar9 = *(int *)(param_1 + 0x18) == 2;
  }
FUN_034326d0:
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  FUN_033b3414(lVar15,*(undefined8 *)Mono_Net_Security_MonoTlsProviderFactory_TypeInfo,bVar9 | bVar8
               ,0);
  FUN_033b3414(lVar15,*(undefined8 *)PTR_DAT_03cc8ee0,bVar7,0);
  FUN_033b3414(lVar15,*(undefined8 *)QFSW_QC_MonoTargetType_TypeInfo,bVar9,0);
  FUN_033b3414(lVar15,*(undefined8 *)
                       Mono_Security_Interface_MonoLocalCertificateSelectionCallback_TypeInfo,
               *(undefined1 *)((long)param_3 + 0x253),0);
  FUN_033b3414(lVar15,*(undefined8 *)Mono_Security_Interface_MonoTlsSettings_TypeInfo,
               *(undefined1 *)((long)param_3 + 0x252),0);
  if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  lVar13 = FUN_03412404(0);
  if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  uVar1 = *(undefined4 *)(lVar13 + 0x78);
  if (*(int *)(*(long *)System_Threading_Tasks_ParallelEtwProvider_TypeInfo + 0xe0) == 0) {
    thunk_FUN_01a58e78(*(long *)System_Threading_Tasks_ParallelEtwProvider_TypeInfo);
  }
  iVar11 = FUN_03424f94(uVar1);
  FUN_033b3414(lVar15,*(undefined8 *)Unity_Services_RemoteConfig_RCUnityWebRequest_TypeInfo,
               iVar11 == 2,0);
  FUN_033b3414(lVar15,*(undefined8 *)System_Security_Cryptography_RNGCryptoServiceProvider_TypeInfo,
               iVar11 == 1,0);
  uVar16 = *(undefined8 *)System_Net_Http_MonoWebRequestHandler_TypeInfo;
  if (*(char *)((long)param_3 + 0x254) == '\0') {
    uVar12 = 0;
  }
  else {
    lVar13 = param_3[0x1c];
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar12 = FUN_033b3998(lVar13,0);
    uVar12 = ~uVar12 & 1;
  }
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  FUN_033b3414(lVar15,uVar16,uVar12,0);
  if (*(long *)(param_1 + 0xa8) == 0) {
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    FUN_033b3414(lVar15,*(undefined8 *)System_MulticastNotSupportedException_TypeInfo,0,0);
  }
  else {
    FUN_033eabb4(*(long *)(param_1 + 0xa8),local_68,lVar15,param_3 + 0x46,0);
  }
  FUN_033a2194(local_70,0);
  if (*(int *)(*(long *)PTR_DAT_03cbe688 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  FUN_036fe2f0(&local_68,lVar15,0);
  if (lVar15 != 0) {
    FUN_036ef76c(lVar15,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


