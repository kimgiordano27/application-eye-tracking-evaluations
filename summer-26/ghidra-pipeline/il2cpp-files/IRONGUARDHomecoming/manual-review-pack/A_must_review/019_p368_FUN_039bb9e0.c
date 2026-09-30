/*
FUNCTION_NAME: FUN_039bb9e0
ENTRY_POINT: 039bb9e0
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 235
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ui_interaction;data_collection;structure_combo;ordered_structure
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_20;strong_pose_or_ray_construction_hits_14;ui_or_gameplay_sink_hits_4;strong_file_logging_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;ordered_eye_source_validity_pose_interaction_sink;functionality_gaze_interaction_hits_4;functionality_data_collection_or_telemetry_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x039bbfcc) */

void FUN_039bb9e0(long param_1,long *param_2)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  undefined8 *puVar14;
  long *plVar15;
  long lVar16;
  ulong uVar17;
  int *piVar18;
  undefined8 *puVar19;
  undefined8 uVar20;
  int iVar21;
  long lVar22;
  
  if ((DAT_04838830 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_UnityEngine_Component_GetComponent<OVRSkeleton>__);
    thunk_FUN_01efb3a4(StringLiteral_5377);
    thunk_FUN_01efb3a4(Method_System_IO_StreamReader_get_EndOfStream__);
    thunk_FUN_01efb3a4(Method_System_IO_StreamWriter__ctor__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(Method_UnityEngine_Component_GetComponent<OVRSkeletonRenderer>__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    thunk_FUN_01efb3a4(Method_UnityEngine_Component_GetComponent<OVRSpatialAnchor>__);
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_Component_GetComponent<OVRVirtualKeyboardSampleInputHandler>__
                      );
    thunk_FUN_01efb3a4(Method_UnityEngine_Component_GetComponent<ParticleSystemRenderer>__);
    thunk_FUN_01efb3a4(Method_System_Collections_Generic_Queue<fsVersionedType>_Enqueue__);
    thunk_FUN_01efb3a4(StringLiteral_5378);
    thunk_FUN_01efb3a4(StringLiteral_5379);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__);
    thunk_FUN_01efb3a4(Method_UnityEngine_Component_GetComponent<Point>__);
    DAT_04838830 = 1;
  }
  lVar9 = FUN_039baefc(param_1,0);
  puVar5 = Method_System_IO_StreamWriter__ctor__;
  puVar4 = Method_System_IO_StreamReader_get_EndOfStream__;
  puVar3 = Method_UnityEngine_Component_GetComponent<Point>__;
  puVar2 = Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__;
  if (param_2 != (long *)0x0) {
    uVar10 = (**(code **)(*param_2 + 0x188))(param_2,*(undefined8 *)(*param_2 + 400));
    uVar20 = *(undefined8 *)puVar3;
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c(*(long *)puVar2);
    }
    uVar20 = FUN_03579868(uVar20,0);
    uVar6 = FUN_03583338(uVar10,uVar20,0);
    FUN_039b554c(param_1,param_2[2]);
    lVar11 = thunk_FUN_01f117cc(*(undefined8 *)puVar5);
    FUN_02b61d14(lVar11,*(undefined8 *)puVar4);
    puVar3 = StringLiteral_5379;
    puVar2 = StringLiteral_5378;
    if (*(long *)(param_1 + 0x10) != 0) {
      iVar7 = System_ComponentModel_ArrayConverter___ctor();
      lVar12 = thunk_FUN_01f117cc(*(undefined8 *)puVar3);
      FUN_027641ec(lVar12,1,*(undefined8 *)puVar2);
      if (*(long *)(param_1 + 0x10) != 0) {
        FUN_039b040c(*(long *)(param_1 + 0x10),lVar11,lVar12);
        if (param_2[4] != 0) {
          if ((uVar6 & 1) == 0) {
            FUN_039b65ec(param_1);
          }
          else {
            FUN_039b554c(param_1);
          }
        }
        if (lVar9 != 0) {
          lVar22 = *(long *)(param_1 + 0x10);
          FUN_039b1978(lVar9,param_1);
          if (lVar22 != 0) {
            FUN_039afc24(lVar22,*(undefined8 *)(lVar9 + 0x18),0,uVar6 & 1);
            puVar5 = Method_UnityEngine_Component_GetComponent<OVRSkeletonRenderer>__;
            puVar4 = Method_UnityEngine_Component_GetComponent<OVRSkeleton>__;
            puVar3 = Method_System_Collections_Generic_Queue<fsVersionedType>_Enqueue__;
            puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
            lVar22 = param_2[3];
            if (lVar22 != 0) {
              iVar21 = 0;
              puVar19 = (undefined8 *)StringLiteral_5377;
              while (iVar8 = FUN_0265d6c4(lVar22,*(undefined8 *)
                                                  Method_UnityEngine_Component_GetComponent<OVRVirtualKeyboardSampleInputHandler>__
                                         ), iVar21 < iVar8) {
                if (param_2[3] == 0) goto LAB_039bbfc8;
                lVar22 = FUN_0265d74c(param_2[3],iVar21,
                                      *(undefined8 *)
                                       Method_UnityEngine_Component_GetComponent<ParticleSystemRenderer>__
                                     );
                if (((*(long *)(param_1 + 0x10) == 0) ||
                    (iVar8 = System_ComponentModel_ArrayConverter___ctor(*(long *)(param_1 + 0x10)),
                    lVar22 == 0)) || (*(long *)(lVar22 + 0x10) == 0)) goto LAB_039bbfc8;
                plVar13 = (long *)FUN_0265d924(*(long *)(lVar22 + 0x10),
                                               *(undefined8 *)
                                                Method_UnityEngine_Component_GetComponent<OVRSpatialAnchor>__
                                              );
                if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01f08a3c();
                }
LAB_039bbcc4:
                lVar16 = *plVar13;
                uVar17 = (ulong)*(ushort *)(lVar16 + 0x12e);
                if (uVar17 != 0) {
                  piVar18 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar18 + -2) == *(long *)puVar2) {
                      puVar14 = (undefined8 *)(lVar16 + (long)*piVar18 * 0x10 + 0x138);
                      goto LAB_039bbd10;
                    }
                    uVar17 = uVar17 - 1;
                    piVar18 = piVar18 + 4;
                  } while (uVar17 != 0);
                }
                puVar14 = (undefined8 *)FUN_01ecb238(plVar13,*(long *)puVar2,0);
LAB_039bbd10:
                uVar17 = (*(code *)*puVar14)(plVar13,puVar14[1]);
                if ((uVar17 & 1) != 0) {
                  lVar16 = *plVar13;
                  uVar17 = (ulong)*(ushort *)(lVar16 + 0x12e);
                  if (uVar17 != 0) {
                    piVar18 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar18 + -2) == *(long *)puVar5) {
                        puVar14 = (undefined8 *)(lVar16 + (long)*piVar18 * 0x10 + 0x138);
                        goto LAB_039bbd6c;
                      }
                      uVar17 = uVar17 - 1;
                      piVar18 = piVar18 + 4;
                    } while (uVar17 != 0);
                  }
                  puVar14 = (undefined8 *)FUN_01ecb238(plVar13,*(long *)puVar5,0);
