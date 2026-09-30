/*
FUNCTION_NAME: System.Xml.XmlTextWriterBase64Encoder$$WriteChars
ENTRY_POINT: 055d34a4
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 84
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ray_interaction;ui_interaction;data_collection;telemetry
EVIDENCE: weak_xr_or_state_hits_3;validity_or_gating_hits_17;ray_or_cast_sink_hits_4;ui_or_gameplay_sink_hits_3;strong_file_logging_hits_2;telemetry_or_network_hits_1;negative_framework_namespace_without_eye_use_flow
*/


/* WARNING: Removing unreachable block (ram,0x055d3818) */
/* WARNING: Removing unreachable block (ram,0x055d3a64) */
/* WARNING: Removing unreachable block (ram,0x055d3a78) */
/* WARNING: Removing unreachable block (ram,0x055d38dc) */
/* WARNING: Removing unreachable block (ram,0x055d3cb0) */
/* WARNING: Removing unreachable block (ram,0x055d3cb4) */
/* WARNING: Removing unreachable block (ram,0x055d2ba0) */

void System_Xml_XmlTextWriterBase64Encoder__WriteChars
               (code *param_1,long *param_2,undefined8 param_3)

{
  uint uVar1;
  byte bVar2;
  long *plVar3;
  undefined8 *puVar4;
  long *plVar5;
  long *plVar6;
  undefined8 uVar7;
  long *plVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  long *unaff_x20;
  long unaff_x21;
  long *unaff_x22;
  long unaff_x23;
  long *unaff_x24;
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
  
code_r0x055d34a4:
  plVar3 = (long *)(*param_1)(param_2,param_3);
  if (plVar3 != (long *)0x0) {
    do {
      lVar9 = *plVar3;
      uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *unaff_x22) {
            puVar4 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_055d3510;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar4 = (undefined8 *)FUN_02f421d0(plVar3,*unaff_x22,0);
LAB_055d3510:
      uVar10 = (*(code *)*puVar4)(plVar3,puVar4[1]);
      if ((uVar10 & 1) == 0) goto LAB_055d378c;
      if (plVar3 == (long *)0x0) {
        if (*(long *)(in_stack_00000010 + 0x28) == in_stack_000000c8) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        goto LAB_055d4150;
      }
      lVar9 = *plVar3;
      uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *unaff_x22) {
            puVar4 = (undefined8 *)(lVar9 + (long)(*piVar11 + 1) * 0x10 + 0x138);
            goto LAB_055d3578;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar4 = (undefined8 *)FUN_02f421d0(plVar3,*unaff_x22,1);
LAB_055d3578:
      plVar5 = (long *)(*(code *)*puVar4)(plVar3,puVar4[1]);
      if ((plVar5 != (long *)0x0) && (*plVar5 != *(long *)(unaff_x29 + 0x90))) {
        if (*(long *)(in_stack_00000010 + 0x28) == in_stack_000000c8) {
                    /* WARNING: Subroutine does not return */
          FUN_02f08d48(plVar5);
        }
        goto LAB_055d4150;
      }
      uVar10 = thunk_FUN_04f6d944(unaff_x25,plVar5,0);
      if ((uVar10 & 1) == 0) {
        plVar6 = *(long **)(unaff_x21 + 0x28);
        if (plVar6 == (long *)0x0) {
          if (*(long *)(in_stack_00000010 + 0x28) == in_stack_000000c8) {
                    /* WARNING: Subroutine does not return */
            FUN_02f089c8();
          }
          goto LAB_055d4150;
        }
        plVar6 = (long *)(**(code **)(*plVar6 + 0x308))
                                   (plVar6,plVar5,*(undefined8 *)(*plVar6 + 0x310));
        if (plVar6 != (long *)0x0) {
          if (*plVar6 != *(long *)(unaff_x29 + 0x90)) {
            if (*(long *)(in_stack_00000010 + 0x28) == in_stack_000000c8) {
                    /* WARNING: Subroutine does not return */
              FUN_02f08d48(plVar6);
            }
            goto LAB_055d4150;
          }
          uVar7 = FUN_04f65260(*(undefined8 *)
                                System_Nullable<OpenXRAnalytics_InitializeEvent>_TypeInfo,plVar6,0);
          if (unaff_x24 == (long *)0x0) {
            if (*(long *)(in_stack_00000010 + 0x28) == in_stack_000000c8) {
                    /* WARNING: Subroutine does not return */
              FUN_02f089c8(uVar7,uVar7);
            }
            goto LAB_055d4150;
          }
          (**(code **)(*unaff_x24 + 0x518))
                    (unaff_x24,uVar7,plVar5,*(undefined8 *)(*unaff_x24 + 0x520));
          plVar8 = *(long **)(unaff_x21 + 0x48);
          if (plVar8 == (long *)0x0) {
            if (*(long *)(in_stack_00000010 + 0x28) == in_stack_000000c8) {
                    /* WARNING: Subroutine does not return */
              FUN_02f089c8();
            }
            goto LAB_055d4150;
          }
          plVar8 = (long *)(**(code **)(*plVar8 + 0x5f8))
                                     (plVar8,*(undefined8 *)
                                              Method_UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_Receiver_BaseAffordanceStateReceiver<float2>_Awake__
                                      ,*(undefined8 *)
                                        Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariableBase<NearFarInteractor_Region>_SetValueWithoutNotify__
                                      ,*(undefined8 *)PTR_DAT_067cd6c0,
                                      *(undefined8 *)(*plVar8 + 0x600));
          if (plVar8 == (long *)0x0) {
            if (*(long *)(in_stack_00000010 + 0x28) == in_stack_000000c8) {
                    /* WARNING: Subroutine does not return */
              FUN_02f089c8();
            }
            goto LAB_055d4150;
          }
          (**(code **)(*plVar8 + 0x518))
                    (plVar8,*(undefined8 *)
                             Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariableBase<NearFarInteractor_Region>_set_Value__
                     ,plVar5,*(undefined8 *)(*plVar8 + 0x520));
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
              uVar7 = FUN_05546520();
            }
            else {
              uVar7 = *(undefined8 *)(*(long *)(unaff_x21 + 0x30) + 0x50);
            }
            uVar10 = thunk_FUN_04f6d944(plVar5,uVar7,0);
            if ((uVar10 & 1) == 0) {
              uVar7 = FUN_04f6fc18(*(undefined8 *)(unaff_x21 + 0x68),*(undefined8 *)PTR_DAT_067d0878
                                   ,plVar6,*(undefined8 *)
                                            Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariableBase<float3>_Subscribe__
                                   ,0);
              (**(code **)(*plVar8 + 0x518))
                        (plVar8,*(undefined8 *)
                                 Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariableBase<XRInputModalityManager_InputMode>_set_Value__
                         ,uVar7,*(undefined8 *)(*plVar8 + 0x520));
            }
            else {
              uVar7 = FUN_04f65260(*(undefined8 *)(unaff_x21 + 0x68),
                                   *(undefined8 *)(unaff_x21 + 0x70),0);
              (**(code **)(*plVar8 + 0x518))
                        (plVar8,*(undefined8 *)
                                 Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariableBase<XRInputModalityManager_InputMode>_set_Value__
                         ,uVar7,*(undefined8 *)(*plVar8 + 0x520));
            }
          }
          (**(code **)(*unaff_x24 + 0x2c8))(unaff_x24,plVar8,*(undefined8 *)(*unaff_x24 + 0x2d0));
        }
      }
      if (plVar3 == (long *)0x0) break;
    } while( true );
  }
  if (*(long *)(in_stack_00000010 + 0x28) == in_stack_000000c8) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  goto LAB_055d4150;
