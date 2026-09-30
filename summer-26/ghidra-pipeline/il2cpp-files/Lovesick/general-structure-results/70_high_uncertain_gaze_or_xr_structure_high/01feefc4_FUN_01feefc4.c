/*
FUNCTION_NAME: FUN_01feefc4
ENTRY_POINT: 01feefc4
PROGRAM: Lovesick-libil2cpp.so
SCORE: 75
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: possible_biometrics
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_16;functionality_possible_biometrics_hits_3
*/


long FUN_01feefc4(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  undefined4 uVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  undefined8 *puVar13;
  long *plVar14;
  ulong uVar15;
  int *piVar16;
  undefined8 uVar17;
  long lVar18;
  undefined8 uVar19;
  uint uVar20;
  long *plVar21;
  uint uVar22;
  
  if ((DAT_0378081c & 1) == 0) {
    thunk_FUN_00d48444(
                      Method_System_Runtime_Serialization_Formatters_Binary_BinaryAssemblyInfo_GetAssembly__
                      );
    thunk_FUN_00d48444(System_Xml_QueryOutputWriter_TypeInfo);
    thunk_FUN_00d48444(System_Security_Claims_ClaimsIdentity_<get_Claims>d__51_TypeInfo);
    thunk_FUN_00d48444(Method_UnityEngine_UI_Dropdown_SetAlpha__);
    thunk_FUN_00d48444(StringLiteral_3919);
    thunk_FUN_00d48444(Method_SoccerBlocker_HideCrowd__);
    thunk_FUN_00d48444(Method_System_Nullable<OVRPlugin_Result>__ctor__);
    thunk_FUN_00d48444(Method_TMPro_TMP_TextProcessingStack<float>__ctor__);
    DAT_0378081c = 1;
  }
  puVar6 = StringLiteral_3919;
  if (*(long *)(param_1 + 0x18) != 0) {
    return *(long *)(param_1 + 0x18);
  }
  uVar17 = *(undefined8 *)(param_1 + 0x10);
  if (*(int *)(*(long *)StringLiteral_3919 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  lVar9 = FUN_01ff4208(uVar17);
  puVar5 = Method_SoccerBlocker_HideCrowd__;
  puVar4 = Method_UnityEngine_UI_Dropdown_SetAlpha__;
  puVar3 = Method_TMPro_TMP_TextProcessingStack<float>__ctor__;
  puVar2 = Method_System_Nullable<OVRPlugin_Result>__ctor__;
  puVar1 = System_Xml_QueryOutputWriter_TypeInfo;
  plVar14 = *(long **)(param_1 + 0x10);
  if (plVar14 != (long *)0x0) {
    plVar14 = (long *)(**(code **)(*plVar14 + 0x888))(plVar14,*(undefined8 *)(*plVar14 + 0x890));
    while( true ) {
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar10 = FUN_0178a8c4(plVar14,0,0);
      if ((uVar10 & 1) == 0) break;
      uVar17 = *(undefined8 *)puVar5;
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar17 = FUN_01780344(uVar17,0);
      uVar10 = FUN_0178a8c4(plVar14,uVar17,0);
      if ((uVar10 & 1) == 0) break;
      if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      lVar11 = FUN_01ff4208(plVar14);
      if ((lVar9 == 0) || (lVar11 == 0)) goto LAB_01fef4f4;
      lVar12 = FUN_00da4fb8(*(undefined8 *)puVar1,*(int *)(lVar11 + 0x18) + *(int *)(lVar9 + 0x18));
      FUN_01795470(lVar9,0,lVar12,0,*(undefined4 *)(lVar9 + 0x18),0);
      FUN_01795470(lVar11,0,lVar12,*(undefined4 *)(lVar9 + 0x18),*(undefined4 *)(lVar11 + 0x18),0);
      if (plVar14 == (long *)0x0) goto LAB_01fef4f4;
      plVar14 = (long *)(**(code **)(*plVar14 + 0x888))(plVar14,*(undefined8 *)(*plVar14 + 0x890));
      lVar9 = lVar12;
    }
    if ((lVar9 != 0) && (plVar14 = *(long **)(param_1 + 0x10), plVar14 != (long *)0x0)) {
      uVar17 = *(undefined8 *)(lVar9 + 0x18);
      lVar11 = (**(code **)(*plVar14 + 0x8a8))(plVar14,*(undefined8 *)(*plVar14 + 0x8b0));
      if (lVar11 != 0) {
        uVar20 = *(uint *)(lVar11 + 0x18);
        if ((int)uVar20 < 1) goto LAB_01fef2b8;
        uVar22 = 0;
        lVar12 = lVar9;
        goto LAB_01fef1f4;
      }
    }
  }
  goto LAB_01fef4f4;
  while( true ) {
    lVar18 = *(long *)(lVar11 + (long)(int)uVar22 * 8 + 0x20);
    if (lVar18 == 0) goto LAB_01fef4f4;
    uVar10 = FUN_0178bdb4(lVar18,0);
    lVar9 = lVar12;
    if ((uVar10 & 3) != 0) {
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      lVar18 = FUN_01ff5160(lVar18);
      if (lVar18 == 0) goto LAB_01fef4f4;
      iVar7 = FUN_020cc784(lVar18,0);
      if (0 < iVar7) {
        if (lVar12 == 0) goto LAB_01fef4f4;
        iVar7 = FUN_020cc784(lVar18,0);
        lVar9 = FUN_00da4fb8(*(undefined8 *)puVar1,iVar7 + *(int *)(lVar12 + 0x18));
        FUN_01795470(lVar12,0,lVar9,0,*(undefined4 *)(lVar12 + 0x18),0);
        FUN_020cd2ac(lVar18,lVar9,*(undefined4 *)(lVar12 + 0x18),0);
      }
    }
    uVar20 = *(uint *)(lVar11 + 0x18);
    uVar22 = uVar22 + 1;
    lVar12 = lVar9;
    if ((int)uVar20 <= (int)uVar22) break;
LAB_01fef1f4:
    if (uVar20 <= uVar22) goto LAB_01fef4f8;
  }
LAB_01fef2b8:
  if ((lVar9 != 0) && (lVar11 = thunk_FUN_00d62348(*(undefined8 *)puVar4), lVar11 != 0)) {
    uVar19 = *(undefined8 *)(lVar9 + 0x18);
    FUN_017b46ec(lVar11,0);
    *(int *)(lVar11 + 0x20) = (int)uVar19;
    *(undefined8 *)(lVar11 + 0x28) = 0;
    if (0 < (int)*(ulong *)(lVar9 + 0x18)) {
      uVar10 = 0;
      uVar15 = *(ulong *)(lVar9 + 0x18) & 0xffffffff;
      do {
        if ((long)uVar10 < (long)(int)uVar17) {
LAB_01fef39c:
          if (uVar15 <= uVar10) goto LAB_01fef4f8;
          plVar21 = (long *)(lVar9 + uVar10 * 8 + 0x20);
          plVar14 = (long *)*plVar21;
          if (plVar14 == (long *)0x0) goto LAB_01fef4f4;
          uVar19 = (**(code **)(*plVar14 + 0x178))(plVar14,*(undefined8 *)(*plVar14 + 0x180));
          uVar15 = FUN_01ff65b8(lVar11,uVar19);
          if ((uVar15 & 1) == 0) {
            if (*(uint *)(lVar9 + 0x18) <= uVar10) {
LAB_01fef4f8:
                    /* WARNING: Subroutine does not return */
              FUN_00da5194();
            }
            plVar14 = (long *)*plVar21;
            if (plVar14 == (long *)0x0) goto LAB_01fef4f4;
            uVar19 = (**(code **)(*plVar14 + 0x178))(plVar14,*(undefined8 *)(*plVar14 + 0x180));
            if (*(uint *)(lVar9 + 0x18) <= uVar10) goto LAB_01fef4f8;
            FUN_01ff65e4(lVar11,uVar19,*plVar21);
          }
        }
        else {
          uVar20 = 0;
          do {
            lVar12 = *(long *)puVar6;
            if (*(int *)(lVar12 + 0xe0) == 0) {
              thunk_FUN_00d32864();
              lVar12 = *(long *)puVar6;
            }
            lVar18 = *(long *)(*(long *)(lVar12 + 0xb8) + 0x80);
            if (lVar18 == 0) goto LAB_01fef4f4;
            if (*(int *)(lVar18 + 0x18) <= (int)uVar20) {
              uVar15 = (ulong)*(uint *)(lVar9 + 0x18);
              goto LAB_01fef39c;
            }
            if (*(int *)(lVar12 + 0xe0) == 0) {
              thunk_FUN_00d32864();
              lVar18 = *(long *)(*(long *)(*(long *)puVar6 + 0xb8) + 0x80);
              if (lVar18 == 0) goto LAB_01fef4f4;
            }
            if ((*(uint *)(lVar18 + 0x18) <= uVar20) || (*(uint *)(lVar9 + 0x18) <= uVar10))
            goto LAB_01fef4f8;
            plVar14 = *(long **)(lVar18 + (long)(int)uVar20 * 8 + 0x20);
            if (plVar14 == (long *)0x0) goto LAB_01fef4f4;
            uVar15 = (**(code **)(*plVar14 + 0x8b8))
                               (plVar14,*(undefined8 *)(lVar9 + uVar10 * 8 + 0x20),
                                *(undefined8 *)(*plVar14 + 0x8c0));
            uVar20 = uVar20 + 1;
          } while ((uVar15 & 1) == 0);
        }
        uVar15 = (ulong)*(uint *)(lVar9 + 0x18);
        uVar10 = uVar10 + 1;
      } while ((long)uVar10 < (long)(int)*(uint *)(lVar9 + 0x18));
    }
    uVar8 = FUN_01ff6764(lVar11);
    uVar17 = FUN_00da4fb8(*(undefined8 *)puVar1,uVar8);
    plVar14 = (long *)Unity_Burst_Intrinsics_Arm_Neon__vcvt_n_f64_u64(lVar11);
    if (plVar14 != (long *)0x0) {
      lVar9 = *plVar14;
      uVar10 = (ulong)*(ushort *)(lVar9 + 0x12a);
      if (uVar10 != 0) {
        piVar16 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) ==
              *(long *)System_Security_Claims_ClaimsIdentity_<get_Claims>d__51_TypeInfo) {
            puVar13 = (undefined8 *)(lVar9 + (long)*piVar16 * 0x10 + 0x138);
            goto LAB_01fef498;
          }
          uVar10 = uVar10 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar10 != 0);
      }
      puVar13 = (undefined8 *)
                FUN_00d59724(plVar14,*(long *)
                                      System_Security_Claims_ClaimsIdentity_<get_Claims>d__51_TypeInfo
                             ,0);
LAB_01fef498:
      (*(code *)*puVar13)(plVar14,uVar17,0,puVar13[1]);
      lVar9 = thunk_FUN_00d62348(*(undefined8 *)
                                  Method_System_Runtime_Serialization_Formatters_Binary_BinaryAssemblyInfo_GetAssembly__
                                );
      if (lVar9 != 0) {
        FUN_020cc648(lVar9,uVar17,0);
        *(long *)(param_1 + 0x18) = lVar9;
        return lVar9;
      }
    }
  }
LAB_01fef4f4:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


