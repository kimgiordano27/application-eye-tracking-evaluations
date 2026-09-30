/*
FUNCTION_NAME: FUN_0268dba4
ENTRY_POINT: 0268dba4
PROGRAM: Lovesick-libil2cpp.so
SCORE: 123
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;data_collection;frame_behavior
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_7;validity_or_gating_hits_6;strong_file_logging_hits_2;frame_or_lifecycle_behavior;functionality_data_collection_or_telemetry_hits_2
*/


void FUN_0268dba4(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  int iVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  undefined8 uVar11;
  ulong uVar12;
  long lVar13;
  long *plVar14;
  long lVar15;
  uint uVar16;
  bool bVar17;
  uint uVar18;
  undefined4 local_64;
  
  puVar1 = 
  Method_System_Collections_Generic_Dictionary<TerrainData,_ObiHeightFieldHandle>_get_Count__;
  if ((DAT_03785edb & 1) == 0) {
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_List<SongItem_MidiNote>_ConvertAll<SongItem_MidiNote>__
                      );
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_Dictionary<TerrainData,_ObiHeightFieldHandle>_get_Count__
                      );
    thunk_FUN_00d48444(PTR_DAT_033ead30);
    thunk_FUN_00d48444(Method_UnityEngine_Animations_AnimationOffsetPlayable__ctor__);
    thunk_FUN_00d48444(PTR_DAT_033eca38);
    thunk_FUN_00d48444(StringLiteral_8532);
    thunk_FUN_00d48444(PTR_DAT_033f38b8);
    thunk_FUN_00d48444(System_Xml_Serialization_IXmlTextParser_TypeInfo);
    thunk_FUN_00d48444(
                      Field_<PrivateImplementationDetails>_7C8975E1E60A5C8337F28EDF8C33C3B180360B7279644A9BC1AF3C51E6220BF5
                      );
    thunk_FUN_00d48444(UnityEngine_XR_ARSubsystems_XRCameraFrameProperties_TypeInfo);
    thunk_FUN_00d48444(
                      Method_Unity_XR_CoreUtils_Datums_DatumProperty<FollowPreset,_FollowPresetDatum>_get_Value__
                      );
    thunk_FUN_00d48444(System_Action<ARFaceUpdatedEventArgs>_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_12935);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<EasingFunction>_Add__);
    thunk_FUN_00d48444(Method_Newtonsoft_Json_Bson_BsonBinaryWriter_WriteTokenInternal__);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_Dictionary<TerrainTileCoord,_Terrain>_get_Keys__
                      );
    thunk_FUN_00d48444(
                      Method_UnityEngine_XR_ARSubsystems_XROcclusionSubsystem_Provider_TryGetHumanStencil__
                      );
    thunk_FUN_00d48444(Method_OVRPlugin_<>c_<_cctor>b__796_69__);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List_Enumerator<IActiveState>_MoveNext__);
    DAT_03785edb = 1;
  }
  local_64 = 0;
  plVar7 = (long *)thunk_FUN_00d62348(*(undefined8 *)puVar1);
  if ((plVar7 != (long *)0x0) && (FUN_0160aab0(plVar7,0xff,0), param_1 != (long *)0x0)) {
    iVar5 = (**(code **)(*param_1 + 0x178))(param_1,*(undefined8 *)(*param_1 + 0x180));
    puVar4 = StringLiteral_12935;
    puVar3 = 
    Field_<PrivateImplementationDetails>_7C8975E1E60A5C8337F28EDF8C33C3B180360B7279644A9BC1AF3C51E6220BF5
    ;
    puVar1 = PTR_DAT_033f38b8;
    if (0 < iVar5) {
      iVar5 = 0;
      do {
        plVar8 = (long *)(**(code **)(*param_1 + 0x188))
                                   (param_1,iVar5,*(undefined8 *)(*param_1 + 400));
        if (plVar8 == (long *)0x0) goto LAB_0268e244;
        plVar9 = (long *)(**(code **)(*plVar8 + 0x1a8))(plVar8,*(undefined8 *)(*plVar8 + 0x1b0));
        if (plVar9 != (long *)0x0) {
          plVar10 = (long *)(**(code **)(*plVar9 + 0x1c8))(plVar9,*(undefined8 *)(*plVar9 + 0x1d0));
          if (plVar10 != (long *)0x0) {
            uVar11 = (**(code **)(*plVar10 + 0x2e8))(plVar10,*(undefined8 *)(*plVar10 + 0x2f0));
            uVar12 = FUN_015ff8a0(uVar11,0);
            if ((uVar12 & 1) == 0) {
              FUN_0160c430(plVar7,uVar11,0);
              FUN_0160c430(plVar7,*(undefined8 *)
                                   Method_System_Collections_Generic_List_Enumerator<IActiveState>_MoveNext__
                           ,0);
            }
            uVar11 = (**(code **)(*plVar10 + 0x1b8))(plVar10,*(undefined8 *)(*plVar10 + 0x1c0));
            FUN_0160c430(plVar7,uVar11,0);
            FUN_0160c430(plVar7,*(undefined8 *)puVar3,0);
            uVar11 = (**(code **)(*plVar9 + 0x1b8))(plVar9,*(undefined8 *)(*plVar9 + 0x1c0));
            FUN_0160c430(plVar7,uVar11,0);
            FUN_0160c430(plVar7,*(undefined8 *)
                                 Method_Unity_XR_CoreUtils_Datums_DatumProperty<FollowPreset,_FollowPresetDatum>_get_Value__
                         ,0);
            lVar13 = (**(code **)(*plVar9 + 600))(plVar9,*(undefined8 *)(*plVar9 + 0x260));
            if (lVar13 == 0) goto LAB_0268e244;
            uVar16 = *(uint *)(lVar13 + 0x18);
            if (0 < (int)uVar16) {
              uVar18 = 0;
              bVar17 = true;
              do {
                if (!bVar17) {
                  FUN_0160c430(plVar7,*(undefined8 *)puVar1,0);
                  uVar16 = *(uint *)(lVar13 + 0x18);
                }
                if (uVar16 <= uVar18) {
                    /* WARNING: Subroutine does not return */
                  FUN_00da5194();
                }
                plVar14 = *(long **)(lVar13 + (long)(int)uVar18 * 8 + 0x20);
                if (plVar14 == (long *)0x0) goto LAB_0268e244;
                plVar14 = (long *)(**(code **)(*plVar14 + 0x1e8))
                                            (plVar14,*(undefined8 *)(*plVar14 + 0x1f0));
                if (plVar14 == (long *)0x0) goto LAB_0268e244;
                uVar11 = (**(code **)(*plVar14 + 0x1b8))(plVar14,*(undefined8 *)(*plVar14 + 0x1c0));
                FUN_0160c430(plVar7,uVar11,0);
                uVar16 = *(uint *)(lVar13 + 0x18);
                uVar18 = uVar18 + 1;
                bVar17 = false;
              } while ((int)uVar18 < (int)uVar16);
            }
            FUN_0160c430(plVar7,*(undefined8 *)puVar4,0);
            lVar13 = (**(code **)(*plVar8 + 0x188))(plVar8,*(undefined8 *)(*plVar8 + 400));
            if (lVar13 != 0) {
              uVar11 = (**(code **)(*plVar10 + 0x1b8))(plVar10,*(undefined8 *)(*plVar10 + 0x1c0));
              uVar12 = thunk_FUN_015fe514(uVar11,*(undefined8 *)StringLiteral_8532,0);
              if ((uVar12 & 1) != 0) {
                uVar11 = (**(code **)(*plVar10 + 0x2e8))(plVar10,*(undefined8 *)(*plVar10 + 0x2f0));
                uVar12 = thunk_FUN_015fe514(uVar11,*(undefined8 *)
                                                    Method_OVRPlugin_<>c_<_cctor>b__796_69__,0);
                if ((uVar12 & 1) != 0) goto LAB_0268e1e0;
              }
              uVar11 = (**(code **)(*plVar10 + 0x1b8))(plVar10,*(undefined8 *)(*plVar10 + 0x1c0));
              uVar12 = thunk_FUN_015fe514(uVar11,*(undefined8 *)
                                                  Method_Newtonsoft_Json_Bson_BsonBinaryWriter_WriteTokenInternal__
                                          ,0);
              if ((uVar12 & 1) != 0) {
                uVar11 = (**(code **)(*plVar10 + 0x2e8))(plVar10,*(undefined8 *)(*plVar10 + 0x2f0));
                uVar12 = thunk_FUN_015fe514(uVar11,*(undefined8 *)
                                                    Method_OVRPlugin_<>c_<_cctor>b__796_69__,0);
                if ((uVar12 & 1) != 0) goto LAB_0268e1e0;
              }
              uVar11 = (**(code **)(*plVar10 + 0x1b8))(plVar10,*(undefined8 *)(*plVar10 + 0x1c0));
              uVar12 = thunk_FUN_015fe514(uVar11,*(undefined8 *)PTR_DAT_033eca38,0);
              if ((uVar12 & 1) != 0) {
                uVar11 = (**(code **)(*plVar10 + 0x2e8))(plVar10,*(undefined8 *)(*plVar10 + 0x2f0));
                uVar12 = thunk_FUN_015fe514(uVar11,*(undefined8 *)
                                                    Method_OVRPlugin_<>c_<_cctor>b__796_69__,0);
                if ((uVar12 & 1) != 0) goto LAB_0268e1e0;
              }
              uVar11 = (**(code **)(*plVar10 + 0x1b8))(plVar10,*(undefined8 *)(*plVar10 + 0x1c0));
              uVar12 = thunk_FUN_015fe514(uVar11,*(undefined8 *)
                                                  Method_System_Collections_Generic_Dictionary<TerrainTileCoord,_Terrain>_get_Keys__
                                          ,0);
              if ((uVar12 & 1) != 0) {
                uVar11 = (**(code **)(*plVar10 + 0x2e8))(plVar10,*(undefined8 *)(*plVar10 + 0x2f0));
                uVar12 = thunk_FUN_015fe514(uVar11,*(undefined8 *)
                                                                                                        
                                                  Method_UnityEngine_XR_ARSubsystems_XROcclusionSubsystem_Provider_TryGetHumanStencil__
                                            ,0);
                if ((uVar12 & 1) != 0) goto LAB_0268e1e0;
              }
              uVar11 = (**(code **)(*plVar9 + 0x1b8))(plVar9,*(undefined8 *)(*plVar9 + 0x1c0));
              uVar12 = thunk_FUN_015fe514(uVar11,*(undefined8 *)
                                                  Method_System_Collections_Generic_List<EasingFunction>_Add__
                                          ,0);
              if ((uVar12 & 1) != 0) {
                uVar11 = (**(code **)(*plVar10 + 0x1b8))(plVar10,*(undefined8 *)(*plVar10 + 0x1c0));
                uVar12 = thunk_FUN_015fe514(uVar11,*(undefined8 *)
                                                                                                        
                                                  UnityEngine_XR_ARSubsystems_XRCameraFrameProperties_TypeInfo
                                            ,0);
                if ((uVar12 & 1) != 0) {
                  uVar11 = (**(code **)(*plVar10 + 0x2e8))
                                     (plVar10,*(undefined8 *)(*plVar10 + 0x2f0));
                  uVar12 = thunk_FUN_015fe514(uVar11,*(undefined8 *)
                                                      Method_OVRPlugin_<>c_<_cctor>b__796_69__,0);
                  if ((uVar12 & 1) != 0) goto LAB_0268e1e0;
                }
              }
              FUN_0160c430(plVar7,*(undefined8 *)System_Action<ARFaceUpdatedEventArgs>_TypeInfo,0);
              puVar2 = 
              Method_System_Collections_Generic_List<SongItem_MidiNote>_ConvertAll<SongItem_MidiNote>__
              ;
              lVar15 = *(long *)
                        Method_System_Collections_Generic_List<SongItem_MidiNote>_ConvertAll<SongItem_MidiNote>__
              ;
              if (*(int *)(lVar15 + 0xe0) == 0) {
                thunk_FUN_00d32864();
                lVar15 = *(long *)puVar2;
              }
              uVar12 = FUN_015ff8a0(**(undefined8 **)(lVar15 + 0xb8),0);
              if ((uVar12 & 1) == 0) {
                lVar15 = FUN_01601fc0(lVar13,*(undefined8 *)
                                              Method_UnityEngine_Animations_AnimationOffsetPlayable__ctor__
                                      ,*(undefined8 *)
                                        System_Xml_Serialization_IXmlTextParser_TypeInfo,0);
                if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                  thunk_FUN_00d32864(*(long *)puVar2);
                }
                if (lVar15 == 0) goto LAB_0268e244;
                uVar12 = FUN_015fe854(lVar15,**(undefined8 **)(*(long *)puVar2 + 0xb8),0);
                if ((uVar12 & 1) != 0) {
                  lVar15 = *(long *)puVar2;
                  if (*(int *)(lVar15 + 0xe0) == 0) {
                    thunk_FUN_00d32864();
                    lVar15 = *(long *)puVar2;
                  }
                  if (**(long **)(lVar15 + 0xb8) == 0) goto LAB_0268e244;
                  iVar6 = *(int *)(**(long **)(lVar15 + 0xb8) + 0x10);
                  lVar13 = FUN_01601d40(lVar13,iVar6,*(int *)(lVar13 + 0x10) - iVar6,0);
                }
              }
              FUN_0160c430(plVar7,lVar13,0);
              FUN_0160c430(plVar7,*(undefined8 *)puVar3,0);
              local_64 = (**(code **)(*plVar8 + 0x178))(plVar8,*(undefined8 *)(*plVar8 + 0x180));
              uVar11 = FUN_0176eb1c(&local_64,0);
              FUN_0160c430(plVar7,uVar11,0);
              FUN_0160c430(plVar7,*(undefined8 *)puVar4,0);
            }
LAB_0268e1e0:
            FUN_0160c430(plVar7,*(undefined8 *)PTR_DAT_033ead30,0);
          }
        }
        iVar5 = iVar5 + 1;
        iVar6 = (**(code **)(*param_1 + 0x178))(param_1,*(undefined8 *)(*param_1 + 0x180));
      } while (iVar5 < iVar6);
    }
    (**(code **)(*plVar7 + 0x168))(plVar7,*(undefined8 *)(*plVar7 + 0x170));
    return;
  }
LAB_0268e244:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


