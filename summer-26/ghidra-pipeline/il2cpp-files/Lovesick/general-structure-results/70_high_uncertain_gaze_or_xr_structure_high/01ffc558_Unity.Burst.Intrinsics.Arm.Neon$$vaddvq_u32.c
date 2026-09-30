/*
FUNCTION_NAME: Unity.Burst.Intrinsics.Arm.Neon$$vaddvq_u32
ENTRY_POINT: 01ffc558
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

long * Unity_Burst_Intrinsics_Arm_Neon__vaddvq_u32(long *param_1)

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
  undefined8 uVar10;
  long *plVar11;
  long *plVar12;
  undefined8 uVar13;
  long *plVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  int iVar18;
  ulong uVar19;
  int *piVar20;
  uint unaff_w20;
  long *unaff_x21;
  long *unaff_x24;
  long *unaff_x25;
  long *plStack0000000000000008;
  uint in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  
  puVar6 = Method_System_Nullable<OVRPlugin_Result>__ctor__;
  puVar3 = System_Xml_Schema_Datatype_NOTATION_TypeInfo;
  plStack0000000000000008 = param_1;
  if (unaff_x24 != (long *)0x0) {
    if (unaff_x21 != (long *)0x0) {
      lVar16 = *unaff_x21;
      uVar19 = (ulong)*(ushort *)(lVar16 + 0x12a);
      if (uVar19 != 0) {
        piVar20 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
        do {
          if (*(long *)(piVar20 + -2) == *(long *)System_Xml_Schema_Datatype_NOTATION_TypeInfo) {
            puVar9 = (undefined8 *)(lVar16 + (long)(*piVar20 + 5) * 0x10 + 0x138);
            goto LAB_01ffc5e8;
          }
          uVar19 = uVar19 - 1;
          piVar20 = piVar20 + 4;
        } while (uVar19 != 0);
      }
      puVar9 = (undefined8 *)FUN_00d59724();
LAB_01ffc5e8:
      uVar19 = (*(code *)*puVar9)();
      if ((uVar19 & 1) == 0) goto LAB_01ffc6e4;
    }
    lVar16 = *(long *)puVar6;
    if (*(int *)(lVar16 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      lVar16 = *(long *)puVar6;
    }
    lVar16 = *(long *)(*(long *)(lVar16 + 0xb8) + 0x40);
    if (lVar16 == 0) goto LAB_01ffd644;
    if (*(uint *)(lVar16 + 0x18) <= unaff_w20) goto LAB_01ffd64c;
    lVar16 = lVar16 + (long)(int)unaff_w20 * 0x10;
    in_stack_00000030 = *(undefined8 *)(lVar16 + 0x20);
    in_stack_00000038 = *(undefined8 *)(lVar16 + 0x28);
    uVar10 = thunk_FUN_00d61fa0(*(undefined8 *)
                                 UnityEngine_Rendering_Universal_LibTessDotNet_Tess_ActiveRegion_TypeInfo
                                ,&stack0x00000030);
    lVar16 = *unaff_x24;
    uVar19 = (ulong)*(ushort *)(lVar16 + 0x12a);
    if (uVar19 != 0) {
      piVar20 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
      do {
        if (*(long *)(piVar20 + -2) ==
            *(long *)System_Globalization_DateTimeFormatInfoScanner_TypeInfo) {
          puVar9 = (undefined8 *)(lVar16 + (long)*piVar20 * 0x10 + 0x138);
          goto LAB_01ffc6a8;
        }
        uVar19 = uVar19 - 1;
        piVar20 = piVar20 + 4;
      } while (uVar19 != 0);
    }
    puVar9 = (undefined8 *)
             FUN_00d59724(unaff_x24,*(long *)System_Globalization_DateTimeFormatInfoScanner_TypeInfo
                          ,0);
LAB_01ffc6a8:
    plVar11 = (long *)(*(code *)*puVar9)(unaff_x24,uVar10,puVar9[1]);
    if (((plVar11 != (long *)0x0) &&
        (*plVar11 ==
         *(long *)
          UnityEngine_XR_Interaction_Toolkit_Utilities_Tweenables_SmartTweenableVariables_SmartFollowVector3TweenableVariable_IsNewTargetWithinThreshold_000009DC_BurstDirectCall_TypeInfo
        )) && ((long *)plVar11[2] == plStack0000000000000008)) {
      return (long *)plVar11[3];
    }
  }
LAB_01ffc6e4:
  puVar2 = Method_UnityEngine_UI_Dropdown_SetAlpha__;
  if (unaff_x25 == (long *)0x0) goto LAB_01ffd644;
  lVar16 = *unaff_x25;
  uVar19 = (ulong)*(ushort *)(lVar16 + 0x12a);
  if (uVar19 != 0) {
    piVar20 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
    do {
      if (*(long *)(piVar20 + -2) ==
          *(long *)System_Security_Claims_ClaimsIdentity_<get_Claims>d__51_TypeInfo) {
        puVar9 = (undefined8 *)(lVar16 + (long)(*piVar20 + 1) * 0x10 + 0x138);
        goto LAB_01ffc748;
      }
      uVar19 = uVar19 - 1;
      piVar20 = piVar20 + 4;
    } while (uVar19 != 0);
  }
  puVar9 = (undefined8 *)FUN_00d59724();
LAB_01ffc748:
  uVar8 = (*(code *)*puVar9)();
  lVar16 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
  plVar11 = (long *)Method_UnityEngine_UIElements_UIR_Page_DataSet<Vertex>_Dispose__;
  if (lVar16 == 0) goto LAB_01ffd644;
  FUN_017b46ec(lVar16,0);
  *(undefined4 *)(lVar16 + 0x20) = uVar8;
  *(undefined8 *)(lVar16 + 0x28) = 0;
  if (unaff_w20 == 0) {
    lVar15 = *unaff_x25;
    uVar19 = (ulong)*(ushort *)(lVar15 + 0x12a);
    if (uVar19 != 0) {
      piVar20 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      do {
        if (*(long *)(piVar20 + -2) == *plVar11) {
          puVar9 = (undefined8 *)(lVar15 + (long)*piVar20 * 0x10 + 0x138);
          goto LAB_01ffc82c;
        }
        uVar19 = uVar19 - 1;
        piVar20 = piVar20 + 4;
      } while (uVar19 != 0);
    }
    puVar9 = (undefined8 *)FUN_00d59724();
LAB_01ffc82c:
    plVar14 = (long *)(*(code *)*puVar9)();
    puVar4 = Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__;
    puVar2 = Mono_Security_Cryptography_PKCS1_TypeInfo;
    if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    do {
      lVar17 = *plVar14;
      lVar15 = *(long *)puVar4;
      uVar19 = (ulong)*(ushort *)(lVar17 + 0x12a);
      if (uVar19 != 0) {
        piVar20 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
        do {
          if (*(long *)(piVar20 + -2) == lVar15) {
            puVar9 = (undefined8 *)(lVar17 + (long)*piVar20 * 0x10 + 0x138);
            goto LAB_01ffc89c;
          }
          uVar19 = uVar19 - 1;
          piVar20 = piVar20 + 4;
        } while (uVar19 != 0);
      }
      puVar9 = (undefined8 *)FUN_00d59724(plVar14,lVar15,0);
LAB_01ffc89c:
      uVar19 = (*(code *)*puVar9)(plVar14,puVar9[1]);
      if ((uVar19 & 1) == 0) {
        plVar14 = (long *)thunk_FUN_00d6225c(plVar14,*(undefined8 *)StringLiteral_10310);
        if (plVar14 == (long *)0x0) goto LAB_01ffcc84;
        lVar15 = *plVar14;
        uVar19 = (ulong)*(ushort *)(lVar15 + 0x12a);
        if (uVar19 == 0) goto LAB_01ffc9bc;
        piVar20 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        goto LAB_01ffc9a4;
      }
      lVar17 = *plVar14;
      lVar15 = *(long *)puVar4;
      uVar19 = (ulong)*(ushort *)(lVar17 + 0x12a);
      if (uVar19 != 0) {
        piVar20 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
        do {
          if (*(long *)(piVar20 + -2) == lVar15) {
            puVar9 = (undefined8 *)(lVar17 + (long)(*piVar20 + 1) * 0x10 + 0x138);
            goto LAB_01ffc8fc;
          }
          uVar19 = uVar19 - 1;
          piVar20 = piVar20 + 4;
        } while (uVar19 != 0);
      }
      puVar9 = (undefined8 *)FUN_00d59724(plVar14,lVar15,1);
LAB_01ffc8fc:
      plVar12 = (long *)(*(code *)*puVar9)(plVar14,puVar9[1]);
      if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      lVar15 = *plVar12;
      bVar7 = *(byte *)(*(long *)puVar2 + 300);
      if ((*(byte *)(lVar15 + 300) < bVar7) ||
         (*(long *)(*(long *)(lVar15 + 200) + (ulong)bVar7 * 8 + -8) != *(long *)puVar2)) {
                    /* WARNING: Subroutine does not return */
        FUN_00da544c(plVar12);
      }
      uVar10 = (**(code **)(lVar15 + 0x178))(plVar12,*(undefined8 *)(lVar15 + 0x180));
      FUN_01ff65e4(lVar16,uVar10,plVar12);
    } while( true );
  }
  if (unaff_w20 - 1 < 2) {
    lVar15 = *unaff_x25;
    uVar19 = (ulong)*(ushort *)(lVar15 + 0x12a);
    if (uVar19 != 0) {
      piVar20 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      do {
        if (*(long *)(piVar20 + -2) == *plVar11) {
          puVar9 = (undefined8 *)(lVar15 + (long)*piVar20 * 0x10 + 0x138);
          goto Unity_Burst_Intrinsics_Arm_Neon__vmaxvq_s8;
        }
        uVar19 = uVar19 - 1;
        piVar20 = piVar20 + 4;
      } while (uVar19 != 0);
    }
    puVar9 = (undefined8 *)FUN_00d59724();
Unity_Burst_Intrinsics_Arm_Neon__vmaxvq_s8:
    plVar11 = (long *)(*(code *)*puVar9)();
    puVar4 = Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__;
    puVar2 = System_Collections_Generic_ICollection<CorrelationID>_TypeInfo;
    if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    do {
      lVar17 = *plVar11;
      lVar15 = *(long *)puVar4;
      uVar19 = (ulong)*(ushort *)(lVar17 + 0x12a);
      if (uVar19 != 0) {
        piVar20 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
        do {
          if (*(long *)(piVar20 + -2) == lVar15) {
            puVar9 = (undefined8 *)(lVar17 + (long)*piVar20 * 0x10 + 0x138);
            goto LAB_01ffca48;
          }
          uVar19 = uVar19 - 1;
          piVar20 = piVar20 + 4;
        } while (uVar19 != 0);
      }
      puVar9 = (undefined8 *)FUN_00d59724(plVar11,lVar15,0);
LAB_01ffca48:
      uVar19 = (*(code *)*puVar9)(plVar11,puVar9[1]);
      if ((uVar19 & 1) == 0) {
        plVar11 = (long *)thunk_FUN_00d6225c(plVar11,*(undefined8 *)StringLiteral_10310);
        if (plVar11 == (long *)0x0) goto LAB_01ffcd24;
        lVar15 = *plVar11;
        uVar19 = (ulong)*(ushort *)(lVar15 + 0x12a);
        if (uVar19 == 0) goto LAB_01ffcc5c;
        piVar20 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        goto LAB_01ffcc44;
      }
      lVar17 = *plVar11;
      lVar15 = *(long *)puVar4;
      uVar19 = (ulong)*(ushort *)(lVar17 + 0x12a);
      if (uVar19 != 0) {
        piVar20 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
        do {
          if (*(long *)(piVar20 + -2) == lVar15) {
            puVar9 = (undefined8 *)(lVar17 + (long)(*piVar20 + 1) * 0x10 + 0x138);
            goto LAB_01ffcaa8;
          }
          uVar19 = uVar19 - 1;
          piVar20 = piVar20 + 4;
        } while (uVar19 != 0);
      }
      puVar9 = (undefined8 *)FUN_00d59724(plVar11,lVar15,1);
LAB_01ffcaa8:
      plVar14 = (long *)(*(code *)*puVar9)(plVar11,puVar9[1]);
      if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      lVar15 = *(long *)puVar2;
      bVar7 = *(byte *)(lVar15 + 300);
      if ((*(byte *)(*plVar14 + 300) < bVar7) ||
         (*(long *)(*(long *)(*plVar14 + 200) + (ulong)bVar7 * 8 + -8) != lVar15)) {
                    /* WARNING: Subroutine does not return */
        FUN_00da544c(plVar14);
      }
      uVar10 = (**(code **)(*plVar14 + 0x1a8))(plVar14,*(undefined8 *)(*plVar14 + 0x1b0));
      uVar19 = FUN_01ff65b8(lVar16,uVar10);
      if ((uVar19 & 1) == 0) {
        FUN_01ff65e4(lVar16,uVar10,plVar14);
      }
      else {
        if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        lVar15 = FUN_01ffef2c(plVar14);
        if (lVar15 != 0) {
          uVar13 = FUN_015f5b28(uVar10,lVar15,0);
          FUN_01ff65e4(lVar16,uVar13,plVar14);
        }
        plVar14 = (long *)FUN_01fffe10(lVar16,uVar10);
        if (plVar14 != (long *)0x0) {
          lVar15 = *(long *)puVar2;
          bVar7 = *(byte *)(lVar15 + 300);
          if ((*(byte *)(*plVar14 + 300) < bVar7) ||
             (*(long *)(*(long *)(*plVar14 + 200) + (ulong)bVar7 * 8 + -8) != lVar15)) {
                    /* WARNING: Subroutine does not return */
            FUN_00da544c(plVar14);
          }
        }
        if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        lVar15 = FUN_01ffef2c(plVar14);
        if (lVar15 != 0) {
          FUN_01fffe3c(lVar16,uVar10);
          if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          uVar10 = (**(code **)(*plVar14 + 0x1a8))(plVar14,*(undefined8 *)(*plVar14 + 0x1b0));
          uVar10 = FUN_015f5b28(uVar10,lVar15,0);
          FUN_01ff65e4(lVar16,uVar10,plVar14);
        }
      }
    } while( true );
  }
  bVar7 = 0;
  goto joined_r0x01ffce00;
  while( true ) {
    uVar19 = uVar19 - 1;
    piVar20 = piVar20 + 4;
    if (uVar19 == 0) break;
LAB_01ffc9a4:
    if (*(long *)(piVar20 + -2) == *(long *)StringLiteral_10310) {
      puVar9 = (undefined8 *)(lVar15 + (long)*piVar20 * 0x10 + 0x138);
      goto LAB_01ffcc78;
    }
  }
