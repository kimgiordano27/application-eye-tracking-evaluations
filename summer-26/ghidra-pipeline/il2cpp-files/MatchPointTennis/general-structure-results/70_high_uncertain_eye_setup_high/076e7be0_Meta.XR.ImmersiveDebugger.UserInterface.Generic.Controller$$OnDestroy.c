/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.Controller$$OnDestroy
ENTRY_POINT: 076e7be0
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_21;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_Generic_Controller__OnDestroy(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  bool bVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  long *plVar7;
  long unaff_x19;
  undefined8 uVar8;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  
  FUN_0952a454(param_1,*(undefined1 *)(unaff_x19 + 0x41),0);
  if ((*(long *)(unaff_x19 + 0x140) != 0) &&
     (lVar4 = FUN_095259a0(*(long *)(unaff_x19 + 0x140),0), lVar4 != 0)) {
    FUN_0952a454(lVar4,*(undefined1 *)(unaff_x19 + 0x42),0);
    if (*(long *)(unaff_x19 + 0x148) != 0) {
      lVar4 = FUN_095259a0(*(long *)(unaff_x19 + 0x148),0);
      if (*(char *)(unaff_x19 + 0x43) == '\0') {
        bVar3 = *(char *)(unaff_x19 + 0x44) != '\0';
      }
      else {
        bVar3 = true;
      }
      if (lVar4 != 0) {
        FUN_0952a454(lVar4,bVar3,0);
        if ((*(long *)(unaff_x19 + 0x110) != 0) &&
           (lVar4 = FUN_095259a0(*(long *)(unaff_x19 + 0x110),0), lVar4 != 0)) {
          uVar5 = FUN_0952a518(lVar4,0);
          if ((uVar5 & 1) != 0) {
            if ((*(long *)(unaff_x19 + 0x110) == 0) ||
               (lVar4 = FUN_095259a0(*(long *)(unaff_x19 + 0x110),0), lVar4 == 0))
            goto LAB_076e80e4;
            FUN_0952a454(lVar4,0,0);
          }
          puVar2 = PTR_DAT_09f2f338;
          lVar4 = *(long *)(unaff_x19 + 0x118);
          if (lVar4 != 0) {
            uVar8 = *(undefined8 *)(lVar4 + 0x150);
            uVar6 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f2f338);
            FUN_0980b100();
            plVar7 = (long *)FUN_07a84204(uVar8,uVar6,0);
            if ((plVar7 != (long *)0x0) && (*plVar7 != *(long *)puVar2)) {
                    /* WARNING: Subroutine does not return */
              FUN_044481e4(plVar7);
            }
            FUN_0980bd10(lVar4,plVar7,0);
            if (*(long *)(unaff_x19 + 0x118) != 0) {
              lVar4 = *(long *)(*(long *)(unaff_x19 + 0x118) + 0x148);
              uVar6 = thunk_FUN_0448520c(*unaff_x24);
              FUN_06a389f0();
              if (lVar4 != 0) {
                FUN_06a40fa0(lVar4,uVar6,*unaff_x23);
                if (*(long *)(unaff_x19 + 0x118) != 0) {
                  lVar4 = *(long *)(*(long *)(unaff_x19 + 0x118) + 0x140);
                  uVar6 = thunk_FUN_0448520c(*unaff_x24);
                  FUN_06a389f0();
                  if (lVar4 != 0) {
                    FUN_06a40fa0(lVar4,uVar6,*unaff_x23);
                    puVar2 = PTR_DAT_09f1e5e8;
                    if (*(long *)(unaff_x19 + 0x120) != 0) {
                      lVar4 = *(long *)(*(long *)(unaff_x19 + 0x120) + 0x100);
                      uVar6 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f1e5e8);
                      FUN_09542000();
                      if (lVar4 != 0) {
                        FUN_095420d0(lVar4,uVar6,0);
                        if (*(long *)(unaff_x19 + 0x128) != 0) {
                          lVar4 = *(long *)(*(long *)(unaff_x19 + 0x128) + 0x100);
                          uVar6 = thunk_FUN_0448520c(*(undefined8 *)puVar2);
                          FUN_09542000();
                          if (lVar4 != 0) {
                            FUN_095420d0(lVar4,uVar6,0);
                            puVar1 = PTR_DAT_09f1e5d8;
                            if ((*(long *)(unaff_x19 + 0x130) != 0) &&
                               (lVar4 = FUN_04c6bfdc(*(long *)(unaff_x19 + 0x130),
                                                     *(undefined8 *)PTR_DAT_09f1e5d8), lVar4 != 0))
                            {
                              lVar4 = *(long *)(lVar4 + 0x100);
                              uVar6 = thunk_FUN_0448520c(*(undefined8 *)puVar2);
                              FUN_09542000();
                              if (lVar4 != 0) {
                                FUN_095420d0(lVar4,uVar6,0);
                                if ((*(long *)(unaff_x19 + 0x138) != 0) &&
                                   (lVar4 = FUN_04c6bfdc(*(long *)(unaff_x19 + 0x138),
                                                         *(undefined8 *)puVar1), lVar4 != 0)) {
                                  lVar4 = *(long *)(lVar4 + 0x100);
                                  uVar6 = thunk_FUN_0448520c(*(undefined8 *)puVar2);
                                  FUN_09542000();
                                  if (lVar4 != 0) {
                                    FUN_095420d0(lVar4,uVar6,0);
                                    if ((*(long *)(unaff_x19 + 0x140) != 0) &&
                                       (lVar4 = FUN_04c6bfdc(*(long *)(unaff_x19 + 0x140),
                                                             *(undefined8 *)puVar1), lVar4 != 0)) {
                                      lVar4 = *(long *)(lVar4 + 0x100);
                                      uVar6 = thunk_FUN_0448520c(*(undefined8 *)puVar2);
                                      FUN_09542000();
                                      if (lVar4 != 0) {
                                        FUN_095420d0(lVar4,uVar6,0);
                                        if ((*(long *)(unaff_x19 + 0x148) != 0) &&
                                           (lVar4 = FUN_04c6bfdc(*(long *)(unaff_x19 + 0x148),
                                                                 *(undefined8 *)puVar1), lVar4 != 0)
                                           ) {
                                          lVar4 = *(long *)(lVar4 + 0x100);
                                          uVar6 = thunk_FUN_0448520c(*(undefined8 *)puVar2);
                                          FUN_09542000();
                                          if (lVar4 != 0) {
                                            FUN_095420d0(lVar4,uVar6,0);
                                            if ((*(long *)(unaff_x19 + 0x188) != 0) &&
                                               (lVar4 = FUN_04d7a1ac(*(long *)(unaff_x19 + 0x188),
                                                                     *(undefined8 *)PTR_DAT_09f2f2e8
                                                                    ), lVar4 != 0)) {
                                              lVar4 = *(long *)(lVar4 + 0x100);
                                              uVar6 = thunk_FUN_0448520c(*(undefined8 *)puVar2);
                                              FUN_09542000();
                                              puVar1 = PTR_DAT_09f21ad0;
                                              puVar2 = PTR_DAT_09f20070;
                                              if (lVar4 != 0) {
                                                FUN_095420d0(lVar4,uVar6,0);
                                                if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                                                  thunk_FUN_044a54b4();
                                                }
                                                uVar6 = FUN_07a1e8c0(0);
                                                uVar8 = FUN_07a1e9e8(0);
                                                uVar6 = FUN_07a2064c(uVar6,uVar8,0);
                                                *(undefined8 *)(unaff_x19 + 0x2e0) = uVar6;
                                                *(undefined8 *)(unaff_x19 + 0x2f8) = 0;
                                                *(undefined8 *)(unaff_x19 + 0x2f0) = 0;
                                                uVar6 = thunk_FUN_0448520c(*(undefined8 *)puVar2);
                                                FUN_09834e40(uVar6,0,0);
                                                *(undefined8 *)(unaff_x19 + 0x300) = uVar6;
                                                thunk_FUN_044bb4b4(unaff_x19 + 0x300,uVar6);
                                                puVar2 = PTR_DAT_09f2f330;
                                                if (*(char *)(unaff_x19 + 0x40) != '\0') {
                                                  uVar6 = thunk_FUN_0448520c(*(undefined8 *)
                                                                              PTR_DAT_09f2f330);
                                                  FUN_094bed1c();
                                                  if (*(int *)(*(long *)PTR_DAT_09f1e6b8 + 0xe4) ==
                                                      0) {
                                                    thunk_FUN_044a54b4();
                                                  }
                                                  UnityEngine_Rigidbody__AddExplosionForce(uVar6,0);
                                                  uVar6 = thunk_FUN_0448520c(*(undefined8 *)puVar2);
                                                  FUN_094bed1c();
                                                  FUN_094bd318(uVar6,0);
                                                  return;
                                                }
                                                return;
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
LAB_076e80e4:
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


