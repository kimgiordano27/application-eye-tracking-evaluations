/*
FUNCTION_NAME: OVRManager$$OVRMixedRealityCaptureConfiguration.get_virtualGreenScreenBottomY
ENTRY_POINT: 03368ac8
PROGRAM: gunraiders-libil2cpp.so
SCORE: 126
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_8;weak_xr_or_state_hits_8;validity_or_gating_hits_8;telemetry_or_network_hits_6;functionality_eye_api_context_without_clear_sink_hits_8
*/


void OVRManager__OVRMixedRealityCaptureConfiguration_get_virtualGreenScreenBottomY(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  
  puVar3 = 
  Method_System_Collections_Generic_List_Enumerator<OVRPassthroughLayer_SerializedSurfaceGeometry>_get_Current__
  ;
  puVar2 = 
  Method_System_Collections_Generic_List_Enumerator<OVRPassthroughLayer_SerializedSurfaceGeometry>_MoveNext__
  ;
  puVar1 = 
  Method_System_Collections_Generic_List_Enumerator<OVRPassthroughLayer_SerializedSurfaceGeometry>_Dispose__
  ;
  if ((DAT_04533545 & 1) == 0) {
    FUN_01c5d288(
                Method_System_Collections_Generic_List_Enumerator<ScheduledInvocation>_get_Current__
                );
    FUN_01c5d288(
                Method_System_Collections_Generic_List_Enumerator<OVRPassthroughLayer_SerializedSurfaceGeometry>_Dispose__
                );
    FUN_01c5d288(
                Method_System_Collections_Generic_List_Enumerator<OVRPassthroughLayer_SerializedSurfaceGeometry>_MoveNext__
                );
    FUN_01c5d288(
                Method_Unity_Collections_NativeArray_Enumerator<OVRPlugin_SpaceQueryResult>_Dispose__
                );
    FUN_01c5d288(
                Method_Unity_Collections_NativeArray_Enumerator<OVRPlugin_SpaceQueryResult>_MoveNext__
                );
    FUN_01c5d288(
                Method_Unity_Collections_NativeArray_Enumerator<OVRPlugin_SpaceQueryResult>_get_Current__
                );
    FUN_01c5d288(
                Method_System_Collections_Generic_List_Enumerator<PackedPlayModeBuildLogs_RuntimeBuildLog>_Dispose__
                );
    FUN_01c5d288(
                Method_System_Collections_Generic_List_Enumerator<PackedPlayModeBuildLogs_RuntimeBuildLog>_MoveNext__
                );
    FUN_01c5d288(
                Method_System_Collections_Generic_List_Enumerator<OVRPassthroughLayer_SerializedSurfaceGeometry>_get_Current__
                );
    FUN_01c5d288(
                Method_System_Collections_Generic_List_Enumerator<PackedPlayModeBuildLogs_RuntimeBuildLog>_get_Current__
                );
    DAT_04533545 = 1;
  }
  lVar4 = FUN_01c5d2fc(*(undefined8 *)puVar1,8);
  uVar5 = FUN_01c5d2fc(*(undefined8 *)puVar2,10);
  FUN_032032f0(uVar5,*(undefined8 *)puVar3,0);
  if (lVar4 != 0) {
    if (*(int *)(lVar4 + 0x18) != 0) {
      *(undefined8 *)(lVar4 + 0x20) = uVar5;
      puVar1 = Method_Unity_Collections_NativeArray_Enumerator<OVRPlugin_SpaceQueryResult>_Dispose__
      ;
      uVar5 = FUN_01c5d2fc(*(undefined8 *)puVar2,10);
      FUN_032032f0(uVar5,*(undefined8 *)puVar1,0);
      if (1 < *(uint *)(lVar4 + 0x18)) {
        *(undefined8 *)(lVar4 + 0x28) = uVar5;
        puVar1 = 
        Method_Unity_Collections_NativeArray_Enumerator<OVRPlugin_SpaceQueryResult>_MoveNext__;
        uVar5 = FUN_01c5d2fc(*(undefined8 *)puVar2,10);
        FUN_032032f0(uVar5,*(undefined8 *)puVar1,0);
        if (2 < *(uint *)(lVar4 + 0x18)) {
          *(undefined8 *)(lVar4 + 0x30) = uVar5;
          puVar1 = 
          Method_Unity_Collections_NativeArray_Enumerator<OVRPlugin_SpaceQueryResult>_get_Current__;
          uVar5 = FUN_01c5d2fc(*(undefined8 *)puVar2,10);
          FUN_032032f0(uVar5,*(undefined8 *)puVar1,0);
          if (3 < *(uint *)(lVar4 + 0x18)) {
            *(undefined8 *)(lVar4 + 0x38) = uVar5;
            puVar1 = 
            Method_System_Collections_Generic_List_Enumerator<PackedPlayModeBuildLogs_RuntimeBuildLog>_MoveNext__
            ;
            uVar5 = FUN_01c5d2fc(*(undefined8 *)puVar2,10);
            FUN_032032f0(uVar5,*(undefined8 *)puVar1,0);
            if (4 < *(uint *)(lVar4 + 0x18)) {
              *(undefined8 *)(lVar4 + 0x40) = uVar5;
              puVar1 = 
              Method_System_Collections_Generic_List_Enumerator<PackedPlayModeBuildLogs_RuntimeBuildLog>_Dispose__
              ;
              uVar5 = FUN_01c5d2fc(*(undefined8 *)puVar2,10);
              FUN_032032f0(uVar5,*(undefined8 *)puVar1,0);
              if (5 < *(uint *)(lVar4 + 0x18)) {
                *(undefined8 *)(lVar4 + 0x48) = uVar5;
                uVar5 = FUN_01c5d2fc(*(undefined8 *)puVar2,10);
                FUN_032032f0(uVar5,*(undefined8 *)puVar1,0);
                if (6 < *(uint *)(lVar4 + 0x18)) {
                  *(undefined8 *)(lVar4 + 0x50) = uVar5;
                  puVar1 = 
                  Method_System_Collections_Generic_List_Enumerator<PackedPlayModeBuildLogs_RuntimeBuildLog>_get_Current__
                  ;
                  uVar5 = FUN_01c5d2fc(*(undefined8 *)puVar2,10);
                  FUN_032032f0(uVar5,*(undefined8 *)puVar1,0);
                  puVar1 = 
                  Method_System_Collections_Generic_List_Enumerator<ScheduledInvocation>_get_Current__
                  ;
                  if (7 < *(uint *)(lVar4 + 0x18)) {
                    *(undefined8 *)(lVar4 + 0x58) = uVar5;
                    *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 8) = lVar4;
                    uVar5 = FUN_03368848();
                    **(undefined8 **)(*(long *)puVar1 + 0xb8) = uVar5;
                    return;
                  }
                }
              }
            }
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01c5d4ac();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4a4();
}


