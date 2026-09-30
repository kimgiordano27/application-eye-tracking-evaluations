/*
FUNCTION_NAME: FUN_055d3800
ENTRY_POINT: 055d3800
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ray_interaction;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_3;validity_or_gating_hits_21;ray_or_cast_sink_hits_4;ui_or_gameplay_sink_hits_3;telemetry_or_network_hits_1;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_055d3800(undefined8 *param_1)

{
  uint uVar1;
  byte bVar2;
  undefined8 *puVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  undefined8 uVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  int unaff_w19;
  long *unaff_x20;
  long unaff_x21;
  long *unaff_x22;
  long unaff_x23;
  long *unaff_x24;
  long unaff_x25;
  long *unaff_x26;
  long unaff_x29;
  long *in_stack_00000008;
  long in_stack_00000010;
  undefined8 in_stack_00000018;
  long *in_stack_00000028;
  undefined8 in_stack_00000030;
  long in_stack_00000050;
  char *in_stack_00000058;
  long *in_stack_00000060;
  long in_stack_00000068;
  undefined8 *in_stack_00000070;
  long *in_stack_00000078;
  long *in_stack_00000088;
  long *in_stack_00000098;
  long *in_stack_000000a0;
  undefined8 in_stack_000000a8;
  long in_stack_000000c8;
  
code_r0x055d3800:
  (*(code *)*param_1)(unaff_x26,param_1[1]);
LAB_055d380c:
  if (unaff_x25 != 0) {
    if (*(long *)(in_stack_00000010 + 0x28) == in_stack_000000c8) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c0(unaff_x25);
    }
    goto LAB_055d4150;
  }
  if ((unaff_w19 == 0x4f) || (unaff_w19 == 0)) {
    plVar8 = *(long **)(unaff_x21 + 0x48);
    uVar1 = 0;
    if (*(int *)(unaff_x21 + 0x5c) != 3) {
      uVar1 = in_stack_00000018._4_4_;
    }
    if ((uVar1 & 1) == 0) {
      if (plVar8 == (long *)0x0) {
        if (*(long *)(in_stack_00000010 + 0x28) == in_stack_000000c8) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        goto LAB_055d4150;
      }
      (**(code **)(*plVar8 + 0x638))(plVar8,in_stack_00000088,*(undefined8 *)(*plVar8 + 0x640));
    }
    else {
      if (plVar8 == (long *)0x0) {
        if (*(long *)(in_stack_00000010 + 0x28) == in_stack_000000c8) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        goto LAB_055d4150;
      }
      (**(code **)(*plVar8 + 0x3f8))(plVar8,in_stack_00000088,*(undefined8 *)(*plVar8 + 0x400));
    }
    plVar8 = *(long **)(unaff_x21 + 0x48);
    if (plVar8 == (long *)0x0) {
      if (*(long *)(in_stack_00000010 + 0x28) == in_stack_000000c8) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      goto LAB_055d4150;
    }
    (**(code **)(*plVar8 + 0x2b8))(plVar8,unaff_x24,*(undefined8 *)(*plVar8 + 0x2c0));
    if (in_stack_000000a8._4_1_ != '\0') {
      if (in_stack_00000088 == (long *)0x0) {
        if (*(long *)(in_stack_00000010 + 0x28) == in_stack_000000c8) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        goto LAB_055d4150;
      }
      (**(code **)(*in_stack_00000088 + 0x1a8))
                (in_stack_00000088,*(undefined8 *)(*in_stack_00000088 + 0x1b0));
    }
    unaff_w19 = 0x3f;
  }
  if (*in_stack_00000058 != '\0') {
    in_stack_00000060 = (long *)*in_stack_00000060;
    if (in_stack_00000060 == (long *)0x0) {
      if (*(long *)(in_stack_00000010 + 0x28) == in_stack_000000c8) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      goto LAB_055d4150;
    }
    (**(code **)(*in_stack_00000060 + 0x2f8))
              (in_stack_00000060,*(undefined8 *)(*in_stack_00000060 + 0x300));
  }
  if (in_stack_00000050 != 0) {
    if (*(long *)(in_stack_00000010 + 0x28) == in_stack_000000c8) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c0();
    }
    goto LAB_055d4150;
  }
  if ((unaff_w19 == 0x3f) || (unaff_w19 == 0)) {
    do {
      plVar8 = in_stack_000000a0;
      if (in_stack_000000a0 == (long *)0x0) {
        if (*(long *)(in_stack_00000010 + 0x28) == in_stack_000000c8) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        goto LAB_055d4150;
      }
      lVar10 = *in_stack_000000a0;
      uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *unaff_x22) {
            puVar3 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
            goto LAB_055d3160;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar3 = (undefined8 *)FUN_02f421d0(in_stack_000000a0,*unaff_x22,0);
LAB_055d3160:
      uVar11 = (*(code *)*puVar3)(plVar8,puVar3[1]);
      plVar8 = in_stack_000000a0;
      if ((uVar11 & 1) == 0) {
        unaff_w19 = 0x53;
        goto LAB_055d3c28;
      }
      if (in_stack_000000a0 == (long *)0x0) {
        if (*(long *)(in_stack_00000010 + 0x28) == in_stack_000000c8) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        goto LAB_055d4150;
      }
      lVar10 = *in_stack_000000a0;
      uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *unaff_x22) {
            puVar3 = (undefined8 *)(lVar10 + (long)(*piVar12 + 1) * 0x10 + 0x138);
            goto LAB_055d31c8;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar3 = (undefined8 *)FUN_02f421d0(in_stack_000000a0,*unaff_x22,1);
LAB_055d31c8:
      plVar8 = (long *)(*(code *)*puVar3)(plVar8,puVar3[1]);
      if ((plVar8 != (long *)0x0) && (*plVar8 != *(long *)(unaff_x29 + 0x90))) {
        if (*(long *)(in_stack_00000010 + 0x28) == in_stack_000000c8) {
                    /* WARNING: Subroutine does not return */
          FUN_02f08d48(plVar8);
        }
        goto LAB_055d4150;
      }
      if (*(long *)(unaff_x21 + 0x30) == 0) {
        if (unaff_x23 == 0) {
          if (*(long *)(in_stack_00000010 + 0x28) == in_stack_000000c8) {
                    /* WARNING: Subroutine does not return */
            FUN_02f089c8();
          }
          goto LAB_055d4150;
        }
        uVar9 = FUN_05546520();
      }
      else {
        uVar9 = *(undefined8 *)(*(long *)(unaff_x21 + 0x30) + 0x50);
      }
      uVar11 = thunk_FUN_04f6d944(plVar8,uVar9,0);
    } while (((uVar11 & 1) != 0) || (uVar11 = FUN_04f6ebb4(plVar8,0), (uVar11 & 1) != 0));
    in_stack_00000088 = (long *)0x0;
    if (in_stack_000000a8._4_1_ == '\0') {
      in_stack_00000088 = in_stack_00000008;
      goto LAB_055d33b4;
    }
    lVar10 = FUN_02f0880c(*(undefined8 *)PTR_DAT_067c9070,5);
    if (lVar10 == 0) {
      if (*(long *)(in_stack_00000010 + 0x28) == in_stack_000000c8) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
    }
    else {
      uVar1 = *(uint *)(lVar10 + 0x18);
      if (uVar1 == 0) {
        if (*(long *)(in_stack_00000010 + 0x28) == in_stack_000000c8) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089d0();
        }
      }
      else {
        *(undefined8 *)(lVar10 + 0x20) = *(undefined8 *)(unaff_x21 + 0x60);
        if (uVar1 == 1) {
          if (*(long *)(in_stack_00000010 + 0x28) == in_stack_000000c8) {
                    /* WARNING: Subroutine does not return */
            FUN_02f089d0();
          }
        }
        else {
          *(undefined8 *)(lVar10 + 0x28) = *(undefined8 *)(unaff_x21 + 0x68);
          if (uVar1 < 3) {
            if (*(long *)(in_stack_00000010 + 0x28) == in_stack_000000c8) {
                    /* WARNING: Subroutine does not return */
              FUN_02f089d0();
            }
          }
          else {
            *(undefined8 *)(lVar10 + 0x30) = *(undefined8 *)PTR_DAT_067d0878;
            plVar4 = *(long **)(unaff_x21 + 0x28);
            if (plVar4 == (long *)0x0) {
              if (*(long *)(in_stack_00000010 + 0x28) == in_stack_000000c8) {
                    /* WARNING: Subroutine does not return */
                FUN_02f089c8();
              }
            }
            else {
              plVar4 = (long *)(**(code **)(*plVar4 + 0x308))
                                         (plVar4,plVar8,*(undefined8 *)(*plVar4 + 0x310));
              uVar9 = 0;
              if (plVar4 != (long *)0x0) {
                uVar9 = (**(code **)(*plVar4 + 0x168))(plVar4,*(undefined8 *)(*plVar4 + 0x170));
              }
              if ((*(ulong *)(lVar10 + 0x18) & 0xfffffffc) == 0) {
                if (*(long *)(in_stack_00000010 + 0x28) == in_stack_000000c8) {
                    /* WARNING: Subroutine does not return */
                  FUN_02f089d0();
                }
              }
              else {
                *(undefined8 *)(lVar10 + 0x38) = uVar9;
                if ((uint)*(ulong *)(lVar10 + 0x18) < 5) {
                  if (*(long *)(in_stack_00000010 + 0x28) == in_stack_000000c8) {
                    /* WARNING: Subroutine does not return */
                    FUN_02f089d0();
                  }
                }
                else {
                  *(undefined8 *)(lVar10 + 0x40) =
                       *(undefined8 *)
                        Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariableBase<float3>_Subscribe__
                  ;
                  uVar9 = FUN_04f6fd20(lVar10,0);
                  plVar4 = (long *)thunk_FUN_02f45270(*(undefined8 *)
                                                                                                              
                                                  System_Console_WindowsConsole_WindowsCancelHandler_TypeInfo
                                                  );
                  FUN_057d753c(plVar4,uVar9,0,0);
                  in_stack_00000088 = plVar4;
                  if (in_stack_000000a8._4_1_ == '\0') {
LAB_055d33b4:
                    in_stack_00000060 = (long *)&stack0x00000088;
                    in_stack_00000058 = (char *)((long)&stack0x000000a8 + 4);
                    in_stack_00000050 = 0;
                    plVar4 = *(long **)(unaff_x21 + 0x18);
                    if (plVar4 == (long *)0x0) {
                      if (*(long *)(in_stack_00000010 + 0x28) == in_stack_000000c8) {
                    /* WARNING: Subroutine does not return */
                        FUN_02f089c8();
                      }
                      goto LAB_055d4150;
                    }
                    unaff_x24 = (long *)(**(code **)(*plVar4 + 0x308))
                                                  (plVar4,plVar8,*(undefined8 *)(*plVar4 + 0x310));
                    if (unaff_x24 != (long *)0x0) {
                      bVar2 = *(byte *)(*(long *)
                                         System_Collections_Generic_List<TrackedDeviceGraphicRaycaster_RaycastHitData>_TypeInfo
                                       + 0x130);
                      if ((*(byte *)(*unaff_x24 + 0x130) < bVar2) ||
                         (*(long *)(*(long *)(*unaff_x24 + 200) + (ulong)bVar2 * 8 + -8) !=
                          *(long *)
                           System_Collections_Generic_List<TrackedDeviceGraphicRaycaster_RaycastHitData>_TypeInfo
                         )) {
                        if (*(long *)(in_stack_00000010 + 0x28) == in_stack_000000c8) {
                    /* WARNING: Subroutine does not return */
                          FUN_02f08d48(unaff_x24);
                        }
                        goto LAB_055d4150;
                      }
                    }
                    plVar4 = *(long **)(unaff_x21 + 0x48);
                    if (plVar4 == (long *)0x0) {
                      if (*(long *)(in_stack_00000010 + 0x28) == in_stack_000000c8) {
                    /* WARNING: Subroutine does not return */
                        FUN_02f089c8();
                      }
                    }
                    else {
                      (**(code **)(*plVar4 + 0x2d8))
                                (plVar4,unaff_x24,*(undefined8 *)(*plVar4 + 0x2e0));
                      plVar4 = *(long **)(unaff_x21 + 0x18);
                      if (plVar4 == (long *)0x0) {
                        if (*(long *)(in_stack_00000010 + 0x28) == in_stack_000000c8) {
                    /* WARNING: Subroutine does not return */
                          FUN_02f089c8();
                        }
                      }
                      else {
                        plVar4 = (long *)(**(code **)(*plVar4 + 0x388))
                                                   (plVar4,*(undefined8 *)(*plVar4 + 0x390));
                        if (plVar4 == (long *)0x0) {
                          if (*(long *)(in_stack_00000010 + 0x28) == in_stack_000000c8) {
                    /* WARNING: Subroutine does not return */
                            FUN_02f089c8();
                          }
                        }
                        else {
                          lVar10 = *plVar4;
                          uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
                          if (uVar11 != 0) {
                            piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                            do {
                              if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_067cb558) {
                                puVar3 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
                                goto LAB_055d349c;
                              }
                              uVar11 = uVar11 - 1;
                              piVar12 = piVar12 + 4;
                            } while (uVar11 != 0);
                          }
                          puVar3 = (undefined8 *)FUN_02f421d0(plVar4,*(long *)PTR_DAT_067cb558,0);
LAB_055d349c:
                          plVar4 = (long *)(*(code *)*puVar3)(plVar4,puVar3[1]);
                          if (plVar4 != (long *)0x0) {
                            do {
                              lVar10 = *plVar4;
                              uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
                              if (uVar11 != 0) {
                                piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                                do {
                                  if (*(long *)(piVar12 + -2) == *unaff_x22) {
                                    puVar3 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
                                    goto LAB_055d3510;
                                  }
                                  uVar11 = uVar11 - 1;
                                  piVar12 = piVar12 + 4;
                                } while (uVar11 != 0);
                              }
                              puVar3 = (undefined8 *)FUN_02f421d0(plVar4,*unaff_x22,0);
LAB_055d3510:
                              uVar11 = (*(code *)*puVar3)(plVar4,puVar3[1]);
                              if ((uVar11 & 1) == 0) goto LAB_055d378c;
                              if (plVar4 == (long *)0x0) {
                                if (*(long *)(in_stack_00000010 + 0x28) == in_stack_000000c8) {
                    /* WARNING: Subroutine does not return */
                                  FUN_02f089c8();
                                }
                                goto LAB_055d4150;
                              }
                              lVar10 = *plVar4;
                              uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
                              if (uVar11 != 0) {
                                piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                                do {
                                  if (*(long *)(piVar12 + -2) == *unaff_x22) {
                                    puVar3 = (undefined8 *)
                                             (lVar10 + (long)(*piVar12 + 1) * 0x10 + 0x138);
                                    goto LAB_055d3578;
                                  }
                                  uVar11 = uVar11 - 1;
                                  piVar12 = piVar12 + 4;
                                } while (uVar11 != 0);
                              }
                              puVar3 = (undefined8 *)FUN_02f421d0(plVar4,*unaff_x22,1);
LAB_055d3578:
                              plVar5 = (long *)(*(code *)*puVar3)(plVar4,puVar3[1]);
                              if ((plVar5 != (long *)0x0) &&
                                 (*plVar5 != *(long *)(unaff_x29 + 0x90))) {
                                if (*(long *)(in_stack_00000010 + 0x28) == in_stack_000000c8) {
                    /* WARNING: Subroutine does not return */
                                  FUN_02f08d48(plVar5);
                                }
                                goto LAB_055d4150;
                              }
                              uVar11 = thunk_FUN_04f6d944(plVar8,plVar5,0);
                              if ((uVar11 & 1) == 0) {
                                plVar6 = *(long **)(unaff_x21 + 0x28);
                                if (plVar6 == (long *)0x0) {
                                  if (*(long *)(in_stack_00000010 + 0x28) == in_stack_000000c8) {
                    /* WARNING: Subroutine does not return */
                                    FUN_02f089c8();
                                  }
                                  goto LAB_055d4150;
                                }
                                plVar6 = (long *)(**(code **)(*plVar6 + 0x308))
                                                           (plVar6,plVar5,
                                                            *(undefined8 *)(*plVar6 + 0x310));
                                if (plVar6 != (long *)0x0) {
                                  if (*plVar6 != *(long *)(unaff_x29 + 0x90)) {
                                    if (*(long *)(in_stack_00000010 + 0x28) == in_stack_000000c8) {
                    /* WARNING: Subroutine does not return */
                                      FUN_02f08d48(plVar6);
                                    }
                                    goto LAB_055d4150;
                                  }
                                  uVar9 = FUN_04f65260(*(undefined8 *)
                                                                                                                
                                                  System_Nullable<OpenXRAnalytics_InitializeEvent>_TypeInfo
                                                  ,plVar6,0);
                                  if (unaff_x24 == (long *)0x0) {
                                    if (*(long *)(in_stack_00000010 + 0x28) == in_stack_000000c8) {
                    /* WARNING: Subroutine does not return */
                                      FUN_02f089c8(uVar9,uVar9);
                                    }
                                    goto LAB_055d4150;
                                  }
                                  (**(code **)(*unaff_x24 + 0x518))
                                            (unaff_x24,uVar9,plVar5,
                                             *(undefined8 *)(*unaff_x24 + 0x520));
                                  plVar7 = *(long **)(unaff_x21 + 0x48);
                                  if (plVar7 == (long *)0x0) {
                                    if (*(long *)(in_stack_00000010 + 0x28) == in_stack_000000c8) {
                    /* WARNING: Subroutine does not return */
                                      FUN_02f089c8();
                                    }
                                    goto LAB_055d4150;
                                  }
                                  plVar7 = (long *)(**(code **)(*plVar7 + 0x5f8))
                                                             (plVar7,*(undefined8 *)
                                                                                                                                            
                                                  Method_UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_Receiver_BaseAffordanceStateReceiver<float2>_Awake__
                                                  ,*(undefined8 *)
                                                                                                        
                                                  Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariableBase<NearFarInteractor_Region>_SetValueWithoutNotify__
                                                  ,*(undefined8 *)PTR_DAT_067cd6c0,
                                                  *(undefined8 *)(*plVar7 + 0x600));
                                  if (plVar7 == (long *)0x0) {
                                    if (*(long *)(in_stack_00000010 + 0x28) == in_stack_000000c8) {
                    /* WARNING: Subroutine does not return */
                                      FUN_02f089c8();
                                    }
                                    goto LAB_055d4150;
                                  }
                                  (**(code **)(*plVar7 + 0x518))
                                            (plVar7,*(undefined8 *)
                                                                                                          
                                                  Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariableBase<NearFarInteractor_Region>_set_Value__
                                             ,plVar5,*(undefined8 *)(*plVar7 + 0x520));
                                  uVar1 = in_stack_00000018._4_4_;
                                  if (*(int *)(unaff_x21 + 0x5c) == 3) {
                                    uVar1 = 1;
                                  }
                                  if ((uVar1 & 1) == 0) {
                                    if (*(long *)(unaff_x21 + 0x30) == 0) {
                                      if (unaff_x23 == 0) {
                                        if (*(long *)(in_stack_00000010 + 0x28) == in_stack_000000c8
                                           ) {
                    /* WARNING: Subroutine does not return */
                                          FUN_02f089c8();
                                        }
                                        goto LAB_055d4150;
                                      }
                                      uVar9 = FUN_05546520();
                                    }
                                    else {
                                      uVar9 = *(undefined8 *)(*(long *)(unaff_x21 + 0x30) + 0x50);
                                    }
                                    uVar11 = thunk_FUN_04f6d944(plVar5,uVar9,0);
                                    if ((uVar11 & 1) == 0) {
                                      uVar9 = FUN_04f6fc18(*(undefined8 *)(unaff_x21 + 0x68),
                                                           *(undefined8 *)PTR_DAT_067d0878,plVar6,
                                                           *(undefined8 *)
                                                                                                                        
                                                  Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariableBase<float3>_Subscribe__
                                                  ,0);
                                      (**(code **)(*plVar7 + 0x518))
                                                (plVar7,*(undefined8 *)
                                                                                                                  
                                                  Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariableBase<XRInputModalityManager_InputMode>_set_Value__
                                                 ,uVar9,*(undefined8 *)(*plVar7 + 0x520));
                                    }
                                    else {
                                      uVar9 = FUN_04f65260(*(undefined8 *)(unaff_x21 + 0x68),
                                                           *(undefined8 *)(unaff_x21 + 0x70),0);
                                      (**(code **)(*plVar7 + 0x518))
                                                (plVar7,*(undefined8 *)
                                                                                                                  
                                                  Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariableBase<XRInputModalityManager_InputMode>_set_Value__
                                                 ,uVar9,*(undefined8 *)(*plVar7 + 0x520));
                                    }
                                  }
                                  (**(code **)(*unaff_x24 + 0x2c8))
                                            (unaff_x24,plVar7,*(undefined8 *)(*unaff_x24 + 0x2d0));
                                }
                              }
                              if (plVar4 == (long *)0x0) break;
                            } while( true );
                          }
                          if (*(long *)(in_stack_00000010 + 0x28) == in_stack_000000c8) {
                    /* WARNING: Subroutine does not return */
                            FUN_02f089c8();
                          }
                        }
                      }
                    }
                    goto LAB_055d4150;
                  }
                  if (plVar4 != (long *)0x0) {
                    bVar2 = *(byte *)(*(long *)
                                       System_Console_WindowsConsole_WindowsCancelHandler_TypeInfo +
                                     0x130);
                    if (((*(byte *)(*plVar4 + 0x130) < bVar2) ||
                        (*(long *)(*(long *)(*plVar4 + 200) + (ulong)bVar2 * 8 + -8) !=
                         *(long *)System_Console_WindowsConsole_WindowsCancelHandler_TypeInfo)) ||
                       (FUN_057d7648(plVar4,1,0), in_stack_00000088 != (long *)0x0)) {
                      (**(code **)(*in_stack_00000088 + 0x198))
                                (in_stack_00000088,1,*(undefined8 *)(*in_stack_00000088 + 0x1a0));
                      goto LAB_055d33b4;
                    }
                  }
                  if (*(long *)(in_stack_00000010 + 0x28) == in_stack_000000c8) {
                    /* WARNING: Subroutine does not return */
                    FUN_02f089c8();
                  }
                }
              }
            }
          }
        }
      }
    }
    goto LAB_055d4150;
  }
