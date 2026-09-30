/*
FUNCTION_NAME: FUN_063ea90c
ENTRY_POINT: 063ea90c
PROGRAM: beastcraft-libil2cpp.so
SCORE: 86
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_file_logging_hits_3;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x063eabc0) */

void FUN_063ea90c(long *param_1,undefined8 param_2)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined8 *puVar6;
  int *piVar7;
  
                    /* try { // try from 063ea914 to 064ea917 has its CatchHandler @ 063ea924 */
                    /* catch() { ... } // from try @ 063ea914 with catch @ 063ea924 */
                    /* try { // try from 063ea928 to 064ea92f has its CatchHandler @ 063ea938 */
  if ((DAT_06e9c05c & 1) == 0) {
                    /* try { // try from 063ea930 to 064ea93b has its CatchHandler @ 063ea7dc */
    FUN_02e3ca1c(
                Best_HTTP_Shared_TLS_Crypto_Impl_FastGcmBlockCipherHelper_DecryptBlock_Impl_000007CA_PostfixBurstDelegate_TypeInfo
                );
    FUN_02e3ca1c(System_IO_FileStream_ReadDelegate_TypeInfo);
    FUN_02e3ca1c(PTR_DAT_06a2ef10);
    FUN_02e3ca1c(PTR_DAT_06a6fa28);
    FUN_02e3ca1c(PTR_DAT_06a6cf90);
    DAT_06e9c05c = 1;
  }
  uVar2 = FUN_0548ba80(param_1[0x98],param_2,0);
  if ((uVar2 & 1) != 0) {
    lVar3 = FUN_063afbac(param_1,0);
    if (lVar3 == 0) {
      lVar3 = *param_1;
      uVar2 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar2 != 0) {
        piVar7 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_06a6fa28) {
            puVar6 = (undefined8 *)(lVar3 + (long)(*piVar7 + 2) * 0x10 + 0x138);
            goto LAB_063eaba0;
          }
          uVar2 = uVar2 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar2 != 0);
      }
      puVar6 = (undefined8 *)FUN_02e759c0(param_1,*(long *)PTR_DAT_06a6fa28,2);
LAB_063eaba0:
                    /* WARNING: Could not recover jumptable at 0x063eabb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)*puVar6)(param_1,param_2,puVar6[1]);
      return;
    }
    uVar4 = (**(code **)(*param_1 + 0xdc8))(param_1,*(undefined8 *)(*param_1 + 0xdd0));
    if (*(int *)(*(long *)System_IO_FileStream_ReadDelegate_TypeInfo + 0xe4) == 0) {
      thunk_FUN_02e9a04c(*(long *)System_IO_FileStream_ReadDelegate_TypeInfo);
    }
    plVar5 = (long *)FUN_04b93c34(uVar4,param_2,
                                  *(undefined8 *)
                                   Best_HTTP_Shared_TLS_Crypto_Impl_FastGcmBlockCipherHelper_DecryptBlock_Impl_000007CA_PostfixBurstDelegate_TypeInfo
                                 );
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02e3ccc4();
    }
    plVar5[7] = (long)param_1;
    thunk_FUN_02ee2be8(plVar5 + 7,param_1);
    lVar3 = *param_1;
    uVar2 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar2 != 0) {
      piVar7 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_06a6fa28) {
          puVar6 = (undefined8 *)(lVar3 + (long)(*piVar7 + 2) * 0x10 + 0x138);
          goto LAB_063eaaa0;
        }
        uVar2 = uVar2 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar2 != 0);
    }
    puVar6 = (undefined8 *)FUN_02e759c0(param_1,*(long *)PTR_DAT_06a6fa28,2);
LAB_063eaaa0:
    (*(code *)*puVar6)(param_1,param_2,puVar6[1]);
    (**(code **)(*param_1 + 0x188))(param_1,plVar5,*(undefined8 *)(*param_1 + 400));
    puVar1 = PTR_DAT_06a6cf90;
    lVar3 = *(long *)PTR_DAT_06a6cf90;
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_02e9a04c();
      lVar3 = *(long *)puVar1;
    }
    FUN_064d8a2c(param_1,*(long *)(lVar3 + 0xb8) + 0x390,0);
    FUN_064d8a2c(param_1,*(long *)(*(long *)puVar1 + 0xb8) + 0x2f8,0);
    if (plVar5 != (long *)0x0) {
      lVar3 = *plVar5;
      uVar2 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar2 != 0) {
        piVar7 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_06a2ef10) {
            puVar6 = (undefined8 *)(lVar3 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_063eab70;
          }
          uVar2 = uVar2 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar2 != 0);
      }
      puVar6 = (undefined8 *)FUN_02e759c0(plVar5,*(long *)PTR_DAT_06a2ef10,0);
LAB_063eab70:
      (*(code *)*puVar6)(plVar5,puVar6[1]);
    }
  }
  return;
}


