/*
FUNCTION_NAME: OVRManager$$OnDestroy
ENTRY_POINT: 0908c9d4
PROGRAM: Hyper-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__OnDestroy
               (long param_1,undefined1 param_2 [16],ulong param_3,ulong param_4,undefined8 param_5,
               long param_6)

{
  int iVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  ulong in_x9;
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
  float fVar13;
  float unaff_s8;
  float unaff_s9;
  float unaff_s14;
  ulong unaff_d15;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  
  do {
    fVar11 = (float)param_4;
    fVar10 = (float)unaff_d15;
    if (in_x9 != 0) {
      piVar6 = (int *)(*(long *)(param_1 + 0xb0) + 8);
      do {
                    /* try { // try from 0908c9e4 to 0918c9e7 has its CatchHandler @ 0908d590 */
                    /* try { // try from 0908c9e8 to 0918c9f3 has its CatchHandler @ 0908d664 */
        if (*(long *)(piVar6 + -2) == param_6) {
          puVar2 = (undefined8 *)(param_1 + (long)(*piVar6 + 1) * 0x10 + 0x138);
          uVar5 = param_3;
          goto LAB_0908ca18;
        }
        in_x9 = in_x9 - 1;
        piVar6 = piVar6 + 4;
      } while (in_x9 != 0);
    }
    puVar2 = (undefined8 *)FUN_04980e68(unaff_x24,param_6,1);
    uVar5 = param_3;
                    /* try { // try from 0908ca04 to 0918ca0b has its CatchHandler @ 0908d65c */
LAB_0908ca18:
    fVar8 = (float)(*(code *)*puVar2)(unaff_x24,unaff_w23,puVar2[1]);
    if (unaff_x20 == 0) {
LAB_0908cb6c:
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    fVar13 = fVar10;
    fVar12 = unaff_s8;
                    /* try { // try from 0908ca58 to 0918ca63 has its CatchHandler @ 0908d704 */
    uVar3 = FUN_0908cbb4(unaff_s14,unaff_d15 & 0xffffffff,unaff_s8,fVar8,(float)uVar5,fVar11);
    if ((uVar3 & 1) != 0) {
      if (*(int *)(*unaff_x26 + 0xe4) == 0) {
        thunk_FUN_049a583c();
      }
      fVar9 = (float)FUN_0908ce4c(&stack0x00000040);
      if (*(char *)(unaff_x28 + 0x13d) == '\0') {
        FUN_04947ee4();
        *(undefined1 *)(unaff_x28 + 0x13d) = unaff_w27;
      }
      if (*(int *)(*unaff_x22 + 0xe4) == 0) {
        thunk_FUN_049a583c();
      }
      uVar3 = FUN_0908cf14(unaff_s9 +
                           SQRT((unaff_s8 - fVar12) * (unaff_s8 - fVar12) +
                                (unaff_s14 - fVar9) * (unaff_s14 - fVar9) +
                                (fVar10 - fVar13) * (fVar10 - fVar13)));
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
    fVar10 = fVar10 - (float)uVar5;
    plVar7 = *(long **)(unaff_x19 + 0x10);
    fVar13 = unaff_s8 - fVar11;
    param_4 = (ulong)(uint)fVar13;
    unaff_w23 = unaff_w23 + 1;
    param_3 = (ulong)(uint)(fVar13 * fVar13);
    unaff_s9 = unaff_s9 +
               SQRT(fVar13 * fVar13 + (unaff_s14 - fVar8) * (unaff_s14 - fVar8) + fVar10 * fVar10);
    if (plVar7 == (long *)0x0) goto LAB_0908cb6c;
    lVar4 = *plVar7;
    unaff_d15 = uVar5 & 0xffffffff;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *unaff_x25) {
          puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_0908c9a0;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)FUN_04980e68(plVar7,*unaff_x25,0);
LAB_0908c9a0:
    iVar1 = (*(code *)*puVar2)(plVar7,puVar2[1]);
    if ((iVar1 <= unaff_w23) || (*(float *)(unaff_x19 + 0xc) < unaff_s9)) {
      return;
    }
    unaff_x24 = *(long **)(unaff_x19 + 0x10);
    if (unaff_x24 == (long *)0x0) goto LAB_0908cb6c;
    param_1 = *unaff_x24;
    param_6 = *unaff_x25;
    in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
    unaff_s14 = fVar8;
    unaff_s8 = fVar11;
  } while( true );
}


