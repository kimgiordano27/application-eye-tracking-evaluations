/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$set_ConstructorHandling
ENTRY_POINT: 054beb4c
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_6;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerProxy__set_ConstructorHandling(long param_1)

{
  undefined *puVar1;
  bool bVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  uint uVar10;
  long unaff_x19;
  long unaff_x20;
  long lVar11;
  long lVar12;
  uint uVar13;
  undefined1 auVar14 [16];
  
  FUN_02d965b8(*(undefined8 *)(param_1 + 0x7d8));
  *(undefined1 *)(unaff_x20 + 0xd1d) = 1;
  if (unaff_x19 == 0) {
                    /* catch() { ... } // from try @ 054be84c with catch @ 054bedd4 */
                    /* catch() { ... } // from try @ 054bece8 with catch @ 054bedd8 */
                    /* catch() { ... } // from try @ 054bece0 with catch @ 054beddc */
    thunk_FUN_02dfd288(PTR_DAT_069ff9a8);
                    /* catch() { ... } // from try @ 054becdc with catch @ 054bede0 */
    uVar8 = thunk_FUN_02dd3144();
                    /* catch() { ... } // from try @ 054be624 with catch @ 054bede4 */
                    /* catch() { ... } // from try @ 054be60c with catch @ 054bede8 */
                    /* catch() { ... } // from try @ 054becd4 with catch @ 054bedec */
                    /* catch() { ... } // from try @ 054beaa0 with catch @ 054bedf0 */
    uVar9 = thunk_FUN_02dfd288(PTR_DAT_06a21b48);
                    /* catch() { ... } // from try @ 054becd0 with catch @ 054bedf4 */
                    /* catch() { ... } // from try @ 054beccc with catch @ 054bedf8 */
    FUN_0544bf54(uVar8,uVar9,0);
LAB_054bedbc:
    uVar9 = thunk_FUN_02dfd288(PTR_DAT_06a21b50);
                    /* WARNING: Subroutine does not return */
    FUN_02d96724(uVar8,uVar9);
  }
  plVar4 = (long *)thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_069ff7d8);
  auVar14 = FUN_05377f4c(plVar4,0);
  puVar1 = PTR_DAT_06a0f540;
  uVar10 = *(uint *)(unaff_x19 + 0x18);
  if (0 < (int)uVar10) {
    lVar12 = 0;
    bVar2 = false;
    uVar13 = uVar10;
    do {
      if (uVar10 <= (uint)lVar12) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96868(auVar14._0_8_,auVar14._8_8_);
      }
      lVar11 = *(long *)(unaff_x19 + 0x20 + lVar12 * 8);
      if (lVar11 == 0) {
        thunk_FUN_02dfd288(PTR_DAT_069ff9a8);
        uVar8 = thunk_FUN_02dd3144();
        uVar9 = thunk_FUN_02dfd288(PTR_DAT_06a21b40);
        uVar7 = thunk_FUN_02dfd288(PTR_DAT_06a21b48);
        FUN_05453ed4(uVar8,uVar9,uVar7,0);
        goto LAB_054bedbc;
      }
      if (*(int *)(lVar11 + 0x10) != 0) {
        lVar5 = *(long *)puVar1;
        if (*(int *)(lVar5 + 0xe4) == 0) {
          thunk_FUN_02df485c();
          lVar5 = *(long *)puVar1;
        }
        iVar3 = FUN_05372478(lVar11,**(undefined8 **)(lVar5 + 0xb8),0);
        if (iVar3 != -1) {
          thunk_FUN_02dfd288(PTR_DAT_06a0ac70);
          uVar8 = thunk_FUN_02dd3144();
          uVar9 = thunk_FUN_02dfd288(PTR_DAT_06a21358);
          FUN_05452924(uVar8,uVar9,0);
          goto LAB_054bedbc;
        }
        if (bVar2) {
          if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
            thunk_FUN_02df485c();
          }
          if (plVar4 == (long *)0x0) goto LAB_054bed88;
          FUN_053798ac(plVar4,*(undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x10),0);
        }
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        uVar6 = FUN_054bd684(lVar11);
        if ((uVar6 & 1) == 0) {
          if (plVar4 == (long *)0x0) goto LAB_054bed88;
        }
        else {
          if (plVar4 == (long *)0x0) goto LAB_054bed88;
          FUN_05378f70(plVar4,0,0);
        }
        uVar13 = uVar13 - 1;
        auVar14 = FUN_053798ac(plVar4,lVar11,0);
        uVar8 = auVar14._0_8_;
        bVar2 = false;
        if (0 < (int)uVar13) {
          iVar3 = *(int *)(lVar11 + 0x10) + -1;
          auVar14._8_4_ = iVar3;
          auVar14._0_8_ = uVar8;
          auVar14._12_4_ = 0;
          if (0 < *(int *)(lVar11 + 0x10)) {
            auVar14 = FUN_053674f8(lVar11,iVar3,0);
            lVar11 = *(long *)puVar1;
            uVar10 = auVar14._0_4_;
            if (*(int *)(lVar11 + 0xe4) == 0) {
              auVar14 = thunk_FUN_02df485c(lVar11);
              lVar11 = *(long *)puVar1;
            }
            lVar5 = *(long *)(lVar11 + 0xb8);
            if ((uint)*(ushort *)(lVar5 + 10) != (uVar10 & 0xffff)) {
              if (*(int *)(lVar11 + 0xe4) == 0) {
                auVar14 = thunk_FUN_02df485c(lVar11);
                lVar11 = *(long *)puVar1;
                lVar5 = *(long *)(lVar11 + 0xb8);
              }
              if ((uint)*(ushort *)(lVar5 + 8) != (uVar10 & 0xffff)) {
                if (*(int *)(lVar11 + 0xe4) == 0) {
                  auVar14 = thunk_FUN_02df485c(lVar11);
                  lVar5 = *(long *)(*(long *)puVar1 + 0xb8);
                }
                bVar2 = (uint)*(ushort *)(lVar5 + 0x18) != (uVar10 & 0xffff);
                goto LAB_054bed04;
              }
            }
            bVar2 = false;
          }
        }
      }
LAB_054bed04:
      uVar10 = *(uint *)(unaff_x19 + 0x18);
      lVar12 = lVar12 + 1;
    } while ((int)lVar12 < (int)uVar10);
  }
  if (plVar4 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x054bed38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar4 + 0x168))(plVar4,*(undefined8 *)(*plVar4 + 0x170));
    return;
  }
LAB_054bed88:
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


