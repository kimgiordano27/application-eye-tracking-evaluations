/*
FUNCTION_NAME: System.IO.File$$Move
ENTRY_POINT: 033d4d60
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 102
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ray_interaction;frame_behavior;structure_combo
EVIDENCE: strong_eye_source_hits_7;weak_xr_or_state_hits_7;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_20;ray_or_cast_sink_hits_1;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;negative_system_io_serialization_or_json_helper_without_gaze_flow;functionality_gaze_interaction_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x033d5534) */
/* WARNING: Removing unreachable block (ram,0x033d5670) */

undefined8 System_IO_File__Move(void)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  undefined8 *puVar6;
  long *plVar7;
  long *plVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  int *piVar15;
  long *unaff_x21;
  undefined8 *unaff_x28;
  undefined8 in_stack_00000000;
  
  puVar2 = Method_UnityEngine_Component_GetComponents<BaseRaycaster>__;
  lVar5 = thunk_FUN_01f117cc(*unaff_x28);
  FUN_035ac8e8(lVar5,0);
  *(undefined1 *)(lVar5 + 0x10) = 0x31;
  *(undefined8 *)(lVar5 + 0x18) = 0;
  thunk_FUN_01f51358((undefined8 *)(lVar5 + 0x18),0);
  lVar12 = *unaff_x21;
  uVar14 = (ulong)*(ushort *)(lVar12 + 0x12e);
  if (uVar14 != 0) {
    piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
    do {
      if (*(long *)(piVar15 + -2) == *(long *)puVar2) {
        puVar6 = (undefined8 *)(lVar12 + (long)(*piVar15 + 9) * 0x10 + 0x138);
        goto LAB_033d4de4;
      }
      uVar14 = uVar14 - 1;
      piVar15 = piVar15 + 4;
    } while (uVar14 != 0);
  }
  puVar6 = (undefined8 *)FUN_01ecb238();
LAB_033d4de4:
  plVar7 = (long *)(*(code *)*puVar6)();
  puVar3 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  puVar2 = Method_Oculus_Platform_Message<AchievementDefinitionList>__ctor__;
  if (plVar7 == (long *)0x0) {
LAB_033d5664:
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
LAB_033d4e10:
  do {
    lVar12 = *plVar7;
    uVar14 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar14 != 0) {
      piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == *(long *)puVar3) {
          puVar6 = (undefined8 *)(lVar12 + (long)*piVar15 * 0x10 + 0x138);
          goto LAB_033d4e5c;
        }
        uVar14 = uVar14 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar14 != 0);
    }
    puVar6 = (undefined8 *)FUN_01ecb238(plVar7,*(long *)puVar3,0);
LAB_033d4e5c:
    uVar14 = (*(code *)*puVar6)(plVar7,puVar6[1]);
    if ((uVar14 & 1) == 0) {
      if (lVar5 != 0) {
        plVar7 = *(long **)(lVar5 + 0x20);
        if ((plVar7 != (long *)0x0) &&
           (iVar4 = (**(code **)(*plVar7 + 0x298))(plVar7,*(undefined8 *)(*plVar7 + 0x2a0)),
           0 < iVar4)) {
          FUN_033ce1dc(in_stack_00000000,lVar5);
        }
        return in_stack_00000000;
      }
      goto LAB_033d5664;
    }
    lVar12 = *plVar7;
    uVar14 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar14 != 0) {
      piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == *(long *)Method_UnityEngine_Mesh_SetUvsImpl<Vector3>__) {
          puVar6 = (undefined8 *)(lVar12 + (long)*piVar15 * 0x10 + 0x138);
          goto LAB_033d4ec0;
        }
        uVar14 = uVar14 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar14 != 0);
    }
    puVar6 = (undefined8 *)
             FUN_01ecb238(plVar7,*(long *)Method_UnityEngine_Mesh_SetUvsImpl<Vector3>__,0);
