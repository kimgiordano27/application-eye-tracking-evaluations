/*
FUNCTION_NAME: System.Runtime.Serialization.ObjectManager$$AddOnDeserialized
ENTRY_POINT: 033887ec
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 124
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;telemetry;structure_combo
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_12;paired_field_refs_with_eye_source;telemetry_or_network_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;negative_system_io_serialization_or_json_helper_without_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x03388d44) */

void System_Runtime_Serialization_ObjectManager__AddOnDeserialized(void)

{
  byte bVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  undefined8 *puVar13;
  long *plVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  int *piVar22;
  long unaff_x19;
  ulong uVar23;
  undefined8 uVar24;
  long lVar25;
  undefined8 uVar26;
  
  thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
  thunk_FUN_01efb3a4(Method_GroupPresenceSample_<ClearPresence>b__10_0__);
  thunk_FUN_01efb3a4(
                    Method_System_Text_RegularExpressions_GroupCollection_System_Collections_IList_Clear__
                    );
  thunk_FUN_01efb3a4(Method_GroupPresenceSample_<ClearPresence>b__10_1__);
  thunk_FUN_01efb3a4(Method_GroupPresenceSample_<LaunchInvitePanel>b__11_0__);
  thunk_FUN_01efb3a4(Method_GroupPresenceSample_<LaunchRosterPanel>b__12_0__);
  thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__);
  *(undefined1 *)(unaff_x19 + 0x1d9) = 1;
  lVar8 = FUN_035d3824(0);
  if (lVar8 != 0) {
    iVar7 = FUN_035d7110(lVar8,0);
    if (iVar7 == 0x100) {
      return;
    }
    lVar8 = thunk_FUN_01f117cc(*(undefined8 *)
                                Method_System_Text_RegularExpressions_GroupCollection_System_Collections_IList_Remove__
                              );
    FUN_02a8b8c8(lVar8,*(undefined8 *)
                        Method_System_Text_RegularExpressions_GroupCollection_System_Collections_IList_Insert__
                );
    lVar9 = thunk_FUN_01ec9ab0(0);
    if ((lVar9 != 0) &&
       (lVar9 = FUN_035aee10(lVar9,0),
       puVar6 = Method_GroupPresenceSample_<LaunchRosterPanel>b__12_0__,
       puVar5 = Method_GroupPresenceSample_<ClearPresence>b__10_0__,
       puVar4 = 
       Method_System_Text_RegularExpressions_GroupCollection_System_Collections_IList_set_Item__,
       puVar3 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__,
       lVar9 != 0)) {
      if (0 < (int)*(ulong *)(lVar9 + 0x18)) {
        uVar23 = 0;
        uVar16 = *(ulong *)(lVar9 + 0x18) & 0xffffffff;
        do {
          if (uVar16 <= uVar23) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a44();
          }
          plVar10 = *(long **)(lVar9 + uVar23 * 8 + 0x20);
          if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          lVar11 = (**(code **)(*plVar10 + 0x228))(plVar10,*(undefined8 *)(*plVar10 + 0x230));
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
              lVar25 = *(long *)(lVar11 + uVar16 * 8 + 0x20);
              if (lVar25 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_01f08a3c();
              }
              lVar12 = FUN_03584e6c(lVar25,0);
              if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_01f08a3c();
              }
              if (0 < (int)*(ulong *)(lVar12 + 0x18)) {
                uVar17 = 0;
                uVar18 = *(ulong *)(lVar12 + 0x18) & 0xffffffff;
                do {
                  if (uVar18 <= uVar17) {
                    /* WARNING: Subroutine does not return */
                    FUN_01f08a44();
                  }
                  uVar26 = *(undefined8 *)(lVar12 + uVar17 * 8 + 0x20);
                  uVar24 = *(undefined8 *)Method_GroupPresenceSample_<ClearPresence>b__10_1__;
                  if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__ +
                              0xe0) == 0) {
                    thunk_FUN_01ee6d7c();
                  }
                  uVar24 = FUN_03579868(uVar24,0);
                  plVar10 = (long *)FUN_034b9230(uVar26,uVar24,0);
                  if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_01f08a3c();
                  }
                  lVar19 = *plVar10;
                  uVar18 = (ulong)*(ushort *)(lVar19 + 0x12e);
                  if (uVar18 != 0) {
                    piVar22 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar22 + -2) ==
                          *(long *)
                           Method_UnityEngine_Rendering_DebugFrameTiming_<RegisterDebugUI>b__17_1__)
                      {
                        puVar13 = (undefined8 *)(lVar19 + (long)*piVar22 * 0x10 + 0x138);
                        goto LAB_03388a30;
                      }
                      uVar18 = uVar18 - 1;
                      piVar22 = piVar22 + 4;
                    } while (uVar18 != 0);
                  }
                  puVar13 = (undefined8 *)
                            FUN_01ecb238(plVar10,*(long *)
                                                  Method_UnityEngine_Rendering_DebugFrameTiming_<RegisterDebugUI>b__17_1__
                                         ,0);
LAB_03388a30:
                  plVar10 = (long *)(*(code *)*puVar13)(plVar10,puVar13[1]);
                  if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_01f08a3c();
                  }
LAB_03388a44:
                  lVar19 = *plVar10;
                  uVar18 = (ulong)*(ushort *)(lVar19 + 0x12e);
                  if (uVar18 != 0) {
                    piVar22 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar22 + -2) == *(long *)puVar3) {
                        puVar13 = (undefined8 *)(lVar19 + (long)*piVar22 * 0x10 + 0x138);
                        goto System_Runtime_Serialization_ObjectHolder__get_ContainerID;
                      }
                      uVar18 = uVar18 - 1;
                      piVar22 = piVar22 + 4;
                    } while (uVar18 != 0);
                  }
                  puVar13 = (undefined8 *)FUN_01ecb238(plVar10,*(long *)puVar3,0);
