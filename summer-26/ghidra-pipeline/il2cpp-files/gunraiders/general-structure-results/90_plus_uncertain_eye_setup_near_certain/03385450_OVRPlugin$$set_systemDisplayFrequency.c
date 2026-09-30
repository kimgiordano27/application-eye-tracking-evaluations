/*
FUNCTION_NAME: OVRPlugin$$set_systemDisplayFrequency
ENTRY_POINT: 03385450
PROGRAM: gunraiders-libil2cpp.so
SCORE: 101
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_19;strong_pose_or_ray_construction_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x03385ac0) */
/* WARNING: Removing unreachable block (ram,0x03385c6c) */

long OVRPlugin__set_systemDisplayFrequency(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 *puVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  int *piVar15;
  long unaff_x19;
  long unaff_x21;
  long *unaff_x22;
  undefined8 unaff_x27;
  undefined8 *unaff_x29;
  long in_stack_00000010;
  
  uVar7 = thunk_FUN_01c496e0(*(undefined8 *)
                              Method_System_Collections_Generic_Dictionary_Enumerator<string,_RenderGraphDebugData>_get_Current__
                            );
  FUN_02b67c90(uVar7,0,*(undefined8 *)
                        Method_System_Collections_Generic_Dictionary_Enumerator<TerrainTileCoord,_Terrain>_Dispose__
               ,0);
  uVar7 = FUN_02358a2c(param_1,uVar7,*unaff_x29);
  lVar8 = FUN_02357630(uVar7,*(undefined8 *)
                              Method_System_Collections_Generic_Dictionary_Enumerator<TerrainTileCoord,_Terrain>_get_Current__
                      );
  if (unaff_x22 != (long *)0x0) {
    lVar12 = *unaff_x22;
    uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar13 != 0) {
      piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) ==
            *(long *)Oculus_Platform_Models_LivestreamingStartResult_TypeInfo) {
          puVar9 = (undefined8 *)(lVar12 + (long)*piVar15 * 0x10 + 0x138);
          goto LAB_033856e4;
        }
        uVar13 = uVar13 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar13 != 0);
    }
    puVar9 = (undefined8 *)FUN_01c72498();
LAB_033856e4:
    plVar10 = (long *)(*(code *)*puVar9)();
    puVar5 = 
    Method_System_Collections_Generic_Dictionary_Enumerator<Transform,_List<UITextDamage>>_MoveNext__
    ;
    puVar4 = 
    Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator<TerrainTileCoord,_Terrain>_get_Current__
    ;
    puVar2 = Oculus_Platform_Models_LivestreamingStatus_TypeInfo;
    puVar1 = PTR_DAT_04230960;
    if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4a4();
    }
LAB_03385724:
    lVar12 = *plVar10;
    uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar13 != 0) {
      piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == *(long *)puVar1) {
          puVar9 = (undefined8 *)(lVar12 + (long)*piVar15 * 0x10 + 0x138);
          goto LAB_03385770;
        }
        uVar13 = uVar13 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar13 != 0);
    }
    puVar9 = (undefined8 *)FUN_01c72498(plVar10,*(long *)puVar1,0);
LAB_03385770:
    uVar13 = (*(code *)*puVar9)(plVar10,puVar9[1]);
    puVar6 = 
    Method_System_Collections_Generic_Dictionary_Enumerator<Transform,_Vector3>_get_Current__;
    puVar3 = 
    Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator<TerrainTileCoord,_Terrain>_Dispose__
    ;
    if ((uVar13 & 1) != 0) {
      lVar12 = *plVar10;
      uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar13 != 0) {
        piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == *(long *)puVar2) {
            puVar9 = (undefined8 *)(lVar12 + (long)*piVar15 * 0x10 + 0x138);
            goto LAB_033857cc;
          }
          uVar13 = uVar13 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar13 != 0);
      }
      puVar9 = (undefined8 *)FUN_01c72498(plVar10,*(long *)puVar2,0);
