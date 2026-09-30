/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializerSettings$$set_FloatFormatHandling
ENTRY_POINT: 079d84c4
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


void Newtonsoft_Json_JsonSerializerSettings__set_FloatFormatHandling(void)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long unaff_x19;
  long *unaff_x20;
  int unaff_w21;
  undefined8 uVar8;
  long lVar9;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  
                    /* catch() { ... } // from try @ 079d8468 with catch @ 079d84c4 */
  if (unaff_x19 == 0) {
    thunk_FUN_044adef4(PTR_DAT_09f251e0);
    uVar5 = thunk_FUN_0448520c();
    uVar8 = thunk_FUN_044adef4(PTR_DAT_09f251e8);
    uVar4 = thunk_FUN_044adef4(PTR_DAT_09f3b2e0);
    FUN_0799eb50(uVar5,uVar8,uVar4,0);
  }
  else {
                    /* catch() { ... } // from try @ 079d8464 with catch @ 079d84c8 */
                    /* catch() { ... } // from try @ 079d8460 with catch @ 079d84cc */
    iVar2 = thunk_FUN_04457530();
    if (iVar2 == 1) {
      if (unaff_w21 < 0) {
        thunk_FUN_044adef4(PTR_DAT_09f25200);
        uVar5 = thunk_FUN_0448520c();
        uVar8 = thunk_FUN_044adef4(PTR_DAT_09f28998);
        uVar4 = thunk_FUN_044adef4(PTR_DAT_09f25208);
        FUN_0799a4bc(uVar5,uVar8,uVar4,0);
      }
      else {
                    /* try { // try from 079d84e4 to 07ad84e7 has its CatchHandler @ 079d84f8 */
        iVar2 = FUN_07a56bec();
                    /* catch() { ... } // from try @ 079d84e4 with catch @ 079d84f8 */
        iVar3 = (**(code **)(*unaff_x20 + 0x2a8))();
                    /* try { // try from 079d8508 to 07ad8517 has its CatchHandler @ 079d852c */
        if (iVar3 <= iVar2 - unaff_w21) {
                    /* try { // try from 079d8518 to 07ad8523 has its CatchHandler @ 079d820c */
          iVar2 = (**(code **)(*unaff_x20 + 0x2a8))();
          puVar1 = PTR_DAT_09f283d0;
                    /* try { // try from 079d8524 to 07ad852b has its CatchHandler @ 079d852c */
          if (0 < iVar2) {
            lVar9 = 4;
            do {
              lVar6 = unaff_x20[2];
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
              lVar7 = unaff_x20[3];
              if (lVar7 == 0) goto LAB_079d85fc;
              if ((ulong)*(uint *)(lVar7 + 0x18) <= lVar9 - 4U) goto LAB_079d8600;
              in_stack_00000010 = *(undefined8 *)(lVar6 + lVar9 * 8);
              uVar8 = *(undefined8 *)(lVar7 + lVar9 * 8);
              thunk_FUN_044bb4b4(&stack0x00000010);
              in_stack_00000018 = uVar8;
              thunk_FUN_044bb4b4(&stack0x00000018,uVar8);
              thunk_FUN_04484e3c(*(undefined8 *)puVar1);
              FUN_07a60d64();
              iVar2 = (**(code **)(*unaff_x20 + 0x2a8))();
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


