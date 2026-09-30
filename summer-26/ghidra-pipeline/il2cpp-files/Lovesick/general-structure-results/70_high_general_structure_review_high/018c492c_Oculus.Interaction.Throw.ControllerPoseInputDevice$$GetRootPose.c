/*
FUNCTION_NAME: Oculus.Interaction.Throw.ControllerPoseInputDevice$$GetRootPose
ENTRY_POINT: 018c492c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 88
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_4;source_validity_pose_sink_structure
*/


undefined8 Oculus_Interaction_Throw_ControllerPoseInputDevice__GetRootPose(undefined **param_1)

{
  byte bVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  long lVar10;
  char *pcVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  ulong uVar17;
  int *piVar18;
  long *unaff_x20;
  long *plVar19;
  undefined8 *unaff_x21;
  long unaff_x22;
  long *unaff_x23;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  long in_stack_00000028;
  
  do {
    bVar1 = *(byte *)(*(long *)param_1[0x58] + 300);
    if (*(byte *)(*unaff_x20 + 300) < bVar1) {
      plVar19 = (long *)0x0;
    }
    else {
      plVar19 = unaff_x20;
      if (*(long *)(*(long *)(*unaff_x20 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)param_1[0x58])
      {
        plVar19 = (long *)0x0;
      }
    }
    *(long **)(in_stack_00000028 + 0x58) = plVar19;
    if (plVar19 == (long *)0x0) goto LAB_018c4a34;
    if (unaff_x22 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    in_stack_00000018 = *(undefined8 *)(unaff_x22 + 0x20);
    lVar10 = *(long *)(*unaff_x23 + 0x20);
    if ((*(byte *)(lVar10 + 0x132) & 1) == 0) {
      lVar10 = FUN_00d5941c();
    }
    lVar10 = *(long *)(*(long *)(lVar10 + 0xc0) + 8);
    if ((*(byte *)(lVar10 + 0x132) & 1) == 0) {
      lVar10 = FUN_00d5941c();
    }
    pcVar11 = (char *)thunk_FUN_00d32ed4(&stack0x00000018,*(undefined8 *)(lVar10 + 0x80));
    lVar10 = in_stack_00000028;
    if (*pcVar11 == '\0') {
      uVar5 = 1;
    }
    else {
      uVar5 = FUN_00adbe98(&stack0x00000018,*unaff_x21);
    }
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    *(undefined4 *)(lVar10 + 0x60) = uVar5;
    in_stack_00000018 = *(undefined8 *)(unaff_x22 + 0x10);
    lVar10 = *(long *)(*unaff_x23 + 0x20);
    if ((*(byte *)(lVar10 + 0x132) & 1) == 0) {
      lVar10 = FUN_00d5941c();
    }
    lVar10 = *(long *)(*(long *)(lVar10 + 0xc0) + 8);
    if ((*(byte *)(lVar10 + 0x132) & 1) == 0) {
      lVar10 = FUN_00d5941c();
    }
    pcVar11 = (char *)thunk_FUN_00d32ed4(&stack0x00000018,*(undefined8 *)(lVar10 + 0x80));
    if (*pcVar11 == '\0') {
      if (*(int *)(in_stack_00000028 + 0x60) < 1) {
        if (*(long *)(in_stack_00000028 + 0x58) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        iVar6 = FUN_018a5254(*(long *)(in_stack_00000028 + 0x58),0);
        iVar6 = iVar6 + -1;
      }
      else {
        iVar6 = 0;
      }
    }
    else {
      iVar6 = FUN_00adbe98(&stack0x00000018,*unaff_x21);
    }
    in_stack_00000018 = *(undefined8 *)(unaff_x22 + 0x18);
    lVar10 = *(long *)(*unaff_x23 + 0x20);
    if ((*(byte *)(lVar10 + 0x132) & 1) == 0) {
      lVar10 = FUN_00d5941c();
    }
    lVar10 = *(long *)(*(long *)(lVar10 + 0xc0) + 8);
    if ((*(byte *)(lVar10 + 0x132) & 1) == 0) {
      lVar10 = FUN_00d5941c();
    }
    pcVar11 = (char *)thunk_FUN_00d32ed4(&stack0x00000018,*(undefined8 *)(lVar10 + 0x80));
    lVar10 = in_stack_00000028;
    if (*pcVar11 == '\0') {
      if (*(int *)(in_stack_00000028 + 0x60) < 1) {
        uVar5 = 0xffffffff;
      }
      else {
        if (*(long *)(in_stack_00000028 + 0x58) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        uVar5 = FUN_018a5254(*(long *)(in_stack_00000028 + 0x58),0);
      }
    }
    else {
      uVar5 = FUN_00adbe98(&stack0x00000018,*unaff_x21);
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
    }
    *(undefined4 *)(lVar10 + 100) = uVar5;
    in_stack_00000018 = *(undefined8 *)(unaff_x22 + 0x10);
    in_stack_00000010._4_4_ = 0;
    iVar7 = FUN_00adbe98(&stack0x00000018,*unaff_x21);
    iVar8 = in_stack_00000010._4_4_;
    lVar10 = *(long *)(*unaff_x23 + 0x20);
    if ((*(byte *)(lVar10 + 0x132) & 1) == 0) {
      lVar10 = FUN_00d5941c();
    }
    lVar10 = *(long *)(*(long *)(lVar10 + 0xc0) + 8);
    if ((*(byte *)(lVar10 + 0x132) & 1) == 0) {
      lVar10 = FUN_00d5941c();
    }
    pcVar11 = (char *)thunk_FUN_00d32ed4(&stack0x00000018,*(undefined8 *)(lVar10 + 0x80));
    if ((iVar7 < iVar8) && (*pcVar11 != '\0')) {
      if (*(long *)(in_stack_00000028 + 0x58) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      iVar8 = FUN_018a5254(*(long *)(in_stack_00000028 + 0x58),0);
      iVar6 = iVar8 + iVar6;
    }
    in_stack_00000018 = *(undefined8 *)(unaff_x22 + 0x18);
    in_stack_00000010._4_4_ = 0;
    iVar7 = FUN_00adbe98(&stack0x00000018,*unaff_x21);
    iVar8 = in_stack_00000010._4_4_;
    lVar10 = *(long *)(*unaff_x23 + 0x20);
    if ((*(byte *)(lVar10 + 0x132) & 1) == 0) {
      lVar10 = FUN_00d5941c();
    }
    lVar10 = *(long *)(*(long *)(lVar10 + 0xc0) + 8);
    if ((*(byte *)(lVar10 + 0x132) & 1) == 0) {
      lVar10 = FUN_00d5941c();
    }
    pcVar11 = (char *)thunk_FUN_00d32ed4(&stack0x00000018,*(undefined8 *)(lVar10 + 0x80));
    if ((iVar7 < iVar8) && (*pcVar11 != '\0')) {
      if (*(long *)(in_stack_00000028 + 0x58) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      iVar8 = FUN_018a5254(*(long *)(in_stack_00000028 + 0x58),0);
      *(int *)(in_stack_00000028 + 100) = *(int *)(in_stack_00000028 + 100) + iVar8;
    }
    puVar4 = System_Threading_Timer_TimerComparer_TypeInfo;
    iVar8 = *(int *)(in_stack_00000028 + 0x60);
    if (*(int *)(*(long *)System_Threading_Timer_TimerComparer_TypeInfo + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar5 = FUN_017724a8(iVar6,(uint)(iVar8 < 1) << 0x1f,0);
    lVar10 = *(long *)(in_stack_00000028 + 0x58);
    if (*(int *)(in_stack_00000028 + 0x60) < 1) {
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      iVar6 = FUN_018a5254(lVar10,0);
      iVar6 = iVar6 + -1;
    }
    else {
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      iVar6 = FUN_018a5254(lVar10,0);
    }
    if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    iVar6 = FUN_017726a0(uVar5,iVar6,0);
    uVar5 = FUN_017724a8(*(undefined4 *)(in_stack_00000028 + 100),0xffffffff,0);
    *(undefined4 *)(in_stack_00000028 + 100) = uVar5;
    if (*(long *)(in_stack_00000028 + 0x58) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    uVar9 = FUN_018a5254(*(long *)(in_stack_00000028 + 0x58),0);
    iVar8 = FUN_017726a0(uVar5,uVar9,0);
    *(int *)(in_stack_00000028 + 100) = iVar8;
    bVar3 = iVar6 < iVar8;
    if (*(int *)(in_stack_00000028 + 0x60) < 1) {
      bVar3 = iVar8 < iVar6;
    }
    *(bool *)(in_stack_00000028 + 0x68) = 0 < *(int *)(in_stack_00000028 + 0x60);
    if (bVar3) {
      *(int *)(in_stack_00000028 + 0x6c) = iVar6;
      bVar3 = iVar8 < iVar6;
      if (*(char *)(in_stack_00000028 + 0x68) != '\0') {
        bVar3 = iVar6 < iVar8;
      }
      if (bVar3) {
        if (*(long *)(in_stack_00000028 + 0x58) != 0) {
          uVar12 = FUN_0189d8e0(*(long *)(in_stack_00000028 + 0x58),iVar6,0);
          *(undefined8 *)(in_stack_00000028 + 0x18) = uVar12;
          *(undefined4 *)(in_stack_00000028 + 0x10) = 1;
          return 1;
        }
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
    }
    else {
      lVar10 = *(long *)(in_stack_00000028 + 0x40);
      if (lVar10 != 0) {
        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        if (*(char *)(lVar10 + 0x20) != '\0') {
          lVar10 = thunk_FUN_00d48444(Method_System_Xml_XmlSqlBinaryReader_ScanOverAnyValue__);
          if (*(int *)(lVar10 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar12 = FUN_01731954(0);
          in_stack_00000018 = *(undefined8 *)(unaff_x22 + 0x10);
          lVar10 = thunk_FUN_00d48444(PTR_DAT_033f1958);
          lVar10 = *(long *)(lVar10 + 0x20);
          if ((*(byte *)(lVar10 + 0x132) & 1) == 0) {
            lVar10 = FUN_00d5941c();
          }
          lVar10 = *(long *)(*(long *)(lVar10 + 0xc0) + 8);
          if ((*(byte *)(lVar10 + 0x132) & 1) == 0) {
            lVar10 = FUN_00d5941c();
          }
          pcVar11 = (char *)thunk_FUN_00d32ed4(&stack0x00000018,*(undefined8 *)(lVar10 + 0x80));
          cVar2 = *pcVar11;
          uVar14 = thunk_FUN_00d48444(Method_System_IO_StreamReader_Read__);
          if (cVar2 == '\0') {
            uVar15 = thunk_FUN_00d48444(StringLiteral_12712);
          }
          else {
            uVar14 = thunk_FUN_00d48444(Method_System_IO_StreamReader_Read__);
            in_stack_00000018 = *(undefined8 *)(unaff_x22 + 0x10);
            uVar15 = thunk_FUN_00d48444(StringLiteral_9631);
            in_stack_00000010._4_4_ = FUN_00adbe98(&stack0x00000018,uVar15);
            lVar10 = thunk_FUN_00d48444(Method_System_Xml_XmlSqlBinaryReader_ScanOverAnyValue__);
            if (*(int *)(lVar10 + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            uVar15 = FUN_01731954(0);
            uVar15 = FUN_0176ec60((long)&stack0x00000010 + 4,uVar15,0);
          }
          in_stack_00000018 = *(undefined8 *)(unaff_x22 + 0x18);
          lVar10 = thunk_FUN_00d48444(PTR_DAT_033f1958);
          lVar10 = *(long *)(lVar10 + 0x20);
          if ((*(byte *)(lVar10 + 0x132) & 1) == 0) {
            lVar10 = FUN_00d5941c();
          }
          lVar10 = *(long *)(*(long *)(lVar10 + 0xc0) + 8);
          if ((*(byte *)(lVar10 + 0x132) & 1) == 0) {
            lVar10 = FUN_00d5941c();
          }
          pcVar11 = (char *)thunk_FUN_00d32ed4(&stack0x00000018,*(undefined8 *)(lVar10 + 0x80));
          if (*pcVar11 == '\0') {
            uVar16 = thunk_FUN_00d48444(StringLiteral_12712);
          }
          else {
            in_stack_00000018 = *(undefined8 *)(unaff_x22 + 0x18);
            uVar16 = thunk_FUN_00d48444(StringLiteral_9631);
            in_stack_00000010._4_4_ = FUN_00adbe98(&stack0x00000018,uVar16);
            lVar10 = thunk_FUN_00d48444(Method_System_Xml_XmlSqlBinaryReader_ScanOverAnyValue__);
            if (*(int *)(lVar10 + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            uVar16 = FUN_01731954(0);
            uVar16 = FUN_0176ec60((long)&stack0x00000010 + 4,uVar16,0);
          }
          uVar12 = FUN_018652e8(uVar14,uVar12,uVar15,uVar16,0);
          thunk_FUN_00d48444(StringLiteral_1457);
          lVar10 = thunk_FUN_00d62348();
          if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          FUN_01802838(lVar10,uVar12,0);
          uVar12 = thunk_FUN_00d48444(
                                     Method_UnityEngine_UIElements_ComputedTransitionUtils_<>c_<ConvertTransitionFunction>b__12_8__
                                     );
                    /* WARNING: Subroutine does not return */
          FUN_00da5038(lVar10,uVar12);
        }
      }
    }
LAB_018c4da8:
    plVar19 = *(long **)(in_stack_00000028 + 0x50);
    *(undefined8 *)(in_stack_00000028 + 0x58) = 0;
    if (plVar19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    lVar10 = *plVar19;
    uVar17 = (ulong)*(ushort *)(lVar10 + 0x12a);
    if (uVar17 != 0) {
      piVar18 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar18 + -2) ==
            *(long *)Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__) {
          puVar13 = (undefined8 *)(lVar10 + (long)*piVar18 * 0x10 + 0x138);
          goto LAB_018c4e08;
        }
        uVar17 = uVar17 - 1;
        piVar18 = piVar18 + 4;
      } while (uVar17 != 0);
    }
    puVar13 = (undefined8 *)
              FUN_00d59724(plVar19,*(long *)
                                    Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__
                           ,0);
LAB_018c4e08:
    uVar17 = (*(code *)*puVar13)(plVar19,puVar13[1]);
    if ((uVar17 & 1) == 0) {
      FUN_018c5244();
      *(undefined8 *)(in_stack_00000028 + 0x50) = 0;
      return 0;
    }
    plVar19 = *(long **)(in_stack_00000028 + 0x50);
    if (plVar19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    lVar10 = *plVar19;
    uVar17 = (ulong)*(ushort *)(lVar10 + 0x12a);
    if (uVar17 != 0) {
      piVar18 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar18 + -2) ==
            *(long *)UnityEngine_InputSystem_Layouts_InputDeviceMatcher_<get_patterns>d__4_TypeInfo)
        {
          puVar13 = (undefined8 *)(lVar10 + (long)*piVar18 * 0x10 + 0x138);
          goto LAB_018c4914;
        }
        uVar17 = uVar17 - 1;
        piVar18 = piVar18 + 4;
      } while (uVar17 != 0);
    }
    puVar13 = (undefined8 *)
              FUN_00d59724(plVar19,*(long *)
                                    UnityEngine_InputSystem_Layouts_InputDeviceMatcher_<get_patterns>d__4_TypeInfo
                           ,0);
LAB_018c4914:
    unaff_x20 = (long *)(*(code *)*puVar13)(plVar19,puVar13[1]);
    if (unaff_x20 == (long *)0x0) {
      *(undefined8 *)(in_stack_00000028 + 0x58) = 0;
LAB_018c4a34:
      lVar10 = *(long *)(in_stack_00000028 + 0x40);
      if (lVar10 != 0) {
        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        if (*(char *)(lVar10 + 0x20) != '\0') {
          lVar10 = thunk_FUN_00d48444(Method_System_Xml_XmlSqlBinaryReader_ScanOverAnyValue__);
          if (*(int *)(lVar10 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar12 = FUN_01731954(0);
          if (unaff_x20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          plVar19 = (long *)thunk_FUN_00d93c64(unaff_x20,0);
          if (plVar19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          uVar14 = (**(code **)(*plVar19 + 0x1b8))(plVar19,*(undefined8 *)(*plVar19 + 0x1c0));
          uVar15 = thunk_FUN_00d48444(Method_System_Numerics_Vector<ulong>__ctor__);
          uVar12 = FUN_018651d4(uVar15,uVar12,uVar14,0);
          thunk_FUN_00d48444(StringLiteral_1457);
          lVar10 = thunk_FUN_00d62348();
          if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          FUN_01802838(lVar10,uVar12,0);
          uVar12 = thunk_FUN_00d48444(
                                     Method_UnityEngine_UIElements_ComputedTransitionUtils_<>c_<ConvertTransitionFunction>b__12_8__
                                     );
                    /* WARNING: Subroutine does not return */
          FUN_00da5038(lVar10,uVar12);
        }
      }
      goto LAB_018c4da8;
    }
    param_1 = &Sirenix_Utilities_DeepReflection_<>c__DisplayClass21_0_TypeInfo;
  } while( true );
}


