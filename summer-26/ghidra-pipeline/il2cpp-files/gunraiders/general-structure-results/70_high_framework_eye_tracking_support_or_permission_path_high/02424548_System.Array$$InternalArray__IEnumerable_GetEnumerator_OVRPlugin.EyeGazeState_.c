/*
FUNCTION_NAME: System.Array$$InternalArray__IEnumerable_GetEnumerator<OVRPlugin.EyeGazeState>
ENTRY_POINT: 02424548
PROGRAM: gunraiders-libil2cpp.so
SCORE: 79
LABEL: framework_eye_tracking_support_or_permission_path_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_eye_tracking_support_or_permission_path
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;pose_vector;attempted_use
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;attempted_eye_tracking_permission_or_feature_enable;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_retrieval_or_extraction
*/


undefined4
System_Array__InternalArray__IEnumerable_GetEnumerator<OVRPlugin_EyeGazeState>(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined4 uVar4;
  long lVar5;
  undefined8 uVar6;
  long *unaff_x21;
  
  if (*(int *)(param_1 + 0xe0) == 0) {
    thunk_FUN_01c1d1e8();
  }
  uVar2 = FUN_032e04b8();
  puVar1 = PTR_DAT_0422fbd8;
  lVar5 = *(long *)PTR_DAT_0422fbd8;
  if (*(int *)(lVar5 + 0xe0) == 0) {
    thunk_FUN_01c1d1e8(lVar5);
    lVar5 = *(long *)puVar1;
  }
  uVar3 = FUN_032e935c(uVar2,**(undefined8 **)(lVar5 + 0xb8),0);
  if ((uVar3 & 1) == 0) {
    lVar5 = *(long *)puVar1;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
      lVar5 = *(long *)puVar1;
    }
    uVar6 = *(undefined8 *)(*(long *)(lVar5 + 0xb8) + 8);
    if (*(int *)(*unaff_x21 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8(*unaff_x21);
    }
    uVar3 = FUN_032e935c(uVar2,uVar6,0);
    if ((uVar3 & 1) == 0) {
      lVar5 = *(long *)puVar1;
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
        lVar5 = *(long *)puVar1;
      }
      uVar6 = *(undefined8 *)(*(long *)(lVar5 + 0xb8) + 0x10);
      if (*(int *)(*unaff_x21 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8(*unaff_x21);
      }
      uVar3 = FUN_032e935c(uVar2,uVar6,0);
      if ((uVar3 & 1) == 0) {
        lVar5 = *(long *)puVar1;
        if (*(int *)(lVar5 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8();
          lVar5 = *(long *)puVar1;
        }
        uVar6 = *(undefined8 *)(*(long *)(lVar5 + 0xb8) + 0x18);
        if (*(int *)(*unaff_x21 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8(*unaff_x21);
        }
        uVar3 = FUN_032e935c(uVar2,uVar6,0);
        if ((uVar3 & 1) == 0) {
          lVar5 = *(long *)puVar1;
          if (*(int *)(lVar5 + 0xe0) == 0) {
            thunk_FUN_01c1d1e8();
            lVar5 = *(long *)puVar1;
          }
          uVar6 = *(undefined8 *)(*(long *)(lVar5 + 0xb8) + 0x20);
          if (*(int *)(*unaff_x21 + 0xe0) == 0) {
            thunk_FUN_01c1d1e8(*unaff_x21);
          }
          uVar3 = FUN_032e935c(uVar2,uVar6,0);
          if ((uVar3 & 1) == 0) {
            lVar5 = *(long *)puVar1;
            if (*(int *)(lVar5 + 0xe0) == 0) {
              thunk_FUN_01c1d1e8();
              lVar5 = *(long *)puVar1;
            }
            uVar6 = *(undefined8 *)(*(long *)(lVar5 + 0xb8) + 0x28);
            if (*(int *)(*unaff_x21 + 0xe0) == 0) {
              thunk_FUN_01c1d1e8(*unaff_x21);
            }
            uVar3 = FUN_032e935c(uVar2,uVar6,0);
            if ((uVar3 & 1) == 0) {
              lVar5 = *(long *)puVar1;
              if (*(int *)(lVar5 + 0xe0) == 0) {
                thunk_FUN_01c1d1e8();
                lVar5 = *(long *)puVar1;
              }
              uVar6 = *(undefined8 *)(*(long *)(lVar5 + 0xb8) + 0x30);
              if (*(int *)(*unaff_x21 + 0xe0) == 0) {
                thunk_FUN_01c1d1e8(*unaff_x21);
              }
              uVar3 = FUN_032e935c(uVar2,uVar6,0);
              if ((uVar3 & 1) == 0) {
                lVar5 = *(long *)puVar1;
                if (*(int *)(lVar5 + 0xe0) == 0) {
                  thunk_FUN_01c1d1e8();
                  lVar5 = *(long *)puVar1;
                }
                uVar6 = *(undefined8 *)(*(long *)(lVar5 + 0xb8) + 0x38);
                if (*(int *)(*unaff_x21 + 0xe0) == 0) {
                  thunk_FUN_01c1d1e8(*unaff_x21);
                }
                uVar3 = FUN_032e935c(uVar2,uVar6,0);
                if ((uVar3 & 1) == 0) {
                  lVar5 = *(long *)puVar1;
                  if (*(int *)(lVar5 + 0xe0) == 0) {
                    thunk_FUN_01c1d1e8();
                    lVar5 = *(long *)puVar1;
                  }
                  uVar6 = *(undefined8 *)(*(long *)(lVar5 + 0xb8) + 0x40);
                  if (*(int *)(*unaff_x21 + 0xe0) == 0) {
                    thunk_FUN_01c1d1e8(*unaff_x21);
                  }
                  uVar3 = FUN_032e935c(uVar2,uVar6,0);
                  if ((uVar3 & 1) == 0) {
                    lVar5 = *(long *)puVar1;
                    if (*(int *)(lVar5 + 0xe0) == 0) {
                      thunk_FUN_01c1d1e8();
                      lVar5 = *(long *)puVar1;
                    }
                    uVar6 = *(undefined8 *)(*(long *)(lVar5 + 0xb8) + 0x50);
                    if (*(int *)(*unaff_x21 + 0xe0) == 0) {
                      thunk_FUN_01c1d1e8(*unaff_x21);
                    }
                    uVar3 = FUN_032e935c(uVar2,uVar6,0);
                    if ((uVar3 & 1) == 0) {
                      lVar5 = *(long *)puVar1;
                      if (*(int *)(lVar5 + 0xe0) == 0) {
                        thunk_FUN_01c1d1e8();
                        lVar5 = *(long *)puVar1;
                      }
                      uVar6 = *(undefined8 *)(*(long *)(lVar5 + 0xb8) + 0x58);
                      if (*(int *)(*unaff_x21 + 0xe0) == 0) {
                        thunk_FUN_01c1d1e8(*unaff_x21);
                      }
                      uVar3 = FUN_032e935c(uVar2,uVar6,0);
                      if ((uVar3 & 1) == 0) {
                        lVar5 = *(long *)puVar1;
                        if (*(int *)(lVar5 + 0xe0) == 0) {
                          thunk_FUN_01c1d1e8();
                          lVar5 = *(long *)puVar1;
                        }
                        uVar6 = *(undefined8 *)(*(long *)(lVar5 + 0xb8) + 0x60);
                        if (*(int *)(*unaff_x21 + 0xe0) == 0) {
                          thunk_FUN_01c1d1e8(*unaff_x21);
                        }
                        uVar3 = FUN_032e935c(uVar2,uVar6,0);
                        if ((uVar3 & 1) == 0) {
                          lVar5 = *(long *)puVar1;
                          if (*(int *)(lVar5 + 0xe0) == 0) {
                            thunk_FUN_01c1d1e8();
                            lVar5 = *(long *)puVar1;
                          }
                          uVar6 = *(undefined8 *)(*(long *)(lVar5 + 0xb8) + 0x68);
                          if (*(int *)(*unaff_x21 + 0xe0) == 0) {
                            thunk_FUN_01c1d1e8(*unaff_x21);
                          }
                          uVar3 = FUN_032e935c(uVar2,uVar6,0);
                          if ((uVar3 & 1) == 0) {
                            lVar5 = *(long *)puVar1;
                            if (*(int *)(lVar5 + 0xe0) == 0) {
                              thunk_FUN_01c1d1e8();
                              lVar5 = *(long *)puVar1;
                            }
                            uVar6 = *(undefined8 *)(*(long *)(lVar5 + 0xb8) + 0x70);
                            if (*(int *)(*unaff_x21 + 0xe0) == 0) {
                              thunk_FUN_01c1d1e8(*unaff_x21);
                            }
                            uVar3 = FUN_032e935c(uVar2,uVar6,0);
                            if ((uVar3 & 1) == 0) {
                              lVar5 = *(long *)puVar1;
                              if (*(int *)(lVar5 + 0xe0) == 0) {
                                thunk_FUN_01c1d1e8();
                                lVar5 = *(long *)puVar1;
                              }
                              uVar6 = *(undefined8 *)(*(long *)(lVar5 + 0xb8) + 0x48);
                              if (*(int *)(*unaff_x21 + 0xe0) == 0) {
                                thunk_FUN_01c1d1e8(*unaff_x21);
                              }
                              uVar3 = FUN_032e935c(uVar2,uVar6,0);
                              if ((uVar3 & 1) == 0) {
                                lVar5 = *(long *)puVar1;
                                if (*(int *)(lVar5 + 0xe0) == 0) {
                                  thunk_FUN_01c1d1e8();
                                  lVar5 = *(long *)puVar1;
                                }
                                uVar6 = *(undefined8 *)(*(long *)(lVar5 + 0xb8) + 0x78);
                                if (*(int *)(*unaff_x21 + 0xe0) == 0) {
                                  thunk_FUN_01c1d1e8(*unaff_x21);
                                }
                                uVar3 = FUN_032e935c(uVar2,uVar6,0);
                                if ((uVar3 & 1) == 0) {
                                  lVar5 = *(long *)puVar1;
                                  if (*(int *)(lVar5 + 0xe0) == 0) {
                                    thunk_FUN_01c1d1e8();
                                    lVar5 = *(long *)puVar1;
                                  }
                                  uVar6 = *(undefined8 *)(*(long *)(lVar5 + 0xb8) + 0x80);
                                  if (*(int *)(*unaff_x21 + 0xe0) == 0) {
                                    thunk_FUN_01c1d1e8(*unaff_x21);
                                  }
                                  uVar3 = FUN_032e935c(uVar2,uVar6,0);
                                  if ((uVar3 & 1) == 0) {
                                    lVar5 = *(long *)puVar1;
                                    if (*(int *)(lVar5 + 0xe0) == 0) {
                                      thunk_FUN_01c1d1e8();
                                      lVar5 = *(long *)puVar1;
                                    }
                                    uVar6 = *(undefined8 *)(*(long *)(lVar5 + 0xb8) + 0x88);
                                    if (*(int *)(*unaff_x21 + 0xe0) == 0) {
                                      thunk_FUN_01c1d1e8(*unaff_x21);
                                    }
                                    uVar3 = FUN_032e935c(uVar2,uVar6,0);
                                    if ((uVar3 & 1) == 0) {
                                      lVar5 = *(long *)puVar1;
                                      if (*(int *)(lVar5 + 0xe0) == 0) {
                                        thunk_FUN_01c1d1e8();
                                        lVar5 = *(long *)puVar1;
                                      }
                                      uVar6 = *(undefined8 *)(*(long *)(lVar5 + 0xb8) + 0x90);
                                      if (*(int *)(*unaff_x21 + 0xe0) == 0) {
                                        thunk_FUN_01c1d1e8(*unaff_x21);
                                      }
                                      uVar3 = FUN_032e935c(uVar2,uVar6,0);
                                      if ((uVar3 & 1) == 0) {
                                        lVar5 = *(long *)puVar1;
                                        if (*(int *)(lVar5 + 0xe0) == 0) {
                                          thunk_FUN_01c1d1e8();
                                          lVar5 = *(long *)puVar1;
                                        }
                                        uVar6 = *(undefined8 *)(*(long *)(lVar5 + 0xb8) + 0x98);
                                        if (*(int *)(*unaff_x21 + 0xe0) == 0) {
                                          thunk_FUN_01c1d1e8(*unaff_x21);
                                        }
                                        uVar3 = FUN_032e935c(uVar2,uVar6,0);
                                        if ((uVar3 & 1) == 0) {
                                          lVar5 = *(long *)puVar1;
                                          if (*(int *)(lVar5 + 0xe0) == 0) {
                                            thunk_FUN_01c1d1e8();
                                            lVar5 = *(long *)puVar1;
                                          }
                                          uVar6 = *(undefined8 *)(*(long *)(lVar5 + 0xb8) + 0xa0);
                                          if (*(int *)(*unaff_x21 + 0xe0) == 0) {
                                            thunk_FUN_01c1d1e8(*unaff_x21);
                                          }
                                          uVar3 = FUN_032e935c(uVar2,uVar6,0);
                                          if ((uVar3 & 1) == 0) {
                                            lVar5 = *(long *)puVar1;
                                            if (*(int *)(lVar5 + 0xe0) == 0) {
                                              thunk_FUN_01c1d1e8();
                                              lVar5 = *(long *)puVar1;
                                            }
                                            uVar6 = *(undefined8 *)(*(long *)(lVar5 + 0xb8) + 0xa8);
                                            if (*(int *)(*unaff_x21 + 0xe0) == 0) {
                                              thunk_FUN_01c1d1e8(*unaff_x21);
                                            }
                                            uVar3 = FUN_032e935c(uVar2,uVar6,0);
                                            if ((uVar3 & 1) == 0) {
                                              lVar5 = *(long *)puVar1;
                                              if (*(int *)(lVar5 + 0xe0) == 0) {
                                                thunk_FUN_01c1d1e8();
                                                lVar5 = *(long *)puVar1;
                                              }
                                              uVar6 = *(undefined8 *)
                                                       (*(long *)(lVar5 + 0xb8) + 0xb0);
                                              if (*(int *)(*unaff_x21 + 0xe0) == 0) {
                                                thunk_FUN_01c1d1e8(*unaff_x21);
                                              }
                                              uVar3 = FUN_032e935c(uVar2,uVar6,0);
                                              if ((uVar3 & 1) == 0) {
                                                lVar5 = *(long *)puVar1;
                                                if (*(int *)(lVar5 + 0xe0) == 0) {
                                                  thunk_FUN_01c1d1e8();
                                                  lVar5 = *(long *)puVar1;
                                                }
                                                uVar6 = *(undefined8 *)
                                                         (*(long *)(lVar5 + 0xb8) + 0xb8);
                                                if (*(int *)(*unaff_x21 + 0xe0) == 0) {
                                                  thunk_FUN_01c1d1e8(*unaff_x21);
                                                }
                                                uVar3 = FUN_032e935c(uVar2,uVar6,0);
                                                if ((uVar3 & 1) == 0) {
                                                  lVar5 = *(long *)puVar1;
                                                  if (*(int *)(lVar5 + 0xe0) == 0) {
                                                    thunk_FUN_01c1d1e8();
                                                    lVar5 = *(long *)puVar1;
                                                  }
                                                  uVar6 = *(undefined8 *)
                                                           (*(long *)(lVar5 + 0xb8) + 0xc0);
                                                  if (*(int *)(*unaff_x21 + 0xe0) == 0) {
                                                    thunk_FUN_01c1d1e8(*unaff_x21);
                                                  }
                                                  uVar3 = FUN_032e935c(uVar2,uVar6,0);
                                                  if ((uVar3 & 1) == 0) {
                                                    lVar5 = *(long *)puVar1;
                                                    if (*(int *)(lVar5 + 0xe0) == 0) {
                                                      thunk_FUN_01c1d1e8();
                                                      lVar5 = *(long *)puVar1;
                                                    }
                                                    uVar6 = *(undefined8 *)
                                                             (*(long *)(lVar5 + 0xb8) + 200);
                                                    if (*(int *)(*unaff_x21 + 0xe0) == 0) {
                                                      thunk_FUN_01c1d1e8(*unaff_x21);
                                                    }
                                                    uVar3 = FUN_032e935c(uVar2,uVar6,0);
                                                    if ((uVar3 & 1) == 0) {
                                                      lVar5 = *(long *)puVar1;
                                                      if (*(int *)(lVar5 + 0xe0) == 0) {
                                                        thunk_FUN_01c1d1e8();
                                                        lVar5 = *(long *)puVar1;
                                                      }
                                                      uVar6 = *(undefined8 *)
                                                               (*(long *)(lVar5 + 0xb8) + 0xd0);
                                                      if (*(int *)(*unaff_x21 + 0xe0) == 0) {
                                                        thunk_FUN_01c1d1e8(*unaff_x21);
                                                      }
                                                      uVar3 = FUN_032e935c(uVar2,uVar6,0);
                                                      if ((uVar3 & 1) == 0) {
                                                        lVar5 = *(long *)puVar1;
                                                        if (*(int *)(lVar5 + 0xe0) == 0) {
                                                          thunk_FUN_01c1d1e8();
                                                          lVar5 = *(long *)puVar1;
                                                        }
                                                        uVar6 = *(undefined8 *)
                                                                 (*(long *)(lVar5 + 0xb8) + 0xd8);
                                                        if (*(int *)(*unaff_x21 + 0xe0) == 0) {
                                                          thunk_FUN_01c1d1e8(*unaff_x21);
                                                        }
                                                        uVar3 = FUN_032e935c(uVar2,uVar6,0);
                                                        if ((uVar3 & 1) == 0) {
                                                          lVar5 = *(long *)puVar1;
                                                          if (*(int *)(lVar5 + 0xe0) == 0) {
                                                            thunk_FUN_01c1d1e8();
                                                            lVar5 = *(long *)puVar1;
                                                          }
                                                          uVar6 = *(undefined8 *)
                                                                   (*(long *)(lVar5 + 0xb8) + 0xe0);
                                                          if (*(int *)(*unaff_x21 + 0xe0) == 0) {
                                                            thunk_FUN_01c1d1e8(*unaff_x21);
                                                          }
                                                          uVar3 = FUN_032e935c(uVar2,uVar6,0);
                                                          if ((uVar3 & 1) == 0) {
                                                            lVar5 = *(long *)puVar1;
                                                            if (*(int *)(lVar5 + 0xe0) == 0) {
                                                              thunk_FUN_01c1d1e8();
                                                              lVar5 = *(long *)puVar1;
                                                            }
                                                            uVar6 = *(undefined8 *)
                                                                     (*(long *)(lVar5 + 0xb8) + 0xe8
                                                                     );
                                                            if (*(int *)(*unaff_x21 + 0xe0) == 0) {
                                                              thunk_FUN_01c1d1e8(*unaff_x21);
                                                            }
                                                            uVar3 = FUN_032e935c(uVar2,uVar6,0);
                                                            if ((uVar3 & 1) == 0) {
                                                              lVar5 = *(long *)puVar1;
                                                              if (*(int *)(lVar5 + 0xe0) == 0) {
                                                                thunk_FUN_01c1d1e8();
                                                                lVar5 = *(long *)puVar1;
                                                              }
                                                              uVar6 = *(undefined8 *)
                                                                       (*(long *)(lVar5 + 0xb8) +
                                                                       0xf0);
                                                              if (*(int *)(*unaff_x21 + 0xe0) == 0)
                                                              {
                                                                thunk_FUN_01c1d1e8(*unaff_x21);
                                                              }
                                                              uVar3 = FUN_032e935c(uVar2,uVar6,0);
                                                              uVar4 = 0x53;
                                                              if ((uVar3 & 1) == 0) {
                                                                uVar4 = 0;
                                                              }
                                                            }
                                                            else {
                                                              uVar4 = 0x50;
                                                            }
                                                          }
                                                          else {
                                                            uVar4 = 0x4e;
                                                          }
                                                        }
                                                        else {
                                                          uVar4 = 0x46;
                                                        }
                                                      }
                                                      else {
                                                        uVar4 = 0x43;
                                                      }
                                                    }
                                                    else {
                                                      uVar4 = 0x41;
                                                    }
                                                  }
                                                  else {
                                                    uVar4 = 0x3e;
                                                  }
                                                }
                                                else {
                                                  uVar4 = 0x3c;
                                                }
                                              }
                                              else {
                                                uVar4 = 0x37;
                                              }
                                            }
                                            else {
                                              uVar4 = 0x35;
                                            }
                                          }
                                          else {
                                            uVar4 = 0x33;
                                          }
                                        }
                                        else {
                                          uVar4 = 0x32;
                                        }
                                      }
                                      else {
                                        uVar4 = 0x2f;
                                      }
                                    }
                                    else {
                                      uVar4 = 0x2d;
                                    }
                                  }
                                  else {
                                    uVar4 = 0x28;
                                  }
                                }
                                else {
                                  uVar4 = 0x25;
                                }
                              }
                              else {
                                uVar4 = 0xf;
                              }
                            }
                            else {
                              uVar4 = 0x23;
                            }
                          }
                          else {
                            uVar4 = 0x1c;
                          }
                        }
                        else {
                          uVar4 = 0x1b;
                        }
                      }
                      else {
                        uVar4 = 0x19;
                      }
                    }
                    else {
                      uVar4 = 0x14;
                    }
                  }
                  else {
                    uVar4 = 0x21;
                  }
                }
                else {
                  uVar4 = 0x20;
                }
              }
              else {
                uVar4 = 0x1e;
              }
            }
            else {
              uVar4 = 10;
            }
          }
          else {
            uVar4 = 5;
          }
        }
        else {
          uVar4 = 4;
        }
      }
      else {
        uVar4 = 3;
      }
    }
    else {
      uVar4 = 2;
    }
  }
  else {
    uVar4 = 1;
  }
  return uVar4;
}


