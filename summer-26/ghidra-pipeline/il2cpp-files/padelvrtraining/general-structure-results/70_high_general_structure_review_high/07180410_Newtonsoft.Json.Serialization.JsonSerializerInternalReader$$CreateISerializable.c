/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$CreateISerializable
ENTRY_POINT: 07180410
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_8;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalReader__CreateISerializable(long param_1)

{
  uint uVar1;
  short sVar2;
  undefined2 uVar3;
  long unaff_x19;
  long unaff_x22;
  long lVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  
  if (param_1 != 0) {
    if (*(uint *)(param_1 + 0x18) <= *(uint *)(unaff_x19 + 0xb4)) {
LAB_071805d4:
                    /* WARNING: Subroutine does not return */
      FUN_03d2d550();
    }
    lVar4 = *(long *)(param_1 + (long)(int)*(uint *)(unaff_x19 + 0xb4) * 8 + 0x20);
    if (lVar4 != 0) {
      if (0 < *(int *)(lVar4 + 0x10)) {
        iVar5 = 0;
        do {
          sVar2 = FUN_06fcd2c8(lVar4,iVar5,0);
          if (sVar2 == 0x2d) {
            lVar6 = *(long *)(unaff_x19 + 0x30);
joined_r0x071804bc:
            if (DAT_09843015 == '\0') {
              FUN_03d2d2b0(PTR_DAT_091fa408);
              DAT_09843015 = '\x01';
            }
            if (lVar6 == 0) goto LAB_071805d0;
            if (*(int *)(lVar6 + 0x10) == 1) {
              uVar1 = *(uint *)(unaff_x22 + 0x18);
              if ((int)uVar1 < (int)*(uint *)(unaff_x22 + 0x10)) {
                if (uVar1 < *(uint *)(unaff_x22 + 0x10)) {
                  lVar7 = *(long *)(unaff_x22 + 8);
                  uVar3 = FUN_06fcd2c8(lVar6,0,0);
                  *(undefined2 *)(lVar7 + (long)(int)uVar1 * 2) = uVar3;
                  *(uint *)(unaff_x22 + 0x18) = uVar1 + 1;
                  goto LAB_071805a0;
                }
                goto LAB_071805d4;
              }
            }
            FUN_06ff1720();
          }
          else {
            if (sVar2 == 0x24) {
              lVar6 = *(long *)(unaff_x19 + 0x58);
              goto joined_r0x071804bc;
            }
            if (sVar2 == 0x23) {
              if (*(int *)(*(long *)PTR_DAT_0920eb10 + 0xe0) == 0) {
                thunk_FUN_03db619c();
              }
              FUN_071805d8();
            }
            else {
              if (DAT_09842200 == '\0') {
                FUN_03d2d2b0(PTR_DAT_091fa408);
                DAT_09842200 = '\x01';
              }
              uVar1 = *(uint *)(unaff_x22 + 0x18);
              if ((int)uVar1 < (int)*(uint *)(unaff_x22 + 0x10)) {
                if (*(uint *)(unaff_x22 + 0x10) <= uVar1) goto LAB_071805d4;
                *(short *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar1 * 2) = sVar2;
                *(uint *)(unaff_x22 + 0x18) = uVar1 + 1;
              }
              else {
                FUN_06ff15f4();
              }
            }
          }
LAB_071805a0:
          iVar5 = iVar5 + 1;
        } while (iVar5 < *(int *)(lVar4 + 0x10));
      }
      return;
    }
  }
LAB_071805d0:
                    /* WARNING: Subroutine does not return */
  FUN_03d2d548();
}