LAB_01ffc9bc:
  puVar9 = (undefined8 *)FUN_00d59724(plVar14,*(long *)StringLiteral_10310,0);
LAB_01ffcc78:
  (*(code *)*puVar9)(plVar14,puVar9[1]);
LAB_01ffcc84:
  plVar14 = plStack0000000000000008;
  lVar15 = *plStack0000000000000008;
  uVar19 = (ulong)*(ushort *)(lVar15 + 0x12a);
  if (uVar19 != 0) {
    piVar20 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
    do {
      if (*(long *)(piVar20 + -2) == *(long *)Method_Unity_Burst_SharedStatic_CheckResult__) {
        puVar9 = (undefined8 *)(lVar15 + (long)*piVar20 * 0x10 + 0x138);
        goto LAB_01ffccf4;
      }
      uVar19 = uVar19 - 1;
      piVar20 = piVar20 + 4;
    } while (uVar19 != 0);
  }
  puVar9 = (undefined8 *)
           FUN_00d59724(plStack0000000000000008,
                        *(long *)Method_Unity_Burst_SharedStatic_CheckResult__,0);
LAB_01ffccf4:
  bVar7 = (*(code *)*puVar9)(plVar14);
  unaff_w20 = in_stack_00000018;
  goto joined_r0x01ffce00;
