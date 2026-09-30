/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Gizmo.GizmoTypesRegistry.<>c$$<InitGizmos>b__3_1
ENTRY_POINT: 01460b90
PROGRAM: Lovesick-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_16;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_4;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Gizmo_GizmoTypesRegistry_<>c__<InitGizmos>b__3_1(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  float *pfVar11;
  undefined8 *unaff_x23;
  ulong uVar12;
  int unaff_w24;
  long *plVar13;
  long unaff_x26;
  uint uVar14;
  byte bVar15;
  int iVar16;
  double dVar17;
  float fVar18;
  float fVar19;
  long in_stack_00000010;
  long in_stack_00000028;
  
  uVar7 = FUN_00da4fb8(*unaff_x23);
  *(undefined8 *)(unaff_x19 + 0x28) = uVar7;
  puVar2 = System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
  if (0 < *(int *)(unaff_x21 + 0x18)) {
    if (unaff_x20 == 0) {
LAB_01460f00:
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    fVar19 = (float)unaff_w24;
    uVar12 = 0;
    uVar7 = NEON_fmov(0x41800000,4);
    do {
      lVar9 = *(long *)(unaff_x19 + 0x30);
      if (lVar9 == 0) goto LAB_01460f00;
      if (*(uint *)(lVar9 + 0x18) <= uVar12) {
LAB_01460f04:
                    /* WARNING: Subroutine does not return */
        FUN_00da5194();
      }
      uVar1 = *(uint *)(unaff_x20 + 0x18);
      bVar15 = 0;
      *(undefined8 *)(lVar9 + uVar12 * 8 + 0x20) = uVar7;
      if ((int)uVar1 < 1) {
        iVar16 = 1;
      }
      else {
        uVar14 = 0;
        iVar16 = 1;
        do {
          if (*(uint *)(unaff_x20 + 0x18) <= uVar14) goto LAB_01460f04;
          lVar9 = *(long *)(unaff_x20 + (long)(int)uVar14 * 8 + 0x20);
          if ((lVar9 == 0) || (lVar9 = *(long *)(lVar9 + 0x10), lVar9 == 0)) goto LAB_01460f00;
          if (*(uint *)(lVar9 + 0x18) <= uVar12) goto LAB_01460f04;
          plVar13 = *(long **)(lVar9 + uVar12 * 8 + 0x20);
          if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar8 = FUN_02681b9c(plVar13,0,0);
          if ((uVar8 & 1) != 0) {
            if (plVar13 == (long *)0x0) goto LAB_01460f00;
            iVar4 = FUN_0266fcfc(plVar13,0);
            iVar5 = FUN_0266fcfc(plVar13,0);
            if (iVar16 <= iVar5) {
              iVar16 = iVar5;
            }
            lVar9 = *(long *)(unaff_x19 + 0x30);
            if (lVar9 == 0) goto LAB_01460f00;
            if (*(uint *)(lVar9 + 0x18) <= uVar12) goto LAB_01460f04;
            pfVar11 = (float *)(lVar9 + uVar12 * 8 + 0x20);
            fVar18 = *pfVar11;
            iVar5 = (**(code **)(*plVar13 + 0x188))(plVar13,*(undefined8 *)(*plVar13 + 400));
            if (fVar18 <= (float)iVar5) {
              fVar18 = (float)iVar5;
            }
            if (*(uint *)(lVar9 + 0x18) <= uVar12) goto LAB_01460f04;
            if (fVar19 <= fVar18) {
              fVar18 = fVar19;
            }
            *pfVar11 = fVar18;
            lVar9 = *(long *)(unaff_x19 + 0x30);
            if (lVar9 == 0) goto LAB_01460f00;
            if (*(uint *)(lVar9 + 0x18) <= uVar12) goto LAB_01460f04;
            pfVar11 = (float *)(lVar9 + uVar12 * 8 + 0x24);
            fVar18 = *pfVar11;
            iVar5 = (**(code **)(*plVar13 + 0x1a8))(plVar13,*(undefined8 *)(*plVar13 + 0x1b0));
            if (fVar18 <= (float)iVar5) {
              fVar18 = (float)iVar5;
            }
            if (*(uint *)(lVar9 + 0x18) <= uVar12) goto LAB_01460f04;
            if (fVar19 <= fVar18) {
              fVar18 = fVar19;
            }
            *pfVar11 = fVar18;
            lVar9 = *(long *)(unaff_x19 + 0x20);
            FUN_0132138c(in_stack_00000010,uVar12 & 0xffffffff,&stack0x00000028,
                         *(undefined8 *)StringLiteral_11624);
            if (((in_stack_00000028 == 0) || (lVar10 = *(long *)(unaff_x19 + 0x28), lVar10 == 0)) ||
               (unaff_x26 == 0)) goto LAB_01460f00;
            if (*(uint *)(lVar10 + 0x18) <= uVar12) goto LAB_01460f04;
            uVar6 = FUN_013e7c48(unaff_x26,*(undefined8 *)(in_stack_00000028 + 0x10),
                                 lVar10 + uVar12 * 4 + 0x20,0);
            if (lVar9 == 0) goto LAB_01460f00;
            if (*(uint *)(lVar9 + 0x18) <= uVar12) goto LAB_01460f04;
            bVar15 = bVar15 | 1 < iVar4;
            *(undefined4 *)(lVar9 + uVar12 * 4 + 0x20) = uVar6;
          }
          uVar14 = uVar14 + 1;
        } while (uVar1 != uVar14);
      }
      puVar3 = System_Threading_Timer_TimerComparer_TypeInfo;
      if (DAT_03776ae9 == '\0') {
        thunk_FUN_00d48444(System_Threading_Timer_TimerComparer_TypeInfo);
        DAT_03776ae9 = '\x01';
      }
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      dVar17 = (double)FUN_01772228((double)unaff_w24,0x4000000000000000,0);
      if (DAT_03775e60 == '\0') {
        thunk_FUN_00d48444(puVar3);
        DAT_03775e60 = '\x01';
      }
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      lVar9 = *(long *)(unaff_x19 + 0x18);
      iVar4 = -0x7fffffff;
      if ((float)(int)dVar17 != INFINITY) {
        iVar4 = (int)dVar17 + 1;
      }
      if (iVar16 <= iVar4) {
        iVar4 = iVar16;
      }
      if (lVar9 == 0) goto LAB_01460f00;
      if (*(uint *)(lVar9 + 0x18) <= uVar12) goto LAB_01460f04;
      *(int *)(lVar9 + uVar12 * 4 + 0x20) = iVar4;
      lVar9 = *(long *)(unaff_x19 + 0x10);
      if (lVar9 == 0) goto LAB_01460f00;
      if (*(uint *)(lVar9 + 0x18) <= uVar12) goto LAB_01460f04;
      *(byte *)(lVar9 + uVar12 + 0x20) = bVar15;
      uVar12 = uVar12 + 1;
    } while ((long)uVar12 < (long)*(int *)(in_stack_00000010 + 0x18));
  }
  return;
}


