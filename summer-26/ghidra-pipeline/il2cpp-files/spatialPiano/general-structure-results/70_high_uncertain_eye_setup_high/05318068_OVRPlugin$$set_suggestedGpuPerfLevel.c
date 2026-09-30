/*
FUNCTION_NAME: OVRPlugin$$set_suggestedGpuPerfLevel
ENTRY_POINT: 05318068
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x053181cc) */

long OVRPlugin__set_suggestedGpuPerfLevel(void)

{
  float fVar1;
  ulong uVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  int *piVar6;
  long unaff_x19;
  long lVar7;
  long *plVar8;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  long *unaff_x26;
  undefined8 uVar9;
  float fVar10;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000098;
  
  FUN_037d833c();
                    /* try { // try from 0531806c to 05418073 has its CatchHandler @ 0531821c */
  in_stack_00000048 = in_stack_00000010;
  in_stack_00000040 = in_stack_00000008;
  in_stack_00000058 = in_stack_00000020;
  in_stack_00000050 = in_stack_00000018;
                    /* try { // try from 05318090 to 05418097 has its CatchHandler @ 05318218 */
  lVar7 = 0;
  fVar10 = -INFINITY;
  do {
                    /* try { // try from 05318098 to 054180db has its CatchHandler @ 05318224 */
    uVar2 = FUN_04bbfe84(&stack0x00000040,*unaff_x24);
    if ((uVar2 & 1) == 0) {
      FUN_04bc0140(&stack0x00000040,*unaff_x23);
      return lVar7;
    }
    lVar3 = FUN_04bbfd2c(&stack0x00000040,*unaff_x25);
    plVar8 = *(long **)(unaff_x19 + 0x120);
    if (plVar8 == (long *)0x0) {
      uVar9 = 0x3f800000;
    }
    else {
      lVar5 = *plVar8;
      uVar2 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar2 != 0) {
        piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *unaff_x26) {
            puVar4 = (undefined8 *)(lVar5 + (long)(*piVar6 + 4) * 0x10 + 0x138);
            goto LAB_05318120;
          }
          uVar2 = uVar2 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar2 != 0);
      }
      puVar4 = (undefined8 *)FUN_02f421d0(plVar8,*unaff_x26,4);
LAB_05318120:
      uVar9 = (*(code *)*puVar4)(plVar8,puVar4[1]);
    }
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8(uVar9);
    }
    FUN_05316e9c(lVar3,unaff_x19 + 0x148,unaff_x19 + 0x150,(long)&stack0x00000098 + 4);
    fVar1 = in_stack_00000098._4_4_;
    if (fVar10 < in_stack_00000098._4_4_) {
      if (*(long *)(unaff_x19 + 0x138) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      FUN_05310ddc(*(long *)(unaff_x19 + 0x138),*(undefined8 *)(unaff_x19 + 0x148),0);
      if (*(long *)(unaff_x19 + 0x140) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      FUN_05310ddc(*(long *)(unaff_x19 + 0x140),*(undefined8 *)(unaff_x19 + 0x150),0);
      *(undefined1 *)(unaff_x19 + 0x168) = 1;
      lVar7 = lVar3;
      fVar10 = fVar1;
    }
  } while( true );
}


