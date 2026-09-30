/*
FUNCTION_NAME: FUN_06166394
ENTRY_POINT: 06166394
PROGRAM: beastcraft-libil2cpp.so
SCORE: 83
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_file_logging_hits_3;telemetry_or_network_hits_2
*/


void FUN_06166394(long param_1,long *param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 *puVar3;
  ulong uVar4;
  int *piVar5;
  
  puVar1 = Best_HTTP_SecureProtocol_Org_BouncyCastle_Crypto_Modes_CcmBlockCipher_TypeInfo;
  if ((bRam0000000006e957a7 & 1) == 0) {
    FUN_02e3ca1c(Best_HTTP_SecureProtocol_Org_BouncyCastle_Crypto_Modes_CcmBlockCipher_TypeInfo);
    FUN_02e3ca1c(Unity_Services_Wire_Internal_CentrifugeCloseCode_TypeInfo);
    FUN_02e3ca1c(Best_HTTP_SecureProtocol_Org_BouncyCastle_Tls_CertificateRequest_TypeInfo);
    bRam0000000006e957a7 = 1;
  }
  lVar2 = thunk_FUN_02e789bc(param_2,*(undefined8 *)puVar1);
  if (lVar2 != 0) {
    *(int *)(param_1 + 0x270) = *(int *)(param_1 + 0x270) + -1;
  }
  if (param_2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02e3ccc4();
  }
  lVar2 = *param_2;
  uVar4 = (ulong)*(ushort *)(lVar2 + 0x12e);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) ==
          *(long *)Unity_Services_Wire_Internal_CentrifugeCloseCode_TypeInfo) {
        puVar3 = (undefined8 *)(lVar2 + (long)(*piVar5 + 5) * 0x10 + 0x138);
        goto LAB_06166460;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  puVar3 = (undefined8 *)
           FUN_02e759c0(param_2,*(long *)Unity_Services_Wire_Internal_CentrifugeCloseCode_TypeInfo,5
                       );
LAB_06166460:
  (*(code *)*puVar3)(param_2,param_1,puVar3[1]);
  if (*(long *)(param_1 + 600) != 0) {
    FUN_03f2ca20(*(long *)(param_1 + 600),param_2,
                 *(undefined8 *)
                  Best_HTTP_SecureProtocol_Org_BouncyCastle_Tls_CertificateRequest_TypeInfo);
    return;
  }
  return;
}


