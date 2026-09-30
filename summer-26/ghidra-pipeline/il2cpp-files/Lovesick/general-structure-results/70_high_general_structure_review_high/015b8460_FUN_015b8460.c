/*
FUNCTION_NAME: FUN_015b8460
ENTRY_POINT: 015b8460
PROGRAM: Lovesick-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;ui_interaction;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_8;validity_or_gating_hits_13;strong_pose_or_ray_construction_hits_8;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_4;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_015b8460(long param_1,ulong *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  char *pcVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  uint uVar11;
  ulong uVar12;
  ulong uVar13;
  int *piVar14;
  undefined8 uVar15;
  ulong uVar16;
  ulong local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  ulong local_a8;
  ulong local_a0;
  undefined8 uStack_98;
  ulong local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  ulong local_70;
  ulong uStack_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  
  puVar3 = StringLiteral_3033;
  if ((DAT_03777e17 & 1) == 0) {
    thunk_FUN_00d48444(UnityEngine_Rendering_Universal_LibTessDotNet_Tess_ActiveRegion_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_2221);
    thunk_FUN_00d48444(Method_System_Threading_Tasks_ThreadPoolTaskScheduler_<>c_<_cctor>b__10_0__);
    thunk_FUN_00d48444(
                      Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitOnCompleted<OVRTask_Awaiter<bool>,_OVRSceneManager_<OnApplicationPause>d__38>__
                      );
    thunk_FUN_00d48444(Method_System_Collections_Generic_Dictionary<InputControl,_float>_Clear__);
    thunk_FUN_00d48444(StringLiteral_3033);
    thunk_FUN_00d48444(Oculus_Interaction_DistanceReticles_TeleportReticleDrawer_TypeInfo);
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vtrn1_s16__);
    thunk_FUN_00d48444(
                      Method_UnityEngine_InputSystem_InputControlScheme_FindControlSchemeForDevices<InputDevice[],_ReadOnlyArray<InputControlScheme>>__
                      );
    thunk_FUN_00d48444(System_Collections_Generic_List<InputActionSet>_TypeInfo);
    thunk_FUN_00d48444(System_Func<Sheet,_bool>_TypeInfo);
    thunk_FUN_00d48444(PTR_DAT_033ead50);
    thunk_FUN_00d48444(StringLiteral_13119);
    DAT_03777e17 = 1;
  }
  uStack_88 = 0;
  local_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  plVar4 = (long *)FUN_00da4fb8(*(undefined8 *)puVar3,5);
  puVar3 = 
  Method_UnityEngine_InputSystem_InputControlScheme_FindControlSchemeForDevices<InputDevice[],_ReadOnlyArray<InputControlScheme>>__
  ;
  if (plVar4 == (long *)0x0) goto LAB_015b891c;
  if ((*(long *)
        Method_UnityEngine_InputSystem_InputControlScheme_FindControlSchemeForDevices<InputDevice[],_ReadOnlyArray<InputControlScheme>>__
       != 0) &&
     (lVar5 = thunk_FUN_00d6225c(*(long *)
                                  Method_UnityEngine_InputSystem_InputControlScheme_FindControlSchemeForDevices<InputDevice[],_ReadOnlyArray<InputControlScheme>>__
                                 ,*(undefined8 *)(*plVar4 + 0x40)), lVar5 == 0)) goto LAB_015b8910;
  puVar2 = System_Func<Sheet,_bool>_TypeInfo;
  uVar11 = *(uint *)(plVar4 + 3);
  if (uVar11 != 0) {
    plVar4[4] = *(long *)puVar3;
    lVar5 = *(long *)puVar2;
    if (lVar5 != 0) {
      lVar5 = thunk_FUN_00d6225c(lVar5,*(undefined8 *)(*plVar4 + 0x40));
      if (lVar5 == 0) goto LAB_015b8910;
      uVar11 = *(uint *)(plVar4 + 3);
    }
    if (1 < uVar11) {
      plVar4[5] = *(long *)puVar2;
      uStack_68 = param_2[1];
      local_70 = *param_2;
      uStack_50 = (undefined4)param_2[4];
      uStack_4c = (undefined4)(param_2[4] >> 0x20);
      uStack_58 = (undefined4)param_2[3];
      uStack_54 = (undefined4)(param_2[3] >> 0x20);
      local_60 = (undefined4)param_2[2];
      uStack_5c = (undefined4)(param_2[2] >> 0x20);
      uStack_98 = CONCAT44(uStack_50,uStack_54);
      local_a0 = CONCAT44(uStack_58,uStack_5c);
      lVar5 = thunk_FUN_00d61fa0(*(undefined8 *)
                                  UnityEngine_Rendering_Universal_LibTessDotNet_Tess_ActiveRegion_TypeInfo
                                 ,&local_a0);
      if ((lVar5 != 0) &&
         (lVar6 = thunk_FUN_00d6225c(lVar5,*(undefined8 *)(*plVar4 + 0x40)), lVar6 == 0)) {
LAB_015b8910:
        uVar9 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
        FUN_00da5038(uVar9,0);
      }
      puVar2 = Method_Unity_Burst_Intrinsics_Arm_Neon_vtrn1_s16__;
      if (2 < *(uint *)(plVar4 + 3)) {
        plVar4[6] = lVar5;
        local_a8 = *(ulong *)(param_1 + 0x38);
        lVar5 = thunk_FUN_00d61fa0(*(undefined8 *)puVar2,&local_a8);
        if ((lVar5 != 0) &&
           (lVar6 = thunk_FUN_00d6225c(lVar5,*(undefined8 *)(*plVar4 + 0x40)), lVar6 == 0))
        goto LAB_015b8910;
        if (3 < *(uint *)(plVar4 + 3)) {
          plVar4[7] = lVar5;
          local_b0 = *(undefined8 *)(param_1 + 0x40);
          lVar5 = thunk_FUN_00d61fa0(*(undefined8 *)puVar2,&local_b0);
          if ((lVar5 != 0) &&
             (lVar6 = thunk_FUN_00d6225c(lVar5,*(undefined8 *)(*plVar4 + 0x40)), lVar6 == 0))
          goto LAB_015b8910;
          puVar1 = PTR_DAT_033ead50;
          if (4 < *(uint *)(plVar4 + 3)) {
            plVar4[8] = lVar5;
            FUN_01600be4(*(undefined8 *)puVar1,plVar4,0);
            FUN_015baefc();
            puVar1 = 
            Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitOnCompleted<OVRTask_Awaiter<bool>,_OVRSceneManager_<OnApplicationPause>d__38>__
            ;
            plVar4 = *(long **)(param_1 + 0x48);
            if (plVar4 != (long *)0x0) {
              lVar5 = *plVar4;
              uVar16 = param_2[1];
              uVar12 = (ulong)*(ushort *)(lVar5 + 0x12a);
              if (uVar12 != 0) {
                piVar14 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar14 + -2) == *(long *)StringLiteral_2221) {
                    puVar7 = (undefined8 *)(lVar5 + (long)(*piVar14 + 3) * 0x10 + 0x138);
                    goto LAB_015b871c;
                  }
                  uVar12 = uVar12 - 1;
                  piVar14 = piVar14 + 4;
                } while (uVar12 != 0);
              }
              puVar7 = (undefined8 *)FUN_00d59724(plVar4,*(long *)StringLiteral_2221,3);
LAB_015b871c:
              (*(code *)*puVar7)(&local_d0,plVar4,uVar16,puVar7[1]);
              uStack_88 = uStack_c8;
              local_90 = local_d0;
              uStack_78 = uStack_b8;
              uStack_80 = uStack_c0;
              lVar5 = *(long *)(*(long *)puVar1 + 0x20);
              if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
                lVar5 = FUN_00d5941c();
              }
              lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 8);
              if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
                lVar5 = FUN_00d5941c();
              }
              pcVar8 = (char *)thunk_FUN_00d32ed4(&local_90,*(undefined8 *)(lVar5 + 0x80));
              puVar1 = StringLiteral_13119;
              if (*pcVar8 == '\0') {
                local_70 = param_2[1];
                uVar9 = thunk_FUN_00d61fa0(*(undefined8 *)puVar2,&local_70);
                FUN_01600b5c(*(undefined8 *)puVar1,*(undefined8 *)puVar3,uVar9,0);
                FUN_015bb0e8();
                if (*(long *)(param_1 + 0x28) == 0) goto LAB_015b891c;
                local_d0 = local_d0 & 0xffffffffffffff00;
                FUN_013ba6c4(*(long *)(param_1 + 0x28),&local_d0,
                             *(undefined8 *)
                              Oculus_Interaction_DistanceReticles_TeleportReticleDrawer_TypeInfo);
              }
              puVar1 = System_Collections_Generic_List<InputActionSet>_TypeInfo;
              FUN_01347408(&local_90,&local_70,
                           *(undefined8 *)
                            Method_System_Collections_Generic_Dictionary<InputControl,_float>_Clear__
                          );
              uVar16 = local_70;
              local_d0 = local_70;
              uVar9 = thunk_FUN_00d61fa0(*(undefined8 *)puVar2,&local_d0);
              local_a0 = param_2[1];
              uVar10 = thunk_FUN_00d61fa0(*(undefined8 *)puVar2,&local_a0);
              FUN_01600ba0(*(undefined8 *)puVar1,*(undefined8 *)puVar3,uVar9,uVar10,0);
              FUN_015bafa0();
              plVar4 = *(long **)(param_1 + 0x50);
              uVar12 = *(ulong *)(param_1 + 0x38);
              uVar9 = *(undefined8 *)(param_1 + 0x40);
              uVar15 = *(undefined8 *)((long)param_2 + 0x14);
              uVar10 = *(undefined8 *)((long)param_2 + 0x1c);
              local_a8 = local_a8 & 0xff00000000000000;
              if (plVar4 != (long *)0x0) {
                lVar5 = *plVar4;
                uVar13 = (ulong)*(ushort *)(lVar5 + 0x12a);
                if (uVar13 != 0) {
                  piVar14 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar14 + -2) ==
                        *(long *)
                         Method_System_Threading_Tasks_ThreadPoolTaskScheduler_<>c_<_cctor>b__10_0__
                       ) {
                      puVar7 = (undefined8 *)(lVar5 + (long)(*piVar14 + 4) * 0x10 + 0x138);
                      goto LAB_015b88bc;
                    }
                    uVar13 = uVar13 - 1;
                    piVar14 = piVar14 + 4;
                  } while (uVar13 != 0);
                }
                puVar7 = (undefined8 *)
                         FUN_00d59724(plVar4,*(long *)
                                              Method_System_Threading_Tasks_ThreadPoolTaskScheduler_<>c_<_cctor>b__10_0__
                                      ,4);
LAB_015b88bc:
                uStack_4c = 0;
                local_60 = (undefined4)uVar15;
                uStack_5c = (undefined4)((ulong)uVar15 >> 0x20);
                uStack_58 = (undefined4)uVar10;
                uStack_54 = (undefined4)((ulong)uVar10 >> 0x20);
                uStack_50 = 1;
                local_70 = uVar12;
                uStack_68 = uVar9;
                (*(code *)*puVar7)(plVar4,uVar16,&local_70,puVar7[1]);
                return;
              }
            }
LAB_015b891c:
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da5194();
}


