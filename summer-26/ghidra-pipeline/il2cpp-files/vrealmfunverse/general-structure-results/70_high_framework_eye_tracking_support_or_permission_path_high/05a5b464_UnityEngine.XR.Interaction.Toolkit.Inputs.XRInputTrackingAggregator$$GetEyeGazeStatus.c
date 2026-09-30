/*
FUNCTION_NAME: UnityEngine.XR.Interaction.Toolkit.Inputs.XRInputTrackingAggregator$$GetEyeGazeStatus
ENTRY_POINT: 05a5b464
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 87
LABEL: framework_eye_tracking_support_or_permission_path_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_eye_tracking_support_or_permission_path
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior;attempted_use
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;validity_or_gating_hits_18;frame_or_lifecycle_behavior;attempted_eye_tracking_permission_or_feature_enable;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_retrieval_or_extraction
*/


/* WARNING: Removing unreachable block (ram,0x05a5b7e0) */
/* WARNING: Removing unreachable block (ram,0x05a5bbc0) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined1  [16]
UnityEngine_XR_Interaction_Toolkit_Inputs_XRInputTrackingAggregator__GetEyeGazeStatus(void)

{
  byte bVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  int iVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined8 *puVar11;
  long *plVar12;
  long lVar13;
  int *piVar14;
  undefined8 unaff_x19;
  long unaff_x21;
  long unaff_x22;
  long *plVar15;
  int iVar16;
  undefined8 uVar17;
  undefined4 uVar18;
  undefined1 auVar19 [16];
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  long *in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  
  thunk_FUN_02bb0e9c();
  uVar9 = FUN_05a5bc40();
  uVar10 = FUN_05a5ad0c();
  if ((uVar10 & 1) != 0) {
    FUN_05a5be28();
  }
  FUN_05a64cb0();
  plVar15 = *(long **)(unaff_x21 + 0x78);
  if (plVar15 != (long *)0x0) {
    lVar13 = *plVar15;
    uVar10 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar10 != 0) {
      piVar14 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_06312f80) {
          puVar11 = (undefined8 *)(lVar13 + (long)*piVar14 * 0x10 + 0x138);
          goto LAB_05a5b520;
        }
        uVar10 = uVar10 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar10 != 0);
    }
    puVar11 = (undefined8 *)FUN_02b7654c(plVar15,*(long *)PTR_DAT_06312f80,0);
LAB_05a5b520:
    puVar4 = PTR_DAT_06312f68;
    plVar15 = (long *)(*(code *)*puVar11)(plVar15,puVar11[1]);
    puVar6 = PTR_DAT_06312f90;
    puVar5 = PTR_DAT_06312f88;
    puVar3 = PTR_DAT_06312520;
joined_r0x05a5b544:
    do {
      do {
        in_stack_00000038 = plVar15;
        if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3cac4();
        }
        lVar13 = *plVar15;
        uVar10 = (ulong)*(ushort *)(lVar13 + 0x12e);
        if (uVar10 != 0) {
          piVar14 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == *(long *)puVar6) {
              puVar11 = (undefined8 *)(lVar13 + (long)*piVar14 * 0x10 + 0x138);
              goto LAB_05a5b5b8;
            }
            uVar10 = uVar10 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar10 != 0);
        }
        puVar11 = (undefined8 *)FUN_02b7654c(plVar15,*(long *)puVar6,0);
LAB_05a5b5b8:
        uVar10 = (*(code *)*puVar11)(plVar15,puVar11[1]);
        plVar15 = in_stack_00000038;
        if ((uVar10 & 1) == 0) {
          if (in_stack_00000038 == (long *)0x0) goto LAB_05a5b7d0;
          lVar13 = *in_stack_00000038;
          uVar10 = (ulong)*(ushort *)(lVar13 + 0x12e);
          if (uVar10 == 0) goto LAB_05a5b7a8;
          piVar14 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
          goto LAB_05a5b790;
        }
        if (in_stack_00000038 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3cac4();
        }
        lVar13 = *in_stack_00000038;
        uVar10 = (ulong)*(ushort *)(lVar13 + 0x12e);
        if (uVar10 != 0) {
          piVar14 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == *(long *)puVar5) {
              puVar11 = (undefined8 *)(lVar13 + (long)*piVar14 * 0x10 + 0x138);
              goto LAB_05a5b61c;
            }
            uVar10 = uVar10 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar10 != 0);
        }
        puVar11 = (undefined8 *)FUN_02b7654c(in_stack_00000038,*(long *)puVar5,0);
LAB_05a5b61c:
        plVar12 = (long *)(*(code *)*puVar11)(plVar15,puVar11[1]);
        if (plVar12 == (long *)0x0) {
LAB_05a5b644:
          plVar12 = (long *)0x0;
        }
        else {
          lVar13 = *(long *)puVar4;
          bVar1 = *(byte *)(lVar13 + 0x130);
          if (*(byte *)(*plVar12 + 0x130) < bVar1) goto LAB_05a5b644;
          if (*(long *)(*(long *)(*plVar12 + 200) + (ulong)bVar1 * 8 + -8) != lVar13) {
            plVar12 = (long *)0x0;
          }
        }
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        uVar10 = FUN_05c8c45c(plVar12,0,0);
        plVar15 = in_stack_00000038;
      } while ((uVar10 & 1) == 0);
      if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      uVar10 = (**(code **)(*plVar12 + 0x348))(plVar12,*(undefined8 *)(*plVar12 + 0x350));
      plVar15 = in_stack_00000038;
    } while ((uVar10 & 1) == 0);
    uVar10 = FUN_05a5ad0c(plVar12);
    FUN_05a5ad0c(plVar12);
    if ((uVar10 & 1) != 0) {
      FUN_05a5be28(plVar12,unaff_x19,uVar9);
    }
    if (unaff_x22 != 0) {
      lVar13 = *(long *)(unaff_x22 + 0x10);
      *(int *)(unaff_x22 + 0x1c) = *(int *)(unaff_x22 + 0x1c) + 1;
      if (lVar13 != 0) {
        uVar2 = *(uint *)(unaff_x22 + 0x18);
        if (uVar2 < *(uint *)(lVar13 + 0x18)) {
          *(uint *)(unaff_x22 + 0x18) = uVar2 + 1;
          puVar11 = (undefined8 *)(lVar13 + (long)(int)uVar2 * 8 + 0x20);
          *puVar11 = plVar12;
          thunk_FUN_02bb0e9c(puVar11,plVar12);
          plVar15 = in_stack_00000038;
        }
        else {
          FUN_037a6538();
          plVar15 = in_stack_00000038;
        }
        goto joined_r0x05a5b544;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
  goto LAB_05a5bb68;
  while( true ) {
    uVar10 = uVar10 - 1;
    piVar14 = piVar14 + 4;
    if (uVar10 == 0) break;
LAB_05a5b790:
    if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_06312f78) {
      puVar11 = (undefined8 *)(lVar13 + (long)*piVar14 * 0x10 + 0x138);
      goto LAB_05a5b7c4;
    }
  }
LAB_05a5b7a8:
  puVar11 = (undefined8 *)FUN_02b7654c(in_stack_00000038,*(long *)PTR_DAT_06312f78,0);
LAB_05a5b7c4:
  (*(code *)*puVar11)(plVar15,puVar11[1]);
LAB_05a5b7d0:
  iVar8 = FUN_05a5c09c();
  uVar7 = in_stack_00000058;
  uVar17 = in_stack_00000050;
  if (unaff_x22 != 0) {
    if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    _in_stack_00000040 = FUN_05a5c188(uVar17,uVar7);
    puVar4 = Method_Newtonsoft_Json_Utilities_ConvertUtils_EnsureTypeAssignable__;
    puVar3 = Method_Newtonsoft_Json_Utilities_ConvertUtils_Convert__;
    if (0 < *(int *)(unaff_x22 + 0x18)) {
      iVar16 = 0;
      do {
        if (iVar8 != 0) {
          lVar13 = FUN_037a6268();
          if (lVar13 == 0) goto LAB_05a5bb68;
          FUN_05a5be28(lVar13,unaff_x19,uVar9);
        }
        lVar13 = FUN_037a6268();
        if (lVar13 == 0) goto LAB_05a5bb68;
        uVar10 = FUN_05a59b10();
        if ((uVar10 & 1) == 0) {
          lVar13 = FUN_037a6268();
          if (lVar13 == 0) goto LAB_05a5bb68;
          auVar19 = FUN_05a5c1fc(lVar13,in_stack_00000050,in_stack_00000058);
        }
        else {
          FUN_037a6268();
          auVar19 = FUN_05a5a8ac();
        }
        FUN_0329dfdc(&stack0x00000050,auVar19._0_8_,auVar19._8_8_,0,in_stack_00000040,
                     in_stack_00000048,iVar16,*(undefined8 *)puVar4);
        uVar7 = in_stack_00000048;
        uVar17 = in_stack_00000040;
        lVar13 = FUN_037a6268();
        if (lVar13 == 0) goto LAB_05a5bb68;
        uVar10 = FUN_05a59b10();
        uVar18 = 0;
        if ((uVar10 & 1) == 0) {
          uVar18 = 0x3f800000;
        }
        FUN_0329ca8c(uVar18,uVar17,uVar7,iVar16,*(undefined8 *)puVar3);
        lVar13 = FUN_037a6268();
        if (lVar13 == 0) goto LAB_05a5bb68;
        if (*(char *)(lVar13 + 0xf8) != '\0') {
          lVar13 = FUN_037a6268();
          if (lVar13 == 0) goto LAB_05a5bb68;
          uVar17 = *(undefined8 *)(lVar13 + 0xf0);
          if (*(int *)(*(long *)PTR_DAT_06312520 + 0xe4) == 0) {
            thunk_FUN_02b9ad44();
          }
          uVar10 = FUN_05c8c45c(uVar17,0,0);
          if ((uVar10 & 1) != 0) {
            lVar13 = FUN_037a6268();
            if (lVar13 == 0) goto LAB_05a5bb68;
            uVar17 = *(undefined8 *)(lVar13 + 0xf0);
            if (*(int *)(*(long *)PTR_DAT_0631fcf0 + 0xe4) == 0) {
              thunk_FUN_02b9ad44();
            }
            FUN_05c28798(&stack0x00000040,iVar16,uVar17,0);
          }
        }
        iVar16 = iVar16 + 1;
      } while (iVar16 < *(int *)(unaff_x22 + 0x18));
    }
    uVar10 = FUN_05a5c574();
    uVar17 = in_stack_00000048;
    uVar9 = in_stack_00000040;
    if (*(int *)(*(long *)PTR_DAT_0631fcf0 + 0xe4) == 0) {
      thunk_FUN_02b9ad44(*(long *)PTR_DAT_0631fcf0);
    }
    auVar19 = FUN_05c2867c(uVar9,uVar17,0);
    uVar17 = in_stack_00000058;
    uVar9 = in_stack_00000050;
    puVar3 = PTR_DAT_06312f68;
    if ((uVar10 & 1) != 0) {
      if (*(int *)(*(long *)PTR_DAT_0631fd00 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      _in_stack_00000028 = FUN_05c29084(uVar9,uVar17,0);
      uVar17 = in_stack_00000028._8_8_;
      uVar9 = in_stack_00000028;
      FUN_0329e1c4(&stack0x00000050,auVar19._0_8_,auVar19._8_8_,0,uVar9,uVar17,0,
                   *(undefined8 *)Method_Newtonsoft_Json_Utilities_ConvertUtils_FromBigInteger__);
      FUN_0329cc14(0x3f800000,uVar9,uVar17,0,
                   *(undefined8 *)
                    Method_Newtonsoft_Json_Utilities_ConvertUtils_CreateCastConverter__);
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      FUN_05c294a4(&stack0x00000028,iVar8 != 2 && iVar8 != 4,0);
      auVar19 = FUN_05c29388(in_stack_00000028,in_stack_00000030,0);
    }
    return auVar19;
  }
LAB_05a5bb68:
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


