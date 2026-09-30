/*
FUNCTION_NAME: OVRPlugin$$SendEvent
ENTRY_POINT: 03385cb0
PROGRAM: gunraiders-libil2cpp.so
SCORE: 170
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_data_collection_or_telemetry_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x03385d98) */

undefined8 OVRPlugin__SendEvent(undefined8 param_1,int param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  long *plVar6;
  int *piVar7;
  undefined8 unaff_x19;
  long lVar8;
  long *unaff_x22;
  long lVar9;
  undefined8 in_stack_00000008;
  
  puVar2 = Method_System_Collections_Generic_Dictionary_Enumerator<Transform,_Vector3>_get_Current__
  ;
  puVar1 = 
  Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator<TerrainTileCoord,_Terrain>_Dispose__
  ;
  if (param_2 != 1) {
    if (unaff_x22 != (long *)0x0) {
      lVar9 = *unaff_x22;
      uVar4 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar4 != 0) {
        piVar7 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_0422fce8) {
            puVar3 = (undefined8 *)(lVar9 + (long)*piVar7 * 0x10 + 0x138);
            goto code_r0x03385d88;
          }
          uVar4 = uVar4 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar4 != 0);
      }
      puVar3 = (undefined8 *)FUN_01c72498();
code_r0x03385d88:
      (*(code *)*puVar3)();
    }
                    /* WARNING: Subroutine does not return */
    FUN_01cf64e4(param_1);
  }
  plVar6 = (long *)__cxa_begin_catch(param_1);
  lVar9 = *plVar6;
  __cxa_end_catch();
  if (unaff_x22 != (long *)0x0) {
    lVar8 = *unaff_x22;
    uVar4 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar4 != 0) {
      piVar7 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_0422fce8) {
          puVar3 = (undefined8 *)(lVar8 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_03385aa8;
        }
        uVar4 = uVar4 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar4 != 0);
    }
    puVar3 = (undefined8 *)FUN_01c72498();
LAB_03385aa8:
    (*(code *)*puVar3)();
  }
  if (lVar9 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01c01e80(lVar9);
  }
  uVar4 = FUN_033847a4(in_stack_00000008,
                       *(undefined8 *)
                        Method_System_Collections_Generic_Dictionary_Enumerator<Type,_List<string>>_Dispose__
                       ,0,&stack0x00000018);
  if ((uVar4 & 1) != 0) {
    thunk_FUN_01c496e0(*(undefined8 *)
                        Method_System_Collections_Generic_Dictionary_Enumerator<string,_RenderGraphDebugData>_get_Current__
                      );
    FUN_02b67c90();
    uVar5 = FUN_02358a2c();
    unaff_x19 = FUN_02357630(uVar5,*(undefined8 *)
                                    Method_System_Collections_Generic_Dictionary_Enumerator<TerrainTileCoord,_Terrain>_get_Current__
                            );
  }
  uVar5 = *(undefined8 *)
           Method_System_Collections_Generic_Dictionary<string,_MasterAudio_AudioGroupInfo>_GetEnumerator__
  ;
  if (*(int *)(*(long *)PTR_DAT_0422fb28 + 0xe0) == 0) {
    thunk_FUN_01c1d1e8();
  }
  plVar6 = (long *)FUN_032e04b8(uVar5,0);
  if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01c5d4a4();
  }
  uVar4 = (**(code **)(*plVar6 + 0x298))(plVar6,in_stack_00000008,*(undefined8 *)(*plVar6 + 0x2a0));
  if ((uVar4 & 1) != 0) {
    lVar9 = *(long *)puVar2;
    if (*(int *)(lVar9 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
      lVar9 = *(long *)puVar2;
    }
    lVar8 = *(long *)(*(long *)(lVar9 + 0xb8) + 0x10);
    if (lVar8 == 0) {
      if (*(int *)(lVar9 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
        lVar9 = *(long *)puVar2;
      }
      uVar5 = **(undefined8 **)(lVar9 + 0xb8);
      lVar8 = thunk_FUN_01c496e0(*(undefined8 *)
                                  Method_System_Collections_Generic_Dictionary_Enumerator<string,_RenderGraphDebugData>_get_Current__
                                );
      FUN_02b67c90(lVar8,uVar5,
                   *(undefined8 *)
                    Method_System_Collections_Generic_Dictionary_Enumerator<Transform,_Vector3>_MoveNext__
                   ,0);
      *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x10) = lVar8;
    }
    uVar5 = FUN_02358a2c(unaff_x19,lVar8,*(undefined8 *)puVar1);
    unaff_x19 = FUN_02357630(uVar5,*(undefined8 *)
                                    Method_System_Collections_Generic_Dictionary_Enumerator<TerrainTileCoord,_Terrain>_get_Current__
                            );
  }
  return unaff_x19;
}