LAB_039bbd6c:
                  plVar15 = (long *)(*(code *)*puVar14)(plVar13,puVar14[1]);
                  if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_01f08a3c();
                  }
                  bVar1 = *(byte *)(*(long *)puVar4 + 0x130);
                  if ((*(byte *)(*plVar15 + 0x130) < bVar1) ||
                     (*(long *)(*(long *)(*plVar15 + 200) + (ulong)bVar1 * 8 + -8) !=
                      *(long *)puVar4)) {
                    /* WARNING: Subroutine does not return */
                    FUN_01f08cfc();
                  }
                  plVar15 = (long *)plVar15[2];
                  if (plVar15 == (long *)0x0) {
                    if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_01f08a3c();
                    }
                    if (*(int *)(lVar12 + 0x10) == 1) {
                      *(int *)(lVar12 + 0x10) = iVar8 - iVar7;
                    }
                  }
                  else {
                    if (*plVar15 != *(long *)puVar3) {
                    /* WARNING: Subroutine does not return */
                      FUN_01f08cfc(plVar15,*(long *)puVar3);
                    }
                    if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_01f08a3c();
                    }
                    System_Linq_EnumerableSorter<MarkToBaseAdjustmentRecord>__Sort
                              (lVar11,plVar15,iVar8 - iVar7,*puVar19);
                  }
                  goto LAB_039bbcc4;
                }
                if (plVar13 != (long *)0x0) {
                  lVar16 = *plVar13;
                  uVar17 = (ulong)*(ushort *)(lVar16 + 0x12e);
                  if (uVar17 != 0) {
                    piVar18 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar18 + -2) ==
                          *(long *)
                           Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__)
                      {
                        puVar14 = (undefined8 *)(lVar16 + (long)*piVar18 * 0x10 + 0x138);
                        goto LAB_039bbe4c;
                      }
                      uVar17 = uVar17 - 1;
                      piVar18 = piVar18 + 4;
                    } while (uVar17 != 0);
                  }
                  puVar14 = (undefined8 *)
                            FUN_01ecb238(plVar13,*(long *)
                                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                                         ,0);
LAB_039bbe4c:
                  (*(code *)*puVar14)(plVar13,puVar14[1]);
                }
                if ((uVar6 & 1) == 0) {
                  FUN_039b65ec(param_1,*(undefined8 *)(lVar22 + 0x18));
                }
                else {
                  FUN_039b554c(param_1);
                }
                if (param_2[3] == 0) goto LAB_039bbfc8;
                iVar8 = FUN_0265d6c4(param_2[3],
                                     *(undefined8 *)
                                      Method_UnityEngine_Component_GetComponent<OVRVirtualKeyboardSampleInputHandler>__
                                    );
                if (iVar21 < iVar8 + -1) {
                  lVar22 = *(long *)(param_1 + 0x10);
                  FUN_039b1978(lVar9,param_1);
                  if (lVar22 == 0) goto LAB_039bbfc8;
                  FUN_039afc24(lVar22,*(undefined8 *)(lVar9 + 0x18),0,uVar6 & 1);
                  puVar19 = (undefined8 *)StringLiteral_5377;
                }
                lVar22 = param_2[3];
                iVar21 = iVar21 + 1;
                if (lVar22 == 0) goto LAB_039bbfc8;
              }
              lVar11 = *(long *)(param_1 + 0x10);
              FUN_039b1978(lVar9,param_1);
              if ((lVar11 != 0) && (*(long *)(lVar9 + 0x18) != 0)) {
                FUN_0399e034(*(long *)(lVar9 + 0x18),lVar11,0);
                return;
              }
            }
          }
        }
      }
    }
  }
LAB_039bbfc8:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


