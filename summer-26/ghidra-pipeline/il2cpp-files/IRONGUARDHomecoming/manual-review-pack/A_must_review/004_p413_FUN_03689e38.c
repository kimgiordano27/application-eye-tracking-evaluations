/*
FUNCTION_NAME: FUN_03689e38
ENTRY_POINT: 03689e38
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 262
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup;gaze_interaction;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ray_interaction;telemetry;frame_behavior;structure_combo;ordered_structure
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_18;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_10;ray_or_cast_sink_hits_6;telemetry_or_network_hits_4;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;ordered_eye_source_validity_pose_collection_sink;functionality_permission_setup;functionality_gaze_interaction_hits_4;functionality_data_collection_or_telemetry_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x0368a3ac) */
/* WARNING: Removing unreachable block (ram,0x0368a42c) */

void FUN_03689e38(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined4 *puVar13;
  ulong uVar14;
  int *piVar15;
  long *plVar16;
  undefined8 uVar17;
  long *plVar18;
  float fVar19;
  float fVar20;
  undefined8 uVar21;
  float fVar22;
  undefined8 local_90;
  undefined4 local_78;
  undefined4 local_74;
  
  if ((DAT_04833e97 & 1) == 0) {
    thunk_FUN_01efb3a4(
                      Method_System_Linq_Expressions_Interpreter_NumericConvertInstruction_Unchecked_ConvertDouble__
                      );
    thunk_FUN_01efb3a4(
                      Method_System_Linq_Expressions_Interpreter_NumericConvertInstruction_Unchecked_ConvertInt32__
                      );
    thunk_FUN_01efb3a4(Method_System_Linq_Enumerable_Max<Spawner>__);
    thunk_FUN_01efb3a4(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    thunk_FUN_01efb3a4(Method_OVRControllerTest_<>c_<Start>b__4_14__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(
                      Method_System_Linq_Expressions_Interpreter_NumericConvertInstruction_ToUnderlying_Convert__
                      );
    thunk_FUN_01efb3a4(
                      Method_System_Linq_Expressions_Interpreter_NumericConvertInstruction_Unchecked_Convert__
                      );
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_<>c_<Render>b__11_0__
                      );
    thunk_FUN_01efb3a4(Method_UnityEngine_Splines_SplineDataDictionary<float>_TryGetValue__);
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LivestreamingStatus>_get_Data__);
    thunk_FUN_01efb3a4(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_2__);
    thunk_FUN_01efb3a4(Method_System_Nullable<InputControlScheme_MatchResult>_get_HasValue__);
    thunk_FUN_01efb3a4(Method_UnityEngine_EventSystems_OVRPhysicsRaycaster_<>c_<Raycast>b__15_0__);
    DAT_04833e97 = 1;
  }
  if (DAT_0482ee12 == '\0') {
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LeaderboardEntryList>_get_Data__);
    DAT_0482ee12 = '\x01';
  }
  if (((*(long *)(param_1 + 0x30) != 0) &&
      (lVar10 = *(long *)(*(long *)(param_1 + 0x30) + 0x40), lVar10 != 0)) &&
     (plVar16 = *(long **)(lVar10 + 0x10), plVar16 != (long *)0x0)) {
    lVar11 = *plVar16;
    lVar10 = *(long *)Method_System_Nullable<InputControlScheme_MatchResult>_get_HasValue__;
    uVar14 = (ulong)*(ushort *)(lVar11 + 0x12e);
    local_90 = **(undefined8 **)
                 (*(long *)Method_Oculus_Platform_Message<LeaderboardEntryList>_get_Data__ + 0xb8);
    fVar20 = *(float *)(*(undefined8 **)
                         (*(long *)Method_Oculus_Platform_Message<LeaderboardEntryList>_get_Data__ +
                         0xb8) + 1);
    if (uVar14 != 0) {
      piVar15 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) ==
            *(long *)
             Method_System_Linq_Expressions_Interpreter_NumericConvertInstruction_ToUnderlying_Convert__
           ) {
          puVar5 = (undefined8 *)(lVar11 + (long)*piVar15 * 0x10 + 0x138);
          goto LAB_03689fdc;
        }
        uVar14 = uVar14 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar14 != 0);
    }
    puVar5 = (undefined8 *)
             FUN_01ecb238(plVar16,*(long *)
                                   Method_System_Linq_Expressions_Interpreter_NumericConvertInstruction_ToUnderlying_Convert__
                          ,0);
