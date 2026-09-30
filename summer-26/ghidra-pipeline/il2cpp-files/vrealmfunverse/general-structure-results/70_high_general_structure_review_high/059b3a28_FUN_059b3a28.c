/*
FUNCTION_NAME: FUN_059b3a28
ENTRY_POINT: 059b3a28
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_13;strong_pose_or_ray_construction_hits_6;telemetry_or_network_hits_11;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


/* WARNING: Removing unreachable block (ram,0x059b3f08) */

void FUN_059b3a28(long param_1,long param_2,long param_3,undefined1 (*param_4) [16])

{
  undefined *puVar1;
  undefined4 uVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long *plVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  undefined1 auVar15 [16];
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined4 local_b0;
  undefined8 local_a8;
  long **pplStack_a0;
  undefined4 local_94;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined4 local_60;
  long local_50;
  long *local_48;
  undefined8 local_38;
  
  if ((DAT_066d3a42 & 1) == 0) {
    FUN_02b3c81c(
                Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_Start<FriendsMatchmaking_<OnRoomOperationResult>d__24>__
                );
    FUN_02b3c81c(Method_UnityEngine_UIElements_TextInputBaseField<int>_get_textInputBase__);
    FUN_02b3c81c(Method_System_ValueTuple<NavigationDeviceType,_EventModifiers>__ctor__);
    FUN_02b3c81c(Method_Unity_Collections_NativeArray<Plane>_GetSubArray__);
    FUN_02b3c81c(PTR_DAT_06312f78);
    FUN_02b3c81c(
                Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_Start<FtpWebRequest_<CreateConnectionAsync>d__86>__
                );
    FUN_02b3c81c(Method_Unity_Collections_NativeParallelHashMap<int,_int>_get_IsCreated__);
    FUN_02b3c81c(
                Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_Start<LocalMatchmaking_<HostOrJoinSessionAutomatically>d__16>__
                );
    FUN_02b3c81c(
                Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_Start<LocalMatchmaking_<OnColocationSessionFound>d__18>__
                );
    FUN_02b3c81c(
                Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_Start<LocalMatchmaking_<StartAdvertisingColocationSession>d__19>__
                );
    FUN_02b3c81c(Method_UnityEngine_UIElements_TextInputBaseField<float>_get_isDelayed__);
    FUN_02b3c81c(Method_System_Array_Sort<float>__);
    FUN_02b3c81c(
                Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_Start<LocalMatchmaking_<StartDiscoveringColocationSessions>d__21>__
                );
    DAT_066d3a42 = 1;
  }
  puVar1 = Method_System_ValueTuple<NavigationDeviceType,_EventModifiers>__ctor__;
  local_38 = 0;
  local_50 = 0;
  local_48 = (long *)0x0;
  local_60 = 0;
  local_94 = 0;
  uStack_88 = 0;
  local_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  local_70 = 0;
  if (param_3 != 0) {
    uVar4 = FUN_0590661c(param_3,*(undefined8 *)
                                  Method_UnityEngine_UIElements_TextInputBaseField<int>_get_textInputBase__
                        );
    uVar5 = FUN_0590661c(param_3,*(undefined8 *)puVar1);
    uVar14 = *(undefined8 *)(param_1 + 0x40);
    local_38 = uVar5;
    uVar6 = FUN_0590759c(param_1,0);
    if (param_2 != 0) {
      local_48 = (long *)FUN_032fa71c(param_2,uVar14,&local_50,uVar6,
                                      *(undefined8 *)
                                       Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_Start<LocalMatchmaking_<StartDiscoveringColocationSessions>d__21>__
                                      ,0x11b,*(undefined8 *)
                                              Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_Start<LocalMatchmaking_<HostOrJoinSessionAutomatically>d__16>__
                                     );
      pplStack_a0 = &local_48;
      local_a8 = 0;
      FUN_059b24c4(param_1,&local_38,&local_90,&local_94);
      uVar2 = local_94;
      if (*(int *)(*(long *)Method_UnityEngine_UIElements_TextInputBaseField<float>_get_isDelayed__
                  + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      uStack_d8 = uStack_88;
      local_e0 = local_90;
      uStack_c8 = uStack_78;
      uStack_d0 = uStack_80;
      uStack_b8 = uStack_68;
      local_c0 = local_70;
      local_b0 = local_60;
      auVar15 = FUN_059891d4(param_2,&local_e0,*(undefined8 *)Method_System_Array_Sort<float>__,1,
                             uVar2,1,0);
      *param_4 = auVar15;
      if (local_50 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      *(undefined8 *)(local_50 + 0x10) = uVar4;
      thunk_FUN_02bb0e9c((undefined8 *)(local_50 + 0x10),uVar4);
      if (local_50 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      *(undefined8 *)(local_50 + 0x18) = uVar5;
      thunk_FUN_02bb0e9c((undefined8 *)(local_50 + 0x18),uVar5);
      plVar3 = local_48;
      if (local_50 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      uVar4 = *(undefined8 *)*param_4;
      *(undefined8 *)(local_50 + 0x3c) = *(undefined8 *)(*param_4 + 8);
      *(undefined8 *)(local_50 + 0x34) = uVar4;
      if (local_48 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      lVar9 = *local_48;
      uVar4 = *(undefined8 *)*param_4;
      uVar5 = *(undefined8 *)(*param_4 + 8);
      uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) ==
              *(long *)Method_Unity_Collections_NativeParallelHashMap<int,_int>_get_IsCreated__) {
            puVar7 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_059b3cb0;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar7 = (undefined8 *)
               FUN_02b7654c(local_48,*(long *)
                                      Method_Unity_Collections_NativeParallelHashMap<int,_int>_get_IsCreated__
                            ,0);
LAB_059b3cb0:
      (*(code *)*puVar7)(plVar3,uVar4,uVar5,0,6,puVar7[1]);
      if (local_50 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      *(undefined8 *)(local_50 + 0x20) = *(undefined8 *)(param_1 + 0xb8);
      thunk_FUN_02bb0e9c();
      if (local_50 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      *(undefined8 *)(local_50 + 0x28) = *(undefined8 *)(param_1 + 0xc0);
      thunk_FUN_02bb0e9c();
      plVar3 = local_48;
      if (local_50 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      *(undefined1 *)(local_50 + 0x30) = *(undefined1 *)(param_1 + 0xe0);
      if (local_48 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      lVar9 = *local_48;
      uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) ==
              *(long *)Method_Unity_Collections_NativeArray<Plane>_GetSubArray__) {
            puVar7 = (undefined8 *)(lVar9 + (long)(*piVar11 + 0xb) * 0x10 + 0x138);
            goto LAB_059b3d64;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar7 = (undefined8 *)
               FUN_02b7654c(local_48,*(long *)
                                      Method_Unity_Collections_NativeArray<Plane>_GetSubArray__,0xb)
      ;
LAB_059b3d64:
      (*(code *)*puVar7)(plVar3,0,puVar7[1]);
      plVar3 = local_48;
      puVar1 = 
      Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_Start<LocalMatchmaking_<StartAdvertisingColocationSession>d__19>__
      ;
      lVar9 = *(long *)
               Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_Start<LocalMatchmaking_<StartAdvertisingColocationSession>d__19>__
      ;
      if (*(int *)(lVar9 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
        lVar9 = *(long *)puVar1;
      }
      puVar7 = *(undefined8 **)(lVar9 + 0xb8);
      lVar12 = puVar7[1];
      if (lVar12 == 0) {
        if (*(int *)(lVar9 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
          puVar7 = *(undefined8 **)(*(long *)puVar1 + 0xb8);
        }
        uVar4 = *puVar7;
        lVar12 = thunk_FUN_02b79644(*(undefined8 *)
                                     Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_Start<FriendsMatchmaking_<OnRoomOperationResult>d__24>__
                                   );
        FUN_03e02810(lVar12,uVar4,
                     *(undefined8 *)
                      Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_Start<LocalMatchmaking_<OnColocationSessionFound>d__18>__
                     ,0);
        plVar8 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 8);
        *plVar8 = lVar12;
        thunk_FUN_02bb0e9c(plVar8,lVar12);
      }
      if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      lVar9 = *plVar3;
      lVar13 = *(long *)
                Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_Start<FtpWebRequest_<CreateConnectionAsync>d__86>__
      ;
      uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *(long *)(lVar13 + 0x20)) {
            lVar9 = lVar9 + (long)(int)(*piVar11 + (uint)*(ushort *)(lVar13 + 0x50)) * 0x10 + 0x138;
            goto LAB_059b3e58;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      lVar9 = FUN_02b7654c(plVar3);
LAB_059b3e58:
      lVar9 = thunk_FUN_02b5b75c(*(undefined8 *)(lVar9 + 8),lVar13);
      (**(code **)(lVar9 + 8))(plVar3,lVar12,lVar9);
      plVar3 = local_48;
      if (local_48 != (long *)0x0) {
        lVar9 = *local_48;
        uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar10 != 0) {
          piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_06312f78) {
              puVar7 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
              goto LAB_059b3edc;
            }
            uVar10 = uVar10 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar10 != 0);
        }
        puVar7 = (undefined8 *)FUN_02b7654c(local_48,*(long *)PTR_DAT_06312f78,0);
LAB_059b3edc:
        (*(code *)*puVar7)(plVar3,puVar7[1]);
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


