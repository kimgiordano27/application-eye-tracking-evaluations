/*
FUNCTION_NAME: Oculus.Interaction.RoundedBoxProperties$$get_BorderInnerRadius
ENTRY_POINT: 03555498
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_11;validity_or_gating_hits_21;telemetry_or_network_hits_21
*/


void Oculus_Interaction_RoundedBoxProperties__get_BorderInnerRadius(long param_1)

{
  uint uVar1;
  long lVar2;
  ushort uVar3;
  undefined *puVar4;
  short sVar5;
  short sVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  ulong uVar10;
  long lVar11;
  undefined8 uVar12;
  int in_w9;
  long in_x10;
  long lVar13;
  long in_x12;
  long *plVar14;
  undefined8 uVar15;
  undefined8 unaff_x20;
  uint unaff_w22;
  long unaff_x23;
  undefined8 unaff_x24;
  long unaff_x25;
  long *unaff_x26;
  long unaff_x27;
  uint unaff_w28;
  double dVar16;
  long in_stack_00000000;
  undefined8 in_stack_00000008;
  ulong in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined2 uStack0000000000000028;
  int iStack000000000000002c;
  int iStack0000000000000030;
  int iStack0000000000000034;
  
  do {
    lVar11 = in_x10 - (param_1 >> 0x3f);
    iVar7 = in_w9 + -1;
    if ((in_w9 < 2) ||
       (lVar13 = SUB168(SEXT816(lVar11) * SEXT816(unaff_x27),8), in_w9 = iVar7,
       lVar11 != ((lVar13 >> 2) - (lVar13 >> 0x3f)) * in_x12)) {
LAB_03555934:
      puVar4 = Method_Unity_VisualScripting_AdditionHandler_<>c_<_ctor>b__0_36__;
      if (iVar7 < 1) {
        if (unaff_x25 != 0) {
          iVar7 = FUN_0341792c();
          plVar14 = (long *)Method_Unity_VisualScripting_AdditionHandler_<>c_<_ctor>b__0_36__;
          if (iVar7 < 1) goto LAB_03555aa0;
          FUN_0341792c();
          sVar6 = FUN_034181cc();
          if (sVar6 != 0x2e) goto LAB_03555aa0;
          FUN_0341792c();
          FUN_03418d9c();
          goto LAB_03555aa0;
        }
      }
      else {
        iStack000000000000002c = (int)lVar11;
        lVar11 = *(long *)Method_Unity_VisualScripting_AdditionHandler_<>c_<_ctor>b__0_36__;
        if (*(int *)(lVar11 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
          lVar11 = *(long *)puVar4;
        }
        lVar11 = *(long *)(*(long *)(lVar11 + 0xb8) + 0x28);
        if (lVar11 != 0) {
          if (*(uint *)(lVar11 + 0x18) <= iVar7 - 1U) {
LAB_03555afc:
                    /* WARNING: Subroutine does not return */
            FUN_01f08a44();
          }
          lVar11 = lVar11 + (ulong)(iVar7 - 1U) * 8;
          lVar13 = *(long *)Method_System_Nullable<AxisAlignedBox_BoxSurface>__ctor__;
          do {
            uVar15 = *(undefined8 *)(lVar11 + 0x20);
            if (*(int *)(lVar13 + 0xe0) == 0) {
              thunk_FUN_01ee6d7c();
            }
            uVar12 = FUN_03532f80(0);
            FUN_035685ac((long)&stack0x00000028 + 4,uVar15,uVar12,0);
            if (unaff_x25 == 0) break;
            FUN_03418748();
            plVar14 = (long *)Method_Unity_VisualScripting_AdditionHandler_<>c_<_ctor>b__0_36__;
LAB_03555aa0:
            unaff_w28 = iStack0000000000000034 + unaff_w28;
            if ((int)unaff_w22 <= (int)unaff_w28) {
              return;
            }
            if (unaff_w22 <= unaff_w28) goto LAB_03555afc;
            uVar3 = *(ushort *)(unaff_x23 + (long)(int)unaff_w28 * 2);
            if (0x4b < uVar3) {
              if (0x6d < uVar3) {
                if (0x74 < uVar3) {
                  if (uVar3 != 0x79) {
                    if (uVar3 != 0x7a) goto switchD_03554e74_caseD_65;
                    if (*(int *)(*plVar14 + 0xe0) == 0) {
                      thunk_FUN_01ee6d7c();
                    }
                    iStack0000000000000034 = FUN_03554504();
                    FUN_03555b5c(unaff_x20,unaff_x24);
                    goto LAB_03555aa0;
                  }
                  if (unaff_x26 == (long *)0x0) break;
                  iStack0000000000000030 = (**(code **)(*unaff_x26 + 0x268))();
                  if (*(int *)(*plVar14 + 0xe0) == 0) {
                    thunk_FUN_01ee6d7c(*plVar14);
                  }
                  iStack0000000000000034 = FUN_03554504();
                  if (((((in_stack_00000010 & 1) == 0) &&
                       (*(char *)(*(long *)(*(long *)
                                             Method_Unity_VisualScripting_AdditionHandler_<>c_<_ctor>b__0_107__
                                           + 0xb8) + 1) == '\0')) && (iStack0000000000000030 == 1))
                     && (uVar1 = iStack0000000000000034 + unaff_w28,
                        (int)uVar1 < in_stack_00000008._4_4_)) {
                    if (unaff_w22 <= uVar1) goto LAB_03555afc;
                    if (*(short *)(unaff_x23 + (long)(int)uVar1 * 2) == 0x27) {
                      if (unaff_w22 <= uVar1 + 1) goto LAB_03555afc;
                      if (*(long *)Method_Unity_VisualScripting_AdditionHandler_<>c_<_ctor>b__0_22__
                          == 0) break;
                      sVar6 = *(short *)(unaff_x23 + (long)(int)(uVar1 + 1) * 2);
                      sVar5 = FUN_03409f80(*(long *)
                                            Method_Unity_VisualScripting_AdditionHandler_<>c_<_ctor>b__0_22__
                                           ,0,0);
                      plVar14 = (long *)
                                Method_Unity_VisualScripting_AdditionHandler_<>c_<_ctor>b__0_36__;
                      if (sVar6 == sVar5) {
                        if ((*(long *)
                              Method_Unity_VisualScripting_AdditionHandler_<>c_<_ctor>b__0_21__ == 0
                            ) || (FUN_03409f80(*(long *)
                                                Method_Unity_VisualScripting_AdditionHandler_<>c_<_ctor>b__0_21__
                                               ,0,0), unaff_x25 == 0)) break;
                        FUN_03419060();
                        goto LAB_03555aa0;
                      }
                    }
                  }
                  uVar10 = FUN_0350d874();
                  if ((uVar10 & 1) == 0) {
                    if ((in_stack_00000010 & 0x100000000) == 0) {
                      if (*(int *)(*(long *)
                                    Method_Unity_VisualScripting_FullSerializer_fsBaseConverter_SerializeMember<Texture2D>__
                                  + 0xe0) == 0) {
                        thunk_FUN_01ee6d7c();
                      }
                      if (DAT_04833019 == '\0') {
                        thunk_FUN_01efb3a4(
                                          Method_Unity_VisualScripting_FullSerializer_fsBaseConverter_SerializeMember<Texture2D>__
                                          );
                        DAT_04833019 = '\x01';
                      }
                      puVar4 = 
                      Method_Unity_VisualScripting_FullSerializer_fsBaseConverter_SerializeMember<Texture2D>__
                      ;
                      lVar11 = *(long *)
                                Method_Unity_VisualScripting_FullSerializer_fsBaseConverter_SerializeMember<Texture2D>__
                      ;
                      if (*(int *)(lVar11 + 0xe0) == 0) {
                        thunk_FUN_01ee6d7c();
                        lVar11 = *(long *)puVar4;
                      }
                      if (**(char **)(lVar11 + 0xb8) == '\0') {
                        if (*(int *)(*(long *)
                                      Method_Unity_VisualScripting_AdditionHandler_<>c_<_ctor>b__0_36__
                                    + 0xe0) == 0) {
                          thunk_FUN_01ee6d7c();
                        }
                        FUN_03554488();
                        plVar14 = (long *)
                                  Method_Unity_VisualScripting_AdditionHandler_<>c_<_ctor>b__0_36__;
                        goto LAB_03555aa0;
                      }
                    }
                    if (2 < iStack0000000000000034) {
                      uVar15 = FUN_035683d0((long)&stack0x00000030 + 4,0);
                      uVar15 = FUN_03405678(*(undefined8 *)
                                             Method_System_Text_RegularExpressions_RegexReplacement_Replace__
                                            ,uVar15,0);
                      if (*(int *)(*(long *)
                                    Method_System_Nullable<AxisAlignedBox_BoxSurface>__ctor__ + 0xe0
                                  ) == 0) {
                        thunk_FUN_01ee6d7c(*(long *)
                                            Method_System_Nullable<AxisAlignedBox_BoxSurface>__ctor__
                                          );
                      }
                      uVar12 = FUN_03532f80(0);
                      FUN_035685ac(&stack0x00000030,uVar15,uVar12,0);
                      goto joined_r0x035557ac;
                    }
                    if (*(int *)(*(long *)
                                  Method_Unity_VisualScripting_AdditionHandler_<>c_<_ctor>b__0_36__
                                + 0xe0) == 0) {
                      thunk_FUN_01ee6d7c();
                    }
                  }
                  else if (*(int *)(*plVar14 + 0xe0) == 0) {
                    thunk_FUN_01ee6d7c();
                  }
LAB_03555928:
                  FUN_03554320();
                  plVar14 = (long *)
                            Method_Unity_VisualScripting_AdditionHandler_<>c_<_ctor>b__0_36__;
                  goto LAB_03555aa0;
                }
                if (uVar3 == 0x73) {
                  if (*(int *)(*plVar14 + 0xe0) == 0) {
                    thunk_FUN_01ee6d7c();
                  }
                  iStack0000000000000034 = FUN_03554504();
                  if (*(int *)(*(long *)
                                Method_System_Array_Resize<InputDevice_ControlBitRangeNode>__ + 0xe0
                              ) == 0) {
                    thunk_FUN_01ee6d7c(*(long *)
                                        Method_System_Array_Resize<InputDevice_ControlBitRangeNode>__
                                      );
                  }
                  FUN_0354e868(&stack0x00000038);
                  goto LAB_0355562c;
                }
                if (uVar3 != 0x74) goto switchD_03554e74_caseD_65;
                if (*(int *)(*plVar14 + 0xe0) == 0) {
                  thunk_FUN_01ee6d7c();
                }
                iVar7 = FUN_03554504();
                iStack0000000000000034 = iVar7;
                if (*(int *)(*(long *)Method_System_Array_Resize<InputDevice_ControlBitRangeNode>__
                            + 0xe0) == 0) {
                  thunk_FUN_01ee6d7c(*(long *)
                                      Method_System_Array_Resize<InputDevice_ControlBitRangeNode>__)
                  ;
                }
                iVar8 = FUN_0354e488(&stack0x00000038);
                plVar14 = (long *)Method_Unity_VisualScripting_AdditionHandler_<>c_<_ctor>b__0_36__;
                if (iVar7 != 1) {
                  if (iVar8 < 0xc) {
                    FUN_0350b424();
                  }
                  else {
                    Oculus_Interaction_BestSelectInteractorGroup__get_HasInteractable();
                  }
                  if (unaff_x25 != 0) goto LAB_03555808;
                  break;
                }
                if (iVar8 < 0xc) {
                  lVar11 = FUN_0350b424();
                  if (lVar11 != 0) goto code_r0x035557bc;
                  break;
                }
                lVar11 = Oculus_Interaction_BestSelectInteractorGroup__get_HasInteractable();
                if (lVar11 == 0) break;
                if (0 < *(int *)(lVar11 + 0x10)) {
                  lVar11 = Oculus_Interaction_BestSelectInteractorGroup__get_HasInteractable();
                  goto joined_r0x035557d4;
                }
                goto LAB_03555aa0;
              }
              if (0x5c < uVar3) {
                switch(uVar3) {
                case 100:
                  if (*(int *)(*plVar14 + 0xe0) == 0) {
                    thunk_FUN_01ee6d7c();
                  }
                  iStack0000000000000034 = FUN_03554504();
                  if (unaff_x26 == (long *)0x0) goto thunk_FUN_01f08a3c;
                  if (2 < iStack0000000000000034) {
                    uVar9 = (**(code **)(*unaff_x26 + 0x1f8))();
                    iVar7 = iStack0000000000000034;
                    if (*(int *)(*plVar14 + 0xe0) == 0) {
                      thunk_FUN_01ee6d7c(*plVar14);
                    }
                    FUN_0355458c(uVar9,iVar7);
                    if (unaff_x25 == 0) goto thunk_FUN_01f08a3c;
LAB_03555a84:
                    FUN_03418748();
                    plVar14 = (long *)
                              Method_Unity_VisualScripting_AdditionHandler_<>c_<_ctor>b__0_36__;
                    break;
                  }
                  (**(code **)(*unaff_x26 + 0x1e8))();
                  if ((in_stack_00000010 & 0x100000000) == 0) {
                    if (*(int *)(*(long *)
                                  Method_Unity_VisualScripting_FullSerializer_fsBaseConverter_SerializeMember<Texture2D>__
                                + 0xe0) == 0) {
                      thunk_FUN_01ee6d7c();
                    }
                    if (DAT_04833019 == '\0') {
                      thunk_FUN_01efb3a4(
                                        Method_Unity_VisualScripting_FullSerializer_fsBaseConverter_SerializeMember<Texture2D>__
                                        );
                      DAT_04833019 = '\x01';
                    }
                    puVar4 = 
                    Method_Unity_VisualScripting_FullSerializer_fsBaseConverter_SerializeMember<Texture2D>__
                    ;
                    lVar11 = *(long *)
                              Method_Unity_VisualScripting_FullSerializer_fsBaseConverter_SerializeMember<Texture2D>__
                    ;
                    if (*(int *)(lVar11 + 0xe0) == 0) {
                      thunk_FUN_01ee6d7c();
                      lVar11 = *(long *)puVar4;
                    }
                    plVar14 = (long *)
                              Method_Unity_VisualScripting_AdditionHandler_<>c_<_ctor>b__0_36__;
                    if (**(char **)(lVar11 + 0xb8) == '\0') {
LAB_03555a34:
                      plVar14 = (long *)
                                Method_Unity_VisualScripting_AdditionHandler_<>c_<_ctor>b__0_36__;
                      if (*(int *)(*(long *)
                                    Method_Unity_VisualScripting_AdditionHandler_<>c_<_ctor>b__0_36__
                                  + 0xe0) == 0) {
                        thunk_FUN_01ee6d7c();
                      }
                      FUN_03554488();
                      break;
                    }
                  }
                  lVar11 = *plVar14;
LAB_035558a8:
                  if (*(int *)(lVar11 + 0xe0) == 0) {
                    thunk_FUN_01ee6d7c();
                  }
                  goto LAB_03555928;
                default:
                  goto switchD_03554e74_caseD_65;
                case 0x66:
                  goto switchD_03554e74_caseD_66;
                case 0x67:
                  if (*(int *)(*plVar14 + 0xe0) == 0) {
                    thunk_FUN_01ee6d7c();
                  }
                  iStack0000000000000034 = FUN_03554504();
                  if (unaff_x26 == (long *)0x0) goto thunk_FUN_01f08a3c;
                  (**(code **)(*unaff_x26 + 0x228))();
                  FUN_0350b5e4();
                  if (unaff_x25 == 0) goto thunk_FUN_01f08a3c;
LAB_03555808:
                  FUN_03418748();
                  break;
                case 0x68:
                  if (*(int *)(*plVar14 + 0xe0) == 0) {
                    thunk_FUN_01ee6d7c();
                  }
                  iStack0000000000000034 = FUN_03554504();
                  if (*(int *)(*(long *)
                                Method_System_Array_Resize<InputDevice_ControlBitRangeNode>__ + 0xe0
                              ) == 0) {
                    thunk_FUN_01ee6d7c(*(long *)
                                        Method_System_Array_Resize<InputDevice_ControlBitRangeNode>__
                                      );
                  }
                  FUN_0354e488(&stack0x00000038);
                  if (*(int *)(*plVar14 + 0xe0) == 0) {
                    thunk_FUN_01ee6d7c();
                  }
                  FUN_03554320();
                  plVar14 = (long *)
                            Method_Unity_VisualScripting_AdditionHandler_<>c_<_ctor>b__0_36__;
                  break;
                case 0x6d:
                  if (*(int *)(*plVar14 + 0xe0) == 0) {
                    thunk_FUN_01ee6d7c();
                  }
                  iStack0000000000000034 = FUN_03554504();
                  if (*(int *)(*(long *)
                                Method_System_Array_Resize<InputDevice_ControlBitRangeNode>__ + 0xe0
                              ) == 0) {
                    thunk_FUN_01ee6d7c(*(long *)
                                        Method_System_Array_Resize<InputDevice_ControlBitRangeNode>__
                                      );
                  }
                  FUN_0354e604(&stack0x00000038);
LAB_0355562c:
                  FUN_03554320();
                }
                goto LAB_03555aa0;
              }
              if (uVar3 == 0x4d) {
                if (*(int *)(*plVar14 + 0xe0) == 0) {
                  thunk_FUN_01ee6d7c();
                }
                iStack0000000000000034 = FUN_03554504();
                if (unaff_x26 != (long *)0x0) {
                  uVar9 = (**(code **)(*unaff_x26 + 0x248))();
                  if (iStack0000000000000034 < 3) {
                    if ((in_stack_00000010 & 0x100000000) == 0) {
                      if (*(int *)(*(long *)
                                    Method_Unity_VisualScripting_FullSerializer_fsBaseConverter_SerializeMember<Texture2D>__
                                  + 0xe0) == 0) {
                        thunk_FUN_01ee6d7c();
                      }
                      if (DAT_04833019 == '\0') {
                        thunk_FUN_01efb3a4(
                                          Method_Unity_VisualScripting_FullSerializer_fsBaseConverter_SerializeMember<Texture2D>__
                                          );
                        DAT_04833019 = '\x01';
                      }
                      puVar4 = 
                      Method_Unity_VisualScripting_FullSerializer_fsBaseConverter_SerializeMember<Texture2D>__
                      ;
                      lVar11 = *(long *)
                                Method_Unity_VisualScripting_FullSerializer_fsBaseConverter_SerializeMember<Texture2D>__
                      ;
                      if (*(int *)(lVar11 + 0xe0) == 0) {
                        thunk_FUN_01ee6d7c();
                        lVar11 = *(long *)puVar4;
                      }
                      if (**(char **)(lVar11 + 0xb8) == '\0') goto LAB_03555a34;
                    }
                    lVar11 = *(long *)
                              Method_Unity_VisualScripting_AdditionHandler_<>c_<_ctor>b__0_36__;
                    goto LAB_035558a8;
                  }
                  if ((in_stack_00000010 & 0x100000000) == 0) {
                    if (*(int *)(*(long *)
                                  Method_Unity_VisualScripting_FullSerializer_fsBaseConverter_SerializeMember<Texture2D>__
                                + 0xe0) == 0) {
                      thunk_FUN_01ee6d7c();
                    }
                    if (DAT_04833019 == '\0') {
                      thunk_FUN_01efb3a4(
                                        Method_Unity_VisualScripting_FullSerializer_fsBaseConverter_SerializeMember<Texture2D>__
                                        );
                      DAT_04833019 = '\x01';
                    }
                    puVar4 = 
                    Method_Unity_VisualScripting_FullSerializer_fsBaseConverter_SerializeMember<Texture2D>__
                    ;
                    lVar11 = *(long *)
                              Method_Unity_VisualScripting_FullSerializer_fsBaseConverter_SerializeMember<Texture2D>__
                    ;
                    if (*(int *)(lVar11 + 0xe0) == 0) {
                      thunk_FUN_01ee6d7c();
                      lVar11 = *(long *)puVar4;
                    }
                    iVar7 = iStack0000000000000034;
                    if (**(char **)(lVar11 + 0xb8) == '\0') {
                      if (*(int *)(*(long *)
                                    Method_Unity_VisualScripting_AdditionHandler_<>c_<_ctor>b__0_36__
                                  + 0xe0) == 0) {
                        thunk_FUN_01ee6d7c();
                      }
                      FUN_035545f4(unaff_x20,uVar9,iVar7);
                      goto joined_r0x035557ac;
                    }
                  }
                  puVar4 = Method_Unity_VisualScripting_AdditionHandler_<>c_<_ctor>b__0_36__;
                  uVar10 = FUN_0350c348();
                  iVar7 = iStack0000000000000034;
                  lVar11 = *(long *)puVar4;
                  if (((uVar10 & 1) == 0) || (iStack0000000000000034 < 4)) {
                    if (*(int *)(lVar11 + 0xe0) == 0) {
                      thunk_FUN_01ee6d7c(lVar11);
                    }
                    FUN_035545c0(uVar9,iVar7);
                  }
                  else {
                    if (*(int *)(lVar11 + 0xe0) == 0) {
                      thunk_FUN_01ee6d7c(lVar11);
                    }
                    FUN_035548cc();
                    FUN_0350c388();
                  }
joined_r0x035557ac:
                  if (unaff_x25 != 0) goto LAB_03555a84;
                }
                break;
              }
              if (uVar3 == 0x5c) {
                if (*(int *)(*plVar14 + 0xe0) == 0) {
                  thunk_FUN_01ee6d7c();
                }
                iVar7 = FUN_0355485c();
                if (-1 < iVar7) {
                  if (unaff_x25 != 0) {
                    FUN_03419060();
                    goto LAB_03554d58;
                  }
                  break;
                }
                goto LAB_03555b04;
              }
switchD_03554e74_caseD_65:
              if (unaff_x25 == 0) break;
              FUN_03419060();
LAB_03555260:
              iStack0000000000000034 = 1;
              goto LAB_03555aa0;
            }
            if (uVar3 < 0x30) {
              if (uVar3 < 0x26) {
                if (uVar3 == 0x22) {
LAB_03554fa0:
                  if (*(int *)(*plVar14 + 0xe0) == 0) {
                    thunk_FUN_01ee6d7c();
                  }
                  iStack0000000000000034 = FUN_035546b4();
                  goto LAB_03555aa0;
                }
                if (uVar3 == 0x25) {
                  if (*(int *)(*plVar14 + 0xe0) == 0) {
                    thunk_FUN_01ee6d7c();
                  }
                  iVar7 = FUN_0355485c();
                  if ((iVar7 < 0) || (iVar7 == 0x25)) goto LAB_03555b04;
                  uStack0000000000000028 = (undefined2)iVar7;
                  if (*(long *)(*(long *)Method_Unity_Burst_Intrinsics_Arm_Neon_vpmax_s16__ + 0x38)
                      == 0) {
                    FUN_01ecafa0(*(long *)Method_Unity_Burst_Intrinsics_Arm_Neon_vpmax_s16__);
                  }
                  if (*(int *)(*plVar14 + 0xe0) == 0) {
                    thunk_FUN_01ee6d7c();
                  }
                  FUN_03554a24(unaff_x20,&stack0x00000028,1);
LAB_03554d58:
                  iStack0000000000000034 = 2;
                  goto LAB_03555aa0;
                }
              }
              else {
                if (uVar3 == 0x27) goto LAB_03554fa0;
                if (uVar3 == 0x2f) {
                  FUN_0350b874();
                  if (unaff_x25 != 0) goto LAB_03555250;
                  break;
                }
              }
              goto switchD_03554e74_caseD_65;
            }
            if (0x46 < uVar3) {
              if (uVar3 == 0x48) {
                if (*(int *)(*plVar14 + 0xe0) == 0) {
                  thunk_FUN_01ee6d7c();
                }
                iStack0000000000000034 = FUN_03554504();
                if (*(int *)(*(long *)Method_System_Array_Resize<InputDevice_ControlBitRangeNode>__
                            + 0xe0) == 0) {
                  thunk_FUN_01ee6d7c(*(long *)
                                      Method_System_Array_Resize<InputDevice_ControlBitRangeNode>__)
                  ;
                }
                FUN_0354e488(&stack0x00000038);
                goto LAB_0355562c;
              }
              if (uVar3 != 0x4b) goto switchD_03554e74_caseD_65;
              iStack0000000000000034 = 1;
              if (*(int *)(*plVar14 + 0xe0) == 0) {
                thunk_FUN_01ee6d7c();
              }
              FUN_03555f08(unaff_x20,unaff_x24);
              goto LAB_03555aa0;
            }
            if (uVar3 == 0x3a) {
              FUN_0350bfdc();
              if (unaff_x25 == 0) break;
LAB_03555250:
              FUN_03418748();
              goto LAB_03555260;
            }
            if (uVar3 != 0x46) goto switchD_03554e74_caseD_65;
switchD_03554e74_caseD_66:
            if (*(int *)(*plVar14 + 0xe0) == 0) {
              thunk_FUN_01ee6d7c();
            }
            iStack0000000000000034 = FUN_03554504();
            if (7 < iStack0000000000000034) {
LAB_03555b04:
              if (in_stack_00000000 == 0) {
                FUN_0341ae68();
              }
              thunk_FUN_01efb3a4(Method_Unity_VisualScripting_Member_ReflectField__);
              uVar15 = thunk_FUN_01f117cc();
              uVar12 = thunk_FUN_01efb3a4(
                                         Method_UnityEngine_InputSystem_Utilities_Observable_Where<InputControl>__
                                         );
              FUN_03553fd0(uVar15,uVar12);
              uVar12 = thunk_FUN_01efb3a4(Method_Unity_Burst_Intrinsics_Arm_Neon_vpmax_s32__);
                    /* WARNING: Subroutine does not return */
              FUN_01f08910(uVar15,uVar12);
            }
            if (*(int *)(*(long *)Method_System_Array_Resize<InputDevice_ControlBitRangeNode>__ +
                        0xe0) == 0) {
              thunk_FUN_01ee6d7c();
            }
            lVar13 = FUN_0354e060(&stack0x00000038);
            iVar7 = iStack0000000000000034;
            if (*(int *)(*(long *)Method_Oculus_Platform_Message<LeaderboardList>__ctor__ + 0xe0) ==
                0) {
              thunk_FUN_01ee6d7c(*(long *)Method_Oculus_Platform_Message<LeaderboardList>__ctor__);
            }
            dVar16 = (double)thunk_FUN_01ec1aac(0x4024000000000000,(double)(7 - iVar7),0);
            puVar4 = Method_Unity_VisualScripting_AdditionHandler_<>c_<_ctor>b__0_36__;
            lVar2 = -0x8000000000000000;
            if (dVar16 != INFINITY) {
              lVar2 = (long)dVar16;
            }
            lVar11 = 0;
            if (lVar2 != 0) {
              lVar11 = (lVar13 % 10000000) / lVar2;
            }
            iVar8 = (int)lVar11;
            unaff_x20 = in_stack_00000018;
            if (uVar3 != 0x66) goto Oculus_Interaction_RoundedBoxProperties__get_RadiusTopLeft;
            lVar11 = *(long *)Method_Unity_VisualScripting_AdditionHandler_<>c_<_ctor>b__0_36__;
            iStack000000000000002c = iVar8;
            if (*(int *)(lVar11 + 0xe0) == 0) {
              thunk_FUN_01ee6d7c();
              lVar11 = *(long *)puVar4;
            }
            lVar11 = *(long *)(*(long *)(lVar11 + 0xb8) + 0x28);
            if (lVar11 == 0) break;
            if (*(uint *)(lVar11 + 0x18) <= iStack0000000000000034 - 1U) goto LAB_03555afc;
            lVar11 = lVar11 + (long)(int)(iStack0000000000000034 - 1U) * 8;
            lVar13 = *(long *)Method_System_Nullable<AxisAlignedBox_BoxSurface>__ctor__;
          } while( true );
        }
      }
thunk_FUN_01f08a3c:
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
Oculus_Interaction_RoundedBoxProperties__set_RadiusBottomRight:
    param_1 = SUB168(SEXT816(lVar11) * SEXT816(unaff_x27),8);
    in_x10 = param_1 >> 2;
  } while( true );
code_r0x035557bc:
  if (0 < *(int *)(lVar11 + 0x10)) {
    lVar11 = FUN_0350b424();
joined_r0x035557d4:
    if ((lVar11 == 0) || (FUN_03409f80(lVar11,0,0), unaff_x25 == 0)) goto thunk_FUN_01f08a3c;
    FUN_03419060();
  }
  goto LAB_03555aa0;
Oculus_Interaction_RoundedBoxProperties__get_RadiusTopLeft:
  iVar7 = iStack0000000000000034;
  if ((iStack0000000000000034 < 1) || (in_x12 = 10, in_w9 = iStack0000000000000034, iVar8 % 10 != 0)
     ) goto LAB_03555934;
  goto Oculus_Interaction_RoundedBoxProperties__set_RadiusBottomRight;
}


