/*
FUNCTION_NAME: FUN_033d4b58
ENTRY_POINT: 033d4b58
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 214
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ray_interaction;data_collection;frame_behavior;structure_combo
EVIDENCE: strong_eye_source_hits_9;weak_xr_or_state_hits_9;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_21;ray_or_cast_sink_hits_2;strong_file_logging_hits_2;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_gaze_interaction_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x033d5534) */
/* WARNING: Removing unreachable block (ram,0x033d5670) */

long FUN_033d4b58(undefined8 param_1,long *param_2,long *param_3)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  int *piVar17;
  
  if ((DAT_04832508 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_UnityEngine_Matrix4x4_set_Item__);
    thunk_FUN_01efb3a4(Method_Gameplay_MeleeWeaponModule_<Start>b__21_0__);
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<AchievementDefinitionList>__ctor__);
    thunk_FUN_01efb3a4(
                      Method_Sirenix_Serialization_Utilities_MemberInfoExtensions_IsDefined<FixedBufferAttribute>__
                      );
    thunk_FUN_01efb3a4(Method_UnityEngine_Mesh_SetUvsImpl<Vector3>__);
    thunk_FUN_01efb3a4(Method_UnityEngine_Component_GetComponents<BaseRaycaster>__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    thunk_FUN_01efb3a4(Method_System_Collections_Generic_Queue<fsVersionedType>_Enqueue__);
    thunk_FUN_01efb3a4(Method_System_Runtime_InteropServices_MemoryMarshal_GetReference<byte>__);
    thunk_FUN_01efb3a4(Method_System_IO_MemoryStream__ctor__);
    thunk_FUN_01efb3a4(Method_System_IO_MemoryStream__ctor__);
    thunk_FUN_01efb3a4(Method_System_IO_MemoryStream_EnsureNotClosed__);
    DAT_04832508 = 1;
  }
  puVar2 = 
  Method_Sirenix_Serialization_Utilities_MemberInfoExtensions_IsDefined<FixedBufferAttribute>__;
  puVar4 = Method_UnityEngine_Matrix4x4_set_Item__;
  if (param_2 != (long *)0x0) {
    uVar6 = (**(code **)(*param_2 + 0x1f8))(param_2,*(undefined8 *)(*param_2 + 0x200));
    lVar7 = thunk_FUN_01f117cc(*(undefined8 *)puVar4);
    FUN_035ac8e8(lVar7,0);
    *(undefined1 *)(lVar7 + 0x10) = 4;
    *(undefined8 *)(lVar7 + 0x18) = uVar6;
    thunk_FUN_01f51358((undefined8 *)(lVar7 + 0x18),uVar6);
    lVar8 = thunk_FUN_01f117cc(*(undefined8 *)puVar2);
    FUN_033cfef4();
    if (lVar8 != 0) {
      *(undefined8 *)(lVar8 + 0x10) = *(undefined8 *)Method_System_IO_MemoryStream__ctor__;
      thunk_FUN_01f51358((undefined8 *)(lVar8 + 0x10));
      puVar2 = Method_System_IO_MemoryStream_EnsureNotClosed__;
      if (*(long *)(lVar8 + 0x18) != 0) {
        FUN_033ce1dc(*(long *)(lVar8 + 0x18),lVar7);
        lVar7 = thunk_FUN_01f117cc(*(undefined8 *)puVar4);
        FUN_035ac8e8(lVar7,0);
        *(undefined1 *)(lVar7 + 0x10) = 0xa0;
        *(undefined8 *)(lVar7 + 0x18) = 0;
        thunk_FUN_01f51358((undefined8 *)(lVar7 + 0x18),0);
        uVar6 = FUN_033d01ac(lVar8);
        FUN_033ce1dc(lVar7,uVar6);
        lVar8 = thunk_FUN_01f117cc(*(undefined8 *)puVar4);
        FUN_035ac8e8(lVar8,0);
        *(undefined1 *)(lVar8 + 0x10) = 0x30;
        *(undefined8 *)(lVar8 + 0x18) = 0;
        thunk_FUN_01f51358((undefined8 *)(lVar8 + 0x18),0);
        uVar6 = FUN_033cf0dc(*(undefined8 *)puVar2);
        FUN_033ce1dc(lVar8,uVar6);
        FUN_033ce1dc(lVar8,lVar7);
        puVar2 = Method_UnityEngine_Component_GetComponents<BaseRaycaster>__;
        if (param_3 == (long *)0x0) {
          return lVar8;
        }
        lVar7 = thunk_FUN_01f117cc(*(undefined8 *)puVar4);
        FUN_035ac8e8(lVar7,0);
        *(undefined1 *)(lVar7 + 0x10) = 0x31;
        *(undefined8 *)(lVar7 + 0x18) = 0;
        thunk_FUN_01f51358((undefined8 *)(lVar7 + 0x18),0);
        lVar14 = *param_3;
        uVar16 = (ulong)*(ushort *)(lVar14 + 0x12e);
        if (uVar16 != 0) {
          piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
          do {
            if (*(long *)(piVar17 + -2) == *(long *)puVar2) {
              puVar9 = (undefined8 *)(lVar14 + (long)(*piVar17 + 9) * 0x10 + 0x138);
              goto LAB_033d4de4;
            }
            uVar16 = uVar16 - 1;
            piVar17 = piVar17 + 4;
          } while (uVar16 != 0);
        }
        puVar9 = (undefined8 *)FUN_01ecb238(param_3,*(long *)puVar2,9);
LAB_033d4de4:
        plVar10 = (long *)(*(code *)*puVar9)(param_3,puVar9[1]);
        puVar3 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
        puVar2 = Method_Oculus_Platform_Message<AchievementDefinitionList>__ctor__;
        if (plVar10 != (long *)0x0) {
LAB_033d4e10:
          do {
            lVar14 = *plVar10;
            uVar16 = (ulong)*(ushort *)(lVar14 + 0x12e);
            if (uVar16 != 0) {
              piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
              do {
                if (*(long *)(piVar17 + -2) == *(long *)puVar3) {
                  puVar9 = (undefined8 *)(lVar14 + (long)*piVar17 * 0x10 + 0x138);
                  goto LAB_033d4e5c;
                }
                uVar16 = uVar16 - 1;
                piVar17 = piVar17 + 4;
              } while (uVar16 != 0);
            }
            puVar9 = (undefined8 *)FUN_01ecb238(plVar10,*(long *)puVar3,0);
LAB_033d4e5c:
            uVar16 = (*(code *)*puVar9)(plVar10,puVar9[1]);
            if ((uVar16 & 1) == 0) {
              if (lVar7 != 0) {
                plVar10 = *(long **)(lVar7 + 0x20);
                if (plVar10 == (long *)0x0) {
                  return lVar8;
                }
                iVar5 = (**(code **)(*plVar10 + 0x298))(plVar10,*(undefined8 *)(*plVar10 + 0x2a0));
                if (iVar5 < 1) {
                  return lVar8;
                }
                FUN_033ce1dc(lVar8,lVar7);
                return lVar8;
              }
              break;
            }
            lVar14 = *plVar10;
            uVar16 = (ulong)*(ushort *)(lVar14 + 0x12e);
            if (uVar16 != 0) {
              piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
              do {
                if (*(long *)(piVar17 + -2) ==
                    *(long *)Method_UnityEngine_Mesh_SetUvsImpl<Vector3>__) {
                  puVar9 = (undefined8 *)(lVar14 + (long)*piVar17 * 0x10 + 0x138);
                  goto LAB_033d4ec0;
                }
                uVar16 = uVar16 - 1;
                piVar17 = piVar17 + 4;
              } while (uVar16 != 0);
            }
            puVar9 = (undefined8 *)
                     FUN_01ecb238(plVar10,*(long *)Method_UnityEngine_Mesh_SetUvsImpl<Vector3>__,0);
LAB_033d4ec0:
            plVar11 = (long *)(*(code *)*puVar9)(plVar10,puVar9[1]);
            if ((plVar11 != (long *)0x0) &&
               (*plVar11 !=
                *(long *)Method_System_Collections_Generic_Queue<fsVersionedType>_Enqueue__)) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08cfc(plVar11);
            }
            uVar16 = thunk_FUN_0340e318(plVar11,*(undefined8 *)
                                                 Method_System_Runtime_InteropServices_MemoryMarshal_GetReference<byte>__
                                        ,0);
            if ((uVar16 & 1) != 0) {
              lVar14 = *plVar10;
              uVar16 = (ulong)*(ushort *)(lVar14 + 0x12e);
              if (uVar16 != 0) {
                piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar17 + -2) ==
                      *(long *)Method_UnityEngine_Mesh_SetUvsImpl<Vector3>__) {
                    puVar9 = (undefined8 *)(lVar14 + (long)(*piVar17 + 1) * 0x10 + 0x138);
                    goto LAB_033d4fc4;
                  }
                  uVar16 = uVar16 - 1;
                  piVar17 = piVar17 + 4;
                } while (uVar16 != 0);
              }
              puVar9 = (undefined8 *)
                       FUN_01ecb238(plVar10,*(long *)Method_UnityEngine_Mesh_SetUvsImpl<Vector3>__,1
                                   );
LAB_033d4fc4:
              plVar11 = (long *)(*(code *)*puVar9)(plVar10,puVar9[1]);
              if (plVar11 == (long *)0x0) break;
              bVar1 = *(byte *)(*(long *)Method_Gameplay_MeleeWeaponModule_<Start>b__21_0__ + 0x130)
              ;
              if ((*(byte *)(*plVar11 + 0x130) < bVar1) ||
                 (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar1 * 8 + -8) !=
                  *(long *)Method_Gameplay_MeleeWeaponModule_<Start>b__21_0__)) {
LAB_033d565c:
                    /* WARNING: Subroutine does not return */
                FUN_01f08cfc(plVar11);
              }
              iVar5 = (**(code **)(*plVar11 + 0x298))(plVar11,*(undefined8 *)(*plVar11 + 0x2a0));
              if (0 < iVar5) {
                lVar14 = thunk_FUN_01f117cc(*(undefined8 *)puVar4);
                FUN_035ac8e8(lVar14,0);
                *(undefined1 *)(lVar14 + 0x10) = 0x30;
                *(undefined8 *)(lVar14 + 0x18) = 0;
                thunk_FUN_01f51358((undefined8 *)(lVar14 + 0x18),0);
                uVar6 = FUN_033cf0dc(*(undefined8 *)
                                      Method_System_Runtime_InteropServices_MemoryMarshal_GetReference<byte>__
                                    );
                FUN_033ce1dc(lVar14,uVar6);
                lVar12 = thunk_FUN_01f117cc(*(undefined8 *)puVar4);
                FUN_035ac8e8(lVar12,0);
                *(undefined1 *)(lVar12 + 0x10) = 0x31;
                *(undefined8 *)(lVar12 + 0x18) = 0;
                thunk_FUN_01f51358((undefined8 *)(lVar12 + 0x18),0);
                plVar11 = (long *)(**(code **)(*plVar11 + 0x388))
                                            (plVar11,*(undefined8 *)(*plVar11 + 0x390));
                if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01f08a3c();
                }
                do {
                  lVar15 = *plVar11;
                  uVar16 = (ulong)*(ushort *)(lVar15 + 0x12e);
                  if (uVar16 != 0) {
                    piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar17 + -2) == *(long *)puVar3) {
                        puVar9 = (undefined8 *)(lVar15 + (long)*piVar17 * 0x10 + 0x138);
                        goto LAB_033d5104;
                      }
                      uVar16 = uVar16 - 1;
                      piVar17 = piVar17 + 4;
                    } while (uVar16 != 0);
                  }
                  puVar9 = (undefined8 *)FUN_01ecb238(plVar11,*(long *)puVar3,0);
