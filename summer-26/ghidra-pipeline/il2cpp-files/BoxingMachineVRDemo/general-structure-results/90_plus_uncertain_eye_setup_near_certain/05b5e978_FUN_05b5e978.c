/*
FUNCTION_NAME: FUN_05b5e978
ENTRY_POINT: 05b5e978
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 118
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_3;telemetry_or_network_hits_2;functionality_eye_api_context_without_clear_sink_hits_4
*/


undefined8 FUN_05b5e978(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined4 local_34;
  
  if ((DAT_06b81c48 & 1) == 0) {
    FUN_02d6084c(
                Method_System_Collections_Generic_List_Enumerator<OVRPassthroughLayer_SerializedSurfaceGeometry>_get_Current__
                );
    FUN_02d6084c(PTR_DAT_0675e660);
    FUN_02d6084c(PTR_DAT_06762b58);
    FUN_02d6084c(Method_System_Collections_Generic_List_Enumerator<OVRPlugin_Result>_Dispose__);
    FUN_02d6084c(Method_System_Collections_Generic_List_Enumerator<OVRPlugin_Result>_MoveNext__);
    DAT_06b81c48 = 1;
  }
  puVar2 = PTR_DAT_06762b58;
  puVar1 = PTR_DAT_0675e660;
  if (*(int *)(param_1 + 0x2c) == 0) {
    lVar4 = FUN_05b67ba0(param_1);
    if (lVar4 != 0) {
      uVar7 = FUN_05b03bf0(lVar4,0,0);
      if ((uVar7 & 1) != 0) {
        return *(undefined8 *)(param_1 + 0x30);
      }
      lVar4 = FUN_06066d44(param_1,0);
      if ((lVar4 != 0) && (lVar4 = FUN_033f3478(lVar4,*(undefined8 *)puVar2), lVar4 != 0)) {
        uVar5 = thunk_FUN_0606f5c0(lVar4,0);
        uVar5 = System_Char__System_IConvertible_ToSByte
                          (*(undefined8 *)
                            Method_System_Collections_Generic_List_Enumerator<OVRPlugin_Result>_Dispose__
                           ,uVar5,0);
        goto LAB_05b5eabc;
      }
    }
  }
  else {
    lVar4 = FUN_06066d44(param_1,0);
    if ((lVar4 != 0) &&
       (lVar4 = FUN_033f3478(lVar4,*(undefined8 *)puVar2),
       puVar3 = Method_System_Collections_Generic_List_Enumerator<OVRPlugin_Result>_MoveNext__,
       puVar2 = 
       Method_System_Collections_Generic_List_Enumerator<OVRPassthroughLayer_SerializedSurfaceGeometry>_get_Current__
       , lVar4 != 0)) {
      uVar5 = thunk_FUN_0606f5c0(lVar4,0);
      local_34 = *(undefined4 *)(param_1 + 0x2c);
      uVar6 = thunk_FUN_02d9d164(*(undefined8 *)puVar2,&local_34);
      uVar5 = FUN_04e8e6a4(*(undefined8 *)puVar3,uVar5,uVar6,0);
LAB_05b5eabc:
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4(*(long *)puVar1);
      }
      FUN_0601ea80(uVar5,0);
      return 0;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


