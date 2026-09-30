/*
FUNCTION_NAME: OVRPlugin$$set_cpuLevel
ENTRY_POINT: 05318130
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


long OVRPlugin__set_cpuLevel(undefined4 param_1,long param_2)

{
  float fVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long lVar4;
  int *piVar5;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long *plVar6;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  long *unaff_x26;
  undefined1 unaff_w28;
  float unaff_s8;
  long in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000098;
  
  do {
    while( true ) {
      if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8(param_1);
      }
      FUN_05316e9c(param_2,unaff_x19 + 0x148,unaff_x19 + 0x150,(long)&stack0x00000098 + 4);
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
        unaff_x20 = unaff_x21;
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
      param_2 = FUN_04bbfd2c(&stack0x00000040,*unaff_x25);
      plVar6 = *(long **)(unaff_x19 + 0x120);
      unaff_x21 = param_2;
      if (plVar6 != (long *)0x0) break;
      param_1 = 0x3f800000;
    }
    lVar4 = *plVar6;
    uVar2 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar2 != 0) {
      piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x26) {
          puVar3 = (undefined8 *)(lVar4 + (long)(*piVar5 + 4) * 0x10 + 0x138);
          goto LAB_05318120;
        }
        uVar2 = uVar2 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar2 != 0);
    }
    puVar3 = (undefined8 *)FUN_02f421d0(plVar6,*unaff_x26,4);
LAB_05318120:
    param_1 = (*(code *)*puVar3)(plVar6,puVar3[1]);
  } while( true );
}