LAB_033d5104:
                  uVar16 = (*(code *)*puVar9)(plVar11,puVar9[1]);
                  if ((uVar16 & 1) == 0) goto LAB_033d51e0;
                  lVar15 = *plVar11;
                  uVar16 = (ulong)*(ushort *)(lVar15 + 0x12e);
                  if (uVar16 != 0) {
                    piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar17 + -2) == *(long *)puVar3) {
                        puVar9 = (undefined8 *)(lVar15 + (long)(*piVar17 + 1) * 0x10 + 0x138);
                        goto LAB_033d5164;
                      }
                      uVar16 = uVar16 - 1;
                      piVar17 = piVar17 + 4;
                    } while (uVar16 != 0);
                  }
                  puVar9 = (undefined8 *)FUN_01ecb238(plVar11,*(long *)puVar3,1);
LAB_033d5164:
                  lVar15 = (*(code *)*puVar9)(plVar11,puVar9[1]);
                  if (lVar15 == 0) {
                    lVar13 = 0;
                  }
                  else {
                    uVar6 = *(undefined8 *)puVar2;
                    lVar13 = thunk_FUN_01f116d0(lVar15,uVar6);
                    if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_01f08cfc(lVar15,uVar6);
                    }
                  }
                  lVar15 = thunk_FUN_01f117cc(*(undefined8 *)puVar4);
                  FUN_035ac8e8(lVar15,0);
                  *(undefined8 *)(lVar15 + 0x18) = 0;
                  *(undefined1 *)(lVar15 + 0x10) = 0x1e;
                  thunk_FUN_01f51358((undefined8 *)(lVar15 + 0x18),0);
                  FUN_033ce088(lVar15,lVar13);
                  if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_01f08a3c();
                  }
                  FUN_033ce1dc(lVar12,lVar15);
                } while( true );
              }
              goto LAB_033d4e10;
            }
            uVar16 = thunk_FUN_0340e318(plVar11,*(undefined8 *)Method_System_IO_MemoryStream__ctor__
                                        ,0);
            if ((uVar16 & 1) != 0) {
              lVar14 = *plVar10;
              uVar16 = (ulong)*(ushort *)(lVar14 + 0x12e);
              if (uVar16 != 0) {
                piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar17 + -2) ==
                      *(long *)Method_UnityEngine_Mesh_SetUvsImpl<Vector3>__) {
                    puVar9 = (undefined8 *)(lVar14 + (long)(*piVar17 + 1) * 0x10 + 0x138);
                    goto LAB_033d525c;
                  }
                  uVar16 = uVar16 - 1;
                  piVar17 = piVar17 + 4;
                } while (uVar16 != 0);
              }
              puVar9 = (undefined8 *)
                       FUN_01ecb238(plVar10,*(long *)Method_UnityEngine_Mesh_SetUvsImpl<Vector3>__,1
                                   );