LAB_055d3c28:
  plVar8 = (long *)thunk_FUN_02f45174(*in_stack_00000070,*unaff_x20);
  *in_stack_00000078 = (long)plVar8;
  if (plVar8 == (long *)0x0) goto LAB_055d3ca0;
  lVar10 = *plVar8;
  uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
  if (uVar11 == 0) goto LAB_055d3c78;
  piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
  goto LAB_055d3c60;
LAB_055d378c:
  unaff_x25 = 0;
  unaff_w19 = 0x4f;
  unaff_x26 = (long *)thunk_FUN_02f45174(plVar4,*unaff_x20);
  in_stack_00000098 = unaff_x26;
  if (unaff_x26 != (long *)0x0) goto code_r0x055d37b4;
  goto LAB_055d380c;
code_r0x055d37b4:
  lVar10 = *unaff_x26;
  uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
  if (uVar11 != 0) {
    piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
    do {
      if (*(long *)(piVar12 + -2) == *unaff_x20) {
        param_1 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
        goto code_r0x055d3800;
      }
      uVar11 = uVar11 - 1;
      piVar12 = piVar12 + 4;
    } while (uVar11 != 0);
  }
  param_1 = (undefined8 *)FUN_02f421d0(unaff_x26,*unaff_x20,0);
  goto code_r0x055d3800;
  while( true ) {
    uVar11 = uVar11 - 1;
    piVar12 = piVar12 + 4;
    if (uVar11 == 0) break;
LAB_055d3c60:
    if (*(long *)(piVar12 + -2) == *unaff_x20) {
      puVar3 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
      goto LAB_055d3c94;
    }
  }