code_r0x01ffcd6c:
  uVar19 = uVar19 - 1;
  piVar20 = piVar20 + 4;
  if (uVar19 == 0) goto LAB_01ffcd78;
  goto LAB_01ffcd60;
LAB_01ffd1b0:
  plVar11 = (long *)thunk_FUN_00d6225c(plVar11,*(undefined8 *)StringLiteral_10310);
  if (plVar11 != (long *)0x0) {
    lVar16 = *plVar11;
    uVar19 = (ulong)*(ushort *)(lVar16 + 0x12a);
    if (uVar19 != 0) {
      piVar20 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
      do {
        if (*(long *)(piVar20 + -2) == *(long *)puVar4) {
          puVar9 = (undefined8 *)(lVar16 + (long)*piVar20 * 0x10 + 0x138);
          goto LAB_01ffd220;
        }
        uVar19 = uVar19 - 1;
        piVar20 = piVar20 + 4;
      } while (uVar19 != 0);
    }
    puVar9 = (undefined8 *)FUN_00d59724(plVar11,*(long *)puVar4,0);
LAB_01ffd220:
    (*(code *)*puVar9)(plVar11,puVar9[1]);
  }
  goto Unity_Burst_Intrinsics_Arm_Neon__vminvq_s32;
  while( true ) {
    uVar19 = uVar19 - 1;
    piVar20 = piVar20 + 4;
    if (uVar19 == 0) break;
LAB_01ffcc44:
    if (*(long *)(piVar20 + -2) == *(long *)StringLiteral_10310) {
      puVar9 = (undefined8 *)(lVar15 + (long)*piVar20 * 0x10 + 0x138);
      goto Unity_Burst_Intrinsics_Arm_Neon__vmaxvq_f64;
    }
  }
