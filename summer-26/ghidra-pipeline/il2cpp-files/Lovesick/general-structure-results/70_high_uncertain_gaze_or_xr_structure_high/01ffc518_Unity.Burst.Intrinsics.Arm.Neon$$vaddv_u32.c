/*
FUNCTION_NAME: Unity.Burst.Intrinsics.Arm.Neon$$vaddv_u32
ENTRY_POINT: 01ffc518
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

long * Unity_Burst_Intrinsics_Arm_Neon__vaddv_u32(code *param_1)

{
  ushort uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  byte bVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  long *plVar10;
  undefined8 *puVar11;
  long *plVar12;
  long *plVar13;
  undefined8 uVar14;
  long *plVar15;
  long *plVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  int iVar20;
  ulong uVar21;
  int *piVar22;
  uint unaff_w20;
  long *unaff_x24;
  long *unaff_x25;
  undefined8 *unaff_x26;
  uint in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  
  uVar9 = (*param_1)();
  plVar10 = (long *)thunk_FUN_00d6225c(uVar9,*unaff_x26);
  puVar6 = Method_System_Nullable<OVRPlugin_Result>__ctor__;
  puVar3 = System_Xml_Schema_Datatype_NOTATION_TypeInfo;
  if (unaff_x25 == (long *)0x0) {
LAB_01ffc550:
    plVar15 = (long *)0x0;
  }
  else {
    bVar7 = *(byte *)(*(long *)PTR_DAT_033ee168 + 300);
    if (*(byte *)(*unaff_x25 + 300) < bVar7) goto LAB_01ffc550;
    plVar15 = unaff_x25;
    if (*(long *)(*(long *)(*unaff_x25 + 200) + (ulong)bVar7 * 8 + -8) != *(long *)PTR_DAT_033ee168)
    {
      plVar15 = (long *)0x0;
    }
  }
  if (plVar10 == (long *)0x0) {
    return unaff_x25;
  }
  if (unaff_x24 != (long *)0x0) {
    if (plVar15 != (long *)0x0) {
      lVar18 = *plVar15;
      uVar21 = (ulong)*(ushort *)(lVar18 + 0x12a);
      if (uVar21 != 0) {
        piVar22 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
        do {
          if (*(long *)(piVar22 + -2) == *(long *)System_Xml_Schema_Datatype_NOTATION_TypeInfo) {
            puVar11 = (undefined8 *)(lVar18 + (long)(*piVar22 + 5) * 0x10 + 0x138);
            goto LAB_01ffc5e8;
          }
          uVar21 = uVar21 - 1;
          piVar22 = piVar22 + 4;
        } while (uVar21 != 0);
      }
      puVar11 = (undefined8 *)
                FUN_00d59724(plVar15,*(long *)System_Xml_Schema_Datatype_NOTATION_TypeInfo,5);
LAB_01ffc5e8:
      uVar21 = (*(code *)*puVar11)(plVar15,puVar11[1]);
      if ((uVar21 & 1) == 0) goto LAB_01ffc6e4;
    }
    lVar18 = *(long *)puVar6;
    if (*(int *)(lVar18 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      lVar18 = *(long *)puVar6;
    }
    lVar18 = *(long *)(*(long *)(lVar18 + 0xb8) + 0x40);
    if (lVar18 == 0) goto LAB_01ffd644;
    if (*(uint *)(lVar18 + 0x18) <= unaff_w20) goto LAB_01ffd64c;
    lVar18 = lVar18 + (long)(int)unaff_w20 * 0x10;
    in_stack_00000030 = *(undefined8 *)(lVar18 + 0x20);
    in_stack_00000038 = *(undefined8 *)(lVar18 + 0x28);
    uVar9 = thunk_FUN_00d61fa0(*(undefined8 *)
                                UnityEngine_Rendering_Universal_LibTessDotNet_Tess_ActiveRegion_TypeInfo
                               ,&stack0x00000030);
    lVar18 = *unaff_x24;
    uVar21 = (ulong)*(ushort *)(lVar18 + 0x12a);
    if (uVar21 != 0) {
      piVar22 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
      do {
        if (*(long *)(piVar22 + -2) ==
            *(long *)System_Globalization_DateTimeFormatInfoScanner_TypeInfo) {
          puVar11 = (undefined8 *)(lVar18 + (long)*piVar22 * 0x10 + 0x138);
          goto LAB_01ffc6a8;
        }
        uVar21 = uVar21 - 1;
        piVar22 = piVar22 + 4;
      } while (uVar21 != 0);
    }
    puVar11 = (undefined8 *)
              FUN_00d59724(unaff_x24,
                           *(long *)System_Globalization_DateTimeFormatInfoScanner_TypeInfo,0);
LAB_01ffc6a8:
    plVar12 = (long *)(*(code *)*puVar11)(unaff_x24,uVar9,puVar11[1]);
    if (((plVar12 != (long *)0x0) &&
        (*plVar12 ==
         *(long *)
          UnityEngine_XR_Interaction_Toolkit_Utilities_Tweenables_SmartTweenableVariables_SmartFollowVector3TweenableVariable_IsNewTargetWithinThreshold_000009DC_BurstDirectCall_TypeInfo
        )) && ((long *)plVar12[2] == plVar10)) {
      return (long *)plVar12[3];
    }
  }
LAB_01ffc6e4:
  puVar2 = Method_UnityEngine_UI_Dropdown_SetAlpha__;
  if (unaff_x25 == (long *)0x0) goto LAB_01ffd644;
  lVar18 = *unaff_x25;
  uVar21 = (ulong)*(ushort *)(lVar18 + 0x12a);
  if (uVar21 != 0) {
    piVar22 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
    do {
      if (*(long *)(piVar22 + -2) ==
          *(long *)System_Security_Claims_ClaimsIdentity_<get_Claims>d__51_TypeInfo) {
        puVar11 = (undefined8 *)(lVar18 + (long)(*piVar22 + 1) * 0x10 + 0x138);
        goto LAB_01ffc748;
      }
      uVar21 = uVar21 - 1;
      piVar22 = piVar22 + 4;
    } while (uVar21 != 0);
  }
  puVar11 = (undefined8 *)FUN_00d59724();
LAB_01ffc748:
  uVar8 = (*(code *)*puVar11)();
  lVar18 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
  plVar12 = (long *)Method_UnityEngine_UIElements_UIR_Page_DataSet<Vertex>_Dispose__;
  if (lVar18 == 0) goto LAB_01ffd644;
  FUN_017b46ec(lVar18,0);
  *(undefined4 *)(lVar18 + 0x20) = uVar8;
  *(undefined8 *)(lVar18 + 0x28) = 0;
  if (unaff_w20 == 0) {
    lVar17 = *unaff_x25;
    uVar21 = (ulong)*(ushort *)(lVar17 + 0x12a);
    if (uVar21 != 0) {
      piVar22 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
      do {
        if (*(long *)(piVar22 + -2) == *plVar12) {
          puVar11 = (undefined8 *)(lVar17 + (long)*piVar22 * 0x10 + 0x138);
          goto LAB_01ffc82c;
        }
        uVar21 = uVar21 - 1;
        piVar22 = piVar22 + 4;
      } while (uVar21 != 0);
    }
    puVar11 = (undefined8 *)FUN_00d59724();
LAB_01ffc82c:
    plVar16 = (long *)(*(code *)*puVar11)();
    puVar4 = Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__;
    puVar2 = Mono_Security_Cryptography_PKCS1_TypeInfo;
    if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    do {
      lVar19 = *plVar16;
      lVar17 = *(long *)puVar4;
      uVar21 = (ulong)*(ushort *)(lVar19 + 0x12a);
      if (uVar21 != 0) {
        piVar22 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
        do {
          if (*(long *)(piVar22 + -2) == lVar17) {
            puVar11 = (undefined8 *)(lVar19 + (long)*piVar22 * 0x10 + 0x138);
            goto LAB_01ffc89c;
          }
          uVar21 = uVar21 - 1;
          piVar22 = piVar22 + 4;
        } while (uVar21 != 0);
      }
      puVar11 = (undefined8 *)FUN_00d59724(plVar16,lVar17,0);
LAB_01ffc89c:
      uVar21 = (*(code *)*puVar11)(plVar16,puVar11[1]);
      if ((uVar21 & 1) == 0) {
        plVar16 = (long *)thunk_FUN_00d6225c(plVar16,*(undefined8 *)StringLiteral_10310);
        if (plVar16 == (long *)0x0) goto LAB_01ffcc84;
        lVar17 = *plVar16;
        uVar21 = (ulong)*(ushort *)(lVar17 + 0x12a);
        if (uVar21 == 0) goto LAB_01ffc9bc;
        piVar22 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
        goto LAB_01ffc9a4;
      }
      lVar19 = *plVar16;
      lVar17 = *(long *)puVar4;
      uVar21 = (ulong)*(ushort *)(lVar19 + 0x12a);
      if (uVar21 != 0) {
        piVar22 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
        do {
          if (*(long *)(piVar22 + -2) == lVar17) {
            puVar11 = (undefined8 *)(lVar19 + (long)(*piVar22 + 1) * 0x10 + 0x138);
            goto LAB_01ffc8fc;
          }
          uVar21 = uVar21 - 1;
          piVar22 = piVar22 + 4;
        } while (uVar21 != 0);
      }
      puVar11 = (undefined8 *)FUN_00d59724(plVar16,lVar17,1);
LAB_01ffc8fc:
      plVar13 = (long *)(*(code *)*puVar11)(plVar16,puVar11[1]);
      if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      lVar17 = *plVar13;
      bVar7 = *(byte *)(*(long *)puVar2 + 300);
      if ((*(byte *)(lVar17 + 300) < bVar7) ||
         (*(long *)(*(long *)(lVar17 + 200) + (ulong)bVar7 * 8 + -8) != *(long *)puVar2)) {
                    /* WARNING: Subroutine does not return */
        FUN_00da544c(plVar13);
      }
      uVar9 = (**(code **)(lVar17 + 0x178))(plVar13,*(undefined8 *)(lVar17 + 0x180));
      FUN_01ff65e4(lVar18,uVar9,plVar13);
    } while( true );
  }
  if (unaff_w20 - 1 < 2) {
    lVar17 = *unaff_x25;
    uVar21 = (ulong)*(ushort *)(lVar17 + 0x12a);
    if (uVar21 != 0) {
      piVar22 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
      do {
        if (*(long *)(piVar22 + -2) == *plVar12) {
          puVar11 = (undefined8 *)(lVar17 + (long)*piVar22 * 0x10 + 0x138);
          goto Unity_Burst_Intrinsics_Arm_Neon__vmaxvq_s8;
        }
        uVar21 = uVar21 - 1;
        piVar22 = piVar22 + 4;
      } while (uVar21 != 0);
    }
    puVar11 = (undefined8 *)FUN_00d59724();
Unity_Burst_Intrinsics_Arm_Neon__vmaxvq_s8:
    plVar12 = (long *)(*(code *)*puVar11)();
    puVar4 = Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__;
    puVar2 = System_Collections_Generic_ICollection<CorrelationID>_TypeInfo;
    if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    do {
      lVar19 = *plVar12;
      lVar17 = *(long *)puVar4;
      uVar21 = (ulong)*(ushort *)(lVar19 + 0x12a);
      if (uVar21 != 0) {
        piVar22 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
        do {
          if (*(long *)(piVar22 + -2) == lVar17) {
            puVar11 = (undefined8 *)(lVar19 + (long)*piVar22 * 0x10 + 0x138);
            goto LAB_01ffca48;
          }
          uVar21 = uVar21 - 1;
          piVar22 = piVar22 + 4;
        } while (uVar21 != 0);
      }
      puVar11 = (undefined8 *)FUN_00d59724(plVar12,lVar17,0);
LAB_01ffca48:
      uVar21 = (*(code *)*puVar11)(plVar12,puVar11[1]);
      if ((uVar21 & 1) == 0) {
        plVar12 = (long *)thunk_FUN_00d6225c(plVar12,*(undefined8 *)StringLiteral_10310);
        if (plVar12 == (long *)0x0) goto LAB_01ffcd24;
        lVar17 = *plVar12;
        uVar21 = (ulong)*(ushort *)(lVar17 + 0x12a);
        if (uVar21 == 0) goto LAB_01ffcc5c;
        piVar22 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
        goto LAB_01ffcc44;
      }
      lVar19 = *plVar12;
      lVar17 = *(long *)puVar4;
      uVar21 = (ulong)*(ushort *)(lVar19 + 0x12a);
      if (uVar21 != 0) {
        piVar22 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
        do {
          if (*(long *)(piVar22 + -2) == lVar17) {
            puVar11 = (undefined8 *)(lVar19 + (long)(*piVar22 + 1) * 0x10 + 0x138);
            goto LAB_01ffcaa8;
          }
          uVar21 = uVar21 - 1;
          piVar22 = piVar22 + 4;
        } while (uVar21 != 0);
      }
      puVar11 = (undefined8 *)FUN_00d59724(plVar12,lVar17,1);
LAB_01ffcaa8:
      plVar16 = (long *)(*(code *)*puVar11)(plVar12,puVar11[1]);
      if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      lVar17 = *(long *)puVar2;
      bVar7 = *(byte *)(lVar17 + 300);
      if ((*(byte *)(*plVar16 + 300) < bVar7) ||
         (*(long *)(*(long *)(*plVar16 + 200) + (ulong)bVar7 * 8 + -8) != lVar17)) {
                    /* WARNING: Subroutine does not return */
        FUN_00da544c(plVar16);
      }
      uVar9 = (**(code **)(*plVar16 + 0x1a8))(plVar16,*(undefined8 *)(*plVar16 + 0x1b0));
      uVar21 = FUN_01ff65b8(lVar18,uVar9);
      if ((uVar21 & 1) == 0) {
        FUN_01ff65e4(lVar18,uVar9,plVar16);
      }
      else {
        if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        lVar17 = FUN_01ffef2c(plVar16);
        if (lVar17 != 0) {
          uVar14 = FUN_015f5b28(uVar9,lVar17,0);
          FUN_01ff65e4(lVar18,uVar14,plVar16);
        }
        plVar16 = (long *)FUN_01fffe10(lVar18,uVar9);
        if (plVar16 != (long *)0x0) {
          lVar17 = *(long *)puVar2;
          bVar7 = *(byte *)(lVar17 + 300);
          if ((*(byte *)(*plVar16 + 300) < bVar7) ||
             (*(long *)(*(long *)(*plVar16 + 200) + (ulong)bVar7 * 8 + -8) != lVar17)) {
                    /* WARNING: Subroutine does not return */
            FUN_00da544c(plVar16);
          }
        }
        if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        lVar17 = FUN_01ffef2c(plVar16);
        if (lVar17 != 0) {
          FUN_01fffe3c(lVar18,uVar9);
          if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          uVar9 = (**(code **)(*plVar16 + 0x1a8))(plVar16,*(undefined8 *)(*plVar16 + 0x1b0));
          uVar9 = FUN_015f5b28(uVar9,lVar17,0);
          FUN_01ff65e4(lVar18,uVar9,plVar16);
        }
      }
    } while( true );
  }
  bVar7 = 0;
  goto joined_r0x01ffce00;
  while( true ) {
    uVar21 = uVar21 - 1;
    piVar22 = piVar22 + 4;
    if (uVar21 == 0) break;
LAB_01ffc9a4:
    if (*(long *)(piVar22 + -2) == *(long *)StringLiteral_10310) {
      puVar11 = (undefined8 *)(lVar17 + (long)*piVar22 * 0x10 + 0x138);
      goto LAB_01ffcc78;
    }
  }
