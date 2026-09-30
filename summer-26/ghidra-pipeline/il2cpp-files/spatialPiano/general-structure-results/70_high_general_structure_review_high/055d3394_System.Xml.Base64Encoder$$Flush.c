/*
FUNCTION_NAME: System.Xml.Base64Encoder$$Flush
ENTRY_POINT: 055d3394
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 84
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ray_interaction;ui_interaction;data_collection;telemetry
EVIDENCE: weak_xr_or_state_hits_3;validity_or_gating_hits_18;ray_or_cast_sink_hits_4;ui_or_gameplay_sink_hits_3;strong_file_logging_hits_2;telemetry_or_network_hits_1;negative_framework_namespace_without_eye_use_flow
*/


/* WARNING: Removing unreachable block (ram,0x055d3818) */
/* WARNING: Removing unreachable block (ram,0x055d3a64) */
/* WARNING: Removing unreachable block (ram,0x055d3a78) */
/* WARNING: Removing unreachable block (ram,0x055d38dc) */
/* WARNING: Removing unreachable block (ram,0x055d3cb0) */
/* WARNING: Removing unreachable block (ram,0x055d3cb4) */
/* WARNING: Removing unreachable block (ram,0x055d2ba0) */

void System_Xml_Base64Encoder__Flush(long *param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  byte bVar2;
  long *plVar3;
  long *plVar4;
  undefined8 *puVar5;
  long *plVar6;
  long *plVar7;
  undefined8 uVar8;
  long *plVar9;
  long lVar10;
  code *in_x9;
  ulong uVar11;
  int *piVar12;
  long *unaff_x20;
  long unaff_x21;
  long *unaff_x22;
  long unaff_x23;
  long *unaff_x25;
  long unaff_x29;
  long *in_stack_00000008;
  long in_stack_00000010;
  undefined8 in_stack_00000018;
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
  
code_r0x055d3394:
  (*in_x9)(param_1,param_2,param_3);
LAB_055d33b4:
  plVar3 = *(long **)(unaff_x21 + 0x18);
  if (plVar3 == (long *)0x0) {
    if (*(long *)(in_stack_00000010 + 0x28) == in_stack_000000c8) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    goto LAB_055d4150;
  }
  plVar3 = (long *)(**(code **)(*plVar3 + 0x308))(plVar3,unaff_x25,*(undefined8 *)(*plVar3 + 0x310))
  ;
  if (plVar3 != (long *)0x0) {
    bVar2 = *(byte *)(*(long *)
                       System_Collections_Generic_List<TrackedDeviceGraphicRaycaster_RaycastHitData>_TypeInfo
                     + 0x130);
    if ((*(byte *)(*plVar3 + 0x130) < bVar2) ||
       (*(long *)(*(long *)(*plVar3 + 200) + (ulong)bVar2 * 8 + -8) !=
        *(long *)
         System_Collections_Generic_List<TrackedDeviceGraphicRaycaster_RaycastHitData>_TypeInfo)) {
      if (*(long *)(in_stack_00000010 + 0x28) == in_stack_000000c8) {
                    /* WARNING: Subroutine does not return */
        FUN_02f08d48(plVar3);
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
    (**(code **)(*plVar4 + 0x2d8))(plVar4,plVar3,*(undefined8 *)(*plVar4 + 0x2e0));
    plVar4 = *(long **)(unaff_x21 + 0x18);
    if (plVar4 == (long *)0x0) {
      if (*(long *)(in_stack_00000010 + 0x28) == in_stack_000000c8) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
    }
    else {
      plVar4 = (long *)(**(code **)(*plVar4 + 0x388))(plVar4,*(undefined8 *)(*plVar4 + 0x390));
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
              puVar5 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
              goto LAB_055d349c;
            }
            uVar11 = uVar11 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar11 != 0);
        }
        puVar5 = (undefined8 *)FUN_02f421d0(plVar4,*(long *)PTR_DAT_067cb558,0);
LAB_055d349c:
        plVar4 = (long *)(*(code *)*puVar5)(plVar4,puVar5[1]);
        if (plVar4 != (long *)0x0) {
          do {
            lVar10 = *plVar4;
            uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
            if (uVar11 != 0) {
              piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
              do {
                if (*(long *)(piVar12 + -2) == *unaff_x22) {
                  puVar5 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
                  goto LAB_055d3510;
                }
                uVar11 = uVar11 - 1;
                piVar12 = piVar12 + 4;
              } while (uVar11 != 0);
            }
            puVar5 = (undefined8 *)FUN_02f421d0(plVar4,*unaff_x22,0);
LAB_055d3510:
            uVar11 = (*(code *)*puVar5)(plVar4,puVar5[1]);
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
                  puVar5 = (undefined8 *)(lVar10 + (long)(*piVar12 + 1) * 0x10 + 0x138);
                  goto LAB_055d3578;
                }
                uVar11 = uVar11 - 1;
                piVar12 = piVar12 + 4;
              } while (uVar11 != 0);
            }
            puVar5 = (undefined8 *)FUN_02f421d0(plVar4,*unaff_x22,1);
LAB_055d3578:
            plVar6 = (long *)(*(code *)*puVar5)(plVar4,puVar5[1]);
            if ((plVar6 != (long *)0x0) && (*plVar6 != *(long *)(unaff_x29 + 0x90))) {
              if (*(long *)(in_stack_00000010 + 0x28) == in_stack_000000c8) {
                    /* WARNING: Subroutine does not return */
                FUN_02f08d48(plVar6);
              }
              goto LAB_055d4150;
            }
            uVar11 = thunk_FUN_04f6d944(unaff_x25,plVar6,0);
            if ((uVar11 & 1) == 0) {
              plVar7 = *(long **)(unaff_x21 + 0x28);
              if (plVar7 == (long *)0x0) {
                if (*(long *)(in_stack_00000010 + 0x28) == in_stack_000000c8) {
                    /* WARNING: Subroutine does not return */
                  FUN_02f089c8();
                }
                goto LAB_055d4150;
              }
              plVar7 = (long *)(**(code **)(*plVar7 + 0x308))
                                         (plVar7,plVar6,*(undefined8 *)(*plVar7 + 0x310));
              if (plVar7 != (long *)0x0) {
                if (*plVar7 != *(long *)(unaff_x29 + 0x90)) {
                  if (*(long *)(in_stack_00000010 + 0x28) == in_stack_000000c8) {
                    /* WARNING: Subroutine does not return */
                    FUN_02f08d48(plVar7);
                  }
                  goto LAB_055d4150;
                }
                uVar8 = FUN_04f65260(*(undefined8 *)
                                      System_Nullable<OpenXRAnalytics_InitializeEvent>_TypeInfo,
                                     plVar7,0);
                if (plVar3 == (long *)0x0) {
                  if (*(long *)(in_stack_00000010 + 0x28) == in_stack_000000c8) {
                    /* WARNING: Subroutine does not return */
                    FUN_02f089c8(uVar8,uVar8);
                  }
                  goto LAB_055d4150;
                }
                (**(code **)(*plVar3 + 0x518))(plVar3,uVar8,plVar6,*(undefined8 *)(*plVar3 + 0x520))
                ;
                plVar9 = *(long **)(unaff_x21 + 0x48);
                if (plVar9 == (long *)0x0) {
                  if (*(long *)(in_stack_00000010 + 0x28) == in_stack_000000c8) {
                    /* WARNING: Subroutine does not return */
                    FUN_02f089c8();
                  }
                  goto LAB_055d4150;
                }
                plVar9 = (long *)(**(code **)(*plVar9 + 0x5f8))
                                           (plVar9,*(undefined8 *)
                                                                                                        
                                                  Method_UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_Receiver_BaseAffordanceStateReceiver<float2>_Awake__
                                            ,*(undefined8 *)
                                              Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariableBase<NearFarInteractor_Region>_SetValueWithoutNotify__
                                            ,*(undefined8 *)PTR_DAT_067cd6c0,
                                            *(undefined8 *)(*plVar9 + 0x600));
                if (plVar9 == (long *)0x0) {
                  if (*(long *)(in_stack_00000010 + 0x28) == in_stack_000000c8) {
                    /* WARNING: Subroutine does not return */
                    FUN_02f089c8();
                  }
                  goto LAB_055d4150;
                }
                (**(code **)(*plVar9 + 0x518))
                          (plVar9,*(undefined8 *)
                                   Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariableBase<NearFarInteractor_Region>_set_Value__
                           ,plVar6,*(undefined8 *)(*plVar9 + 0x520));
                uVar1 = in_stack_00000018._4_4_;
                if (*(int *)(unaff_x21 + 0x5c) == 3) {
                  uVar1 = 1;
                }
                if ((uVar1 & 1) == 0) {
                  if (*(long *)(unaff_x21 + 0x30) == 0) {
                    if (unaff_x23 == 0) {
                      if (*(long *)(in_stack_00000010 + 0x28) == in_stack_000000c8) {
                    /* WARNING: Subroutine does not return */
                        FUN_02f089c8();
                      }
                      goto LAB_055d4150;
                    }
                    uVar8 = FUN_05546520();
                  }
                  else {
                    uVar8 = *(undefined8 *)(*(long *)(unaff_x21 + 0x30) + 0x50);
                  }
                  uVar11 = thunk_FUN_04f6d944(plVar6,uVar8,0);
                  if ((uVar11 & 1) == 0) {
                    uVar8 = FUN_04f6fc18(*(undefined8 *)(unaff_x21 + 0x68),
                                         *(undefined8 *)PTR_DAT_067d0878,plVar7,
                                         *(undefined8 *)
                                          Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariableBase<float3>_Subscribe__
                                         ,0);
                    (**(code **)(*plVar9 + 0x518))
                              (plVar9,*(undefined8 *)
                                       Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariableBase<XRInputModalityManager_InputMode>_set_Value__
                               ,uVar8,*(undefined8 *)(*plVar9 + 0x520));
                  }
                  else {
                    uVar8 = FUN_04f65260(*(undefined8 *)(unaff_x21 + 0x68),
                                         *(undefined8 *)(unaff_x21 + 0x70),0);
                    (**(code **)(*plVar9 + 0x518))
                              (plVar9,*(undefined8 *)
                                       Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariableBase<XRInputModalityManager_InputMode>_set_Value__
                               ,uVar8,*(undefined8 *)(*plVar9 + 0x520));
                  }
                }
                (**(code **)(*plVar3 + 0x2c8))(plVar3,plVar9,*(undefined8 *)(*plVar3 + 0x2d0));
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
LAB_055d378c:
  plVar4 = (long *)thunk_FUN_02f45174(plVar4,*unaff_x20);
  in_stack_00000098 = plVar4;
  if (plVar4 != (long *)0x0) {
    lVar10 = *plVar4;
    uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *unaff_x20) {
          puVar5 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
          goto FUN_055d3800;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar5 = (undefined8 *)FUN_02f421d0(plVar4,*unaff_x20,0);
FUN_055d3800:
    (*(code *)*puVar5)(plVar4,puVar5[1]);
  }
  plVar4 = *(long **)(unaff_x21 + 0x48);
  uVar1 = 0;
  if (*(int *)(unaff_x21 + 0x5c) != 3) {
    uVar1 = in_stack_00000018._4_4_;
  }
  if ((uVar1 & 1) == 0) {
    if (plVar4 == (long *)0x0) {
      if (*(long *)(in_stack_00000010 + 0x28) == in_stack_000000c8) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      goto LAB_055d4150;
    }
    (**(code **)(*plVar4 + 0x638))(plVar4,in_stack_00000088,*(undefined8 *)(*plVar4 + 0x640));
  }
  else {
    if (plVar4 == (long *)0x0) {
      if (*(long *)(in_stack_00000010 + 0x28) == in_stack_000000c8) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      goto LAB_055d4150;
    }
    (**(code **)(*plVar4 + 0x3f8))(plVar4,in_stack_00000088,*(undefined8 *)(*plVar4 + 0x400));
  }
  plVar4 = *(long **)(unaff_x21 + 0x48);
  if (plVar4 == (long *)0x0) {
    if (*(long *)(in_stack_00000010 + 0x28) == in_stack_000000c8) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    goto LAB_055d4150;
  }
  (**(code **)(*plVar4 + 0x2b8))(plVar4,plVar3,*(undefined8 *)(*plVar4 + 0x2c0));
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
  do {
    plVar3 = in_stack_000000a0;
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
          puVar5 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_055d3160;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar5 = (undefined8 *)FUN_02f421d0(in_stack_000000a0,*unaff_x22,0);
LAB_055d3160:
    uVar11 = (*(code *)*puVar5)(plVar3,puVar5[1]);
    plVar3 = in_stack_000000a0;
    if ((uVar11 & 1) == 0) {
      plVar3 = (long *)thunk_FUN_02f45174(*in_stack_00000070,*unaff_x20);
      *in_stack_00000078 = (long)plVar3;
      if (plVar3 == (long *)0x0) goto LAB_055d3ca0;
      lVar10 = *plVar3;
      uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar11 == 0) goto LAB_055d3c78;
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      goto LAB_055d3c60;
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
          puVar5 = (undefined8 *)(lVar10 + (long)(*piVar12 + 1) * 0x10 + 0x138);
          goto LAB_055d31c8;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar5 = (undefined8 *)FUN_02f421d0(in_stack_000000a0,*unaff_x22,1);
LAB_055d31c8:
    unaff_x25 = (long *)(*(code *)*puVar5)(plVar3,puVar5[1]);
    if ((unaff_x25 != (long *)0x0) && (*unaff_x25 != *(long *)(unaff_x29 + 0x90))) {
      if (*(long *)(in_stack_00000010 + 0x28) == in_stack_000000c8) {
                    /* WARNING: Subroutine does not return */
        FUN_02f08d48(unaff_x25);
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
      uVar8 = FUN_05546520();
    }
    else {
      uVar8 = *(undefined8 *)(*(long *)(unaff_x21 + 0x30) + 0x50);
    }
    uVar11 = thunk_FUN_04f6d944(unaff_x25,uVar8,0);
  } while (((uVar11 & 1) != 0) || (uVar11 = FUN_04f6ebb4(unaff_x25,0), (uVar11 & 1) != 0));
  in_stack_00000088 = (long *)0x0;
  if (in_stack_000000a8._4_1_ == '\0') {
    in_stack_00000088 = in_stack_00000008;
    in_stack_00000058 = (char *)((long)&stack0x000000a8 + 4);
    in_stack_00000050 = 0;
    in_stack_00000060 = (long *)&stack0x00000088;
    goto LAB_055d33b4;
  }
  lVar10 = FUN_02f0880c(*(undefined8 *)PTR_DAT_067c9070,5);
  if (lVar10 == 0) {
    if (*(long *)(in_stack_00000010 + 0x28) == in_stack_000000c8) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    goto LAB_055d4150;
  }
  uVar1 = *(uint *)(lVar10 + 0x18);
  if (uVar1 == 0) {
    if (*(long *)(in_stack_00000010 + 0x28) == in_stack_000000c8) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089d0();
    }
    goto LAB_055d4150;
  }
  *(undefined8 *)(lVar10 + 0x20) = *(undefined8 *)(unaff_x21 + 0x60);
  if (uVar1 == 1) {
    if (*(long *)(in_stack_00000010 + 0x28) == in_stack_000000c8) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089d0();
    }
    goto LAB_055d4150;
  }
  *(undefined8 *)(lVar10 + 0x28) = *(undefined8 *)(unaff_x21 + 0x68);
  if (uVar1 < 3) {
    if (*(long *)(in_stack_00000010 + 0x28) == in_stack_000000c8) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089d0();
    }
    goto LAB_055d4150;
  }
  *(undefined8 *)(lVar10 + 0x30) = *(undefined8 *)PTR_DAT_067d0878;
  plVar3 = *(long **)(unaff_x21 + 0x28);
  if (plVar3 == (long *)0x0) {
    if (*(long *)(in_stack_00000010 + 0x28) == in_stack_000000c8) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    goto LAB_055d4150;
  }
  plVar3 = (long *)(**(code **)(*plVar3 + 0x308))(plVar3,unaff_x25,*(undefined8 *)(*plVar3 + 0x310))
  ;
  uVar8 = 0;
  if (plVar3 != (long *)0x0) {
    uVar8 = (**(code **)(*plVar3 + 0x168))(plVar3,*(undefined8 *)(*plVar3 + 0x170));
  }
  if ((*(ulong *)(lVar10 + 0x18) & 0xfffffffc) == 0) {
    if (*(long *)(in_stack_00000010 + 0x28) == in_stack_000000c8) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089d0();
    }
    goto LAB_055d4150;
  }
  *(undefined8 *)(lVar10 + 0x38) = uVar8;
  if ((uint)*(ulong *)(lVar10 + 0x18) < 5) {
    if (*(long *)(in_stack_00000010 + 0x28) == in_stack_000000c8) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089d0();
    }
    goto LAB_055d4150;
  }
  *(undefined8 *)(lVar10 + 0x40) =
       *(undefined8 *)
        Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariableBase<float3>_Subscribe__;
  uVar8 = FUN_04f6fd20(lVar10,0);
  plVar3 = (long *)thunk_FUN_02f45270(*(undefined8 *)
                                       System_Console_WindowsConsole_WindowsCancelHandler_TypeInfo);
  FUN_057d753c(plVar3,uVar8,0,0);
  in_stack_00000058 = (char *)((long)&stack0x000000a8 + 4);
  in_stack_00000050 = 0;
  in_stack_00000060 = (long *)&stack0x00000088;
  in_stack_00000088 = plVar3;
  if (in_stack_000000a8._4_1_ != '\0') goto code_r0x055d3334;
  goto LAB_055d33b4;