LAB_033d4ec0:
    plVar8 = (long *)(*(code *)*puVar6)(plVar7,puVar6[1]);
    if ((plVar8 != (long *)0x0) &&
       (*plVar8 != *(long *)Method_System_Collections_Generic_Queue<fsVersionedType>_Enqueue__)) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08cfc(plVar8);
    }
    uVar14 = thunk_FUN_0340e318(plVar8,*(undefined8 *)
                                        Method_System_Runtime_InteropServices_MemoryMarshal_GetReference<byte>__
                                ,0);
    if ((uVar14 & 1) == 0) {
      uVar14 = thunk_FUN_0340e318(plVar8,*(undefined8 *)Method_System_IO_MemoryStream__ctor__,0);
      if ((uVar14 & 1) != 0) {
        lVar12 = *plVar7;
        uVar14 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar14 != 0) {
          piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar15 + -2) == *(long *)Method_UnityEngine_Mesh_SetUvsImpl<Vector3>__) {
              puVar6 = (undefined8 *)(lVar12 + (long)(*piVar15 + 1) * 0x10 + 0x138);
              goto LAB_033d525c;
            }
            uVar14 = uVar14 - 1;
            piVar15 = piVar15 + 4;
          } while (uVar14 != 0);
        }
        puVar6 = (undefined8 *)
                 FUN_01ecb238(plVar7,*(long *)Method_UnityEngine_Mesh_SetUvsImpl<Vector3>__,1);
LAB_033d525c:
        plVar8 = (long *)(*(code *)*puVar6)(plVar7,puVar6[1]);
        if (plVar8 == (long *)0x0) goto LAB_033d5664;
        bVar1 = *(byte *)(*(long *)Method_Gameplay_MeleeWeaponModule_<Start>b__21_0__ + 0x130);
        if ((*(byte *)(*plVar8 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*plVar8 + 200) + (ulong)bVar1 * 8 + -8) !=
            *(long *)Method_Gameplay_MeleeWeaponModule_<Start>b__21_0__)) {
LAB_033d565c:
                    /* WARNING: Subroutine does not return */
          FUN_01f08cfc(plVar8);
        }
        iVar4 = (**(code **)(*plVar8 + 0x298))(plVar8,*(undefined8 *)(*plVar8 + 0x2a0));
        if (0 < iVar4) {
          lVar12 = thunk_FUN_01f117cc(*unaff_x28);
          FUN_035ac8e8(lVar12,0);
          *(undefined1 *)(lVar12 + 0x10) = 0x30;
          *(undefined8 *)(lVar12 + 0x18) = 0;
          thunk_FUN_01f51358((undefined8 *)(lVar12 + 0x18),0);
          uVar9 = FUN_033cf0dc(*(undefined8 *)Method_System_IO_MemoryStream__ctor__);
          FUN_033ce1dc(lVar12,uVar9);
          lVar10 = thunk_FUN_01f117cc(*unaff_x28);
          FUN_035ac8e8(lVar10,0);
          *(undefined1 *)(lVar10 + 0x10) = 0x31;
          *(undefined8 *)(lVar10 + 0x18) = 0;
          thunk_FUN_01f51358((undefined8 *)(lVar10 + 0x18),0);
          plVar8 = (long *)(**(code **)(*plVar8 + 0x388))(plVar8,*(undefined8 *)(*plVar8 + 0x390));
          if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          do {
            lVar13 = *plVar8;
            uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
            if (uVar14 != 0) {
              piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
              do {
                if (*(long *)(piVar15 + -2) == *(long *)puVar3) {
                  puVar6 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
                  goto LAB_033d539c;
                }
                uVar14 = uVar14 - 1;
                piVar15 = piVar15 + 4;
              } while (uVar14 != 0);
            }
            puVar6 = (undefined8 *)FUN_01ecb238(plVar8,*(long *)puVar3,0);
LAB_033d539c:
            uVar14 = (*(code *)*puVar6)(plVar8,puVar6[1]);
            if ((uVar14 & 1) == 0) goto LAB_033d547c;
            lVar13 = *plVar8;
            uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
            if (uVar14 != 0) {
              piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
              do {
                if (*(long *)(piVar15 + -2) == *(long *)puVar3) {
                  puVar6 = (undefined8 *)(lVar13 + (long)(*piVar15 + 1) * 0x10 + 0x138);
                  goto LAB_033d53fc;
                }
                uVar14 = uVar14 - 1;
                piVar15 = piVar15 + 4;
              } while (uVar14 != 0);
            }
            puVar6 = (undefined8 *)FUN_01ecb238(plVar8,*(long *)puVar3,1);
LAB_033d53fc:
            lVar13 = (*(code *)*puVar6)(plVar8,puVar6[1]);
            if (lVar13 == 0) {
              lVar11 = 0;
            }
            else {
              uVar9 = *(undefined8 *)puVar2;
              lVar11 = thunk_FUN_01f116d0(lVar13,uVar9);
              if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_01f08cfc(lVar13,uVar9);
              }
            }
            lVar13 = thunk_FUN_01f117cc(*unaff_x28);
            FUN_035ac8e8(lVar13,0);
            *(undefined8 *)(lVar13 + 0x18) = 0;
            *(undefined1 *)(lVar13 + 0x10) = 4;
            thunk_FUN_01f51358((undefined8 *)(lVar13 + 0x18),0);
            FUN_033ce088(lVar13,lVar11);
            if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a3c();
            }
            FUN_033ce1dc(lVar10,lVar13);
          } while( true );
        }
      }
      goto LAB_033d4e10;
    }
    lVar12 = *plVar7;
    uVar14 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar14 != 0) {
      piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == *(long *)Method_UnityEngine_Mesh_SetUvsImpl<Vector3>__) {
          puVar6 = (undefined8 *)(lVar12 + (long)(*piVar15 + 1) * 0x10 + 0x138);
          goto LAB_033d4fc4;
        }
        uVar14 = uVar14 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar14 != 0);
    }
    puVar6 = (undefined8 *)
             FUN_01ecb238(plVar7,*(long *)Method_UnityEngine_Mesh_SetUvsImpl<Vector3>__,1);
