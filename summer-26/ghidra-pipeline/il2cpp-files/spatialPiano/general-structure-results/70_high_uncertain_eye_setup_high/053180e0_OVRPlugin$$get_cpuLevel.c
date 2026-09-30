/*
FUNCTION_NAME: OVRPlugin$$get_cpuLevel
ENTRY_POINT: 053180e0
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


long OVRPlugin__get_cpuLevel(long param_1,undefined8 param_2,long param_3)

{
  float fVar1;
  ulong uVar2;
  undefined8 *puVar3;
  ulong in_x9;
  int *in_x10;
  long in_x11;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long lVar4;
  long *unaff_x22;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  long *unaff_x26;
  long unaff_x27;
  undefined1 unaff_w28;
  undefined4 uVar5;
  float unaff_s8;
  long in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000098;
  
  do {
    if (in_x11 == param_3) {
      puVar3 = (undefined8 *)(param_1 + (long)(*in_x10 + 4) * 0x10 + 0x138);
      lVar4 = unaff_x21;
      unaff_x21 = unaff_x27;
      goto LAB_05318120;
    }
    in_x9 = in_x9 - 1;
                    /* try { // try from 053180ec to 054180ef has its CatchHandler @ 05318228 */
    in_x10 = in_x10 + 4;
                    /* try { // try from 053180f0 to 05418213 has its CatchHandler @ 05317d70 */
    if (in_x9 == 0) {
      do {
        puVar3 = (undefined8 *)FUN_02f421d0(unaff_x22,param_3,4);
        lVar4 = unaff_x21;
        unaff_x21 = unaff_x27;
LAB_05318120:
        uVar5 = (*(code *)*puVar3)(unaff_x22,puVar3[1]);
        while( true ) {
          if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f089c8(uVar5);
          }
          FUN_05316e9c(unaff_x21,unaff_x19 + 0x148,unaff_x19 + 0x150,(long)&stack0x00000098 + 4);
          fVar1 = in_stack_00000098._4_4_;
          if (unaff_s8 < in_stack_00000098._4_4_) {
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
            *(undefined1 *)(unaff_x19 + 0x168) = unaff_w28;
            unaff_x20 = lVar4;
            unaff_s8 = fVar1;
          }
          uVar2 = FUN_04bbfe84(&stack0x00000040,*unaff_x24);
          if ((uVar2 & 1) == 0) {
            FUN_04bc0140(in_stack_00000010,*unaff_x23);
            if (in_stack_00000008 != 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02f089c0(in_stack_00000008);
            }
            return unaff_x20;
          }
          unaff_x21 = FUN_04bbfd2c(&stack0x00000040,*unaff_x25);
          unaff_x22 = *(long **)(unaff_x19 + 0x120);
          if (unaff_x22 != (long *)0x0) break;
          uVar5 = 0x3f800000;
          lVar4 = unaff_x21;
        }
        param_1 = *unaff_x22;
        param_3 = *unaff_x26;
        in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
        unaff_x27 = unaff_x21;
      } while (in_x9 == 0);
      in_x10 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    }
    in_x11 = *(long *)(in_x10 + -2);
  } while( true );
}