LAB_01ffcc5c:
  puVar9 = (undefined8 *)FUN_00d59724(plVar11,*(long *)StringLiteral_10310,0);
Unity_Burst_Intrinsics_Arm_Neon__vmaxvq_f64:
  (*(code *)*puVar9)(plVar11,puVar9[1]);
LAB_01ffcd24:
  plVar11 = plStack0000000000000008;
  lVar17 = *plStack0000000000000008;
  lVar15 = *(long *)Method_Unity_Burst_SharedStatic_CheckResult__;
  uVar1 = *(ushort *)(lVar17 + 0x12a);
  uVar19 = (ulong)uVar1;
  if (in_stack_00000018 == 1) {
    if (uVar1 != 0) {
      piVar20 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
LAB_01ffcd60:
      if (*(long *)(piVar20 + -2) != lVar15) goto code_r0x01ffcd6c;
      iVar18 = *piVar20 + 2;
LAB_01ffcdd4:
      puVar9 = (undefined8 *)(lVar17 + (long)iVar18 * 0x10 + 0x138);
      goto LAB_01ffcde0;
    }
LAB_01ffcd78:
    uVar10 = 2;
  }
  else {
    if (uVar1 != 0) {
      piVar20 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
      do {
        if (*(long *)(piVar20 + -2) == lVar15) {
          iVar18 = *piVar20 + 1;
          goto LAB_01ffcdd4;
        }
        uVar19 = uVar19 - 1;
        piVar20 = piVar20 + 4;
      } while (uVar19 != 0);
    }
    uVar10 = 1;
  }
  puVar9 = (undefined8 *)FUN_00d59724(plStack0000000000000008,lVar15,uVar10);