LAB_01ffc9bc:
  puVar11 = (undefined8 *)FUN_00d59724(plVar16,*(long *)StringLiteral_10310,0);
LAB_01ffcc78:
  (*(code *)*puVar11)(plVar16,puVar11[1]);
LAB_01ffcc84:
  lVar17 = *plVar10;
  uVar21 = (ulong)*(ushort *)(lVar17 + 0x12a);
  if (uVar21 != 0) {
    piVar22 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
    do {
      if (*(long *)(piVar22 + -2) == *(long *)Method_Unity_Burst_SharedStatic_CheckResult__) {
        puVar11 = (undefined8 *)(lVar17 + (long)*piVar22 * 0x10 + 0x138);
        goto LAB_01ffccf4;
      }
      uVar21 = uVar21 - 1;
      piVar22 = piVar22 + 4;
    } while (uVar21 != 0);
  }
  puVar11 = (undefined8 *)
            FUN_00d59724(plVar10,*(long *)Method_Unity_Burst_SharedStatic_CheckResult__,0);
LAB_01ffccf4:
  bVar7 = (*(code *)*puVar11)(plVar10);
  unaff_w20 = in_stack_00000018;
  goto joined_r0x01ffce00;
code_r0x01ffcd6c:
  uVar21 = uVar21 - 1;
  piVar22 = piVar22 + 4;
  if (uVar21 == 0) goto LAB_01ffcd78;
  goto LAB_01ffcd60;
