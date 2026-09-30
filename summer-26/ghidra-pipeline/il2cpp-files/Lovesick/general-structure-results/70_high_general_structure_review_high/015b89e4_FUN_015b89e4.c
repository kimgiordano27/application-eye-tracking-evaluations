/*
FUNCTION_NAME: FUN_015b89e4
ENTRY_POINT: 015b89e4
PROGRAM: Lovesick-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_10;strong_pose_or_ray_construction_hits_8;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_4;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_015b89e4(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  uint uVar7;
  undefined8 local_50;
  ulong local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  puVar2 = StringLiteral_3033;
  if ((DAT_03777e19 & 1) == 0) {
    thunk_FUN_00d48444(StringLiteral_3033);
    thunk_FUN_00d48444(Oculus_Interaction_DistanceReticles_TeleportReticleDrawer_TypeInfo);
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vtrn1_s16__);
    thunk_FUN_00d48444(
                      Method_UnityEngine_InputSystem_InputControlScheme_FindControlSchemeForDevices<InputDevice[],_ReadOnlyArray<InputControlScheme>>__
                      );
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<ScheduledItem>_Remove__);
    thunk_FUN_00d48444(Method_UnityEngine_Events_UnityEvent<Hand,_Grabbable>_AddListener__);
    thunk_FUN_00d48444(Method_PullMenu_DelayIncreasePressed__);
    DAT_03777e19 = 1;
  }
  local_40 = 0;
  uStack_38 = 0;
  plVar3 = (long *)FUN_00da4fb8(*(undefined8 *)puVar2,4);
  puVar2 = 
  Method_UnityEngine_InputSystem_InputControlScheme_FindControlSchemeForDevices<InputDevice[],_ReadOnlyArray<InputControlScheme>>__
  ;
  if (plVar3 == (long *)0x0) {
LAB_015b8c38:
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  if ((*(long *)
        Method_UnityEngine_InputSystem_InputControlScheme_FindControlSchemeForDevices<InputDevice[],_ReadOnlyArray<InputControlScheme>>__
       != 0) &&
     (lVar4 = thunk_FUN_00d6225c(*(long *)
                                  Method_UnityEngine_InputSystem_InputControlScheme_FindControlSchemeForDevices<InputDevice[],_ReadOnlyArray<InputControlScheme>>__
                                 ,*(undefined8 *)(*plVar3 + 0x40)), lVar4 == 0)) goto LAB_015b8c2c;
  puVar1 = Method_System_Collections_Generic_List<ScheduledItem>_Remove__;
  uVar7 = *(uint *)(plVar3 + 3);
  if (uVar7 != 0) {
    plVar3[4] = *(long *)puVar2;
    lVar4 = *(long *)puVar1;
    if (lVar4 != 0) {
      lVar4 = thunk_FUN_00d6225c(lVar4,*(undefined8 *)(*plVar3 + 0x40));
      if (lVar4 == 0) goto LAB_015b8c2c;
      uVar7 = *(uint *)(plVar3 + 3);
    }
    puVar2 = Method_Unity_Burst_Intrinsics_Arm_Neon_vtrn1_s16__;
    if (1 < uVar7) {
      plVar3[5] = *(long *)puVar1;
      local_48 = *(ulong *)(param_1 + 0x38);
      lVar4 = thunk_FUN_00d61fa0(*(undefined8 *)puVar2,&local_48);
      if ((lVar4 != 0) &&
         (lVar5 = thunk_FUN_00d6225c(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0)) {
LAB_015b8c2c:
        uVar6 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
        FUN_00da5038(uVar6,0);
      }
      if (2 < *(uint *)(plVar3 + 3)) {
        plVar3[6] = lVar4;
        local_50 = *(undefined8 *)(param_1 + 0x40);
        lVar4 = thunk_FUN_00d61fa0(*(undefined8 *)puVar2,&local_50);
        if ((lVar4 != 0) &&
           (lVar5 = thunk_FUN_00d6225c(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0))
        goto LAB_015b8c2c;
        puVar2 = Method_UnityEngine_Events_UnityEvent<Hand,_Grabbable>_AddListener__;
        if (3 < *(uint *)(plVar3 + 3)) {
          plVar3[7] = lVar4;
          FUN_01600be4(*(undefined8 *)puVar2,plVar3,0);
          FUN_015bafa0();
          if ((*(byte *)(param_2 + 0x20) & 1) == 0) {
            FUN_015bb0e8(*(undefined8 *)Method_PullMenu_DelayIncreasePressed__);
            lVar4 = *(long *)(param_1 + 0x18);
            if (lVar4 != 0) {
              local_48 = CONCAT44(local_48._4_4_,2);
              (**(code **)(lVar4 + 0x18))
                        (*(undefined8 *)(lVar4 + 0x40),&local_48,*(undefined8 *)(lVar4 + 0x28));
            }
            if (*(long *)(param_1 + 0x28) == 0) goto LAB_015b8c38;
            local_48 = local_48 & 0xffffffffffffff00;
            FUN_013ba6c4(*(long *)(param_1 + 0x28),&local_48,
                         *(undefined8 *)
                          Oculus_Interaction_DistanceReticles_TeleportReticleDrawer_TypeInfo);
          }
          else {
            uVar6 = FUN_0176b1ec(param_2 + 0x10,0);
            FUN_01768d04(&local_40,uVar6,0);
            FUN_015b8c3c(param_1,local_40,uStack_38);
          }
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da5194();
}