LAB_03689fdc:
    plVar16 = (long *)(*(code *)*puVar5)(plVar16,puVar5[1]);
    puVar4 = Method_UnityEngine_EventSystems_OVRPhysicsRaycaster_<>c_<Raycast>b__15_0__;
    puVar3 = Method_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_<>c_<Render>b__11_0__;
    puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
    puVar1 = Method_Oculus_Platform_Message<LaunchReportFlowResult>__ctor__;
    if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    do {
      lVar11 = *plVar16;
      uVar14 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar14 != 0) {
        piVar15 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == *(long *)puVar2) {
            puVar5 = (undefined8 *)(lVar11 + (long)*piVar15 * 0x10 + 0x138);
            goto LAB_0368a060;
          }
          uVar14 = uVar14 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar14 != 0);
      }
      puVar5 = (undefined8 *)FUN_01ecb238(plVar16,*(long *)puVar2,0);
LAB_0368a060:
      uVar14 = (*(code *)*puVar5)(plVar16,puVar5[1]);
      if ((uVar14 & 1) == 0) {
        if (plVar16 == (long *)0x0) goto LAB_0368a3a0;
        lVar11 = *plVar16;
        uVar14 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar14 == 0) goto LAB_0368a378;
        piVar15 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        goto LAB_0368a360;
      }
      lVar11 = *plVar16;
      uVar14 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar14 != 0) {
        piVar15 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) ==
              *(long *)
               Method_System_Linq_Expressions_Interpreter_NumericConvertInstruction_Unchecked_Convert__
             ) {
            puVar5 = (undefined8 *)(lVar11 + (long)*piVar15 * 0x10 + 0x138);
            goto LAB_0368a0c4;
          }
          uVar14 = uVar14 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar14 != 0);
      }
      puVar5 = (undefined8 *)
               FUN_01ecb238(plVar16,*(long *)
                                     Method_System_Linq_Expressions_Interpreter_NumericConvertInstruction_Unchecked_Convert__
                            ,0);
LAB_0368a0c4:
      lVar11 = (*(code *)*puVar5)(plVar16,puVar5[1]);
      uVar21 = *(undefined8 *)(param_1 + 0x60);
      uVar7 = *(undefined8 *)(param_1 + 0x68);
      if (*(int *)(*(long *)Method_Oculus_Platform_Message<LivestreamingStatus>_get_Data__ + 0xe0)
          == 0) {
        thunk_FUN_01ee6d7c();
      }
      lVar6 = FUN_023aa90c(uVar21,uVar7,
                           *(undefined8 *)
                            Method_UnityEngine_Splines_SplineDataDictionary<float>_TryGetValue__);
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar6 = FUN_023361c8(lVar6,*(undefined8 *)
                                  Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__
                          );
      if (*(long *)(param_1 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      plVar18 = *(long **)(*(long *)(param_1 + 0x30) + 0x28);
      if (plVar18 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar12 = *plVar18;
      lVar9 = *(long *)puVar3;
      uVar14 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar14 != 0) {
        piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == lVar9) {
            puVar5 = (undefined8 *)(lVar12 + (long)*piVar15 * 0x10 + 0x138);
            goto LAB_0368a17c;
          }
          uVar14 = uVar14 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar14 != 0);
      }
      puVar5 = (undefined8 *)FUN_01ecb238(plVar18,lVar9,0);
