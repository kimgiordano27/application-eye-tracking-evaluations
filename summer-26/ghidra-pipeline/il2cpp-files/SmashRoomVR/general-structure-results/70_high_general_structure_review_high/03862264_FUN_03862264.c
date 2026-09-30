/*
FUNCTION_NAME: FUN_03862264
ENTRY_POINT: 03862264
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_5;telemetry_or_network_hits_11
*/


undefined8 FUN_03862264(long param_1)

{
  byte bVar1;
  undefined *puVar2;
  long *plVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  if ((DAT_03ff8697 & 1) == 0) {
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    thunk_FUN_01ad9084(Method_Meta_WitAi_Requests_VRequest_<>c__DisplayClass49_0_<RequestText>b__0__
                      );
    DAT_03ff8697 = 1;
  }
  puVar2 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
  plVar3 = (long *)FUN_03b259dc(param_1,0);
  if (plVar3 != (long *)0x0) {
    bVar1 = *(byte *)(*(long *)
                       Method_Meta_WitAi_Requests_VRequest_<>c__DisplayClass49_0_<RequestText>b__0__
                     + 0x130);
    if (bVar1 <= *(byte *)(*plVar3 + 0x130)) {
      if (*(long *)(*(long *)(*plVar3 + 200) + (ulong)bVar1 * 8 + -8) !=
          *(long *)Method_Meta_WitAi_Requests_VRequest_<>c__DisplayClass49_0_<RequestText>b__0__) {
        plVar3 = (long *)0x0;
      }
      goto LAB_038622f0;
    }
  }
  plVar3 = (long *)0x0;
LAB_038622f0:
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar4 = FUN_0391f968(plVar3,0,0);
  if ((uVar4 & 1) == 0) {
    return 0;
  }
  if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01b48178();
  }
  uVar5 = FUN_0386d070(plVar3,*(undefined4 *)(param_1 + 0x100),0);
  return uVar5;
}


