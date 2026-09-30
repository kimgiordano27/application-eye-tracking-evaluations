/*
FUNCTION_NAME: FUN_056ad900
ENTRY_POINT: 056ad900
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_056ad900(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  undefined8 local_98;
  undefined8 *puStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  
  if ((DAT_066d1f75 & 1) == 0) {
    FUN_02b3c81c(Method_OVRObjectPool_HashSetScope<Guid>_Dispose__);
    FUN_02b3c81c(Method_OVRObjectPool_HashSetScope<OVRAnchor_TrackableType>__ctor__);
    FUN_02b3c81c(Method_OVRObjectPool_HashSetScope<OVRAnchor_TrackableType>_Dispose__);
    FUN_02b3c81c(Method_OVRObjectPool_HashSetScope<OVRPlugin_SpaceComponentType>__ctor__);
    FUN_02b3c81c(Method_OVRObjectPool_HashSetScope<OVRPlugin_SpaceComponentType>_Dispose__);
    DAT_066d1f75 = 1;
  }
  puVar3 = Method_OVRObjectPool_HashSetScope<OVRAnchor_TrackableType>_Dispose__;
  puVar2 = Method_OVRObjectPool_HashSetScope<OVRAnchor_TrackableType>__ctor__;
  puVar1 = Method_OVRObjectPool_HashSetScope<Guid>_Dispose__;
  local_50 = 0;
  puStack_68 = (undefined8 *)0x0;
  local_70 = 0;
  local_58 = 0;
  uStack_60 = 0;
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_056ada7c();
    do {
      uVar4 = FUN_056adb38(param_1,*(undefined8 *)(param_1 + 0x28));
      if (*(long *)(param_1 + 0x30) != 0) {
        FUN_0452e1f4(&local_98,*(long *)(param_1 + 0x30),*(undefined8 *)puVar1);
        local_70 = local_98;
        local_98 = 0;
        puStack_68 = puStack_90;
        local_58 = uStack_80;
        uStack_60 = local_88;
        local_50 = local_78;
        puStack_90 = &local_70;
        while (uVar6 = FUN_047e368c(&local_70,*(undefined8 *)puVar3), (uVar6 & 1) != 0) {
          uVar5 = FUN_056adb38(param_1,local_58);
          uVar4 = uVar4 | uVar5;
        }
        FUN_047e37ac(&local_70,*(undefined8 *)puVar2);
      }
    } while ((uVar4 & 1) != 0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