code_r0x055d3334:
  if (plVar3 == (long *)0x0) goto LAB_055d3aa0;
  bVar2 = *(byte *)(*(long *)System_Console_WindowsConsole_WindowsCancelHandler_TypeInfo + 0x130);
  if (((bVar2 <= *(byte *)(*plVar3 + 0x130)) &&
      (*(long *)(*(long *)(*plVar3 + 200) + (ulong)bVar2 * 8 + -8) ==
       *(long *)System_Console_WindowsConsole_WindowsCancelHandler_TypeInfo)) &&
     (FUN_057d7648(plVar3,1,0), in_stack_00000088 == (long *)0x0)) goto LAB_055d3aa0;
  in_x9 = *(code **)(*in_stack_00000088 + 0x198);
  param_3 = *(undefined8 *)(*in_stack_00000088 + 0x1a0);
  param_2 = 1;
  param_1 = in_stack_00000088;
  goto code_r0x055d3394;
LAB_055d3aa0:
  if (*(long *)(in_stack_00000010 + 0x28) == in_stack_000000c8) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  goto LAB_055d4150;
  while( true ) {
    uVar11 = uVar11 - 1;
    piVar12 = piVar12 + 4;
    if (uVar11 == 0) break;
LAB_055d3c60:
    if (*(long *)(piVar12 + -2) == *unaff_x20) {
      puVar5 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
      goto LAB_055d3c94;
    }
  }
LAB_055d3c78:
  puVar5 = (undefined8 *)FUN_02f421d0(plVar3,*unaff_x20,0);
LAB_055d3c94:
  (*(code *)*puVar5)(plVar3,puVar5[1]);
LAB_055d3ca0:
  if (in_stack_00000068 == 0) {
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
    if (*(long *)(in_stack_00000010 + 0x28) == in_stack_000000c8) {
      return;
    }
  }
  else if (*(long *)(in_stack_00000010 + 0x28) == in_stack_000000c8) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c0();
  }
LAB_055d4150:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


