/*
FUNCTION_NAME: System.Runtime.Serialization.ObjectManager$$RaiseOnDeserializedEvent
ENTRY_POINT: 03388884
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 118
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;telemetry;structure_combo
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_19;strong_pose_or_ray_construction_hits_8;paired_field_refs_with_eye_source;telemetry_or_network_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;negative_system_io_serialization_or_json_helper_without_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_3
*/


/* WARNING: Removing unreachable block (ram,0x03388864) */
/* WARNING: Removing unreachable block (ram,0x03388d44) */

void System_Runtime_Serialization_ObjectManager__RaiseOnDeserializedEvent(void)

{
  byte bVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  undefined8 *puVar12;
  long *plVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  int *piVar21;
  ulong uVar22;
  undefined8 uVar23;
  long lVar24;
  undefined8 uVar25;
  
  lVar7 = thunk_FUN_01f117cc(*(undefined8 *)
                              Method_System_Text_RegularExpressions_GroupCollection_System_Collections_IList_Remove__
                            );
  FUN_02a8b8c8(lVar7,*(undefined8 *)
                      Method_System_Text_RegularExpressions_GroupCollection_System_Collections_IList_Insert__
              );
  lVar8 = thunk_FUN_01ec9ab0(0);
  if ((lVar8 == 0) ||
     (lVar8 = FUN_035aee10(lVar8,0),
     puVar6 = Method_GroupPresenceSample_<LaunchRosterPanel>b__12_0__,
     puVar5 = Method_GroupPresenceSample_<ClearPresence>b__10_0__,
     puVar4 = 
     Method_System_Text_RegularExpressions_GroupCollection_System_Collections_IList_set_Item__,
     puVar3 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__, lVar8 == 0
     )) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  if (0 < (int)*(ulong *)(lVar8 + 0x18)) {
    uVar22 = 0;
    uVar15 = *(ulong *)(lVar8 + 0x18) & 0xffffffff;
    do {
      if (uVar15 <= uVar22) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a44();
      }
      plVar9 = *(long **)(lVar8 + uVar22 * 8 + 0x20);
      if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar10 = (**(code **)(*plVar9 + 0x228))(plVar9,*(undefined8 *)(*plVar9 + 0x230));
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      if (0 < (int)*(ulong *)(lVar10 + 0x18)) {
        uVar15 = 0;
        uVar16 = *(ulong *)(lVar10 + 0x18) & 0xffffffff;
        do {
          if (uVar16 <= uVar15) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a44();
          }
          lVar24 = *(long *)(lVar10 + uVar15 * 8 + 0x20);
          if (lVar24 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          lVar11 = FUN_03584e6c(lVar24,0);
          if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          if (0 < (int)*(ulong *)(lVar11 + 0x18)) {
            uVar16 = 0;
            uVar17 = *(ulong *)(lVar11 + 0x18) & 0xffffffff;
            do {
              if (uVar17 <= uVar16) {
                    /* WARNING: Subroutine does not return */
                FUN_01f08a44();
              }
              uVar25 = *(undefined8 *)(lVar11 + uVar16 * 8 + 0x20);
              uVar23 = *(undefined8 *)Method_GroupPresenceSample_<ClearPresence>b__10_1__;
              if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__ + 0xe0
                          ) == 0) {
                thunk_FUN_01ee6d7c();
              }
              uVar23 = FUN_03579868(uVar23,0);
              plVar9 = (long *)FUN_034b9230(uVar25,uVar23,0);
              if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01f08a3c();
              }
              lVar18 = *plVar9;
              uVar17 = (ulong)*(ushort *)(lVar18 + 0x12e);
              if (uVar17 != 0) {
                piVar21 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar21 + -2) ==
                      *(long *)
                       Method_UnityEngine_Rendering_DebugFrameTiming_<RegisterDebugUI>b__17_1__) {
                    puVar12 = (undefined8 *)(lVar18 + (long)*piVar21 * 0x10 + 0x138);
                    goto LAB_03388a30;
                  }
                  uVar17 = uVar17 - 1;
                  piVar21 = piVar21 + 4;
                } while (uVar17 != 0);
              }
              puVar12 = (undefined8 *)
                        FUN_01ecb238(plVar9,*(long *)
                                             Method_UnityEngine_Rendering_DebugFrameTiming_<RegisterDebugUI>b__17_1__
                                     ,0);
LAB_03388a30:
              plVar9 = (long *)(*(code *)*puVar12)(plVar9,puVar12[1]);
              if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01f08a3c();
              }
LAB_03388a44:
              lVar18 = *plVar9;
              uVar17 = (ulong)*(ushort *)(lVar18 + 0x12e);
              if (uVar17 != 0) {
                piVar21 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar21 + -2) == *(long *)puVar3) {
                    puVar12 = (undefined8 *)(lVar18 + (long)*piVar21 * 0x10 + 0x138);
                    goto System_Runtime_Serialization_ObjectHolder__get_ContainerID;
                  }
                  uVar17 = uVar17 - 1;
                  piVar21 = piVar21 + 4;
                } while (uVar17 != 0);
              }
              puVar12 = (undefined8 *)FUN_01ecb238(plVar9,*(long *)puVar3,0);