LAB_01ffcde0:
  bVar7 = (*(code *)*puVar9)(plVar11);
  plVar11 = (long *)Method_UnityEngine_UIElements_UIR_Page_DataSet<Vertex>_Dispose__;
  unaff_w20 = in_stack_00000018;
joined_r0x01ffce00:
  if (unaff_x21 != (long *)0x0) {
    lVar15 = *unaff_x21;
    uVar19 = (ulong)*(ushort *)(lVar15 + 0x12a);
    if (uVar19 != 0) {
      piVar20 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      do {
        if (*(long *)(piVar20 + -2) == *(long *)puVar3) {
          puVar9 = (undefined8 *)(lVar15 + (long)(*piVar20 + 5) * 0x10 + 0x138);
          goto LAB_01ffce54;
        }
        uVar19 = uVar19 - 1;
        piVar20 = piVar20 + 4;
      } while (uVar19 != 0);
    }
    puVar9 = (undefined8 *)FUN_00d59724();
LAB_01ffce54:
    uVar19 = (*(code *)*puVar9)();
    if ((uVar19 & 1) == 0) {
      lVar15 = *unaff_x21;
      uVar19 = (ulong)*(ushort *)(lVar15 + 0x12a);
      if (uVar19 != 0) {
        piVar20 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar20 + -2) == *(long *)puVar3) {
            puVar9 = (undefined8 *)(lVar15 + (long)(*piVar20 + 4) * 0x10 + 0x138);
            goto LAB_01ffd00c;
          }
          uVar19 = uVar19 - 1;
          piVar20 = piVar20 + 4;
        } while (uVar19 != 0);
      }
      puVar9 = (undefined8 *)FUN_00d59724();
