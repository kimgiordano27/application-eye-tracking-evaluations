/*
FUNCTION_NAME: FUN_065c71cc
ENTRY_POINT: 065c71cc
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 88
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ray_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_13;ray_or_cast_sink_hits_2;telemetry_or_network_hits_8
*/


void FUN_065c71cc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  byte bVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  long *plVar12;
  undefined4 uVar13;
  
  if ((DAT_073a0716 & 1) == 0) {
    FUN_02fe925c(PTR_DAT_06f76398);
    FUN_02fe925c(System_Runtime_CompilerServices_ValueTaskAwaiter_var);
    FUN_02fe925c(
                Unity_Entities_ChunkIterationUtility_SetEnabledBitsOnAllChunks_00000A5D_PostfixBurstDelegate_var
                );
    FUN_02fe925c(UnityEngine_AI_NavMeshLinkData_var);
    FUN_02fe925c(
                Unity_Entities_ChunkIterationUtility_ToArchetypeChunkList_00000A41_PostfixBurstDelegate_var
                );
    FUN_02fe925c(PTR_DAT_06f99a88);
    FUN_02fe925c(System_ValueType_var);
    FUN_02fe925c(
                Unity_Entities_ChunkIterationUtility_ToChunkIndexList_00000A42_PostfixBurstDelegate_var
                );
    FUN_02fe925c(System_Runtime_Serialization_CollectionDataContract_DictionaryEnumerator_var);
    FUN_02fe925c(
                System_Runtime_Serialization_CollectionDataContract_GenericDictionaryEnumerator<K,_V>_var
                );
    FUN_02fe925c(
                Pathfinding_Graphs_Navmesh_ColliderMeshBuilder2D_GenerateMeshesFromShapes_00000AF1_PostfixBurstDelegate_var
                );
    FUN_02fe925c(System_Net_CommandStream_PipelineEntry_var);
    DAT_073a0716 = 1;
  }
  puVar2 = PTR_DAT_06f99a88;
  plVar12 = *(long **)(param_1 + 0x4a0);
  puVar8 = (undefined8 *)(param_1 + 0x4a0);
  if (plVar12 != (long *)0x0) {
    lVar9 = *plVar12;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_06f99a88) {
          puVar6 = (undefined8 *)(lVar9 + (long)(*piVar11 + 5) * 0x10 + 0x138);
          goto LAB_065c72f0;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar6 = (undefined8 *)FUN_02feb5b8(plVar12,*(long *)PTR_DAT_06f99a88,5);
LAB_065c72f0:
    (*(code *)*puVar6)(plVar12,0,puVar6[1]);
    plVar12 = (long *)*puVar8;
    if (plVar12 == (long *)0x0) goto LAB_065c78b0;
    lVar9 = *plVar12;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)puVar2) {
          puVar6 = (undefined8 *)(lVar9 + (long)(*piVar11 + 7) * 0x10 + 0x138);
          goto LAB_065c7358;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar6 = (undefined8 *)FUN_02feb5b8(plVar12,*(long *)puVar2,7);
LAB_065c7358:
    (*(code *)*puVar6)(plVar12,0,puVar6[1]);
    plVar12 = (long *)*puVar8;
    if (plVar12 == (long *)0x0) goto LAB_065c78b0;
    lVar9 = *plVar12;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)puVar2) {
          puVar6 = (undefined8 *)(lVar9 + (long)(*piVar11 + 0xb) * 0x10 + 0x138);
          goto LAB_065c73c0;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar6 = (undefined8 *)FUN_02feb5b8(plVar12,*(long *)puVar2,0xb);
LAB_065c73c0:
    (*(code *)*puVar6)(plVar12,0,puVar6[1]);
    plVar12 = (long *)*puVar8;
    if (plVar12 == (long *)0x0) goto LAB_065c78b0;
    lVar9 = *plVar12;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)puVar2) {
          puVar6 = (undefined8 *)(lVar9 + (long)(*piVar11 + 0xd) * 0x10 + 0x138);
          goto LAB_065c7428;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar6 = (undefined8 *)FUN_02feb5b8(plVar12,*(long *)puVar2,0xd);
LAB_065c7428:
    (*(code *)*puVar6)(plVar12,0,puVar6[1]);
    plVar12 = (long *)*puVar8;
    if (plVar12 == (long *)0x0) goto LAB_065c78b0;
    lVar9 = *plVar12;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)puVar2) {
          puVar6 = (undefined8 *)(lVar9 + (long)(*piVar11 + 9) * 0x10 + 0x138);
          goto LAB_065c7490;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar6 = (undefined8 *)FUN_02feb5b8(plVar12,*(long *)puVar2,9);
LAB_065c7490:
    (*(code *)*puVar6)(plVar12,0,puVar6[1]);
  }
  puVar3 = System_Net_CommandStream_PipelineEntry_var;
  puVar1 = System_Runtime_Serialization_CollectionDataContract_GenericDictionaryEnumerator<K,_V>_var
  ;
  *(undefined8 *)(param_1 + 0x4a0) = param_2;
  thunk_FUN_03048534(puVar8,param_2);
  plVar12 = *(long **)(param_1 + 0x4a0);
  uVar7 = thunk_FUN_0301080c(*(undefined8 *)puVar3);
  FUN_0660bb64(uVar7,param_1,*(undefined8 *)puVar1,0);
  puVar3 = System_Runtime_Serialization_CollectionDataContract_DictionaryEnumerator_var;
  puVar1 = 
  Unity_Entities_ChunkIterationUtility_SetEnabledBitsOnAllChunks_00000A5D_PostfixBurstDelegate_var;
  if (plVar12 != (long *)0x0) {
    lVar9 = *plVar12;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)puVar2) {
          puVar6 = (undefined8 *)(lVar9 + (long)(*piVar11 + 5) * 0x10 + 0x138);
          goto FUN_065c7544;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar6 = (undefined8 *)FUN_02feb5b8(plVar12,*(long *)puVar2,5);
FUN_065c7544:
    (*(code *)*puVar6)(plVar12,uVar7,puVar6[1]);
    plVar12 = *(long **)(param_1 + 0x4a0);
    uVar7 = thunk_FUN_0301080c(*(undefined8 *)puVar1);
    FUN_0511c024(uVar7,param_1,*(undefined8 *)puVar3,0);
    puVar3 = Unity_Entities_ChunkIterationUtility_ToChunkIndexList_00000A42_PostfixBurstDelegate_var
    ;
    puVar1 = PTR_DAT_06f76398;
    if (plVar12 != (long *)0x0) {
      lVar9 = *plVar12;
      uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *(long *)puVar2) {
            puVar6 = (undefined8 *)(lVar9 + (long)(*piVar11 + 0xb) * 0x10 + 0x138);
            goto LAB_065c75d8;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar6 = (undefined8 *)FUN_02feb5b8(plVar12,*(long *)puVar2,0xb);
LAB_065c75d8:
      (*(code *)*puVar6)(plVar12,uVar7,puVar6[1]);
      plVar12 = *(long **)(param_1 + 0x4a0);
      uVar7 = thunk_FUN_0301080c(*(undefined8 *)puVar1);
      FUN_04adcad4(uVar7,param_1,*(undefined8 *)puVar3,0);
      puVar3 = 
      Pathfinding_Graphs_Navmesh_ColliderMeshBuilder2D_GenerateMeshesFromShapes_00000AF1_PostfixBurstDelegate_var
      ;
      puVar1 = 
      Unity_Entities_ChunkIterationUtility_ToArchetypeChunkList_00000A41_PostfixBurstDelegate_var;
      if (plVar12 != (long *)0x0) {
        lVar9 = *plVar12;
        uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar10 != 0) {
          piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == *(long *)puVar2) {
              puVar6 = (undefined8 *)(lVar9 + (long)(*piVar11 + 0xd) * 0x10 + 0x138);
              goto LAB_065c766c;
            }
            uVar10 = uVar10 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar10 != 0);
        }
        puVar6 = (undefined8 *)FUN_02feb5b8(plVar12,*(long *)puVar2,0xd);
