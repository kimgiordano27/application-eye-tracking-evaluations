/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.DebugManager$$InitSubManagers
ENTRY_POINT: 07296544
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_21;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Manager_DebugManager__InitSubManagers(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  int in_w8;
  long unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  
  if (in_w8 != 0) {
    *(undefined8 *)(unaff_x20 + 0x20) = param_1;
    thunk_FUN_040ec700((undefined8 *)(unaff_x20 + 0x20),param_1);
    uVar4 = FUN_04077674(*unaff_x24,2);
    puVar2 = PTR_DAT_09286860;
    if ((*(uint *)(unaff_x20 + 0x18) & 0xfffffffe) != 0) {
      *(undefined8 *)(unaff_x20 + 0x28) = uVar4;
      thunk_FUN_040ec700();
      *(long *)(unaff_x19 + 0xe8) = unaff_x20;
      thunk_FUN_040ec700();
      lVar5 = FUN_04077674(*unaff_x23,2);
      uVar4 = FUN_04077674(*(undefined8 *)puVar2,2);
      if (lVar5 == 0) goto LAB_07296fe4;
      if (*(int *)(lVar5 + 0x18) != 0) {
        *(undefined8 *)(lVar5 + 0x20) = uVar4;
        thunk_FUN_040ec700((undefined8 *)(lVar5 + 0x20),uVar4);
        uVar4 = FUN_04077674(*(undefined8 *)puVar2,2);
        if ((*(uint *)(lVar5 + 0x18) & 0xfffffffe) != 0) {
          *(undefined8 *)(lVar5 + 0x28) = uVar4;
          thunk_FUN_040ec700();
          *(long *)(unaff_x19 + 0xf0) = lVar5;
          thunk_FUN_040ec700((long *)(unaff_x19 + 0xf0),lVar5);
          lVar5 = FUN_04077674(*unaff_x25,2);
          uVar4 = FUN_04077674(*unaff_x24,2);
          if (lVar5 == 0) goto LAB_07296fe4;
          if (*(int *)(lVar5 + 0x18) != 0) {
            *(undefined8 *)(lVar5 + 0x20) = uVar4;
            thunk_FUN_040ec700((undefined8 *)(lVar5 + 0x20),uVar4);
            uVar4 = FUN_04077674(*unaff_x24,2);
            puVar3 = PTR_DAT_092c2220;
            puVar1 = PTR_DAT_09287a50;
            if ((*(uint *)(lVar5 + 0x18) & 0xfffffffe) != 0) {
              *(undefined8 *)(lVar5 + 0x28) = uVar4;
              thunk_FUN_040ec700();
              *(long *)(unaff_x19 + 0xf8) = lVar5;
              thunk_FUN_040ec700((long *)(unaff_x19 + 0xf8),lVar5);
              lVar5 = FUN_04077674(*(undefined8 *)puVar3,2);
              uVar4 = FUN_04077674(*(undefined8 *)puVar1,2);
              if (lVar5 == 0) goto LAB_07296fe4;
              if (*(int *)(lVar5 + 0x18) != 0) {
                *(undefined8 *)(lVar5 + 0x20) = uVar4;
                thunk_FUN_040ec700((undefined8 *)(lVar5 + 0x20),uVar4);
                uVar4 = FUN_04077674(*(undefined8 *)puVar1,2);
                if ((*(uint *)(lVar5 + 0x18) & 0xfffffffe) != 0) {
                  *(undefined8 *)(lVar5 + 0x28) = uVar4;
                  thunk_FUN_040ec700();
                  *(long *)(unaff_x19 + 0x100) = lVar5;
                  thunk_FUN_040ec700(unaff_x19 + 0x100,lVar5);
                  lVar5 = FUN_04077674(*(undefined8 *)puVar3,2);
                  uVar4 = FUN_04077674(*(undefined8 *)puVar1,2);
                  if (lVar5 == 0) goto LAB_07296fe4;
                  if (*(int *)(lVar5 + 0x18) != 0) {
                    *(undefined8 *)(lVar5 + 0x20) = uVar4;
                    thunk_FUN_040ec700((undefined8 *)(lVar5 + 0x20),uVar4);
                    uVar4 = FUN_04077674(*(undefined8 *)puVar1,2);
                    if ((*(uint *)(lVar5 + 0x18) & 0xfffffffe) != 0) {
                      *(undefined8 *)(lVar5 + 0x28) = uVar4;
                      thunk_FUN_040ec700();
                      *(long *)(unaff_x19 + 0x108) = lVar5;
                      thunk_FUN_040ec700(unaff_x19 + 0x108,lVar5);
                      lVar5 = FUN_04077674(*unaff_x25,2);
                      uVar4 = FUN_04077674(*unaff_x24,2);
                      if (lVar5 == 0) goto LAB_07296fe4;
                      if (*(int *)(lVar5 + 0x18) != 0) {
                        *(undefined8 *)(lVar5 + 0x20) = uVar4;
                        thunk_FUN_040ec700((undefined8 *)(lVar5 + 0x20),uVar4);
                        uVar4 = FUN_04077674(*unaff_x24,2);
                        if ((*(uint *)(lVar5 + 0x18) & 0xfffffffe) != 0) {
                          *(undefined8 *)(lVar5 + 0x28) = uVar4;
                          thunk_FUN_040ec700();
                          *(long *)(unaff_x19 + 0x110) = lVar5;
                          thunk_FUN_040ec700(unaff_x19 + 0x110,lVar5);
                          lVar5 = FUN_04077674(*unaff_x25,2);
                          uVar4 = FUN_04077674(*unaff_x24,2);
                          if (lVar5 == 0) goto LAB_07296fe4;
                          if (*(int *)(lVar5 + 0x18) != 0) {
                            *(undefined8 *)(lVar5 + 0x20) = uVar4;
                            thunk_FUN_040ec700((undefined8 *)(lVar5 + 0x20),uVar4);
                            uVar4 = FUN_04077674(*unaff_x24,2);
                            if ((*(uint *)(lVar5 + 0x18) & 0xfffffffe) != 0) {
                              *(undefined8 *)(lVar5 + 0x28) = uVar4;
                              thunk_FUN_040ec700();
                              *(long *)(unaff_x19 + 0x128) = lVar5;
                              thunk_FUN_040ec700(unaff_x19 + 0x128,lVar5);
                              lVar5 = FUN_04077674(*unaff_x25,2);
                              uVar4 = FUN_04077674(*unaff_x24,2);
                              if (lVar5 == 0) goto LAB_07296fe4;
                              if (*(int *)(lVar5 + 0x18) != 0) {
                                *(undefined8 *)(lVar5 + 0x20) = uVar4;
                                thunk_FUN_040ec700((undefined8 *)(lVar5 + 0x20),uVar4);
                                uVar4 = FUN_04077674(*unaff_x24,2);
                                if ((*(uint *)(lVar5 + 0x18) & 0xfffffffe) != 0) {
                                  *(undefined8 *)(lVar5 + 0x28) = uVar4;
                                  thunk_FUN_040ec700();
                                  *(long *)(unaff_x19 + 0x130) = lVar5;
                                  thunk_FUN_040ec700(unaff_x19 + 0x130,lVar5);
                                  lVar5 = FUN_04077674(*unaff_x25,2);
                                  uVar4 = FUN_04077674(*unaff_x24,2);
                                  if (lVar5 == 0) goto LAB_07296fe4;
                                  if (*(int *)(lVar5 + 0x18) != 0) {
                                    *(undefined8 *)(lVar5 + 0x20) = uVar4;
                                    thunk_FUN_040ec700((undefined8 *)(lVar5 + 0x20),uVar4);
                                    uVar4 = FUN_04077674(*unaff_x24,2);
                                    if ((*(uint *)(lVar5 + 0x18) & 0xfffffffe) != 0) {
                                      *(undefined8 *)(lVar5 + 0x28) = uVar4;
                                      thunk_FUN_040ec700();
                                      *(long *)(unaff_x19 + 0x138) = lVar5;
                                      thunk_FUN_040ec700(unaff_x19 + 0x138,lVar5);
                                      lVar5 = FUN_04077674(*unaff_x23,2);
                                      uVar4 = FUN_04077674(*(undefined8 *)puVar2,2);
                                      if (lVar5 == 0) goto LAB_07296fe4;
                                      if (*(int *)(lVar5 + 0x18) != 0) {
                                        *(undefined8 *)(lVar5 + 0x20) = uVar4;
                                        thunk_FUN_040ec700((undefined8 *)(lVar5 + 0x20),uVar4);
                                        uVar4 = FUN_04077674(*(undefined8 *)puVar2,2);
                                        if ((*(uint *)(lVar5 + 0x18) & 0xfffffffe) != 0) {
                                          *(undefined8 *)(lVar5 + 0x28) = uVar4;
                                          thunk_FUN_040ec700();
                                          *(long *)(unaff_x19 + 0x140) = lVar5;
                                          thunk_FUN_040ec700(unaff_x19 + 0x140,lVar5);
                                          lVar5 = FUN_04077674(*unaff_x25,2);
                                          uVar4 = FUN_04077674(*unaff_x24,2);
                                          if (lVar5 == 0) goto LAB_07296fe4;
                                          if (*(int *)(lVar5 + 0x18) != 0) {
                                            *(undefined8 *)(lVar5 + 0x20) = uVar4;
                                            thunk_FUN_040ec700((undefined8 *)(lVar5 + 0x20),uVar4);
                                            uVar4 = FUN_04077674(*unaff_x24,2);
                                            puVar3 = PTR_DAT_092c2228;
                                            puVar1 = PTR_DAT_09285880;
                                            if ((*(uint *)(lVar5 + 0x18) & 0xfffffffe) != 0) {
                                              *(undefined8 *)(lVar5 + 0x28) = uVar4;
                                              thunk_FUN_040ec700();
                                              *(long *)(unaff_x19 + 0x148) = lVar5;
                                              thunk_FUN_040ec700(unaff_x19 + 0x148,lVar5);
                                              uVar4 = FUN_04077674(*(undefined8 *)puVar1,0x240);
                                              *(undefined8 *)(unaff_x19 + 0x160) = uVar4;
                                              thunk_FUN_040ec700(unaff_x19 + 0x160,uVar4);
                                              uVar4 = FUN_04077674(*(undefined8 *)puVar1,0x240);
                                              *(undefined8 *)(unaff_x19 + 0x168) = uVar4;
                                              thunk_FUN_040ec700(unaff_x19 + 0x168,uVar4);
                                              uVar4 = FUN_04077674(*(undefined8 *)puVar1,0x240);
                                              *(undefined8 *)(unaff_x19 + 0x170) = uVar4;
                                              thunk_FUN_040ec700(unaff_x19 + 0x170,uVar4);
                                              lVar5 = FUN_04077674(*(undefined8 *)puVar3,2);
                                              lVar6 = FUN_04077674(*unaff_x25,4);
                                              uVar4 = FUN_04077674(*unaff_x24,0xd);
                                              if (lVar6 == 0) goto LAB_07296fe4;
                                              if (*(int *)(lVar6 + 0x18) != 0) {
                                                *(undefined8 *)(lVar6 + 0x20) = uVar4;
                                                thunk_FUN_040ec700((undefined8 *)(lVar6 + 0x20),
                                                                   uVar4);
                                                uVar4 = FUN_04077674(*unaff_x24,0xd);
                                                if ((*(uint *)(lVar6 + 0x18) & 0xfffffffe) != 0) {
                                                  *(undefined8 *)(lVar6 + 0x28) = uVar4;
                                                  thunk_FUN_040ec700((undefined8 *)(lVar6 + 0x28),
                                                                     uVar4);
                                                  uVar4 = FUN_04077674(*unaff_x24,0xd);
                                                  if (2 < *(uint *)(lVar6 + 0x18)) {
                                                    *(undefined8 *)(lVar6 + 0x30) = uVar4;
                                                    thunk_FUN_040ec700((undefined8 *)(lVar6 + 0x30),
                                                                       uVar4);
                                                    uVar4 = FUN_04077674(*unaff_x24,0x17);
                                                    if ((*(uint *)(lVar6 + 0x18) & 0xfffffffc) != 0)
                                                    {
                                                      *(undefined8 *)(lVar6 + 0x38) = uVar4;
                                                      thunk_FUN_040ec700();
                                                      if (lVar5 == 0) {
LAB_07296fe4:
                    /* WARNING: Subroutine does not return */
                                                        FUN_04077830();
                                                      }
                                                      if (*(int *)(lVar5 + 0x18) != 0) {
                                                        *(long *)(lVar5 + 0x20) = lVar6;
                                                        thunk_FUN_040ec700((long *)(lVar5 + 0x20),
                                                                           lVar6);
                                                        lVar6 = FUN_04077674(*unaff_x25,4);
                                                        uVar4 = FUN_04077674(*unaff_x24,0xd);
                                                        if (lVar6 == 0) goto LAB_07296fe4;
                                                        if (*(int *)(lVar6 + 0x18) != 0) {
                                                          *(undefined8 *)(lVar6 + 0x20) = uVar4;
                                                          thunk_FUN_040ec700((undefined8 *)
                                                                             (lVar6 + 0x20),uVar4);
                                                          uVar4 = FUN_04077674(*unaff_x24,0xd);
                                                          if ((*(uint *)(lVar6 + 0x18) & 0xfffffffe)
                                                              != 0) {
                                                            *(undefined8 *)(lVar6 + 0x28) = uVar4;
                                                            thunk_FUN_040ec700((undefined8 *)
                                                                               (lVar6 + 0x28),uVar4)
                                                            ;
                                                            uVar4 = FUN_04077674(*unaff_x24,0xd);
                                                            if (2 < *(uint *)(lVar6 + 0x18)) {
                                                              *(undefined8 *)(lVar6 + 0x30) = uVar4;
                                                              thunk_FUN_040ec700((undefined8 *)
                                                                                 (lVar6 + 0x30),
                                                                                 uVar4);
                                                              uVar4 = FUN_04077674(*unaff_x24,0x17);
                                                              if ((*(uint *)(lVar6 + 0x18) &
                                                                  0xfffffffc) != 0) {
                                                                *(undefined8 *)(lVar6 + 0x38) =
                                                                     uVar4;
                                                                thunk_FUN_040ec700();
                                                                if ((*(uint *)(lVar5 + 0x18) &
                                                                    0xfffffffe) != 0) {
                                                                  *(long *)(lVar5 + 0x28) = lVar6;
                                                                  thunk_FUN_040ec700((long *)(lVar5 
                                                  + 0x28),lVar6);
                                                  *(long *)(unaff_x19 + 0x180) = lVar5;
                                                  thunk_FUN_040ec700(unaff_x19 + 0x180,lVar5);
                                                  lVar5 = FUN_04077674(*unaff_x23,2);
                                                  uVar4 = FUN_04077674(*(undefined8 *)puVar2,0x243);
                                                  if (lVar5 == 0) goto LAB_07296fe4;
                                                  if (*(int *)(lVar5 + 0x18) != 0) {
                                                    *(undefined8 *)(lVar5 + 0x20) = uVar4;
                                                    thunk_FUN_040ec700((undefined8 *)(lVar5 + 0x20),
                                                                       uVar4);
                                                    uVar4 = FUN_04077674(*(undefined8 *)puVar2,0x243
                                                                        );
                                                    puVar1 = PTR_DAT_092c2230;
                                                    if ((*(uint *)(lVar5 + 0x18) & 0xfffffffe) != 0)
                                                    {
                                                      *(undefined8 *)(lVar5 + 0x28) = uVar4;
                                                      thunk_FUN_040ec700();
                                                      *(long *)(unaff_x19 + 0x188) = lVar5;
                                                      thunk_FUN_040ec700(unaff_x19 + 0x188,lVar5);
                                                      uVar4 = FUN_04077674(*(undefined8 *)puVar2,
                                                                           0x240);
                                                      *(undefined8 *)(unaff_x19 + 400) = uVar4;
                                                      thunk_FUN_040ec700(unaff_x19 + 400,uVar4);
                                                      uVar4 = FUN_04077674(*(undefined8 *)puVar2,
                                                                           0x20);
                                                      *(undefined8 *)(unaff_x19 + 0x198) = uVar4;
                                                      thunk_FUN_040ec700(unaff_x19 + 0x198,uVar4);
                                                      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                                                        thunk_FUN_040d65a8();
                                                      }
                                                      FUN_07299f6c();
                                                      lVar5 = FUN_04077674(*(undefined8 *)puVar3,2);
                                                      lVar6 = FUN_04077674(*unaff_x25,2);
                                                      uVar4 = FUN_04077674(*unaff_x24,3);
                                                      if (lVar6 == 0) goto LAB_07296fe4;
                                                      if (*(int *)(lVar6 + 0x18) != 0) {
                                                        *(undefined8 *)(lVar6 + 0x20) = uVar4;
                                                        thunk_FUN_040ec700((undefined8 *)
                                                                           (lVar6 + 0x20),uVar4);
                                                        uVar4 = FUN_04077674(*unaff_x24,3);
                                                        if ((*(uint *)(lVar6 + 0x18) & 0xfffffffe)
                                                            != 0) {
                                                          *(undefined8 *)(lVar6 + 0x28) = uVar4;
                                                          thunk_FUN_040ec700();
                                                          if (lVar5 == 0) goto LAB_07296fe4;
                                                          if (*(int *)(lVar5 + 0x18) != 0) {
                                                            *(long *)(lVar5 + 0x20) = lVar6;
                                                            thunk_FUN_040ec700((long *)(lVar5 + 0x20
                                                                                       ),lVar6);
                                                            lVar6 = FUN_04077674(*unaff_x25,2);
                                                            uVar4 = FUN_04077674(*unaff_x24,3);
                                                            if (lVar6 == 0) goto LAB_07296fe4;
                                                            if (*(int *)(lVar6 + 0x18) != 0) {
                                                              *(undefined8 *)(lVar6 + 0x20) = uVar4;
                                                              thunk_FUN_040ec700((undefined8 *)
                                                                                 (lVar6 + 0x20),
                                                                                 uVar4);
                                                              uVar4 = FUN_04077674(*unaff_x24,3);
                                                              if ((*(uint *)(lVar6 + 0x18) &
                                                                  0xfffffffe) != 0) {
                                                                *(undefined8 *)(lVar6 + 0x28) =
                                                                     uVar4;
                                                                thunk_FUN_040ec700();
                                                                puVar1 = PTR_DAT_092c2238;
                                                                if ((*(uint *)(lVar5 + 0x18) &
                                                                    0xfffffffe) != 0) {
                                                                  *(long *)(lVar5 + 0x28) = lVar6;
                                                                  thunk_FUN_040ec700((long *)(lVar5 
                                                  + 0x28),lVar6);
                                                  *(long *)(unaff_x19 + 0x118) = lVar5;
                                                  thunk_FUN_040ec700(unaff_x19 + 0x118,lVar5);
                                                  lVar5 = FUN_04077674(*(undefined8 *)puVar1,2);
                                                  lVar6 = FUN_04077674(*unaff_x23,2);
                                                  uVar4 = FUN_04077674(*(undefined8 *)puVar2,3);
                                                  if (lVar6 == 0) goto LAB_07296fe4;
                                                  if (*(int *)(lVar6 + 0x18) != 0) {
                                                    *(undefined8 *)(lVar6 + 0x20) = uVar4;
                                                    thunk_FUN_040ec700((undefined8 *)(lVar6 + 0x20),
                                                                       uVar4);
                                                    uVar4 = FUN_04077674(*(undefined8 *)puVar2,3);
                                                    if ((*(uint *)(lVar6 + 0x18) & 0xfffffffe) != 0)
                                                    {
                                                      *(undefined8 *)(lVar6 + 0x28) = uVar4;
                                                      thunk_FUN_040ec700();
                                                      if (lVar5 == 0) goto LAB_07296fe4;
                                                      if (*(int *)(lVar5 + 0x18) != 0) {
                                                        *(long *)(lVar5 + 0x20) = lVar6;
                                                        thunk_FUN_040ec700((long *)(lVar5 + 0x20),
                                                                           lVar6);
                                                        lVar6 = FUN_04077674(*unaff_x23,2);
                                                        uVar4 = FUN_04077674(*(undefined8 *)puVar2,3
                                                                            );
                                                        if (lVar6 == 0) goto LAB_07296fe4;
                                                        if (*(int *)(lVar6 + 0x18) != 0) {
                                                          *(undefined8 *)(lVar6 + 0x20) = uVar4;
                                                          thunk_FUN_040ec700((undefined8 *)
                                                                             (lVar6 + 0x20),uVar4);
                                                          uVar4 = FUN_04077674(*(undefined8 *)puVar2
                                                                               ,3);
                                                          if ((*(uint *)(lVar6 + 0x18) & 0xfffffffe)
                                                              != 0) {
                                                            *(undefined8 *)(lVar6 + 0x28) = uVar4;
                                                            thunk_FUN_040ec700();
                                                            if ((*(uint *)(lVar5 + 0x18) &
                                                                0xfffffffe) != 0) {
                                                              *(long *)(lVar5 + 0x28) = lVar6;
                                                              thunk_FUN_040ec700((long *)(lVar5 + 
                                                  0x28),lVar6);
                                                  *(long *)(unaff_x19 + 0x120) = lVar5;
                                                  thunk_FUN_040ec700(unaff_x19 + 0x120,lVar5);
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
                    /* WARNING: Subroutine does not return */
  FUN_04077838();
}


