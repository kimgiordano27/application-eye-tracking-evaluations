/*
FUNCTION_NAME: OVRPlugin$$get_systemDisplayFrequency
ENTRY_POINT: 03385304
PROGRAM: gunraiders-libil2cpp.so
SCORE: 101
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x03385a94) */
/* WARNING: Removing unreachable block (ram,0x03385ac0) */
/* WARNING: Removing unreachable block (ram,0x03385c6c) */

long OVRPlugin__get_systemDisplayFrequency(void)

{
  byte bVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  long *plVar11;
  undefined8 *puVar12;
  long *plVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  int *piVar21;
  long *unaff_x20;
  long unaff_x21;
  int unaff_w23;
  undefined8 uVar22;
  undefined8 unaff_x27;
  long *unaff_x28;
  
  thunk_FUN_01c1d1e8();
  puVar5 = 
  Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator<TerrainTileCoord,_Terrain>_Dispose__
  ;
  puVar4 = Method_System_Collections_Generic_Dictionary_Enumerator<string,_string>_get_Current__;
  puVar3 = 
  Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<string,_SchemaNotation>_get_Current__
  ;
  lVar14 = *unaff_x28;
  if (*(long *)(*(long *)(lVar14 + 0xb8) + 8) == 0) {
    if (*(int *)(lVar14 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8(lVar14);
      lVar14 = *unaff_x28;
    }
    uVar22 = **(undefined8 **)(lVar14 + 0xb8);
    uVar10 = thunk_FUN_01c496e0(*(undefined8 *)
                                 Method_System_Collections_Generic_Dictionary_Enumerator<string,_RenderGraphDebugData>_get_Current__
                               );
    FUN_02b67c90(uVar10,uVar22,
                 *(undefined8 *)
                  Method_System_Collections_Generic_Dictionary_Enumerator<Transform,_List<UITextDamage>>_get_Current__
                 ,0);
    *(undefined8 *)(*(long *)(*unaff_x28 + 0xb8) + 8) = uVar10;
  }
  plVar11 = (long *)FUN_02358a2c();
  lVar14 = thunk_FUN_01c496e0(*(undefined8 *)puVar4);
  FUN_02d4f880(lVar14,*(undefined8 *)puVar3);
  if (unaff_w23 == 2) {
    if (plVar11 != (long *)0x0) {
      lVar15 = *plVar11;
      uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
      if (uVar17 != 0) {
        piVar21 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar21 + -2) ==
              *(long *)Oculus_Platform_Models_LivestreamingStartResult_TypeInfo) {
            puVar12 = (undefined8 *)(lVar15 + (long)*piVar21 * 0x10 + 0x138);
            goto LAB_03385500;
          }
          uVar17 = uVar17 - 1;
          piVar21 = piVar21 + 4;
        } while (uVar17 != 0);
      }
      puVar12 = (undefined8 *)
                FUN_01c72498(plVar11,*(long *)
                                      Oculus_Platform_Models_LivestreamingStartResult_TypeInfo,0);
LAB_03385500:
      plVar11 = (long *)(*(code *)*puVar12)(plVar11,puVar12[1]);
      puVar6 = 
      Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<string,_SchemaNotation>_MoveNext__
      ;
      puVar5 = Oculus_Platform_Models_LivestreamingStatus_TypeInfo;
      puVar4 = UnityEngine_UIElements_ListViewDragger_TypeInfo;
      puVar3 = PTR_DAT_04230960;
      if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4a4();
      }
      do {
        lVar15 = *plVar11;
        uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
        if (uVar17 != 0) {
          piVar21 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(long *)(piVar21 + -2) == *(long *)puVar3) {
              puVar12 = (undefined8 *)(lVar15 + (long)*piVar21 * 0x10 + 0x138);
              goto LAB_03385580;
            }
            uVar17 = uVar17 - 1;
            piVar21 = piVar21 + 4;
          } while (uVar17 != 0);
        }
        puVar12 = (undefined8 *)FUN_01c72498(plVar11,*(long *)puVar3,0);