LAB_033d4fc4:
    plVar8 = (long *)(*(code *)*puVar6)(plVar7,puVar6[1]);
    if (plVar8 == (long *)0x0) goto LAB_033d5664;
    bVar1 = *(byte *)(*(long *)Method_Gameplay_MeleeWeaponModule_<Start>b__21_0__ + 0x130);
    if ((*(byte *)(*plVar8 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*plVar8 + 200) + (ulong)bVar1 * 8 + -8) !=
        *(long *)Method_Gameplay_MeleeWeaponModule_<Start>b__21_0__)) goto LAB_033d565c;
    iVar4 = (**(code **)(*plVar8 + 0x298))(plVar8,*(undefined8 *)(*plVar8 + 0x2a0));
    if (0 < iVar4) {
      lVar12 = thunk_FUN_01f117cc(*unaff_x28);
      FUN_035ac8e8(lVar12,0);
      *(undefined1 *)(lVar12 + 0x10) = 0x30;
      *(undefined8 *)(lVar12 + 0x18) = 0;
      thunk_FUN_01f51358((undefined8 *)(lVar12 + 0x18),0);
      uVar9 = FUN_033cf0dc(*(undefined8 *)
                            Method_System_Runtime_InteropServices_MemoryMarshal_GetReference<byte>__
                          );
      FUN_033ce1dc(lVar12,uVar9);
      lVar10 = thunk_FUN_01f117cc(*unaff_x28);
      FUN_035ac8e8(lVar10,0);
      *(undefined1 *)(lVar10 + 0x10) = 0x31;
      *(undefined8 *)(lVar10 + 0x18) = 0;
      thunk_FUN_01f51358((undefined8 *)(lVar10 + 0x18),0);
      plVar8 = (long *)(**(code **)(*plVar8 + 0x388))(plVar8,*(undefined8 *)(*plVar8 + 0x390));
      if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      do {
        lVar13 = *plVar8;
        uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
        if (uVar14 != 0) {
          piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
          do {
            if (*(long *)(piVar15 + -2) == *(long *)puVar3) {
              puVar6 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
              goto LAB_033d5104;
            }
            uVar14 = uVar14 - 1;
            piVar15 = piVar15 + 4;
          } while (uVar14 != 0);
        }
        puVar6 = (undefined8 *)FUN_01ecb238(plVar8,*(long *)puVar3,0);
LAB_033d5104:
        uVar14 = (*(code *)*puVar6)(plVar8,puVar6[1]);
        if ((uVar14 & 1) == 0) goto LAB_033d51e0;
        lVar13 = *plVar8;
        uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
        if (uVar14 != 0) {
          piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
          do {
            if (*(long *)(piVar15 + -2) == *(long *)puVar3) {
              puVar6 = (undefined8 *)(lVar13 + (long)(*piVar15 + 1) * 0x10 + 0x138);
              goto LAB_033d5164;
            }
            uVar14 = uVar14 - 1;
            piVar15 = piVar15 + 4;
          } while (uVar14 != 0);
        }
        puVar6 = (undefined8 *)FUN_01ecb238(plVar8,*(long *)puVar3,1);
LAB_033d5164:
        lVar13 = (*(code *)*puVar6)(plVar8,puVar6[1]);
        if (lVar13 == 0) {
          lVar11 = 0;
        }
        else {
          uVar9 = *(undefined8 *)puVar2;
          lVar11 = thunk_FUN_01f116d0(lVar13,uVar9);
          if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08cfc(lVar13,uVar9);
          }
        }
        lVar13 = thunk_FUN_01f117cc(*unaff_x28);
        FUN_035ac8e8(lVar13,0);
        *(undefined8 *)(lVar13 + 0x18) = 0;
        *(undefined1 *)(lVar13 + 0x10) = 0x1e;
        thunk_FUN_01f51358((undefined8 *)(lVar13 + 0x18),0);
        FUN_033ce088(lVar13,lVar11);
        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        FUN_033ce1dc(lVar10,lVar13);
      } while( true );
    }
  } while( true );
