/*
FUNCTION_NAME: OVRPlugin$$set_localDimming
ENTRY_POINT: 03385afc
PROGRAM: gunraiders-libil2cpp.so
SCORE: 82
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_1;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin__set_localDimming(void)

{
  undefined8 uVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long *unaff_x26;
  undefined8 *unaff_x27;
  
  FUN_02b67c90();
  uVar1 = FUN_02358a2c();
  uVar1 = FUN_02357630(uVar1,*(undefined8 *)
                              Method_System_Collections_Generic_Dictionary_Enumerator<TerrainTileCoord,_Terrain>_get_Current__
                      );
  uVar6 = *(undefined8 *)
           Method_System_Collections_Generic_Dictionary<string,_MasterAudio_AudioGroupInfo>_GetEnumerator__
  ;
  if (*(int *)(*(long *)PTR_DAT_0422fb28 + 0xe0) == 0) {
    thunk_FUN_01c1d1e8();
  }
  plVar2 = (long *)FUN_032e04b8(uVar6,0);
  if (plVar2 != (long *)0x0) {
    uVar3 = (**(code **)(*plVar2 + 0x298))();
    if ((uVar3 & 1) != 0) {
      lVar4 = *unaff_x26;
      if (*(int *)(lVar4 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
        lVar4 = *unaff_x26;
      }
      lVar5 = *(long *)(*(long *)(lVar4 + 0xb8) + 0x10);
      if (lVar5 == 0) {
        if (*(int *)(lVar4 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8();
          lVar4 = *unaff_x26;
        }
        uVar6 = **(undefined8 **)(lVar4 + 0xb8);
        lVar5 = thunk_FUN_01c496e0(*(undefined8 *)
                                    Method_System_Collections_Generic_Dictionary_Enumerator<string,_RenderGraphDebugData>_get_Current__
                                  );
        FUN_02b67c90(lVar5,uVar6,
                     *(undefined8 *)
                      Method_System_Collections_Generic_Dictionary_Enumerator<Transform,_Vector3>_MoveNext__
                     ,0);
        *(long *)(*(long *)(*unaff_x26 + 0xb8) + 0x10) = lVar5;
      }
      uVar1 = FUN_02358a2c(uVar1,lVar5,*unaff_x27);
      uVar1 = FUN_02357630(uVar1,*(undefined8 *)
                                  Method_System_Collections_Generic_Dictionary_Enumerator<TerrainTileCoord,_Terrain>_get_Current__
                          );
    }
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4a4();
}