LAB_03385580:
        uVar17 = (*(code *)*puVar12)(plVar11,puVar12[1]);
        if ((uVar17 & 1) == 0) {
          if (plVar11 == (long *)0x0) {
            return lVar14;
          }
          lVar15 = *plVar11;
          uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
          if (uVar17 == 0) goto LAB_033856c8;
          piVar21 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          goto LAB_033856b0;
        }
        lVar15 = *plVar11;
        uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
        if (uVar17 != 0) {
          piVar21 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(long *)(piVar21 + -2) == *(long *)puVar5) {
              puVar12 = (undefined8 *)(lVar15 + (long)*piVar21 * 0x10 + 0x138);
              goto LAB_033855dc;
            }
            uVar17 = uVar17 - 1;
            piVar21 = piVar21 + 4;
          } while (uVar17 != 0);
        }
        puVar12 = (undefined8 *)FUN_01c72498(plVar11,*(long *)puVar5,0);
LAB_033855dc:
        plVar13 = (long *)(*(code *)*puVar12)(plVar11,puVar12[1]);
        if (plVar13 != (long *)0x0) {
          bVar1 = *(byte *)(*(long *)puVar4 + 0x130);
          if (((bVar1 <= *(byte *)(*plVar13 + 0x130)) &&
              (*(long *)(*(long *)(*plVar13 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)puVar4)) &&
             (uVar17 = FUN_0320ed20(plVar13,0), (uVar17 & 1) == 0)) {
            if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01c5d4a4();
            }
            lVar15 = *(long *)(lVar14 + 0x10);
            lVar18 = *(long *)puVar6;
            *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
            if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01c5d4a4();
            }
            uVar2 = *(uint *)(lVar14 + 0x18);
            if (uVar2 < *(uint *)(lVar15 + 0x18)) {
              *(uint *)(lVar14 + 0x18) = uVar2 + 1;
              *(long **)(lVar15 + (long)(int)uVar2 * 8 + 0x20) = plVar13;
            }
            else {
              FUN_02d5004c(lVar14,plVar13,
                           *(undefined8 *)(*(long *)(*(long *)(lVar18 + 0x20) + 0xc0) + 0x70));
            }
          }
        }
      } while( true );
    }
  }
  else {
    if (*(int *)(*(long *)UnityEngine_Splines_InterpolatorUtility_TypeInfo + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    lVar15 = FUN_033a6f30();
    if (*(int *)(*unaff_x20 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8(*unaff_x20);
    }
    uVar10 = FUN_033815a8();
    uVar22 = thunk_FUN_01c496e0(*(undefined8 *)
                                 Method_System_Collections_Generic_Dictionary_Enumerator<string,_RenderGraphDebugData>_get_Current__
                               );
    FUN_02b67c90(uVar22,0,*(undefined8 *)
                           Method_System_Collections_Generic_Dictionary_Enumerator<TerrainTileCoord,_Terrain>_Dispose__
                 ,0);
    uVar10 = FUN_02358a2c(uVar10,uVar22,*(undefined8 *)puVar5);
    lVar18 = FUN_02357630(uVar10,*(undefined8 *)
                                  Method_System_Collections_Generic_Dictionary_Enumerator<TerrainTileCoord,_Terrain>_get_Current__
                         );
    if (plVar11 != (long *)0x0) {
      lVar16 = *plVar11;
      uVar17 = (ulong)*(ushort *)(lVar16 + 0x12e);
      if (uVar17 != 0) {
        piVar21 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
        do {
          if (*(long *)(piVar21 + -2) ==
              *(long *)Oculus_Platform_Models_LivestreamingStartResult_TypeInfo) {
            puVar12 = (undefined8 *)(lVar16 + (long)*piVar21 * 0x10 + 0x138);
            goto LAB_033856e4;
          }
          uVar17 = uVar17 - 1;
          piVar21 = piVar21 + 4;
        } while (uVar17 != 0);
      }
      puVar12 = (undefined8 *)
                FUN_01c72498(plVar11,*(long *)
                                      Oculus_Platform_Models_LivestreamingStartResult_TypeInfo,0);
LAB_033856e4:
      plVar11 = (long *)(*(code *)*puVar12)(plVar11,puVar12[1]);
      puVar8 = 
      Method_System_Collections_Generic_Dictionary_Enumerator<Transform,_List<UITextDamage>>_MoveNext__
      ;
      puVar6 = 
      Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator<TerrainTileCoord,_Terrain>_get_Current__
      ;
      puVar5 = 
      Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<string,_SchemaNotation>_MoveNext__
      ;
      puVar4 = Oculus_Platform_Models_LivestreamingStatus_TypeInfo;
      puVar3 = PTR_DAT_04230960;
      if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4a4();
      }
LAB_03385724:
      lVar16 = *plVar11;
      uVar17 = (ulong)*(ushort *)(lVar16 + 0x12e);
      if (uVar17 != 0) {
        piVar21 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
        do {
          if (*(long *)(piVar21 + -2) == *(long *)puVar3) {
            puVar12 = (undefined8 *)(lVar16 + (long)*piVar21 * 0x10 + 0x138);
            goto LAB_03385770;
          }
          uVar17 = uVar17 - 1;
          piVar21 = piVar21 + 4;
        } while (uVar17 != 0);
      }
      puVar12 = (undefined8 *)FUN_01c72498(plVar11,*(long *)puVar3,0);
LAB_03385770:
      uVar17 = (*(code *)*puVar12)(plVar11,puVar12[1]);
      puVar9 = 
      Method_System_Collections_Generic_Dictionary_Enumerator<Transform,_Vector3>_get_Current__;
      puVar7 = 
      Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator<TerrainTileCoord,_Terrain>_Dispose__
      ;
      if ((uVar17 & 1) != 0) {
        lVar16 = *plVar11;
        uVar17 = (ulong)*(ushort *)(lVar16 + 0x12e);
        if (uVar17 != 0) {
          piVar21 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
          do {
            if (*(long *)(piVar21 + -2) == *(long *)puVar4) {
              puVar12 = (undefined8 *)(lVar16 + (long)*piVar21 * 0x10 + 0x138);
              goto LAB_033857cc;
            }
            uVar17 = uVar17 - 1;
            piVar21 = piVar21 + 4;
          } while (uVar17 != 0);
        }
        puVar12 = (undefined8 *)FUN_01c72498(plVar11,*(long *)puVar4,0);
LAB_033857cc:
        plVar13 = (long *)(*(code *)*puVar12)(plVar11,puVar12[1]);
        if (*(char *)(unaff_x21 + 0x24) == '\0') goto code_r0x033857e4;
        goto LAB_03385834;
      }
      if (plVar11 == (long *)0x0) goto LAB_03385ab4;
      lVar15 = *plVar11;
      uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
      if (uVar17 == 0) goto LAB_03385a68;
      piVar21 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      goto LAB_03385a50;
    }
  }
LAB_03385c58:
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4a4();
code_r0x033857e4:
  uVar10 = *(undefined8 *)
            Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<string,_XmlSqlBinaryReader_NamespaceDecl>_get_Current__
  ;
  if (*(int *)(*(long *)PTR_DAT_0422fb28 + 0xe0) == 0) {
    thunk_FUN_01c1d1e8();
  }
  uVar10 = FUN_032e04b8(uVar10,0);
  if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01c5d4a4(uVar10,uVar10);
  }
  uVar17 = (**(code **)(*plVar13 + 0x1f8))(plVar13,uVar10,1,*(undefined8 *)(*plVar13 + 0x200));
  if ((uVar17 & 1) == 0) {
LAB_03385834:
    if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4a4();
    }
    uVar17 = FUN_02d503d4(lVar18,plVar13,*(undefined8 *)puVar8);
    if ((uVar17 & 1) == 0) {
      if (*(int *)(*(long *)UnityEngine_Splines_InterpolatorUtility_TypeInfo + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      lVar16 = FUN_0236e6e0(plVar13,*(undefined8 *)puVar6);
      if (lVar16 == 0) {
        if (*(int *)(*(long *)UnityEngine_Splines_InterpolatorUtility_TypeInfo + 0xe0) == 0) {
          thunk_FUN_01c1d1e8();
        }
        lVar16 = FUN_0236e6e0(plVar13,*(undefined8 *)
                                       Method_System_Collections_Generic_Dictionary_Enumerator<Transform,_List<UITextDamage>>_Dispose__
                             );
        if (lVar16 == 0) {
          if (lVar15 == 0) goto LAB_03385724;
          if (*(int *)(*(long *)UnityEngine_Splines_InterpolatorUtility_TypeInfo + 0xe0) == 0) {
            thunk_FUN_01c1d1e8();
          }
          lVar16 = FUN_0236e6e0(plVar13,*(undefined8 *)
                                         Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator<TerrainTileCoord,_Terrain>_MoveNext__
                               );
          if (lVar16 == 0) goto LAB_03385724;
          if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01c5d4a4();
          }
          lVar16 = *(long *)(lVar14 + 0x10);
          lVar19 = *(long *)puVar5;
          *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
          if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01c5d4a4();
          }
          lVar20 = (long)(int)*(uint *)(lVar14 + 0x18);
          if (*(uint *)(lVar16 + 0x18) <= *(uint *)(lVar14 + 0x18)) {
            FUN_02d5004c(lVar14,plVar13,
                         *(undefined8 *)(*(long *)(*(long *)(lVar19 + 0x20) + 0xc0) + 0x70));
            goto LAB_03385724;
          }
        }
        else {
          if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01c5d4a4();
          }
          lVar16 = *(long *)(lVar14 + 0x10);
          lVar19 = *(long *)puVar5;
          *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
          if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01c5d4a4();
          }
          lVar20 = (long)(int)*(uint *)(lVar14 + 0x18);
          if (*(uint *)(lVar16 + 0x18) <= *(uint *)(lVar14 + 0x18)) {
            FUN_02d5004c(lVar14,plVar13,
                         *(undefined8 *)(*(long *)(*(long *)(lVar19 + 0x20) + 0xc0) + 0x70));
            goto LAB_03385724;
          }
        }
      }
      else {
        if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5d4a4();
        }
        lVar16 = *(long *)(lVar14 + 0x10);
        lVar19 = *(long *)puVar5;
        *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
        if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5d4a4();
        }
        lVar20 = (long)(int)*(uint *)(lVar14 + 0x18);
        if (*(uint *)(lVar16 + 0x18) <= *(uint *)(lVar14 + 0x18)) {
          FUN_02d5004c(lVar14,plVar13,
                       *(undefined8 *)(*(long *)(*(long *)(lVar19 + 0x20) + 0xc0) + 0x70));
          goto LAB_03385724;
        }
      }
    }
    else {
      if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4a4();
      }
      lVar16 = *(long *)(lVar14 + 0x10);
      lVar19 = *(long *)puVar5;
      *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
      if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4a4();
      }
      lVar20 = (long)(int)*(uint *)(lVar14 + 0x18);
      if (*(uint *)(lVar16 + 0x18) <= *(uint *)(lVar14 + 0x18)) {
        FUN_02d5004c(lVar14,plVar13,
                     *(undefined8 *)(*(long *)(*(long *)(lVar19 + 0x20) + 0xc0) + 0x70));
        goto LAB_03385724;
      }
    }
    *(int *)(lVar14 + 0x18) = (int)lVar20 + 1;
    *(long **)(lVar16 + lVar20 * 8 + 0x20) = plVar13;
  }
  goto LAB_03385724;
  while( true ) {
    uVar17 = uVar17 - 1;
    piVar21 = piVar21 + 4;
    if (uVar17 == 0) break;
LAB_03385a50:
    if (*(long *)(piVar21 + -2) == *(long *)PTR_DAT_0422fce8) {
      puVar12 = (undefined8 *)(lVar15 + (long)*piVar21 * 0x10 + 0x138);
      goto LAB_03385aa8;
    }
  }