System_Runtime_Serialization_ObjectHolder__get_ContainerID:
              uVar17 = (*(code *)*puVar12)(plVar9,puVar12[1]);
              if ((uVar17 & 1) != 0) {
                lVar18 = *plVar9;
                uVar17 = (ulong)*(ushort *)(lVar18 + 0x12e);
                if (uVar17 != 0) {
                  piVar21 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar21 + -2) ==
                        *(long *)
                         Method_UnityEngine_Rendering_DebugFrameTiming_<RegisterDebugUI>b__17_10__)
                    {
                      puVar12 = (undefined8 *)(lVar18 + (long)*piVar21 * 0x10 + 0x138);
                      goto LAB_03388af4;
                    }
                    uVar17 = uVar17 - 1;
                    piVar21 = piVar21 + 4;
                  } while (uVar17 != 0);
                }
                puVar12 = (undefined8 *)
                          FUN_01ecb238(plVar9,*(long *)
                                               Method_UnityEngine_Rendering_DebugFrameTiming_<RegisterDebugUI>b__17_10__
                                       ,0);
LAB_03388af4:
                plVar13 = (long *)(*(code *)*puVar12)(plVar9,puVar12[1]);
                if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01f08a3c();
                }
                bVar1 = *(byte *)(*(long *)Method_GroupPresenceSample_<LaunchInvitePanel>b__11_0__ +
                                 0x130);
                if ((*(byte *)(*plVar13 + 0x130) < bVar1) ||
                   (*(long *)(*(long *)(*plVar13 + 200) + (ulong)bVar1 * 8 + -8) !=
                    *(long *)Method_GroupPresenceSample_<LaunchInvitePanel>b__11_0__)) {
                    /* WARNING: Subroutine does not return */
                  FUN_01f08cfc(plVar13);
                }
                if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01f08a3c();
                }
                lVar18 = FUN_02a8b780(lVar7,plVar13[2],*(undefined8 *)puVar4);
                lVar14 = thunk_FUN_01f117cc(*(undefined8 *)puVar6);
                FUN_035ac8e8(lVar14,0);
                if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01f08a3c();
                }
                *(long *)(lVar14 + 0x10) = lVar24;
                thunk_FUN_01f51358((long *)(lVar14 + 0x10),lVar24);
                *(undefined8 *)(lVar14 + 0x18) = uVar25;
                thunk_FUN_01f51358((undefined8 *)(lVar14 + 0x18),uVar25);
                *(long *)(lVar14 + 0x20) = (long)plVar13;
                thunk_FUN_01f51358((long *)(lVar14 + 0x20),plVar13);
                if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01f08a3c();
                }
                lVar19 = *(long *)(lVar18 + 0x10);
                lVar20 = *(long *)puVar5;
                *(int *)(lVar18 + 0x1c) = *(int *)(lVar18 + 0x1c) + 1;
                if (lVar19 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01f08a3c();
                }
                uVar2 = *(uint *)(lVar18 + 0x18);
                if (uVar2 < *(uint *)(lVar19 + 0x18)) {
                  *(uint *)(lVar18 + 0x18) = uVar2 + 1;
                  plVar13 = (long *)(lVar19 + (long)(int)uVar2 * 8 + 0x20);
                  *plVar13 = lVar14;
                  thunk_FUN_01f51358(plVar13,lVar14);
                }
                else {
                  FUN_030f2bb4(lVar18,lVar14,
                               *(undefined8 *)(*(long *)(*(long *)(lVar20 + 0x20) + 0xc0) + 0x70));
                }
                goto LAB_03388a44;
              }
              if (plVar9 != (long *)0x0) {
                lVar18 = *plVar9;
                uVar17 = (ulong)*(ushort *)(lVar18 + 0x12e);
                if (uVar17 != 0) {
                  piVar21 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar21 + -2) ==
                        *(long *)
                         Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
                      puVar12 = (undefined8 *)(lVar18 + (long)*piVar21 * 0x10 + 0x138);
                      goto LAB_03388d00;
                    }
                    uVar17 = uVar17 - 1;
                    piVar21 = piVar21 + 4;
                  } while (uVar17 != 0);
                }
                puVar12 = (undefined8 *)
                          FUN_01ecb238(plVar9,*(long *)
                                               Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                                       ,0);
LAB_03388d00:
                (*(code *)*puVar12)(plVar9,puVar12[1]);
              }
              uVar17 = (ulong)*(uint *)(lVar11 + 0x18);
              uVar16 = uVar16 + 1;
            } while ((long)uVar16 < (long)(int)*(uint *)(lVar11 + 0x18));
          }
          uVar16 = (ulong)*(uint *)(lVar10 + 0x18);
          uVar15 = uVar15 + 1;
        } while ((long)uVar15 < (long)(int)*(uint *)(lVar10 + 0x18));
      }
      uVar15 = (ulong)*(uint *)(lVar8 + 0x18);
      uVar22 = uVar22 + 1;
    } while ((long)uVar22 < (long)(int)*(uint *)(lVar8 + 0x18));
  }
  puVar3 = Method_System_Text_RegularExpressions_GroupCollection_System_Collections_IList_Clear__;
  **(long **)(*(long *)
               Method_System_Text_RegularExpressions_GroupCollection_System_Collections_IList_Clear__
             + 0xb8) = lVar7;
  thunk_FUN_01f51358(*(undefined8 *)(*(long *)puVar3 + 0xb8),lVar7);
  return;
}


