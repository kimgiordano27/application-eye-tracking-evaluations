/*
FUNCTION_NAME: OVRManager$$get_vsyncCount
ENTRY_POINT: 03368c0c
PROGRAM: gunraiders-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_3
*/


void OVRManager__get_vsyncCount(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  uint in_w8;
  long unaff_x19;
  undefined8 unaff_x20;
  undefined8 *unaff_x21;
  
  if (2 < in_w8) {
    *(undefined8 *)(unaff_x19 + 0x30) = unaff_x20;
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
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4ac();
}