LAB_065c766c:
        (*(code *)*puVar6)(plVar12,uVar7,puVar6[1]);
        plVar12 = *(long **)(param_1 + 0x4a0);
        uVar7 = thunk_FUN_0301080c(*(undefined8 *)puVar1);
        FUN_057f7504(uVar7,param_1,*(undefined8 *)puVar3,0);
        if (plVar12 != (long *)0x0) {
          lVar9 = *plVar12;
          uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
          if (uVar10 != 0) {
            piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
            do {
              if (*(long *)(piVar11 + -2) == *(long *)puVar2) {
                puVar6 = (undefined8 *)(lVar9 + (long)(*piVar11 + 9) * 0x10 + 0x138);
                goto LAB_065c76f0;
              }
              uVar10 = uVar10 - 1;
              piVar11 = piVar11 + 4;
            } while (uVar10 != 0);
          }
          puVar6 = (undefined8 *)FUN_02feb5b8(plVar12,*(long *)puVar2,9);
LAB_065c76f0:
          (*(code *)*puVar6)(plVar12,uVar7,puVar6[1]);
          plVar12 = *(long **)(param_1 + 0x4a0);
          if (plVar12 != (long *)0x0) {
            lVar9 = *plVar12;
            uVar13 = *(undefined4 *)(param_1 + 0x14);
            uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
            if (uVar10 != 0) {
              piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
              do {
                if (*(long *)(piVar11 + -2) == *(long *)puVar2) {
                  puVar6 = (undefined8 *)(lVar9 + (long)(*piVar11 + 0x12) * 0x10 + 0x138);
                  goto LAB_065c775c;
                }
                uVar10 = uVar10 - 1;
                piVar11 = piVar11 + 4;
              } while (uVar10 != 0);
            }
            puVar6 = (undefined8 *)FUN_02feb5b8(plVar12,*(long *)puVar2,0x12);
LAB_065c775c:
            (*(code *)*puVar6)(uVar13,plVar12,puVar6[1]);
            puVar1 = UnityEngine_AI_NavMeshLinkData_var;
            plVar12 = (long *)*puVar8;
            if (plVar12 != (long *)0x0) {
              lVar9 = *plVar12;
              uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
              if (uVar10 != 0) {
                piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar11 + -2) == *(long *)puVar2) {
                    puVar8 = (undefined8 *)(lVar9 + (long)(*piVar11 + 0xe) * 0x10 + 0x138);
                    goto LAB_065c77cc;
                  }
                  uVar10 = uVar10 - 1;
                  piVar11 = piVar11 + 4;
                } while (uVar10 != 0);
              }
              puVar8 = (undefined8 *)FUN_02feb5b8(plVar12,*(long *)puVar2,0xe);