LAB_033857cc:
      plVar11 = (long *)(*(code *)*puVar9)(plVar10,puVar9[1]);
      if (*(char *)(unaff_x21 + 0x24) == '\0') goto code_r0x033857e4;
      goto LAB_03385834;
    }
    if (plVar10 == (long *)0x0) goto LAB_03385ab4;
    lVar8 = *plVar10;
    uVar13 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar13 == 0) goto LAB_03385a68;
    piVar15 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
    goto LAB_03385a50;
  }
  goto LAB_03385c58;
code_r0x033857e4:
  uVar7 = *(undefined8 *)
           Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<string,_XmlSqlBinaryReader_NamespaceDecl>_get_Current__
  ;
  if (*(int *)(*(long *)PTR_DAT_0422fb28 + 0xe0) == 0) {
    thunk_FUN_01c1d1e8();
  }
  uVar7 = FUN_032e04b8(uVar7,0);
  if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01c5d4a4(uVar7,uVar7);
  }
  uVar13 = (**(code **)(*plVar11 + 0x1f8))(plVar11,uVar7,1,*(undefined8 *)(*plVar11 + 0x200));
  if ((uVar13 & 1) == 0) {
LAB_03385834:
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4a4();
    }
    uVar13 = FUN_02d503d4(lVar8,plVar11,*(undefined8 *)puVar5);
    if ((uVar13 & 1) == 0) {
      if (*(int *)(*(long *)UnityEngine_Splines_InterpolatorUtility_TypeInfo + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      lVar12 = FUN_0236e6e0(plVar11,*(undefined8 *)puVar4);
      if (lVar12 == 0) {
        if (*(int *)(*(long *)UnityEngine_Splines_InterpolatorUtility_TypeInfo + 0xe0) == 0) {
          thunk_FUN_01c1d1e8();
        }
        lVar12 = FUN_0236e6e0(plVar11,*(undefined8 *)
                                       Method_System_Collections_Generic_Dictionary_Enumerator<Transform,_List<UITextDamage>>_Dispose__
                             );
        if (lVar12 == 0) {
          if (in_stack_00000010 == 0) goto LAB_03385724;
          if (*(int *)(*(long *)UnityEngine_Splines_InterpolatorUtility_TypeInfo + 0xe0) == 0) {
            thunk_FUN_01c1d1e8();
          }
          lVar12 = FUN_0236e6e0(plVar11,*(undefined8 *)
                                         Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator<TerrainTileCoord,_Terrain>_MoveNext__
                               );
          if (lVar12 == 0) goto LAB_03385724;
          if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01c5d4a4();
          }
          lVar12 = *(long *)(unaff_x19 + 0x10);
          *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
          if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01c5d4a4();
          }
          lVar14 = (long)(int)*(uint *)(unaff_x19 + 0x18);
          if (*(uint *)(lVar12 + 0x18) <= *(uint *)(unaff_x19 + 0x18)) {
            FUN_02d5004c();
            goto LAB_03385724;
          }
        }
        else {
          if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01c5d4a4();
          }
          lVar12 = *(long *)(unaff_x19 + 0x10);
          *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
          if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01c5d4a4();
          }
          lVar14 = (long)(int)*(uint *)(unaff_x19 + 0x18);
          if (*(uint *)(lVar12 + 0x18) <= *(uint *)(unaff_x19 + 0x18)) {
            FUN_02d5004c();
            goto LAB_03385724;
          }
        }
      }
      else {
        if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5d4a4();
        }
        lVar12 = *(long *)(unaff_x19 + 0x10);
        *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
        if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5d4a4();
        }
        lVar14 = (long)(int)*(uint *)(unaff_x19 + 0x18);
        if (*(uint *)(lVar12 + 0x18) <= *(uint *)(unaff_x19 + 0x18)) {
          FUN_02d5004c();
          goto LAB_03385724;
        }
      }
    }
    else {
      if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4a4();
      }
      lVar12 = *(long *)(unaff_x19 + 0x10);
      *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
      if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4a4();
      }
      lVar14 = (long)(int)*(uint *)(unaff_x19 + 0x18);
      if (*(uint *)(lVar12 + 0x18) <= *(uint *)(unaff_x19 + 0x18)) {
        FUN_02d5004c();
        goto LAB_03385724;
      }
    }
    *(int *)(unaff_x19 + 0x18) = (int)lVar14 + 1;
    *(long **)(lVar12 + lVar14 * 8 + 0x20) = plVar11;
  }
  goto LAB_03385724;
  while( true ) {
    uVar13 = uVar13 - 1;
    piVar15 = piVar15 + 4;
    if (uVar13 == 0) break;
LAB_03385a50:
    if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_0422fce8) {
      puVar9 = (undefined8 *)(lVar8 + (long)*piVar15 * 0x10 + 0x138);
      goto LAB_03385aa8;
    }
  }
