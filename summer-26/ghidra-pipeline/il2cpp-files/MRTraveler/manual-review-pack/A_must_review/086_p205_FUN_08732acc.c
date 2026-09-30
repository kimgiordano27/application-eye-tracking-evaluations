/*
FUNCTION_NAME: FUN_08732acc
ENTRY_POINT: 08732acc
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;data_collection;telemetry
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_21;strong_file_logging_hits_2;telemetry_or_network_hits_6;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


/* WARNING: Removing unreachable block (ram,0x08732e48) */
/* WARNING: Removing unreachable block (ram,0x08733140) */
/* WARNING: Removing unreachable block (ram,0x087331a4) */

void FUN_08732acc(undefined1 param_1 [16],float param_2,float param_3,float param_4,long param_5,
                 long param_6)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  int iVar9;
  undefined8 uVar10;
  long *plVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long lVar15;
  undefined4 uVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  ulong uVar20;
  int *piVar21;
  long *plVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined4 local_6c;
  long local_68;
  
  if ((DAT_0943c95d & 1) == 0) {
    FUN_03c8f898(UnityEngine_AI_NavMeshObstacleShape_var);
    FUN_03c8f898(PTR_DAT_08e81698);
    FUN_03c8f898(
                System_Collections_Concurrent_ConcurrentDictionary<string,_SubscriptionHandle>_TypeInfo
                );
    FUN_03c8f898(UnityEngine_UI_Navigation_var);
    FUN_03c8f898(PTR_DAT_08e6a288);
    FUN_03c8f898(PTR_DAT_08e816a0);
    FUN_03c8f898(PTR_DAT_08e816a8);
    FUN_03c8f898(PTR_DAT_08e6a290);
    FUN_03c8f898(System_Collections_Concurrent_ConcurrentDictionary<string,_TTSClipData>_TypeInfo);
    FUN_03c8f898(
                System_Collections_Concurrent_ConcurrentDictionary<string,_VoiceServiceRequest>_TypeInfo
                );
    FUN_03c8f898(System_Collections_Concurrent_ConcurrentDictionary<string,_WitTTSVRequest>_TypeInfo
                );
    FUN_03c8f898(
                System_Collections_Concurrent_ConcurrentDictionary<string,_WitWebSocketTtsRequest>_TypeInfo
                );
    FUN_03c8f898(
                System_Collections_Concurrent_ConcurrentDictionary<string,_TTSDebugger_TTSDebuggerFileStream>_TypeInfo
                );
    FUN_03c8f898(
                System_Collections_Concurrent_ConcurrentDictionary<Type,_Tuple<bool,_bool,_bool,_bool>>_TypeInfo
                );
    FUN_03c8f898(System_Collections_Concurrent_ConcurrentDictionary<Type,_IPropertyBag>_TypeInfo);
    DAT_0943c95d = 1;
  }
  puVar2 = System_Collections_Concurrent_ConcurrentDictionary<string,_SubscriptionHandle>_TypeInfo;
  local_68 = 0;
  local_6c = 0;
  if (*(long *)(param_5 + 0x420) != 0) {
    uVar10 = FUN_08741a6c(*(long *)(param_5 + 0x420),0);
    iVar9 = FUN_04614d78(uVar10,*(undefined8 *)puVar2);
    bVar1 = 0 < iVar9;
    if ((*(long *)(param_5 + 0x420) != 0) &&
       (plVar11 = (long *)FUN_08741a6c(*(long *)(param_5 + 0x420),0), plVar11 != (long *)0x0)) {
      lVar17 = *plVar11;
      uVar20 = (ulong)*(ushort *)(lVar17 + 0x12e);
      if (uVar20 != 0) {
        piVar21 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
        do {
          if (*(long *)(piVar21 + -2) == *(long *)PTR_DAT_08e816a0) {
            puVar12 = (undefined8 *)(lVar17 + (long)*piVar21 * 0x10 + 0x138);
            goto LAB_08732c58;
          }
          uVar20 = uVar20 - 1;
          piVar21 = piVar21 + 4;
        } while (uVar20 != 0);
      }
      puVar12 = (undefined8 *)FUN_03cf1348(plVar11,*(long *)PTR_DAT_08e816a0,0);
LAB_08732c58:
      puVar5 = PTR_DAT_08e816a8;
      puVar3 = PTR_DAT_08e6a290;
      puVar2 = PTR_DAT_08e6a288;
      plVar11 = (long *)(*(code *)*puVar12)(plVar11,puVar12[1]);
      puVar4 = PTR_DAT_08e81698;
      if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30();
      }
      lVar17 = 0;
      do {
        lVar18 = *plVar11;
        lVar15 = *(long *)puVar3;
        uVar20 = (ulong)*(ushort *)(lVar18 + 0x12e);
        if (uVar20 != 0) {
          piVar21 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
          do {
            if (*(long *)(piVar21 + -2) == lVar15) {
              puVar12 = (undefined8 *)(lVar18 + (long)*piVar21 * 0x10 + 0x138);
              goto LAB_08732cdc;
            }
            uVar20 = uVar20 - 1;
            piVar21 = piVar21 + 4;
          } while (uVar20 != 0);
        }
        puVar12 = (undefined8 *)FUN_03cf1348(plVar11,lVar15,0);
LAB_08732cdc:
        uVar20 = (*(code *)*puVar12)(plVar11,puVar12[1]);
        if ((uVar20 & 1) == 0) {
          if (plVar11 == (long *)0x0) goto LAB_08732e3c;
          lVar15 = *plVar11;
          uVar20 = (ulong)*(ushort *)(lVar15 + 0x12e);
          if (uVar20 == 0) goto LAB_08732e14;
          piVar21 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          goto LAB_08732dfc;
        }
        lVar18 = *plVar11;
        lVar15 = *(long *)puVar5;
        uVar20 = (ulong)*(ushort *)(lVar18 + 0x12e);
        if (uVar20 != 0) {
          piVar21 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
          do {
            if (*(long *)(piVar21 + -2) == lVar15) {
              puVar12 = (undefined8 *)(lVar18 + (long)*piVar21 * 0x10 + 0x138);
              goto LAB_08732d38;
            }
            uVar20 = uVar20 - 1;
            piVar21 = piVar21 + 4;
          } while (uVar20 != 0);
        }
        puVar12 = (undefined8 *)FUN_03cf1348(plVar11,lVar15,0);
LAB_08732d38:
        lVar15 = (*(code *)*puVar12)(plVar11,puVar12[1]);
        if (*(long *)(param_5 + 0x420) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03c8fb30();
        }
        if ((bool)(bVar1 & *(int *)(*(long *)(param_5 + 0x420) + 0x2c) == 1)) {
          if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03c8fb30();
          }
          if (*(char *)(lVar15 + 0x60) != '\0') {
            bVar1 = false;
          }
        }
        if (lVar17 == 0) {
          if (*(long *)(param_5 + 0x400) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03c8fb30();
          }
          uVar20 = FUN_06a4feb4(*(long *)(param_5 + 0x400),lVar15,&local_68,*(undefined8 *)puVar4);
          lVar17 = 0;
          if ((uVar20 & 1) != 0) {
            if (local_68 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03c8fb30();
            }
            if (*(long *)(local_68 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03c8fb30();
            }
            fVar23 = (float)FUN_087c3040(*(long *)(local_68 + 0x10),0);
            if (param_6 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03c8fb30();
            }
            fVar25 = *(float *)(param_6 + 0x90);
            fVar24 = *(float *)(param_6 + 0x94);
            param_3 = fVar23 + param_3;
            bVar6 = false;
            if ((param_2 <= fVar24) && (bVar6 = false, !NAN(fVar25) && !NAN(param_3))) {
              bVar6 = fVar25 < param_3;
            }
            bVar7 = true;
            bVar8 = false;
            if (bVar6) {
              bVar7 = false;
              bVar8 = true;
              if (!NAN(fVar25) && !NAN(fVar23)) {
                bVar7 = fVar25 < fVar23;
                bVar8 = false;
              }
            }
            bVar6 = false;
            if ((bVar7 == bVar8) && (bVar6 = false, !NAN(fVar24) && !NAN(param_2 + param_4))) {
              bVar6 = fVar24 < param_2 + param_4;
            }
            lVar17 = lVar15;
            if (!bVar6) {
              lVar17 = 0;
            }
          }
        }
      } while( true );
    }
  }
  goto LAB_087331a0;
  while( true ) {
    uVar20 = uVar20 - 1;
    piVar21 = piVar21 + 4;
    if (uVar20 == 0) break;
LAB_087330f4:
    if (*(long *)(piVar21 + -2) == *(long *)PTR_DAT_08e6a288) {
      puVar12 = (undefined8 *)(lVar15 + (long)*piVar21 * 0x10 + 0x138);
      goto LAB_08733128;
    }
  }
