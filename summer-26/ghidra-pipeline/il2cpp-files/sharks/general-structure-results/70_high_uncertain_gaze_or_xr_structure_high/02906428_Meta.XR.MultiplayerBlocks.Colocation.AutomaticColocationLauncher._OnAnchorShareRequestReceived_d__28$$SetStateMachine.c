/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Colocation.AutomaticColocationLauncher.<OnAnchorShareRequestReceived>d__28$$SetStateMachine
ENTRY_POINT: 02906428
PROGRAM: sharks-libil2cpp.so
SCORE: 70
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;telemetry
EVIDENCE: strong_eye_source_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


uint Meta_XR_MultiplayerBlocks_Colocation_AutomaticColocationLauncher_<OnAnchorShareRequestReceived>d__28__SetStateMachine
               (undefined1 param_1 [16],undefined8 *param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined8 in_x9;
  uint unaff_w19;
  long unaff_x20;
  undefined8 *unaff_x21;
  long unaff_x22;
  undefined8 unaff_x23;
  int unaff_w24;
  int unaff_w25;
  undefined8 *unaff_x26;
  undefined8 uVar4;
  undefined8 uVar5;
  long in_stack_00000008;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  
  uVar5 = param_1._8_8_;
  uVar4 = param_1._0_8_;
  while( true ) {
    unaff_x26[2] = in_x9;
    unaff_x26[1] = uVar5;
    *unaff_x26 = uVar4;
    uVar1 = thunk_FUN_02c28294(param_2,unaff_x23,0);
    if ((uVar1 & 1) != 0) {
      return unaff_w19;
    }
    unaff_w19 = unaff_w19 - 1;
    if ((int)unaff_w19 < unaff_w24) {
      return 0xffffffff;
    }
    if (*(uint *)(unaff_x22 + 0x18) <= unaff_w19) break;
    in_stack_00000040 = unaff_x21[2];
    in_stack_00000038 = unaff_x21[1];
    in_stack_00000030 = *unaff_x21;
    unaff_x23 = thunk_FUN_018617ec(**(undefined8 **)(*(long *)(unaff_x20 + 0x20) + 0xc0),
                                   &stack0x00000030);
    lVar2 = **(long **)(*(long *)(unaff_x20 + 0x20) + 0xc0);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_0185daa4(lVar2);
    }
    if (*(uint *)(unaff_x22 + 0x18) <= unaff_w19) break;
    lVar3 = unaff_x22 + (long)(int)unaff_w19 * (long)unaff_w25;
    in_x9 = *(undefined8 *)(lVar3 + 0x30);
    uVar5 = *(undefined8 *)(lVar3 + 0x28);
    uVar4 = *(undefined8 *)(lVar3 + 0x20);
    param_2 = &stack0x00000008;
    in_stack_00000008 = lVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_017fc5b0();
}