LAB_01ffd1b0:
  plVar12 = (long *)thunk_FUN_00d6225c(plVar12,*(undefined8 *)StringLiteral_10310);
  if (plVar12 != (long *)0x0) {
    lVar18 = *plVar12;
    uVar21 = (ulong)*(ushort *)(lVar18 + 0x12a);
    if (uVar21 != 0) {
      piVar22 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
      do {
        if (*(long *)(piVar22 + -2) == *(long *)puVar4) {
          puVar11 = (undefined8 *)(lVar18 + (long)*piVar22 * 0x10 + 0x138);
          goto LAB_01ffd220;
        }
        uVar21 = uVar21 - 1;
        piVar22 = piVar22 + 4;
      } while (uVar21 != 0);
    }
    puVar11 = (undefined8 *)FUN_00d59724(plVar12,*(long *)puVar4,0);
LAB_01ffd220:
    (*(code *)*puVar11)(plVar12,puVar11[1]);
  }
  goto Unity_Burst_Intrinsics_Arm_Neon__vminvq_s32;
  while( true ) {
    uVar21 = uVar21 - 1;
    piVar22 = piVar22 + 4;
    if (uVar21 == 0) break;
LAB_01ffcc44:
    if (*(long *)(piVar22 + -2) == *(long *)StringLiteral_10310) {
      puVar11 = (undefined8 *)(lVar17 + (long)*piVar22 * 0x10 + 0x138);
      goto Unity_Burst_Intrinsics_Arm_Neon__vmaxvq_f64;
    }
  }
