/*
FUNCTION_NAME: FUN_05fc25ec
ENTRY_POINT: 05fc25ec
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 101
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_1;telemetry_or_network_hits_1;functionality_data_collection_or_telemetry_hits_1
*/


void FUN_05fc25ec(long param_1,undefined8 *param_2)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 local_48 [5];
  byte local_34;
  
  puVar1 = PTR_DAT_06a10750;
  if ((DAT_06dc476b & 1) == 0) {
    FUN_02d965b8(Method_System_Array_Empty<OVRPlugin_VirtualKeyboardModelAnimationState>__);
    FUN_02d965b8(PTR_DAT_06a10750);
    DAT_06dc476b = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  if (DAT_06db76de == '\0') {
    FUN_02d965b8(PTR_DAT_06a10750);
    DAT_06db76de = '\x01';
  }
  lVar2 = *(long *)puVar1;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_02df485c();
    lVar2 = *(long *)puVar1;
  }
  puVar1 = Method_System_Array_Empty<OVRPlugin_VirtualKeyboardModelAnimationState>__;
  if (*(char *)(*(long *)(lVar2 + 0xb8) + 0x11) != '\0') {
    if (*(int *)(*(long *)Method_System_Array_Empty<OVRPlugin_VirtualKeyboardModelAnimationState>__
                + 0xe4) == 0) {
      thunk_FUN_02df485c();
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
    }
    uVar3 = FUN_05fc2770();
    if ((uVar3 & 1) == 0) {
      if (*(long *)(param_1 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      FUN_05fb4724(local_48,*(long *)(param_1 + 0x20),*param_2,param_2[1],0);
      if ((local_34 & 1) != 0) {
        local_48[0] = FUN_063592f0(0);
        uVar4 = thunk_FUN_02dfd288(Method_System_Array_Empty<OVRSpatialAnchor_UnboundAnchor>__);
        uVar4 = thunk_FUN_02dd2d7c(uVar4,local_48);
        uVar5 = thunk_FUN_02dfd288(Method_System_Array_Empty<OvrAvatarEntity_SkeletonJoint>__);
        uVar4 = FUN_0536388c(uVar5,uVar4,0);
        thunk_FUN_02dfd288(PTR_DAT_069ff3c8);
        uVar5 = thunk_FUN_02dd3144();
        FUN_054e8008(uVar5,uVar4,0);
        uVar4 = thunk_FUN_02dfd288(Method_System_Array_Empty<OvrAvatarManager_LoadRequest>__);
                    /* WARNING: Subroutine does not return */
        FUN_02d96724(uVar5,uVar4);
      }
    }
  }
  return;
}


