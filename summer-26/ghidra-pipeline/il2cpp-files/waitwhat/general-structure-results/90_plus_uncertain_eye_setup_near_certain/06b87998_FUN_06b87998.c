/*
FUNCTION_NAME: FUN_06b87998
ENTRY_POINT: 06b87998
PROGRAM: waitwhat-libil2cpp.so
SCORE: 101
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_4;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_4
*/


void FUN_06b87998(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined4 uVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined1 auVar10 [16];
  undefined1 local_90 [16];
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  
  if ((DAT_0756021a & 1) == 0) {
    FUN_03188a78(Method_Unity_XR_CoreUtils_Collections_HashSetList<XRGrabInteractable>_get_Count__);
    FUN_03188a78(Method_OVRObjectPool_HashSetScope<Guid>__ctor__);
    FUN_03188a78(Method_OVRObjectPool_HashSetScope<Guid>_Dispose__);
    FUN_03188a78(Method_OVRObjectPool_HashSetScope<OVRAnchor_TrackableType>__ctor__);
    FUN_03188a78(Method_OVRObjectPool_HashSetScope<OVRAnchor_TrackableType>_Dispose__);
    FUN_03188a78(Method_OVRObjectPool_HashSetScope<OVRPlugin_SpaceComponentType>__ctor__);
    FUN_03188a78(Method_OVRObjectPool_HashSetScope<OVRPlugin_SpaceComponentType>_Dispose__);
    FUN_03188a78(
                Method_System_Collections_Generic_HashSet<Action<RenderTargetIdentifier,_CommandBuffer>>__ctor__
                );
    DAT_0756021a = 1;
  }
  local_80 = 0;
  uStack_78 = 0;
  local_90._0_8_ = 0;
  local_90._8_8_ = 0;
  uStack_68 = 0;
  local_70 = 0;
  uStack_58 = 0;
  local_60 = 0;
  auVar10 = ZEXT816(0);
  if ((*(long *)(param_1 + 0x18) != 0) &&
     (lVar7 = FUN_0461be14(*(long *)(param_1 + 0x18),
                           *(undefined8 *)
                            Method_OVRObjectPool_HashSetScope<OVRAnchor_TrackableType>_Dispose__),
     puVar5 = 
     Method_System_Collections_Generic_HashSet<Action<RenderTargetIdentifier,_CommandBuffer>>__ctor__
     , puVar4 = Method_OVRObjectPool_HashSetScope<OVRPlugin_SpaceComponentType>_Dispose__,
     puVar3 = Method_OVRObjectPool_HashSetScope<OVRPlugin_SpaceComponentType>__ctor__,
     puVar2 = Method_OVRObjectPool_HashSetScope<Guid>__ctor__,
     puVar1 = Method_Unity_XR_CoreUtils_Collections_HashSetList<XRGrabInteractable>_get_Count__,
     auVar10._8_8_ = local_90._8_8_, auVar10._0_8_ = local_90._0_8_, lVar7 != 0)) {
    FUN_04181d4c(&local_70,lVar7,
                 *(undefined8 *)Method_OVRObjectPool_HashSetScope<OVRAnchor_TrackableType>__ctor__);
    while (uVar8 = FUN_054160fc(&local_70,*(undefined8 *)puVar2), (uVar8 & 1) != 0) {
      lVar7 = *(long *)(param_1 + 0x28);
      local_80 = local_60;
      uStack_78 = uStack_58;
      uVar9 = FUN_03b28cb0(local_60,uStack_58,*(undefined8 *)puVar4);
      uVar9 = FUN_0597a8e8(uVar9,0);
      uVar6 = FUN_04623a18(&local_80,*(undefined8 *)puVar5);
      auVar10 = FUN_06b7c660(uVar9,uVar6,0);
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03188cd8();
      }
      FUN_06b878a4(lVar7,auVar10._0_8_,auVar10._8_8_);
    }
    FUN_054160f8(&local_70,*(undefined8 *)puVar1);
    auVar10._8_8_ = local_90._8_8_;
    auVar10._0_8_ = local_90._0_8_;
    if (*(long *)(param_1 + 0x28) != 0) {
      local_90 = FUN_06b87910();
      FUN_0697eb4c(local_90,0);
      auVar10 = local_90;
      if (*(long *)(param_1 + 0x18) != 0) {
        FUN_0461c014(*(long *)(param_1 + 0x18),*(undefined8 *)puVar3);
        return;
      }
    }
  }
  local_90 = auVar10;
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