LAB_01ffd00c:
      (*(code *)*puVar9)();
      plVar14 = (long *)Unity_Burst_Intrinsics_Arm_Neon__vcvt_n_f64_u64(lVar16);
      if (plVar14 != (long *)0x0) {
        lVar16 = *plVar14;
        uVar19 = (ulong)*(ushort *)(lVar16 + 0x12a);
        if (uVar19 != 0) {
          piVar20 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
          do {
            if (*(long *)(piVar20 + -2) == *plVar11) {
              puVar9 = (undefined8 *)(lVar16 + (long)*piVar20 * 0x10 + 0x138);
              goto LAB_01ffd074;
            }
            uVar19 = uVar19 - 1;
            piVar20 = piVar20 + 4;
          } while (uVar19 != 0);
        }
        puVar9 = (undefined8 *)FUN_00d59724(plVar14,*plVar11,0);
LAB_01ffd074:
        plVar11 = (long *)(*(code *)*puVar9)(plVar14,puVar9[1]);
        puVar2 = Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__;
        if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        do {
          lVar15 = *plVar11;
          lVar16 = *(long *)puVar2;
          uVar19 = (ulong)*(ushort *)(lVar15 + 0x12a);
          if (uVar19 != 0) {
            piVar20 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
            do {
              if (*(long *)(piVar20 + -2) == lVar16) {
                puVar9 = (undefined8 *)(lVar15 + (long)*piVar20 * 0x10 + 0x138);
                goto LAB_01ffd0dc;
              }
              uVar19 = uVar19 - 1;
              piVar20 = piVar20 + 4;
            } while (uVar19 != 0);
          }
          puVar9 = (undefined8 *)FUN_00d59724(plVar11,lVar16,0);
LAB_01ffd0dc:
          uVar19 = (*(code *)*puVar9)(plVar11,puVar9[1]);
          puVar4 = StringLiteral_10310;
          if ((uVar19 & 1) == 0) goto LAB_01ffd1b0;
          lVar15 = *plVar11;
          lVar16 = *(long *)puVar2;
          uVar19 = (ulong)*(ushort *)(lVar15 + 0x12a);
          if (uVar19 != 0) {
            piVar20 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
            do {
              if (*(long *)(piVar20 + -2) == lVar16) {
                puVar9 = (undefined8 *)(lVar15 + (long)(*piVar20 + 1) * 0x10 + 0x138);
                goto LAB_01ffd13c;
              }
              uVar19 = uVar19 - 1;
              piVar20 = piVar20 + 4;
            } while (uVar19 != 0);
          }
          puVar9 = (undefined8 *)FUN_00d59724(plVar11,lVar16,1);
LAB_01ffd13c:
          (*(code *)*puVar9)(plVar11,puVar9[1]);
          lVar16 = *unaff_x21;
          uVar19 = (ulong)*(ushort *)(lVar16 + 0x12a);
          if (uVar19 != 0) {
            piVar20 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
            do {
              if (*(long *)(piVar20 + -2) == *(long *)puVar3) {
                puVar9 = (undefined8 *)(lVar16 + (long)(*piVar20 + 2) * 0x10 + 0x138);
                goto LAB_01ffd19c;
              }
              uVar19 = uVar19 - 1;
              piVar20 = piVar20 + 4;
            } while (uVar19 != 0);
          }
          puVar9 = (undefined8 *)FUN_00d59724();
LAB_01ffd19c:
          (*(code *)*puVar9)();
        } while( true );
      }
      goto LAB_01ffd644;
    }
  }
  uVar10 = Unity_Burst_Intrinsics_Arm_Neon__vcvt_n_f64_u64(lVar16);
  unaff_x21 = (long *)thunk_FUN_00d62348(*(undefined8 *)PTR_DAT_033ee168);
  if (unaff_x21 == (long *)0x0) goto LAB_01ffd644;
  FUN_01743e28(unaff_x21,uVar10,0);
