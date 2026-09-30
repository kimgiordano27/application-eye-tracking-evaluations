/*
FUNCTION_NAME: Oculus.Interaction.RoundedBoxProperties$$Awake
ENTRY_POINT: 035554b8
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


void Oculus_Interaction_RoundedBoxProperties__Awake(long param_1)

{
  uint uVar1;
  ushort uVar2;
  undefined *puVar3;
  short sVar4;
  short sVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  int in_w9;
  long in_x10;
  long in_x12;
  long *plVar13;
  undefined8 uVar14;
  undefined8 unaff_x20;
  uint unaff_w22;
  long unaff_x23;
  undefined8 unaff_x24;
  long unaff_x25;
  long *unaff_x26;
  long unaff_x27;
  uint unaff_w28;
  double dVar15;
  long in_stack_00000000;
  undefined8 in_stack_00000008;
  ulong in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined2 uStack0000000000000028;
  int iStack000000000000002c;
  int iStack0000000000000030;
  int iStack0000000000000034;
  
code_r0x035554b8:
  iVar6 = in_w9;
  if (in_x10 == 0) goto Oculus_Interaction_RoundedBoxProperties__set_RadiusBottomRight;
LAB_03555934:
  puVar3 = Method_Unity_VisualScripting_AdditionHandler_<>c_<_ctor>b__0_36__;
  if (in_w9 < 1) {
    if (unaff_x25 != 0) {
      iVar6 = FUN_0341792c();
      plVar13 = (long *)Method_Unity_VisualScripting_AdditionHandler_<>c_<_ctor>b__0_36__;
      if (iVar6 < 1) goto LAB_03555aa0;
      FUN_0341792c();
      sVar5 = FUN_034181cc();
      if (sVar5 != 0x2e) goto LAB_03555aa0;
      FUN_0341792c();
      FUN_03418d9c();
      goto LAB_03555aa0;
    }
  }
  else {
    iStack000000000000002c = (int)param_1;
    lVar10 = *(long *)Method_Unity_VisualScripting_AdditionHandler_<>c_<_ctor>b__0_36__;
    if (*(int *)(lVar10 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
      lVar10 = *(long *)puVar3;
    }
    lVar10 = *(long *)(*(long *)(lVar10 + 0xb8) + 0x28);
    if (lVar10 != 0) {
      if (*(uint *)(lVar10 + 0x18) <= in_w9 - 1U) {
LAB_03555afc:
                    /* WARNING: Subroutine does not return */
        FUN_01f08a44();
      }
      lVar10 = lVar10 + (ulong)(in_w9 - 1U) * 8;
      lVar11 = *(long *)Method_System_Nullable<AxisAlignedBox_BoxSurface>__ctor__;
      do {
        uVar14 = *(undefined8 *)(lVar10 + 0x20);
        if (*(int *)(lVar11 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        uVar12 = FUN_03532f80(0);
        FUN_035685ac((long)&stack0x00000028 + 4,uVar14,uVar12,0);
        if (unaff_x25 == 0) break;
        FUN_03418748();
        plVar13 = (long *)Method_Unity_VisualScripting_AdditionHandler_<>c_<_ctor>b__0_36__;
LAB_03555aa0:
        unaff_w28 = iStack0000000000000034 + unaff_w28;
        if ((int)unaff_w22 <= (int)unaff_w28) {
          return;
        }
        if (unaff_w22 <= unaff_w28) goto LAB_03555afc;
        uVar2 = *(ushort *)(unaff_x23 + (long)(int)unaff_w28 * 2);
        if (0x4b < uVar2) {
          if (0x6d < uVar2) {
            if (0x74 < uVar2) {
              if (uVar2 != 0x79) {
                if (uVar2 != 0x7a) goto switchD_03554e74_caseD_65;
                if (*(int *)(*plVar13 + 0xe0) == 0) {
                  thunk_FUN_01ee6d7c();
                }
                iStack0000000000000034 = FUN_03554504();
                FUN_03555b5c(unaff_x20,unaff_x24);
                goto LAB_03555aa0;
              }
              if (unaff_x26 == (long *)0x0) break;
              iStack0000000000000030 = (**(code **)(*unaff_x26 + 0x268))();
              if (*(int *)(*plVar13 + 0xe0) == 0) {
                thunk_FUN_01ee6d7c(*plVar13);
              }
              iStack0000000000000034 = FUN_03554504();
              if (((((in_stack_00000010 & 1) == 0) &&
                   (*(char *)(*(long *)(*(long *)
                                         Method_Unity_VisualScripting_AdditionHandler_<>c_<_ctor>b__0_107__
                                       + 0xb8) + 1) == '\0')) && (iStack0000000000000030 == 1)) &&
                 (uVar1 = iStack0000000000000034 + unaff_w28, (int)uVar1 < in_stack_00000008._4_4_))
              {
                if (unaff_w22 <= uVar1) goto LAB_03555afc;
                if (*(short *)(unaff_x23 + (long)(int)uVar1 * 2) == 0x27) {
                  if (unaff_w22 <= uVar1 + 1) goto LAB_03555afc;
                  if (*(long *)Method_Unity_VisualScripting_AdditionHandler_<>c_<_ctor>b__0_22__ ==
                      0) break;
                  sVar5 = *(short *)(unaff_x23 + (long)(int)(uVar1 + 1) * 2);
                  sVar4 = FUN_03409f80(*(long *)
                                        Method_Unity_VisualScripting_AdditionHandler_<>c_<_ctor>b__0_22__
                                       ,0,0);
                  plVar13 = (long *)
                            Method_Unity_VisualScripting_AdditionHandler_<>c_<_ctor>b__0_36__;
                  if (sVar5 == sVar4) {
                    if ((*(long *)Method_Unity_VisualScripting_AdditionHandler_<>c_<_ctor>b__0_21__
                         == 0) ||
                       (FUN_03409f80(*(long *)
                                      Method_Unity_VisualScripting_AdditionHandler_<>c_<_ctor>b__0_21__
                                     ,0,0), unaff_x25 == 0)) break;
                    FUN_03419060();
                    goto LAB_03555aa0;
                  }
                }
              }
              uVar9 = FUN_0350d874();
              if ((uVar9 & 1) == 0) {
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
                  puVar3 = 
                  Method_Unity_VisualScripting_FullSerializer_fsBaseConverter_SerializeMember<Texture2D>__
                  ;
                  lVar10 = *(long *)
                            Method_Unity_VisualScripting_FullSerializer_fsBaseConverter_SerializeMember<Texture2D>__
                  ;
                  if (*(int *)(lVar10 + 0xe0) == 0) {
                    thunk_FUN_01ee6d7c();
                    lVar10 = *(long *)puVar3;
                  }
                  if (**(char **)(lVar10 + 0xb8) == '\0') {
                    if (*(int *)(*(long *)
                                  Method_Unity_VisualScripting_AdditionHandler_<>c_<_ctor>b__0_36__
                                + 0xe0) == 0) {
                      thunk_FUN_01ee6d7c();
                    }
                    FUN_03554488();
                    plVar13 = (long *)
                              Method_Unity_VisualScripting_AdditionHandler_<>c_<_ctor>b__0_36__;
                    goto LAB_03555aa0;
                  }
                }
                if (2 < iStack0000000000000034) {
                  uVar14 = FUN_035683d0((long)&stack0x00000030 + 4,0);
                  uVar14 = FUN_03405678(*(undefined8 *)
                                         Method_System_Text_RegularExpressions_RegexReplacement_Replace__
                                        ,uVar14,0);
                  if (*(int *)(*(long *)Method_System_Nullable<AxisAlignedBox_BoxSurface>__ctor__ +
                              0xe0) == 0) {
                    thunk_FUN_01ee6d7c(*(long *)
                                        Method_System_Nullable<AxisAlignedBox_BoxSurface>__ctor__);
                  }
                  uVar12 = FUN_03532f80(0);
                  FUN_035685ac(&stack0x00000030,uVar14,uVar12,0);
                  goto joined_r0x035557ac;
                }
                if (*(int *)(*(long *)
                              Method_Unity_VisualScripting_AdditionHandler_<>c_<_ctor>b__0_36__ +
                            0xe0) == 0) {
                  thunk_FUN_01ee6d7c();
                }
              }
              else if (*(int *)(*plVar13 + 0xe0) == 0) {
                thunk_FUN_01ee6d7c();
              }
LAB_03555928:
              FUN_03554320();
              plVar13 = (long *)Method_Unity_VisualScripting_AdditionHandler_<>c_<_ctor>b__0_36__;
              goto LAB_03555aa0;
            }
            if (uVar2 == 0x73) {
              if (*(int *)(*plVar13 + 0xe0) == 0) {
                thunk_FUN_01ee6d7c();
              }
              iStack0000000000000034 = FUN_03554504();
              if (*(int *)(*(long *)Method_System_Array_Resize<InputDevice_ControlBitRangeNode>__ +
                          0xe0) == 0) {
                thunk_FUN_01ee6d7c(*(long *)
                                    Method_System_Array_Resize<InputDevice_ControlBitRangeNode>__);
              }
              FUN_0354e868(&stack0x00000038);
              goto LAB_0355562c;
            }
            if (uVar2 != 0x74) goto switchD_03554e74_caseD_65;
            if (*(int *)(*plVar13 + 0xe0) == 0) {
              thunk_FUN_01ee6d7c();
            }
            iVar6 = FUN_03554504();
            iStack0000000000000034 = iVar6;
            if (*(int *)(*(long *)Method_System_Array_Resize<InputDevice_ControlBitRangeNode>__ +
                        0xe0) == 0) {
              thunk_FUN_01ee6d7c(*(long *)
                                  Method_System_Array_Resize<InputDevice_ControlBitRangeNode>__);
            }
            iVar7 = FUN_0354e488(&stack0x00000038);
            plVar13 = (long *)Method_Unity_VisualScripting_AdditionHandler_<>c_<_ctor>b__0_36__;
            if (iVar6 != 1) {
              if (iVar7 < 0xc) {
                FUN_0350b424();
              }
              else {
                Oculus_Interaction_BestSelectInteractorGroup__get_HasInteractable();
              }
              if (unaff_x25 != 0) goto LAB_03555808;
              break;
            }
            if (iVar7 < 0xc) {
              lVar10 = FUN_0350b424();
              if (lVar10 != 0) goto code_r0x035557bc;
              break;
            }
            lVar10 = Oculus_Interaction_BestSelectInteractorGroup__get_HasInteractable();
            if (lVar10 == 0) break;
            if (0 < *(int *)(lVar10 + 0x10)) {
              lVar10 = Oculus_Interaction_BestSelectInteractorGroup__get_HasInteractable();
              goto joined_r0x035557d4;
            }
            goto LAB_03555aa0;
          }
          if (0x5c < uVar2) {
            switch(uVar2) {
            case 100:
              if (*(int *)(*plVar13 + 0xe0) == 0) {
                thunk_FUN_01ee6d7c();
              }
              iStack0000000000000034 = FUN_03554504();
              if (unaff_x26 == (long *)0x0) goto thunk_FUN_01f08a3c;
              if (2 < iStack0000000000000034) {
                uVar8 = (**(code **)(*unaff_x26 + 0x1f8))();
                iVar6 = iStack0000000000000034;
                if (*(int *)(*plVar13 + 0xe0) == 0) {
                  thunk_FUN_01ee6d7c(*plVar13);
                }
                FUN_0355458c(uVar8,iVar6);
                if (unaff_x25 == 0) goto thunk_FUN_01f08a3c;
LAB_03555a84:
                FUN_03418748();
                plVar13 = (long *)Method_Unity_VisualScripting_AdditionHandler_<>c_<_ctor>b__0_36__;
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
                puVar3 = 
                Method_Unity_VisualScripting_FullSerializer_fsBaseConverter_SerializeMember<Texture2D>__
                ;
                lVar10 = *(long *)
                          Method_Unity_VisualScripting_FullSerializer_fsBaseConverter_SerializeMember<Texture2D>__
                ;
                if (*(int *)(lVar10 + 0xe0) == 0) {
                  thunk_FUN_01ee6d7c();
                  lVar10 = *(long *)puVar3;
                }
                plVar13 = (long *)Method_Unity_VisualScripting_AdditionHandler_<>c_<_ctor>b__0_36__;
                if (**(char **)(lVar10 + 0xb8) == '\0') {
LAB_03555a34:
                  plVar13 = (long *)
                            Method_Unity_VisualScripting_AdditionHandler_<>c_<_ctor>b__0_36__;
                  if (*(int *)(*(long *)
                                Method_Unity_VisualScripting_AdditionHandler_<>c_<_ctor>b__0_36__ +
                              0xe0) == 0) {
                    thunk_FUN_01ee6d7c();
                  }
                  FUN_03554488();
                  break;
                }
              }
              lVar10 = *plVar13;
LAB_035558a8:
              if (*(int *)(lVar10 + 0xe0) == 0) {
                thunk_FUN_01ee6d7c();
              }
              goto LAB_03555928;
            default:
              goto switchD_03554e74_caseD_65;
            case 0x66:
              goto switchD_03554e74_caseD_66;
            case 0x67:
              if (*(int *)(*plVar13 + 0xe0) == 0) {
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
              if (*(int *)(*plVar13 + 0xe0) == 0) {
                thunk_FUN_01ee6d7c();
              }
              iStack0000000000000034 = FUN_03554504();
              if (*(int *)(*(long *)Method_System_Array_Resize<InputDevice_ControlBitRangeNode>__ +
                          0xe0) == 0) {
                thunk_FUN_01ee6d7c(*(long *)
                                    Method_System_Array_Resize<InputDevice_ControlBitRangeNode>__);
              }
              FUN_0354e488(&stack0x00000038);
              if (*(int *)(*plVar13 + 0xe0) == 0) {
                thunk_FUN_01ee6d7c();
              }
              FUN_03554320();
              plVar13 = (long *)Method_Unity_VisualScripting_AdditionHandler_<>c_<_ctor>b__0_36__;
              break;
            case 0x6d:
              if (*(int *)(*plVar13 + 0xe0) == 0) {
                thunk_FUN_01ee6d7c();
              }
              iStack0000000000000034 = FUN_03554504();
              if (*(int *)(*(long *)Method_System_Array_Resize<InputDevice_ControlBitRangeNode>__ +
                          0xe0) == 0) {
                thunk_FUN_01ee6d7c(*(long *)
                                    Method_System_Array_Resize<InputDevice_ControlBitRangeNode>__);
              }
              FUN_0354e604(&stack0x00000038);
LAB_0355562c:
              FUN_03554320();
            }
            goto LAB_03555aa0;
          }
          if (uVar2 == 0x4d) {
            if (*(int *)(*plVar13 + 0xe0) == 0) {
              thunk_FUN_01ee6d7c();
            }
            iStack0000000000000034 = FUN_03554504();
            if (unaff_x26 != (long *)0x0) {
              uVar8 = (**(code **)(*unaff_x26 + 0x248))();
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
                  puVar3 = 
                  Method_Unity_VisualScripting_FullSerializer_fsBaseConverter_SerializeMember<Texture2D>__
                  ;
                  lVar10 = *(long *)
                            Method_Unity_VisualScripting_FullSerializer_fsBaseConverter_SerializeMember<Texture2D>__
                  ;
                  if (*(int *)(lVar10 + 0xe0) == 0) {
                    thunk_FUN_01ee6d7c();
                    lVar10 = *(long *)puVar3;
                  }
                  if (**(char **)(lVar10 + 0xb8) == '\0') goto LAB_03555a34;
                }
                lVar10 = *(long *)Method_Unity_VisualScripting_AdditionHandler_<>c_<_ctor>b__0_36__;
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
                puVar3 = 
                Method_Unity_VisualScripting_FullSerializer_fsBaseConverter_SerializeMember<Texture2D>__
                ;
                lVar10 = *(long *)
                          Method_Unity_VisualScripting_FullSerializer_fsBaseConverter_SerializeMember<Texture2D>__
                ;
                if (*(int *)(lVar10 + 0xe0) == 0) {
                  thunk_FUN_01ee6d7c();
                  lVar10 = *(long *)puVar3;
                }
                iVar6 = iStack0000000000000034;
                if (**(char **)(lVar10 + 0xb8) == '\0') {
                  if (*(int *)(*(long *)
                                Method_Unity_VisualScripting_AdditionHandler_<>c_<_ctor>b__0_36__ +
                              0xe0) == 0) {
                    thunk_FUN_01ee6d7c();
                  }
                  FUN_035545f4(unaff_x20,uVar8,iVar6);
                  goto joined_r0x035557ac;
                }
              }
              puVar3 = Method_Unity_VisualScripting_AdditionHandler_<>c_<_ctor>b__0_36__;
              uVar9 = FUN_0350c348();
              iVar6 = iStack0000000000000034;
              lVar10 = *(long *)puVar3;
              if (((uVar9 & 1) == 0) || (iStack0000000000000034 < 4)) {
                if (*(int *)(lVar10 + 0xe0) == 0) {
                  thunk_FUN_01ee6d7c(lVar10);
                }
                FUN_035545c0(uVar8,iVar6);
              }
              else {
                if (*(int *)(lVar10 + 0xe0) == 0) {
                  thunk_FUN_01ee6d7c(lVar10);
                }
                FUN_035548cc();
                FUN_0350c388();
              }
joined_r0x035557ac:
              if (unaff_x25 != 0) goto LAB_03555a84;
            }
            break;
          }
          if (uVar2 == 0x5c) {
            if (*(int *)(*plVar13 + 0xe0) == 0) {
              thunk_FUN_01ee6d7c();
            }
            iVar6 = FUN_0355485c();
            if (-1 < iVar6) {
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
        if (uVar2 < 0x30) {
          if (uVar2 < 0x26) {
            if (uVar2 == 0x22) {
LAB_03554fa0:
              if (*(int *)(*plVar13 + 0xe0) == 0) {
                thunk_FUN_01ee6d7c();
              }
              iStack0000000000000034 = FUN_035546b4();
              goto LAB_03555aa0;
            }
            if (uVar2 == 0x25) {
              if (*(int *)(*plVar13 + 0xe0) == 0) {
                thunk_FUN_01ee6d7c();
              }
              iVar6 = FUN_0355485c();
              if ((iVar6 < 0) || (iVar6 == 0x25)) goto LAB_03555b04;
              uStack0000000000000028 = (undefined2)iVar6;
              if (*(long *)(*(long *)Method_Unity_Burst_Intrinsics_Arm_Neon_vpmax_s16__ + 0x38) == 0
                 ) {
                FUN_01ecafa0(*(long *)Method_Unity_Burst_Intrinsics_Arm_Neon_vpmax_s16__);
              }
              if (*(int *)(*plVar13 + 0xe0) == 0) {
                thunk_FUN_01ee6d7c();
              }
              FUN_03554a24(unaff_x20,&stack0x00000028,1);
LAB_03554d58:
              iStack0000000000000034 = 2;
              goto LAB_03555aa0;
            }
          }
          else {
            if (uVar2 == 0x27) goto LAB_03554fa0;
            if (uVar2 == 0x2f) {
              FUN_0350b874();
              if (unaff_x25 != 0) goto LAB_03555250;
              break;
            }
          }
          goto switchD_03554e74_caseD_65;
        }
        if (0x46 < uVar2) {
          if (uVar2 == 0x48) {
            if (*(int *)(*plVar13 + 0xe0) == 0) {
              thunk_FUN_01ee6d7c();
            }
            iStack0000000000000034 = FUN_03554504();
            if (*(int *)(*(long *)Method_System_Array_Resize<InputDevice_ControlBitRangeNode>__ +
                        0xe0) == 0) {
              thunk_FUN_01ee6d7c(*(long *)
                                  Method_System_Array_Resize<InputDevice_ControlBitRangeNode>__);
            }
            FUN_0354e488(&stack0x00000038);
            goto LAB_0355562c;
          }
          if (uVar2 != 0x4b) goto switchD_03554e74_caseD_65;
          iStack0000000000000034 = 1;
          if (*(int *)(*plVar13 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          FUN_03555f08(unaff_x20,unaff_x24);
          goto LAB_03555aa0;
        }
        if (uVar2 == 0x3a) {
          FUN_0350bfdc();
          if (unaff_x25 == 0) break;
LAB_03555250:
          FUN_03418748();
          goto LAB_03555260;
        }
        if (uVar2 != 0x46) goto switchD_03554e74_caseD_65;
switchD_03554e74_caseD_66:
        if (*(int *)(*plVar13 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        iStack0000000000000034 = FUN_03554504();
        if (7 < iStack0000000000000034) {
LAB_03555b04:
          if (in_stack_00000000 == 0) {
            FUN_0341ae68();
          }
          thunk_FUN_01efb3a4(Method_Unity_VisualScripting_Member_ReflectField__);
          uVar14 = thunk_FUN_01f117cc();
          uVar12 = thunk_FUN_01efb3a4(
                                     Method_UnityEngine_InputSystem_Utilities_Observable_Where<InputControl>__
                                     );
          FUN_03553fd0(uVar14,uVar12);
          uVar12 = thunk_FUN_01efb3a4(Method_Unity_Burst_Intrinsics_Arm_Neon_vpmax_s32__);
                    /* WARNING: Subroutine does not return */
          FUN_01f08910(uVar14,uVar12);
        }
        if (*(int *)(*(long *)Method_System_Array_Resize<InputDevice_ControlBitRangeNode>__ + 0xe0)
            == 0) {
          thunk_FUN_01ee6d7c();
        }
        lVar10 = FUN_0354e060(&stack0x00000038);
        iVar6 = iStack0000000000000034;
        if (*(int *)(*(long *)Method_Oculus_Platform_Message<LeaderboardList>__ctor__ + 0xe0) == 0)
        {
          thunk_FUN_01ee6d7c(*(long *)Method_Oculus_Platform_Message<LeaderboardList>__ctor__);
        }
        dVar15 = (double)thunk_FUN_01ec1aac(0x4024000000000000,(double)(7 - iVar6),0);
        puVar3 = Method_Unity_VisualScripting_AdditionHandler_<>c_<_ctor>b__0_36__;
        lVar11 = -0x8000000000000000;
        if (dVar15 != INFINITY) {
          lVar11 = (long)dVar15;
        }
        param_1 = 0;
        if (lVar11 != 0) {
          param_1 = (lVar10 % 10000000) / lVar11;
        }
        iVar7 = (int)param_1;
        unaff_x20 = in_stack_00000018;
        if (uVar2 != 0x66) goto Oculus_Interaction_RoundedBoxProperties__get_RadiusTopLeft;
        lVar10 = *(long *)Method_Unity_VisualScripting_AdditionHandler_<>c_<_ctor>b__0_36__;
        iStack000000000000002c = iVar7;
        if (*(int *)(lVar10 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
          lVar10 = *(long *)puVar3;
        }
        lVar10 = *(long *)(*(long *)(lVar10 + 0xb8) + 0x28);
        if (lVar10 == 0) break;
        if (*(uint *)(lVar10 + 0x18) <= iStack0000000000000034 - 1U) goto LAB_03555afc;
        lVar10 = lVar10 + (long)(int)(iStack0000000000000034 - 1U) * 8;
        lVar11 = *(long *)Method_System_Nullable<AxisAlignedBox_BoxSurface>__ctor__;
      } while( true );
    }
  }
thunk_FUN_01f08a3c:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
code_r0x035557bc:
  if (0 < *(int *)(lVar10 + 0x10)) {
    lVar10 = FUN_0350b424();
joined_r0x035557d4:
    if ((lVar10 == 0) || (FUN_03409f80(lVar10,0,0), unaff_x25 == 0)) goto thunk_FUN_01f08a3c;
    FUN_03419060();
  }
  goto LAB_03555aa0;
Oculus_Interaction_RoundedBoxProperties__get_RadiusTopLeft:
  in_w9 = iStack0000000000000034;
  if ((iStack0000000000000034 < 1) || (in_x12 = 10, iVar6 = iStack0000000000000034, iVar7 % 10 != 0)
     ) goto LAB_03555934;
Oculus_Interaction_RoundedBoxProperties__set_RadiusBottomRight:
  lVar10 = SUB168(SEXT816(param_1) * SEXT816(unaff_x27),8);
  param_1 = (lVar10 >> 2) - (lVar10 >> 0x3f);
  in_w9 = iVar6 + -1;
  if (iVar6 < 2) goto LAB_03555934;
  lVar10 = SUB168(SEXT816(param_1) * SEXT816(unaff_x27),8);
  in_x10 = param_1 - ((lVar10 >> 2) - (lVar10 >> 0x3f)) * in_x12;
  goto code_r0x035554b8;
}


