/*
FUNCTION_NAME: OVRPlugin.OVRP_1_38_0$$ovrp_Media_SetMrcAudioSampleRate
ENTRY_POINT: 03166818
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 104
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_5;telemetry_or_network_hits_1;functionality_permission_setup;functionality_data_collection_or_telemetry_hits_1
*/


void OVRPlugin_OVRP_1_38_0__ovrp_Media_SetMrcAudioSampleRate
               (ulong param_1,long param_2,long param_3)

{
  undefined *puVar1;
  undefined4 uVar2;
  ulong uVar3;
  undefined4 uVar4;
  long lVar5;
  long *unaff_x21;
  undefined8 *unaff_x22;
  long unaff_x23;
  undefined4 uStack000000000000002c;
  undefined4 uStack0000000000000034;
  undefined8 in_stack_00000088;
  undefined4 in_stack_00000090;
  undefined4 uStack0000000000000094;
  undefined4 in_stack_00000098;
  undefined4 uStack000000000000009c;
  undefined4 in_stack_000000a0;
  undefined4 in_stack_000000a8;
  undefined4 uStack00000000000000ac;
  undefined4 uStack00000000000000b0;
  undefined4 uStack00000000000000b4;
  undefined4 uStack00000000000000b8;
  undefined4 uStack00000000000000bc;
  undefined4 in_stack_000000c0;
  undefined4 uStack00000000000000c4;
  undefined8 in_stack_000000c8;
  
  if ((param_1 & 1) == 0) {
    thunk_FUN_01ad9084(PTR_DAT_03d80778);
    thunk_FUN_01ad9084(PTR_DAT_03d80780);
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    *(undefined1 *)(unaff_x23 + 0x7a) = 1;
  }
  in_stack_00000088 = 0;
  in_stack_00000090 = 0;
  uStack0000000000000094 = 0;
  in_stack_000000a0 = 0;
  in_stack_00000098 = 0;
  uStack000000000000009c = 0;
  uStack000000000000002c = 0;
  uStack0000000000000034 = 0;
  FUN_029bc310(param_2,param_3,*unaff_x22);
  if (*(int *)(*unaff_x21 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  puVar1 = PTR_DAT_03d80780;
  uVar3 = FUN_03922f24(param_3,0,0);
  if ((uVar3 & 1) == 0) {
    if (param_3 == 0) goto LAB_031669f4;
    if (*(char *)(param_3 + 0xb0) != '\0') {
      uVar2 = FUN_029bc358(param_2,*(undefined8 *)puVar1);
      FUN_03165f78(&stack0x000000a8,param_2);
      if (*(char *)(param_3 + 0xe1) == '\0') {
        uVar4 = 2;
      }
      else {
        uVar4 = 3;
      }
      uStack00000000000000c4 = in_stack_000000c0;
      uStack0000000000000034 = uStack00000000000000bc;
      uStack00000000000000ac = in_stack_000000a8;
      uStack00000000000000bc = uStack00000000000000b8;
      uStack000000000000002c = uStack00000000000000b4;
      lVar5 = *(long *)(param_2 + 0x170);
      if (lVar5 != 0) {
        in_stack_000000c8 = CONCAT44((uint)(*(char *)(param_3 + 0xe0) != '\0') << 1,uVar4);
        in_stack_000000a8 = uVar2;
        uStack00000000000000b4 = uStack00000000000000b0;
        (**(code **)(lVar5 + 0x18))
                  (*(undefined8 *)(lVar5 + 0x40),&stack0x000000a8,*(undefined8 *)(lVar5 + 0x28));
        return;
      }
      goto LAB_031669f4;
    }
  }
  uVar2 = FUN_029bc358(param_2,*(undefined8 *)puVar1);
  FUN_03165f78(&stack0x00000088,param_2);
  lVar5 = *(long *)(param_2 + 0x170);
  if (lVar5 != 0) {
    uStack00000000000000b4 = in_stack_00000090;
    uStack00000000000000ac = (undefined4)in_stack_00000088;
    uStack00000000000000b0 = (undefined4)((ulong)in_stack_00000088 >> 0x20);
    in_stack_000000c0 = uStack000000000000009c;
    uStack00000000000000c4 = in_stack_000000a0;
    uStack00000000000000b8 = uStack0000000000000094;
    uStack00000000000000bc = in_stack_00000098;
    in_stack_000000c8 = 0;
    in_stack_000000a8 = uVar2;
    (**(code **)(lVar5 + 0x18))
              (*(undefined8 *)(lVar5 + 0x40),&stack0x000000a8,*(undefined8 *)(lVar5 + 0x28));
    return;
  }
LAB_031669f4:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