LAB_055d378c:
  plVar3 = (long *)thunk_FUN_02f45174(plVar3,*unaff_x20);
  in_stack_00000098 = plVar3;
  if (plVar3 != (long *)0x0) {
    lVar9 = *plVar3;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *unaff_x20) {
          puVar4 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
          goto FUN_055d3800;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar4 = (undefined8 *)FUN_02f421d0(plVar3,*unaff_x20,0);
FUN_055d3800:
    (*(code *)*puVar4)(plVar3,puVar4[1]);
  }
  plVar3 = *(long **)(unaff_x21 + 0x48);
  uVar1 = 0;
  if (*(int *)(unaff_x21 + 0x5c) != 3) {
    uVar1 = in_stack_00000018._4_4_;
  }
  if ((uVar1 & 1) == 0) {
    if (plVar3 == (long *)0x0) {
      if (*(long *)(in_stack_00000010 + 0x28) == in_stack_000000c8) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      goto LAB_055d4150;
    }
    (**(code **)(*plVar3 + 0x638))(plVar3,in_stack_00000088,*(undefined8 *)(*plVar3 + 0x640));
  }
  else {
    if (plVar3 == (long *)0x0) {
      if (*(long *)(in_stack_00000010 + 0x28) == in_stack_000000c8) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      goto LAB_055d4150;
    }
    (**(code **)(*plVar3 + 0x3f8))(plVar3,in_stack_00000088,*(undefined8 *)(*plVar3 + 0x400));
  }
  plVar3 = *(long **)(unaff_x21 + 0x48);
  if (plVar3 == (long *)0x0) {
    if (*(long *)(in_stack_00000010 + 0x28) == in_stack_000000c8) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    goto LAB_055d4150;
  }
  (**(code **)(*plVar3 + 0x2b8))(plVar3,unaff_x24,*(undefined8 *)(*plVar3 + 0x2c0));
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
    lVar9 = *in_stack_000000a0;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *unaff_x22) {
          puVar4 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_055d3160;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar4 = (undefined8 *)FUN_02f421d0(in_stack_000000a0,*unaff_x22,0);
LAB_055d3160:
    uVar10 = (*(code *)*puVar4)(plVar3,puVar4[1]);
    plVar3 = in_stack_000000a0;
    if ((uVar10 & 1) == 0) {
      plVar3 = (long *)thunk_FUN_02f45174(*in_stack_00000070,*unaff_x20);
      *in_stack_00000078 = (long)plVar3;
      if (plVar3 == (long *)0x0) goto LAB_055d3ca0;
      lVar9 = *plVar3;
      uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar10 == 0) goto LAB_055d3c78;
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      goto LAB_055d3c60;
    }
    if (in_stack_000000a0 == (long *)0x0) {
      if (*(long *)(in_stack_00000010 + 0x28) == in_stack_000000c8) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      goto LAB_055d4150;
    }
    lVar9 = *in_stack_000000a0;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *unaff_x22) {
          puVar4 = (undefined8 *)(lVar9 + (long)(*piVar11 + 1) * 0x10 + 0x138);
          goto LAB_055d31c8;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar4 = (undefined8 *)FUN_02f421d0(in_stack_000000a0,*unaff_x22,1);
LAB_055d31c8:
    unaff_x25 = (long *)(*(code *)*puVar4)(plVar3,puVar4[1]);
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
      uVar7 = FUN_05546520();
    }
    else {
      uVar7 = *(undefined8 *)(*(long *)(unaff_x21 + 0x30) + 0x50);
    }
    uVar10 = thunk_FUN_04f6d944(unaff_x25,uVar7,0);
  } while (((uVar10 & 1) != 0) || (uVar10 = FUN_04f6ebb4(unaff_x25,0), (uVar10 & 1) != 0));
  in_stack_00000088 = (long *)0x0;
  if (in_stack_000000a8._4_1_ == '\0') {
    in_stack_00000088 = in_stack_00000008;
  }
  else {
    lVar9 = FUN_02f0880c(*(undefined8 *)PTR_DAT_067c9070,5);
    if (lVar9 == 0) {
      if (*(long *)(in_stack_00000010 + 0x28) == in_stack_000000c8) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      goto LAB_055d4150;
    }
    uVar1 = *(uint *)(lVar9 + 0x18);
    if (uVar1 == 0) {
      if (*(long *)(in_stack_00000010 + 0x28) == in_stack_000000c8) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089d0();
      }
      goto LAB_055d4150;
    }
    *(undefined8 *)(lVar9 + 0x20) = *(undefined8 *)(unaff_x21 + 0x60);
    if (uVar1 == 1) {
      if (*(long *)(in_stack_00000010 + 0x28) == in_stack_000000c8) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089d0();
      }
      goto LAB_055d4150;
    }
    *(undefined8 *)(lVar9 + 0x28) = *(undefined8 *)(unaff_x21 + 0x68);
    if (uVar1 < 3) {
      if (*(long *)(in_stack_00000010 + 0x28) == in_stack_000000c8) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089d0();
      }
      goto LAB_055d4150;
    }
    *(undefined8 *)(lVar9 + 0x30) = *(undefined8 *)PTR_DAT_067d0878;
    plVar3 = *(long **)(unaff_x21 + 0x28);
    if (plVar3 == (long *)0x0) {
      if (*(long *)(in_stack_00000010 + 0x28) == in_stack_000000c8) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      goto LAB_055d4150;
    }
    plVar3 = (long *)(**(code **)(*plVar3 + 0x308))
                               (plVar3,unaff_x25,*(undefined8 *)(*plVar3 + 0x310));
    uVar7 = 0;
    if (plVar3 != (long *)0x0) {
      uVar7 = (**(code **)(*plVar3 + 0x168))(plVar3,*(undefined8 *)(*plVar3 + 0x170));
    }
    if ((*(ulong *)(lVar9 + 0x18) & 0xfffffffc) == 0) {
      if (*(long *)(in_stack_00000010 + 0x28) == in_stack_000000c8) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089d0();
      }
      goto LAB_055d4150;
    }
    *(undefined8 *)(lVar9 + 0x38) = uVar7;
    if ((uint)*(ulong *)(lVar9 + 0x18) < 5) {
      if (*(long *)(in_stack_00000010 + 0x28) == in_stack_000000c8) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089d0();
      }
      goto LAB_055d4150;
    }
    *(undefined8 *)(lVar9 + 0x40) =
         *(undefined8 *)
          Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariableBase<float3>_Subscribe__;
    uVar7 = FUN_04f6fd20(lVar9,0);
    plVar3 = (long *)thunk_FUN_02f45270(*(undefined8 *)
                                         System_Console_WindowsConsole_WindowsCancelHandler_TypeInfo
                                       );
    FUN_057d753c(plVar3,uVar7,0,0);
    in_stack_00000088 = plVar3;
    if (in_stack_000000a8._4_1_ != '\0') {
      if (plVar3 != (long *)0x0) {
        bVar2 = *(byte *)(*(long *)System_Console_WindowsConsole_WindowsCancelHandler_TypeInfo +
                         0x130);
        if (((*(byte *)(*plVar3 + 0x130) < bVar2) ||
            (*(long *)(*(long *)(*plVar3 + 200) + (ulong)bVar2 * 8 + -8) !=
             *(long *)System_Console_WindowsConsole_WindowsCancelHandler_TypeInfo)) ||
           (FUN_057d7648(plVar3,1,0), in_stack_00000088 != (long *)0x0)) {
          (**(code **)(*in_stack_00000088 + 0x198))
                    (in_stack_00000088,1,*(undefined8 *)(*in_stack_00000088 + 0x1a0));
          goto LAB_055d33b4;
        }
      }
      if (*(long *)(in_stack_00000010 + 0x28) == in_stack_000000c8) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      goto LAB_055d4150;
    }
  }
