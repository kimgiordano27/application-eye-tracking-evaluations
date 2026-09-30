/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Gizmo.GizmoTypesRegistry.<>c$$<InitGizmos>b__3_2
ENTRY_POINT: 01460c40
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


void Meta_XR_ImmersiveDebugger_Gizmo_GizmoTypesRegistry_<>c__<InitGizmos>b__3_2(void)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  ulong uVar5;
  int in_w9;
  long lVar6;
  uint unaff_w19;
  long unaff_x20;
  float *pfVar7;
  long *unaff_x22;
  ulong unaff_x23;
  long *unaff_x25;
  long unaff_x26;
  long lVar8;
  uint unaff_w27;
  byte unaff_w28;
  int unaff_w29;
  double dVar9;
  float fVar10;
  float unaff_s11;
  undefined8 unaff_d12;
  undefined8 in_stack_00000008;
  long in_stack_00000010;
  long in_stack_00000018;
  long in_stack_00000028;
  
  do {
    if (in_w9 == 0) {
      thunk_FUN_00d32864();
    }
    uVar5 = FUN_02681b9c(unaff_x25,0,0);
    if ((uVar5 & 1) != 0) {
      if (unaff_x25 == (long *)0x0) goto LAB_01460f00;
      iVar2 = FUN_0266fcfc(unaff_x25,0);
      iVar3 = FUN_0266fcfc(unaff_x25,0);
      if (unaff_w29 <= iVar3) {
        unaff_w29 = iVar3;
      }
      lVar8 = *(long *)(in_stack_00000018 + 0x30);
      if (lVar8 == 0) goto LAB_01460f00;
      if (*(uint *)(lVar8 + 0x18) <= unaff_x23) {
LAB_01460f04:
                    /* WARNING: Subroutine does not return */
        FUN_00da5194();
      }
      pfVar7 = (float *)(lVar8 + unaff_x23 * 8 + 0x20);
      fVar10 = *pfVar7;
      iVar3 = (**(code **)(*unaff_x25 + 0x188))(unaff_x25,*(undefined8 *)(*unaff_x25 + 400));
      if (fVar10 <= (float)iVar3) {
        fVar10 = (float)iVar3;
      }
      if (*(uint *)(lVar8 + 0x18) <= unaff_x23) goto LAB_01460f04;
      if (unaff_s11 <= fVar10) {
        fVar10 = unaff_s11;
      }
      *pfVar7 = fVar10;
      lVar8 = *(long *)(in_stack_00000018 + 0x30);
      if (lVar8 == 0) goto LAB_01460f00;
      if (*(uint *)(lVar8 + 0x18) <= unaff_x23) goto LAB_01460f04;
      pfVar7 = (float *)(lVar8 + unaff_x23 * 8 + 0x24);
      fVar10 = *pfVar7;
      iVar3 = (**(code **)(*unaff_x25 + 0x1a8))(unaff_x25,*(undefined8 *)(*unaff_x25 + 0x1b0));
      if (fVar10 <= (float)iVar3) {
        fVar10 = (float)iVar3;
      }
      if (*(uint *)(lVar8 + 0x18) <= unaff_x23) goto LAB_01460f04;
      if (unaff_s11 <= fVar10) {
        fVar10 = unaff_s11;
      }
      *pfVar7 = fVar10;
      lVar8 = *(long *)(in_stack_00000018 + 0x20);
      FUN_0132138c(in_stack_00000010,unaff_x23 & 0xffffffff,&stack0x00000028,
                   *(undefined8 *)StringLiteral_11624);
      if (((in_stack_00000028 == 0) || (lVar6 = *(long *)(in_stack_00000018 + 0x28), lVar6 == 0)) ||
         (unaff_x26 == 0)) goto LAB_01460f00;
      if (*(uint *)(lVar6 + 0x18) <= unaff_x23) goto LAB_01460f04;
      uVar4 = FUN_013e7c48(unaff_x26,*(undefined8 *)(in_stack_00000028 + 0x10),
                           lVar6 + unaff_x23 * 4 + 0x20,0);
      if (lVar8 == 0) goto LAB_01460f00;
      if (*(uint *)(lVar8 + 0x18) <= unaff_x23) goto LAB_01460f04;
      unaff_w28 = unaff_w28 | 1 < iVar2;
      *(undefined4 *)(lVar8 + unaff_x23 * 4 + 0x20) = uVar4;
      unaff_w19 = in_stack_00000008._4_4_;
    }
    unaff_w27 = unaff_w27 + 1;
    if (unaff_w19 == unaff_w27) {
      while( true ) {
        puVar1 = System_Threading_Timer_TimerComparer_TypeInfo;
        if (DAT_03776ae9 == '\0') {
          thunk_FUN_00d48444(System_Threading_Timer_TimerComparer_TypeInfo);
          DAT_03776ae9 = '\x01';
        }
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        dVar9 = (double)FUN_01772228(0);
        if (DAT_03775e60 == '\0') {
          thunk_FUN_00d48444(puVar1);
          DAT_03775e60 = '\x01';
        }
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        lVar8 = *(long *)(in_stack_00000018 + 0x18);
        iVar2 = -0x7fffffff;
        if ((float)(int)dVar9 != INFINITY) {
          iVar2 = (int)dVar9 + 1;
        }
        if (unaff_w29 <= iVar2) {
          iVar2 = unaff_w29;
        }
        if (lVar8 == 0) goto LAB_01460f00;
        if (*(uint *)(lVar8 + 0x18) <= unaff_x23) goto LAB_01460f04;
        *(int *)(lVar8 + unaff_x23 * 4 + 0x20) = iVar2;
        lVar8 = *(long *)(in_stack_00000018 + 0x10);
        if (lVar8 == 0) goto LAB_01460f00;
        if (*(uint *)(lVar8 + 0x18) <= unaff_x23) goto LAB_01460f04;
        *(byte *)(lVar8 + unaff_x23 + 0x20) = unaff_w28 & 1;
        unaff_x23 = unaff_x23 + 1;
        if ((long)*(int *)(in_stack_00000010 + 0x18) <= (long)unaff_x23) {
          return;
        }
        lVar8 = *(long *)(in_stack_00000018 + 0x30);
        if (lVar8 == 0) goto LAB_01460f00;
        if (*(uint *)(lVar8 + 0x18) <= unaff_x23) goto LAB_01460f04;
        unaff_w19 = *(uint *)(unaff_x20 + 0x18);
        unaff_w28 = 0;
        *(undefined8 *)(lVar8 + unaff_x23 * 8 + 0x20) = unaff_d12;
        if (0 < (int)unaff_w19) break;
        unaff_w29 = 1;
      }
      unaff_w27 = 0;
      unaff_w29 = 1;
      in_stack_00000008._4_4_ = unaff_w19;
    }
    if (*(uint *)(unaff_x20 + 0x18) <= unaff_w27) goto LAB_01460f04;
    lVar8 = *(long *)(unaff_x20 + (long)(int)unaff_w27 * 8 + 0x20);
    if ((lVar8 == 0) || (lVar8 = *(long *)(lVar8 + 0x10), lVar8 == 0)) {
LAB_01460f00:
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    if (*(uint *)(lVar8 + 0x18) <= unaff_x23) goto LAB_01460f04;
    unaff_x25 = *(long **)(lVar8 + unaff_x23 * 8 + 0x20);
    in_w9 = *(int *)(*unaff_x22 + 0xe0);
  } while( true );
}


