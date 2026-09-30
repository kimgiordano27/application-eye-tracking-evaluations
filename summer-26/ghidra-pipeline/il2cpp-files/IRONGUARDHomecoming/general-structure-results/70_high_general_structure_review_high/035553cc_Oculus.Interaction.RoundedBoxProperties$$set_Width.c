/*
FUNCTION_NAME: Oculus.Interaction.RoundedBoxProperties$$set_Width
ENTRY_POINT: 035553cc
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


void Oculus_Interaction_RoundedBoxProperties__set_Width(long param_1,undefined8 param_2)

{
  ushort uVar1;
  undefined *puVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  int iVar14;
  uint unaff_w19;
  long *plVar15;
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
  
code_r0x035553cc:
  uVar7 = FUN_03409f80(param_1,param_2,0);
  plVar15 = (long *)Method_Unity_VisualScripting_AdditionHandler_<>c_<_ctor>b__0_36__;
  if (unaff_w19 != (uVar7 & 0xffff)) goto Oculus_Interaction_RoundedBoxProperties__get_Height;
  if ((*(long *)Method_Unity_VisualScripting_AdditionHandler_<>c_<_ctor>b__0_21__ != 0) &&
     (FUN_03409f80(*(long *)Method_Unity_VisualScripting_AdditionHandler_<>c_<_ctor>b__0_21__,0,0),
     unaff_x25 != 0)) {
    FUN_03419060();
LAB_03555aa0:
    unaff_w28 = iStack0000000000000034 + unaff_w28;
    if ((int)unaff_w22 <= (int)unaff_w28) {
      return;
    }
    if (unaff_w22 <= unaff_w28) goto LAB_03555afc;
    uVar1 = *(ushort *)(unaff_x23 + (long)(int)unaff_w28 * 2);
    if (uVar1 < 0x4c) {
      if (0x2f < uVar1) {
        if (0x46 < uVar1) {
          if (uVar1 == 0x48) {
            if (*(int *)(*plVar15 + 0xe0) == 0) {
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
          if (uVar1 != 0x4b) goto switchD_03554e74_caseD_65;
          iStack0000000000000034 = 1;
          if (*(int *)(*plVar15 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          FUN_03555f08(unaff_x20,unaff_x24);
          goto LAB_03555aa0;
        }
        if (uVar1 != 0x3a) {
          if (uVar1 == 0x46) goto switchD_03554e74_caseD_66;
          goto switchD_03554e74_caseD_65;
        }
        FUN_0350bfdc();
        if (unaff_x25 == 0) goto thunk_FUN_01f08a3c;
LAB_03555250:
        FUN_03418748();
        goto LAB_03555260;
      }
      if (uVar1 < 0x26) {
        if (uVar1 == 0x22) goto LAB_03554fa0;
        if (uVar1 == 0x25) {
          if (*(int *)(*plVar15 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          iVar4 = FUN_0355485c();
          if ((iVar4 < 0) || (iVar4 == 0x25)) goto LAB_03555b04;
          uStack0000000000000028 = (undefined2)iVar4;
          if (*(long *)(*(long *)Method_Unity_Burst_Intrinsics_Arm_Neon_vpmax_s16__ + 0x38) == 0) {
            FUN_01ecafa0(*(long *)Method_Unity_Burst_Intrinsics_Arm_Neon_vpmax_s16__);
          }
          if (*(int *)(*plVar15 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          FUN_03554a24(unaff_x20,&stack0x00000028,1);
LAB_03554d58:
          iStack0000000000000034 = 2;
          goto LAB_03555aa0;
        }
      }
      else {
        if (uVar1 == 0x27) {
LAB_03554fa0:
          if (*(int *)(*plVar15 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          iStack0000000000000034 = FUN_035546b4();
          goto LAB_03555aa0;
        }
        if (uVar1 == 0x2f) {
          FUN_0350b874();
          if (unaff_x25 != 0) goto LAB_03555250;
          goto thunk_FUN_01f08a3c;
        }
      }
    }
    else {
      if (0x6d < uVar1) {
        if (uVar1 < 0x75) {
          if (uVar1 == 0x73) {
            if (*(int *)(*plVar15 + 0xe0) == 0) {
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
          if (uVar1 != 0x74) goto switchD_03554e74_caseD_65;
          if (*(int *)(*plVar15 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          iVar4 = FUN_03554504();
          iStack0000000000000034 = iVar4;
          if (*(int *)(*(long *)Method_System_Array_Resize<InputDevice_ControlBitRangeNode>__ + 0xe0
                      ) == 0) {
            thunk_FUN_01ee6d7c(*(long *)
                                Method_System_Array_Resize<InputDevice_ControlBitRangeNode>__);
          }
          iVar5 = FUN_0354e488(&stack0x00000038);
          plVar15 = (long *)Method_Unity_VisualScripting_AdditionHandler_<>c_<_ctor>b__0_36__;
          if (iVar4 != 1) {
            if (iVar5 < 0xc) {
              FUN_0350b424();
            }
            else {
              Oculus_Interaction_BestSelectInteractorGroup__get_HasInteractable();
            }
            if (unaff_x25 != 0) goto LAB_03555808;
            goto thunk_FUN_01f08a3c;
          }
          if (iVar5 < 0xc) {
            lVar8 = FUN_0350b424();
            if (lVar8 != 0) goto code_r0x035557bc;
            goto thunk_FUN_01f08a3c;
          }
          lVar8 = Oculus_Interaction_BestSelectInteractorGroup__get_HasInteractable();
          if (lVar8 == 0) goto thunk_FUN_01f08a3c;
          if (0 < *(int *)(lVar8 + 0x10)) {
            lVar8 = Oculus_Interaction_BestSelectInteractorGroup__get_HasInteractable();
            if (lVar8 != 0) goto LAB_035557d8;
            goto thunk_FUN_01f08a3c;
          }
          goto LAB_03555aa0;
        }
        if (uVar1 != 0x79) {
          if (uVar1 != 0x7a) goto switchD_03554e74_caseD_65;
          if (*(int *)(*plVar15 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          iStack0000000000000034 = FUN_03554504();
          FUN_03555b5c(unaff_x20,unaff_x24);
          goto LAB_03555aa0;
        }
        if (unaff_x26 == (long *)0x0) goto thunk_FUN_01f08a3c;
        iStack0000000000000030 = (**(code **)(*unaff_x26 + 0x268))();
        if (*(int *)(*plVar15 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c(*plVar15);
        }
        iStack0000000000000034 = FUN_03554504();
        if (((((in_stack_00000010 & 1) == 0) &&
             (*(char *)(*(long *)(*(long *)
                                   Method_Unity_VisualScripting_AdditionHandler_<>c_<_ctor>b__0_107__
                                 + 0xb8) + 1) == '\0')) && (iStack0000000000000030 == 1)) &&
           (uVar7 = iStack0000000000000034 + unaff_w28, (int)uVar7 < in_stack_00000008._4_4_)) {
          if (unaff_w22 <= uVar7) goto LAB_03555afc;
          if (*(short *)(unaff_x23 + (long)(int)uVar7 * 2) == 0x27) goto LAB_035553a8;
        }
Oculus_Interaction_RoundedBoxProperties__get_Height:
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
            puVar2 = 
            Method_Unity_VisualScripting_FullSerializer_fsBaseConverter_SerializeMember<Texture2D>__
            ;
            lVar8 = *(long *)
                     Method_Unity_VisualScripting_FullSerializer_fsBaseConverter_SerializeMember<Texture2D>__
            ;
            if (*(int *)(lVar8 + 0xe0) == 0) {
              thunk_FUN_01ee6d7c();
              lVar8 = *(long *)puVar2;
            }
            if (**(char **)(lVar8 + 0xb8) == '\0') {
              if (*(int *)(*(long *)
                            Method_Unity_VisualScripting_AdditionHandler_<>c_<_ctor>b__0_36__ + 0xe0
                          ) == 0) {
                thunk_FUN_01ee6d7c();
              }
              FUN_03554488();
              plVar15 = (long *)Method_Unity_VisualScripting_AdditionHandler_<>c_<_ctor>b__0_36__;
              goto LAB_03555aa0;
            }
          }
          if (2 < iStack0000000000000034) {
            uVar11 = FUN_035683d0((long)&stack0x00000030 + 4,0);
            uVar11 = FUN_03405678(*(undefined8 *)
                                   Method_System_Text_RegularExpressions_RegexReplacement_Replace__,
                                  uVar11,0);
            if (*(int *)(*(long *)Method_System_Nullable<AxisAlignedBox_BoxSurface>__ctor__ + 0xe0)
                == 0) {
              thunk_FUN_01ee6d7c(*(long *)Method_System_Nullable<AxisAlignedBox_BoxSurface>__ctor__)
              ;
            }
            uVar12 = FUN_03532f80(0);
            FUN_035685ac(&stack0x00000030,uVar11,uVar12,0);
            goto joined_r0x035557ac;
          }
          if (*(int *)(*(long *)Method_Unity_VisualScripting_AdditionHandler_<>c_<_ctor>b__0_36__ +
                      0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
        }
        else if (*(int *)(*plVar15 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
LAB_03555928:
        FUN_03554320();
        plVar15 = (long *)Method_Unity_VisualScripting_AdditionHandler_<>c_<_ctor>b__0_36__;
        goto LAB_03555aa0;
      }
      if (0x5c < uVar1) {
        switch(uVar1) {
        case 100:
          if (*(int *)(*plVar15 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          iStack0000000000000034 = FUN_03554504();
          if (unaff_x26 == (long *)0x0) goto thunk_FUN_01f08a3c;
          if (2 < iStack0000000000000034) {
            uVar6 = (**(code **)(*unaff_x26 + 0x1f8))();
            iVar4 = iStack0000000000000034;
            if (*(int *)(*plVar15 + 0xe0) == 0) {
              thunk_FUN_01ee6d7c(*plVar15);
            }
            FUN_0355458c(uVar6,iVar4);
            if (unaff_x25 == 0) goto thunk_FUN_01f08a3c;
LAB_03555a84:
            FUN_03418748();
            plVar15 = (long *)Method_Unity_VisualScripting_AdditionHandler_<>c_<_ctor>b__0_36__;
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
            puVar2 = 
            Method_Unity_VisualScripting_FullSerializer_fsBaseConverter_SerializeMember<Texture2D>__
            ;
            lVar8 = *(long *)
                     Method_Unity_VisualScripting_FullSerializer_fsBaseConverter_SerializeMember<Texture2D>__
            ;
            if (*(int *)(lVar8 + 0xe0) == 0) {
              thunk_FUN_01ee6d7c();
              lVar8 = *(long *)puVar2;
            }
            plVar15 = (long *)Method_Unity_VisualScripting_AdditionHandler_<>c_<_ctor>b__0_36__;
            if (**(char **)(lVar8 + 0xb8) == '\0') {
LAB_03555a34:
              plVar15 = (long *)Method_Unity_VisualScripting_AdditionHandler_<>c_<_ctor>b__0_36__;
              if (*(int *)(*(long *)
                            Method_Unity_VisualScripting_AdditionHandler_<>c_<_ctor>b__0_36__ + 0xe0
                          ) == 0) {
                thunk_FUN_01ee6d7c();
              }
              FUN_03554488();
              break;
            }
          }
          lVar8 = *plVar15;
LAB_035558a8:
          if (*(int *)(lVar8 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          goto LAB_03555928;
        default:
          goto switchD_03554e74_caseD_65;
        case 0x66:
switchD_03554e74_caseD_66:
          if (*(int *)(*plVar15 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          iStack0000000000000034 = FUN_03554504();
          if (7 < iStack0000000000000034) {
LAB_03555b04:
            if (in_stack_00000000 == 0) {
              FUN_0341ae68();
            }
            thunk_FUN_01efb3a4(Method_Unity_VisualScripting_Member_ReflectField__);
            uVar11 = thunk_FUN_01f117cc();
            uVar12 = thunk_FUN_01efb3a4(
                                       Method_UnityEngine_InputSystem_Utilities_Observable_Where<InputControl>__
                                       );
            FUN_03553fd0(uVar11,uVar12);
            uVar12 = thunk_FUN_01efb3a4(Method_Unity_Burst_Intrinsics_Arm_Neon_vpmax_s32__);
                    /* WARNING: Subroutine does not return */
            FUN_01f08910(uVar11,uVar12);
          }
          if (*(int *)(*(long *)Method_System_Array_Resize<InputDevice_ControlBitRangeNode>__ + 0xe0
                      ) == 0) {
            thunk_FUN_01ee6d7c();
          }
          lVar8 = FUN_0354e060(&stack0x00000038);
          iVar4 = iStack0000000000000034;
          if (*(int *)(*(long *)Method_Oculus_Platform_Message<LeaderboardList>__ctor__ + 0xe0) == 0
             ) {
            thunk_FUN_01ee6d7c(*(long *)Method_Oculus_Platform_Message<LeaderboardList>__ctor__);
          }
          dVar16 = (double)thunk_FUN_01ec1aac(0x4024000000000000,(double)(7 - iVar4),0);
          puVar2 = Method_Unity_VisualScripting_AdditionHandler_<>c_<_ctor>b__0_36__;
          lVar9 = -0x8000000000000000;
          if (dVar16 != INFINITY) {
            lVar9 = (long)dVar16;
          }
          lVar13 = 0;
          if (lVar9 != 0) {
            lVar13 = (lVar8 % 10000000) / lVar9;
          }
          iVar4 = (int)lVar13;
          unaff_x20 = in_stack_00000018;
          if (uVar1 == 0x66) {
            lVar8 = *(long *)Method_Unity_VisualScripting_AdditionHandler_<>c_<_ctor>b__0_36__;
            iStack000000000000002c = iVar4;
            if (*(int *)(lVar8 + 0xe0) == 0) {
              thunk_FUN_01ee6d7c();
              lVar8 = *(long *)puVar2;
            }
            lVar8 = *(long *)(*(long *)(lVar8 + 0xb8) + 0x28);
            if (lVar8 == 0) goto thunk_FUN_01f08a3c;
            if (*(uint *)(lVar8 + 0x18) <= iStack0000000000000034 - 1U) goto LAB_03555afc;
            lVar8 = lVar8 + (long)(int)(iStack0000000000000034 - 1U) * 8;
            lVar9 = *(long *)Method_System_Nullable<AxisAlignedBox_BoxSurface>__ctor__;
          }
          else {
            iVar5 = iStack0000000000000034;
            if ((0 < iStack0000000000000034) && (iVar14 = iStack0000000000000034, iVar4 % 10 == 0))
            {
              do {
                lVar8 = SUB168(SEXT816(lVar13) * SEXT816(unaff_x27),8);
                lVar13 = (lVar8 >> 2) - (lVar8 >> 0x3f);
                iVar5 = iVar14 + -1;
                if (iVar14 < 2) break;
                lVar8 = SUB168(SEXT816(lVar13) * SEXT816(unaff_x27),8);
                iVar14 = iVar5;
              } while (lVar13 == ((lVar8 >> 2) - (lVar8 >> 0x3f)) * 10);
            }
            if (iVar5 < 1) {
              if (unaff_x25 == 0) goto thunk_FUN_01f08a3c;
              iVar4 = FUN_0341792c();
              plVar15 = (long *)Method_Unity_VisualScripting_AdditionHandler_<>c_<_ctor>b__0_36__;
              if (0 < iVar4) {
                FUN_0341792c();
                sVar3 = FUN_034181cc();
                if (sVar3 == 0x2e) {
                  FUN_0341792c();
                  FUN_03418d9c();
                }
              }
              break;
            }
            iStack000000000000002c = (int)lVar13;
            lVar8 = *(long *)Method_Unity_VisualScripting_AdditionHandler_<>c_<_ctor>b__0_36__;
            if (*(int *)(lVar8 + 0xe0) == 0) {
              thunk_FUN_01ee6d7c();
              lVar8 = *(long *)puVar2;
            }
            lVar8 = *(long *)(*(long *)(lVar8 + 0xb8) + 0x28);
            if (lVar8 == 0) goto thunk_FUN_01f08a3c;
            if (*(uint *)(lVar8 + 0x18) <= iVar5 - 1U) goto LAB_03555afc;
            lVar8 = lVar8 + (ulong)(iVar5 - 1U) * 8;
            lVar9 = *(long *)Method_System_Nullable<AxisAlignedBox_BoxSurface>__ctor__;
          }
          uVar11 = *(undefined8 *)(lVar8 + 0x20);
          if (*(int *)(lVar9 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          uVar12 = FUN_03532f80(0);
          FUN_035685ac((long)&stack0x00000028 + 4,uVar11,uVar12,0);
          if (unaff_x25 == 0) goto thunk_FUN_01f08a3c;
          FUN_03418748();
          plVar15 = (long *)Method_Unity_VisualScripting_AdditionHandler_<>c_<_ctor>b__0_36__;
          break;
        case 0x67:
          if (*(int *)(*plVar15 + 0xe0) == 0) {
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
          if (*(int *)(*plVar15 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          iStack0000000000000034 = FUN_03554504();
          if (*(int *)(*(long *)Method_System_Array_Resize<InputDevice_ControlBitRangeNode>__ + 0xe0
                      ) == 0) {
            thunk_FUN_01ee6d7c(*(long *)
                                Method_System_Array_Resize<InputDevice_ControlBitRangeNode>__);
          }
          FUN_0354e488(&stack0x00000038);
          if (*(int *)(*plVar15 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          FUN_03554320();
          plVar15 = (long *)Method_Unity_VisualScripting_AdditionHandler_<>c_<_ctor>b__0_36__;
          break;
        case 0x6d:
          if (*(int *)(*plVar15 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          iStack0000000000000034 = FUN_03554504();
          if (*(int *)(*(long *)Method_System_Array_Resize<InputDevice_ControlBitRangeNode>__ + 0xe0
                      ) == 0) {
            thunk_FUN_01ee6d7c(*(long *)
                                Method_System_Array_Resize<InputDevice_ControlBitRangeNode>__);
          }
          FUN_0354e604(&stack0x00000038);
LAB_0355562c:
          FUN_03554320();
        }
        goto LAB_03555aa0;
      }
      if (uVar1 == 0x4d) {
        if (*(int *)(*plVar15 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        iStack0000000000000034 = FUN_03554504();
        if (unaff_x26 != (long *)0x0) {
          uVar6 = (**(code **)(*unaff_x26 + 0x248))();
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
              puVar2 = 
              Method_Unity_VisualScripting_FullSerializer_fsBaseConverter_SerializeMember<Texture2D>__
              ;
              lVar8 = *(long *)
                       Method_Unity_VisualScripting_FullSerializer_fsBaseConverter_SerializeMember<Texture2D>__
              ;
              if (*(int *)(lVar8 + 0xe0) == 0) {
                thunk_FUN_01ee6d7c();
                lVar8 = *(long *)puVar2;
              }
              if (**(char **)(lVar8 + 0xb8) == '\0') goto LAB_03555a34;
            }
            lVar8 = *(long *)Method_Unity_VisualScripting_AdditionHandler_<>c_<_ctor>b__0_36__;
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
            puVar2 = 
            Method_Unity_VisualScripting_FullSerializer_fsBaseConverter_SerializeMember<Texture2D>__
            ;
            lVar8 = *(long *)
                     Method_Unity_VisualScripting_FullSerializer_fsBaseConverter_SerializeMember<Texture2D>__
            ;
            if (*(int *)(lVar8 + 0xe0) == 0) {
              thunk_FUN_01ee6d7c();
              lVar8 = *(long *)puVar2;
            }
            iVar4 = iStack0000000000000034;
            if (**(char **)(lVar8 + 0xb8) == '\0') {
              if (*(int *)(*(long *)
                            Method_Unity_VisualScripting_AdditionHandler_<>c_<_ctor>b__0_36__ + 0xe0
                          ) == 0) {
                thunk_FUN_01ee6d7c();
              }
              FUN_035545f4(unaff_x20,uVar6,iVar4);
              goto joined_r0x035557ac;
            }
          }
          puVar2 = Method_Unity_VisualScripting_AdditionHandler_<>c_<_ctor>b__0_36__;
          uVar10 = FUN_0350c348();
          iVar4 = iStack0000000000000034;
          lVar8 = *(long *)puVar2;
          if (((uVar10 & 1) == 0) || (iStack0000000000000034 < 4)) {
            if (*(int *)(lVar8 + 0xe0) == 0) {
              thunk_FUN_01ee6d7c(lVar8);
            }
            FUN_035545c0(uVar6,iVar4);
          }
          else {
            if (*(int *)(lVar8 + 0xe0) == 0) {
              thunk_FUN_01ee6d7c(lVar8);
            }
            FUN_035548cc();
            FUN_0350c388();
          }
joined_r0x035557ac:
          if (unaff_x25 != 0) goto LAB_03555a84;
        }
        goto thunk_FUN_01f08a3c;
      }
      if (uVar1 == 0x5c) {
        if (*(int *)(*plVar15 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        iVar4 = FUN_0355485c();
        if (iVar4 < 0) goto LAB_03555b04;
        if (unaff_x25 != 0) {
          FUN_03419060();
          goto LAB_03554d58;
        }
        goto thunk_FUN_01f08a3c;
      }
    }
switchD_03554e74_caseD_65:
    if (unaff_x25 == 0) goto thunk_FUN_01f08a3c;
    FUN_03419060();
LAB_03555260:
    iStack0000000000000034 = 1;
    goto LAB_03555aa0;
  }
thunk_FUN_01f08a3c:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
code_r0x035557bc:
  if (0 < *(int *)(lVar8 + 0x10)) {
    lVar8 = FUN_0350b424();
    if (lVar8 == 0) goto thunk_FUN_01f08a3c;
LAB_035557d8:
    FUN_03409f80(lVar8,0,0);
    if (unaff_x25 == 0) goto thunk_FUN_01f08a3c;
    FUN_03419060();
  }
  goto LAB_03555aa0;
LAB_035553a8:
  if (unaff_w22 <= uVar7 + 1) {
LAB_03555afc:
                    /* WARNING: Subroutine does not return */
    FUN_01f08a44();
  }
  param_1 = *(long *)Method_Unity_VisualScripting_AdditionHandler_<>c_<_ctor>b__0_22__;
  if (param_1 == 0) goto thunk_FUN_01f08a3c;
  unaff_w19 = (uint)*(ushort *)(unaff_x23 + (long)(int)(uVar7 + 1) * 2);
  param_2 = 0;
  goto code_r0x035553cc;
}