LAB_033d51e0:
  plVar8 = (long *)thunk_FUN_01f116d0(plVar8,*(undefined8 *)
                                              Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                                     );
  if (plVar8 != (long *)0x0) {
    lVar13 = *plVar8;
    uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar14 != 0) {
      piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar6 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
          goto LAB_033d54f4;
        }
        uVar14 = uVar14 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar14 != 0);
    }
    puVar6 = (undefined8 *)
             FUN_01ecb238(plVar8,*(long *)
                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                          ,0);
LAB_033d54f4:
    (*(code *)*puVar6)(plVar8,puVar6[1]);
  }
  goto LAB_033d5538;
LAB_033d547c:
  plVar8 = (long *)thunk_FUN_01f116d0(plVar8,*(undefined8 *)
                                              Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                                     );
  if (plVar8 != (long *)0x0) {
    lVar13 = *plVar8;
    uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar14 != 0) {
      piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar6 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
          goto LAB_033d551c;
        }
        uVar14 = uVar14 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar14 != 0);
    }
    puVar6 = (undefined8 *)
             FUN_01ecb238(plVar8,*(long *)
                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                          ,0);
LAB_033d551c:
    (*(code *)*puVar6)(plVar8,puVar6[1]);
  }
LAB_033d5538:
  FUN_033ce1dc(lVar12,lVar10);
  if (lVar5 == 0) goto LAB_033d5664;
  FUN_033ce1dc(lVar5,lVar12);
  goto LAB_033d4e10;
}


