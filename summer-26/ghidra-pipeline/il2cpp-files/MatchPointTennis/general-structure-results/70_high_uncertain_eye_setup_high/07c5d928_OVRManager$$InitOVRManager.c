/*
FUNCTION_NAME: OVRManager$$InitOVRManager
ENTRY_POINT: 07c5d928
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_6;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_6
*/


void OVRManager__InitOVRManager
               (undefined1 param_1 [16],ulong param_2,ulong param_3,undefined8 *param_4)

{
  int iVar1;
  undefined8 *puVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x22;
  int unaff_w23;
  long *plVar8;
  long *unaff_x25;
  long *unaff_x26;
  undefined1 unaff_w27;
  long unaff_x28;
  float fVar9;
  float fVar10;
  float fVar11;
  float unaff_s9;
  undefined8 unaff_d10;
  undefined8 uVar12;
  undefined8 unaff_d11;
  ulong unaff_d12;
  ulong unaff_d13;
  ulong uVar13;
  ulong uVar14;
  float fStack0000000000000008;
  float fStack000000000000000c;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  
  do {
    fVar11 = (float)param_3;
    fVar10 = (float)param_2;
    fVar9 = (float)FUN_07c5dcf0(param_4);
    if (*(char *)(unaff_x28 + 10) == '\0') {
      FUN_04447ba8();
      *(undefined1 *)(unaff_x28 + 10) = unaff_w27;
    }
    if (*(int *)(*unaff_x22 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
    }
    fVar9 = (float)unaff_d10 - fVar9;
    uVar4 = FUN_07c5ddb8(unaff_s9 +
                         SQRT((fStack000000000000000c - fVar11) * (fStack000000000000000c - fVar11)
                              + fVar9 * fVar9 +
                                (fStack0000000000000008 - fVar10) *
                                (fStack0000000000000008 - fVar10)));
    uVar6 = (ulong)(uint)fStack000000000000000c;
    uVar12 = unaff_d10;
    uVar13 = unaff_d13;
    uVar14 = (ulong)(uint)fStack0000000000000008;
    if ((uVar4 & 1) != 0) {
      return;
    }
    do {
      uVar4 = unaff_d12;
      unaff_d10 = unaff_d11;
      if (*(char *)(unaff_x28 + 10) == '\0') {
        FUN_04447ba8();
        *(undefined1 *)(unaff_x28 + 10) = unaff_w27;
      }
      if (*(int *)(*unaff_x22 + 0xe4) == 0) {
        thunk_FUN_044a54b4();
      }
      fVar9 = (float)uVar12 - (float)unaff_d10;
      fStack0000000000000008 = (float)uVar4;
      fVar10 = (float)uVar14 - fStack0000000000000008;
      fStack000000000000000c = (float)uVar13;
      fVar11 = (float)uVar6 - fStack000000000000000c;
      fVar10 = fVar10 * fVar10;
      unaff_d12 = (ulong)(uint)fVar10;
      plVar8 = *(long **)(unaff_x19 + 0x10);
      fVar11 = fVar11 * fVar11;
      unaff_d13 = (ulong)(uint)fVar11;
      unaff_s9 = unaff_s9 + SQRT(fVar11 + fVar9 * fVar9 + fVar10);
      unaff_w23 = unaff_w23 + 1;
      if (plVar8 == (long *)0x0) {
LAB_07c5da14:
                    /* WARNING: Subroutine does not return */
        FUN_04447e44();
      }
      lVar5 = *plVar8;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *unaff_x25) {
            puVar2 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_07c5d850;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar2 = (undefined8 *)FUN_044822ac(plVar8,*unaff_x25,0);
LAB_07c5d850:
      iVar1 = (*(code *)*puVar2)(plVar8,puVar2[1]);
      if (iVar1 <= unaff_w23) {
        return;
      }
      if (*(float *)(unaff_x19 + 0xc) < unaff_s9) {
        return;
      }
      plVar8 = *(long **)(unaff_x19 + 0x10);
      if (plVar8 == (long *)0x0) goto LAB_07c5da14;
      lVar5 = *plVar8;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *unaff_x25) {
            puVar2 = (undefined8 *)(lVar5 + (long)(*piVar7 + 1) * 0x10 + 0x138);
            goto OVRManager__Reset;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar2 = (undefined8 *)FUN_044822ac(plVar8,*unaff_x25,1);
OVRManager__Reset:
      unaff_d11 = (*(code *)*puVar2)(plVar8,unaff_w23,puVar2[1]);
      if (unaff_x20 == 0) goto LAB_07c5da14;
      param_2 = uVar4;
      param_3 = uVar13;
      uVar3 = FUN_07c5da5c(unaff_d10,uVar4,uVar13,unaff_d11,unaff_d12,unaff_d13);
      uVar6 = uVar13;
      uVar12 = unaff_d10;
      uVar13 = unaff_d13;
      uVar14 = uVar4;
    } while ((uVar3 & 1) == 0);
    if (*(int *)(*unaff_x26 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
    }
    param_4 = &stack0x00000040;
  } while( true );
}


