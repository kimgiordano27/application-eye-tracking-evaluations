/*
FUNCTION_NAME: OVRPlugin.Media$$SyncMrcFrame
ENTRY_POINT: 069684cc
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_Media__SyncMrcFrame
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  long unaff_x19;
  long lVar5;
  undefined8 *puVar6;
  long *plVar7;
  long *unaff_x23;
  undefined4 uVar8;
  float fVar9;
  int iVar10;
  undefined4 uStack0000000000000008;
  undefined4 uStack000000000000000c;
  undefined4 uStack0000000000000010;
  float fStack0000000000000014;
  float fStack0000000000000018;
  float fStack000000000000001c;
  
  *(undefined8 *)(unaff_x19 + 0xf8) = param_4;
  thunk_FUN_03afed3c();
  if ((*(long *)(unaff_x19 + 0x108) != 0) &&
     (lVar2 = *(long *)(*(long *)(unaff_x19 + 0x108) + 0x80), lVar2 != 0)) {
    lVar5 = *(long *)(unaff_x19 + 0xf8);
    uVar3 = FUN_07c98f88(lVar2,0);
    if (lVar5 != 0) {
      puVar6 = (undefined8 *)(lVar5 + 0x30);
      *puVar6 = uVar3;
      thunk_FUN_03afed3c(puVar6,uVar3);
      if ((*(long *)(unaff_x19 + 0x160) != 0) && (lVar2 = *(long *)(unaff_x19 + 0xf8), lVar2 != 0))
      {
        uVar3 = *(undefined8 *)(*(long *)(unaff_x19 + 0x160) + 0x40);
        lVar5 = *(long *)(unaff_x19 + 0x158);
        *(undefined1 *)(lVar2 + 0x28) = 1;
        *(undefined8 *)(lVar2 + 0x20) = uVar3;
        if (lVar5 != 0) {
          lVar2 = FUN_04561560(lVar5,*(undefined8 *)PTR_DAT_0848e8a0);
          plVar7 = (long *)(unaff_x19 + 0xe8);
          *plVar7 = lVar2;
          thunk_FUN_03afed3c(plVar7,lVar2);
          lVar2 = *plVar7;
          if (*(int *)(*unaff_x23 + 0xe4) == 0) {
            thunk_FUN_03ae8be4();
          }
          uVar4 = FUN_07c9e200(lVar2,0,0);
          if ((uVar4 & 1) != 0) {
            if (*(long *)(unaff_x19 + 0x158) == 0) goto LAB_0696895c;
            lVar2 = FUN_045614d0(*(long *)(unaff_x19 + 0x158),*(undefined8 *)PTR_DAT_0848e888);
            *plVar7 = lVar2;
            thunk_FUN_03afed3c(plVar7,lVar2);
          }
          if (*(long *)(unaff_x19 + 0x108) != 0) {
            uVar3 = *(undefined8 *)(*(long *)(unaff_x19 + 0x108) + 0x78);
            if (*(int *)(*unaff_x23 + 0xe4) == 0) {
              thunk_FUN_03ae8be4();
            }
            uVar4 = FUN_07c9c218(uVar3,0,0);
            lVar2 = *plVar7;
            if ((uVar4 & 1) == 0) {
              if ((*(long *)(unaff_x19 + 0x160) == 0) || (lVar2 == 0)) goto LAB_0696895c;
              puVar6 = (undefined8 *)(*(long *)(unaff_x19 + 0x160) + 0x50);
            }
            else {
              if (((*(long *)(unaff_x19 + 0x108) == 0) ||
                  (lVar5 = *(long *)(*(long *)(unaff_x19 + 0x108) + 0x78), lVar5 == 0)) ||
                 (lVar2 == 0)) goto LAB_0696895c;
              puVar6 = (undefined8 *)(lVar5 + 0xa0);
            }
            thunk_FUN_07c615ac(lVar2,*puVar6,0);
            if (*plVar7 != 0) {
              FUN_07c61ed4(*plVar7,0,0);
              if (*plVar7 != 0) {
                FUN_07c62410(*plVar7,0,0);
                if (*plVar7 != 0) {
                  FUN_07c62298(*plVar7,2,0);
                  if (*(long *)(unaff_x19 + 0x158) != 0) {
                    lVar2 = FUN_045614d0(*(long *)(unaff_x19 + 0x158),
                                         *(undefined8 *)PTR_DAT_0848e880);
                    plVar7 = (long *)(unaff_x19 + 0xe0);
                    *plVar7 = lVar2;
                    thunk_FUN_03afed3c(plVar7,lVar2);
                    puVar1 = PTR_DAT_08487508;
                    if (*(long *)(unaff_x19 + 0x160) != 0) {
                      uVar3 = FUN_03a8a804(*(undefined8 *)PTR_DAT_08487508,
                                           *(int *)(*(long *)(unaff_x19 + 0x160) + 0x30) * 3);
                      *(undefined8 *)(unaff_x19 + 0x120) = uVar3;
                      thunk_FUN_03afed3c(unaff_x19 + 0x120,uVar3);
                      if (*(long *)(unaff_x19 + 0x160) != 0) {
                        uVar3 = FUN_03a8a804(*(undefined8 *)puVar1,
                                             *(int *)(*(long *)(unaff_x19 + 0x160) + 0x30) * 3);
                        *(undefined8 *)(unaff_x19 + 0x128) = uVar3;
                        thunk_FUN_03afed3c(unaff_x19 + 0x128,uVar3);
                        if (*(long *)(unaff_x19 + 0x160) != 0) {
                          uVar3 = FUN_03a8a804(*(undefined8 *)PTR_DAT_0848d7e8,
                                               *(int *)(*(long *)(unaff_x19 + 0x160) + 0x30) * 3);
                          *(undefined8 *)(unaff_x19 + 0x138) = uVar3;
                          thunk_FUN_03afed3c(unaff_x19 + 0x138,uVar3);
                          if (*(long *)(unaff_x19 + 0x160) != 0) {
                            uVar3 = FUN_03a8a804(*(undefined8 *)PTR_DAT_0848f700,
                                                 *(int *)(*(long *)(unaff_x19 + 0x160) + 0x30) * 3);
                            *(undefined8 *)(unaff_x19 + 0x118) = uVar3;
                            thunk_FUN_03afed3c(unaff_x19 + 0x118,uVar3);
                            if (*(long *)(unaff_x19 + 0x160) != 0) {
                              uVar3 = FUN_03a8a804(*(undefined8 *)PTR_DAT_0848d6e0,
                                                   *(int *)(*(long *)(unaff_x19 + 0x160) + 0x30) * 3
                                                  );
                              *(undefined8 *)(unaff_x19 + 0x140) = uVar3;
                              thunk_FUN_03afed3c(unaff_x19 + 0x140,uVar3);
                              puVar1 = PTR_DAT_0848e660;
                              if (*(long *)(unaff_x19 + 0x160) != 0) {
                                uVar3 = FUN_03a8a804(*(undefined8 *)PTR_DAT_084874c8,
                                                     *(int *)(*(long *)(unaff_x19 + 0x160) + 0x30) *
                                                     3);
                                *(undefined8 *)(unaff_x19 + 0x130) = uVar3;
                                thunk_FUN_03afed3c(unaff_x19 + 0x130,uVar3);
                                uVar3 = thunk_FUN_03ac74bc(*(undefined8 *)puVar1);
                                FUN_07c6e968(uVar3,0);
                                *(undefined8 *)(unaff_x19 + 0x100) = uVar3;
                                thunk_FUN_03afed3c(unaff_x19 + 0x100,uVar3);
                                lVar2 = *(long *)(unaff_x19 + 0x160);
                                if ((lVar2 != 0) && (*(long *)(unaff_x19 + 0x158) != 0)) {
                                  fVar9 = *(float *)(lVar2 + 0x3c);
                                  iVar10 = *(int *)(lVar2 + 0x30);
                                  lVar2 = FUN_07c9c69c(*(long *)(unaff_x19 + 0x158),0);
                                  if (lVar2 != 0) {
                                    uVar8 = FUN_07cac280(lVar2,0);
                                    if (*(long *)(unaff_x19 + 0x100) != 0) {
                                      fStack0000000000000014 =
                                           fVar9 * (float)iVar10 * DAT_015c57dc * 0.5;
                                      uStack0000000000000008 = uVar8;
                                      uStack000000000000000c = param_2;
                                      uStack0000000000000010 = param_3;
                                      fStack0000000000000018 = fStack0000000000000014;
                                      fStack000000000000001c = fStack0000000000000014;
                                      FUN_07c7142c(*(long *)(unaff_x19 + 0x100),&stack0x00000008,0);
                                      if (*(long *)(unaff_x19 + 0x100) != 0) {
                                        FUN_07c74de0(*(long *)(unaff_x19 + 0x100),0);
                                        if (*(long *)(unaff_x19 + 0x100) != 0) {
                                          thunk_FUN_07ca23d0(*(long *)(unaff_x19 + 0x100),
                                                             *(undefined8 *)PTR_DAT_084b6fa8,0);
                                          if (*plVar7 != 0) {
                                            FUN_07c6df20(*plVar7,*(undefined8 *)(unaff_x19 + 0x100),
                                                         0);
                                            *(undefined4 *)(unaff_x19 + 0x148) = 0;
                                            if (*(long *)(unaff_x19 + 0x150) != 0) {
                                              FUN_054c57ac(*(long *)(unaff_x19 + 0x150),
                                                           *(undefined8 *)(unaff_x19 + 0x158),
                                                           *(undefined8 *)PTR_DAT_084b2ef8);
                                              lVar2 = *(long *)(unaff_x19 + 0x150);
                                              if (lVar2 != 0) {
                                                if (1 < *(int *)(lVar2 + 0x20)) {
                                                  lVar5 = *(long *)(unaff_x19 + 0x160);
                                                  if (lVar5 == 0) goto LAB_0696895c;
                                                  if (*(int *)(lVar5 + 0x34) <
                                                      *(int *)(lVar5 + 0x30) *
                                                      *(int *)(lVar2 + 0x20)) {
                                                    lVar2 = FUN_054c593c(lVar2,*(undefined8 *)
                                                                                PTR_DAT_084b2f18);
                                                    if (*(int *)(*unaff_x23 + 0xe4) == 0) {
                                                      thunk_FUN_03ae8be4(*unaff_x23);
                                                    }
                                                    uVar4 = FUN_07c9c218(lVar2,0,0);
                                                    if ((uVar4 & 1) != 0) {
                                                      if (lVar2 == 0) goto LAB_0696895c;
                                                      lVar2 = FUN_04561560(lVar2,*(undefined8 *)
                                                                                  PTR_DAT_084b6fa0);
                                                      if (*(int *)(*unaff_x23 + 0xe4) == 0) {
                                                        thunk_FUN_03ae8be4(*unaff_x23);
                                                      }
                                                      uVar4 = FUN_07c9c218(lVar2,0,0);
                                                      if ((uVar4 & 1) != 0) {
                                                        if (lVar2 == 0) goto LAB_0696895c;
                                                        *(undefined1 *)(lVar2 + 0x38) = 1;
                                                      }
                                                    }
                                                  }
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
LAB_0696895c:
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