LAB_033d525c:
              plVar11 = (long *)(*(code *)*puVar9)(plVar10,puVar9[1]);
              if (plVar11 == (long *)0x0) break;
              bVar1 = *(byte *)(*(long *)Method_Gameplay_MeleeWeaponModule_<Start>b__21_0__ + 0x130)
              ;
              if ((*(byte *)(*plVar11 + 0x130) < bVar1) ||
                 (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar1 * 8 + -8) !=
                  *(long *)Method_Gameplay_MeleeWeaponModule_<Start>b__21_0__)) goto LAB_033d565c;
              iVar5 = (**(code **)(*plVar11 + 0x298))(plVar11,*(undefined8 *)(*plVar11 + 0x2a0));
              if (0 < iVar5) {
                lVar14 = thunk_FUN_01f117cc(*(undefined8 *)puVar4);
                FUN_035ac8e8(lVar14,0);
                *(undefined1 *)(lVar14 + 0x10) = 0x30;
                *(undefined8 *)(lVar14 + 0x18) = 0;
                thunk_FUN_01f51358((undefined8 *)(lVar14 + 0x18),0);
                uVar6 = FUN_033cf0dc(*(undefined8 *)Method_System_IO_MemoryStream__ctor__);
                FUN_033ce1dc(lVar14,uVar6);
                lVar12 = thunk_FUN_01f117cc(*(undefined8 *)puVar4);
                FUN_035ac8e8(lVar12,0);
                *(undefined1 *)(lVar12 + 0x10) = 0x31;
                *(undefined8 *)(lVar12 + 0x18) = 0;
                thunk_FUN_01f51358((undefined8 *)(lVar12 + 0x18),0);
                plVar11 = (long *)(**(code **)(*plVar11 + 0x388))
                                            (plVar11,*(undefined8 *)(*plVar11 + 0x390));
                if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01f08a3c();
                }
                do {
                  lVar15 = *plVar11;
                  uVar16 = (ulong)*(ushort *)(lVar15 + 0x12e);
                  if (uVar16 != 0) {
                    piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar17 + -2) == *(long *)puVar3) {
                        puVar9 = (undefined8 *)(lVar15 + (long)*piVar17 * 0x10 + 0x138);
                        goto LAB_033d539c;
                      }
                      uVar16 = uVar16 - 1;
                      piVar17 = piVar17 + 4;
                    } while (uVar16 != 0);
                  }
                  puVar9 = (undefined8 *)FUN_01ecb238(plVar11,*(long *)puVar3,0);
