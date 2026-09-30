/*
FUNCTION_NAME: OVRManager$$get_xrSession
ENTRY_POINT: 03368bbc
PROGRAM: gunraiders-libil2cpp.so
SCORE: 121
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_7;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void OVRManager__get_xrSession(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long unaff_x19;
  undefined8 *unaff_x20;
  undefined8 *unaff_x21;
  
  uVar2 = FUN_01c5d2fc(param_1,10);
  FUN_032032f0(uVar2,*unaff_x20,0);
  if (1 < *(uint *)(unaff_x19 + 0x18)) {
    *(undefined8 *)(unaff_x19 + 0x28) = uVar2;
    puVar1 = Method_Unity_Collections_NativeArray_Enumerator<OVRPlugin_SpaceQueryResult>_MoveNext__;
    uVar2 = FUN_01c5d2fc(*unaff_x21,10);
    FUN_032032f0(uVar2,*(undefined8 *)puVar1,0);
    if (2 < *(uint *)(unaff_x19 + 0x18)) {
      *(undefined8 *)(unaff_x19 + 0x30) = uVar2;
      puVar1 = 
      Method_Unity_Collections_NativeArray_Enumerator<OVRPlugin_SpaceQueryResult>_get_Current__;
      uVar2 = FUN_01c5d2fc(*unaff_x21,10);
      FUN_032032f0(uVar2,*(undefined8 *)puVar1,0);
      if (3 < *(uint *)(unaff_x19 + 0x18)) {
        *(undefined8 *)(unaff_x19 + 0x38) = uVar2;
        puVar1 = 
        Method_System_Collections_Generic_List_Enumerator<PackedPlayModeBuildLogs_RuntimeBuildLog>_MoveNext__
        ;
        uVar2 = FUN_01c5d2fc(*unaff_x21,10);
        FUN_032032f0(uVar2,*(undefined8 *)puVar1,0);
        if (4 < *(uint *)(unaff_x19 + 0x18)) {
          *(undefined8 *)(unaff_x19 + 0x40) = uVar2;
          puVar1 = 
          Method_System_Collections_Generic_List_Enumerator<PackedPlayModeBuildLogs_RuntimeBuildLog>_Dispose__
          ;
          uVar2 = FUN_01c5d2fc(*unaff_x21,10);
          FUN_032032f0(uVar2,*(undefined8 *)puVar1,0);
          if (5 < *(uint *)(unaff_x19 + 0x18)) {
            *(undefined8 *)(unaff_x19 + 0x48) = uVar2;
            uVar2 = FUN_01c5d2fc(*unaff_x21,10);
            FUN_032032f0(uVar2,*(undefined8 *)puVar1,0);
            if (6 < *(uint *)(unaff_x19 + 0x18)) {
              *(undefined8 *)(unaff_x19 + 0x50) = uVar2;
              puVar1 = 
              Method_System_Collections_Generic_List_Enumerator<PackedPlayModeBuildLogs_RuntimeBuildLog>_get_Current__
              ;
              uVar2 = FUN_01c5d2fc(*unaff_x21,10);
              FUN_032032f0(uVar2,*(undefined8 *)puVar1,0);
              puVar1 = 
              Method_System_Collections_Generic_List_Enumerator<ScheduledInvocation>_get_Current__;
              if (7 < *(uint *)(unaff_x19 + 0x18)) {
                *(undefined8 *)(unaff_x19 + 0x58) = uVar2;
                *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 8) = unaff_x19;
                uVar2 = FUN_03368848();
                **(undefined8 **)(*(long *)puVar1 + 0xb8) = uVar2;
                return;
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


