/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$HandleError
ENTRY_POINT: 055da124
PROGRAM: beastcraft-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


long Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__HandleError(void)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *unaff_x19;
  long unaff_x20;
  long lVar5;
  int iStack000000000000000c;
  
  if ((*(byte *)(unaff_x20 + 0x607) & 1) == 0) {
    FUN_02e3ca1c(PTR_DAT_06a7aba8);
    *(undefined1 *)(unaff_x20 + 0x607) = 1;
  }
  iStack000000000000000c = 0;
  if (unaff_x19[7] == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02e3ccc4();
  }
  uVar2 = FUN_0552a000(unaff_x19[7],0);
  if ((uVar2 & 1) == 0) {
    uVar2 = (**(code **)(*unaff_x19 + 0x1c8))();
    if ((uVar2 & 1) != 0) {
      if ((char)unaff_x19[8] == '\0') {
        lVar5 = unaff_x19[0xd] + (long)*(int *)((long)unaff_x19 + 100);
      }
      else {
        lVar5 = unaff_x19[7];
        if (*(int *)(*(long *)PTR_DAT_06a7aba8 + 0xe4) == 0) {
          thunk_FUN_02e9a04c();
        }
        lVar5 = FUN_055d9cf0(lVar5,0,1,&stack0x0000000c);
        if (iStack000000000000000c != 0) {
          uVar3 = FUN_055d9144();
          iVar1 = iStack000000000000000c;
          thunk_FUN_02ea289c(PTR_DAT_06a7aba8);
          FUN_02a73238();
          uVar3 = FUN_055d91c8(uVar3,iVar1);
          goto LAB_055da264;
        }
      }
      return lVar5;
    }
    thunk_FUN_02ea289c(PTR_DAT_06a2f9e0);
    uVar3 = thunk_FUN_02e78ab8();
    uVar4 = thunk_FUN_02ea289c(PTR_DAT_06a83628);
    FUN_05601340(uVar3,uVar4,0);
  }
  else {
    thunk_FUN_02ea289c(PTR_DAT_06a2f530);
    uVar3 = thunk_FUN_02e78ab8();
    uVar4 = thunk_FUN_02ea289c(PTR_DAT_06a83620);
    FUN_05614c24(uVar3,uVar4,0);
  }
LAB_055da264:
  uVar4 = thunk_FUN_02ea289c(PTR_DAT_06a83638);
                    /* WARNING: Subroutine does not return */
  FUN_02e3cb88(uVar3,uVar4);
}


