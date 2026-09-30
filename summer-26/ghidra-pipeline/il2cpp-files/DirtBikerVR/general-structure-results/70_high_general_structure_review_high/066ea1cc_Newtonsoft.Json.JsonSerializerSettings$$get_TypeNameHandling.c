/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializerSettings$$get_TypeNameHandling
ENTRY_POINT: 066ea1cc
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_12;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_JsonSerializerSettings__get_TypeNameHandling(void)

{
  undefined *puVar1;
  byte bVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  uint uVar6;
  long lVar7;
  long unaff_x19;
  ulong unaff_x20;
  byte *unaff_x21;
  uint uVar8;
  byte *unaff_x22;
  undefined8 uVar9;
  long *plVar10;
  long unaff_x26;
  long *in_stack_00000000;
  long *in_stack_00000008;
  
  plVar3 = (long *)FUN_0675ff58();
  puVar1 = PTR_DAT_084a7b18;
  if (plVar3 != (long *)0x0) {
    bVar2 = (**(code **)(*plVar3 + 0x2b8))();
    *unaff_x21 = bVar2 & 1;
    FUN_0675ff58(*(undefined8 *)puVar1,0);
    uVar4 = FUN_06684430();
    if ((uVar4 & 1) != 0) {
      *unaff_x22 = 1;
      return;
    }
    uVar9 = *(undefined8 *)puVar1;
    if (*(int *)(*(long *)(unaff_x26 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    FUN_0675ff58(uVar9,0);
    bVar2 = FUN_06684430();
    *unaff_x22 = bVar2 & 1;
    if ((bVar2 & 1) != 0) {
      return;
    }
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
          uVar4 = (**(code **)(*in_stack_00000008 + 0x318))
                            (in_stack_00000008,*(undefined8 *)(*in_stack_00000008 + 800));
          if ((uVar4 & 1) != 0) {
            if (in_stack_00000008 == (long *)0x0) goto LAB_066ea5f4;
            lVar7 = *in_stack_00000008;
            bVar2 = *(byte *)(*(long *)PTR_DAT_08497210 + 0x130);
            if ((*(byte *)(lVar7 + 0x130) < bVar2) ||
               (*(long *)(*(long *)(lVar7 + 200) + (ulong)bVar2 * 8 + -8) !=
                *(long *)PTR_DAT_08497210)) {
                    /* WARNING: Subroutine does not return */
              FUN_03a8ad40();
            }
            in_stack_00000008 =
                 (long *)(**(code **)(lVar7 + 0x408))
                                   (in_stack_00000008,*(undefined8 *)(lVar7 + 0x410));
            if (in_stack_00000008 == (long *)0x0) goto LAB_066ea5f4;
            lVar7 = (**(code **)(*in_stack_00000008 + 0x338))
                              (in_stack_00000008,*(undefined8 *)(*in_stack_00000008 + 0x340));
            FUN_065d8050();
            if (lVar7 == 0) goto LAB_066ea5f4;
            uVar6 = *(uint *)(lVar7 + 0x18);
            if (0 < (int)uVar6) {
              uVar8 = 0;
              do {
                if (uVar8 != 0) {
                  FUN_065d8050();
                  uVar6 = *(uint *)(lVar7 + 0x18);
                }
                if (uVar6 <= uVar8) goto LAB_066ea5f8;
                plVar3 = *(long **)(lVar7 + (long)(int)uVar8 * 8 + 0x20);
                if (plVar3 == (long *)0x0) goto LAB_066ea5f4;
                (**(code **)(*plVar3 + 0x1b8))(plVar3,*(undefined8 *)(*plVar3 + 0x1c0));
                FUN_065d8050();
                uVar6 = *(uint *)(lVar7 + 0x18);
                uVar8 = uVar8 + 1;
              } while ((int)uVar8 < (int)uVar6);
            }
            FUN_065d8050();
          }
          if (in_stack_00000008 != (long *)0x0) {
            lVar7 = (**(code **)(*in_stack_00000008 + 600))
                              (in_stack_00000008,*(undefined8 *)(*in_stack_00000008 + 0x260));
            FUN_065d8050();
            if (lVar7 != 0) {
              uVar6 = *(uint *)(lVar7 + 0x18);
              if (0 < (int)uVar6) {
                uVar8 = 0;
                do {
                  if (uVar8 != 0) {
                    FUN_065d8050();
                    uVar6 = *(uint *)(lVar7 + 0x18);
                  }
                  if (uVar6 <= uVar8) {
LAB_066ea5f8:
                    /* WARNING: Subroutine does not return */
                    FUN_03a8a9c8();
                  }
                  plVar10 = (long *)(lVar7 + (long)(int)uVar8 * 8 + 0x20);
                  plVar3 = (long *)*plVar10;
                  if (((plVar3 == (long *)0x0) ||
                      (plVar3 = (long *)(**(code **)(*plVar3 + 0x1e8))
                                                  (plVar3,*(undefined8 *)(*plVar3 + 0x1f0)),
                      plVar3 == (long *)0x0)) ||
                     ((uVar4 = (**(code **)(*plVar3 + 0x3d8))
                                         (plVar3,*(undefined8 *)(*plVar3 + 0x3e0)), (uVar4 & 1) != 0
                      && ((uVar4 = (**(code **)(*plVar3 + 1000))
                                             (plVar3,*(undefined8 *)(*plVar3 + 0x3f0)),
                          (uVar4 & 1) == 0 &&
                          (plVar3 = (long *)(**(code **)(*plVar3 + 0x458))
                                                      (plVar3,*(undefined8 *)(*plVar3 + 0x460)),
                          plVar3 == (long *)0x0)))))) goto LAB_066ea5f4;
                  (**(code **)(*plVar3 + 0x168))(plVar3,*(undefined8 *)(*plVar3 + 0x170));
                  FUN_065d8050();
                  if (*(uint *)(lVar7 + 0x18) <= uVar8) goto LAB_066ea5f8;
                  plVar3 = (long *)*plVar10;
                  if (plVar3 == (long *)0x0) goto LAB_066ea5f4;
                  lVar5 = (**(code **)(*plVar3 + 0x1d8))(plVar3,*(undefined8 *)(*plVar3 + 0x1e0));
                  if (lVar5 != 0) {
                    FUN_065d8050();
                    if (*(uint *)(lVar7 + 0x18) <= uVar8) goto LAB_066ea5f8;
                    plVar10 = (long *)*plVar10;
                    if (plVar10 == (long *)0x0) goto LAB_066ea5f4;
                    (**(code **)(*plVar10 + 0x1d8))(plVar10,*(undefined8 *)(*plVar10 + 0x1e0));
                    FUN_065d8050();
                  }
                  uVar6 = *(uint *)(lVar7 + 0x18);
                  uVar8 = uVar8 + 1;
                } while ((int)uVar8 < (int)uVar6);
              }
              FUN_065d8050();
              return;
            }
          }
        }
      }
    }
  }
LAB_066ea5f4:
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


