/*
FUNCTION_NAME: UniRx.AsyncReactiveCommandExtensions$$BindToOnClick
ENTRY_POINT: 09aa3e24
PROGRAM: Hyper-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_2;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2
*/


void UniRx_AsyncReactiveCommandExtensions__BindToOnClick(void)

{
  bool in_ZR;
  undefined4 uVar1;
  undefined8 uVar2;
  long unaff_x19;
  undefined8 in_stack_00000008;
  
  if (!in_ZR) {
                    /* WARNING: Subroutine does not return */
    FUN_0494850c();
  }
  if (*(long *)(unaff_x19 + 0x30) != 0) {
    uVar1 = FUN_09a9d2d8(*(long *)(unaff_x19 + 0x30),*(undefined8 *)(unaff_x19 + 0x50),
                         *(undefined8 *)(unaff_x19 + 0x58),*(undefined4 *)(unaff_x19 + 0x60),
                         *(undefined4 *)(unaff_x19 + 100),*(undefined4 *)(unaff_x19 + 0x68),
                         unaff_x19 + 0x48,(long)&stack0x00000008 + 4);
    if (in_stack_00000008._4_4_ != 0) {
      uVar2 = thunk_FUN_04983f60(*(undefined8 *)PTR_DAT_0ac21900);
      FUN_09b37574(uVar2,in_stack_00000008._4_4_,0);
      *(undefined8 *)(unaff_x19 + 0x40) = uVar2;
      thunk_FUN_049ee3d8((undefined8 *)(unaff_x19 + 0x40),uVar2);
      UniRx_ObservableWWW__PostAndGetBytes();
      return;
    }
    *(undefined4 *)(unaff_x19 + 0xa0) = uVar1;
    UniRx_ObservableWWW__PostAndGetBytes();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