LAB_01ffcc5c:
  puVar11 = (undefined8 *)FUN_00d59724(plVar12,*(long *)StringLiteral_10310,0);
Unity_Burst_Intrinsics_Arm_Neon__vmaxvq_f64:
  (*(code *)*puVar11)(plVar12,puVar11[1]);
LAB_01ffcd24:
  lVar19 = *plVar10;
  lVar17 = *(long *)Method_Unity_Burst_SharedStatic_CheckResult__;
  uVar1 = *(ushort *)(lVar19 + 0x12a);
  uVar21 = (ulong)uVar1;
  if (in_stack_00000018 == 1) {
    if (uVar1 != 0) {
      piVar22 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
LAB_01ffcd60:
      if (*(long *)(piVar22 + -2) != lVar17) goto code_r0x01ffcd6c;
      iVar20 = *piVar22 + 2;
LAB_01ffcdd4:
      puVar11 = (undefined8 *)(lVar19 + (long)iVar20 * 0x10 + 0x138);
      goto LAB_01ffcde0;
    }
LAB_01ffcd78:
    uVar9 = 2;
  }
  else {
    if (uVar1 != 0) {
      piVar22 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
      do {
        if (*(long *)(piVar22 + -2) == lVar17) {
          iVar20 = *piVar22 + 1;
          goto LAB_01ffcdd4;
        }
        uVar21 = uVar21 - 1;
        piVar22 = piVar22 + 4;
      } while (uVar21 != 0);
    }
    uVar9 = 1;
  }
  puVar11 = (undefined8 *)FUN_00d59724(plVar10,lVar17,uVar9);
