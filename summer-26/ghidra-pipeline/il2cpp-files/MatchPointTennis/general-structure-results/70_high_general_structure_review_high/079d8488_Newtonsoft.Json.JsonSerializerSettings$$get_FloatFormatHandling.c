/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializerSettings$$get_FloatFormatHandling
ENTRY_POINT: 079d8488
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_6;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_JsonSerializerSettings__get_FloatFormatHandling
               (long *param_1,long param_2,int param_3)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  
                    /* try { // try from 079d8488 to 07ad8493 has its CatchHandler @ 079d820c */
                    /* try { // try from 079d8494 to 07ad8497 has its CatchHandler @ 079d84a4 */
                    /* try { // try from 079d8498 to 07ad849b has its CatchHandler @ 079d84a0 */
                    /* catch() { ... } // from try @ 079d83f8 with catch @ 079d849c
                       try { // try from 079d849c to 07ad84e3 has its CatchHandler @ 079d820c */
                    /* catch() { ... } // from try @ 079d8498 with catch @ 079d84a0 */
                    /* catch() { ... } // from try @ 079d82e0 with catch @ 079d84a4
                       catch() { ... } // from try @ 079d8494 with catch @ 079d84a4 */
                    /* catch() { ... } // from try @ 079d8484 with catch @ 079d84a8 */
  if ((DAT_0a524d59 & 1) == 0) {
                    /* catch() { ... } // from try @ 079d8474 with catch @ 079d84ac */
                    /* catch() { ... } // from try @ 079d8470 with catch @ 079d84b0 */
                    /* catch() { ... } // from try @ 079d838c with catch @ 079d84b4 */
    FUN_04447ba8(PTR_DAT_09f283d0);
                    /* catch() { ... } // from try @ 079d8358 with catch @ 079d84b8 */
                    /* catch() { ... } // from try @ 079d846c with catch @ 079d84bc
                       catch() { ... } // from try @ 079d8480 with catch @ 079d84bc */
    DAT_0a524d59 = 1;
  }
                    /* catch() { ... } // from try @ 079d8478 with catch @ 079d84c0 */
  in_stack_00000010 = 0;
  in_stack_00000018 = 0;
  if (param_2 == 0) {
    thunk_FUN_044adef4(PTR_DAT_09f251e0);
    uVar5 = thunk_FUN_0448520c();
    uVar8 = thunk_FUN_044adef4(PTR_DAT_09f251e8);
    uVar4 = thunk_FUN_044adef4(PTR_DAT_09f3b2e0);
    FUN_0799eb50(uVar5,uVar8,uVar4,0);
  }
  else {
    iVar2 = thunk_FUN_04457530(param_2,0);
    if (iVar2 == 1) {
      if (param_3 < 0) {
        thunk_FUN_044adef4(PTR_DAT_09f25200);
        uVar5 = thunk_FUN_0448520c();
        uVar8 = thunk_FUN_044adef4(PTR_DAT_09f28998);
        uVar4 = thunk_FUN_044adef4(PTR_DAT_09f25208);
        FUN_0799a4bc(uVar5,uVar8,uVar4,0);
      }
      else {
        iVar2 = FUN_07a56bec(param_2,0);
        iVar3 = (**(code **)(*param_1 + 0x2a8))(param_1,*(undefined8 *)(*param_1 + 0x2b0));
        if (iVar3 <= iVar2 - param_3) {
          iVar2 = (**(code **)(*param_1 + 0x2a8))(param_1,*(undefined8 *)(*param_1 + 0x2b0));
          puVar1 = PTR_DAT_09f283d0;
          if (0 < iVar2) {
            lVar9 = 4;
            do {
              lVar6 = param_1[2];
              if (lVar6 == 0) {
LAB_079d85fc:
                    /* WARNING: Subroutine does not return */
                FUN_04447e44();
              }
              if ((ulong)*(uint *)(lVar6 + 0x18) <= lVar9 - 4U) {
LAB_079d8600:
                    /* WARNING: Subroutine does not return */
                FUN_04447e4c();
              }
              lVar7 = param_1[3];
              if (lVar7 == 0) goto LAB_079d85fc;
              if ((ulong)*(uint *)(lVar7 + 0x18) <= lVar9 - 4U) goto LAB_079d8600;
              in_stack_00000010 = *(undefined8 *)(lVar6 + lVar9 * 8);
              uVar8 = *(undefined8 *)(lVar7 + lVar9 * 8);
              thunk_FUN_044bb4b4(&stack0x00000010);
              in_stack_00000018 = uVar8;
              thunk_FUN_044bb4b4(&stack0x00000018,uVar8);
              uVar8 = thunk_FUN_04484e3c(*(undefined8 *)puVar1);
              FUN_07a60d64(param_2,uVar8,param_3 + (int)lVar9 + -4,0);
              iVar2 = (**(code **)(*param_1 + 0x2a8))(param_1,*(undefined8 *)(*param_1 + 0x2b0));
              lVar6 = lVar9 + -3;
              lVar9 = lVar9 + 1;
            } while (lVar6 < iVar2);
          }
          return;
        }
        thunk_FUN_044adef4(PTR_DAT_09f217f8);
        uVar5 = thunk_FUN_0448520c();
        uVar8 = thunk_FUN_044adef4(PTR_DAT_09f27200);
        FUN_0799d598(uVar5,uVar8,0);
      }
    }
    else {
      thunk_FUN_044adef4(PTR_DAT_09f217f8);
      uVar5 = thunk_FUN_0448520c();
      uVar8 = thunk_FUN_044adef4(PTR_DAT_09f271f0);
      uVar4 = thunk_FUN_044adef4(PTR_DAT_09f251e8);
      FUN_07996d40(uVar5,uVar8,uVar4,0);
    }
  }
  uVar8 = thunk_FUN_044adef4(PTR_DAT_09f42e08);
                    /* WARNING: Subroutine does not return */
  FUN_04447d10(uVar5,uVar8);
}


