/*
FUNCTION_NAME: Newtonsoft.Json.JsonReaderException$$get_LinePosition
ENTRY_POINT: 066e814c
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;data_collection
EVIDENCE: validity_or_gating_hits_11;strong_pose_or_ray_construction_hits_2;strong_file_logging_hits_2
*/


void Newtonsoft_Json_JsonReaderException__get_LinePosition(long *param_1)

{
  short sVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar7;
  int iVar8;
  int unaff_w19;
  long unaff_x20;
  long unaff_x21;
  int unaff_w22;
  int unaff_w24;
  int iVar9;
  int iVar10;
  int iStack000000000000000c;
  
                    /* try { // try from 066e8150 to 067e8153 has its CatchHandler @ 066e817c */
  FUN_065d66f0();
  if (unaff_x20 != 0) {
    if (*(int *)(unaff_x20 + 0x10) < 1) {
      iVar9 = 0;
    }
    else {
      iVar10 = 0;
      iVar4 = 0;
      do {
        sVar1 = FUN_065c7d98();
        iVar9 = iVar10;
        if (*(short *)(unaff_x21 + 0x10) != sVar1) {
          iVar9 = iVar4;
        }
        iVar10 = iVar10 + 1;
        iVar4 = iVar9;
      } while (iVar10 < *(int *)(unaff_x20 + 0x10));
      if (iVar9 < 0) {
        return;
      }
    }
    if (param_1 != (long *)0x0) {
      FUN_065d818c(param_1);
      iVar10 = 0;
      if (iVar9 != 0) {
        iVar10 = iVar9 + 1;
      }
      if (iVar10 < *(int *)(unaff_x20 + 0x10)) {
        iVar9 = 0;
        do {
          iVar4 = *(int *)(unaff_x21 + 0x14);
          iVar3 = 1;
          while( true ) {
            iVar10 = iVar10 + 1;
            uVar2 = FUN_065c7d98();
            uVar2 = uVar2 & 0xffff;
            if (uVar2 < 0x3a) {
              iVar7 = uVar2 - 0x16;
            }
            else if (uVar2 < 0x5b) {
              iVar7 = uVar2 - 0x41;
            }
            else if (uVar2 < 0x7b) {
              iVar7 = uVar2 - 0x61;
            }
            else {
              iVar7 = *(int *)(unaff_x21 + 0x14);
            }
            iVar8 = *(int *)(unaff_x21 + 0x18);
            if (*(int *)(unaff_x21 + 0x18) + unaff_w24 < iVar4) {
              iVar8 = iVar4 - unaff_w24;
              if (*(int *)(unaff_x21 + 0x1c) + unaff_w24 <= iVar4) {
                iVar8 = *(int *)(unaff_x21 + 0x1c);
              }
            }
            iVar9 = iVar9 + iVar7 * iVar3;
            if (iVar7 < iVar8) break;
            iVar4 = *(int *)(unaff_x21 + 0x14) + iVar4;
            iVar3 = (*(int *)(unaff_x21 + 0x14) - iVar8) * iVar3;
          }
          FUN_065d7270(param_1,0);
          unaff_w24 = FUN_066e8448();
          iVar3 = FUN_065d7270(param_1,0);
          iVar4 = 0;
          if (iVar3 + 1 != 0) {
            iVar4 = iVar9 / (iVar3 + 1);
          }
          unaff_w22 = iVar4 + unaff_w22;
          iVar4 = FUN_065d7270(param_1,0);
          if (unaff_w22 < 0x80) {
            iStack000000000000000c = unaff_w19 + iVar10;
            uVar5 = thunk_FUN_03ac70f4(*(undefined8 *)(PTR_DAT_08486760 + 0x48),&stack0x0000000c);
            uVar6 = thunk_FUN_03af1434(PTR_DAT_084a7998);
            uVar5 = FUN_065c412c(uVar6,uVar5,0);
            thunk_FUN_03af1434(PTR_DAT_08488490);
            uVar6 = thunk_FUN_03ac74bc();
            FUN_066b6070(uVar6,uVar5,0);
            uVar5 = thunk_FUN_03af1434(PTR_DAT_084a79a0);
                    /* WARNING: Subroutine does not return */
            FUN_03a8a884(uVar6,uVar5);
          }
          iVar4 = iVar4 + 1;
          iVar3 = 0;
          if (iVar4 != 0) {
            iVar3 = iVar9 / iVar4;
          }
          iVar9 = iVar9 - iVar3 * iVar4;
          FUN_065d92a8(param_1,iVar9,unaff_w22,0);
          iVar9 = iVar9 + 1;
        } while (iVar10 < *(int *)(unaff_x20 + 0x10));
      }
                    /* WARNING: Could not recover jumptable at 0x066e831c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x168))(param_1,*(undefined8 *)(*param_1 + 0x170));
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