LAB_0873310c:
  puVar12 = (undefined8 *)FUN_03cf1348(plVar11,*(long *)PTR_DAT_08e6a288,0);
LAB_08733128:
  (*(code *)*puVar12)(plVar11,puVar12[1]);
LAB_08733134:
  lVar15 = *(long *)(param_5 + 0x438);
  if (lVar15 != 0) {
    (**(code **)(lVar15 + 0x18))
              (*(undefined8 *)(lVar15 + 0x40),param_6,lVar17,*(undefined8 *)(lVar15 + 0x28));
  }
  return;
  while( true ) {
    uVar20 = uVar20 - 1;
    piVar21 = piVar21 + 4;
    if (uVar20 == 0) break;
LAB_08732dfc:
    if (*(long *)(piVar21 + -2) == *(long *)puVar2) {
      puVar12 = (undefined8 *)(lVar15 + (long)*piVar21 * 0x10 + 0x138);
      goto LAB_08732e30;
    }
  }
LAB_08732e14:
  puVar12 = (undefined8 *)FUN_03cf1348(plVar11,*(long *)puVar2,0);
LAB_08732e30:
  (*(code *)*puVar12)(plVar11,puVar12[1]);
LAB_08732e3c:
  puVar2 = System_Collections_Concurrent_ConcurrentDictionary<string,_VoiceServiceRequest>_TypeInfo;
  if (param_6 != 0) {
    lVar15 = *(long *)(param_6 + 0xb8);
    uVar10 = thunk_FUN_03cf5234(*(undefined8 *)UnityEngine_AI_NavMeshObstacleShape_var);
    System_Array_InternalEnumerator<Dictionary_Entry<object,_OvrGpuMorphTargetsCombiner_BlockData>>___ctor
              (uVar10,param_5,*(undefined8 *)puVar2,0);
    if (lVar15 != 0) {
      uVar16 = 1;
      if (!bVar1) {
        uVar16 = 2;
      }
      FUN_0876f6a0(lVar15,*(undefined8 *)
                           System_Collections_Concurrent_ConcurrentDictionary<Type,_IPropertyBag>_TypeInfo
                   ,uVar10,uVar16,0);
      if (*(long *)(param_6 + 0xb8) != 0) {
        FUN_0876f7d8(*(long *)(param_6 + 0xb8),0,0);
        if (*(long *)(param_5 + 0x420) != 0) {
          plVar11 = (long *)FUN_08744804(*(long *)(param_5 + 0x420),0);
          if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_03c8fb30();
          }
          do {
            lVar18 = *plVar11;
            lVar15 = *(long *)puVar3;
            uVar20 = (ulong)*(ushort *)(lVar18 + 0x12e);
            if (uVar20 != 0) {
              piVar21 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
              do {
                if (*(long *)(piVar21 + -2) == lVar15) {
                  puVar12 = (undefined8 *)(lVar18 + (long)*piVar21 * 0x10 + 0x138);
                  goto LAB_08732f28;
                }
                uVar20 = uVar20 - 1;
                piVar21 = piVar21 + 4;
              } while (uVar20 != 0);
            }
            puVar12 = (undefined8 *)FUN_03cf1348(plVar11,lVar15,0);
LAB_08732f28:
            uVar20 = (*(code *)*puVar12)(plVar11,puVar12[1]);
            if ((uVar20 & 1) == 0) {
              if (plVar11 == (long *)0x0) goto LAB_08733134;
              lVar15 = *plVar11;
              uVar20 = (ulong)*(ushort *)(lVar15 + 0x12e);
              if (uVar20 == 0) goto LAB_0873310c;
              piVar21 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
              goto LAB_087330f4;
            }
            lVar15 = thunk_FUN_03cf5234(*(undefined8 *)
                                         System_Collections_Concurrent_ConcurrentDictionary<string,_TTSDebugger_TTSDebuggerFileStream>_TypeInfo
                                       );
            FUN_07145224(lVar15,0);
            if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03c8fb30();
            }
            *(long *)(lVar15 + 0x18) = param_5;
            thunk_FUN_03d233cc((long *)(lVar15 + 0x18),param_5);
            lVar19 = *plVar11;
            lVar18 = *(long *)puVar5;
            uVar20 = (ulong)*(ushort *)(lVar19 + 0x12e);
            if (uVar20 != 0) {
              piVar21 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
              do {
                if (*(long *)(piVar21 + -2) == lVar18) {
                  puVar12 = (undefined8 *)(lVar19 + (long)*piVar21 * 0x10 + 0x138);
                  goto LAB_08732fb4;
                }
                uVar20 = uVar20 - 1;
                piVar21 = piVar21 + 4;
              } while (uVar20 != 0);
            }
            puVar12 = (undefined8 *)FUN_03cf1348(plVar11,lVar18,0);
LAB_08732fb4:
            lVar18 = (*(code *)*puVar12)(plVar11,puVar12[1]);
            plVar22 = (long *)(lVar15 + 0x10);
            *plVar22 = lVar18;
            thunk_FUN_03d233cc(plVar22);
            if (*plVar22 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03c8fb30();
            }
            uVar10 = *(undefined8 *)(*plVar22 + 0x18);
            uVar20 = FUN_06f74e14(uVar10,0);
            if ((uVar20 & 1) != 0) {
              if (*plVar22 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03c8fb30();
              }
              uVar10 = *(undefined8 *)(*plVar22 + 0x10);
            }
            uVar20 = FUN_06f74e14(uVar10,0);
            if ((uVar20 & 1) != 0) {
              if (*plVar22 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03c8fb30();
              }
              local_6c = FUN_08741830(*plVar22,0);
              uVar10 = FUN_070fde54(&local_6c,0);
              uVar10 = FUN_06f683f8(*(undefined8 *)
                                     System_Collections_Concurrent_ConcurrentDictionary<Type,_Tuple<bool,_bool,_bool,_bool>>_TypeInfo
                                    ,uVar10,0);
            }
            lVar18 = *(long *)(param_6 + 0xb8);
            uVar13 = thunk_FUN_03cf5234(*(undefined8 *)UnityEngine_AI_NavMeshObstacleShape_var);
            System_Array_InternalEnumerator<Dictionary_Entry<object,_OvrGpuMorphTargetsCombiner_BlockData>>___ctor
                      (uVar13,lVar15,
                       *(undefined8 *)
                        System_Collections_Concurrent_ConcurrentDictionary<string,_WitTTSVRequest>_TypeInfo
                       ,0);
            uVar14 = thunk_FUN_03cf5234(*(undefined8 *)UnityEngine_UI_Navigation_var);
            FUN_04d5f81c(uVar14,lVar15,
                         *(undefined8 *)
                          System_Collections_Concurrent_ConcurrentDictionary<string,_WitWebSocketTtsRequest>_TypeInfo
                         ,0);
            if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03c8fb30();
            }
            FUN_0876f59c(lVar18,uVar10,uVar13,uVar14,0,0);
          } while( true );
        }
      }
    }
  }
LAB_087331a0:
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