Unity_Burst_Intrinsics_Arm_Neon__vminvq_s32:
  puVar5 = Method_System_Collections_Generic_List_Enumerator<DebugInspector>_MoveNext__;
  puVar4 = System_Security_Claims_ClaimsIdentity_<get_Claims>d__51_TypeInfo;
  puVar2 = System_Xml_QueryOutputWriter_TypeInfo;
  puVar3 = System_IndexOutOfRangeException_TypeInfo;
  if ((unaff_x24 != (long *)0x0 & bVar7) == 0) {
    return unaff_x21;
  }
  if (unaff_w20 == 2) {
    if (unaff_x21 == (long *)0x0) goto LAB_01ffd644;
    lVar16 = *unaff_x21;
    uVar19 = (ulong)*(ushort *)(lVar16 + 0x12a);
    if (uVar19 != 0) {
      piVar20 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
      do {
        if (*(long *)(piVar20 + -2) ==
            *(long *)System_Security_Claims_ClaimsIdentity_<get_Claims>d__51_TypeInfo) {
          puVar9 = (undefined8 *)(lVar16 + (long)(*piVar20 + 1) * 0x10 + 0x138);
          goto LAB_01ffd30c;
        }
        uVar19 = uVar19 - 1;
        piVar20 = piVar20 + 4;
      } while (uVar19 != 0);
    }
    puVar9 = (undefined8 *)
             FUN_00d59724(unaff_x21,
                          *(long *)System_Security_Claims_ClaimsIdentity_<get_Claims>d__51_TypeInfo,
                          1);
LAB_01ffd30c:
    uVar8 = (*(code *)*puVar9)(unaff_x21,puVar9[1]);
    uVar10 = FUN_00da4fb8(*(undefined8 *)puVar3,uVar8);
    lVar16 = *unaff_x21;
    uVar19 = (ulong)*(ushort *)(lVar16 + 0x12a);
    if (uVar19 != 0) {
      piVar20 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
      do {
        if (*(long *)(piVar20 + -2) == *(long *)puVar4) {
          puVar9 = (undefined8 *)(lVar16 + (long)*piVar20 * 0x10 + 0x138);
          goto LAB_01ffd378;
        }
        uVar19 = uVar19 - 1;
        piVar20 = piVar20 + 4;
      } while (uVar19 != 0);
    }
    puVar9 = (undefined8 *)FUN_00d59724(unaff_x21,*(long *)puVar4,0);
LAB_01ffd378:
    (*(code *)*puVar9)(unaff_x21,uVar10,0,puVar9[1]);
    lVar16 = thunk_FUN_00d62348(*(undefined8 *)System_Data_SqlTypes_SqlByte___TypeInfo);
    if (lVar16 == 0) goto LAB_01ffd644;
    FUN_01fd8fec(lVar16,uVar10,1,0);
  }
  else if (unaff_w20 == 1) {
    if (unaff_x21 == (long *)0x0) goto LAB_01ffd644;
    lVar16 = *unaff_x21;
    uVar19 = (ulong)*(ushort *)(lVar16 + 0x12a);
    if (uVar19 != 0) {
      piVar20 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
      do {
        if (*(long *)(piVar20 + -2) ==
            *(long *)System_Security_Claims_ClaimsIdentity_<get_Claims>d__51_TypeInfo) {
          puVar9 = (undefined8 *)(lVar16 + (long)(*piVar20 + 1) * 0x10 + 0x138);
          goto LAB_01ffd250;
        }
        uVar19 = uVar19 - 1;
        piVar20 = piVar20 + 4;
      } while (uVar19 != 0);
    }
    puVar9 = (undefined8 *)
             FUN_00d59724(unaff_x21,
                          *(long *)System_Security_Claims_ClaimsIdentity_<get_Claims>d__51_TypeInfo,
                          1);
LAB_01ffd250:
    uVar8 = (*(code *)*puVar9)(unaff_x21,puVar9[1]);
    uVar10 = FUN_00da4fb8(*(undefined8 *)puVar5,uVar8);
    lVar16 = *unaff_x21;
    uVar19 = (ulong)*(ushort *)(lVar16 + 0x12a);
    if (uVar19 != 0) {
      piVar20 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
      do {
        if (*(long *)(piVar20 + -2) == *(long *)puVar4) {
          puVar9 = (undefined8 *)(lVar16 + (long)*piVar20 * 0x10 + 0x138);
          goto LAB_01ffd2bc;
        }
        uVar19 = uVar19 - 1;
        piVar20 = piVar20 + 4;
      } while (uVar19 != 0);
    }
    puVar9 = (undefined8 *)FUN_00d59724(unaff_x21,*(long *)puVar4,0);
LAB_01ffd2bc:
    (*(code *)*puVar9)(unaff_x21,uVar10,0,puVar9[1]);
    lVar16 = thunk_FUN_00d62348(*(undefined8 *)StringLiteral_3724);
    if (lVar16 == 0) goto LAB_01ffd644;
    FUN_01fdf08c(lVar16,uVar10,1,0);
  }
  else if (unaff_w20 == 0) {
    if (unaff_x21 == (long *)0x0) goto LAB_01ffd644;
    lVar16 = *unaff_x21;
    uVar19 = (ulong)*(ushort *)(lVar16 + 0x12a);
    if (uVar19 != 0) {
      piVar20 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
      do {
        if (*(long *)(piVar20 + -2) ==
            *(long *)System_Security_Claims_ClaimsIdentity_<get_Claims>d__51_TypeInfo) {
          puVar9 = (undefined8 *)(lVar16 + (long)(*piVar20 + 1) * 0x10 + 0x138);
          goto LAB_01ffd3c8;
        }
        uVar19 = uVar19 - 1;
        piVar20 = piVar20 + 4;
      } while (uVar19 != 0);
    }
    puVar9 = (undefined8 *)
             FUN_00d59724(unaff_x21,
                          *(long *)System_Security_Claims_ClaimsIdentity_<get_Claims>d__51_TypeInfo,
                          1);
LAB_01ffd3c8:
    uVar8 = (*(code *)*puVar9)(unaff_x21,puVar9[1]);
    uVar10 = FUN_00da4fb8(*(undefined8 *)puVar2,uVar8);
    lVar16 = *unaff_x21;
    uVar19 = (ulong)*(ushort *)(lVar16 + 0x12a);
    if (uVar19 != 0) {
      piVar20 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
      do {
        if (*(long *)(piVar20 + -2) == *(long *)puVar4) {
          puVar9 = (undefined8 *)(lVar16 + (long)*piVar20 * 0x10 + 0x138);
          goto LAB_01ffd434;
        }
        uVar19 = uVar19 - 1;
        piVar20 = piVar20 + 4;
      } while (uVar19 != 0);
    }
    puVar9 = (undefined8 *)FUN_00d59724(unaff_x21,*(long *)puVar4,0);
LAB_01ffd434:
    (*(code *)*puVar9)(unaff_x21,uVar10,0,puVar9[1]);
    lVar16 = thunk_FUN_00d62348(*(undefined8 *)
                                 Method_System_Runtime_Serialization_Formatters_Binary_BinaryAssemblyInfo_GetAssembly__
                               );
    if (lVar16 == 0) goto LAB_01ffd644;
    FUN_020cc648(lVar16,uVar10,0);
  }
  else {
    lVar16 = 0;
  }
  lVar15 = thunk_FUN_00d62348(*(undefined8 *)
                               UnityEngine_XR_Interaction_Toolkit_Utilities_Tweenables_SmartTweenableVariables_SmartFollowVector3TweenableVariable_IsNewTargetWithinThreshold_000009DC_BurstDirectCall_TypeInfo
                             );
  if (lVar15 != 0) {
    FUN_017b46ec(lVar15,0);
    *(long **)(lVar15 + 0x10) = plStack0000000000000008;
    *(long *)(lVar15 + 0x18) = lVar16;
    lVar16 = *(long *)puVar6;
    if (*(int *)(lVar16 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      lVar16 = *(long *)puVar6;
    }
    lVar16 = *(long *)(*(long *)(lVar16 + 0xb8) + 0x40);
    if (lVar16 != 0) {
      if (unaff_w20 < *(uint *)(lVar16 + 0x18)) {
        lVar16 = lVar16 + (long)(int)unaff_w20 * 0x10;
        in_stack_00000030 = *(undefined8 *)(lVar16 + 0x20);
        in_stack_00000038 = *(undefined8 *)(lVar16 + 0x28);
        uVar10 = thunk_FUN_00d61fa0(*(undefined8 *)
                                     UnityEngine_Rendering_Universal_LibTessDotNet_Tess_ActiveRegion_TypeInfo
                                    ,&stack0x00000030);
        lVar16 = *unaff_x24;
        uVar19 = (ulong)*(ushort *)(lVar16 + 0x12a);
        if (uVar19 != 0) {
          piVar20 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
          do {
            if (*(long *)(piVar20 + -2) ==
                *(long *)System_Globalization_DateTimeFormatInfoScanner_TypeInfo) {
              puVar9 = (undefined8 *)(lVar16 + (long)(*piVar20 + 1) * 0x10 + 0x138);
              goto LAB_01ffd544;
            }
            uVar19 = uVar19 - 1;
            piVar20 = piVar20 + 4;
          } while (uVar19 != 0);
        }
        puVar9 = (undefined8 *)
                 FUN_00d59724(unaff_x24,
                              *(long *)System_Globalization_DateTimeFormatInfoScanner_TypeInfo,1);
LAB_01ffd544:
        (*(code *)*puVar9)(unaff_x24,uVar10,lVar15,puVar9[1]);
        lVar16 = *(long *)(*(long *)(*(long *)puVar6 + 0xb8) + 0x48);
        if (lVar16 == 0) goto LAB_01ffd644;
        if (unaff_w20 < *(uint *)(lVar16 + 0x18)) {
          lVar16 = lVar16 + (long)(int)unaff_w20 * 0x10;
          in_stack_00000020 = *(undefined8 *)(lVar16 + 0x20);
          in_stack_00000028 = *(undefined8 *)(lVar16 + 0x28);
          uVar10 = thunk_FUN_00d61fa0(*(undefined8 *)
                                       UnityEngine_Rendering_Universal_LibTessDotNet_Tess_ActiveRegion_TypeInfo
                                      ,&stack0x00000020);
          lVar16 = *unaff_x24;
          uVar19 = (ulong)*(ushort *)(lVar16 + 0x12a);
          if (uVar19 != 0) {
            piVar20 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
            do {
              if (*(long *)(piVar20 + -2) ==
                  *(long *)System_Globalization_DateTimeFormatInfoScanner_TypeInfo) {
                puVar9 = (undefined8 *)(lVar16 + (long)(*piVar20 + 10) * 0x10 + 0x138);
                goto LAB_01ffd5f0;
              }
              uVar19 = uVar19 - 1;
              piVar20 = piVar20 + 4;
            } while (uVar19 != 0);
          }
          puVar9 = (undefined8 *)
                   FUN_00d59724(unaff_x24,
                                *(long *)System_Globalization_DateTimeFormatInfoScanner_TypeInfo,10)
          ;
LAB_01ffd5f0:
          (*(code *)*puVar9)(unaff_x24,uVar10,puVar9[1]);
          return unaff_x21;
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


