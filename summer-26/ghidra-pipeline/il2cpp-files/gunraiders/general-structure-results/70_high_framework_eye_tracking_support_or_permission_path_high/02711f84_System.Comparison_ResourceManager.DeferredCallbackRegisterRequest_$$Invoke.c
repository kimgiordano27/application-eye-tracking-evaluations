/*
FUNCTION_NAME: System.Comparison<ResourceManager.DeferredCallbackRegisterRequest>$$Invoke
ENTRY_POINT: 02711f84
PROGRAM: gunraiders-libil2cpp.so
SCORE: 75
LABEL: framework_eye_tracking_support_or_permission_path_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_eye_tracking_support_or_permission_path
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: attempted_eye_tracking_use
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry;attempted_use
EVIDENCE: weak_xr_or_state_hits_3;validity_or_gating_hits_3;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_5;attempted_eye_tracking_permission_or_feature_enable;negative_framework_support_context_without_confirmed_app_level_gaze_flow
*/


undefined4
System_Comparison<ResourceManager_DeferredCallbackRegisterRequest>__Invoke(undefined8 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong *unaff_x19;
  undefined8 uVar9;
  long unaff_x24;
  long *unaff_x25;
  long *unaff_x26;
  long unaff_x29;
  
  FUN_032e04b8(param_1);
  uVar4 = FUN_032e935c();
  if ((uVar4 & 1) == 0) {
    lVar6 = *unaff_x25;
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_01c72394();
    }
    uVar9 = *(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0x18);
    if (*(int *)(*unaff_x26 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8(*unaff_x26);
    }
    uVar9 = FUN_032e04b8(uVar9,0);
    uVar7 = FUN_032e04b8(*(undefined8 *)PTR_DAT_0422fb78,0);
    uVar4 = FUN_032e935c(uVar9,uVar7,0);
    if ((uVar4 & 1) == 0) {
      thunk_FUN_01c273e8(PTR_DAT_04230a40);
      uVar9 = thunk_FUN_01c496e0();
      uVar7 = thunk_FUN_01c273e8(Oculus_Platform_MessageWithUserReportID_TypeInfo);
      FUN_032cd310(uVar9,uVar7,0);
                    /* WARNING: Subroutine does not return */
      FUN_01c5d37c(uVar9);
    }
    uVar5 = *unaff_x19;
    uVar4 = uVar5 & 0x7ff0000000000000;
    if ((-uVar5 & 0x7ff0000000000000) != 0) {
      uVar4 = uVar5;
    }
    if (*(int *)(*(long *)
                  VoxelBusters_EssentialKit_NotificationServicesRequestPermissionResult_TypeInfo +
                0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    uVar5 = FUN_0322441c(0,(uint)(uVar4 >> 0x20) ^ (uint)uVar4,0);
    uVar8 = unaff_x19[1];
    uVar4 = uVar8 & 0x7ff0000000000000;
    if ((-uVar8 & 0x7ff0000000000000) != 0) {
      uVar4 = uVar8;
    }
    uVar3 = (uint)(uVar4 >> 0x20) ^ (uint)uVar4;
  }
  else {
    uVar1 = FUN_032e3e6c();
    if (*(int *)(*(long *)
                  VoxelBusters_EssentialKit_NotificationServicesRequestPermissionResult_TypeInfo +
                0xe0) == 0) {
      thunk_FUN_01c1d1e8(*(long *)
                          VoxelBusters_EssentialKit_NotificationServicesRequestPermissionResult_TypeInfo
                        );
    }
    uVar1 = FUN_0322441c(0,uVar1,0);
    uVar2 = FUN_032e3e6c((long)unaff_x19 + 4,0);
    uVar1 = FUN_0322441c(uVar1,uVar2,0);
    uVar2 = FUN_032e3e6c(unaff_x19 + 1,0);
    uVar5 = FUN_0322441c(uVar1,uVar2,0);
    uVar5 = uVar5 & 0xffffffff;
    uVar3 = FUN_032e3e6c((long)unaff_x19 + 0xc,0);
  }
  uVar1 = FUN_0322441c(uVar5,uVar3,0);
  if (*(long *)(unaff_x24 + 0x28) == *(long *)(unaff_x29 + -8)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