LAB_01ffcde0:
  bVar7 = (*(code *)*puVar11)(plVar10);
  plVar12 = (long *)Method_UnityEngine_UIElements_UIR_Page_DataSet<Vertex>_Dispose__;
  unaff_w20 = in_stack_00000018;
joined_r0x01ffce00:
  if (plVar15 != (long *)0x0) {
    lVar17 = *plVar15;
    uVar21 = (ulong)*(ushort *)(lVar17 + 0x12a);
    if (uVar21 != 0) {
      piVar22 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
      do {
        if (*(long *)(piVar22 + -2) == *(long *)puVar3) {
          puVar11 = (undefined8 *)(lVar17 + (long)(*piVar22 + 5) * 0x10 + 0x138);
          goto LAB_01ffce54;
        }
        uVar21 = uVar21 - 1;
        piVar22 = piVar22 + 4;
      } while (uVar21 != 0);
    }
    puVar11 = (undefined8 *)FUN_00d59724(plVar15,*(long *)puVar3,5);
LAB_01ffce54:
    uVar21 = (*(code *)*puVar11)(plVar15,puVar11[1]);
    if ((uVar21 & 1) == 0) {
      lVar17 = *plVar15;
      uVar21 = (ulong)*(ushort *)(lVar17 + 0x12a);
      if (uVar21 != 0) {
        piVar22 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
        do {
          if (*(long *)(piVar22 + -2) == *(long *)puVar3) {
            puVar11 = (undefined8 *)(lVar17 + (long)(*piVar22 + 4) * 0x10 + 0x138);
            goto LAB_01ffd00c;
          }
          uVar21 = uVar21 - 1;
          piVar22 = piVar22 + 4;
        } while (uVar21 != 0);
      }
      puVar11 = (undefined8 *)FUN_00d59724(plVar15,*(long *)puVar3,4);
LAB_01ffd00c:
      (*(code *)*puVar11)(plVar15,puVar11[1]);
      plVar16 = (long *)Unity_Burst_Intrinsics_Arm_Neon__vcvt_n_f64_u64(lVar18);
      if (plVar16 != (long *)0x0) {
        lVar18 = *plVar16;
        uVar21 = (ulong)*(ushort *)(lVar18 + 0x12a);
        if (uVar21 != 0) {
          piVar22 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
          do {
            if (*(long *)(piVar22 + -2) == *plVar12) {
              puVar11 = (undefined8 *)(lVar18 + (long)*piVar22 * 0x10 + 0x138);
              goto LAB_01ffd074;
            }
            uVar21 = uVar21 - 1;
            piVar22 = piVar22 + 4;
          } while (uVar21 != 0);
        }
        puVar11 = (undefined8 *)FUN_00d59724(plVar16,*plVar12,0);
LAB_01ffd074:
        plVar12 = (long *)(*(code *)*puVar11)(plVar16,puVar11[1]);
        puVar2 = Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__;
        if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        do {
          lVar17 = *plVar12;
          lVar18 = *(long *)puVar2;
          uVar21 = (ulong)*(ushort *)(lVar17 + 0x12a);
          if (uVar21 != 0) {
            piVar22 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
            do {
              if (*(long *)(piVar22 + -2) == lVar18) {
                puVar11 = (undefined8 *)(lVar17 + (long)*piVar22 * 0x10 + 0x138);
                goto LAB_01ffd0dc;
              }
              uVar21 = uVar21 - 1;
              piVar22 = piVar22 + 4;
            } while (uVar21 != 0);
          }
          puVar11 = (undefined8 *)FUN_00d59724(plVar12,lVar18,0);
LAB_01ffd0dc:
          uVar21 = (*(code *)*puVar11)(plVar12,puVar11[1]);
          puVar4 = StringLiteral_10310;
          if ((uVar21 & 1) == 0) goto LAB_01ffd1b0;
          lVar17 = *plVar12;
          lVar18 = *(long *)puVar2;
          uVar21 = (ulong)*(ushort *)(lVar17 + 0x12a);
          if (uVar21 != 0) {
            piVar22 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
            do {
              if (*(long *)(piVar22 + -2) == lVar18) {
                puVar11 = (undefined8 *)(lVar17 + (long)(*piVar22 + 1) * 0x10 + 0x138);
                goto LAB_01ffd13c;
              }
              uVar21 = uVar21 - 1;
              piVar22 = piVar22 + 4;
            } while (uVar21 != 0);
          }
          puVar11 = (undefined8 *)FUN_00d59724(plVar12,lVar18,1);
LAB_01ffd13c:
          uVar9 = (*(code *)*puVar11)(plVar12,puVar11[1]);
          lVar18 = *plVar15;
          uVar21 = (ulong)*(ushort *)(lVar18 + 0x12a);
          if (uVar21 != 0) {
            piVar22 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
            do {
              if (*(long *)(piVar22 + -2) == *(long *)puVar3) {
                puVar11 = (undefined8 *)(lVar18 + (long)(*piVar22 + 2) * 0x10 + 0x138);
                goto LAB_01ffd19c;
              }
              uVar21 = uVar21 - 1;
              piVar22 = piVar22 + 4;
            } while (uVar21 != 0);
          }
          puVar11 = (undefined8 *)FUN_00d59724(plVar15,*(long *)puVar3,2);
LAB_01ffd19c:
          (*(code *)*puVar11)(plVar15,uVar9,puVar11[1]);
        } while( true );
      }
      goto LAB_01ffd644;
    }
  }
  uVar9 = Unity_Burst_Intrinsics_Arm_Neon__vcvt_n_f64_u64(lVar18);
  plVar15 = (long *)thunk_FUN_00d62348(*(undefined8 *)PTR_DAT_033ee168);
  if (plVar15 == (long *)0x0) goto LAB_01ffd644;
  FUN_01743e28(plVar15,uVar9,0);