LAB_03385a68:
  puVar9 = (undefined8 *)FUN_01c72498(plVar10,*(long *)PTR_DAT_0422fce8,0);
LAB_03385aa8:
  (*(code *)*puVar9)(plVar10,puVar9[1]);
LAB_03385ab4:
  uVar13 = FUN_033847a4(unaff_x27,
                        *(undefined8 *)
                         Method_System_Collections_Generic_Dictionary_Enumerator<Type,_List<string>>_Dispose__
                        ,0,&stack0x00000018);
  if ((uVar13 & 1) != 0) {
    thunk_FUN_01c496e0(*(undefined8 *)
                        Method_System_Collections_Generic_Dictionary_Enumerator<string,_RenderGraphDebugData>_get_Current__
                      );
    FUN_02b67c90();
    uVar7 = FUN_02358a2c();
    unaff_x19 = FUN_02357630(uVar7,*(undefined8 *)
                                    Method_System_Collections_Generic_Dictionary_Enumerator<TerrainTileCoord,_Terrain>_get_Current__
                            );
  }
  uVar7 = *(undefined8 *)
           Method_System_Collections_Generic_Dictionary<string,_MasterAudio_AudioGroupInfo>_GetEnumerator__
  ;
  if (*(int *)(*(long *)PTR_DAT_0422fb28 + 0xe0) == 0) {
    thunk_FUN_01c1d1e8();
  }
  plVar10 = (long *)FUN_032e04b8(uVar7,0);
  if (plVar10 != (long *)0x0) {
    uVar13 = (**(code **)(*plVar10 + 0x298))(plVar10,unaff_x27,*(undefined8 *)(*plVar10 + 0x2a0));
    if ((uVar13 & 1) != 0) {
      lVar8 = *(long *)puVar6;
      if (*(int *)(lVar8 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
        lVar8 = *(long *)puVar6;
      }
      lVar12 = *(long *)(*(long *)(lVar8 + 0xb8) + 0x10);
      if (lVar12 == 0) {
        if (*(int *)(lVar8 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8();
          lVar8 = *(long *)puVar6;
        }
        uVar7 = **(undefined8 **)(lVar8 + 0xb8);
        lVar12 = thunk_FUN_01c496e0(*(undefined8 *)
                                     Method_System_Collections_Generic_Dictionary_Enumerator<string,_RenderGraphDebugData>_get_Current__
                                   );
        FUN_02b67c90(lVar12,uVar7,
                     *(undefined8 *)
                      Method_System_Collections_Generic_Dictionary_Enumerator<Transform,_Vector3>_MoveNext__
                     ,0);
        *(long *)(*(long *)(*(long *)puVar6 + 0xb8) + 0x10) = lVar12;
      }
      uVar7 = FUN_02358a2c(unaff_x19,lVar12,*(undefined8 *)puVar3);
      unaff_x19 = FUN_02357630(uVar7,*(undefined8 *)
                                      Method_System_Collections_Generic_Dictionary_Enumerator<TerrainTileCoord,_Terrain>_get_Current__
                              );
    }
    return unaff_x19;
  }
LAB_03385c58:
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4a4();
}