LAB_055d3c78:
  puVar3 = (undefined8 *)FUN_02f421d0(plVar8,*unaff_x20,0);
LAB_055d3c94:
  (*(code *)*puVar3)(plVar8,puVar3[1]);
LAB_055d3ca0:
  if (in_stack_00000068 != 0) {
    if (*(long *)(in_stack_00000010 + 0x28) == in_stack_000000c8) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c0();
    }
    goto LAB_055d4150;
  }
  if (unaff_w19 == 0x53) {
LAB_055d2bd0:
    if (in_stack_000000a8._4_1_ == '\0') {
      if (in_stack_00000008 == (long *)0x0) {
        if (*(long *)(in_stack_00000010 + 0x28) == in_stack_000000c8) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        goto LAB_055d4150;
      }
      (**(code **)(*in_stack_00000008 + 0x308))
                (in_stack_00000008,*(undefined8 *)(*in_stack_00000008 + 0x310));
    }
  }
  else if (unaff_w19 == 0) {
    (**(code **)(*in_stack_00000028 + 0x2d8))
              (in_stack_00000028,in_stack_00000030,*(undefined8 *)(*in_stack_00000028 + 0x2e0));
    (**(code **)(*in_stack_00000028 + 0x638))
              (in_stack_00000028,in_stack_00000008,*(undefined8 *)(*in_stack_00000028 + 0x640));
    goto LAB_055d2bd0;
  }
  if (*(long *)(in_stack_00000010 + 0x28) == in_stack_000000c8) {
    return;
  }
LAB_055d4150:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


