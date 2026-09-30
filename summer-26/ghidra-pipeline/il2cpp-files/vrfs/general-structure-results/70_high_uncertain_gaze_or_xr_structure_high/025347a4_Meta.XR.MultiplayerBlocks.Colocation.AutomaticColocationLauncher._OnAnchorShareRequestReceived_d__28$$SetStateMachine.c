/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Colocation.AutomaticColocationLauncher.<OnAnchorShareRequestReceived>d__28$$SetStateMachine
ENTRY_POINT: 025347a4
PROGRAM: vrfs-libil2cpp.so
SCORE: 86
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


long Meta_XR_MultiplayerBlocks_Colocation_AutomaticColocationLauncher_<OnAnchorShareRequestReceived>d__28__SetStateMachine
               (undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  byte unaff_w19;
  undefined8 *unaff_x20;
  long unaff_x23;
  undefined8 *puVar3;
  
  puVar3 = *(undefined8 **)(unaff_x23 + 0xf70);
  FUN_023675b8(param_2,param_3,*param_1);
  lVar2 = thunk_FUN_015d056c(*puVar3);
  puVar1 = PTR_DAT_06db8448;
  if (lVar2 != 0) {
    FUN_02028918();
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_016466fc();
    }
    puVar1 = PTR_DAT_06d954a8;
    lVar2 = FUN_0252f914(0,0,param_2,lVar2);
    if ((lVar2 != 0) && (*(char *)(lVar2 + 0xe8) != '\0')) {
      *(undefined4 *)(lVar2 + 0x148) = 8;
      *(byte *)(lVar2 + 0x14c) = unaff_w19 & 1;
    }
    FUN_020c837c(lVar2,*unaff_x20,*(undefined8 *)puVar1);
    return lVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0160eeb4();
}


