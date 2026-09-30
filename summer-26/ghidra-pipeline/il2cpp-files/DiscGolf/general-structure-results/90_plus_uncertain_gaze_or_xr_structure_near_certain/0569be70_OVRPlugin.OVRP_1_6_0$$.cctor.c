/*
FUNCTION_NAME: OVRPlugin.OVRP_1_6_0$$.cctor
ENTRY_POINT: 0569be70
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 101
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


undefined8 OVRPlugin_OVRP_1_6_0___cctor(void)

{
  undefined8 uVar1;
  ulong uVar2;
  long unaff_x19;
  undefined8 *unaff_x25;
  long unaff_x27;
  long lVar3;
  int iVar4;
  int in_stack_00000008;
  undefined4 uStack000000000000000c;
  
  lVar3 = *(long *)(unaff_x27 + 0x9c0);
  uStack000000000000000c = 1;
  uVar1 = thunk_FUN_02dd2d7c(*(undefined8 *)(lVar3 + 0x48),&stack0x0000000c);
  FUN_0536388c(*(undefined8 *)Oculus_Platform_Request<AvatarEditorResult>_TypeInfo,uVar1,0);
  uVar1 = FUN_05362cb4();
  thunk_FUN_02dd3144(*unaff_x25);
  FUN_048a20e0();
  if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  uVar2 = FUN_03c2311c();
  if ((uVar2 & 1) != 0) {
    iVar4 = 0;
    do {
      in_stack_00000008 = iVar4 + 2;
      uVar1 = thunk_FUN_02dd2d7c(*(undefined8 *)(lVar3 + 0x48),&stack0x00000008);
      FUN_0536388c(*(undefined8 *)Oculus_Platform_Request<AvatarEditorResult>_TypeInfo,uVar1,0);
      uVar1 = FUN_05362cb4();
      thunk_FUN_02dd3144(*unaff_x25);
      FUN_048a20e0();
      uVar2 = FUN_03c2311c();
      if (iVar4 == 0x7ffffffd) {
        return uVar1;
      }
      iVar4 = iVar4 + 1;
    } while ((uVar2 & 1) != 0);
  }
  return uVar1;
}


