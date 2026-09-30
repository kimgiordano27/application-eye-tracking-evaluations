/*
FUNCTION_NAME: FUN_03104f1c
ENTRY_POINT: 03104f1c
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_8;validity_or_gating_hits_8;telemetry_or_network_hits_3
*/


void FUN_03104f1c(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 local_70 [2];
  undefined8 uStack_5c;
  undefined8 local_50 [2];
  undefined8 uStack_3c;
  
  puVar2 = StringLiteral_13803;
  puVar1 = Method_System_Threading_ReaderWriterLockSlim_TimeoutTracker__ctor__;
  if ((DAT_03ff1c9d & 1) == 0) {
    thunk_FUN_01ad9084(Method_System_Threading_ReaderWriterLockSlim_TimeoutTracker__ctor__);
    thunk_FUN_01ad9084(
                      Field_<PrivateImplementationDetails>_67484346CA8C1305358877892C919EBEEBDDA56467A35AB2E12D32E0ACC1D17A
                      );
    thunk_FUN_01ad9084(StringLiteral_13803);
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    thunk_FUN_01ad9084(Method_UnityEngine_UI_ToggleGroup_<>c_<ActiveToggles>b__14_0__);
    thunk_FUN_01ad9084(StringLiteral_13804);
    DAT_03ff1c9d = 1;
  }
  uVar3 = thunk_FUN_01afaadc(*(undefined8 *)puVar1);
  FUN_02fd7524(uVar3,param_1,*(undefined8 *)puVar2,0);
  FUN_030d15a4(param_1,param_1 + 0x110,uVar3,0);
  if (*(long *)(param_1 + 0x120) != 0) {
    uVar3 = FUN_01e8b468(*(long *)(param_1 + 0x120),
                         *(undefined8 *)
                          Field_<PrivateImplementationDetails>_67484346CA8C1305358877892C919EBEEBDDA56467A35AB2E12D32E0ACC1D17A
                        );
    *(undefined8 *)(param_1 + 0x138) = uVar3;
    thunk_FUN_01b4f09c(param_1 + 0x138);
    puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
    if (*(long *)(param_1 + 0x138) != 0) {
      uVar3 = *(undefined8 *)(param_1 + 0x128);
      if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                  0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar4 = FUN_03922f24(uVar3,0,0);
      if ((uVar4 & 1) != 0) {
        uVar3 = FUN_0391c27c(param_1,0);
        *(undefined8 *)(param_1 + 0x128) = uVar3;
        thunk_FUN_01b4f09c((undefined8 *)(param_1 + 0x128),uVar3);
      }
      uVar3 = *(undefined8 *)(param_1 + 0x130);
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar4 = FUN_03922f24(uVar3,0,0);
      if ((uVar4 & 1) != 0) {
        *(undefined8 *)(param_1 + 0x130) = *(undefined8 *)(param_1 + 0x128);
        thunk_FUN_01b4f09c();
      }
      puVar2 = Method_UnityEngine_UI_ToggleGroup_<>c_<ActiveToggles>b__14_0__;
      uVar3 = *(undefined8 *)(param_1 + 0x150);
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      puVar1 = StringLiteral_13804;
      FUN_0391f968(uVar3,0,0);
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      FUN_03927648(local_50,0);
      local_70[0] = local_50[0];
      uStack_5c = uStack_3c;
      uVar3 = thunk_FUN_01afaadc(*(undefined8 *)puVar1);
      FUN_03105140(0x3f000000,0x3e800000,uVar3,local_70,0);
      *(undefined8 *)(param_1 + 0x140) = uVar3;
      thunk_FUN_01b4f09c(param_1 + 0x140,uVar3);
      FUN_030d1618(param_1,param_1 + 0x110,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


