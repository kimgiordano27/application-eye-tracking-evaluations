/*
FUNCTION_NAME: FUN_06439aec
ENTRY_POINT: 06439aec
PROGRAM: beastcraft-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void FUN_06439aec(long param_1,long param_2,long param_3,undefined8 param_4,undefined8 param_5,
                 long param_6)

{
  long lVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 auStack_80 [3];
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  lVar1 = tpidr_el0;
  lStack_58 = *(long *)(lVar1 + 0x28);
  uStack_68 = param_4;
  uStack_60 = param_5;
  if ((bRam0000000006e9c444 & 1) == 0) {
    FUN_02e3ca1c(
                Game_Controllers_Network_NetworkSessionCloseController_<>c__DisplayClass6_0_TypeInfo
                );
    FUN_02e3ca1c(Fusion_NetworkSpawnOp_AsyncOpData_TypeInfo);
    FUN_02e3ca1c(Fusion_NetworkSceneManagerDefault_<UnloadSceneCoroutine>d__42_TypeInfo);
    FUN_02e3ca1c(System_Linq_Expressions_Interpreter_NotEqualInstruction_NotEqualByte_TypeInfo);
    FUN_02e3ca1c(
                Best_HTTP_SecureProtocol_Org_BouncyCastle_Asn1_Sec_SecNamedCurves_Sect239k1Holder_TypeInfo
                );
    FUN_02e3ca1c(PTR_DAT_06a70d68);
    bRam0000000006e9c444 = 1;
  }
  if (param_6 != 0) {
    if (*(long *)(lVar1 + 0x28) == lStack_58) {
      FUN_06412618(param_6,param_2,param_3,param_4,param_5,0);
      return;
    }
    goto LAB_06439cd8;
  }
  if (*(char *)(param_1 + 0xc2) == '\0') {
    auStack_80[0] = 0;
    if (param_3 != 0) {
      auStack_80[0] =
           FUN_0528dbe8(param_3,*(undefined8 *)Fusion_NetworkSpawnOp_AsyncOpData_TypeInfo);
      if (param_2 != 0) {
        uVar3 = FUN_0528d9f8(param_2,*(undefined8 *)
                                      Game_Controllers_Network_NetworkSessionCloseController_<>c__DisplayClass6_0_TypeInfo
                            );
        uVar4 = FUN_039bbf48(param_4,param_5,
                             *(undefined8 *)
                              Fusion_NetworkSceneManagerDefault_<UnloadSceneCoroutine>d__42_TypeInfo
                            );
        uVar2 = FUN_0420c9b4(&uStack_68,
                             *(undefined8 *)
                              System_Linq_Expressions_Interpreter_NotEqualInstruction_NotEqualByte_TypeInfo
                            );
        uVar5 = *(undefined8 *)(param_1 + 0x20);
        if (*(int *)(*(long *)PTR_DAT_06a70d68 + 0xe4) == 0) {
          thunk_FUN_02e9a04c(*(long *)PTR_DAT_06a70d68);
        }
        FUN_0640fe8c(uVar3,auStack_80,1,uVar4,uVar2,uVar5,0);
        goto LAB_06439c98;
      }
    }
    if (*(long *)(lVar1 + 0x28) == lStack_58) {
                    /* WARNING: Subroutine does not return */
      FUN_02e3ccc4();
    }
  }
  else {
LAB_06439c98:
    if (*(long *)(lVar1 + 0x28) == lStack_58) {
      return;
    }
  }
LAB_06439cd8:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