LAB_033d539c:
                  uVar16 = (*(code *)*puVar9)(plVar11,puVar9[1]);
                  if ((uVar16 & 1) == 0) goto LAB_033d547c;
                  lVar15 = *plVar11;
                  uVar16 = (ulong)*(ushort *)(lVar15 + 0x12e);
                  if (uVar16 != 0) {
                    piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar17 + -2) == *(long *)puVar3) {
                        puVar9 = (undefined8 *)(lVar15 + (long)(*piVar17 + 1) * 0x10 + 0x138);
                        goto LAB_033d53fc;
                      }
                      uVar16 = uVar16 - 1;
                      piVar17 = piVar17 + 4;
                    } while (uVar16 != 0);
                  }
                  puVar9 = (undefined8 *)FUN_01ecb238(plVar11,*(long *)puVar3,1);
LAB_033d53fc:
                  lVar15 = (*(code *)*puVar9)(plVar11,puVar9[1]);
                  if (lVar15 == 0) {
                    lVar13 = 0;
                  }
                  else {
                    uVar6 = *(undefined8 *)puVar2;
                    lVar13 = thunk_FUN_01f116d0(lVar15,uVar6);
                    if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_01f08cfc(lVar15,uVar6);
                    }
                  }
                  lVar15 = thunk_FUN_01f117cc(*(undefined8 *)puVar4);
                  FUN_035ac8e8(lVar15,0);
                  *(undefined8 *)(lVar15 + 0x18) = 0;
                  *(undefined1 *)(lVar15 + 0x10) = 4;
                  thunk_FUN_01f51358((undefined8 *)(lVar15 + 0x18),0);
                  FUN_033ce088(lVar15,lVar13);
                  if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_01f08a3c();
                  }
                  FUN_033ce1dc(lVar12,lVar15);
                } while( true );
              }
            }
          } while( true );
        }
      }
    }
  }
