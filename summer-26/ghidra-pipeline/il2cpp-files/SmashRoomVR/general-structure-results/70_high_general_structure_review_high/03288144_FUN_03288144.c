/*
FUNCTION_NAME: FUN_03288144
ENTRY_POINT: 03288144
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_5;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2
*/


void FUN_03288144(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  undefined4 local_b8;
  undefined8 local_b4;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_90 [2];
  undefined8 uStack_7c;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined8 uStack_3c;
  
  puVar1 = 
  Method_System_Net_Security_SslStream_<>c__DisplayClass21_0_<SetAndVerifySelectionCallback>b__0__;
  if ((DAT_03ff5701 & 1) == 0) {
    thunk_FUN_01ad9084(PTR_DAT_03d85800);
    thunk_FUN_01ad9084(
                      Method_System_Net_Security_SslStream_<>c__DisplayClass21_0_<SetAndVerifySelectionCallback>b__0__
                      );
    thunk_FUN_01ad9084(Method_System_TimeZoneInfo_<>c_<TZif_ParsePosixName>b__34_1__);
    thunk_FUN_01ad9084(PTR_DAT_03d84140);
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    DAT_03ff5701 = 1;
  }
  puVar2 = PTR_DAT_03d84140;
  local_70 = 0;
  uStack_68 = 0;
  local_58 = 0;
  local_60 = 0;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar3 = FUN_03255c6c(0);
  FUN_032888d4(&local_70,param_1);
  FUN_03209ce4(local_90,&local_70,0);
  local_50 = local_90[0];
  uStack_3c = uStack_7c;
  local_98 = FUN_03257cb8(0);
  lVar6 = param_1 + 0x28;
  local_b4 = local_50;
  uStack_a0 = uStack_3c;
  local_b8 = uVar3;
  uVar4 = FUN_0325fc90(&local_b8,lVar6,0);
  lVar7 = *(long *)puVar2;
  if (*(int *)(lVar7 + 0xe0) == 0) {
    thunk_FUN_01ac7298(lVar7);
  }
  plVar5 = (long *)FUN_0328b760(0);
  uVar3 = FUN_0305d280(lVar6,0);
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x178))
              (plVar5,0x9b83ae1,uVar3,0xffffffffffffffff,*(undefined8 *)(*plVar5 + 0x180));
    puVar1 = Method_System_TimeZoneInfo_<>c_<TZif_ParsePosixName>b__34_1__;
    if ((uVar4 & 1) == 0) {
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      plVar5 = (long *)FUN_0328b760(0);
      uVar3 = FUN_0305d280(lVar6,0);
      if (plVar5 == (long *)0x0) goto LAB_03288364;
      (**(code **)(*plVar5 + 0x1a8))
                (plVar5,0x9b83ae1,3,uVar3,0xffffffffffffffff,*(undefined8 *)(*plVar5 + 0x1b0));
      if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                  0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      FUN_03923a90(param_1,0);
    }
    else {
      lVar6 = *(long *)Method_System_TimeZoneInfo_<>c_<TZif_ParsePosixName>b__34_1__;
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
        lVar6 = *(long *)puVar1;
      }
      lVar6 = *(long *)(*(long *)(lVar6 + 0xb8) + 8);
      if (lVar6 == 0) goto LAB_03288364;
      FUN_0263ab7c(lVar6,*(undefined8 *)(param_1 + 0x28),param_1,*(undefined8 *)PTR_DAT_03d85800);
    }
    return;
  }
LAB_03288364:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


