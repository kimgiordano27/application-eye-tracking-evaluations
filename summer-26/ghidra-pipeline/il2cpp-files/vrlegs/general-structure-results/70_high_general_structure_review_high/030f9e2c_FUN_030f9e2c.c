/*
FUNCTION_NAME: FUN_030f9e2c
ENTRY_POINT: 030f9e2c
PROGRAM: vrlegs-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_6;telemetry_or_network_hits_4;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_030f9e2c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined4 local_48;
  undefined4 uStack_44;
  
  puVar2 = 
  System_Collections_Generic_Dictionary<OVRAnchor_Telemetry_Key,_OVRTelemetryMarker>_TypeInfo;
  puVar1 = 
  System_Collections_Generic_Dictionary<UnityPlayerAccountSettings_SupportedScopesEnum,_string>_TypeInfo
  ;
  if ((DAT_0412ba0f & 1) == 0) {
    FUN_01ab69ac(UnityEngine_Rendering_DynamicArray<IRenderGraphResource>_TypeInfo);
    FUN_01ab69ac(
                System_Collections_Generic_Dictionary<OVRAnchor_Telemetry_Key,_OVRTelemetryMarker>_TypeInfo
                );
    FUN_01ab69ac(
                System_Collections_Generic_Dictionary<UnityPlayerAccountSettings_SupportedScopesEnum,_string>_TypeInfo
                );
    FUN_01ab69ac(
                System_Collections_Generic_Dictionary<Statement,_List<DefiniteAssignmentBitSet>>_TypeInfo
                );
    DAT_0412ba0f = 1;
  }
  lVar3 = thunk_FUN_01a89e68(*(undefined8 *)puVar1);
  FUN_0219a4f0(lVar3,*(undefined8 *)puVar2);
  puVar2 = UnityEngine_Rendering_DynamicArray<IRenderGraphResource>_TypeInfo;
  puVar1 = System_Collections_Generic_Dictionary<Statement,_List<DefiniteAssignmentBitSet>>_TypeInfo
  ;
  if (lVar3 != 0) {
    local_48 = 6;
    uStack_44 = 0x1b;
    FUN_0219b9a4(lVar3,&uStack_44,&local_48,
                 *(undefined8 *)UnityEngine_Rendering_DynamicArray<IRenderGraphResource>_TypeInfo);
    local_48 = 5;
    uStack_44 = 0x20;
    FUN_0219b9a4(lVar3,&uStack_44,&local_48,*(undefined8 *)puVar2);
    local_48 = 4;
    uStack_44 = 0x19;
    FUN_0219b9a4(lVar3,&uStack_44,&local_48,*(undefined8 *)puVar2);
    local_48 = 8;
    uStack_44 = 8;
    FUN_0219b9a4(lVar3,&uStack_44,&local_48,*(undefined8 *)puVar2);
    local_48 = 9;
    uStack_44 = 0xb;
    FUN_0219b9a4(lVar3,&uStack_44,&local_48,*(undefined8 *)puVar2);
    local_48 = 7;
    uStack_44 = 0x11;
    FUN_0219b9a4(lVar3,&uStack_44,&local_48,*(undefined8 *)puVar2);
    local_48 = 1;
    uStack_44 = 2;
    FUN_0219b9a4(lVar3,&uStack_44,&local_48,*(undefined8 *)puVar2);
    local_48 = 2;
    uStack_44 = 1;
    FUN_0219b9a4(lVar3,&uStack_44,&local_48,*(undefined8 *)puVar2);
    local_48 = 3;
    uStack_44 = 0xd;
    FUN_0219b9a4(lVar3,&uStack_44,&local_48,*(undefined8 *)puVar2);
    local_48 = 1;
    uStack_44 = 7;
    FUN_0219b9a4(lVar3,&uStack_44,&local_48,*(undefined8 *)puVar2);
    local_48 = 2;
    uStack_44 = 0;
    FUN_0219b9a4(lVar3,&uStack_44,&local_48,*(undefined8 *)puVar2);
    local_48 = 3;
    uStack_44 = 0x10;
    FUN_0219b9a4(lVar3,&uStack_44,&local_48,*(undefined8 *)puVar2);
    local_48 = 10;
    uStack_44 = 0x14;
    FUN_0219b9a4(lVar3,&uStack_44,&local_48,*(undefined8 *)puVar2);
    local_48 = 10;
    uStack_44 = 0x13;
    FUN_0219b9a4(lVar3,&uStack_44,&local_48,*(undefined8 *)puVar2);
    local_48 = 10;
    uStack_44 = 0x12;
    FUN_0219b9a4(lVar3,&uStack_44,&local_48,*(undefined8 *)puVar2);
    **(long **)(*(long *)puVar1 + 0xb8) = lVar3;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists
              (*(undefined8 *)(*(long *)puVar1 + 0xb8),lVar3);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