LAB_03385a68:
  puVar12 = (undefined8 *)FUN_01c72498(plVar11,*(long *)PTR_DAT_0422fce8,0);
LAB_03385aa8:
  (*(code *)*puVar12)(plVar11,puVar12[1]);
LAB_03385ab4:
  uVar17 = FUN_033847a4(unaff_x27,
                        *(undefined8 *)
                         Method_System_Collections_Generic_Dictionary_Enumerator<Type,_List<string>>_Dispose__
                        ,0,&stack0x00000018);
  if ((uVar17 & 1) != 0) {
    uVar10 = thunk_FUN_01c496e0(*(undefined8 *)
                                 Method_System_Collections_Generic_Dictionary_Enumerator<string,_RenderGraphDebugData>_get_Current__
                               );
    FUN_02b67c90();
    uVar10 = FUN_02358a2c(lVar14,uVar10,*(undefined8 *)puVar7);
    lVar14 = FUN_02357630(uVar10,*(undefined8 *)
                                  Method_System_Collections_Generic_Dictionary_Enumerator<TerrainTileCoord,_Terrain>_get_Current__
                         );
  }
  uVar10 = *(undefined8 *)
            Method_System_Collections_Generic_Dictionary<string,_MasterAudio_AudioGroupInfo>_GetEnumerator__
  ;
  if (*(int *)(*(long *)PTR_DAT_0422fb28 + 0xe0) == 0) {
    thunk_FUN_01c1d1e8();
  }
  plVar11 = (long *)FUN_032e04b8(uVar10,0);
  if (plVar11 != (long *)0x0) {
    uVar17 = (**(code **)(*plVar11 + 0x298))(plVar11,unaff_x27,*(undefined8 *)(*plVar11 + 0x2a0));
    if ((uVar17 & 1) == 0) {
      return lVar14;
    }
    lVar15 = *(long *)puVar9;
    if (*(int *)(lVar15 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
      lVar15 = *(long *)puVar9;
    }
    lVar18 = *(long *)(*(long *)(lVar15 + 0xb8) + 0x10);
    if (lVar18 == 0) {
      if (*(int *)(lVar15 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
        lVar15 = *(long *)puVar9;
      }
      uVar10 = **(undefined8 **)(lVar15 + 0xb8);
      lVar18 = thunk_FUN_01c496e0(*(undefined8 *)
                                   Method_System_Collections_Generic_Dictionary_Enumerator<string,_RenderGraphDebugData>_get_Current__
                                 );
      FUN_02b67c90(lVar18,uVar10,
                   *(undefined8 *)
                    Method_System_Collections_Generic_Dictionary_Enumerator<Transform,_Vector3>_MoveNext__
                   ,0);
      *(long *)(*(long *)(*(long *)puVar9 + 0xb8) + 0x10) = lVar18;
    }
    uVar10 = FUN_02358a2c(lVar14,lVar18,*(undefined8 *)puVar7);
    lVar14 = FUN_02357630(uVar10,*(undefined8 *)
                                  Method_System_Collections_Generic_Dictionary_Enumerator<TerrainTileCoord,_Terrain>_get_Current__
                         );
    return lVar14;
  }
  goto LAB_03385c58;
  while( true ) {
    uVar17 = uVar17 - 1;
    piVar21 = piVar21 + 4;
    if (uVar17 == 0) break;
LAB_033856b0:
    if (*(long *)(piVar21 + -2) == *(long *)PTR_DAT_0422fce8) {
      puVar12 = (undefined8 *)(lVar15 + (long)*piVar21 * 0x10 + 0x138);
      goto LAB_03385a84;
    }
  }
LAB_033856c8:
  puVar12 = (undefined8 *)FUN_01c72498(plVar11,*(long *)PTR_DAT_0422fce8,0);
LAB_03385a84:
  (*(code *)*puVar12)(plVar11,puVar12[1]);
  return lVar14;
}


