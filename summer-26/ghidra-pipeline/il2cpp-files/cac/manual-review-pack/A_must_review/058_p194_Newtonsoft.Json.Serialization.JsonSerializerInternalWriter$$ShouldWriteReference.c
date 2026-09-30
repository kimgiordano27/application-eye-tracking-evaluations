/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$ShouldWriteReference
ENTRY_POINT: 074be420
PROGRAM: cac-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_9;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__ShouldWriteReference(void)

{
  uint uVar1;
  short sVar2;
  undefined2 uVar3;
  long lVar4;
  long unaff_x19;
  long unaff_x22;
  int iVar5;
  long *unaff_x25;
  long lVar6;
  long lVar7;
  
  thunk_FUN_03f6fea8();
  if ((unaff_x19 != 0) && (lVar4 = *(long *)(*(long *)(*unaff_x25 + 0xb8) + 0x20), lVar4 != 0)) {
    if (*(uint *)(lVar4 + 0x18) <= *(uint *)(unaff_x19 + 0xbc)) {
LAB_074be5f4:
                    /* WARNING: Subroutine does not return */
      FUN_03f13634();
    }
    lVar4 = *(long *)(lVar4 + (long)(int)*(uint *)(unaff_x19 + 0xbc) * 8 + 0x20);
    if (lVar4 != 0) {
      if (0 < *(int *)(lVar4 + 0x10)) {
        iVar5 = 0;
        do {
          sVar2 = FUN_073213d0(lVar4,iVar5,0);
          if (sVar2 == 0x2d) {
            if (unaff_x19 == 0) goto LAB_074be5f0;
            lVar6 = *(long *)(unaff_x19 + 0x30);
            if (DAT_0968e4c0 == '\0') {
              FUN_03f13384(PTR_DAT_09129228);
              DAT_0968e4c0 = '\x01';
            }
            if (lVar6 == 0) goto LAB_074be5f0;
            if (*(int *)(lVar6 + 0x10) == 1) {
              uVar1 = *(uint *)(unaff_x22 + 0x18);
              if ((int)uVar1 < (int)*(uint *)(unaff_x22 + 0x10)) {
                if (uVar1 < *(uint *)(unaff_x22 + 0x10)) {
                  lVar7 = *(long *)(unaff_x22 + 8);
                  uVar3 = FUN_073213d0(lVar6,0,0);
                  *(undefined2 *)(lVar7 + (long)(int)uVar1 * 2) = uVar3;
                  *(uint *)(unaff_x22 + 0x18) = uVar1 + 1;
                  goto LAB_074be5c0;
                }
                goto LAB_074be5f4;
              }
            }
            FUN_0734705c();
          }
          else if (sVar2 == 0x23) {
            if (unaff_x19 == 0) goto LAB_074be5f0;
            if (*(int *)(*unaff_x25 + 0xe4) == 0) {
              thunk_FUN_03f6fea8();
            }
            FUN_074bde64();
          }
          else {
            if (DAT_0968d807 == '\0') {
              FUN_03f13384(PTR_DAT_09129228);
              DAT_0968d807 = '\x01';
            }
            uVar1 = *(uint *)(unaff_x22 + 0x18);
            if ((int)uVar1 < (int)*(uint *)(unaff_x22 + 0x10)) {
              if (*(uint *)(unaff_x22 + 0x10) <= uVar1) goto LAB_074be5f4;
              *(uint *)(unaff_x22 + 0x18) = uVar1 + 1;
              *(short *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar1 * 2) = sVar2;
            }
            else {
              FUN_07346f30();
            }
          }
LAB_074be5c0:
          iVar5 = iVar5 + 1;
        } while (iVar5 < *(int *)(lVar4 + 0x10));
      }
      return;
    }
  }
LAB_074be5f0:
                    /* WARNING: Subroutine does not return */
  FUN_03f1362c();
}


