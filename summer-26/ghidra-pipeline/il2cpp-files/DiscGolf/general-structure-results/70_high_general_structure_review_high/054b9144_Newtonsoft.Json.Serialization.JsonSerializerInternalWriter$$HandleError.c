/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$HandleError
ENTRY_POINT: 054b9144
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_5;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined8 Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__HandleError(void)

{
  short sVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar8;
  long unaff_x20;
  long *unaff_x22;
  long unaff_x23;
  undefined *puVar7;
  
  thunk_FUN_02df485c();
                    /* try { // try from 054b9148 to 055b914b has its CatchHandler @ 054b9160 */
                    /* try { // try from 054b914c to 055b914f has its CatchHandler @ 054b915c */
  FUN_054bdc04();
                    /* try { // try from 054b9150 to 055b9153 has its CatchHandler @ 054b9158 */
                    /* catch() { ... } // from try @ 054b9118 with catch @ 054b9154 */
                    /* catch() { ... } // from try @ 054b9150 with catch @ 054b9158 */
  uVar3 = thunk_FUN_0536b75c();
                    /* catch() { ... } // from try @ 054b914c with catch @ 054b915c */
                    /* catch() { ... } // from try @ 054b9148 with catch @ 054b9160 */
  if ((uVar3 & 1) != 0) {
    return 0;
  }
  lVar4 = FUN_05371f5c();
  if (lVar4 != 0) {
    if (*(int *)(lVar4 + 0x10) == 0) {
      thunk_FUN_02dfd288(PTR_DAT_06a0ac70);
                    /* catch() { ... } // from try @ 054b93d4 with catch @ 054b93f0 */
      uVar5 = thunk_FUN_02dd3144();
      puVar7 = PTR_DAT_06a218d0;
                    /* try { // try from 054b93f4 to 055b93fb has its CatchHandler @ 054b9404 */
                    /* try { // try from 054b93fc to 055b9407 has its CatchHandler @ 054b9004 */
    }
    else {
      if (*(int *)(*unaff_x22 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
                    /* try { // try from 054b91a4 to 055b91a7 has its CatchHandler @ 054b939c */
      iVar2 = FUN_05372478();
      if (iVar2 < 0) {
        if (*(int *)(*unaff_x22 + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        iVar2 = FUN_05372d78();
        if ((iVar2 != 0) && (iVar2 < 1)) {
          return **(undefined8 **)(*(long *)(unaff_x23 + 0x90) + 0xb8);
        }
        lVar4 = FUN_0536f444();
        if (lVar4 != 0) {
          iVar2 = *(int *)(lVar4 + 0x10);
          if (iVar2 < 2) {
            lVar8 = *unaff_x22;
            if (iVar2 == 1) {
              if (*(int *)(lVar8 + 0xe4) == 0) {
                thunk_FUN_02df485c(lVar8);
                lVar8 = *unaff_x22;
              }
              if ((*(short *)(*(long *)(lVar8 + 0xb8) + 10) == 0x5c) &&
                 (1 < *(int *)(unaff_x20 + 0x10))) {
                sVar1 = FUN_053674f8();
                lVar8 = *unaff_x22;
                if (*(int *)(lVar8 + 0xe4) == 0) {
                  thunk_FUN_02df485c(lVar8);
                  lVar8 = *unaff_x22;
                }
                if (*(short *)(*(long *)(lVar8 + 0xb8) + 0x18) == sVar1) {
                  if (*(int *)(lVar8 + 0xe4) == 0) {
                    thunk_FUN_02df485c(lVar8);
                  }
                  if (*(int *)(*(long *)(unaff_x23 + 0x88) + 0xe4) == 0) {
                    thunk_FUN_02df485c();
                  }
                  lVar8 = *(long *)(*unaff_x22 + 0xb8) + 0x18;
                  goto LAB_054b9370;
                }
              }
            }
          }
          else {
            lVar8 = *unaff_x22;
            if (*(int *)(lVar8 + 0xe4) == 0) {
              thunk_FUN_02df485c(lVar8);
              lVar8 = *unaff_x22;
            }
            if (*(short *)(*(long *)(lVar8 + 0xb8) + 10) == 0x5c) {
              sVar1 = FUN_053674f8(lVar4,iVar2 + -1,0);
              lVar8 = *unaff_x22;
              if (*(int *)(lVar8 + 0xe4) == 0) {
                thunk_FUN_02df485c(lVar8);
                lVar8 = *unaff_x22;
              }
              if (*(short *)(*(long *)(lVar8 + 0xb8) + 0x18) == sVar1) {
                if (*(int *)(lVar8 + 0xe4) == 0) {
                  thunk_FUN_02df485c(lVar8);
                }
                if (*(int *)(*(long *)(unaff_x23 + 0x88) + 0xe4) == 0) {
                  thunk_FUN_02df485c();
                }
                lVar8 = *(long *)(*unaff_x22 + 0xb8) + 10;
LAB_054b9370:
                uVar5 = FUN_054484f0(lVar8,0);
                uVar5 = FUN_05362cb4(lVar4,uVar5,0);
                return uVar5;
              }
            }
          }
          if (*(int *)(lVar8 + 0xe4) == 0) {
            thunk_FUN_02df485c(lVar8);
          }
          uVar5 = FUN_054bd7a8(lVar4);
          return uVar5;
        }
        goto LAB_054b93e0;
      }
                    /* catch() { ... } // from try @ 054b93f4 with catch @ 054b9404 */
      thunk_FUN_02dfd288(PTR_DAT_06a0ac70);
      uVar5 = thunk_FUN_02dd3144();
      puVar7 = PTR_DAT_06a218d8;
    }
    uVar6 = thunk_FUN_02dfd288(puVar7);
    FUN_05452924(uVar5,uVar6,0);
    uVar6 = thunk_FUN_02dfd288(PTR_DAT_06a218e0);
                    /* WARNING: Subroutine does not return */
    FUN_02d96724(uVar5,uVar6);
  }
LAB_054b93e0:
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