LAB_065c77cc:
              bVar4 = (*(code *)*puVar8)(plVar12,puVar8[1]);
              *(byte *)(param_1 + 0x412) = bVar4 & 1;
              iVar5 = FUN_04c2a8d4(param_1 + 0x2d0,*(undefined8 *)puVar1);
              puVar1 = System_ValueType_var;
              if ((0 < iVar5) || (*(char *)(param_1 + 0x411) != '\0')) {
                plVar12 = *(long **)(param_1 + 0x4a0);
                uVar7 = thunk_FUN_0301080c(*(undefined8 *)
                                            System_Runtime_CompilerServices_ValueTaskAwaiter_var);
                FUN_0510f5fc(uVar7,param_1,*(undefined8 *)puVar1,0);
                if (plVar12 == (long *)0x0) goto LAB_065c78b0;
                lVar9 = *plVar12;
                uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
                if (uVar10 != 0) {
                  piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar11 + -2) == *(long *)puVar2) {
                      puVar8 = (undefined8 *)(lVar9 + (long)(*piVar11 + 7) * 0x10 + 0x138);
                      goto LAB_065c7880;
                    }
                    uVar10 = uVar10 - 1;
                    piVar11 = piVar11 + 4;
                  } while (uVar10 != 0);
                }
                puVar8 = (undefined8 *)FUN_02feb5b8(plVar12,*(long *)puVar2,7);
LAB_065c7880:
                (*(code *)*puVar8)(plVar12,uVar7,puVar8[1]);
                *(undefined1 *)(param_1 + 0x410) = 1;
              }
              return;
            }
          }
        }
      }
    }
  }
LAB_065c78b0:
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}


