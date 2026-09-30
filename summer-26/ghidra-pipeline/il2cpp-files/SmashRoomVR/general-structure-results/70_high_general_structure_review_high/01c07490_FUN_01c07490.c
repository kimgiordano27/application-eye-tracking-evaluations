/*
FUNCTION_NAME: FUN_01c07490
ENTRY_POINT: 01c07490
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_5;telemetry_or_network_hits_14
*/


undefined8 FUN_01c07490(undefined8 param_1,undefined4 param_2,long *param_3)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  long *plVar9;
  
  puVar2 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
  if ((DAT_03fed3c1 & 1) == 0) {
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    thunk_FUN_01ad9084(
                      Method_Meta_WitAi_Requests_VRequest_<>c__DisplayClass56_0_<RequestAudioStream>b__0__
                      );
    DAT_03fed3c1 = 1;
  }
  lVar4 = FUN_01c073e4();
  lVar8 = *(long *)puVar2;
  if (*(int *)(lVar8 + 0xe0) == 0) {
    thunk_FUN_01ac7298(lVar8);
  }
  uVar5 = FUN_03922f24(lVar4,0,0);
  if ((uVar5 & 1) == 0) {
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    plVar6 = (long *)FUN_0386d070(lVar4,param_2,0);
    puVar3 = Method_Meta_WitAi_Requests_VRequest_<>c__DisplayClass56_0_<RequestAudioStream>b__0__;
    if (plVar6 == (long *)0x0) {
      plVar6 = (long *)0x0;
      *param_3 = 0;
    }
    else {
      bVar1 = *(byte *)(*(long *)
                         Method_Meta_WitAi_Requests_VRequest_<>c__DisplayClass56_0_<RequestAudioStream>b__0__
                       + 0x130);
      if (*(byte *)(*plVar6 + 0x130) < bVar1) {
        plVar9 = (long *)0x0;
      }
      else {
        plVar9 = plVar6;
        if (*(long *)(*(long *)(*plVar6 + 200) + (ulong)bVar1 * 8 + -8) !=
            *(long *)
             Method_Meta_WitAi_Requests_VRequest_<>c__DisplayClass56_0_<RequestAudioStream>b__0__) {
          plVar9 = (long *)0x0;
        }
      }
      *param_3 = (long)plVar9;
      bVar1 = *(byte *)(*(long *)puVar3 + 0x130);
      if (*(byte *)(*plVar6 + 0x130) < bVar1) {
        plVar6 = (long *)0x0;
      }
      else if (*(long *)(*(long *)(*plVar6 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar3) {
        plVar6 = (long *)0x0;
      }
    }
    thunk_FUN_01b4f09c(param_3,plVar6);
    lVar4 = *param_3;
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar7 = FUN_0391f968(lVar4,0,0);
    return uVar7;
  }
  *param_3 = 0;
  thunk_FUN_01b4f09c(param_3,0);
  return 0;
}


