/*
FUNCTION_NAME: FUN_05e5cfe8
ENTRY_POINT: 05e5cfe8
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 75
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_5;ray_or_cast_sink_hits_1;telemetry_or_network_hits_3
*/


void FUN_05e5cfe8(long param_1,long param_2)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((DAT_06dc3b0d & 1) == 0) {
    FUN_02d965b8(
                Method_System_Collections_Generic_List<ProbeVolumePerSceneData_ObsoleteSerializablePerScenarioDataItem>__ctor__
                );
    FUN_02d965b8(
                Method_System_Collections_Generic_List<ProbeVolumeScratchBufferPool_ScratchBufferPool>__ctor__
                );
    FUN_02d965b8(
                Method_System_Collections_Generic_List<ProbeVolumeBakingSet_SerializedPerSceneCellList>_GetEnumerator__
                );
    DAT_06dc3b0d = 1;
  }
  puVar1 = 
  Method_System_Collections_Generic_List<ProbeVolumeBakingSet_SerializedPerSceneCellList>_GetEnumerator__
  ;
  if (param_2 != 0) {
    if (*(long *)(param_1 + 0x28) != 0) {
      FUN_040115d4(*(long *)(param_1 + 0x28),param_2,
                   *(undefined8 *)
                    Method_System_Collections_Generic_List<ProbeVolumeBakingSet_SerializedPerSceneCellList>_GetEnumerator__
                  );
      if (*(long *)(param_1 + 0x30) != 0) {
        FUN_040115d4(*(long *)(param_1 + 0x30),param_2,*(undefined8 *)puVar1);
        lVar5 = *(long *)(param_1 + 0x20);
        uVar2 = FUN_05e5bf0c(param_2);
        if (lVar5 != 0) {
          FUN_04fc96d0(lVar5,uVar2,
                       *(undefined8 *)
                        Method_System_Collections_Generic_List<ProbeVolumePerSceneData_ObsoleteSerializablePerScenarioDataItem>__ctor__
                      );
          lVar5 = *(long *)(param_1 + 0x18);
          uVar2 = FUN_05e5bd50(param_2);
          if (lVar5 != 0) {
            FUN_04f9603c(lVar5,uVar2,
                         *(undefined8 *)
                          Method_System_Collections_Generic_List<ProbeVolumeScratchBufferPool_ScratchBufferPool>__ctor__
                        );
            return;
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  thunk_FUN_02dfd288(PTR_DAT_069ff9a8);
  uVar3 = thunk_FUN_02dd3144();
  uVar4 = thunk_FUN_02dfd288(Method_System_Collections_Generic_List<PanelRaycaster>_Add__);
  FUN_0544bf54(uVar3,uVar4,0);
  uVar4 = thunk_FUN_02dfd288(
                            Method_System_Collections_Generic_List<ProbeVolumeScratchBufferPool_ScratchBufferPool>_Add__
                            );
                    /* WARNING: Subroutine does not return */
  FUN_02d96724(uVar3,uVar4);
}


