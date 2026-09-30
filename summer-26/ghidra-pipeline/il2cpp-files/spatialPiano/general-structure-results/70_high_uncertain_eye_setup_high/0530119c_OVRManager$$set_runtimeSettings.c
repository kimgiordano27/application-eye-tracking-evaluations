/*
FUNCTION_NAME: OVRManager$$set_runtimeSettings
ENTRY_POINT: 0530119c
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__set_runtimeSettings(undefined1 param_1 [16],ulong param_2,ulong param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  float *unaff_x19;
  long unaff_x20;
  long unaff_x22;
  int iVar10;
  long *plVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  
  FUN_02f08768(System_CultureAwareComparer_TypeInfo);
  *(undefined1 *)(unaff_x22 + 0xfa) = 1;
  puVar3 = System_CultureAwareComparer_TypeInfo;
  puVar2 = UnityEngine_CullingGroup_TypeInfo;
  puVar1 = PTR_DAT_067c8f80;
  plVar11 = *(long **)(unaff_x19 + 4);
  in_stack_00000060 = 0;
  in_stack_00000048 = 0;
  in_stack_00000040 = 0;
  in_stack_00000058 = 0;
  in_stack_00000050 = 0;
  if (plVar11 != (long *)0x0) {
    fVar19 = 0.0;
    iVar10 = 1;
    fVar20 = *unaff_x19;
    fVar21 = unaff_x19[1];
    fVar18 = unaff_x19[2];
    do {
      fVar16 = (float)param_3;
      fVar14 = (float)param_2;
      lVar7 = *plVar11;
      lVar6 = *(long *)puVar2;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == lVar6) {
            puVar5 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_0530124c;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar5 = (undefined8 *)FUN_02f421d0(plVar11,lVar6,0);
LAB_0530124c:
      iVar4 = (*(code *)*puVar5)(plVar11,puVar5[1]);
      if ((iVar4 <= iVar10) || (unaff_x19[3] < fVar19)) {
        return;
      }
      plVar11 = *(long **)(unaff_x19 + 4);
      if (plVar11 == (long *)0x0) break;
      lVar7 = *plVar11;
      lVar6 = *(long *)puVar2;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == lVar6) {
            puVar5 = (undefined8 *)(lVar7 + (long)(*piVar9 + 1) * 0x10 + 0x138);
            goto LAB_053012c4;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar5 = (undefined8 *)FUN_02f421d0(plVar11,lVar6,1);
LAB_053012c4:
      fVar12 = (float)(*(code *)*puVar5)(plVar11,iVar10,puVar5[1]);
      if (unaff_x20 == 0) break;
      fVar15 = fVar21;
      fVar17 = fVar18;
      uVar8 = FUN_05301460(fVar20,fVar21,fVar18,fVar12,fVar14,fVar16);
      if ((uVar8 & 1) != 0) {
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          thunk_FUN_02f6670c();
        }
        fVar13 = (float)FUN_053016ec(&stack0x00000040);
        if (DAT_06bb42c8 == '\0') {
          FUN_02f08768(puVar1);
          DAT_06bb42c8 = '\x01';
        }
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_02f6670c();
        }
        uVar8 = FUN_053017b4(fVar19 + SQRT((fVar18 - fVar17) * (fVar18 - fVar17) +
                                           (fVar20 - fVar13) * (fVar20 - fVar13) +
                                           (fVar21 - fVar15) * (fVar21 - fVar15)));
        if ((uVar8 & 1) != 0) {
          return;
        }
      }
      if (DAT_06bb42c8 == '\0') {
        FUN_02f08768(puVar1);
        DAT_06bb42c8 = '\x01';
      }
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      plVar11 = *(long **)(unaff_x19 + 4);
      fVar18 = fVar18 - fVar16;
      param_3 = (ulong)(uint)fVar18;
      iVar10 = iVar10 + 1;
      param_2 = (ulong)(uint)(fVar18 * fVar18);
      fVar19 = fVar19 + SQRT(fVar18 * fVar18 +
                             (fVar20 - fVar12) * (fVar20 - fVar12) +
                             (fVar21 - fVar14) * (fVar21 - fVar14));
      fVar20 = fVar12;
      fVar21 = fVar14;
      fVar18 = fVar16;
    } while (plVar11 != (long *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


