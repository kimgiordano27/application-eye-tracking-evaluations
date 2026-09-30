/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Gizmo.GizmoTypesRegistry.<>c$$<InitGizmos>b__3_4
ENTRY_POINT: 01460de8
PROGRAM: Lovesick-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_15;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Gizmo_GizmoTypesRegistry_<>c__<InitGizmos>b__3_4(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  ulong uVar5;
  uint in_w8;
  long lVar6;
  long lVar7;
  long unaff_x20;
  float *pfVar8;
  long *unaff_x22;
  ulong unaff_x23;
  undefined **unaff_x24;
  long *plVar9;
  long unaff_x26;
  uint uVar10;
  byte unaff_w28;
  int unaff_w29;
  double dVar11;
  float fVar12;
  float unaff_s11;
  undefined8 unaff_d12;
  long in_stack_00000010;
  long in_stack_00000018;
  long in_stack_00000028;
  
  do {
    plVar9 = (long *)unaff_x24[0x77];
    if (in_w8 == 0) {
      thunk_FUN_00d48444(plVar9);
      DAT_03776ae9 = 1;
    }
    if (*(int *)(*plVar9 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    dVar11 = (double)FUN_01772228(0);
    if (DAT_03775e60 == '\0') {
      thunk_FUN_00d48444(plVar9);
      DAT_03775e60 = '\x01';
    }
    if (*(int *)(*plVar9 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    lVar6 = *(long *)(in_stack_00000018 + 0x18);
    iVar2 = -0x7fffffff;
    if ((float)(int)dVar11 != INFINITY) {
      iVar2 = (int)dVar11 + 1;
    }
    if (unaff_w29 <= iVar2) {
      iVar2 = unaff_w29;
    }
    if (lVar6 == 0) {
LAB_01460f00:
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    if (*(uint *)(lVar6 + 0x18) <= unaff_x23) {
LAB_01460f04:
                    /* WARNING: Subroutine does not return */
      FUN_00da5194();
    }
    *(int *)(lVar6 + unaff_x23 * 4 + 0x20) = iVar2;
    lVar6 = *(long *)(in_stack_00000018 + 0x10);
    if (lVar6 == 0) goto LAB_01460f00;
    if (*(uint *)(lVar6 + 0x18) <= unaff_x23) goto LAB_01460f04;
    *(byte *)(lVar6 + unaff_x23 + 0x20) = unaff_w28 & 1;
    unaff_x23 = unaff_x23 + 1;
    if ((long)*(int *)(in_stack_00000010 + 0x18) <= (long)unaff_x23) {
      return;
    }
    lVar6 = *(long *)(in_stack_00000018 + 0x30);
    if (lVar6 == 0) goto LAB_01460f00;
    if (*(uint *)(lVar6 + 0x18) <= unaff_x23) goto LAB_01460f04;
    uVar1 = *(uint *)(unaff_x20 + 0x18);
    unaff_w28 = 0;
    *(undefined8 *)(lVar6 + unaff_x23 * 8 + 0x20) = unaff_d12;
    if ((int)uVar1 < 1) {
      unaff_w29 = 1;
    }
    else {
      uVar10 = 0;
      unaff_w29 = 1;
      do {
        if (*(uint *)(unaff_x20 + 0x18) <= uVar10) goto LAB_01460f04;
        lVar6 = *(long *)(unaff_x20 + (long)(int)uVar10 * 8 + 0x20);
        if ((lVar6 == 0) || (lVar6 = *(long *)(lVar6 + 0x10), lVar6 == 0)) goto LAB_01460f00;
        if (*(uint *)(lVar6 + 0x18) <= unaff_x23) goto LAB_01460f04;
        plVar9 = *(long **)(lVar6 + unaff_x23 * 8 + 0x20);
        if (*(int *)(*unaff_x22 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar5 = FUN_02681b9c(plVar9,0,0);
        if ((uVar5 & 1) != 0) {
          if (plVar9 == (long *)0x0) goto LAB_01460f00;
          iVar2 = FUN_0266fcfc(plVar9,0);
          iVar3 = FUN_0266fcfc(plVar9,0);
          if (unaff_w29 <= iVar3) {
            unaff_w29 = iVar3;
          }
          lVar6 = *(long *)(in_stack_00000018 + 0x30);
          if (lVar6 == 0) goto LAB_01460f00;
          if (*(uint *)(lVar6 + 0x18) <= unaff_x23) goto LAB_01460f04;
          pfVar8 = (float *)(lVar6 + unaff_x23 * 8 + 0x20);
          fVar12 = *pfVar8;
          iVar3 = (**(code **)(*plVar9 + 0x188))(plVar9,*(undefined8 *)(*plVar9 + 400));
          if (fVar12 <= (float)iVar3) {
            fVar12 = (float)iVar3;
          }
          if (*(uint *)(lVar6 + 0x18) <= unaff_x23) goto LAB_01460f04;
          if (unaff_s11 <= fVar12) {
            fVar12 = unaff_s11;
          }
          *pfVar8 = fVar12;
          lVar6 = *(long *)(in_stack_00000018 + 0x30);
          if (lVar6 == 0) goto LAB_01460f00;
          if (*(uint *)(lVar6 + 0x18) <= unaff_x23) goto LAB_01460f04;
          pfVar8 = (float *)(lVar6 + unaff_x23 * 8 + 0x24);
          fVar12 = *pfVar8;
          iVar3 = (**(code **)(*plVar9 + 0x1a8))(plVar9,*(undefined8 *)(*plVar9 + 0x1b0));
          if (fVar12 <= (float)iVar3) {
            fVar12 = (float)iVar3;
          }
          if (*(uint *)(lVar6 + 0x18) <= unaff_x23) goto LAB_01460f04;
          if (unaff_s11 <= fVar12) {
            fVar12 = unaff_s11;
          }
          *pfVar8 = fVar12;
          lVar6 = *(long *)(in_stack_00000018 + 0x20);
          FUN_0132138c(in_stack_00000010,unaff_x23 & 0xffffffff,&stack0x00000028,
                       *(undefined8 *)StringLiteral_11624);
          if (((in_stack_00000028 == 0) || (lVar7 = *(long *)(in_stack_00000018 + 0x28), lVar7 == 0)
              ) || (unaff_x26 == 0)) goto LAB_01460f00;
          if (*(uint *)(lVar7 + 0x18) <= unaff_x23) goto LAB_01460f04;
          uVar4 = FUN_013e7c48(unaff_x26,*(undefined8 *)(in_stack_00000028 + 0x10),
                               lVar7 + unaff_x23 * 4 + 0x20,0);
          if (lVar6 == 0) goto LAB_01460f00;
          if (*(uint *)(lVar6 + 0x18) <= unaff_x23) goto LAB_01460f04;
          unaff_w28 = unaff_w28 | 1 < iVar2;
          *(undefined4 *)(lVar6 + unaff_x23 * 4 + 0x20) = uVar4;
        }
        uVar10 = uVar10 + 1;
      } while (uVar1 != uVar10);
    }
    unaff_x24 = &RCG_Lovesick_Props_SunGlassesPlacementPoint_<DestroyGlassesCoroutine>d__15_TypeInfo
    ;
    in_w8 = (uint)DAT_03776ae9;
  } while( true );
}