Unity_Burst_Intrinsics_Arm_Neon__vminvq_s32:
  puVar5 = Method_System_Collections_Generic_List_Enumerator<DebugInspector>_MoveNext__;
  puVar4 = System_Security_Claims_ClaimsIdentity_<get_Claims>d__51_TypeInfo;
  puVar2 = System_Xml_QueryOutputWriter_TypeInfo;
  puVar3 = System_IndexOutOfRangeException_TypeInfo;
  if ((unaff_x24 != (long *)0x0 & bVar7) == 0) {
    return plVar15;
  }
  if (unaff_w20 == 2) {
    if (plVar15 == (long *)0x0) goto LAB_01ffd644;
    lVar18 = *plVar15;
    uVar21 = (ulong)*(ushort *)(lVar18 + 0x12a);
    if (uVar21 != 0) {
      piVar22 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
      do {
        if (*(long *)(piVar22 + -2) ==
            *(long *)System_Security_Claims_ClaimsIdentity_<get_Claims>d__51_TypeInfo) {
          puVar11 = (undefined8 *)(lVar18 + (long)(*piVar22 + 1) * 0x10 + 0x138);
          goto LAB_01ffd30c;
        }
        uVar21 = uVar21 - 1;
        piVar22 = piVar22 + 4;
      } while (uVar21 != 0);
    }
    puVar11 = (undefined8 *)
              FUN_00d59724(plVar15,*(long *)
                                    System_Security_Claims_ClaimsIdentity_<get_Claims>d__51_TypeInfo
                           ,1);
LAB_01ffd30c:
    uVar8 = (*(code *)*puVar11)(plVar15,puVar11[1]);
    uVar9 = FUN_00da4fb8(*(undefined8 *)puVar3,uVar8);
    lVar18 = *plVar15;
    uVar21 = (ulong)*(ushort *)(lVar18 + 0x12a);
    if (uVar21 != 0) {
      piVar22 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
      do {
        if (*(long *)(piVar22 + -2) == *(long *)puVar4) {
          puVar11 = (undefined8 *)(lVar18 + (long)*piVar22 * 0x10 + 0x138);
          goto LAB_01ffd378;
        }
        uVar21 = uVar21 - 1;
        piVar22 = piVar22 + 4;
      } while (uVar21 != 0);
    }
    puVar11 = (undefined8 *)FUN_00d59724(plVar15,*(long *)puVar4,0);
LAB_01ffd378:
    (*(code *)*puVar11)(plVar15,uVar9,0,puVar11[1]);
    lVar18 = thunk_FUN_00d62348(*(undefined8 *)System_Data_SqlTypes_SqlByte___TypeInfo);
    if (lVar18 == 0) goto LAB_01ffd644;
    FUN_01fd8fec(lVar18,uVar9,1,0);
  }
  else if (unaff_w20 == 1) {
    if (plVar15 == (long *)0x0) goto LAB_01ffd644;
    lVar18 = *plVar15;
    uVar21 = (ulong)*(ushort *)(lVar18 + 0x12a);
    if (uVar21 != 0) {
      piVar22 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
      do {
        if (*(long *)(piVar22 + -2) ==
            *(long *)System_Security_Claims_ClaimsIdentity_<get_Claims>d__51_TypeInfo) {
          puVar11 = (undefined8 *)(lVar18 + (long)(*piVar22 + 1) * 0x10 + 0x138);
          goto LAB_01ffd250;
        }
        uVar21 = uVar21 - 1;
        piVar22 = piVar22 + 4;
      } while (uVar21 != 0);
    }
    puVar11 = (undefined8 *)
              FUN_00d59724(plVar15,*(long *)
                                    System_Security_Claims_ClaimsIdentity_<get_Claims>d__51_TypeInfo
                           ,1);
LAB_01ffd250:
    uVar8 = (*(code *)*puVar11)(plVar15,puVar11[1]);
    uVar9 = FUN_00da4fb8(*(undefined8 *)puVar5,uVar8);
    lVar18 = *plVar15;
    uVar21 = (ulong)*(ushort *)(lVar18 + 0x12a);
    if (uVar21 != 0) {
      piVar22 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
      do {
        if (*(long *)(piVar22 + -2) == *(long *)puVar4) {
          puVar11 = (undefined8 *)(lVar18 + (long)*piVar22 * 0x10 + 0x138);
          goto LAB_01ffd2bc;
        }
        uVar21 = uVar21 - 1;
        piVar22 = piVar22 + 4;
      } while (uVar21 != 0);
    }
    puVar11 = (undefined8 *)FUN_00d59724(plVar15,*(long *)puVar4,0);
LAB_01ffd2bc:
    (*(code *)*puVar11)(plVar15,uVar9,0,puVar11[1]);
    lVar18 = thunk_FUN_00d62348(*(undefined8 *)StringLiteral_3724);
    if (lVar18 == 0) goto LAB_01ffd644;
    FUN_01fdf08c(lVar18,uVar9,1,0);
  }
  else if (unaff_w20 == 0) {
    if (plVar15 == (long *)0x0) goto LAB_01ffd644;
    lVar18 = *plVar15;
    uVar21 = (ulong)*(ushort *)(lVar18 + 0x12a);
    if (uVar21 != 0) {
      piVar22 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
      do {
        if (*(long *)(piVar22 + -2) ==
            *(long *)System_Security_Claims_ClaimsIdentity_<get_Claims>d__51_TypeInfo) {
          puVar11 = (undefined8 *)(lVar18 + (long)(*piVar22 + 1) * 0x10 + 0x138);
          goto LAB_01ffd3c8;
        }
        uVar21 = uVar21 - 1;
        piVar22 = piVar22 + 4;
      } while (uVar21 != 0);
    }
    puVar11 = (undefined8 *)
              FUN_00d59724(plVar15,*(long *)
                                    System_Security_Claims_ClaimsIdentity_<get_Claims>d__51_TypeInfo
                           ,1);
LAB_01ffd3c8:
    uVar8 = (*(code *)*puVar11)(plVar15,puVar11[1]);
    uVar9 = FUN_00da4fb8(*(undefined8 *)puVar2,uVar8);
    lVar18 = *plVar15;
    uVar21 = (ulong)*(ushort *)(lVar18 + 0x12a);
    if (uVar21 != 0) {
      piVar22 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
      do {
        if (*(long *)(piVar22 + -2) == *(long *)puVar4) {
          puVar11 = (undefined8 *)(lVar18 + (long)*piVar22 * 0x10 + 0x138);
          goto LAB_01ffd434;
        }
        uVar21 = uVar21 - 1;
        piVar22 = piVar22 + 4;
      } while (uVar21 != 0);
    }
    puVar11 = (undefined8 *)FUN_00d59724(plVar15,*(long *)puVar4,0);
LAB_01ffd434:
    (*(code *)*puVar11)(plVar15,uVar9,0,puVar11[1]);
    lVar18 = thunk_FUN_00d62348(*(undefined8 *)
                                 Method_System_Runtime_Serialization_Formatters_Binary_BinaryAssemblyInfo_GetAssembly__
                               );
    if (lVar18 == 0) goto LAB_01ffd644;
    FUN_020cc648(lVar18,uVar9,0);
  }
  else {
    lVar18 = 0;
  }
  lVar17 = thunk_FUN_00d62348(*(undefined8 *)
                               UnityEngine_XR_Interaction_Toolkit_Utilities_Tweenables_SmartTweenableVariables_SmartFollowVector3TweenableVariable_IsNewTargetWithinThreshold_000009DC_BurstDirectCall_TypeInfo
                             );
  if (lVar17 != 0) {
    FUN_017b46ec(lVar17,0);
    *(long **)(lVar17 + 0x10) = plVar10;
    *(long *)(lVar17 + 0x18) = lVar18;
    lVar18 = *(long *)puVar6;
    if (*(int *)(lVar18 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      lVar18 = *(long *)puVar6;
    }
    lVar18 = *(long *)(*(long *)(lVar18 + 0xb8) + 0x40);
    if (lVar18 != 0) {
      if (unaff_w20 < *(uint *)(lVar18 + 0x18)) {
        lVar18 = lVar18 + (long)(int)unaff_w20 * 0x10;
        in_stack_00000030 = *(undefined8 *)(lVar18 + 0x20);
        in_stack_00000038 = *(undefined8 *)(lVar18 + 0x28);
        uVar9 = thunk_FUN_00d61fa0(*(undefined8 *)
                                    UnityEngine_Rendering_Universal_LibTessDotNet_Tess_ActiveRegion_TypeInfo
                                   ,&stack0x00000030);
        lVar18 = *unaff_x24;
        uVar21 = (ulong)*(ushort *)(lVar18 + 0x12a);
        if (uVar21 != 0) {
          piVar22 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
          do {
            if (*(long *)(piVar22 + -2) ==
                *(long *)System_Globalization_DateTimeFormatInfoScanner_TypeInfo) {
              puVar11 = (undefined8 *)(lVar18 + (long)(*piVar22 + 1) * 0x10 + 0x138);
              goto LAB_01ffd544;
            }
            uVar21 = uVar21 - 1;
            piVar22 = piVar22 + 4;
          } while (uVar21 != 0);
        }
        puVar11 = (undefined8 *)
                  FUN_00d59724(unaff_x24,
                               *(long *)System_Globalization_DateTimeFormatInfoScanner_TypeInfo,1);
LAB_01ffd544:
        (*(code *)*puVar11)(unaff_x24,uVar9,lVar17,puVar11[1]);
        lVar18 = *(long *)(*(long *)(*(long *)puVar6 + 0xb8) + 0x48);
        if (lVar18 == 0) goto LAB_01ffd644;
        if (unaff_w20 < *(uint *)(lVar18 + 0x18)) {
          lVar18 = lVar18 + (long)(int)unaff_w20 * 0x10;
          in_stack_00000020 = *(undefined8 *)(lVar18 + 0x20);
          in_stack_00000028 = *(undefined8 *)(lVar18 + 0x28);
          uVar9 = thunk_FUN_00d61fa0(*(undefined8 *)
                                      UnityEngine_Rendering_Universal_LibTessDotNet_Tess_ActiveRegion_TypeInfo
                                     ,&stack0x00000020);
          lVar18 = *unaff_x24;
          uVar21 = (ulong)*(ushort *)(lVar18 + 0x12a);
          if (uVar21 != 0) {
            piVar22 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
            do {
              if (*(long *)(piVar22 + -2) ==
                  *(long *)System_Globalization_DateTimeFormatInfoScanner_TypeInfo) {
                puVar11 = (undefined8 *)(lVar18 + (long)(*piVar22 + 10) * 0x10 + 0x138);
                goto LAB_01ffd5f0;
              }
              uVar21 = uVar21 - 1;
              piVar22 = piVar22 + 4;
            } while (uVar21 != 0);
          }
          puVar11 = (undefined8 *)
                    FUN_00d59724(unaff_x24,
                                 *(long *)System_Globalization_DateTimeFormatInfoScanner_TypeInfo,10
                                );
LAB_01ffd5f0:
          (*(code *)*puVar11)(unaff_x24,uVar9,puVar11[1]);
          return plVar15;
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


