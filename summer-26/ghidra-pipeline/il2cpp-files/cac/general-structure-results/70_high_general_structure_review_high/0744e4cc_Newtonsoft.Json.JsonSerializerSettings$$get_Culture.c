/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializerSettings$$get_Culture
ENTRY_POINT: 0744e4cc
PROGRAM: cac-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_12;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_JsonSerializerSettings__get_Culture(void)

{
  undefined *puVar1;
  undefined *puVar2;
  byte bVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  uint uVar7;
  long lVar8;
  long unaff_x19;
  ulong unaff_x20;
  byte *unaff_x21;
  uint uVar9;
  byte *unaff_x22;
  undefined8 uVar10;
  long *plVar11;
  long *in_stack_00000000;
  long *in_stack_00000008;
  
  puVar1 = PTR_DAT_0910b550;
  uVar10 = *(undefined8 *)PTR_DAT_091312c8;
  if (*(int *)(*(long *)(PTR_DAT_0910b550 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_03f6fea8();
  }
  plVar4 = (long *)FUN_074c4a14(uVar10,0);
  puVar2 = PTR_DAT_091312d0;
  if (plVar4 != (long *)0x0) {
    bVar3 = (**(code **)(*plVar4 + 0x2d8))();
                    /* try { // try from 0744e528 to 0754e607 has its CatchHandler @ 0744e528
                       catch() { ... } // from try @ 0744e528 with catch @ 0744e528
                       catch() { ... } // from try @ 0744e72c with catch @ 0744e528
                       catch() { ... } // from try @ 0744e7b4 with catch @ 0744e528
                       catch() { ... } // from try @ 0744e7c4 with catch @ 0744e528
                       catch() { ... } // from try @ 0744e828 with catch @ 0744e528 */
    *unaff_x21 = bVar3 & 1;
    FUN_074c4a14(*(undefined8 *)puVar2,0);
    uVar5 = FUN_073e6bc8();
    if ((uVar5 & 1) != 0) {
      *unaff_x22 = 1;
      return;
    }
    uVar10 = *(undefined8 *)puVar2;
    if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_03f6fea8();
    }
    FUN_074c4a14(uVar10,0);
    bVar3 = FUN_073e6bc8();
    *unaff_x22 = bVar3 & 1;
    if ((bVar3 & 1) != 0) {
      return;
    }
    if (*unaff_x21 != 0) {
      FUN_0744e928(&stack0x00000008);
    }
    if ((unaff_x20 & 1) == 0) {
      if (unaff_x19 == 0) goto LAB_0744e91c;
    }
    else {
      FUN_074fcefc(0);
      if (unaff_x19 == 0) goto LAB_0744e91c;
      FUN_07331848();
    }
    FUN_07331848();
    if (in_stack_00000000 != (long *)0x0) {
      (**(code **)(*in_stack_00000000 + 0x168))
                (in_stack_00000000,*(undefined8 *)(*in_stack_00000000 + 0x170));
      FUN_07331848();
      FUN_07331848();
      if (in_stack_00000008 != (long *)0x0) {
        (**(code **)(*in_stack_00000008 + 0x1b8))
                  (in_stack_00000008,*(undefined8 *)(*in_stack_00000008 + 0x1c0));
        FUN_07331848();
        if (in_stack_00000008 != (long *)0x0) {
          uVar5 = (**(code **)(*in_stack_00000008 + 0x358))
                            (in_stack_00000008,*(undefined8 *)(*in_stack_00000008 + 0x360));
          if ((uVar5 & 1) != 0) {
            if (in_stack_00000008 == (long *)0x0) goto LAB_0744e91c;
            lVar8 = *in_stack_00000008;
            bVar3 = *(byte *)(*(long *)PTR_DAT_09113e70 + 0x130);
            if ((*(byte *)(lVar8 + 0x130) < bVar3) ||
               (*(long *)(*(long *)(lVar8 + 200) + (ulong)bVar3 * 8 + -8) !=
                *(long *)PTR_DAT_09113e70)) {
                    /* WARNING: Subroutine does not return */
              FUN_03f139ac();
            }
            in_stack_00000008 =
                 (long *)(**(code **)(lVar8 + 0x448))
                                   (in_stack_00000008,*(undefined8 *)(lVar8 + 0x450));
            if (in_stack_00000008 == (long *)0x0) goto LAB_0744e91c;
            lVar8 = (**(code **)(*in_stack_00000008 + 0x378))
                              (in_stack_00000008,*(undefined8 *)(*in_stack_00000008 + 0x380));
            FUN_07331848();
            if (lVar8 == 0) goto LAB_0744e91c;
            uVar7 = *(uint *)(lVar8 + 0x18);
            if (0 < (int)uVar7) {
              uVar9 = 0;
              do {
                if (uVar9 != 0) {
                  FUN_07331848();
                  uVar7 = *(uint *)(lVar8 + 0x18);
                }
                if (uVar7 <= uVar9) goto LAB_0744e920;
                plVar4 = *(long **)(lVar8 + (long)(int)uVar9 * 8 + 0x20);
                if (plVar4 == (long *)0x0) goto LAB_0744e91c;
                (**(code **)(*plVar4 + 0x1b8))(plVar4,*(undefined8 *)(*plVar4 + 0x1c0));
                FUN_07331848();
                uVar7 = *(uint *)(lVar8 + 0x18);
                uVar9 = uVar9 + 1;
              } while ((int)uVar9 < (int)uVar7);
            }
            FUN_07331848();
          }
          if (in_stack_00000008 != (long *)0x0) {
            lVar8 = (**(code **)(*in_stack_00000008 + 600))
                              (in_stack_00000008,*(undefined8 *)(*in_stack_00000008 + 0x260));
            FUN_07331848();
            if (lVar8 != 0) {
              uVar7 = *(uint *)(lVar8 + 0x18);
              if (0 < (int)uVar7) {
                uVar9 = 0;
                do {
                  if (uVar9 != 0) {
                    FUN_07331848();
                    uVar7 = *(uint *)(lVar8 + 0x18);
                  }
                  if (uVar7 <= uVar9) {
LAB_0744e920:
                    /* WARNING: Subroutine does not return */
                    FUN_03f13634();
                  }
                  plVar11 = (long *)(lVar8 + (long)(int)uVar9 * 8 + 0x20);
                  plVar4 = (long *)*plVar11;
                  if (((plVar4 == (long *)0x0) ||
                      (plVar4 = (long *)(**(code **)(*plVar4 + 0x1e8))
                                                  (plVar4,*(undefined8 *)(*plVar4 + 0x1f0)),
                      plVar4 == (long *)0x0)) ||
                     ((uVar5 = (**(code **)(*plVar4 + 0x3f8))
                                         (plVar4,*(undefined8 *)(*plVar4 + 0x400)), (uVar5 & 1) != 0
                      && ((uVar5 = (**(code **)(*plVar4 + 0x408))
                                             (plVar4,*(undefined8 *)(*plVar4 + 0x410)),
                          (uVar5 & 1) == 0 &&
                          (plVar4 = (long *)(**(code **)(*plVar4 + 0x488))
                                                      (plVar4,*(undefined8 *)(*plVar4 + 0x490)),
                          plVar4 == (long *)0x0)))))) goto LAB_0744e91c;
                  (**(code **)(*plVar4 + 0x168))(plVar4,*(undefined8 *)(*plVar4 + 0x170));
                  FUN_07331848();
                  if (*(uint *)(lVar8 + 0x18) <= uVar9) goto LAB_0744e920;
                  plVar4 = (long *)*plVar11;
                  if (plVar4 == (long *)0x0) goto LAB_0744e91c;
                  lVar6 = (**(code **)(*plVar4 + 0x1d8))(plVar4,*(undefined8 *)(*plVar4 + 0x1e0));
                  if (lVar6 != 0) {
                    FUN_07331848();
                    if (*(uint *)(lVar8 + 0x18) <= uVar9) goto LAB_0744e920;
                    plVar11 = (long *)*plVar11;
                    if (plVar11 == (long *)0x0) goto LAB_0744e91c;
                    (**(code **)(*plVar11 + 0x1d8))(plVar11,*(undefined8 *)(*plVar11 + 0x1e0));
                    FUN_07331848();
                  }
                  uVar7 = *(uint *)(lVar8 + 0x18);
                  uVar9 = uVar9 + 1;
                } while ((int)uVar9 < (int)uVar7);
              }
              FUN_07331848();
              return;
            }
          }
        }
      }
    }
  }
LAB_0744e91c:
                    /* WARNING: Subroutine does not return */
  FUN_03f1362c();
}


