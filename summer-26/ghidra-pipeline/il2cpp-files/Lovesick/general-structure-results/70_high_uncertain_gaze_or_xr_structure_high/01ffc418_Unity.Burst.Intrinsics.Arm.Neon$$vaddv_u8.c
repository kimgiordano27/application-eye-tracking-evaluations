/*
FUNCTION_NAME: Unity.Burst.Intrinsics.Arm.Neon$$vaddv_u8
ENTRY_POINT: 01ffc418
PROGRAM: Lovesick-libil2cpp.so
SCORE: 83
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: possible_biometrics
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_4;validity_or_gating_hits_21;paired_field_refs_with_eye_source;functionality_possible_biometrics_hits_8
*/


/* WARNING: Removing unreachable block (ram,0x01ffd238) */
/* WARNING: Removing unreachable block (ram,0x01ffd23c) */
/* WARNING: Removing unreachable block (ram,0x01ffcd30) */
/* WARNING: Removing unreachable block (ram,0x01ffd650) */
/* WARNING: Removing unreachable block (ram,0x01ffd664) */
/* WARNING: Removing unreachable block (ram,0x01ffcc90) */

long * Unity_Burst_Intrinsics_Arm_Neon__vaddv_u8(long *param_1)

{
  ushort uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  byte bVar7;
  undefined4 uVar8;
  undefined8 *puVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  undefined8 uVar14;
  long *plVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  int iVar19;
  ulong uVar20;
  int *piVar21;
  long *unaff_x19;
  undefined8 uVar22;
  long *unaff_x24;
  long *unaff_x25;
  undefined8 *unaff_x26;
  uint in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  
  if (param_1 == (long *)0x0) {
    plVar11 = (long *)0x0;
  }
  else {
    lVar17 = *param_1;
    uVar20 = (ulong)*(ushort *)(lVar17 + 0x12a);
    if (uVar20 != 0) {
      piVar21 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
      do {
        if (*(long *)(piVar21 + -2) == *unaff_x19) {
          puVar9 = (undefined8 *)(lVar17 + (long)*piVar21 * 0x10 + 0x138);
          goto LAB_01ffc478;
        }
        uVar20 = uVar20 - 1;
        piVar21 = piVar21 + 4;
      } while (uVar20 != 0);
    }
    puVar9 = (undefined8 *)FUN_00d59724(param_1,*unaff_x19,0);
LAB_01ffc478:
    plVar10 = (long *)(*(code *)*puVar9)(param_1,puVar9[1]);
    puVar3 = Method_System_Collections_Generic_List<ShadowCaster2D>_get_Item__;
    plVar11 = (long *)0x0;
    if (plVar10 != (long *)0x0) {
      uVar22 = *(undefined8 *)
                Method_System_Collections_Generic_List<SubsystemDescriptorWithProvider>__ctor__;
      if (*(int *)(*(long *)Method_TMPro_TMP_TextProcessingStack<float>__ctor__ + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar22 = FUN_01780344(uVar22,0);
      lVar17 = *plVar10;
      uVar20 = (ulong)*(ushort *)(lVar17 + 0x12a);
      if (uVar20 != 0) {
        piVar21 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
        do {
          if (*(long *)(piVar21 + -2) == *(long *)puVar3) {
            puVar9 = (undefined8 *)(lVar17 + (long)*piVar21 * 0x10 + 0x138);
            goto LAB_01ffc514;
          }
          uVar20 = uVar20 - 1;
          piVar21 = piVar21 + 4;
        } while (uVar20 != 0);
      }
      puVar9 = (undefined8 *)FUN_00d59724(plVar10,*(long *)puVar3,0);
LAB_01ffc514:
      uVar22 = (*(code *)*puVar9)(plVar10,uVar22,puVar9[1]);
      plVar11 = (long *)thunk_FUN_00d6225c(uVar22,*unaff_x26);
    }
  }
  puVar6 = Method_System_Nullable<OVRPlugin_Result>__ctor__;
  puVar3 = System_Xml_Schema_Datatype_NOTATION_TypeInfo;
  if (unaff_x25 == (long *)0x0) {
LAB_01ffc550:
    plVar10 = (long *)0x0;
  }
  else {
    bVar7 = *(byte *)(*(long *)PTR_DAT_033ee168 + 300);
    if (*(byte *)(*unaff_x25 + 300) < bVar7) goto LAB_01ffc550;
    plVar10 = unaff_x25;
    if (*(long *)(*(long *)(*unaff_x25 + 200) + (ulong)bVar7 * 8 + -8) != *(long *)PTR_DAT_033ee168)
    {
      plVar10 = (long *)0x0;
    }
  }
  if (plVar11 == (long *)0x0) {
    return unaff_x25;
  }
  if (unaff_x24 != (long *)0x0) {
    if (plVar10 != (long *)0x0) {
      lVar17 = *plVar10;
      uVar20 = (ulong)*(ushort *)(lVar17 + 0x12a);
      if (uVar20 != 0) {
        piVar21 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
        do {
          if (*(long *)(piVar21 + -2) == *(long *)System_Xml_Schema_Datatype_NOTATION_TypeInfo) {
            puVar9 = (undefined8 *)(lVar17 + (long)(*piVar21 + 5) * 0x10 + 0x138);
            goto LAB_01ffc5e8;
          }
          uVar20 = uVar20 - 1;
          piVar21 = piVar21 + 4;
        } while (uVar20 != 0);
      }
      puVar9 = (undefined8 *)
               FUN_00d59724(plVar10,*(long *)System_Xml_Schema_Datatype_NOTATION_TypeInfo,5);
LAB_01ffc5e8:
      uVar20 = (*(code *)*puVar9)(plVar10,puVar9[1]);
      if ((uVar20 & 1) == 0) goto LAB_01ffc6e4;
    }
    lVar17 = *(long *)puVar6;
    if (*(int *)(lVar17 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      lVar17 = *(long *)puVar6;
    }
    lVar17 = *(long *)(*(long *)(lVar17 + 0xb8) + 0x40);
    if (lVar17 == 0) goto LAB_01ffd644;
    if (*(uint *)(lVar17 + 0x18) <= in_stack_00000018) goto LAB_01ffd64c;
    lVar17 = lVar17 + (long)(int)in_stack_00000018 * 0x10;
    in_stack_00000030 = *(undefined8 *)(lVar17 + 0x20);
    in_stack_00000038 = *(undefined8 *)(lVar17 + 0x28);
    uVar22 = thunk_FUN_00d61fa0(*(undefined8 *)
                                 UnityEngine_Rendering_Universal_LibTessDotNet_Tess_ActiveRegion_TypeInfo
                                ,&stack0x00000030);
    lVar17 = *unaff_x24;
    uVar20 = (ulong)*(ushort *)(lVar17 + 0x12a);
    if (uVar20 != 0) {
      piVar21 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
      do {
        if (*(long *)(piVar21 + -2) ==
            *(long *)System_Globalization_DateTimeFormatInfoScanner_TypeInfo) {
          puVar9 = (undefined8 *)(lVar17 + (long)*piVar21 * 0x10 + 0x138);
          goto LAB_01ffc6a8;
        }
        uVar20 = uVar20 - 1;
        piVar21 = piVar21 + 4;
      } while (uVar20 != 0);
    }
    puVar9 = (undefined8 *)
             FUN_00d59724(unaff_x24,*(long *)System_Globalization_DateTimeFormatInfoScanner_TypeInfo
                          ,0);
LAB_01ffc6a8:
    plVar12 = (long *)(*(code *)*puVar9)(unaff_x24,uVar22,puVar9[1]);
    if (((plVar12 != (long *)0x0) &&
        (*plVar12 ==
         *(long *)
          UnityEngine_XR_Interaction_Toolkit_Utilities_Tweenables_SmartTweenableVariables_SmartFollowVector3TweenableVariable_IsNewTargetWithinThreshold_000009DC_BurstDirectCall_TypeInfo
        )) && ((long *)plVar12[2] == plVar11)) {
      return (long *)plVar12[3];
    }
  }
LAB_01ffc6e4:
  puVar2 = Method_UnityEngine_UI_Dropdown_SetAlpha__;
  if (unaff_x25 == (long *)0x0) goto LAB_01ffd644;
  lVar17 = *unaff_x25;
  uVar20 = (ulong)*(ushort *)(lVar17 + 0x12a);
  if (uVar20 != 0) {
    piVar21 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
    do {
      if (*(long *)(piVar21 + -2) ==
          *(long *)System_Security_Claims_ClaimsIdentity_<get_Claims>d__51_TypeInfo) {
        puVar9 = (undefined8 *)(lVar17 + (long)(*piVar21 + 1) * 0x10 + 0x138);
        goto LAB_01ffc748;
      }
      uVar20 = uVar20 - 1;
      piVar21 = piVar21 + 4;
    } while (uVar20 != 0);
  }
  puVar9 = (undefined8 *)FUN_00d59724();
LAB_01ffc748:
  uVar8 = (*(code *)*puVar9)();
  lVar17 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
  plVar12 = (long *)Method_UnityEngine_UIElements_UIR_Page_DataSet<Vertex>_Dispose__;
  if (lVar17 == 0) goto LAB_01ffd644;
  FUN_017b46ec(lVar17,0);
  *(undefined4 *)(lVar17 + 0x20) = uVar8;
  *(undefined8 *)(lVar17 + 0x28) = 0;
  if (in_stack_00000018 == 0) {
    lVar16 = *unaff_x25;
    uVar20 = (ulong)*(ushort *)(lVar16 + 0x12a);
    if (uVar20 != 0) {
      piVar21 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
      do {
        if (*(long *)(piVar21 + -2) == *plVar12) {
          puVar9 = (undefined8 *)(lVar16 + (long)*piVar21 * 0x10 + 0x138);
          goto LAB_01ffc82c;
        }
        uVar20 = uVar20 - 1;
        piVar21 = piVar21 + 4;
      } while (uVar20 != 0);
    }
    puVar9 = (undefined8 *)FUN_00d59724();
LAB_01ffc82c:
    plVar15 = (long *)(*(code *)*puVar9)();
    puVar4 = Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__;
    puVar2 = Mono_Security_Cryptography_PKCS1_TypeInfo;
    if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    do {
      lVar18 = *plVar15;
      lVar16 = *(long *)puVar4;
      uVar20 = (ulong)*(ushort *)(lVar18 + 0x12a);
      if (uVar20 != 0) {
        piVar21 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
        do {
          if (*(long *)(piVar21 + -2) == lVar16) {
            puVar9 = (undefined8 *)(lVar18 + (long)*piVar21 * 0x10 + 0x138);
            goto LAB_01ffc89c;
          }
          uVar20 = uVar20 - 1;
          piVar21 = piVar21 + 4;
        } while (uVar20 != 0);
      }
      puVar9 = (undefined8 *)FUN_00d59724(plVar15,lVar16,0);
LAB_01ffc89c:
      uVar20 = (*(code *)*puVar9)(plVar15,puVar9[1]);
      if ((uVar20 & 1) == 0) {
        plVar15 = (long *)thunk_FUN_00d6225c(plVar15,*(undefined8 *)StringLiteral_10310);
        if (plVar15 == (long *)0x0) goto LAB_01ffcc84;
        lVar16 = *plVar15;
        uVar20 = (ulong)*(ushort *)(lVar16 + 0x12a);
        if (uVar20 == 0) goto LAB_01ffc9bc;
        piVar21 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
        goto LAB_01ffc9a4;
      }
      lVar18 = *plVar15;
      lVar16 = *(long *)puVar4;
      uVar20 = (ulong)*(ushort *)(lVar18 + 0x12a);
      if (uVar20 != 0) {
        piVar21 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
        do {
          if (*(long *)(piVar21 + -2) == lVar16) {
            puVar9 = (undefined8 *)(lVar18 + (long)(*piVar21 + 1) * 0x10 + 0x138);
            goto LAB_01ffc8fc;
          }
          uVar20 = uVar20 - 1;
          piVar21 = piVar21 + 4;
        } while (uVar20 != 0);
      }
      puVar9 = (undefined8 *)FUN_00d59724(plVar15,lVar16,1);
LAB_01ffc8fc:
      plVar13 = (long *)(*(code *)*puVar9)(plVar15,puVar9[1]);
      if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      lVar16 = *plVar13;
      bVar7 = *(byte *)(*(long *)puVar2 + 300);
      if ((*(byte *)(lVar16 + 300) < bVar7) ||
         (*(long *)(*(long *)(lVar16 + 200) + (ulong)bVar7 * 8 + -8) != *(long *)puVar2)) {
                    /* WARNING: Subroutine does not return */
        FUN_00da544c(plVar13);
      }
      uVar22 = (**(code **)(lVar16 + 0x178))(plVar13,*(undefined8 *)(lVar16 + 0x180));
      FUN_01ff65e4(lVar17,uVar22,plVar13);
    } while( true );
  }
  if (in_stack_00000018 - 1 < 2) {
    lVar16 = *unaff_x25;
    uVar20 = (ulong)*(ushort *)(lVar16 + 0x12a);
    if (uVar20 != 0) {
      piVar21 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
      do {
        if (*(long *)(piVar21 + -2) == *plVar12) {
          puVar9 = (undefined8 *)(lVar16 + (long)*piVar21 * 0x10 + 0x138);
          goto Unity_Burst_Intrinsics_Arm_Neon__vmaxvq_s8;
        }
        uVar20 = uVar20 - 1;
        piVar21 = piVar21 + 4;
      } while (uVar20 != 0);
    }
    puVar9 = (undefined8 *)FUN_00d59724();
Unity_Burst_Intrinsics_Arm_Neon__vmaxvq_s8:
    plVar12 = (long *)(*(code *)*puVar9)();
    puVar4 = Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__;
    puVar2 = System_Collections_Generic_ICollection<CorrelationID>_TypeInfo;
    if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    do {
      lVar18 = *plVar12;
      lVar16 = *(long *)puVar4;
      uVar20 = (ulong)*(ushort *)(lVar18 + 0x12a);
      if (uVar20 != 0) {
        piVar21 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
        do {
          if (*(long *)(piVar21 + -2) == lVar16) {
            puVar9 = (undefined8 *)(lVar18 + (long)*piVar21 * 0x10 + 0x138);
            goto LAB_01ffca48;
          }
          uVar20 = uVar20 - 1;
          piVar21 = piVar21 + 4;
        } while (uVar20 != 0);
      }
      puVar9 = (undefined8 *)FUN_00d59724(plVar12,lVar16,0);
LAB_01ffca48:
      uVar20 = (*(code *)*puVar9)(plVar12,puVar9[1]);
      if ((uVar20 & 1) == 0) {
        plVar12 = (long *)thunk_FUN_00d6225c(plVar12,*(undefined8 *)StringLiteral_10310);
        if (plVar12 == (long *)0x0) goto LAB_01ffcd24;
        lVar16 = *plVar12;
        uVar20 = (ulong)*(ushort *)(lVar16 + 0x12a);
        if (uVar20 == 0) goto LAB_01ffcc5c;
        piVar21 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
        goto LAB_01ffcc44;
      }
      lVar18 = *plVar12;
      lVar16 = *(long *)puVar4;
      uVar20 = (ulong)*(ushort *)(lVar18 + 0x12a);
      if (uVar20 != 0) {
        piVar21 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
        do {
          if (*(long *)(piVar21 + -2) == lVar16) {
            puVar9 = (undefined8 *)(lVar18 + (long)(*piVar21 + 1) * 0x10 + 0x138);
            goto LAB_01ffcaa8;
          }
          uVar20 = uVar20 - 1;
          piVar21 = piVar21 + 4;
        } while (uVar20 != 0);
      }
      puVar9 = (undefined8 *)FUN_00d59724(plVar12,lVar16,1);
LAB_01ffcaa8:
      plVar15 = (long *)(*(code *)*puVar9)(plVar12,puVar9[1]);
      if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      lVar16 = *(long *)puVar2;
      bVar7 = *(byte *)(lVar16 + 300);
      if ((*(byte *)(*plVar15 + 300) < bVar7) ||
         (*(long *)(*(long *)(*plVar15 + 200) + (ulong)bVar7 * 8 + -8) != lVar16)) {
                    /* WARNING: Subroutine does not return */
        FUN_00da544c(plVar15);
      }
      uVar22 = (**(code **)(*plVar15 + 0x1a8))(plVar15,*(undefined8 *)(*plVar15 + 0x1b0));
      uVar20 = FUN_01ff65b8(lVar17,uVar22);
      if ((uVar20 & 1) == 0) {
        FUN_01ff65e4(lVar17,uVar22,plVar15);
      }
      else {
        if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        lVar16 = FUN_01ffef2c(plVar15);
        if (lVar16 != 0) {
          uVar14 = FUN_015f5b28(uVar22,lVar16,0);
          FUN_01ff65e4(lVar17,uVar14,plVar15);
        }
        plVar15 = (long *)FUN_01fffe10(lVar17,uVar22);
        if (plVar15 != (long *)0x0) {
          lVar16 = *(long *)puVar2;
          bVar7 = *(byte *)(lVar16 + 300);
          if ((*(byte *)(*plVar15 + 300) < bVar7) ||
             (*(long *)(*(long *)(*plVar15 + 200) + (ulong)bVar7 * 8 + -8) != lVar16)) {
                    /* WARNING: Subroutine does not return */
            FUN_00da544c(plVar15);
          }
        }
        if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        lVar16 = FUN_01ffef2c(plVar15);
        if (lVar16 != 0) {
          FUN_01fffe3c(lVar17,uVar22);
          if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          uVar22 = (**(code **)(*plVar15 + 0x1a8))(plVar15,*(undefined8 *)(*plVar15 + 0x1b0));
          uVar22 = FUN_015f5b28(uVar22,lVar16,0);
          FUN_01ff65e4(lVar17,uVar22,plVar15);
        }
      }
    } while( true );
  }
  bVar7 = 0;
  goto joined_r0x01ffce00;
  while( true ) {
    uVar20 = uVar20 - 1;
    piVar21 = piVar21 + 4;
    if (uVar20 == 0) break;
LAB_01ffc9a4:
    if (*(long *)(piVar21 + -2) == *(long *)StringLiteral_10310) {
      puVar9 = (undefined8 *)(lVar16 + (long)*piVar21 * 0x10 + 0x138);
      goto LAB_01ffcc78;
    }
  }
LAB_01ffc9bc:
  puVar9 = (undefined8 *)FUN_00d59724(plVar15,*(long *)StringLiteral_10310,0);
LAB_01ffcc78:
  (*(code *)*puVar9)(plVar15,puVar9[1]);
LAB_01ffcc84:
  lVar16 = *plVar11;
  uVar20 = (ulong)*(ushort *)(lVar16 + 0x12a);
  if (uVar20 != 0) {
    piVar21 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
    do {
      if (*(long *)(piVar21 + -2) == *(long *)Method_Unity_Burst_SharedStatic_CheckResult__) {
        puVar9 = (undefined8 *)(lVar16 + (long)*piVar21 * 0x10 + 0x138);
        goto LAB_01ffccf4;
      }
      uVar20 = uVar20 - 1;
      piVar21 = piVar21 + 4;
    } while (uVar20 != 0);
  }
  puVar9 = (undefined8 *)
           FUN_00d59724(plVar11,*(long *)Method_Unity_Burst_SharedStatic_CheckResult__,0);
LAB_01ffccf4:
  bVar7 = (*(code *)*puVar9)(plVar11,param_1,lVar17,puVar9[1]);
  goto joined_r0x01ffce00;
code_r0x01ffcd6c:
  uVar20 = uVar20 - 1;
  piVar21 = piVar21 + 4;
  if (uVar20 == 0) goto LAB_01ffcd78;
  goto LAB_01ffcd60;
LAB_01ffd1b0:
  plVar12 = (long *)thunk_FUN_00d6225c(plVar12,*(undefined8 *)StringLiteral_10310);
  if (plVar12 != (long *)0x0) {
    lVar17 = *plVar12;
    uVar20 = (ulong)*(ushort *)(lVar17 + 0x12a);
    if (uVar20 != 0) {
      piVar21 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
      do {
        if (*(long *)(piVar21 + -2) == *(long *)puVar4) {
          puVar9 = (undefined8 *)(lVar17 + (long)*piVar21 * 0x10 + 0x138);
          goto LAB_01ffd220;
        }
        uVar20 = uVar20 - 1;
        piVar21 = piVar21 + 4;
      } while (uVar20 != 0);
    }
    puVar9 = (undefined8 *)FUN_00d59724(plVar12,*(long *)puVar4,0);
LAB_01ffd220:
    (*(code *)*puVar9)(plVar12,puVar9[1]);
  }
  goto Unity_Burst_Intrinsics_Arm_Neon__vminvq_s32;
  while( true ) {
    uVar20 = uVar20 - 1;
    piVar21 = piVar21 + 4;
    if (uVar20 == 0) break;
LAB_01ffcc44:
    if (*(long *)(piVar21 + -2) == *(long *)StringLiteral_10310) {
      puVar9 = (undefined8 *)(lVar16 + (long)*piVar21 * 0x10 + 0x138);
      goto Unity_Burst_Intrinsics_Arm_Neon__vmaxvq_f64;
    }
  }
LAB_01ffcc5c:
  puVar9 = (undefined8 *)FUN_00d59724(plVar12,*(long *)StringLiteral_10310,0);
Unity_Burst_Intrinsics_Arm_Neon__vmaxvq_f64:
  (*(code *)*puVar9)(plVar12,puVar9[1]);
LAB_01ffcd24:
  lVar18 = *plVar11;
  lVar16 = *(long *)Method_Unity_Burst_SharedStatic_CheckResult__;
  uVar1 = *(ushort *)(lVar18 + 0x12a);
  uVar20 = (ulong)uVar1;
  if (in_stack_00000018 == 1) {
    if (uVar1 != 0) {
      piVar21 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
LAB_01ffcd60:
      if (*(long *)(piVar21 + -2) != lVar16) goto code_r0x01ffcd6c;
      iVar19 = *piVar21 + 2;
LAB_01ffcdd4:
      puVar9 = (undefined8 *)(lVar18 + (long)iVar19 * 0x10 + 0x138);
      goto LAB_01ffcde0;
    }
LAB_01ffcd78:
    uVar22 = 2;
  }
  else {
    if (uVar1 != 0) {
      piVar21 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
      do {
        if (*(long *)(piVar21 + -2) == lVar16) {
          iVar19 = *piVar21 + 1;
          goto LAB_01ffcdd4;
        }
        uVar20 = uVar20 - 1;
        piVar21 = piVar21 + 4;
      } while (uVar20 != 0);
    }
    uVar22 = 1;
  }
  puVar9 = (undefined8 *)FUN_00d59724(plVar11,lVar16,uVar22);
LAB_01ffcde0:
  bVar7 = (*(code *)*puVar9)(plVar11,param_1,lVar17,puVar9[1]);
  plVar12 = (long *)Method_UnityEngine_UIElements_UIR_Page_DataSet<Vertex>_Dispose__;
joined_r0x01ffce00:
  if (plVar10 != (long *)0x0) {
    lVar16 = *plVar10;
    uVar20 = (ulong)*(ushort *)(lVar16 + 0x12a);
    if (uVar20 != 0) {
      piVar21 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
      do {
        if (*(long *)(piVar21 + -2) == *(long *)puVar3) {
          puVar9 = (undefined8 *)(lVar16 + (long)(*piVar21 + 5) * 0x10 + 0x138);
          goto LAB_01ffce54;
        }
        uVar20 = uVar20 - 1;
        piVar21 = piVar21 + 4;
      } while (uVar20 != 0);
    }
    puVar9 = (undefined8 *)FUN_00d59724(plVar10,*(long *)puVar3,5);
LAB_01ffce54:
    uVar20 = (*(code *)*puVar9)(plVar10,puVar9[1]);
    if ((uVar20 & 1) == 0) {
      lVar16 = *plVar10;
      uVar20 = (ulong)*(ushort *)(lVar16 + 0x12a);
      if (uVar20 != 0) {
        piVar21 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
        do {
          if (*(long *)(piVar21 + -2) == *(long *)puVar3) {
            puVar9 = (undefined8 *)(lVar16 + (long)(*piVar21 + 4) * 0x10 + 0x138);
            goto LAB_01ffd00c;
          }
          uVar20 = uVar20 - 1;
          piVar21 = piVar21 + 4;
        } while (uVar20 != 0);
      }
      puVar9 = (undefined8 *)FUN_00d59724(plVar10,*(long *)puVar3,4);
LAB_01ffd00c:
      (*(code *)*puVar9)(plVar10,puVar9[1]);
      plVar15 = (long *)Unity_Burst_Intrinsics_Arm_Neon__vcvt_n_f64_u64(lVar17);
      if (plVar15 != (long *)0x0) {
        lVar17 = *plVar15;
        uVar20 = (ulong)*(ushort *)(lVar17 + 0x12a);
        if (uVar20 != 0) {
          piVar21 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
          do {
            if (*(long *)(piVar21 + -2) == *plVar12) {
              puVar9 = (undefined8 *)(lVar17 + (long)*piVar21 * 0x10 + 0x138);
              goto LAB_01ffd074;
            }
            uVar20 = uVar20 - 1;
            piVar21 = piVar21 + 4;
          } while (uVar20 != 0);
        }
        puVar9 = (undefined8 *)FUN_00d59724(plVar15,*plVar12,0);
LAB_01ffd074:
        plVar12 = (long *)(*(code *)*puVar9)(plVar15,puVar9[1]);
        puVar2 = Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__;
        if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        do {
          lVar16 = *plVar12;
          lVar17 = *(long *)puVar2;
          uVar20 = (ulong)*(ushort *)(lVar16 + 0x12a);
          if (uVar20 != 0) {
            piVar21 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
            do {
              if (*(long *)(piVar21 + -2) == lVar17) {
                puVar9 = (undefined8 *)(lVar16 + (long)*piVar21 * 0x10 + 0x138);
                goto LAB_01ffd0dc;
              }
              uVar20 = uVar20 - 1;
              piVar21 = piVar21 + 4;
            } while (uVar20 != 0);
          }
          puVar9 = (undefined8 *)FUN_00d59724(plVar12,lVar17,0);
LAB_01ffd0dc:
          uVar20 = (*(code *)*puVar9)(plVar12,puVar9[1]);
          puVar4 = StringLiteral_10310;
          if ((uVar20 & 1) == 0) goto LAB_01ffd1b0;
          lVar16 = *plVar12;
          lVar17 = *(long *)puVar2;
          uVar20 = (ulong)*(ushort *)(lVar16 + 0x12a);
          if (uVar20 != 0) {
            piVar21 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
            do {
              if (*(long *)(piVar21 + -2) == lVar17) {
                puVar9 = (undefined8 *)(lVar16 + (long)(*piVar21 + 1) * 0x10 + 0x138);
                goto LAB_01ffd13c;
              }
              uVar20 = uVar20 - 1;
              piVar21 = piVar21 + 4;
            } while (uVar20 != 0);
          }
          puVar9 = (undefined8 *)FUN_00d59724(plVar12,lVar17,1);
LAB_01ffd13c:
          uVar22 = (*(code *)*puVar9)(plVar12,puVar9[1]);
          lVar17 = *plVar10;
          uVar20 = (ulong)*(ushort *)(lVar17 + 0x12a);
          if (uVar20 != 0) {
            piVar21 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
            do {
              if (*(long *)(piVar21 + -2) == *(long *)puVar3) {
                puVar9 = (undefined8 *)(lVar17 + (long)(*piVar21 + 2) * 0x10 + 0x138);
                goto LAB_01ffd19c;
              }
              uVar20 = uVar20 - 1;
              piVar21 = piVar21 + 4;
            } while (uVar20 != 0);
          }
          puVar9 = (undefined8 *)FUN_00d59724(plVar10,*(long *)puVar3,2);
LAB_01ffd19c:
          (*(code *)*puVar9)(plVar10,uVar22,puVar9[1]);
        } while( true );
      }
      goto LAB_01ffd644;
    }
  }
  uVar22 = Unity_Burst_Intrinsics_Arm_Neon__vcvt_n_f64_u64(lVar17);
  plVar10 = (long *)thunk_FUN_00d62348(*(undefined8 *)PTR_DAT_033ee168);
  if (plVar10 == (long *)0x0) goto LAB_01ffd644;
  FUN_01743e28(plVar10,uVar22,0);
Unity_Burst_Intrinsics_Arm_Neon__vminvq_s32:
  puVar5 = Method_System_Collections_Generic_List_Enumerator<DebugInspector>_MoveNext__;
  puVar4 = System_Security_Claims_ClaimsIdentity_<get_Claims>d__51_TypeInfo;
  puVar2 = System_Xml_QueryOutputWriter_TypeInfo;
  puVar3 = System_IndexOutOfRangeException_TypeInfo;
  if ((unaff_x24 != (long *)0x0 & bVar7) == 0) {
    return plVar10;
  }
  if (in_stack_00000018 == 2) {
    if (plVar10 == (long *)0x0) goto LAB_01ffd644;
    lVar17 = *plVar10;
    uVar20 = (ulong)*(ushort *)(lVar17 + 0x12a);
    if (uVar20 != 0) {
      piVar21 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
      do {
        if (*(long *)(piVar21 + -2) ==
            *(long *)System_Security_Claims_ClaimsIdentity_<get_Claims>d__51_TypeInfo) {
          puVar9 = (undefined8 *)(lVar17 + (long)(*piVar21 + 1) * 0x10 + 0x138);
          goto LAB_01ffd30c;
        }
        uVar20 = uVar20 - 1;
        piVar21 = piVar21 + 4;
      } while (uVar20 != 0);
    }
    puVar9 = (undefined8 *)
             FUN_00d59724(plVar10,*(long *)
                                   System_Security_Claims_ClaimsIdentity_<get_Claims>d__51_TypeInfo,
                          1);
LAB_01ffd30c:
    uVar8 = (*(code *)*puVar9)(plVar10,puVar9[1]);
    uVar22 = FUN_00da4fb8(*(undefined8 *)puVar3,uVar8);
    lVar17 = *plVar10;
    uVar20 = (ulong)*(ushort *)(lVar17 + 0x12a);
    if (uVar20 != 0) {
      piVar21 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
      do {
        if (*(long *)(piVar21 + -2) == *(long *)puVar4) {
          puVar9 = (undefined8 *)(lVar17 + (long)*piVar21 * 0x10 + 0x138);
          goto LAB_01ffd378;
        }
        uVar20 = uVar20 - 1;
        piVar21 = piVar21 + 4;
      } while (uVar20 != 0);
    }
    puVar9 = (undefined8 *)FUN_00d59724(plVar10,*(long *)puVar4,0);
LAB_01ffd378:
    (*(code *)*puVar9)(plVar10,uVar22,0,puVar9[1]);
    lVar17 = thunk_FUN_00d62348(*(undefined8 *)System_Data_SqlTypes_SqlByte___TypeInfo);
    if (lVar17 == 0) goto LAB_01ffd644;
    FUN_01fd8fec(lVar17,uVar22,1,0);
  }
  else if (in_stack_00000018 == 1) {
    if (plVar10 == (long *)0x0) goto LAB_01ffd644;
    lVar17 = *plVar10;
    uVar20 = (ulong)*(ushort *)(lVar17 + 0x12a);
    if (uVar20 != 0) {
      piVar21 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
      do {
        if (*(long *)(piVar21 + -2) ==
            *(long *)System_Security_Claims_ClaimsIdentity_<get_Claims>d__51_TypeInfo) {
          puVar9 = (undefined8 *)(lVar17 + (long)(*piVar21 + 1) * 0x10 + 0x138);
          goto LAB_01ffd250;
        }
        uVar20 = uVar20 - 1;
        piVar21 = piVar21 + 4;
      } while (uVar20 != 0);
    }
    puVar9 = (undefined8 *)
             FUN_00d59724(plVar10,*(long *)
                                   System_Security_Claims_ClaimsIdentity_<get_Claims>d__51_TypeInfo,
                          1);
LAB_01ffd250:
    uVar8 = (*(code *)*puVar9)(plVar10,puVar9[1]);
    uVar22 = FUN_00da4fb8(*(undefined8 *)puVar5,uVar8);
    lVar17 = *plVar10;
    uVar20 = (ulong)*(ushort *)(lVar17 + 0x12a);
    if (uVar20 != 0) {
      piVar21 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
      do {
        if (*(long *)(piVar21 + -2) == *(long *)puVar4) {
          puVar9 = (undefined8 *)(lVar17 + (long)*piVar21 * 0x10 + 0x138);
          goto LAB_01ffd2bc;
        }
        uVar20 = uVar20 - 1;
        piVar21 = piVar21 + 4;
      } while (uVar20 != 0);
    }
    puVar9 = (undefined8 *)FUN_00d59724(plVar10,*(long *)puVar4,0);
LAB_01ffd2bc:
    (*(code *)*puVar9)(plVar10,uVar22,0,puVar9[1]);
    lVar17 = thunk_FUN_00d62348(*(undefined8 *)StringLiteral_3724);
    if (lVar17 == 0) goto LAB_01ffd644;
    FUN_01fdf08c(lVar17,uVar22,1,0);
  }
  else if (in_stack_00000018 == 0) {
    if (plVar10 == (long *)0x0) goto LAB_01ffd644;
    lVar17 = *plVar10;
    uVar20 = (ulong)*(ushort *)(lVar17 + 0x12a);
    if (uVar20 != 0) {
      piVar21 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
      do {
        if (*(long *)(piVar21 + -2) ==
            *(long *)System_Security_Claims_ClaimsIdentity_<get_Claims>d__51_TypeInfo) {
          puVar9 = (undefined8 *)(lVar17 + (long)(*piVar21 + 1) * 0x10 + 0x138);
          goto LAB_01ffd3c8;
        }
        uVar20 = uVar20 - 1;
        piVar21 = piVar21 + 4;
      } while (uVar20 != 0);
    }
    puVar9 = (undefined8 *)
             FUN_00d59724(plVar10,*(long *)
                                   System_Security_Claims_ClaimsIdentity_<get_Claims>d__51_TypeInfo,
                          1);
LAB_01ffd3c8:
    uVar8 = (*(code *)*puVar9)(plVar10,puVar9[1]);
    uVar22 = FUN_00da4fb8(*(undefined8 *)puVar2,uVar8);
    lVar17 = *plVar10;
    uVar20 = (ulong)*(ushort *)(lVar17 + 0x12a);
    if (uVar20 != 0) {
      piVar21 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
      do {
        if (*(long *)(piVar21 + -2) == *(long *)puVar4) {
          puVar9 = (undefined8 *)(lVar17 + (long)*piVar21 * 0x10 + 0x138);
          goto LAB_01ffd434;
        }
        uVar20 = uVar20 - 1;
        piVar21 = piVar21 + 4;
      } while (uVar20 != 0);
    }
    puVar9 = (undefined8 *)FUN_00d59724(plVar10,*(long *)puVar4,0);
LAB_01ffd434:
    (*(code *)*puVar9)(plVar10,uVar22,0,puVar9[1]);
    lVar17 = thunk_FUN_00d62348(*(undefined8 *)
                                 Method_System_Runtime_Serialization_Formatters_Binary_BinaryAssemblyInfo_GetAssembly__
                               );
    if (lVar17 == 0) goto LAB_01ffd644;
    FUN_020cc648(lVar17,uVar22,0);
  }
  else {
    lVar17 = 0;
  }
  lVar16 = thunk_FUN_00d62348(*(undefined8 *)
                               UnityEngine_XR_Interaction_Toolkit_Utilities_Tweenables_SmartTweenableVariables_SmartFollowVector3TweenableVariable_IsNewTargetWithinThreshold_000009DC_BurstDirectCall_TypeInfo
                             );
  if (lVar16 != 0) {
    FUN_017b46ec(lVar16,0);
    *(long **)(lVar16 + 0x10) = plVar11;
    *(long *)(lVar16 + 0x18) = lVar17;
    lVar17 = *(long *)puVar6;
    if (*(int *)(lVar17 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      lVar17 = *(long *)puVar6;
    }
    lVar17 = *(long *)(*(long *)(lVar17 + 0xb8) + 0x40);
    if (lVar17 != 0) {
      if (in_stack_00000018 < *(uint *)(lVar17 + 0x18)) {
        lVar17 = lVar17 + (long)(int)in_stack_00000018 * 0x10;
        in_stack_00000030 = *(undefined8 *)(lVar17 + 0x20);
        in_stack_00000038 = *(undefined8 *)(lVar17 + 0x28);
        uVar22 = thunk_FUN_00d61fa0(*(undefined8 *)
                                     UnityEngine_Rendering_Universal_LibTessDotNet_Tess_ActiveRegion_TypeInfo
                                    ,&stack0x00000030);
        lVar17 = *unaff_x24;
        uVar20 = (ulong)*(ushort *)(lVar17 + 0x12a);
        if (uVar20 != 0) {
          piVar21 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
          do {
            if (*(long *)(piVar21 + -2) ==
                *(long *)System_Globalization_DateTimeFormatInfoScanner_TypeInfo) {
              puVar9 = (undefined8 *)(lVar17 + (long)(*piVar21 + 1) * 0x10 + 0x138);
              goto LAB_01ffd544;
            }
            uVar20 = uVar20 - 1;
            piVar21 = piVar21 + 4;
          } while (uVar20 != 0);
        }
        puVar9 = (undefined8 *)
                 FUN_00d59724(unaff_x24,
                              *(long *)System_Globalization_DateTimeFormatInfoScanner_TypeInfo,1);
LAB_01ffd544:
        (*(code *)*puVar9)(unaff_x24,uVar22,lVar16,puVar9[1]);
        lVar17 = *(long *)(*(long *)(*(long *)puVar6 + 0xb8) + 0x48);
        if (lVar17 == 0) goto LAB_01ffd644;
        if (in_stack_00000018 < *(uint *)(lVar17 + 0x18)) {
          lVar17 = lVar17 + (long)(int)in_stack_00000018 * 0x10;
          in_stack_00000020 = *(undefined8 *)(lVar17 + 0x20);
          in_stack_00000028 = *(undefined8 *)(lVar17 + 0x28);
          uVar22 = thunk_FUN_00d61fa0(*(undefined8 *)
                                       UnityEngine_Rendering_Universal_LibTessDotNet_Tess_ActiveRegion_TypeInfo
                                      ,&stack0x00000020);
          lVar17 = *unaff_x24;
          uVar20 = (ulong)*(ushort *)(lVar17 + 0x12a);
          if (uVar20 != 0) {
            piVar21 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
            do {
              if (*(long *)(piVar21 + -2) ==
                  *(long *)System_Globalization_DateTimeFormatInfoScanner_TypeInfo) {
                puVar9 = (undefined8 *)(lVar17 + (long)(*piVar21 + 10) * 0x10 + 0x138);
                goto LAB_01ffd5f0;
              }
              uVar20 = uVar20 - 1;
              piVar21 = piVar21 + 4;
            } while (uVar20 != 0);
          }
          puVar9 = (undefined8 *)
                   FUN_00d59724(unaff_x24,
                                *(long *)System_Globalization_DateTimeFormatInfoScanner_TypeInfo,10)
          ;
LAB_01ffd5f0:
          (*(code *)*puVar9)(unaff_x24,uVar22,puVar9[1]);
          return plVar10;
        }
      }
LAB_01ffd64c:
                    /* WARNING: Subroutine does not return */
      FUN_00da5194();
    }
  }
LAB_01ffd644:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