LAB_0368a17c:
      uVar14 = (*(code *)*puVar5)(plVar18,puVar5[1]);
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c(uVar14,uVar14 & 0xffffffff);
      }
      FUN_03689128(lVar6,uVar14 & 0xffffffff,lVar11,*(undefined8 *)(param_1 + 0x28),
                   *(undefined8 *)(param_1 + 0x30));
      lVar6 = FUN_04070398(lVar6,0);
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      FUN_0407da88(*(undefined4 *)(param_1 + 0x7c),*(undefined4 *)(param_1 + 0x80),
                   *(undefined4 *)(param_1 + 0x84),lVar6,0);
      if (DAT_0482ee0f == '\0') {
        thunk_FUN_01efb3a4(puVar1);
        DAT_0482ee0f = '\x01';
      }
      puVar13 = *(undefined4 **)(*(long *)puVar1 + 0xb8);
      FUN_0407d6f4(*puVar13,puVar13[1],puVar13[2],puVar13[3],lVar6,0);
      fVar19 = (float)((ulong)local_90 >> 0x20);
      FUN_0407c958(local_90,fVar19,fVar20,lVar6,0);
      uVar21 = *(undefined8 *)(param_1 + 0x70);
      fVar22 = *(float *)(param_1 + 0x78);
      uVar14 = FUN_0340eec4(lVar10,0);
      if ((uVar14 & 1) == 0) {
        lVar10 = FUN_03405678(lVar10,*(undefined8 *)
                                      Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_2__
                              ,0);
      }
      if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      local_74 = *(undefined4 *)(lVar11 + 0x10);
      uVar7 = thunk_FUN_01f113fc(*(undefined8 *)Method_System_Linq_Enumerable_Max<Spawner>__,
                                 &local_74);
      if (*(long *)(param_1 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      plVar18 = *(long **)(*(long *)(param_1 + 0x30) + 0x28);
      if (plVar18 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar6 = *plVar18;
      uVar17 = *(undefined8 *)(lVar11 + 0x18);
      lVar11 = *(long *)puVar3;
      uVar14 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar14 != 0) {
        piVar15 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == lVar11) {
            puVar5 = (undefined8 *)(lVar6 + (long)*piVar15 * 0x10 + 0x138);
            goto LAB_0368a2cc;
          }
          uVar14 = uVar14 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar14 != 0);
      }
      puVar5 = (undefined8 *)FUN_01ecb238(plVar18,lVar11,0);
LAB_0368a2cc:
      local_78 = (*(code *)*puVar5)(plVar18,puVar5[1]);
      uVar8 = thunk_FUN_01f113fc(*(undefined8 *)Method_OVRControllerTest_<>c_<Start>b__4_14__,
                                 &local_78);
      uVar7 = FUN_0340f334(*(undefined8 *)puVar4,uVar7,uVar17,uVar8,0);
      lVar10 = FUN_03405678(lVar10,uVar7,0);
      fVar20 = fVar20 + fVar22;
      local_90 = CONCAT44(fVar19 + (float)((ulong)uVar21 >> 0x20),(float)local_90 + (float)uVar21);
    } while( true );
  }
  goto LAB_0368a424;
  while( true ) {
    uVar14 = uVar14 - 1;
    piVar15 = piVar15 + 4;
    if (uVar14 == 0) break;
LAB_0368a360:
    if (*(long *)(piVar15 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar5 = (undefined8 *)(lVar11 + (long)*piVar15 * 0x10 + 0x138);
      goto LAB_0368a394;
    }
  }
LAB_0368a378:
  puVar5 = (undefined8 *)
           FUN_01ecb238(plVar16,*(long *)
                                 Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                        ,0);
LAB_0368a394:
  (*(code *)*puVar5)(plVar16,puVar5[1]);
LAB_0368a3a0:
  plVar16 = *(long **)(param_1 + 0x88);
  if (plVar16 != (long *)0x0) {
    lVar11 = *(long *)Method_System_Nullable<InputControlScheme_MatchResult>_get_HasValue__;
    if (lVar10 != 0) {
      lVar11 = lVar10;
    }
    (**(code **)(*plVar16 + 0x558))(plVar16,lVar11,*(undefined8 *)(*plVar16 + 0x560));
    return;
  }
LAB_0368a424:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


