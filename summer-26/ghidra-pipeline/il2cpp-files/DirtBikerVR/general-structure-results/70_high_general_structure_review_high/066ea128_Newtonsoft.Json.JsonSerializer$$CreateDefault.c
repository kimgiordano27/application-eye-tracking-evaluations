/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$CreateDefault
ENTRY_POINT: 066ea128
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_15;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_JsonSerializer__CreateDefault
               (long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  uint uVar9;
  long unaff_x19;
  ulong unaff_x20;
  byte *unaff_x21;
  uint uVar10;
  byte *unaff_x22;
  long *unaff_x24;
  undefined8 uVar11;
  long *plVar12;
  long lVar13;
  long *in_stack_00000000;
  long *in_stack_00000008;
  
  lVar6 = (**(code **)(param_1 + 0x7c8))(param_2,param_3,*(undefined8 *)(param_1 + 2000));
  if (lVar6 != 0) {
    uVar9 = *(uint *)(lVar6 + 0x18);
    plVar12 = unaff_x24;
    plVar7 = in_stack_00000008;
    if (0 < (int)uVar9) {
      lVar13 = 0;
      do {
        if (uVar9 <= (uint)lVar13) goto LAB_066ea5f8;
        plVar12 = *(long **)(lVar6 + 0x20 + lVar13 * 8);
        if (plVar12 == (long *)0x0) goto LAB_066ea5f4;
        iVar4 = (**(code **)(*plVar12 + 0x248))(plVar12,*(undefined8 *)(*plVar12 + 0x250));
        iVar5 = (**(code **)(*unaff_x24 + 0x248))();
        plVar7 = plVar12;
        if (iVar4 == iVar5) break;
        uVar9 = *(uint *)(lVar6 + 0x18);
        lVar13 = lVar13 + 1;
        plVar12 = unaff_x24;
        plVar7 = in_stack_00000008;
      } while ((int)lVar13 < (int)uVar9);
    }
    in_stack_00000008 = plVar7;
    puVar1 = PTR_DAT_08486760;
    uVar11 = *(undefined8 *)PTR_DAT_084a7b10;
    if (*(int *)(*(long *)(PTR_DAT_08486760 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    plVar7 = (long *)FUN_0675ff58(uVar11,0);
    puVar2 = PTR_DAT_084a7b18;
    if (plVar7 != (long *)0x0) {
      bVar3 = (**(code **)(*plVar7 + 0x2b8))();
      *unaff_x21 = bVar3 & 1;
      uVar11 = FUN_0675ff58(*(undefined8 *)puVar2,0);
      uVar8 = FUN_06684430(plVar12,uVar11,0);
      if ((uVar8 & 1) == 0) {
        uVar11 = *(undefined8 *)puVar2;
        if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
          thunk_FUN_03ae8be4();
        }
        FUN_0675ff58(uVar11,0);
        bVar3 = FUN_06684430();
        *unaff_x22 = bVar3 & 1;
        if ((bVar3 & 1) == 0) {
          if (*unaff_x21 != 0) {
            FUN_066ea600(&stack0x00000008);
          }
          if ((unaff_x20 & 1) == 0) {
            if (unaff_x19 == 0) goto LAB_066ea5f4;
          }
          else {
            FUN_06797008(0);
            if (unaff_x19 == 0) goto LAB_066ea5f4;
            FUN_065d8050();
          }
          FUN_065d8050();
          if (in_stack_00000000 != (long *)0x0) {
            (**(code **)(*in_stack_00000000 + 0x168))
                      (in_stack_00000000,*(undefined8 *)(*in_stack_00000000 + 0x170));
            FUN_065d8050();
            FUN_065d8050();
            if (in_stack_00000008 != (long *)0x0) {
              (**(code **)(*in_stack_00000008 + 0x1b8))
                        (in_stack_00000008,*(undefined8 *)(*in_stack_00000008 + 0x1c0));
              FUN_065d8050();
              if (in_stack_00000008 != (long *)0x0) {
                uVar8 = (**(code **)(*in_stack_00000008 + 0x318))
                                  (in_stack_00000008,*(undefined8 *)(*in_stack_00000008 + 800));
                if ((uVar8 & 1) != 0) {
                  if (in_stack_00000008 == (long *)0x0) goto LAB_066ea5f4;
                  lVar6 = *in_stack_00000008;
                  bVar3 = *(byte *)(*(long *)PTR_DAT_08497210 + 0x130);
                  if ((*(byte *)(lVar6 + 0x130) < bVar3) ||
                     (*(long *)(*(long *)(lVar6 + 200) + (ulong)bVar3 * 8 + -8) !=
                      *(long *)PTR_DAT_08497210)) {
                    /* WARNING: Subroutine does not return */
                    FUN_03a8ad40();
                  }
                  in_stack_00000008 =
                       (long *)(**(code **)(lVar6 + 0x408))
                                         (in_stack_00000008,*(undefined8 *)(lVar6 + 0x410));
                  if (in_stack_00000008 == (long *)0x0) goto LAB_066ea5f4;
                  lVar6 = (**(code **)(*in_stack_00000008 + 0x338))
                                    (in_stack_00000008,*(undefined8 *)(*in_stack_00000008 + 0x340));
                  FUN_065d8050();
                  if (lVar6 == 0) goto LAB_066ea5f4;
                  uVar9 = *(uint *)(lVar6 + 0x18);
                  if (0 < (int)uVar9) {
                    uVar10 = 0;
                    do {
                      if (uVar10 != 0) {
                        FUN_065d8050();
                        uVar9 = *(uint *)(lVar6 + 0x18);
                      }
                      if (uVar9 <= uVar10) goto LAB_066ea5f8;
                      plVar12 = *(long **)(lVar6 + (long)(int)uVar10 * 8 + 0x20);
                      if (plVar12 == (long *)0x0) goto LAB_066ea5f4;
                      (**(code **)(*plVar12 + 0x1b8))(plVar12,*(undefined8 *)(*plVar12 + 0x1c0));
                      FUN_065d8050();
                      uVar9 = *(uint *)(lVar6 + 0x18);
                      uVar10 = uVar10 + 1;
                    } while ((int)uVar10 < (int)uVar9);
                  }
                  FUN_065d8050();
                }
                if (in_stack_00000008 != (long *)0x0) {
                  lVar6 = (**(code **)(*in_stack_00000008 + 600))
                                    (in_stack_00000008,*(undefined8 *)(*in_stack_00000008 + 0x260));
                  FUN_065d8050();
                  if (lVar6 != 0) {
                    uVar9 = *(uint *)(lVar6 + 0x18);
                    if (0 < (int)uVar9) {
                      uVar10 = 0;
                      do {
                        if (uVar10 != 0) {
                          FUN_065d8050();
                          uVar9 = *(uint *)(lVar6 + 0x18);
                        }
                        if (uVar9 <= uVar10) {
LAB_066ea5f8:
                    /* WARNING: Subroutine does not return */
                          FUN_03a8a9c8();
                        }
                        plVar7 = (long *)(lVar6 + (long)(int)uVar10 * 8 + 0x20);
                        plVar12 = (long *)*plVar7;
                        if (((plVar12 == (long *)0x0) ||
                            (plVar12 = (long *)(**(code **)(*plVar12 + 0x1e8))
                                                         (plVar12,*(undefined8 *)(*plVar12 + 0x1f0))
                            , plVar12 == (long *)0x0)) ||
                           ((uVar8 = (**(code **)(*plVar12 + 0x3d8))
                                               (plVar12,*(undefined8 *)(*plVar12 + 0x3e0)),
                            (uVar8 & 1) != 0 &&
                            ((uVar8 = (**(code **)(*plVar12 + 1000))
                                                (plVar12,*(undefined8 *)(*plVar12 + 0x3f0)),
                             (uVar8 & 1) == 0 &&
                             (plVar12 = (long *)(**(code **)(*plVar12 + 0x458))
                                                          (plVar12,*(undefined8 *)(*plVar12 + 0x460)
                                                          ), plVar12 == (long *)0x0))))))
                        goto LAB_066ea5f4;
                        (**(code **)(*plVar12 + 0x168))(plVar12,*(undefined8 *)(*plVar12 + 0x170));
                        FUN_065d8050();
                        if (*(uint *)(lVar6 + 0x18) <= uVar10) goto LAB_066ea5f8;
                        plVar12 = (long *)*plVar7;
                        if (plVar12 == (long *)0x0) goto LAB_066ea5f4;
                        lVar13 = (**(code **)(*plVar12 + 0x1d8))
                                           (plVar12,*(undefined8 *)(*plVar12 + 0x1e0));
                        if (lVar13 != 0) {
                          FUN_065d8050();
                          if (*(uint *)(lVar6 + 0x18) <= uVar10) goto LAB_066ea5f8;
                          plVar7 = (long *)*plVar7;
                          if (plVar7 == (long *)0x0) goto LAB_066ea5f4;
                          (**(code **)(*plVar7 + 0x1d8))(plVar7,*(undefined8 *)(*plVar7 + 0x1e0));
                          FUN_065d8050();
                        }
                        uVar9 = *(uint *)(lVar6 + 0x18);
                        uVar10 = uVar10 + 1;
                      } while ((int)uVar10 < (int)uVar9);
                    }
                    FUN_065d8050();
                    return;
                  }
                }
              }
            }
          }
          goto LAB_066ea5f4;
        }
      }
      else {
        *unaff_x22 = 1;
      }
      return;
    }
  }
LAB_066ea5f4:
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


