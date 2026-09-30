/*
FUNCTION_NAME: OVRPlugin.Media$$SetMrcFrameSize
ENTRY_POINT: 02c45684
PROGRAM: sharks-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x02c45778) */
/* WARNING: Removing unreachable block (ram,0x02c4573c) */

void OVRPlugin_Media__SetMrcFrameSize(undefined8 param_1,int param_2)

{
  bool in_ZR;
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  undefined8 *unaff_x19;
  long *unaff_x21;
  long lVar6;
  undefined8 in_stack_00000008;
  
  if (in_ZR) {
    plVar2 = (long *)__cxa_begin_catch();
    lVar6 = *plVar2;
    __cxa_end_catch();
    if (unaff_x21 != (long *)0x0) {
      lVar3 = *unaff_x21;
      uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar4 != 0) {
        piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_037f3288) {
            puVar1 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
            goto LAB_02c455ac;
          }
          uVar4 = uVar4 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar4 != 0);
      }
      puVar1 = (undefined8 *)FUN_0185dba8();
LAB_02c455ac:
      (*(code *)*puVar1)();
    }
    if (lVar6 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_017fc5a0(lVar6);
    }
    lVar6 = 0;
  }
  else {
    if (unaff_x21 != (long *)0x0) {
      lVar6 = *unaff_x21;
      uVar4 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar4 != 0) {
        piVar5 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_037f3288) {
            puVar1 = (undefined8 *)(lVar6 + (long)*piVar5 * 0x10 + 0x138);
            goto code_r0x02c45708;
          }
          uVar4 = uVar4 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar4 != 0);
      }
      puVar1 = (undefined8 *)FUN_0185dba8();
code_r0x02c45708:
      (*(code *)*puVar1)();
    }
    if (param_2 != 1) {
      if (in_stack_00000008._4_1_ != '\0') {
        thunk_FUN_0184c01c();
      }
                    /* WARNING: Subroutine does not return */
      FUN_018fe5f4();
    }
    plVar2 = (long *)__cxa_begin_catch();
    lVar6 = *plVar2;
    __cxa_end_catch();
  }
  if (in_stack_00000008._4_1_ != '\0') {
    thunk_FUN_0184c01c();
  }
  if (lVar6 == 0) {
    thunk_FUN_0181f594();
    *unaff_x19 = 0;
    thunk_FUN_0188fd20();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_017fc5a0(lVar6);
}


