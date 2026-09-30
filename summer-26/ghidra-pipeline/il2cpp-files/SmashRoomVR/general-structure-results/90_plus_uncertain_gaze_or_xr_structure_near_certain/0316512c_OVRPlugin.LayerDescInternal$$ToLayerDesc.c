/*
FUNCTION_NAME: OVRPlugin.LayerDescInternal$$ToLayerDesc
ENTRY_POINT: 0316512c
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 98
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;telemetry_or_network_hits_1;functionality_permission_setup;functionality_data_collection_or_telemetry_hits_1
*/


void OVRPlugin_LayerDescInternal__ToLayerDesc(void)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 *unaff_x19;
  undefined8 unaff_x20;
  long *unaff_x21;
  undefined4 unaff_s8;
  undefined8 in_stack_00000000;
  undefined4 uStack0000000000000008;
  undefined4 uStack000000000000000c;
  undefined4 uStack0000000000000010;
  undefined8 uStack0000000000000014;
  undefined8 in_stack_00000020;
  undefined4 uStack0000000000000028;
  undefined4 uStack000000000000002c;
  undefined4 uStack0000000000000030;
  undefined8 uStack0000000000000034;
  undefined8 uStack0000000000000040;
  undefined4 uStack0000000000000048;
  undefined4 uStack000000000000004c;
  undefined4 uStack0000000000000050;
  undefined4 uStack0000000000000054;
  undefined4 uStack0000000000000058;
  undefined8 uStack0000000000000060;
  undefined4 uStack0000000000000068;
  undefined4 uStack000000000000006c;
  undefined4 uStack0000000000000070;
  undefined4 uStack0000000000000074;
  undefined4 uStack0000000000000078;
  
  puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
  uStack0000000000000060 = 0;
  uStack0000000000000068 = 0;
  uStack000000000000006c = 0;
  uStack0000000000000078 = 0;
  uStack0000000000000070 = 0;
  uStack0000000000000074 = 0;
  uStack0000000000000040 = 0;
  uStack0000000000000048 = 0;
  uStack000000000000004c = 0;
  uStack0000000000000058 = 0;
  uStack0000000000000050 = 0;
  uStack0000000000000054 = 0;
  *unaff_x19 = unaff_x20;
  thunk_FUN_01b4f09c();
  FUN_039148b4(0);
  if (*(int *)(*unaff_x21 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  FUN_03927140(&stack0x00000060,0);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  puVar1 = PTR_DAT_03d80700;
  uVar2 = FUN_03922f24();
  if ((uVar2 & 1) == 0) {
    FUN_03136ee0(&stack0x00000020);
    uStack0000000000000048 = uStack0000000000000028;
    uStack0000000000000040 = in_stack_00000020;
    uStack0000000000000054 = (undefined4)uStack0000000000000034;
    uStack0000000000000058 = SUB84(uStack0000000000000034,4);
    uStack000000000000004c = uStack000000000000002c;
    uStack0000000000000050 = uStack0000000000000030;
    FUN_031375bc(&stack0x00000040,&stack0x00000060,0);
    uStack0000000000000030 = uStack0000000000000010;
    uStack0000000000000028 = uStack0000000000000008;
    in_stack_00000020 = in_stack_00000000;
    *(undefined8 *)((long)unaff_x19 + 0x14) = _uStack0000000000000008;
    *(undefined8 *)((long)unaff_x19 + 0xc) = in_stack_00000000;
    unaff_x19[4] = uStack0000000000000014;
    unaff_x19[3] = CONCAT44(uStack0000000000000010,uStack000000000000000c);
  }
  else {
    unaff_x19[4] = CONCAT44(uStack0000000000000078,uStack0000000000000074);
    unaff_x19[3] = CONCAT44(uStack0000000000000070,uStack000000000000006c);
    *(ulong *)((long)unaff_x19 + 0x14) = CONCAT44(uStack000000000000006c,uStack0000000000000068);
    *(undefined8 *)((long)unaff_x19 + 0xc) = uStack0000000000000060;
  }
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  *(undefined4 *)(unaff_x19 + 1) = unaff_s8;
  return;
}