LAB_033d5664:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
LAB_033d547c:
  plVar11 = (long *)thunk_FUN_01f116d0(plVar11,*(undefined8 *)
                                                Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                                      );
  if (plVar11 != (long *)0x0) {
    lVar15 = *plVar11;
    uVar16 = (ulong)*(ushort *)(lVar15 + 0x12e);
    if (uVar16 != 0) {
      piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar9 = (undefined8 *)(lVar15 + (long)*piVar17 * 0x10 + 0x138);
          goto LAB_033d551c;
        }
        uVar16 = uVar16 - 1;
        piVar17 = piVar17 + 4;
      } while (uVar16 != 0);
    }
    puVar9 = (undefined8 *)
             FUN_01ecb238(plVar11,*(long *)
                                   Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                          ,0);
LAB_033d551c:
    (*(code *)*puVar9)(plVar11,puVar9[1]);
  }
  goto LAB_033d5538;
LAB_033d51e0:
  plVar11 = (long *)thunk_FUN_01f116d0(plVar11,*(undefined8 *)
                                                Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                                      );
  if (plVar11 != (long *)0x0) {
    lVar15 = *plVar11;
    uVar16 = (ulong)*(ushort *)(lVar15 + 0x12e);
    if (uVar16 != 0) {
      piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar9 = (undefined8 *)(lVar15 + (long)*piVar17 * 0x10 + 0x138);
          goto LAB_033d54f4;
        }
        uVar16 = uVar16 - 1;
        piVar17 = piVar17 + 4;
      } while (uVar16 != 0);
    }
    puVar9 = (undefined8 *)
             FUN_01ecb238(plVar11,*(long *)
                                   Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                          ,0);
LAB_033d54f4:
    (*(code *)*puVar9)(plVar11,puVar9[1]);
  }
LAB_033d5538:
  FUN_033ce1dc(lVar14,lVar12);
  if (lVar7 == 0) goto LAB_033d5664;
  FUN_033ce1dc(lVar7,lVar14);
  goto LAB_033d4e10;
}


