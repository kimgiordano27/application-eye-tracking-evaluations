/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializerSettings$$get_FloatParseHandling
ENTRY_POINT: 0744e384
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


void Newtonsoft_Json_JsonSerializerSettings__get_FloatParseHandling(void)

{
  undefined *puVar1;
  undefined *puVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  uint uVar9;
  long unaff_x19;
  ulong unaff_x20;
  byte *unaff_x21;
  uint uVar10;
  byte *unaff_x22;
  long unaff_x23;
  long *unaff_x24;
  undefined8 uVar11;
  long *plVar12;
  long lVar13;
  long *plStack0000000000000000;
  long *in_stack_00000008;
  
  FUN_03f13384();
  FUN_03f13384(PTR_DAT_09116c80);
  FUN_03f13384(PTR_DAT_09114bf8);
  FUN_03f13384(PTR_DAT_09116c88);
  FUN_03f13384(PTR_DAT_09122c28);
  FUN_03f13384(PTR_DAT_09110d00);
  FUN_03f13384(PTR_DAT_0910fe70);
  *(undefined1 *)(unaff_x23 + 0x45) = 1;
  if ((unaff_x24 != (long *)0x0) &&
     (plStack0000000000000000 = (long *)(**(code **)(*unaff_x24 + 0x1c8))(),
     plStack0000000000000000 != (long *)0x0)) {
    uVar6 = (**(code **)(*plStack0000000000000000 + 0x3f8))
                      (plStack0000000000000000,*(undefined8 *)(*plStack0000000000000000 + 0x400));
    plVar12 = unaff_x24;
    plVar8 = in_stack_00000008;
    if (((uVar6 & 1) != 0) &&
       (uVar6 = (**(code **)(*plStack0000000000000000 + 0x408))
                          (plStack0000000000000000,*(undefined8 *)(*plStack0000000000000000 + 0x410)
                          ), plVar8 = in_stack_00000008, (uVar6 & 1) == 0)) {
      plStack0000000000000000 =
           (long *)(**(code **)(*plStack0000000000000000 + 0x488))
                             (plStack0000000000000000,
                              *(undefined8 *)(*plStack0000000000000000 + 0x490));
      if ((plStack0000000000000000 == (long *)0x0) ||
         (lVar7 = (**(code **)(*plStack0000000000000000 + 0x818))
                            (plStack0000000000000000,0x3e,
                             *(undefined8 *)(*plStack0000000000000000 + 0x820)), lVar7 == 0))
      goto LAB_0744e91c;
      uVar9 = *(uint *)(lVar7 + 0x18);
      plVar8 = in_stack_00000008;
      if (0 < (int)uVar9) {
        lVar13 = 0;
        do {
          if (uVar9 <= (uint)lVar13) goto LAB_0744e920;
          plVar12 = *(long **)(lVar7 + 0x20 + lVar13 * 8);
          if (plVar12 == (long *)0x0) goto LAB_0744e91c;
          iVar4 = (**(code **)(*plVar12 + 0x248))(plVar12,*(undefined8 *)(*plVar12 + 0x250));
          iVar5 = (**(code **)(*unaff_x24 + 0x248))();
          plVar8 = plVar12;
          if (iVar4 == iVar5) break;
          uVar9 = *(uint *)(lVar7 + 0x18);
          lVar13 = lVar13 + 1;
          plVar12 = unaff_x24;
          plVar8 = in_stack_00000008;
        } while ((int)lVar13 < (int)uVar9);
      }
    }
    in_stack_00000008 = plVar8;
    puVar1 = PTR_DAT_0910b550;
    uVar11 = *(undefined8 *)PTR_DAT_091312c8;
    if (*(int *)(*(long *)(PTR_DAT_0910b550 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_03f6fea8();
    }
    plVar8 = (long *)FUN_074c4a14(uVar11,0);
    puVar2 = PTR_DAT_091312d0;
    if (plVar8 != (long *)0x0) {
      bVar3 = (**(code **)(*plVar8 + 0x2d8))
                        (plVar8,plStack0000000000000000,*(undefined8 *)(*plVar8 + 0x2e0));
      *unaff_x21 = bVar3 & 1;
      uVar11 = FUN_074c4a14(*(undefined8 *)puVar2,0);
      uVar6 = FUN_073e6bc8(plVar12,uVar11,0);
      if ((uVar6 & 1) == 0) {
        uVar11 = *(undefined8 *)puVar2;
        if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
          thunk_FUN_03f6fea8();
        }
        uVar11 = FUN_074c4a14(uVar11,0);
        bVar3 = FUN_073e6bc8(plStack0000000000000000,uVar11,0);
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
          if (plStack0000000000000000 != (long *)0x0) {
            (**(code **)(*plStack0000000000000000 + 0x168))
                      (plStack0000000000000000,*(undefined8 *)(*plStack0000000000000000 + 0x170));
            FUN_07331848();
            FUN_07331848();
            if (in_stack_00000008 != (long *)0x0) {
              (**(code **)(*in_stack_00000008 + 0x1b8))
                        (in_stack_00000008,*(undefined8 *)(*in_stack_00000008 + 0x1c0));
              FUN_07331848();
              if (in_stack_00000008 != (long *)0x0) {
                uVar6 = (**(code **)(*in_stack_00000008 + 0x358))
                                  (in_stack_00000008,*(undefined8 *)(*in_stack_00000008 + 0x360));
                if ((uVar6 & 1) != 0) {
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
                  uVar9 = *(uint *)(lVar7 + 0x18);
                  if (0 < (int)uVar9) {
                    uVar10 = 0;
                    do {
                      if (uVar10 != 0) {
                        FUN_07331848();
                        uVar9 = *(uint *)(lVar7 + 0x18);
                      }
                      if (uVar9 <= uVar10) goto LAB_0744e920;
                      plVar12 = *(long **)(lVar7 + (long)(int)uVar10 * 8 + 0x20);
                      if (plVar12 == (long *)0x0) goto LAB_0744e91c;
                      (**(code **)(*plVar12 + 0x1b8))(plVar12,*(undefined8 *)(*plVar12 + 0x1c0));
                      FUN_07331848();
                      uVar9 = *(uint *)(lVar7 + 0x18);
                      uVar10 = uVar10 + 1;
                    } while ((int)uVar10 < (int)uVar9);
                  }
                  FUN_07331848();
                }
                if (in_stack_00000008 != (long *)0x0) {
                  lVar7 = (**(code **)(*in_stack_00000008 + 600))
                                    (in_stack_00000008,*(undefined8 *)(*in_stack_00000008 + 0x260));
                  FUN_07331848();
                  if (lVar7 != 0) {
                    uVar9 = *(uint *)(lVar7 + 0x18);
                    if (0 < (int)uVar9) {
                      uVar10 = 0;
                      do {
                        if (uVar10 != 0) {
                          FUN_07331848();
                          uVar9 = *(uint *)(lVar7 + 0x18);
                        }
                        if (uVar9 <= uVar10) {
LAB_0744e920:
                    /* WARNING: Subroutine does not return */
                          FUN_03f13634();
                        }
                        plVar8 = (long *)(lVar7 + (long)(int)uVar10 * 8 + 0x20);
                        plVar12 = (long *)*plVar8;
                        if (((plVar12 == (long *)0x0) ||
                            (plVar12 = (long *)(**(code **)(*plVar12 + 0x1e8))
                                                         (plVar12,*(undefined8 *)(*plVar12 + 0x1f0))
                            , plVar12 == (long *)0x0)) ||
                           ((uVar6 = (**(code **)(*plVar12 + 0x3f8))
                                               (plVar12,*(undefined8 *)(*plVar12 + 0x400)),
                            (uVar6 & 1) != 0 &&
                            ((uVar6 = (**(code **)(*plVar12 + 0x408))
                                                (plVar12,*(undefined8 *)(*plVar12 + 0x410)),
                             (uVar6 & 1) == 0 &&
                             (plVar12 = (long *)(**(code **)(*plVar12 + 0x488))
                                                          (plVar12,*(undefined8 *)(*plVar12 + 0x490)
                                                          ), plVar12 == (long *)0x0))))))
                        goto LAB_0744e91c;
                        (**(code **)(*plVar12 + 0x168))(plVar12,*(undefined8 *)(*plVar12 + 0x170));
                        FUN_07331848();
                        if (*(uint *)(lVar7 + 0x18) <= uVar10) goto LAB_0744e920;
                        plVar12 = (long *)*plVar8;
                        if (plVar12 == (long *)0x0) goto LAB_0744e91c;
                        lVar13 = (**(code **)(*plVar12 + 0x1d8))
                                           (plVar12,*(undefined8 *)(*plVar12 + 0x1e0));
                        if (lVar13 != 0) {
                          FUN_07331848();
                          if (*(uint *)(lVar7 + 0x18) <= uVar10) goto LAB_0744e920;
                          plVar8 = (long *)*plVar8;
                          if (plVar8 == (long *)0x0) goto LAB_0744e91c;
                          (**(code **)(*plVar8 + 0x1d8))(plVar8,*(undefined8 *)(*plVar8 + 0x1e0));
                          FUN_07331848();
                        }
                        uVar9 = *(uint *)(lVar7 + 0x18);
                        uVar10 = uVar10 + 1;
                      } while ((int)uVar10 < (int)uVar9);
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


