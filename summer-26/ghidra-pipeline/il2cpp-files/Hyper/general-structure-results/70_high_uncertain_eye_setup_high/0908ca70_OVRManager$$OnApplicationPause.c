/*
FUNCTION_NAME: OVRManager$$OnApplicationPause
ENTRY_POINT: 0908ca70
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


void OVRManager__OnApplicationPause(undefined1 param_1 [16],ulong param_2,ulong param_3)

{
  int iVar1;
  undefined8 *puVar2;
  ulong uVar3;
  int in_w8;
  long lVar4;
  int *piVar5;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x22;
  int unaff_w23;
  long *plVar6;
  long *unaff_x25;
  long *unaff_x26;
  undefined1 unaff_w27;
  long unaff_x28;
  float fVar7;
  float fVar8;
  float fVar9;
  float unaff_s9;
  float unaff_s10;
  float unaff_s11;
  float unaff_s12;
  float unaff_s13;
  float fStack0000000000000008;
  float fStack000000000000000c;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  
  do {
    fVar9 = (float)param_3;
    fVar8 = (float)param_2;
    if (in_w8 == 0) {
      thunk_FUN_049a583c();
    }
    fVar7 = (float)FUN_0908ce4c(&stack0x00000040);
                    /* try { // try from 0908ca80 to 0918ca83 has its CatchHandler @ 0908d584 */
                    /* try { // try from 0908ca84 to 0918ca8f has its CatchHandler @ 0908d640 */
    if (*(char *)(unaff_x28 + 0x13d) == '\0') {
      FUN_04947ee4();
      *(undefined1 *)(unaff_x28 + 0x13d) = unaff_w27;
    }
                    /* try { // try from 0908caa4 to 0918caaf has its CatchHandler @ 0908d650 */
    if (*(int *)(*unaff_x22 + 0xe4) == 0) {
      thunk_FUN_049a583c();
    }
    uVar3 = FUN_0908cf14(unaff_s9 +
                         SQRT((fStack000000000000000c - fVar9) * (fStack000000000000000c - fVar9) +
                              (fStack0000000000000008 - fVar7) * (fStack0000000000000008 - fVar7) +
                              (unaff_s10 - fVar8) * (unaff_s10 - fVar8)));
    fVar8 = fStack0000000000000008;
    fVar9 = fStack000000000000000c;
    fVar7 = unaff_s10;
    if ((uVar3 & 1) != 0) {
      return;
    }
    do {
      fStack0000000000000008 = unaff_s11;
      unaff_s10 = unaff_s12;
      fStack000000000000000c = unaff_s13;
      if (*(char *)(unaff_x28 + 0x13d) == '\0') {
        FUN_04947ee4();
        *(undefined1 *)(unaff_x28 + 0x13d) = unaff_w27;
      }
      if (*(int *)(*unaff_x22 + 0xe4) == 0) {
        thunk_FUN_049a583c();
      }
      plVar6 = *(long **)(unaff_x19 + 0x10);
      unaff_s13 = fVar9 - fStack000000000000000c;
      unaff_w23 = unaff_w23 + 1;
      unaff_s12 = unaff_s13 * unaff_s13;
      unaff_s9 = unaff_s9 +
                 SQRT(unaff_s12 +
                      (fVar8 - fStack0000000000000008) * (fVar8 - fStack0000000000000008) +
                      (fVar7 - unaff_s10) * (fVar7 - unaff_s10));
      if (plVar6 == (long *)0x0) {
LAB_0908cb6c:
                    /* WARNING: Subroutine does not return */
        FUN_0494818c();
      }
      lVar4 = *plVar6;
      uVar3 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar3 != 0) {
        piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == *unaff_x25) {
            puVar2 = (undefined8 *)(lVar4 + (long)*piVar5 * 0x10 + 0x138);
            goto LAB_0908c9a0;
          }
          uVar3 = uVar3 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar3 != 0);
      }
      puVar2 = (undefined8 *)FUN_04980e68(plVar6,*unaff_x25,0);
LAB_0908c9a0:
      iVar1 = (*(code *)*puVar2)(plVar6,puVar2[1]);
      if (iVar1 <= unaff_w23) {
        return;
      }
      if (*(float *)(unaff_x19 + 0xc) < unaff_s9) {
        return;
      }
      plVar6 = *(long **)(unaff_x19 + 0x10);
      if (plVar6 == (long *)0x0) goto LAB_0908cb6c;
      lVar4 = *plVar6;
      uVar3 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar3 != 0) {
        piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == *unaff_x25) {
            puVar2 = (undefined8 *)(lVar4 + (long)(*piVar5 + 1) * 0x10 + 0x138);
            goto LAB_0908ca18;
          }
          uVar3 = uVar3 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar3 != 0);
      }
      puVar2 = (undefined8 *)FUN_04980e68(plVar6,*unaff_x25,1);
LAB_0908ca18:
      unaff_s11 = (float)(*(code *)*puVar2)(plVar6,unaff_w23,puVar2[1]);
      if (unaff_x20 == 0) goto LAB_0908cb6c;
      param_2 = (ulong)(uint)unaff_s10;
      param_3 = (ulong)(uint)fStack000000000000000c;
      uVar3 = FUN_0908cbb4(fStack0000000000000008,param_2,param_3,unaff_s11,unaff_s12,unaff_s13);
      fVar8 = fStack0000000000000008;
      fVar9 = fStack000000000000000c;
      fVar7 = unaff_s10;
    } while ((uVar3 & 1) == 0);
    in_w8 = *(int *)(*unaff_x26 + 0xe4);
  } while( true );
}


