/*
FUNCTION_NAME: FUN_03892500
ENTRY_POINT: 03892500
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_8;telemetry_or_network_hits_11
*/


undefined4 FUN_03892500(long *param_1,long *param_2)

{
  undefined *puVar1;
  byte bVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  undefined4 uVar6;
  
  if ((DAT_03ff8894 & 1) == 0) {
    thunk_FUN_01ad9084(PTR_DAT_03da57d8);
    thunk_FUN_01ad9084(PTR_DAT_03da6b70);
    thunk_FUN_01ad9084(PTR_DAT_03da57e0);
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    thunk_FUN_01ad9084(
                      Method_Meta_WitAi_Requests_VRequest_<>c__DisplayClass56_0_<RequestAudioStream>b__0__
                      );
    DAT_03ff8894 = 1;
  }
  puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
  (**(code **)(*param_1 + 0x1c8))(param_1,*(undefined8 *)(*param_1 + 0x1d0));
  if (param_2 != (long *)0x0) {
    lVar3 = *(long *)puVar1;
    if ((*(byte *)(lVar3 + 0x130) <= *(byte *)(*param_2 + 0x130)) &&
       (*(long *)(*(long *)(*param_2 + 200) + (ulong)*(byte *)(lVar3 + 0x130) * 8 + -8) == lVar3)) {
      if (*(int *)(lVar3 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar4 = FUN_0391f968(param_2,0,0);
      plVar5 = param_1 + 0x11;
      if ((uVar4 & 1) != 0) {
        *plVar5 = (long)param_2;
        thunk_FUN_01b4f09c(plVar5,param_2);
        lVar3 = thunk_FUN_01afa9e0(*plVar5,*(undefined8 *)PTR_DAT_03da57d8);
        if (lVar3 != 0) {
          param_1[0x12] = lVar3;
          thunk_FUN_01b4f09c();
        }
        lVar3 = thunk_FUN_01afa9e0(*plVar5,*(undefined8 *)PTR_DAT_03da57e0);
        if (lVar3 != 0) {
          param_1[0x13] = lVar3;
          thunk_FUN_01b4f09c();
        }
        lVar3 = thunk_FUN_01afa9e0(*plVar5,*(undefined8 *)PTR_DAT_03da6b70);
        if (lVar3 != 0) {
          param_1[0x14] = lVar3;
          thunk_FUN_01b4f09c();
        }
        plVar5 = (long *)*plVar5;
        if (plVar5 != (long *)0x0) {
          bVar2 = *(byte *)(*(long *)
                             Method_Meta_WitAi_Requests_VRequest_<>c__DisplayClass56_0_<RequestAudioStream>b__0__
                           + 0x130);
          if ((bVar2 <= *(byte *)(*plVar5 + 0x130)) &&
             (*(long *)(*(long *)(*plVar5 + 200) + (ulong)bVar2 * 8 + -8) ==
              *(long *)
               Method_Meta_WitAi_Requests_VRequest_<>c__DisplayClass56_0_<RequestAudioStream>b__0__)
             ) {
            param_1[0x15] = (long)plVar5;
            thunk_FUN_01b4f09c();
          }
        }
        uVar6 = 1;
        goto LAB_03892604;
      }
    }
  }
  param_1[0x11] = 0;
  thunk_FUN_01b4f09c(param_1 + 0x11,0);
  param_1[0x12] = 0;
  thunk_FUN_01b4f09c(param_1 + 0x12,0);
  param_1[0x13] = 0;
  thunk_FUN_01b4f09c(param_1 + 0x13,0);
  param_1[0x14] = 0;
  thunk_FUN_01b4f09c(param_1 + 0x14,0);
  param_1[0x15] = 0;
  thunk_FUN_01b4f09c(param_1 + 0x15,0);
  uVar6 = 0;
LAB_03892604:
  lVar3 = param_1[0x15];
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  bVar2 = FUN_0391f968(lVar3,0,0);
  *(byte *)((long)param_1 + 0xb1) = bVar2 & 1;
  *(bool *)((long)param_1 + 0xb2) = param_1[0x12] != 0;
  *(bool *)((long)param_1 + 0xb3) = param_1[0x13] != 0;
  *(bool *)((long)param_1 + 0xb4) = param_1[0x14] != 0;
  *(bool *)((long)param_1 + 0xb5) = param_1[0x11] != 0;
  (**(code **)(*param_1 + 0x1b8))(param_1,*(undefined8 *)(*param_1 + 0x1c0));
  return uVar6;
}


