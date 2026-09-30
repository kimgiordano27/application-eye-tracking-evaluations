/*
FUNCTION_NAME: OVRManager$$FixedUpdate
ENTRY_POINT: 0908c984
PROGRAM: Hyper-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__FixedUpdate
               (undefined1 param_1 [16],ulong param_2,ulong param_3,undefined8 param_4,long param_5)

{
  int iVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
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
  float fVar10;
  float fVar11;
  float fVar12;
  float unaff_s8;
  float unaff_s9;
  float unaff_s14;
  float fVar13;
  ulong unaff_d15;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  
code_r0x0908c984:
  puVar2 = (undefined8 *)FUN_04980e68(unaff_x24,param_5,0);
  fVar13 = unaff_s14;
  fVar12 = unaff_s8;
  do {
    unaff_s8 = (float)param_3;
    fVar9 = (float)unaff_d15;
    iVar1 = (*(code *)*puVar2)(unaff_x24,puVar2[1]);
                    /* try { // try from 0908c9bc to 0918c9c7 has its CatchHandler @ 0908d70c */
    if ((iVar1 <= unaff_w23) || (*(float *)(unaff_x19 + 0xc) < unaff_s9)) {
      return;
    }
    plVar7 = *(long **)(unaff_x19 + 0x10);
    if (plVar7 == (long *)0x0) {
LAB_0908cb6c:
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    lVar4 = *plVar7;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *unaff_x25) {
          puVar2 = (undefined8 *)(lVar4 + (long)(*piVar6 + 1) * 0x10 + 0x138);
          uVar5 = param_2;
          goto LAB_0908ca18;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)FUN_04980e68(plVar7,*unaff_x25,1);
    uVar5 = param_2;
LAB_0908ca18:
    unaff_s14 = (float)(*(code *)*puVar2)(plVar7,unaff_w23,puVar2[1]);
    if (unaff_x20 == 0) goto LAB_0908cb6c;
    fVar10 = fVar9;
    fVar11 = fVar12;
    uVar3 = FUN_0908cbb4(fVar13,unaff_d15 & 0xffffffff,fVar12,unaff_s14,(float)uVar5,unaff_s8);
    if ((uVar3 & 1) != 0) {
      if (*(int *)(*unaff_x26 + 0xe4) == 0) {
        thunk_FUN_049a583c();
      }
      fVar8 = (float)FUN_0908ce4c(&stack0x00000040);
      if (*(char *)(unaff_x28 + 0x13d) == '\0') {
        FUN_04947ee4();
        *(undefined1 *)(unaff_x28 + 0x13d) = unaff_w27;
      }
      if (*(int *)(*unaff_x22 + 0xe4) == 0) {
        thunk_FUN_049a583c();
      }
      uVar3 = FUN_0908cf14(unaff_s9 +
                           SQRT((fVar12 - fVar11) * (fVar12 - fVar11) +
                                (fVar13 - fVar8) * (fVar13 - fVar8) +
                                (fVar9 - fVar10) * (fVar9 - fVar10)));
      if ((uVar3 & 1) != 0) {
        return;
      }
    }
    if (*(char *)(unaff_x28 + 0x13d) == '\0') {
      FUN_04947ee4();
      *(undefined1 *)(unaff_x28 + 0x13d) = unaff_w27;
    }
    if (*(int *)(*unaff_x22 + 0xe4) == 0) {
      thunk_FUN_049a583c();
    }
    fVar9 = fVar9 - (float)uVar5;
    unaff_x24 = *(long **)(unaff_x19 + 0x10);
    fVar12 = fVar12 - unaff_s8;
    param_3 = (ulong)(uint)fVar12;
    unaff_w23 = unaff_w23 + 1;
    param_2 = (ulong)(uint)(fVar12 * fVar12);
    unaff_s9 = unaff_s9 +
               SQRT(fVar12 * fVar12 + (fVar13 - unaff_s14) * (fVar13 - unaff_s14) + fVar9 * fVar9);
    if (unaff_x24 == (long *)0x0) goto LAB_0908cb6c;
    lVar4 = *unaff_x24;
    unaff_d15 = uVar5 & 0xffffffff;
    param_5 = *unaff_x25;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 == 0) goto code_r0x0908c984;
    piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    while (*(long *)(piVar6 + -2) != param_5) {
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
      if (uVar5 == 0) goto code_r0x0908c984;
    }
    puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
    fVar13 = unaff_s14;
    fVar12 = unaff_s8;
  } while( true );
}


