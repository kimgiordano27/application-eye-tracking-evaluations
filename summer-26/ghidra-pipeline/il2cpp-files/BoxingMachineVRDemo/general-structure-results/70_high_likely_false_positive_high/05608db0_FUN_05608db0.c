/*
FUNCTION_NAME: FUN_05608db0
ENTRY_POINT: 05608db0
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 71
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_9;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_2
*/


undefined8 FUN_05608db0(long param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  
  if ((DAT_06b7f53c & 1) == 0) {
    FUN_02d6084c(System_Collections_Generic_List<BranchLabel>_TypeInfo);
    FUN_02d6084c(System_Collections_Generic_List<AsyncGPUReadbackRequest>_TypeInfo);
    FUN_02d6084c(System_Collections_Generic_List<Button>_TypeInfo);
    FUN_02d6084c(PTR_DAT_0676a8b8);
    FUN_02d6084c(PTR_DAT_06769b10);
    FUN_02d6084c(System_Collections_Generic_List<Button>_TypeInfo);
    FUN_02d6084c(PTR_DAT_06775140);
    DAT_06b7f53c = 1;
  }
  lVar6 = *(long *)(param_1 + 0x10);
  if (lVar6 == 0) goto LAB_05609064;
  if (*(int *)(lVar6 + 0x1c) == 0x2a) {
    uVar4 = **(undefined8 **)(*(long *)(PTR_DAT_0675e258 + 0x90) + 0xb8);
    FUN_05609670(lVar6);
    uVar5 = uVar4;
  }
  else {
    if (*(int *)(lVar6 + 0x1c) != 0x6e) {
      FUN_028f4e40(lVar6);
      uVar4 = *(undefined8 *)(lVar6 + 0x10);
      uVar5 = thunk_FUN_02dc61f4(System_Collections_Generic_List<BsonProperty>_TypeInfo);
      uVar5 = FUN_0567b918(uVar5,uVar4,0);
      uVar4 = thunk_FUN_02dc61f4(System_Collections_Generic_List<ChallengeEntry>_TypeInfo);
                    /* WARNING: Subroutine does not return */
      FUN_02d609b4(uVar5,uVar4);
    }
    if (*(char *)(lVar6 + 0x48) != '\0') {
      if (*(int *)(*(long *)System_Collections_Generic_List<AsyncGPUReadbackRequest>_TypeInfo + 0xe4
                  ) == 0) {
        thunk_FUN_02dbd7b4();
      }
      uVar2 = FUN_05608384(lVar6);
      if ((uVar2 & 1) != 0) {
        if (*(long *)(param_1 + 0x10) != 0) {
          uVar4 = **(undefined8 **)(*(long *)(PTR_DAT_0675e258 + 0x90) + 0xb8);
          uVar2 = thunk_FUN_04e8bd3c(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x28),
                                     *(undefined8 *)System_Collections_Generic_List<Button>_TypeInfo
                                     ,0);
          if ((uVar2 & 1) == 0) {
            if (*(long *)(param_1 + 0x10) == 0) goto LAB_05609064;
            uVar2 = thunk_FUN_04e8bd3c(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x28),
                                       *(undefined8 *)PTR_DAT_0676a8b8,0);
            if ((uVar2 & 1) == 0) {
              if (*(long *)(param_1 + 0x10) == 0) goto LAB_05609064;
              uVar2 = thunk_FUN_04e8bd3c(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x28),
                                         *(undefined8 *)PTR_DAT_06769b10,0);
              if ((uVar2 & 1) == 0) {
                if (*(long *)(param_1 + 0x10) == 0) goto LAB_05609064;
                uVar1 = thunk_FUN_04e8bd3c(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x28),
                                           *(undefined8 *)
                                            System_Collections_Generic_List<Button>_TypeInfo,0);
                param_4 = 7;
                if ((uVar1 & 1) == 0) {
                  param_4 = 0;
                }
              }
              else {
                uVar1 = 0;
                param_4 = 9;
              }
            }
            else {
              uVar1 = 0;
              param_4 = 4;
            }
          }
          else {
            uVar1 = 0;
            param_4 = 8;
          }
          if (*(long *)(param_1 + 0x10) != 0) {
            FUN_05609670();
            FUN_05608abc(param_1,0x28);
            uVar5 = uVar4;
            if ((uVar1 & 1) != 0) {
              if (*(long *)(param_1 + 0x10) == 0) goto LAB_05609064;
              if (*(int *)(*(long *)(param_1 + 0x10) + 0x1c) != 0x29) {
                FUN_056090a8(param_1,0x73);
                if (*(long *)(param_1 + 0x10) == 0) goto LAB_05609064;
                uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x38);
                FUN_05609670();
              }
            }
            FUN_05608abc(param_1,0x29);
            goto LAB_05609020;
          }
        }
LAB_05609064:
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      lVar6 = *(long *)(param_1 + 0x10);
      if (lVar6 == 0) goto LAB_05609064;
    }
    uVar5 = *(undefined8 *)(lVar6 + 0x28);
    uVar4 = *(undefined8 *)(lVar6 + 0x30);
    FUN_05609670(lVar6);
    uVar2 = thunk_FUN_04e8bd3c(uVar5,*(undefined8 *)PTR_DAT_06775140,0);
    if ((uVar2 & 1) != 0) {
      uVar5 = **(undefined8 **)(*(long *)(PTR_DAT_0675e258 + 0x90) + 0xb8);
    }
  }
LAB_05609020:
  uVar3 = thunk_FUN_02d9d534(*(undefined8 *)System_Collections_Generic_List<BranchLabel>_TypeInfo);
  FUN_05607040(uVar3,param_3,param_2,uVar4,uVar5,param_4);
  return uVar3;
}