System_Runtime_Serialization_ObjectHolder__get_ContainerID:
                  uVar18 = (*(code *)*puVar13)(plVar10,puVar13[1]);
                  if ((uVar18 & 1) != 0) {
                    lVar19 = *plVar10;
                    uVar18 = (ulong)*(ushort *)(lVar19 + 0x12e);
                    if (uVar18 != 0) {
                      piVar22 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar22 + -2) ==
                            *(long *)
                             Method_UnityEngine_Rendering_DebugFrameTiming_<RegisterDebugUI>b__17_10__
                           ) {
                          puVar13 = (undefined8 *)(lVar19 + (long)*piVar22 * 0x10 + 0x138);
                          goto LAB_03388af4;
                        }
                        uVar18 = uVar18 - 1;
                        piVar22 = piVar22 + 4;
                      } while (uVar18 != 0);
                    }
                    puVar13 = (undefined8 *)
                              FUN_01ecb238(plVar10,*(long *)
                                                  Method_UnityEngine_Rendering_DebugFrameTiming_<RegisterDebugUI>b__17_10__
                                           ,0);
LAB_03388af4:
                    plVar14 = (long *)(*(code *)*puVar13)(plVar10,puVar13[1]);
                    if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                      FUN_01f08a3c();
                    }
                    bVar1 = *(byte *)(*(long *)
                                       Method_GroupPresenceSample_<LaunchInvitePanel>b__11_0__ +
                                     0x130);
                    if ((*(byte *)(*plVar14 + 0x130) < bVar1) ||
                       (*(long *)(*(long *)(*plVar14 + 200) + (ulong)bVar1 * 8 + -8) !=
                        *(long *)Method_GroupPresenceSample_<LaunchInvitePanel>b__11_0__)) {
                    /* WARNING: Subroutine does not return */
                      FUN_01f08cfc(plVar14);
                    }
                    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_01f08a3c();
                    }
                    lVar19 = FUN_02a8b780(lVar8,plVar14[2],*(undefined8 *)puVar4);
                    lVar15 = thunk_FUN_01f117cc(*(undefined8 *)puVar6);
                    FUN_035ac8e8(lVar15,0);
                    if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_01f08a3c();
                    }
                    *(long *)(lVar15 + 0x10) = lVar25;
                    thunk_FUN_01f51358((long *)(lVar15 + 0x10),lVar25);
                    *(undefined8 *)(lVar15 + 0x18) = uVar26;
                    thunk_FUN_01f51358((undefined8 *)(lVar15 + 0x18),uVar26);
                    *(long *)(lVar15 + 0x20) = (long)plVar14;
                    thunk_FUN_01f51358((long *)(lVar15 + 0x20),plVar14);
                    if (lVar19 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_01f08a3c();
                    }
                    lVar20 = *(long *)(lVar19 + 0x10);
                    lVar21 = *(long *)puVar5;
                    *(int *)(lVar19 + 0x1c) = *(int *)(lVar19 + 0x1c) + 1;
                    if (lVar20 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_01f08a3c();
                    }
                    uVar2 = *(uint *)(lVar19 + 0x18);
                    if (uVar2 < *(uint *)(lVar20 + 0x18)) {
                      *(uint *)(lVar19 + 0x18) = uVar2 + 1;
                      plVar14 = (long *)(lVar20 + (long)(int)uVar2 * 8 + 0x20);
                      *plVar14 = lVar15;
                      thunk_FUN_01f51358(plVar14,lVar15);
                    }
                    else {
                      FUN_030f2bb4(lVar19,lVar15,
                                   *(undefined8 *)
                                    (*(long *)(*(long *)(lVar21 + 0x20) + 0xc0) + 0x70));
                    }
                    goto LAB_03388a44;
                  }
                  if (plVar10 != (long *)0x0) {
                    lVar19 = *plVar10;
                    uVar18 = (ulong)*(ushort *)(lVar19 + 0x12e);
                    if (uVar18 != 0) {
                      piVar22 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar22 + -2) ==
                            *(long *)
                             Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                           ) {
                          puVar13 = (undefined8 *)(lVar19 + (long)*piVar22 * 0x10 + 0x138);
                          goto LAB_03388d00;
                        }
                        uVar18 = uVar18 - 1;
                        piVar22 = piVar22 + 4;
                      } while (uVar18 != 0);
                    }
                    puVar13 = (undefined8 *)
                              FUN_01ecb238(plVar10,*(long *)
                                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                                           ,0);
LAB_03388d00:
                    (*(code *)*puVar13)(plVar10,puVar13[1]);
                  }
                  uVar18 = (ulong)*(uint *)(lVar12 + 0x18);
                  uVar17 = uVar17 + 1;
                } while ((long)uVar17 < (long)(int)*(uint *)(lVar12 + 0x18));
              }
              uVar17 = (ulong)*(uint *)(lVar11 + 0x18);
              uVar16 = uVar16 + 1;
            } while ((long)uVar16 < (long)(int)*(uint *)(lVar11 + 0x18));
          }
          uVar16 = (ulong)*(uint *)(lVar9 + 0x18);
          uVar23 = uVar23 + 1;
        } while ((long)uVar23 < (long)(int)*(uint *)(lVar9 + 0x18));
      }
      puVar3 = 
      Method_System_Text_RegularExpressions_GroupCollection_System_Collections_IList_Clear__;
      **(long **)(*(long *)
                   Method_System_Text_RegularExpressions_GroupCollection_System_Collections_IList_Clear__
                 + 0xb8) = lVar8;
      thunk_FUN_01f51358(*(undefined8 *)(*(long *)puVar3 + 0xb8),lVar8);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


