/*
FUNCTION_NAME: OVRPlugin$$get_nativeSDKVersion
ENTRY_POINT: 02c184bc
PROGRAM: sharks-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


long OVRPlugin__get_nativeSDKVersion(long *param_1)

{
  uint uVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 unaff_x19;
  ulong unaff_x20;
  long lVar5;
  long unaff_x23;
  long unaff_x24;
  long unaff_x25;
  uint unaff_w26;
  undefined8 unaff_x27;
  long unaff_x28;
  long in_stack_00000000;
  ulong in_stack_00000008;
  
  do {
    if (param_1 == (long *)0x0) {
LAB_02c18750:
                    /* WARNING: Subroutine does not return */
      FUN_017fc5a8();
    }
    uVar3 = (**(code **)(*param_1 + 0x1d8))(param_1,*(undefined8 *)(*param_1 + 0x1e0));
    uVar1 = FUN_02c17acc(unaff_x27,uVar3);
    unaff_w26 = unaff_w26 & uVar1;
    if ((long)*(int *)(unaff_x25 + 0x18) <= (long)unaff_x20) {
      if ((unaff_w26 & 1) == 0) {
        if ((in_stack_00000008 & 0x100000000) != 0) {
          thunk_FUN_01851c08(PTR_DAT_037f87a8);
          uVar4 = thunk_FUN_01861bbc();
          uVar3 = thunk_FUN_01851c08(PTR_DAT_0380b750);
          System_Threading_Tasks_Task__Finish(uVar4,uVar3,0);
          uVar3 = thunk_FUN_01851c08(PTR_DAT_0380b748);
                    /* WARNING: Subroutine does not return */
          FUN_017fc474(uVar4,uVar3);
        }
        lVar5 = 0;
      }
      else {
        lVar5 = FUN_017f7f70();
        if (lVar5 == 0) {
          if (in_stack_00000000 != 0) goto LAB_02c18750;
        }
        else {
          *(undefined8 *)(lVar5 + 0x60) = unaff_x19;
          thunk_FUN_0188fd20();
          if (in_stack_00000000 != 0) {
            *(long *)(lVar5 + 0x68) = in_stack_00000000;
            thunk_FUN_0188fd20((long *)(lVar5 + 0x68),in_stack_00000000);
          }
        }
      }
      return lVar5;
    }
    if ((ulong)*(uint *)(unaff_x24 + 0x18) <= unaff_x20 + 1) {
LAB_02c18600:
                    /* WARNING: Subroutine does not return */
      FUN_017fc5b0();
    }
    plVar2 = *(long **)(unaff_x28 + unaff_x20 * 8);
    if (plVar2 == (long *)0x0) goto LAB_02c18750;
    unaff_x27 = (**(code **)(*plVar2 + 0x1d8))(plVar2,*(undefined8 *)(*plVar2 + 0x1e0));
    if (*(uint *)(unaff_x25 + 0x18) <= unaff_x20) goto LAB_02c18600;
    param_1 = *(long **)(unaff_x23 + unaff_x20 * 8);
    unaff_x20 = unaff_x20 + 1;
  } while( true );
}


