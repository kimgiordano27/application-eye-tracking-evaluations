/*
FUNCTION_NAME: OVRManager$$Reset
ENTRY_POINT: 07c5d8c8
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__Reset(undefined1 param_1 [16],ulong param_2,ulong param_3,undefined8 *param_4)

{
  int iVar1;
  undefined8 *puVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  int *piVar6;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x22;
  int unaff_w23;
  long *unaff_x24;
  long *plVar7;
  long *unaff_x25;
  long *unaff_x26;
  undefined1 unaff_w27;
  long unaff_x28;
  float fVar8;
  float fVar9;
  undefined8 uVar10;
  float fVar11;
  float fVar12;
  ulong uVar13;
  float fVar14;
  ulong uVar15;
  ulong uVar16;
  ulong unaff_d8;
  float unaff_s9;
  undefined8 unaff_d10;
  ulong unaff_d14;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  
code_r0x07c5d8c8:
  do {
    uVar15 = param_3;
    uVar13 = param_2;
    uVar10 = (*(code *)*param_4)(unaff_x24,unaff_w23,param_4[1]);
    if (unaff_x20 == 0) {
LAB_07c5da14:
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    uVar4 = unaff_d14;
    uVar16 = unaff_d8;
    uVar3 = FUN_07c5da5c(unaff_d10,unaff_d14,unaff_d8,uVar10,uVar13,uVar15);
    fVar12 = (float)uVar16;
    fVar9 = (float)uVar4;
    if ((uVar3 & 1) != 0) {
      fVar11 = (float)unaff_d14;
      fVar14 = (float)unaff_d8;
      if (*(int *)(*unaff_x26 + 0xe4) == 0) {
        thunk_FUN_044a54b4();
      }
      fVar8 = (float)FUN_07c5dcf0(&stack0x00000040);
      if (*(char *)(unaff_x28 + 10) == '\0') {
        FUN_04447ba8();
        *(undefined1 *)(unaff_x28 + 10) = unaff_w27;
      }
      if (*(int *)(*unaff_x22 + 0xe4) == 0) {
        thunk_FUN_044a54b4();
      }
      fVar8 = (float)unaff_d10 - fVar8;
      unaff_d14 = unaff_d14 & 0xffffffff;
      unaff_d8 = unaff_d8 & 0xffffffff;
      fVar11 = fVar11 - fVar9;
      fVar14 = fVar14 - fVar12;
      uVar4 = FUN_07c5ddb8(unaff_s9 + SQRT(fVar14 * fVar14 + fVar8 * fVar8 + fVar11 * fVar11));
      if ((uVar4 & 1) != 0) {
        return;
      }
    }
    if (*(char *)(unaff_x28 + 10) == '\0') {
      FUN_04447ba8();
      *(undefined1 *)(unaff_x28 + 10) = unaff_w27;
    }
    if (*(int *)(*unaff_x22 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
    }
    fVar9 = (float)unaff_d10 - (float)uVar10;
    fVar12 = (float)unaff_d14 - (float)uVar13;
    fVar11 = (float)unaff_d8 - (float)uVar15;
    fVar12 = fVar12 * fVar12;
    param_2 = (ulong)(uint)fVar12;
    plVar7 = *(long **)(unaff_x19 + 0x10);
    fVar11 = fVar11 * fVar11;
    param_3 = (ulong)(uint)fVar11;
    unaff_s9 = unaff_s9 + SQRT(fVar11 + fVar9 * fVar9 + fVar12);
    unaff_w23 = unaff_w23 + 1;
    if (plVar7 == (long *)0x0) goto LAB_07c5da14;
    lVar5 = *plVar7;
    uVar4 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar4 != 0) {
      piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *unaff_x25) {
          puVar2 = (undefined8 *)(lVar5 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_07c5d850;
        }
        uVar4 = uVar4 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined8 *)FUN_044822ac(plVar7,*unaff_x25,0);
LAB_07c5d850:
    iVar1 = (*(code *)*puVar2)(plVar7,puVar2[1]);
    if ((iVar1 <= unaff_w23) || (*(float *)(unaff_x19 + 0xc) < unaff_s9)) {
      return;
    }
    unaff_x24 = *(long **)(unaff_x19 + 0x10);
    if (unaff_x24 == (long *)0x0) goto LAB_07c5da14;
    lVar5 = *unaff_x24;
    uVar4 = (ulong)*(ushort *)(lVar5 + 0x12e);
    unaff_d8 = uVar15;
    unaff_d10 = uVar10;
    unaff_d14 = uVar13;
    if (uVar4 != 0) {
      piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *unaff_x25) {
          param_4 = (undefined8 *)(lVar5 + (long)(*piVar6 + 1) * 0x10 + 0x138);
          goto code_r0x07c5d8c8;
        }
        uVar4 = uVar4 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar4 != 0);
    }
    param_4 = (undefined8 *)FUN_044822ac(unaff_x24,*unaff_x25,1);
  } while( true );
}