LAB_055d33b4:
  in_stack_00000060 = (long *)&stack0x00000088;
  in_stack_00000058 = (char *)((long)&stack0x000000a8 + 4);
  in_stack_00000050 = 0;
  plVar3 = *(long **)(unaff_x21 + 0x18);
  if (plVar3 == (long *)0x0) {
    if (*(long *)(in_stack_00000010 + 0x28) == in_stack_000000c8) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    goto LAB_055d4150;
  }
  unaff_x24 = (long *)(**(code **)(*plVar3 + 0x308))
                                (plVar3,unaff_x25,*(undefined8 *)(*plVar3 + 0x310));
  if (unaff_x24 != (long *)0x0) {
    bVar2 = *(byte *)(*(long *)
                       System_Collections_Generic_List<TrackedDeviceGraphicRaycaster_RaycastHitData>_TypeInfo
                     + 0x130);
    if ((*(byte *)(*unaff_x24 + 0x130) < bVar2) ||
       (*(long *)(*(long *)(*unaff_x24 + 200) + (ulong)bVar2 * 8 + -8) !=
        *(long *)
         System_Collections_Generic_List<TrackedDeviceGraphicRaycaster_RaycastHitData>_TypeInfo)) {
      if (*(long *)(in_stack_00000010 + 0x28) == in_stack_000000c8) {
                    /* WARNING: Subroutine does not return */
        FUN_02f08d48(unaff_x24);
      }
      goto LAB_055d4150;
    }
  }
  plVar3 = *(long **)(unaff_x21 + 0x48);
  if (plVar3 == (long *)0x0) {
    if (*(long *)(in_stack_00000010 + 0x28) == in_stack_000000c8) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    goto LAB_055d4150;
  }
  (**(code **)(*plVar3 + 0x2d8))(plVar3,unaff_x24,*(undefined8 *)(*plVar3 + 0x2e0));
  plVar3 = *(long **)(unaff_x21 + 0x18);
  if (plVar3 == (long *)0x0) {
    if (*(long *)(in_stack_00000010 + 0x28) == in_stack_000000c8) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    goto LAB_055d4150;
  }
  param_2 = (long *)(**(code **)(*plVar3 + 0x388))(plVar3,*(undefined8 *)(*plVar3 + 0x390));
  if (param_2 == (long *)0x0) {
    if (*(long *)(in_stack_00000010 + 0x28) == in_stack_000000c8) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    goto LAB_055d4150;
  }
  lVar9 = *param_2;
  uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
  if (uVar10 != 0) {
    piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
    do {
      if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_067cb558) {
        puVar4 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
        goto LAB_055d349c;
      }
      uVar10 = uVar10 - 1;
      piVar11 = piVar11 + 4;
    } while (uVar10 != 0);
  }
  puVar4 = (undefined8 *)FUN_02f421d0(param_2,*(long *)PTR_DAT_067cb558,0);
LAB_055d349c:
  param_1 = (code *)*puVar4;
  param_3 = puVar4[1];
  goto code_r0x055d34a4;
  while( true ) {
    uVar10 = uVar10 - 1;
    piVar11 = piVar11 + 4;
    if (uVar10 == 0) break;
LAB_055d3c60:
    if (*(long *)(piVar11 + -2) == *unaff_x20) {
      puVar4 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
      goto LAB_055d3c94;
    }
  }
LAB_055d3c78:
  puVar4 = (undefined8 *)FUN_02f421d0(plVar3,*unaff_x20,0);
LAB_055d3c94:
  (*(code *)*puVar4)(plVar3,puVar4[1]);
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


