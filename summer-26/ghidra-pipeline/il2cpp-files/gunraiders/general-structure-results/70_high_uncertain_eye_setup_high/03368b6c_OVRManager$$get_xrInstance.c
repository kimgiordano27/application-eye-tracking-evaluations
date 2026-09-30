/*
FUNCTION_NAME: OVRManager$$get_xrInstance
ENTRY_POINT: 03368b6c
PROGRAM: gunraiders-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_8;functionality_eye_api_context_without_clear_sink_hits_5
*/


void OVRManager__get_xrInstance(void)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 in_w8;
  long unaff_x19;
  undefined8 *unaff_x20;
  undefined8 *unaff_x21;
  undefined8 *unaff_x22;
  
  *(undefined1 *)(unaff_x19 + 0x545) = in_w8;
  lVar2 = FUN_01c5d2fc(*unaff_x22,8);
  uVar3 = FUN_01c5d2fc(*unaff_x21,10);
  FUN_032032f0(uVar3,*unaff_x20,0);
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01c5d4a4();
  }
  if (*(int *)(lVar2 + 0x18) != 0) {
    *(undefined8 *)(lVar2 + 0x20) = uVar3;
    puVar1 = Method_Unity_Collections_NativeArray_Enumerator<OVRPlugin_SpaceQueryResult>_Dispose__;
    uVar3 = FUN_01c5d2fc(*unaff_x21,10);
    FUN_032032f0(uVar3,*(undefined8 *)puVar1,0);
    if (1 < *(uint *)(lVar2 + 0x18)) {
      *(undefined8 *)(lVar2 + 0x28) = uVar3;
      puVar1 = 
      Method_Unity_Collections_NativeArray_Enumerator<OVRPlugin_SpaceQueryResult>_MoveNext__;
      uVar3 = FUN_01c5d2fc(*unaff_x21,10);
      FUN_032032f0(uVar3,*(undefined8 *)puVar1,0);
      if (2 < *(uint *)(lVar2 + 0x18)) {
        *(undefined8 *)(lVar2 + 0x30) = uVar3;
        puVar1 = 
        Method_Unity_Collections_NativeArray_Enumerator<OVRPlugin_SpaceQueryResult>_get_Current__;
        uVar3 = FUN_01c5d2fc(*unaff_x21,10);
        FUN_032032f0(uVar3,*(undefined8 *)puVar1,0);
        if (3 < *(uint *)(lVar2 + 0x18)) {
          *(undefined8 *)(lVar2 + 0x38) = uVar3;
          puVar1 = 
          Method_System_Collections_Generic_List_Enumerator<PackedPlayModeBuildLogs_RuntimeBuildLog>_MoveNext__
          ;
          uVar3 = FUN_01c5d2fc(*unaff_x21,10);
          FUN_032032f0(uVar3,*(undefined8 *)puVar1,0);
          if (4 < *(uint *)(lVar2 + 0x18)) {
            *(undefined8 *)(lVar2 + 0x40) = uVar3;
            puVar1 = 
            Method_System_Collections_Generic_List_Enumerator<PackedPlayModeBuildLogs_RuntimeBuildLog>_Dispose__
            ;
            uVar3 = FUN_01c5d2fc(*unaff_x21,10);
            FUN_032032f0(uVar3,*(undefined8 *)puVar1,0);
            if (5 < *(uint *)(lVar2 + 0x18)) {
              *(undefined8 *)(lVar2 + 0x48) = uVar3;
              uVar3 = FUN_01c5d2fc(*unaff_x21,10);
              FUN_032032f0(uVar3,*(undefined8 *)puVar1,0);
              if (6 < *(uint *)(lVar2 + 0x18)) {
                *(undefined8 *)(lVar2 + 0x50) = uVar3;
                puVar1 = 
                Method_System_Collections_Generic_List_Enumerator<PackedPlayModeBuildLogs_RuntimeBuildLog>_get_Current__
                ;
                uVar3 = FUN_01c5d2fc(*unaff_x21,10);
                FUN_032032f0(uVar3,*(undefined8 *)puVar1,0);
                puVar1 = 
                Method_System_Collections_Generic_List_Enumerator<ScheduledInvocation>_get_Current__
                ;
                if (7 < *(uint *)(lVar2 + 0x18)) {
                  *(undefined8 *)(lVar2 + 0x58) = uVar3;
                  *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 8) = lVar2;
                  uVar3 = FUN_03368848();
                  **(undefined8 **)(*(long *)puVar1 + 0xb8) = uVar3;
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


