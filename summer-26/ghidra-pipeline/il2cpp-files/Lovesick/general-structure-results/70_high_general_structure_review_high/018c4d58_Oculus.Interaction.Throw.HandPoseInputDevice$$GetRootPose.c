/*
FUNCTION_NAME: Oculus.Interaction.Throw.HandPoseInputDevice$$GetRootPose
ENTRY_POINT: 018c4d58
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


undefined8 Oculus_Interaction_Throw_HandPoseInputDevice__GetRootPose(void)

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
  char *pcVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  byte in_w8;
  long *plVar16;
  long lVar17;
  ulong uVar18;
  int *piVar19;
  long unaff_x19;
  int unaff_w20;
  long *plVar20;
  undefined8 *unaff_x21;
  long unaff_x22;
  long *unaff_x23;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  long in_stack_00000028;
  
  do {
    if ((in_w8 & 1) != 0) {
      if (*(long *)(unaff_x19 + 0x58) != 0) {
        uVar11 = FUN_0189d8e0(*(long *)(unaff_x19 + 0x58),unaff_w20,0);
        *(undefined8 *)(in_stack_00000028 + 0x18) = uVar11;
        *(undefined4 *)(in_stack_00000028 + 0x10) = 1;
        return 1;
      }
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
LAB_018c4da8:
    plVar20 = *(long **)(unaff_x19 + 0x50);
    *(undefined8 *)(unaff_x19 + 0x58) = 0;
    if (plVar20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    lVar17 = *plVar20;
    uVar18 = (ulong)*(ushort *)(lVar17 + 0x12a);
    if (uVar18 != 0) {
      piVar19 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
      do {
        if (*(long *)(piVar19 + -2) ==
            *(long *)Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__) {
          puVar12 = (undefined8 *)(lVar17 + (long)*piVar19 * 0x10 + 0x138);
          goto LAB_018c4e08;
        }
        uVar18 = uVar18 - 1;
        piVar19 = piVar19 + 4;
      } while (uVar18 != 0);
    }
    puVar12 = (undefined8 *)
              FUN_00d59724(plVar20,*(long *)
                                    Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__
                           ,0);
LAB_018c4e08:
    uVar18 = (*(code *)*puVar12)(plVar20,puVar12[1]);
    if ((uVar18 & 1) == 0) {
      FUN_018c5244();
      *(undefined8 *)(in_stack_00000028 + 0x50) = 0;
      return 0;
    }
    plVar20 = *(long **)(in_stack_00000028 + 0x50);
    if (plVar20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    lVar17 = *plVar20;
    uVar18 = (ulong)*(ushort *)(lVar17 + 0x12a);
    if (uVar18 != 0) {
      piVar19 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
      do {
        if (*(long *)(piVar19 + -2) ==
            *(long *)UnityEngine_InputSystem_Layouts_InputDeviceMatcher_<get_patterns>d__4_TypeInfo)
        {
          puVar12 = (undefined8 *)(lVar17 + (long)*piVar19 * 0x10 + 0x138);
          goto LAB_018c4914;
        }
        uVar18 = uVar18 - 1;
        piVar19 = piVar19 + 4;
      } while (uVar18 != 0);
    }
    puVar12 = (undefined8 *)
              FUN_00d59724(plVar20,*(long *)
                                    UnityEngine_InputSystem_Layouts_InputDeviceMatcher_<get_patterns>d__4_TypeInfo
                           ,0);
LAB_018c4914:
    plVar20 = (long *)(*(code *)*puVar12)(plVar20,puVar12[1]);
    if (plVar20 == (long *)0x0) {
      *(undefined8 *)(in_stack_00000028 + 0x58) = 0;
LAB_018c4a34:
      lVar17 = *(long *)(in_stack_00000028 + 0x40);
      unaff_x19 = in_stack_00000028;
      if (lVar17 != 0) {
        if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        if (*(char *)(lVar17 + 0x20) != '\0') {
          lVar17 = thunk_FUN_00d48444(Method_System_Xml_XmlSqlBinaryReader_ScanOverAnyValue__);
          if (*(int *)(lVar17 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar11 = FUN_01731954(0);
          if (plVar20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          plVar20 = (long *)thunk_FUN_00d93c64(plVar20,0);
          if (plVar20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          uVar13 = (**(code **)(*plVar20 + 0x1b8))(plVar20,*(undefined8 *)(*plVar20 + 0x1c0));
          uVar14 = thunk_FUN_00d48444(Method_System_Numerics_Vector<ulong>__ctor__);
          uVar11 = FUN_018651d4(uVar14,uVar11,uVar13,0);
          thunk_FUN_00d48444(StringLiteral_1457);
          lVar17 = thunk_FUN_00d62348();
          if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          FUN_01802838(lVar17,uVar11,0);
          uVar11 = thunk_FUN_00d48444(
                                     Method_UnityEngine_UIElements_ComputedTransitionUtils_<>c_<ConvertTransitionFunction>b__12_8__
                                     );
                    /* WARNING: Subroutine does not return */
          FUN_00da5038(lVar17,uVar11);
        }
      }
      goto LAB_018c4da8;
    }
    bVar1 = *(byte *)(*(long *)Newtonsoft_Json_Utilities_DynamicUtils_BinderWrapper_TypeInfo + 300);
    if (*(byte *)(*plVar20 + 300) < bVar1) {
      plVar16 = (long *)0x0;
    }
    else {
      plVar16 = plVar20;
      if (*(long *)(*(long *)(*plVar20 + 200) + (ulong)bVar1 * 8 + -8) !=
          *(long *)Newtonsoft_Json_Utilities_DynamicUtils_BinderWrapper_TypeInfo) {
        plVar16 = (long *)0x0;
      }
    }
    *(long **)(in_stack_00000028 + 0x58) = plVar16;
    if (plVar16 == (long *)0x0) goto LAB_018c4a34;
    if (unaff_x22 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    in_stack_00000018 = *(undefined8 *)(unaff_x22 + 0x20);
    lVar17 = *(long *)(*unaff_x23 + 0x20);
    if ((*(byte *)(lVar17 + 0x132) & 1) == 0) {
      lVar17 = FUN_00d5941c();
    }
    lVar17 = *(long *)(*(long *)(lVar17 + 0xc0) + 8);
    if ((*(byte *)(lVar17 + 0x132) & 1) == 0) {
      lVar17 = FUN_00d5941c();
    }
    pcVar10 = (char *)thunk_FUN_00d32ed4(&stack0x00000018,*(undefined8 *)(lVar17 + 0x80));
    lVar17 = in_stack_00000028;
    if (*pcVar10 == '\0') {
      uVar5 = 1;
    }
    else {
      uVar5 = FUN_00adbe98(&stack0x00000018,*unaff_x21);
    }
    if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    *(undefined4 *)(lVar17 + 0x60) = uVar5;
    in_stack_00000018 = *(undefined8 *)(unaff_x22 + 0x10);
    lVar17 = *(long *)(*unaff_x23 + 0x20);
    if ((*(byte *)(lVar17 + 0x132) & 1) == 0) {
      lVar17 = FUN_00d5941c();
    }
    lVar17 = *(long *)(*(long *)(lVar17 + 0xc0) + 8);
    if ((*(byte *)(lVar17 + 0x132) & 1) == 0) {
      lVar17 = FUN_00d5941c();
    }
    pcVar10 = (char *)thunk_FUN_00d32ed4(&stack0x00000018,*(undefined8 *)(lVar17 + 0x80));
    if (*pcVar10 == '\0') {
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
    lVar17 = *(long *)(*unaff_x23 + 0x20);
    if ((*(byte *)(lVar17 + 0x132) & 1) == 0) {
      lVar17 = FUN_00d5941c();
    }
    lVar17 = *(long *)(*(long *)(lVar17 + 0xc0) + 8);
    if ((*(byte *)(lVar17 + 0x132) & 1) == 0) {
      lVar17 = FUN_00d5941c();
    }
    pcVar10 = (char *)thunk_FUN_00d32ed4(&stack0x00000018,*(undefined8 *)(lVar17 + 0x80));
    lVar17 = in_stack_00000028;
    if (*pcVar10 == '\0') {
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
      if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
    }
    *(undefined4 *)(lVar17 + 100) = uVar5;
    in_stack_00000018 = *(undefined8 *)(unaff_x22 + 0x10);
    in_stack_00000010._4_4_ = 0;
    iVar7 = FUN_00adbe98(&stack0x00000018,*unaff_x21);
    iVar8 = in_stack_00000010._4_4_;
    lVar17 = *(long *)(*unaff_x23 + 0x20);
    if ((*(byte *)(lVar17 + 0x132) & 1) == 0) {
      lVar17 = FUN_00d5941c();
    }
    lVar17 = *(long *)(*(long *)(lVar17 + 0xc0) + 8);
    if ((*(byte *)(lVar17 + 0x132) & 1) == 0) {
      lVar17 = FUN_00d5941c();
    }
    pcVar10 = (char *)thunk_FUN_00d32ed4(&stack0x00000018,*(undefined8 *)(lVar17 + 0x80));
    if ((iVar7 < iVar8) && (*pcVar10 != '\0')) {
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
    lVar17 = *(long *)(*unaff_x23 + 0x20);
    if ((*(byte *)(lVar17 + 0x132) & 1) == 0) {
      lVar17 = FUN_00d5941c();
    }
    lVar17 = *(long *)(*(long *)(lVar17 + 0xc0) + 8);
    if ((*(byte *)(lVar17 + 0x132) & 1) == 0) {
      lVar17 = FUN_00d5941c();
    }
    pcVar10 = (char *)thunk_FUN_00d32ed4(&stack0x00000018,*(undefined8 *)(lVar17 + 0x80));
    if ((iVar7 < iVar8) && (*pcVar10 != '\0')) {
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
    lVar17 = *(long *)(in_stack_00000028 + 0x58);
    if (*(int *)(in_stack_00000028 + 0x60) < 1) {
      if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      iVar6 = FUN_018a5254(lVar17,0);
      iVar6 = iVar6 + -1;
    }
    else {
      if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      iVar6 = FUN_018a5254(lVar17,0);
    }
    if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    unaff_w20 = FUN_017726a0(uVar5,iVar6,0);
    uVar5 = FUN_017724a8(*(undefined4 *)(in_stack_00000028 + 100),0xffffffff,0);
    *(undefined4 *)(in_stack_00000028 + 100) = uVar5;
    if (*(long *)(in_stack_00000028 + 0x58) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    uVar9 = FUN_018a5254(*(long *)(in_stack_00000028 + 0x58),0);
    iVar6 = FUN_017726a0(uVar5,uVar9,0);
    *(int *)(in_stack_00000028 + 100) = iVar6;
    bVar3 = unaff_w20 < iVar6;
    if (*(int *)(in_stack_00000028 + 0x60) < 1) {
      bVar3 = iVar6 < unaff_w20;
    }
    *(bool *)(in_stack_00000028 + 0x68) = 0 < *(int *)(in_stack_00000028 + 0x60);
    unaff_x19 = in_stack_00000028;
    if (!bVar3) {
      lVar17 = *(long *)(in_stack_00000028 + 0x40);
      if (lVar17 != 0) {
        if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        if (*(char *)(lVar17 + 0x20) != '\0') {
          lVar17 = thunk_FUN_00d48444(Method_System_Xml_XmlSqlBinaryReader_ScanOverAnyValue__);
          if (*(int *)(lVar17 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar11 = FUN_01731954(0);
          in_stack_00000018 = *(undefined8 *)(unaff_x22 + 0x10);
          lVar17 = thunk_FUN_00d48444(PTR_DAT_033f1958);
          lVar17 = *(long *)(lVar17 + 0x20);
          if ((*(byte *)(lVar17 + 0x132) & 1) == 0) {
            lVar17 = FUN_00d5941c();
          }
          lVar17 = *(long *)(*(long *)(lVar17 + 0xc0) + 8);
          if ((*(byte *)(lVar17 + 0x132) & 1) == 0) {
            lVar17 = FUN_00d5941c();
          }
          pcVar10 = (char *)thunk_FUN_00d32ed4(&stack0x00000018,*(undefined8 *)(lVar17 + 0x80));
          cVar2 = *pcVar10;
          uVar13 = thunk_FUN_00d48444(Method_System_IO_StreamReader_Read__);
          if (cVar2 == '\0') {
            uVar14 = thunk_FUN_00d48444(StringLiteral_12712);
          }
          else {
            uVar13 = thunk_FUN_00d48444(Method_System_IO_StreamReader_Read__);
            in_stack_00000018 = *(undefined8 *)(unaff_x22 + 0x10);
            uVar14 = thunk_FUN_00d48444(StringLiteral_9631);
            in_stack_00000010._4_4_ = FUN_00adbe98(&stack0x00000018,uVar14);
            lVar17 = thunk_FUN_00d48444(Method_System_Xml_XmlSqlBinaryReader_ScanOverAnyValue__);
            if (*(int *)(lVar17 + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            uVar14 = FUN_01731954(0);
            uVar14 = FUN_0176ec60((long)&stack0x00000010 + 4,uVar14,0);
          }
          in_stack_00000018 = *(undefined8 *)(unaff_x22 + 0x18);
          lVar17 = thunk_FUN_00d48444(PTR_DAT_033f1958);
          lVar17 = *(long *)(lVar17 + 0x20);
          if ((*(byte *)(lVar17 + 0x132) & 1) == 0) {
            lVar17 = FUN_00d5941c();
          }
          lVar17 = *(long *)(*(long *)(lVar17 + 0xc0) + 8);
          if ((*(byte *)(lVar17 + 0x132) & 1) == 0) {
            lVar17 = FUN_00d5941c();
          }
          pcVar10 = (char *)thunk_FUN_00d32ed4(&stack0x00000018,*(undefined8 *)(lVar17 + 0x80));
          if (*pcVar10 == '\0') {
            uVar15 = thunk_FUN_00d48444(StringLiteral_12712);
          }
          else {
            in_stack_00000018 = *(undefined8 *)(unaff_x22 + 0x18);
            uVar15 = thunk_FUN_00d48444(StringLiteral_9631);
            in_stack_00000010._4_4_ = FUN_00adbe98(&stack0x00000018,uVar15);
            lVar17 = thunk_FUN_00d48444(Method_System_Xml_XmlSqlBinaryReader_ScanOverAnyValue__);
            if (*(int *)(lVar17 + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            uVar15 = FUN_01731954(0);
            uVar15 = FUN_0176ec60((long)&stack0x00000010 + 4,uVar15,0);
          }
          uVar11 = FUN_018652e8(uVar13,uVar11,uVar14,uVar15,0);
          thunk_FUN_00d48444(StringLiteral_1457);
          lVar17 = thunk_FUN_00d62348();
          if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          FUN_01802838(lVar17,uVar11,0);
          uVar11 = thunk_FUN_00d48444(
                                     Method_UnityEngine_UIElements_ComputedTransitionUtils_<>c_<ConvertTransitionFunction>b__12_8__
                                     );
                    /* WARNING: Subroutine does not return */
          FUN_00da5038(lVar17,uVar11);
        }
      }
      goto LAB_018c4da8;
    }
    *(int *)(in_stack_00000028 + 0x6c) = unaff_w20;
    in_w8 = iVar6 < unaff_w20;
    if (*(char *)(in_stack_00000028 + 0x68) != '\0') {
      in_w8 = unaff_w20 < iVar6;
    }
  } while( true );
}


