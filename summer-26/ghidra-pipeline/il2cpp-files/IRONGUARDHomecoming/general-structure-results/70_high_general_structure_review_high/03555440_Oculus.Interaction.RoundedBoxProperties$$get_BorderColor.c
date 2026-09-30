/*
FUNCTION_NAME: Oculus.Interaction.RoundedBoxProperties$$get_BorderColor
ENTRY_POINT: 03555440
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


void Oculus_Interaction_RoundedBoxProperties__get_BorderColor(void)

{
  uint uVar1;
  ushort uVar2;
  undefined *puVar3;
  short sVar4;
  short sVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  int in_w9;
  int iVar15;
  long *plVar16;
  undefined8 unaff_x20;
  uint unaff_w22;
  long unaff_x23;
  undefined8 unaff_x24;
  long unaff_x25;
  long *unaff_x26;
  long unaff_x27;
  uint unaff_w28;
  double dVar17;
  long in_stack_00000000;
  undefined8 in_stack_00000008;
  ulong in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined2 uStack0000000000000028;
  int iStack000000000000002c;
  int iStack0000000000000030;
  int iStack0000000000000034;
  
code_r0x03555440:
  if (in_w9 == 0) {
    thunk_FUN_01ee6d7c();
  }
LAB_03555928:
  FUN_03554320();
  plVar16 = (long *)Method_Unity_VisualScripting_AdditionHandler_<>c_<_ctor>b__0_36__;
LAB_03555aa0:
  unaff_w28 = iStack0000000000000034 + unaff_w28;
  if ((int)unaff_w22 <= (int)unaff_w28) {
    return;
  }
  if (unaff_w22 <= unaff_w28) goto LAB_03555afc;
  uVar2 = *(ushort *)(unaff_x23 + (long)(int)unaff_w28 * 2);
  if (0x4b < uVar2) goto LAB_03554d00;
  if (0x2f < uVar2) {
    if (0x46 < uVar2) {
      if (uVar2 == 0x48) {
        if (*(int *)(*plVar16 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        iStack0000000000000034 = FUN_03554504();
        if (*(int *)(*(long *)Method_System_Array_Resize<InputDevice_ControlBitRangeNode>__ + 0xe0)
            == 0) {
          thunk_FUN_01ee6d7c(*(long *)Method_System_Array_Resize<InputDevice_ControlBitRangeNode>__)
          ;
        }
        FUN_0354e488(&stack0x00000038);
        goto LAB_0355562c;
      }
      if (uVar2 != 0x4b) goto switchD_03554e74_caseD_65;
      iStack0000000000000034 = 1;
      if (*(int *)(*plVar16 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      FUN_03555f08(unaff_x20,unaff_x24);
      goto LAB_03555aa0;
    }
    if (uVar2 != 0x3a) {
      if (uVar2 == 0x46) goto switchD_03554e74_caseD_66;
      goto switchD_03554e74_caseD_65;
    }
    FUN_0350bfdc();
joined_r0x0355524c:
    if (unaff_x25 == 0) goto thunk_FUN_01f08a3c;
    FUN_03418748();
    goto LAB_03555260;
  }
  if (uVar2 < 0x26) {
    if (uVar2 == 0x22) {
LAB_03554fa0:
      if (*(int *)(*plVar16 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      iStack0000000000000034 = FUN_035546b4();
      goto LAB_03555aa0;
    }
    if (uVar2 == 0x25) {
      if (*(int *)(*plVar16 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      iVar6 = FUN_0355485c();
      if ((iVar6 < 0) || (iVar6 == 0x25)) goto LAB_03555b04;
      uStack0000000000000028 = (undefined2)iVar6;
      if (*(long *)(*(long *)Method_Unity_Burst_Intrinsics_Arm_Neon_vpmax_s16__ + 0x38) == 0) {
        FUN_01ecafa0(*(long *)Method_Unity_Burst_Intrinsics_Arm_Neon_vpmax_s16__);
      }
      if (*(int *)(*plVar16 + 0xe0) == 0) {
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
      goto joined_r0x0355524c;
    }
  }
  goto switchD_03554e74_caseD_65;
LAB_03554d00:
  if (0x6d < uVar2) {
    if (uVar2 < 0x75) {
      if (uVar2 == 0x73) {
        if (*(int *)(*plVar16 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        iStack0000000000000034 = FUN_03554504();
        if (*(int *)(*(long *)Method_System_Array_Resize<InputDevice_ControlBitRangeNode>__ + 0xe0)
            == 0) {
          thunk_FUN_01ee6d7c(*(long *)Method_System_Array_Resize<InputDevice_ControlBitRangeNode>__)
          ;
        }
        FUN_0354e868(&stack0x00000038);
        goto LAB_0355562c;
      }
      if (uVar2 != 0x74) goto switchD_03554e74_caseD_65;
      if (*(int *)(*plVar16 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      iVar6 = FUN_03554504();
      iStack0000000000000034 = iVar6;
      if (*(int *)(*(long *)Method_System_Array_Resize<InputDevice_ControlBitRangeNode>__ + 0xe0) ==
          0) {
        thunk_FUN_01ee6d7c(*(long *)Method_System_Array_Resize<InputDevice_ControlBitRangeNode>__);
      }
      iVar7 = FUN_0354e488(&stack0x00000038);
      plVar16 = (long *)Method_Unity_VisualScripting_AdditionHandler_<>c_<_ctor>b__0_36__;
      if (iVar6 != 1) {
        if (iVar7 < 0xc) {
          FUN_0350b424();
        }
        else {
          Oculus_Interaction_BestSelectInteractorGroup__get_HasInteractable();
        }
        goto joined_r0x03555534;
      }
      if (iVar7 < 0xc) {
        lVar9 = FUN_0350b424();
        if (lVar9 == 0) goto thunk_FUN_01f08a3c;
        if (*(int *)(lVar9 + 0x10) < 1) goto LAB_03555aa0;
        lVar9 = FUN_0350b424();
      }
      else {
        lVar9 = Oculus_Interaction_BestSelectInteractorGroup__get_HasInteractable();
        if (lVar9 == 0) goto thunk_FUN_01f08a3c;
        if (*(int *)(lVar9 + 0x10) < 1) goto LAB_03555aa0;
        lVar9 = Oculus_Interaction_BestSelectInteractorGroup__get_HasInteractable();
      }
      if ((lVar9 == 0) || (FUN_03409f80(lVar9,0,0), unaff_x25 == 0)) goto thunk_FUN_01f08a3c;
      FUN_03419060();
      goto LAB_03555aa0;
    }
    if (uVar2 == 0x79) {
      if (unaff_x26 == (long *)0x0) goto thunk_FUN_01f08a3c;
      iStack0000000000000030 = (**(code **)(*unaff_x26 + 0x268))();
      if (*(int *)(*plVar16 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c(*plVar16);
      }
      iStack0000000000000034 = FUN_03554504();
      if (((((in_stack_00000010 & 1) == 0) &&
           (*(char *)(*(long *)(*(long *)
                                 Method_Unity_VisualScripting_AdditionHandler_<>c_<_ctor>b__0_107__
                               + 0xb8) + 1) == '\0')) && (iStack0000000000000030 == 1)) &&
         (uVar1 = iStack0000000000000034 + unaff_w28, (int)uVar1 < in_stack_00000008._4_4_)) {
        if (unaff_w22 <= uVar1) goto LAB_03555afc;
        if (*(short *)(unaff_x23 + (long)(int)uVar1 * 2) == 0x27) {
          if (unaff_w22 <= uVar1 + 1) goto LAB_03555afc;
          if (*(long *)Method_Unity_VisualScripting_AdditionHandler_<>c_<_ctor>b__0_22__ == 0)
          goto thunk_FUN_01f08a3c;
          sVar5 = *(short *)(unaff_x23 + (long)(int)(uVar1 + 1) * 2);
          sVar4 = FUN_03409f80(*(long *)
                                Method_Unity_VisualScripting_AdditionHandler_<>c_<_ctor>b__0_22__,0,
                               0);
          plVar16 = (long *)Method_Unity_VisualScripting_AdditionHandler_<>c_<_ctor>b__0_36__;
          if (sVar5 == sVar4) {
            if ((*(long *)Method_Unity_VisualScripting_AdditionHandler_<>c_<_ctor>b__0_21__ == 0) ||
               (FUN_03409f80(*(long *)
                              Method_Unity_VisualScripting_AdditionHandler_<>c_<_ctor>b__0_21__,0,0)
               , unaff_x25 == 0)) goto thunk_FUN_01f08a3c;
            FUN_03419060();
            goto LAB_03555aa0;
          }
        }
      }
      uVar11 = FUN_0350d874();
      if ((uVar11 & 1) != 0) {
        in_w9 = *(int *)(*plVar16 + 0xe0);
        goto code_r0x03555440;
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
        Method_Unity_VisualScripting_FullSerializer_fsBaseConverter_SerializeMember<Texture2D>__;
        lVar9 = *(long *)
                 Method_Unity_VisualScripting_FullSerializer_fsBaseConverter_SerializeMember<Texture2D>__
        ;
        if (*(int *)(lVar9 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
          lVar9 = *(long *)puVar3;
        }
        if (**(char **)(lVar9 + 0xb8) == '\0') {
          if (*(int *)(*(long *)Method_Unity_VisualScripting_AdditionHandler_<>c_<_ctor>b__0_36__ +
                      0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          FUN_03554488();
          plVar16 = (long *)Method_Unity_VisualScripting_AdditionHandler_<>c_<_ctor>b__0_36__;
          goto LAB_03555aa0;
        }
      }
      if (2 < iStack0000000000000034) {
        uVar12 = FUN_035683d0((long)&stack0x00000030 + 4,0);
        uVar12 = FUN_03405678(*(undefined8 *)
                               Method_System_Text_RegularExpressions_RegexReplacement_Replace__,
                              uVar12,0);
        if (*(int *)(*(long *)Method_System_Nullable<AxisAlignedBox_BoxSurface>__ctor__ + 0xe0) == 0
           ) {
          thunk_FUN_01ee6d7c(*(long *)Method_System_Nullable<AxisAlignedBox_BoxSurface>__ctor__);
        }
        uVar13 = FUN_03532f80(0);
        FUN_035685ac(&stack0x00000030,uVar12,uVar13,0);
        goto joined_r0x03554eec;
      }
      if (*(int *)(*(long *)Method_Unity_VisualScripting_AdditionHandler_<>c_<_ctor>b__0_36__ + 0xe0
                  ) == 0) {
        thunk_FUN_01ee6d7c();
      }
      goto LAB_03555928;
    }
    if (uVar2 != 0x7a) goto switchD_03554e74_caseD_65;
    if (*(int *)(*plVar16 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    iStack0000000000000034 = FUN_03554504();
    FUN_03555b5c(unaff_x20,unaff_x24);
    goto LAB_03555aa0;
  }
  if (0x5c < uVar2) {
    switch(uVar2) {
    case 100:
      if (*(int *)(*plVar16 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      iStack0000000000000034 = FUN_03554504();
      if (unaff_x26 == (long *)0x0) goto thunk_FUN_01f08a3c;
      if (2 < iStack0000000000000034) {
        uVar8 = (**(code **)(*unaff_x26 + 0x1f8))();
        iVar6 = iStack0000000000000034;
        if (*(int *)(*plVar16 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c(*plVar16);
        }
        FUN_0355458c(uVar8,iVar6);
        goto joined_r0x03554eec;
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
        Method_Unity_VisualScripting_FullSerializer_fsBaseConverter_SerializeMember<Texture2D>__;
        lVar9 = *(long *)
                 Method_Unity_VisualScripting_FullSerializer_fsBaseConverter_SerializeMember<Texture2D>__
        ;
        if (*(int *)(lVar9 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
          lVar9 = *(long *)puVar3;
        }
        plVar16 = (long *)Method_Unity_VisualScripting_AdditionHandler_<>c_<_ctor>b__0_36__;
        if (**(char **)(lVar9 + 0xb8) == '\0') goto LAB_03555a34;
      }
      lVar9 = *plVar16;
      goto LAB_035558a8;
    case 0x66:
switchD_03554e74_caseD_66:
      if (*(int *)(*plVar16 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      iStack0000000000000034 = FUN_03554504();
      if (7 < iStack0000000000000034) {
LAB_03555b04:
        if (in_stack_00000000 == 0) {
          FUN_0341ae68();
        }
        thunk_FUN_01efb3a4(Method_Unity_VisualScripting_Member_ReflectField__);
        uVar12 = thunk_FUN_01f117cc();
        uVar13 = thunk_FUN_01efb3a4(
                                   Method_UnityEngine_InputSystem_Utilities_Observable_Where<InputControl>__
                                   );
        FUN_03553fd0(uVar12,uVar13);
        uVar13 = thunk_FUN_01efb3a4(Method_Unity_Burst_Intrinsics_Arm_Neon_vpmax_s32__);
                    /* WARNING: Subroutine does not return */
        FUN_01f08910(uVar12,uVar13);
      }
      if (*(int *)(*(long *)Method_System_Array_Resize<InputDevice_ControlBitRangeNode>__ + 0xe0) ==
          0) {
        thunk_FUN_01ee6d7c();
      }
      lVar9 = FUN_0354e060(&stack0x00000038);
      iVar6 = iStack0000000000000034;
      if (*(int *)(*(long *)Method_Oculus_Platform_Message<LeaderboardList>__ctor__ + 0xe0) == 0) {
        thunk_FUN_01ee6d7c(*(long *)Method_Oculus_Platform_Message<LeaderboardList>__ctor__);
      }
      dVar17 = (double)thunk_FUN_01ec1aac(0x4024000000000000,(double)(7 - iVar6),0);
      puVar3 = Method_Unity_VisualScripting_AdditionHandler_<>c_<_ctor>b__0_36__;
      lVar10 = -0x8000000000000000;
      if (dVar17 != INFINITY) {
        lVar10 = (long)dVar17;
      }
      lVar14 = 0;
      if (lVar10 != 0) {
        lVar14 = (lVar9 % 10000000) / lVar10;
      }
      iVar6 = (int)lVar14;
      unaff_x20 = in_stack_00000018;
      if (uVar2 == 0x66) {
        lVar9 = *(long *)Method_Unity_VisualScripting_AdditionHandler_<>c_<_ctor>b__0_36__;
        iStack000000000000002c = iVar6;
        if (*(int *)(lVar9 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
          lVar9 = *(long *)puVar3;
        }
        lVar9 = *(long *)(*(long *)(lVar9 + 0xb8) + 0x28);
        if (lVar9 == 0) goto thunk_FUN_01f08a3c;
        if (*(uint *)(lVar9 + 0x18) <= iStack0000000000000034 - 1U) {
LAB_03555afc:
                    /* WARNING: Subroutine does not return */
          FUN_01f08a44();
        }
        lVar9 = lVar9 + (long)(int)(iStack0000000000000034 - 1U) * 8;
        lVar10 = *(long *)Method_System_Nullable<AxisAlignedBox_BoxSurface>__ctor__;
      }
      else {
        iVar7 = iStack0000000000000034;
        if ((0 < iStack0000000000000034) && (iVar15 = iStack0000000000000034, iVar6 % 10 == 0)) {
          do {
            lVar9 = SUB168(SEXT816(lVar14) * SEXT816(unaff_x27),8);
            lVar14 = (lVar9 >> 2) - (lVar9 >> 0x3f);
            iVar7 = iVar15 + -1;
            if (iVar15 < 2) break;
            lVar9 = SUB168(SEXT816(lVar14) * SEXT816(unaff_x27),8);
            iVar15 = iVar7;
          } while (lVar14 == ((lVar9 >> 2) - (lVar9 >> 0x3f)) * 10);
        }
        if (iVar7 < 1) {
          if (unaff_x25 == 0) goto thunk_FUN_01f08a3c;
          iVar6 = FUN_0341792c();
          plVar16 = (long *)Method_Unity_VisualScripting_AdditionHandler_<>c_<_ctor>b__0_36__;
          if (0 < iVar6) {
            FUN_0341792c();
            sVar5 = FUN_034181cc();
            if (sVar5 == 0x2e) {
              FUN_0341792c();
              FUN_03418d9c();
            }
          }
          goto LAB_03555aa0;
        }
        iStack000000000000002c = (int)lVar14;
        lVar9 = *(long *)Method_Unity_VisualScripting_AdditionHandler_<>c_<_ctor>b__0_36__;
        if (*(int *)(lVar9 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
          lVar9 = *(long *)puVar3;
        }
        lVar9 = *(long *)(*(long *)(lVar9 + 0xb8) + 0x28);
        if (lVar9 == 0) goto thunk_FUN_01f08a3c;
        if (*(uint *)(lVar9 + 0x18) <= iVar7 - 1U) goto LAB_03555afc;
        lVar9 = lVar9 + (ulong)(iVar7 - 1U) * 8;
        lVar10 = *(long *)Method_System_Nullable<AxisAlignedBox_BoxSurface>__ctor__;
      }
      uVar12 = *(undefined8 *)(lVar9 + 0x20);
      if (*(int *)(lVar10 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      uVar13 = FUN_03532f80(0);
      FUN_035685ac((long)&stack0x00000028 + 4,uVar12,uVar13,0);
      if (unaff_x25 == 0) goto thunk_FUN_01f08a3c;
      FUN_03418748();
      plVar16 = (long *)Method_Unity_VisualScripting_AdditionHandler_<>c_<_ctor>b__0_36__;
      goto LAB_03555aa0;
    case 0x67:
      if (*(int *)(*plVar16 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      iStack0000000000000034 = FUN_03554504();
      if (unaff_x26 == (long *)0x0) goto thunk_FUN_01f08a3c;
      (**(code **)(*unaff_x26 + 0x228))();
      FUN_0350b5e4();
joined_r0x03555534:
      if (unaff_x25 == 0) goto thunk_FUN_01f08a3c;
      FUN_03418748();
      goto LAB_03555aa0;
    case 0x68:
      if (*(int *)(*plVar16 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      iStack0000000000000034 = FUN_03554504();
      if (*(int *)(*(long *)Method_System_Array_Resize<InputDevice_ControlBitRangeNode>__ + 0xe0) ==
          0) {
        thunk_FUN_01ee6d7c(*(long *)Method_System_Array_Resize<InputDevice_ControlBitRangeNode>__);
      }
      FUN_0354e488(&stack0x00000038);
      if (*(int *)(*plVar16 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      FUN_03554320();
      plVar16 = (long *)Method_Unity_VisualScripting_AdditionHandler_<>c_<_ctor>b__0_36__;
      goto LAB_03555aa0;
    case 0x6d:
      if (*(int *)(*plVar16 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      iStack0000000000000034 = FUN_03554504();
      if (*(int *)(*(long *)Method_System_Array_Resize<InputDevice_ControlBitRangeNode>__ + 0xe0) ==
          0) {
        thunk_FUN_01ee6d7c(*(long *)Method_System_Array_Resize<InputDevice_ControlBitRangeNode>__);
      }
      FUN_0354e604(&stack0x00000038);
LAB_0355562c:
      FUN_03554320();
      goto LAB_03555aa0;
    }
switchD_03554e74_caseD_65:
    if (unaff_x25 == 0) {
thunk_FUN_01f08a3c:
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    FUN_03419060();
LAB_03555260:
    iStack0000000000000034 = 1;
    goto LAB_03555aa0;
  }
  if (uVar2 != 0x4d) {
    if (uVar2 == 0x5c) {
      if (*(int *)(*plVar16 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      iVar6 = FUN_0355485c();
      if (iVar6 < 0) goto LAB_03555b04;
      if (unaff_x25 == 0) goto thunk_FUN_01f08a3c;
      FUN_03419060();
      goto LAB_03554d58;
    }
    goto switchD_03554e74_caseD_65;
  }
  if (*(int *)(*plVar16 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  iStack0000000000000034 = FUN_03554504();
  if (unaff_x26 == (long *)0x0) goto thunk_FUN_01f08a3c;
  uVar8 = (**(code **)(*unaff_x26 + 0x248))();
  if (2 < iStack0000000000000034) {
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
      Method_Unity_VisualScripting_FullSerializer_fsBaseConverter_SerializeMember<Texture2D>__;
      lVar9 = *(long *)
               Method_Unity_VisualScripting_FullSerializer_fsBaseConverter_SerializeMember<Texture2D>__
      ;
      if (*(int *)(lVar9 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
        lVar9 = *(long *)puVar3;
      }
      iVar6 = iStack0000000000000034;
      if (**(char **)(lVar9 + 0xb8) == '\0') {
        if (*(int *)(*(long *)Method_Unity_VisualScripting_AdditionHandler_<>c_<_ctor>b__0_36__ +
                    0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        FUN_035545f4(unaff_x20,uVar8,iVar6);
        goto joined_r0x03554eec;
      }
    }
    puVar3 = Method_Unity_VisualScripting_AdditionHandler_<>c_<_ctor>b__0_36__;
    uVar11 = FUN_0350c348();
    iVar6 = iStack0000000000000034;
    lVar9 = *(long *)puVar3;
    if (((uVar11 & 1) == 0) || (iStack0000000000000034 < 4)) {
      if (*(int *)(lVar9 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c(lVar9);
      }
      FUN_035545c0(uVar8,iVar6);
    }
    else {
      if (*(int *)(lVar9 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c(lVar9);
      }
      FUN_035548cc();
      FUN_0350c388();
    }
joined_r0x03554eec:
    if (unaff_x25 == 0) goto thunk_FUN_01f08a3c;
    FUN_03418748();
    plVar16 = (long *)Method_Unity_VisualScripting_AdditionHandler_<>c_<_ctor>b__0_36__;
    goto LAB_03555aa0;
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
    Method_Unity_VisualScripting_FullSerializer_fsBaseConverter_SerializeMember<Texture2D>__;
    lVar9 = *(long *)
             Method_Unity_VisualScripting_FullSerializer_fsBaseConverter_SerializeMember<Texture2D>__
    ;
    if (*(int *)(lVar9 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
      lVar9 = *(long *)puVar3;
    }
    if (**(char **)(lVar9 + 0xb8) != '\0') goto LAB_035556b8;
LAB_03555a34:
    plVar16 = (long *)Method_Unity_VisualScripting_AdditionHandler_<>c_<_ctor>b__0_36__;
    if (*(int *)(*(long *)Method_Unity_VisualScripting_AdditionHandler_<>c_<_ctor>b__0_36__ + 0xe0)
        == 0) {
      thunk_FUN_01ee6d7c();
    }
    FUN_03554488();
    goto LAB_03555aa0;
  }
LAB_035556b8:
  lVar9 = *(long *)Method_Unity_VisualScripting_AdditionHandler_<>c_<_ctor>b__0_36__;
LAB_035558a8:
  if (*(int *)(lVar9 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  goto LAB_03555928;
}


