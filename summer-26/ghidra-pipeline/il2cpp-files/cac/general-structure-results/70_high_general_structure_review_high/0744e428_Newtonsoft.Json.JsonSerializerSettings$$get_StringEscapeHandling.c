/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializerSettings$$get_StringEscapeHandling
ENTRY_POINT: 0744e428
PROGRAM: cac-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_14;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_JsonSerializerSettings__get_StringEscapeHandling(void)

{
  undefined *puVar1;
  undefined *puVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  ulong uVar9;
  uint uVar10;
  long unaff_x19;
  ulong unaff_x20;
  byte *unaff_x21;
  uint uVar11;
  byte *unaff_x22;
  long *unaff_x23;
  long *unaff_x24;
  undefined8 uVar12;
  long *plVar13;
  long lVar14;
  long *in_stack_00000008;
  
  plVar6 = (long *)(**(code **)(*unaff_x23 + 0x488))();
  if ((plVar6 != (long *)0x0) &&
     (lVar7 = (**(code **)(*plVar6 + 0x818))(plVar6,0x3e,*(undefined8 *)(*plVar6 + 0x820)),
     lVar7 != 0)) {
    uVar10 = *(uint *)(lVar7 + 0x18);
    plVar13 = unaff_x24;
    plVar8 = in_stack_00000008;
    if (0 < (int)uVar10) {
      lVar14 = 0;
      do {
        if (uVar10 <= (uint)lVar14) goto LAB_0744e920;
        plVar13 = *(long **)(lVar7 + 0x20 + lVar14 * 8);
        if (plVar13 == (long *)0x0) goto LAB_0744e91c;
        iVar4 = (**(code **)(*plVar13 + 0x248))(plVar13,*(undefined8 *)(*plVar13 + 0x250));
        iVar5 = (**(code **)(*unaff_x24 + 0x248))();
        plVar8 = plVar13;
        if (iVar4 == iVar5) break;
        uVar10 = *(uint *)(lVar7 + 0x18);
        lVar14 = lVar14 + 1;
        plVar13 = unaff_x24;
        plVar8 = in_stack_00000008;
      } while ((int)lVar14 < (int)uVar10);
    }
    in_stack_00000008 = plVar8;
    puVar1 = PTR_DAT_0910b550;
    uVar12 = *(undefined8 *)PTR_DAT_091312c8;
    if (*(int *)(*(long *)(PTR_DAT_0910b550 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_03f6fea8();
    }
    plVar8 = (long *)FUN_074c4a14(uVar12,0);
    puVar2 = PTR_DAT_091312d0;
    if (plVar8 != (long *)0x0) {
      bVar3 = (**(code **)(*plVar8 + 0x2d8))(plVar8,plVar6,*(undefined8 *)(*plVar8 + 0x2e0));
      *unaff_x21 = bVar3 & 1;
      uVar12 = FUN_074c4a14(*(undefined8 *)puVar2,0);
      uVar9 = FUN_073e6bc8(plVar13,uVar12,0);
      if ((uVar9 & 1) == 0) {
        uVar12 = *(undefined8 *)puVar2;
        if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
          thunk_FUN_03f6fea8();
        }
        uVar12 = FUN_074c4a14(uVar12,0);
        bVar3 = FUN_073e6bc8(plVar6,uVar12,0);
        *unaff_x22 = bVar3 & 1;
        if ((bVar3 & 1) == 0) {
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
          if (plVar6 != (long *)0x0) {
            (**(code **)(*plVar6 + 0x168))(plVar6,*(undefined8 *)(*plVar6 + 0x170));
            FUN_07331848();
            FUN_07331848();
            if (in_stack_00000008 != (long *)0x0) {
              (**(code **)(*in_stack_00000008 + 0x1b8))
                        (in_stack_00000008,*(undefined8 *)(*in_stack_00000008 + 0x1c0));
              FUN_07331848();
              if (in_stack_00000008 != (long *)0x0) {
                uVar9 = (**(code **)(*in_stack_00000008 + 0x358))
                                  (in_stack_00000008,*(undefined8 *)(*in_stack_00000008 + 0x360));
                if ((uVar9 & 1) != 0) {
                  if (in_stack_00000008 == (long *)0x0) goto LAB_0744e91c;
                  lVar7 = *in_stack_00000008;
                  bVar3 = *(byte *)(*(long *)PTR_DAT_09113e70 + 0x130);
                  if ((*(byte *)(lVar7 + 0x130) < bVar3) ||
                     (*(long *)(*(long *)(lVar7 + 200) + (ulong)bVar3 * 8 + -8) !=
                      *(long *)PTR_DAT_09113e70)) {
                    /* WARNING: Subroutine does not return */
                    FUN_03f139ac();
                  }
                  in_stack_00000008 =
                       (long *)(**(code **)(lVar7 + 0x448))
                                         (in_stack_00000008,*(undefined8 *)(lVar7 + 0x450));
                  if (in_stack_00000008 == (long *)0x0) goto LAB_0744e91c;
                  lVar7 = (**(code **)(*in_stack_00000008 + 0x378))
                                    (in_stack_00000008,*(undefined8 *)(*in_stack_00000008 + 0x380));
                  FUN_07331848();
                  if (lVar7 == 0) goto LAB_0744e91c;
                  uVar10 = *(uint *)(lVar7 + 0x18);
                  if (0 < (int)uVar10) {
                    uVar11 = 0;
                    do {
                      if (uVar11 != 0) {
                        FUN_07331848();
                        uVar10 = *(uint *)(lVar7 + 0x18);
                      }
                      if (uVar10 <= uVar11) goto LAB_0744e920;
                      plVar6 = *(long **)(lVar7 + (long)(int)uVar11 * 8 + 0x20);
                      if (plVar6 == (long *)0x0) goto LAB_0744e91c;
                      (**(code **)(*plVar6 + 0x1b8))(plVar6,*(undefined8 *)(*plVar6 + 0x1c0));
                      FUN_07331848();
                      uVar10 = *(uint *)(lVar7 + 0x18);
                      uVar11 = uVar11 + 1;
                    } while ((int)uVar11 < (int)uVar10);
                  }
                  FUN_07331848();
                }
                if (in_stack_00000008 != (long *)0x0) {
                  lVar7 = (**(code **)(*in_stack_00000008 + 600))
                                    (in_stack_00000008,*(undefined8 *)(*in_stack_00000008 + 0x260));
                  FUN_07331848();
                  if (lVar7 != 0) {
                    uVar10 = *(uint *)(lVar7 + 0x18);
                    if (0 < (int)uVar10) {
                      uVar11 = 0;
                      do {
                        if (uVar11 != 0) {
                          FUN_07331848();
                          uVar10 = *(uint *)(lVar7 + 0x18);
                        }
                        if (uVar10 <= uVar11) {
LAB_0744e920:
                    /* WARNING: Subroutine does not return */
                          FUN_03f13634();
                        }
                        plVar13 = (long *)(lVar7 + (long)(int)uVar11 * 8 + 0x20);
                        plVar6 = (long *)*plVar13;
                        if (((plVar6 == (long *)0x0) ||
                            (plVar6 = (long *)(**(code **)(*plVar6 + 0x1e8))
                                                        (plVar6,*(undefined8 *)(*plVar6 + 0x1f0)),
                            plVar6 == (long *)0x0)) ||
                           ((uVar9 = (**(code **)(*plVar6 + 0x3f8))
                                               (plVar6,*(undefined8 *)(*plVar6 + 0x400)),
                            (uVar9 & 1) != 0 &&
                            ((uVar9 = (**(code **)(*plVar6 + 0x408))
                                                (plVar6,*(undefined8 *)(*plVar6 + 0x410)),
                             (uVar9 & 1) == 0 &&
                             (plVar6 = (long *)(**(code **)(*plVar6 + 0x488))
                                                         (plVar6,*(undefined8 *)(*plVar6 + 0x490)),
                             plVar6 == (long *)0x0)))))) goto LAB_0744e91c;
                        (**(code **)(*plVar6 + 0x168))(plVar6,*(undefined8 *)(*plVar6 + 0x170));
                        FUN_07331848();
                        if (*(uint *)(lVar7 + 0x18) <= uVar11) goto LAB_0744e920;
                        plVar6 = (long *)*plVar13;
                        if (plVar6 == (long *)0x0) goto LAB_0744e91c;
                        lVar14 = (**(code **)(*plVar6 + 0x1d8))
                                           (plVar6,*(undefined8 *)(*plVar6 + 0x1e0));
                        if (lVar14 != 0) {
                          FUN_07331848();
                          if (*(uint *)(lVar7 + 0x18) <= uVar11) goto LAB_0744e920;
                          plVar13 = (long *)*plVar13;
                          if (plVar13 == (long *)0x0) goto LAB_0744e91c;
                          (**(code **)(*plVar13 + 0x1d8))(plVar13,*(undefined8 *)(*plVar13 + 0x1e0))
                          ;
                          FUN_07331848();
                        }
                        uVar10 = *(uint *)(lVar7 + 0x18);
                        uVar11 = uVar11 + 1;
                      } while ((int)uVar11 < (int)uVar10);
                    }
                    FUN_07331848();
                    return;
                  }
                }
              }
            }
          }
          goto LAB_0744e91c;
        }
      }
      else {
        *unaff_x22 = 1;
      }
      return;
    }
  }
LAB_0744e91c:
                    /* WARNING: Subroutine does not return */
  FUN_03f1362c();
}


