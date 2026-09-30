/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.Float3X3$$Multiply
ENTRY_POINT: 07750604
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_12;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_Float3X3__Multiply(undefined1 param_1 [16])

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  long unaff_x19;
  undefined8 *unaff_x20;
  undefined8 *unaff_x21;
  long *unaff_x22;
  undefined8 uVar7;
  int unaff_w27;
  long unaff_x28;
  undefined8 *unaff_x29;
  int in_stack_00000008;
  int in_stack_00000010;
  int in_stack_00000018;
  
  *(long *)(unaff_x19 + 0x128) = param_1._8_8_;
  *(long *)(unaff_x19 + 0x120) = param_1._0_8_;
  plVar2 = (long *)FUN_04447c90(*unaff_x29,1);
  lVar3 = FUN_07a4ce38(*(long *)(unaff_x28 + 0x78) + 0x20,0);
  if (plVar2 != (long *)0x0) {
    if ((lVar3 != 0) &&
       (lVar4 = thunk_FUN_04485110(lVar3,*(undefined8 *)(*plVar2 + 0x40)), lVar4 == 0)) {
LAB_07750b14:
      uVar7 = thunk_FUN_04491d98();
                    /* WARNING: Subroutine does not return */
      FUN_04447d10(uVar7,0);
    }
    if ((int)plVar2[3] == 0) {
LAB_07750b10:
                    /* WARNING: Subroutine does not return */
      FUN_04447e4c();
    }
    plVar2[4] = lVar3;
    thunk_FUN_044bb4b4(plVar2 + 4,lVar3);
    lVar3 = (**(code **)(*unaff_x22 + 0x3f8))();
    uVar7 = *unaff_x21;
    plVar2 = (long *)FUN_04447c90(*unaff_x20,1);
    in_stack_00000010 = unaff_w27 + 8;
    lVar4 = thunk_FUN_04484e3c(*(undefined8 *)(unaff_x28 + 0x48),&stack0x00000010);
    if (plVar2 != (long *)0x0) {
      if ((lVar4 != 0) &&
         (lVar5 = thunk_FUN_04485110(lVar4,*(undefined8 *)(*plVar2 + 0x40)), lVar5 == 0))
      goto LAB_07750b14;
      puVar1 = PTR_DAT_09f20d20;
      if ((int)plVar2[3] == 0) goto LAB_07750b10;
      plVar2[4] = lVar4;
      thunk_FUN_044bb4b4(plVar2 + 4,lVar4);
      if ((lVar3 != 0) &&
         (plVar2 = (long *)FUN_0796aedc(lVar3,uVar7,plVar2,0), plVar2 != (long *)0x0)) {
        if (*(long *)(*plVar2 + 0x40) != *(long *)(*(long *)PTR_DAT_09f32658 + 0x40))
        goto LAB_07750b20;
        puVar6 = (undefined8 *)thunk_FUN_04485360();
        uVar7 = *puVar6;
        *(undefined8 *)(unaff_x19 + 0x118) = puVar6[1];
        *(undefined8 *)(unaff_x19 + 0x110) = uVar7;
        if ((*(byte *)(unaff_x19 + 9) >> 4 & 1) == 0) {
          return;
        }
        plVar2 = (long *)FUN_04447c90(*unaff_x29,1);
        uVar7 = *(undefined8 *)PTR_DAT_09f27048;
        if (*(int *)(*(long *)(unaff_x28 + 0xe0) + 0xe4) == 0) {
          thunk_FUN_044a54b4(*(long *)(unaff_x28 + 0xe0));
        }
        lVar3 = FUN_07a4ce38(uVar7,0);
        if (plVar2 != (long *)0x0) {
          if ((lVar3 != 0) &&
             (lVar4 = thunk_FUN_04485110(lVar3,*(undefined8 *)(*plVar2 + 0x40)), lVar4 == 0))
          goto LAB_07750b14;
          if ((int)plVar2[3] == 0) goto LAB_07750b10;
          plVar2[4] = lVar3;
          thunk_FUN_044bb4b4(plVar2 + 4,lVar3);
          if (unaff_x22 != (long *)0x0) {
            lVar3 = (**(code **)(*unaff_x22 + 0x3f8))();
            uVar7 = *unaff_x21;
            plVar2 = (long *)FUN_04447c90(*(undefined8 *)puVar1,1);
            in_stack_00000018 = unaff_w27 + 0xc;
            lVar4 = thunk_FUN_04484e3c(*(undefined8 *)(unaff_x28 + 0x48),&stack0x00000018);
            if (plVar2 != (long *)0x0) {
              if ((lVar4 != 0) &&
                 (lVar5 = thunk_FUN_04485110(lVar4,*(undefined8 *)(*plVar2 + 0x40)), lVar5 == 0))
              goto LAB_07750b14;
              if ((int)plVar2[3] == 0) goto LAB_07750b10;
              plVar2[4] = lVar4;
              thunk_FUN_044bb4b4(plVar2 + 4,lVar4);
              if ((lVar3 != 0) &&
                 (plVar2 = (long *)FUN_0796aedc(lVar3,uVar7,plVar2,0), plVar2 != (long *)0x0)) {
                if (*(long *)(*plVar2 + 0x40) != *(long *)(*(long *)PTR_DAT_09f32680 + 0x40))
                goto LAB_07750b20;
                puVar6 = (undefined8 *)thunk_FUN_04485360();
                uVar7 = *puVar6;
                *(undefined8 *)(unaff_x19 + 0x108) = puVar6[1];
                *(undefined8 *)(unaff_x19 + 0x100) = uVar7;
                if (in_stack_00000008 != 7) {
                  return;
                }
                plVar2 = (long *)FUN_04447c90(*unaff_x29,1);
                uVar7 = *(undefined8 *)PTR_DAT_09f27068;
                if (*(int *)(*(long *)(unaff_x28 + 0xe0) + 0xe4) == 0) {
                  thunk_FUN_044a54b4(*(long *)(unaff_x28 + 0xe0));
                }
                lVar3 = FUN_07a4ce38(uVar7,0);
                if (plVar2 != (long *)0x0) {
                  if ((lVar3 != 0) &&
                     (lVar4 = thunk_FUN_04485110(lVar3,*(undefined8 *)(*plVar2 + 0x40)), lVar4 == 0)
                     ) goto LAB_07750b14;
                  if ((int)plVar2[3] == 0) goto LAB_07750b10;
                  plVar2[4] = lVar3;
                  thunk_FUN_044bb4b4(plVar2 + 4,lVar3);
                  lVar3 = (**(code **)(*unaff_x22 + 0x3f8))();
                  uVar7 = *unaff_x21;
                  plVar2 = (long *)FUN_04447c90(*(undefined8 *)PTR_DAT_09f20d20,1);
                  in_stack_00000018 = unaff_w27 + 0xc;
                  lVar4 = thunk_FUN_04484e3c(*(undefined8 *)(unaff_x28 + 0x48),&stack0x00000018);
                  if (plVar2 != (long *)0x0) {
                    if ((lVar4 != 0) &&
                       (lVar5 = thunk_FUN_04485110(lVar4,*(undefined8 *)(*plVar2 + 0x40)),
                       lVar5 == 0)) goto LAB_07750b14;
                    if ((int)plVar2[3] == 0) goto LAB_07750b10;
                    plVar2[4] = lVar4;
                    thunk_FUN_044bb4b4(plVar2 + 4,lVar4);
                    if ((lVar3 != 0) &&
                       (plVar2 = (long *)FUN_0796aedc(lVar3,uVar7,plVar2,0), plVar2 != (long *)0x0))
                    {
                      if (*(long *)(*plVar2 + 0x40) != *(long *)(*(long *)PTR_DAT_09f32668 + 0x40))
                      {
LAB_07750b20:
                    /* WARNING: Subroutine does not return */
                        FUN_044481e4();
                      }
                      puVar6 = (undefined8 *)thunk_FUN_04485360();
                      uVar7 = *puVar6;
                      *(undefined8 *)(unaff_x19 + 0x128) = puVar6[1];
                      *(undefined8 *)(unaff_x19 + 0x120) = uVar7;
                      plVar2 = (long *)FUN_04447c90(*unaff_x29,1);
                      lVar3 = FUN_07a4ce38(*(long *)(unaff_x28 + 0x78) + 0x20,0);
                      if (plVar2 != (long *)0x0) {
                        if ((lVar3 != 0) &&
                           (lVar4 = thunk_FUN_04485110(lVar3,*(undefined8 *)(*plVar2 + 0x40)),
                           lVar4 == 0)) goto LAB_07750b14;
                        if ((int)plVar2[3] == 0) goto LAB_07750b10;
                        plVar2[4] = lVar3;
                        thunk_FUN_044bb4b4(plVar2 + 4,lVar3);
                        lVar3 = (**(code **)(*unaff_x22 + 0x3f8))();
                        uVar7 = *unaff_x21;
                        plVar2 = (long *)FUN_04447c90(*(undefined8 *)PTR_DAT_09f20d20,1);
                        in_stack_00000010 = unaff_w27 + 0x14;
                        lVar4 = thunk_FUN_04484e3c(*(undefined8 *)(unaff_x28 + 0x48),
                                                   &stack0x00000010);
                        if (plVar2 != (long *)0x0) {
                          if ((lVar4 != 0) &&
                             (lVar5 = thunk_FUN_04485110(lVar4,*(undefined8 *)(*plVar2 + 0x40)),
                             lVar5 == 0)) goto LAB_07750b14;
                          if ((int)plVar2[3] == 0) goto LAB_07750b10;
                          plVar2[4] = lVar4;
                          thunk_FUN_044bb4b4(plVar2 + 4,lVar4);
                          if ((lVar3 != 0) &&
                             (plVar2 = (long *)FUN_0796aedc(lVar3,uVar7,plVar2,0),
                             plVar2 != (long *)0x0)) {
                            if (*(long *)(*plVar2 + 0x40) ==
                                *(long *)(*(long *)PTR_DAT_09f32658 + 0x40)) {
                              puVar6 = (undefined8 *)thunk_FUN_04485360();
                              uVar7 = *puVar6;
                              *(undefined8 *)(unaff_x19 + 0x118) = puVar6[1];
                              *(undefined8 *)(unaff_x19 + 0x110) = uVar7;
                              return;
                            }
                            goto LAB_07750b20;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


