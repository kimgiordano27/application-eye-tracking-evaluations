/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Gizmo.GizmoTypesRegistry.<>c$$<InitGizmos>b__3_3
ENTRY_POINT: 01460d00
PROGRAM: Lovesick-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_15;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_4;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Gizmo_GizmoTypesRegistry_<>c__<InitGizmos>b__3_3(void)

{
  undefined *puVar1;
  undefined1 in_CY;
  int iVar2;
  undefined4 uVar3;
  ulong uVar4;
  long lVar5;
  byte unaff_w19;
  uint uVar6;
  long *unaff_x20;
  float *pfVar7;
  byte unaff_w22;
  ulong unaff_x23;
  long unaff_x24;
  long *unaff_x25;
  long lVar8;
  long unaff_x26;
  uint unaff_w27;
  long unaff_x28;
  int unaff_w29;
  double dVar9;
  float fVar10;
  float unaff_s11;
  undefined8 unaff_d12;
  undefined8 in_stack_00000008;
  long in_stack_00000010;
  long in_stack_00000018;
  long in_stack_00000028;
  
  while (!(bool)in_CY) {
    pfVar7 = (float *)(unaff_x26 + unaff_x23 * 8 + 0x24);
    fVar10 = *pfVar7;
    iVar2 = (**(code **)(*unaff_x25 + 0x1a8))(unaff_x25,*(undefined8 *)(*unaff_x25 + 0x1b0));
    if (fVar10 <= (float)iVar2) {
      fVar10 = (float)iVar2;
    }
    if (*(uint *)(unaff_x26 + 0x18) <= unaff_x23) break;
    if (unaff_s11 <= fVar10) {
      fVar10 = unaff_s11;
    }
    *pfVar7 = fVar10;
    lVar8 = *(long *)(in_stack_00000018 + 0x20);
    FUN_0132138c(in_stack_00000010,unaff_x23 & 0xffffffff,&stack0x00000028,
                 *(undefined8 *)StringLiteral_11624);
    if (((in_stack_00000028 == 0) || (lVar5 = *(long *)(in_stack_00000018 + 0x28), lVar5 == 0)) ||
       (unaff_x28 == 0)) {
LAB_01460f00:
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    if (*(uint *)(lVar5 + 0x18) <= unaff_x23) break;
    uVar3 = FUN_013e7c48(unaff_x28,*(undefined8 *)(in_stack_00000028 + 0x10),
                         lVar5 + unaff_x23 * 4 + 0x20,0);
    if (lVar8 == 0) goto LAB_01460f00;
    if (*(uint *)(lVar8 + 0x18) <= unaff_x23) break;
    unaff_w19 = unaff_w19 | unaff_w22;
    *(undefined4 *)(lVar8 + unaff_x23 * 4 + 0x20) = uVar3;
    uVar6 = in_stack_00000008._4_4_;
    do {
      unaff_w27 = unaff_w27 + 1;
      if (uVar6 == unaff_w27) {
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
          *(byte *)(lVar8 + unaff_x23 + 0x20) = unaff_w19 & 1;
          unaff_x23 = unaff_x23 + 1;
          if ((long)*(int *)(in_stack_00000010 + 0x18) <= (long)unaff_x23) {
            return;
          }
          lVar8 = *(long *)(in_stack_00000018 + 0x30);
          if (lVar8 == 0) goto LAB_01460f00;
          if (*(uint *)(lVar8 + 0x18) <= unaff_x23) goto LAB_01460f04;
          uVar6 = *(uint *)(unaff_x24 + 0x18);
          unaff_w19 = 0;
          *(undefined8 *)(lVar8 + unaff_x23 * 8 + 0x20) = unaff_d12;
          if (0 < (int)uVar6) break;
          unaff_w29 = 1;
        }
        unaff_w27 = 0;
        unaff_w29 = 1;
        in_stack_00000008._4_4_ = uVar6;
      }
      if (*(uint *)(unaff_x24 + 0x18) <= unaff_w27) goto LAB_01460f04;
      lVar8 = *(long *)(unaff_x24 + (long)(int)unaff_w27 * 8 + 0x20);
      if ((lVar8 == 0) || (lVar8 = *(long *)(lVar8 + 0x10), lVar8 == 0)) goto LAB_01460f00;
      if (*(uint *)(lVar8 + 0x18) <= unaff_x23) goto LAB_01460f04;
      unaff_x25 = *(long **)(lVar8 + unaff_x23 * 8 + 0x20);
      if (*(int *)(*unaff_x20 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar4 = FUN_02681b9c(unaff_x25,0,0);
    } while ((uVar4 & 1) == 0);
    if (unaff_x25 == (long *)0x0) goto LAB_01460f00;
    iVar2 = FUN_0266fcfc(unaff_x25,0);
    unaff_w22 = 1 < iVar2;
    iVar2 = FUN_0266fcfc(unaff_x25,0);
    if (unaff_w29 <= iVar2) {
      unaff_w29 = iVar2;
    }
    lVar8 = *(long *)(in_stack_00000018 + 0x30);
    if (lVar8 == 0) goto LAB_01460f00;
    if (*(uint *)(lVar8 + 0x18) <= unaff_x23) break;
    pfVar7 = (float *)(lVar8 + unaff_x23 * 8 + 0x20);
    fVar10 = *pfVar7;
    iVar2 = (**(code **)(*unaff_x25 + 0x188))(unaff_x25,*(undefined8 *)(*unaff_x25 + 400));
    if (fVar10 <= (float)iVar2) {
      fVar10 = (float)iVar2;
    }
    if (*(uint *)(lVar8 + 0x18) <= unaff_x23) break;
    if (unaff_s11 <= fVar10) {
      fVar10 = unaff_s11;
    }
    *pfVar7 = fVar10;
    unaff_x26 = *(long *)(in_stack_00000018 + 0x30);
    if (unaff_x26 == 0) goto LAB_01460f00;
    in_CY = *(uint *)(unaff_x26 + 0x18) <= unaff_x23;
  }
LAB_01460f04:
                    /* WARNING: Subroutine does not return */
  FUN_00da5194();
}


