/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Hierarchy.SceneItem$$.ctor
ENTRY_POINT: 052e9c8c
PROGRAM: Untangled-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_10;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Hierarchy_SceneItem___ctor
               (undefined1 param_1 [16],undefined4 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  undefined4 uVar5;
  undefined8 in_stack_00000008;
  
                    /* try { // try from 052e9c90 to 053e9c93 has its CatchHandler @ 052e9ca4 */
  FUN_02f07e70(PTR_DAT_06d3dcd8);
  FUN_02f07e70(PTR_DAT_06d3dd00);
                    /* catch() { ... } // from try @ 052e9c90 with catch @ 052e9ca4 */
  FUN_02f07e70(PTR_DAT_06d08060);
  *(undefined1 *)(unaff_x20 + 0x185) = 1;
  puVar2 = PTR_DAT_06d3dd00;
  puVar1 = PTR_DAT_06d08060;
  in_stack_00000008 = 0;
  if (**(long **)(*unaff_x21 + 0xb8) != 0) {
    if (*(int *)(unaff_x19 + 0x20) == 0) {
      in_stack_00000008 = FUN_052721dc(**(long **)(*unaff_x21 + 0xb8),0);
      lVar3 = FUN_052723b0(&stack0x00000008,0);
      if (lVar3 != 0) {
        uVar5 = UnityEngine_VFX_Utility_VFXPropertyBinder__AddParameterBinder<object>
                          (lVar3,*(undefined8 *)puVar1);
        *(undefined4 *)(unaff_x19 + 0xbc) = uVar5;
        *(undefined4 *)(unaff_x19 + 0xc0) = param_2;
        if (**(long **)(*unaff_x21 + 0xb8) != 0) {
          in_stack_00000008 = FUN_052721dc(**(long **)(*unaff_x21 + 0xb8),0);
          uVar4 = FUN_052723cc(&stack0x00000008,0);
          FUN_052ea440(uVar4,unaff_x19 + 0xce,uVar4);
          if (**(long **)(*unaff_x21 + 0xb8) != 0) {
            in_stack_00000008 = FUN_052721dc(**(long **)(*unaff_x21 + 0xb8),0);
            uVar4 = FUN_05272420(&stack0x00000008,0);
            FUN_052ea440(uVar4,unaff_x19 + 0xcf,uVar4);
            if (**(long **)(*unaff_x21 + 0xb8) != 0) {
              in_stack_00000008 = FUN_052721dc(**(long **)(*unaff_x21 + 0xb8),0);
              lVar3 = FUN_05272404(&stack0x00000008,0);
              if (lVar3 != 0) {
                uVar5 = UnityEngine_VFX_Utility_VFXPropertyBinder__AddParameterBinder<object>
                                  (lVar3,*(undefined8 *)puVar1);
                *(undefined4 *)(unaff_x19 + 0xc4) = uVar5;
                *(undefined4 *)(unaff_x19 + 200) = param_2;
                if (**(long **)(*unaff_x21 + 0xb8) != 0) {
                  in_stack_00000008 = FUN_052721dc(**(long **)(*unaff_x21 + 0xb8),0);
                  lVar3 = FUN_05272458(&stack0x00000008,0);
                  if (lVar3 != 0) {
                    uVar5 = FUN_03abffd4(lVar3,*(undefined8 *)puVar2);
                    *(undefined4 *)(unaff_x19 + 0xd4) = uVar5;
                    if (**(long **)(*unaff_x21 + 0xb8) != 0) {
                      in_stack_00000008 = FUN_052721dc(**(long **)(*unaff_x21 + 0xb8),0);
                      lVar3 = FUN_05272490(&stack0x00000008,0);
                      if (lVar3 != 0) {
                        uVar5 = FUN_03abffd4(lVar3,*(undefined8 *)puVar2);
                        *(undefined4 *)(unaff_x19 + 0xd8) = uVar5;
                        if (**(long **)(*unaff_x21 + 0xb8) != 0) {
                          in_stack_00000008 = FUN_052721dc(**(long **)(*unaff_x21 + 0xb8),0);
                          lVar3 = FUN_05272340(&stack0x00000008,0);
                          if (lVar3 != 0) {
                            uVar5 = FUN_03abffd4(lVar3,*(undefined8 *)puVar2);
                            *(undefined4 *)(unaff_x19 + 0xdc) = uVar5;
                            if (**(long **)(*unaff_x21 + 0xb8) != 0) {
                              in_stack_00000008 = FUN_052721dc(**(long **)(*unaff_x21 + 0xb8),0);
                              uVar4 = FUN_0527235c(&stack0x00000008,0);
                              FUN_052ea440(uVar4,unaff_x19 + 0xcc,uVar4);
                              if (**(long **)(*unaff_x21 + 0xb8) != 0) {
                                in_stack_00000008 = FUN_052721dc(**(long **)(*unaff_x21 + 0xb8),0);
                                uVar4 = FUN_052724ac(&stack0x00000008,0);
                                FUN_052ea440(uVar4,unaff_x19 + 0xcd,uVar4);
                                if (**(long **)(*unaff_x21 + 0xb8) != 0) {
                                  in_stack_00000008 = FUN_052721dc(**(long **)(*unaff_x21 + 0xb8),0)
                                  ;
                                  uVar4 = FUN_05272378(&stack0x00000008,0);
                                  FUN_052ea440(uVar4,unaff_x19 + 0xd1,uVar4);
                                  if (**(long **)(*unaff_x21 + 0xb8) != 0) {
                                    in_stack_00000008 =
                                         FUN_052721dc(**(long **)(*unaff_x21 + 0xb8),0);
                                    uVar4 = FUN_052724c8(&stack0x00000008,0);
                                    FUN_052ea440(uVar4,unaff_x19 + 0xd2,uVar4);
                                    if (**(long **)(*unaff_x21 + 0xb8) != 0) {
                                      in_stack_00000008 =
                                           FUN_052721dc(**(long **)(*unaff_x21 + 0xb8),0);
                                      uVar4 = FUN_052723e8(&stack0x00000008,0);
                                      FUN_052ea440(uVar4,unaff_x19 + 0xe6,uVar4);
                                      if (**(long **)(*unaff_x21 + 0xb8) != 0) {
                                        in_stack_00000008 =
                                             FUN_052721dc(**(long **)(*unaff_x21 + 0xb8),0);
                                        uVar4 = FUN_0527243c(&stack0x00000008,0);
                                        FUN_052ea440(uVar4,unaff_x19 + 0xe7,uVar4);
                                        if (**(long **)(*unaff_x21 + 0xb8) != 0) {
                                          in_stack_00000008 =
                                               FUN_052721dc(**(long **)(*unaff_x21 + 0xb8),0);
                                          uVar4 = FUN_052724e4(&stack0x00000008,0);
                                          FUN_052ea440(uVar4,unaff_x19 + 0xe1,uVar4);
                                          if (**(long **)(*unaff_x21 + 0xb8) != 0) {
                                            in_stack_00000008 =
                                                 FUN_052721dc(**(long **)(*unaff_x21 + 0xb8),0);
                                            uVar4 = FUN_05272394(&stack0x00000008,0);
                                            FUN_052ea440(uVar4,unaff_x19 + 0xd0,uVar4);
                                            if (**(long **)(*unaff_x21 + 0xb8) != 0) {
                                              in_stack_00000008 =
                                                   FUN_052721dc(**(long **)(*unaff_x21 + 0xb8),0);
                                              uVar4 = FUN_05272474(&stack0x00000008,0);
                                              FUN_052ea440(uVar4,unaff_x19 + 0xe4,uVar4);
                                              if (**(long **)(*unaff_x21 + 0xb8) != 0) {
                                                in_stack_00000008 =
                                                     FUN_052721dc(**(long **)(*unaff_x21 + 0xb8),0);
                                                uVar4 = FUN_05272324(&stack0x00000008,0);
                                                goto 
                                                Meta_XR_ImmersiveDebugger_Gizmo_PolylineRenderer___ctor
                                                ;
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
    else {
      FUN_052721fc();
      lVar3 = FUN_05276dac();
      if (lVar3 != 0) {
        uVar5 = UnityEngine_VFX_Utility_VFXPropertyBinder__AddParameterBinder<object>
                          (lVar3,*(undefined8 *)puVar1);
        *(undefined4 *)(unaff_x19 + 0xbc) = uVar5;
        *(undefined4 *)(unaff_x19 + 0xc0) = param_2;
        if (**(long **)(*unaff_x21 + 0xb8) != 0) {
          FUN_052721fc(**(long **)(*unaff_x21 + 0xb8),0);
          uVar4 = FUN_05276dc8();
          FUN_052ea440(uVar4,unaff_x19 + 0xce,uVar4);
          if (**(long **)(*unaff_x21 + 0xb8) != 0) {
            FUN_052721fc(**(long **)(*unaff_x21 + 0xb8),0);
            uVar4 = FUN_05276e1c();
            FUN_052ea440(uVar4,unaff_x19 + 0xcf,uVar4);
            if (**(long **)(*unaff_x21 + 0xb8) != 0) {
              FUN_052721fc(**(long **)(*unaff_x21 + 0xb8),0);
              lVar3 = FUN_05276e00();
              if (lVar3 != 0) {
                uVar5 = UnityEngine_VFX_Utility_VFXPropertyBinder__AddParameterBinder<object>
                                  (lVar3,*(undefined8 *)puVar1);
                *(undefined4 *)(unaff_x19 + 0xc4) = uVar5;
                *(undefined4 *)(unaff_x19 + 200) = param_2;
                if (**(long **)(*unaff_x21 + 0xb8) != 0) {
                  FUN_052721fc(**(long **)(*unaff_x21 + 0xb8),0);
                  lVar3 = FUN_05276e54();
                  if (lVar3 != 0) {
                    uVar5 = FUN_03abffd4(lVar3,*(undefined8 *)puVar2);
                    *(undefined4 *)(unaff_x19 + 0xd4) = uVar5;
                    if (**(long **)(*unaff_x21 + 0xb8) != 0) {
                      FUN_052721fc(**(long **)(*unaff_x21 + 0xb8),0);
                      lVar3 = FUN_05276e8c();
                      if (lVar3 != 0) {
                        uVar5 = FUN_03abffd4(lVar3,*(undefined8 *)puVar2);
                        *(undefined4 *)(unaff_x19 + 0xd8) = uVar5;
                        if (**(long **)(*unaff_x21 + 0xb8) != 0) {
                          FUN_052721fc(**(long **)(*unaff_x21 + 0xb8),0);
                          lVar3 = FUN_05276d3c();
                          if (lVar3 != 0) {
                            uVar5 = FUN_03abffd4(lVar3,*(undefined8 *)puVar2);
                            *(undefined4 *)(unaff_x19 + 0xdc) = uVar5;
                            if (**(long **)(*unaff_x21 + 0xb8) != 0) {
                              FUN_052721fc(**(long **)(*unaff_x21 + 0xb8),0);
                              uVar4 = FUN_05276d58();
                              FUN_052ea440(uVar4,unaff_x19 + 0xcc,uVar4);
                              if (**(long **)(*unaff_x21 + 0xb8) != 0) {
                                FUN_052721fc(**(long **)(*unaff_x21 + 0xb8),0);
                                uVar4 = FUN_05276ea8();
                                FUN_052ea440(uVar4,unaff_x19 + 0xcd,uVar4);
                                if (**(long **)(*unaff_x21 + 0xb8) != 0) {
                                  FUN_052721fc(**(long **)(*unaff_x21 + 0xb8),0);
                                  uVar4 = FUN_05276d74();
                                  FUN_052ea440(uVar4,unaff_x19 + 0xd1,uVar4);
                                  if (**(long **)(*unaff_x21 + 0xb8) != 0) {
                                    FUN_052721fc(**(long **)(*unaff_x21 + 0xb8),0);
                                    uVar4 = FUN_05276ec4();
                                    FUN_052ea440(uVar4,unaff_x19 + 0xd2,uVar4);
                                    if (**(long **)(*unaff_x21 + 0xb8) != 0) {
                                      FUN_052721fc(**(long **)(*unaff_x21 + 0xb8),0);
                                      uVar4 = FUN_05276de4();
                                      FUN_052ea440(uVar4,unaff_x19 + 0xe6,uVar4);
                                      if (**(long **)(*unaff_x21 + 0xb8) != 0) {
                                        FUN_052721fc(**(long **)(*unaff_x21 + 0xb8),0);
                                        uVar4 = FUN_05276e38();
                                        FUN_052ea440(uVar4,unaff_x19 + 0xe7,uVar4);
                                        if (**(long **)(*unaff_x21 + 0xb8) != 0) {
                                          FUN_052721fc(**(long **)(*unaff_x21 + 0xb8),0);
                                          uVar4 = FUN_05276ee0();
                                          FUN_052ea440(uVar4,unaff_x19 + 0xe1,uVar4);
                                          if (**(long **)(*unaff_x21 + 0xb8) != 0) {
                                            FUN_052721fc(**(long **)(*unaff_x21 + 0xb8),0);
                                            uVar4 = FUN_05276d90();
                                            FUN_052ea440(uVar4,unaff_x19 + 0xd0,uVar4);
                                            if (**(long **)(*unaff_x21 + 0xb8) != 0) {
                                              FUN_052721fc(**(long **)(*unaff_x21 + 0xb8),0);
                                              uVar4 = FUN_05276e70();
                                              FUN_052ea440(uVar4,unaff_x19 + 0xe4,uVar4);
                                              if (**(long **)(*unaff_x21 + 0xb8) != 0) {
                                                FUN_052721fc(**(long **)(*unaff_x21 + 0xb8),0);
                                                uVar4 = FUN_05276d20();
Meta_XR_ImmersiveDebugger_Gizmo_PolylineRenderer___ctor:
                                                FUN_052ea440(uVar4,unaff_x19 + 0xe5,uVar4);
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
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


