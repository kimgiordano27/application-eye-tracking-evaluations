/*
FUNCTION_NAME: FUN_02fb696c
ENTRY_POINT: 02fb696c
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_3;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_3;telemetry_or_network_hits_9;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


/* WARNING: Removing unreachable block (ram,0x02fb6b0c) */
/* WARNING: Removing unreachable block (ram,0x02fb6bc0) */

void FUN_02fb696c(long param_1,int param_2,ulong param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  char local_34 [4];
  
  if ((DAT_03ff0fa0 & 1) == 0) {
    thunk_FUN_01ad9084(
                      Method_Meta_WitAi_Requests_WitTTSVRequest_<>c__DisplayClass14_0_<RequestStream>b__0__
                      );
    thunk_FUN_01ad9084(
                      Method_OVRTrackedKeyboard_<UpdateKeyboardPose>d__98_System_Collections_IEnumerator_Reset__
                      );
    thunk_FUN_01ad9084(Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__);
    DAT_03ff0fa0 = 1;
  }
  puVar2 = Method_Meta_WitAi_Requests_WitTTSVRequest_<>c__DisplayClass14_0_<RequestStream>b__0__;
  local_34[0] = '\0';
  if ((param_3 & 1) == 0) {
    if (param_2 < 1) {
      thunk_FUN_01ad9084(StringLiteral_2200);
      uVar4 = thunk_FUN_01afaadc();
      uVar6 = thunk_FUN_01ad9084(StringLiteral_3705);
      uVar7 = thunk_FUN_01ad9084(StringLiteral_9626);
      FUN_02fd4a78(uVar4,uVar6,uVar7,0);
      uVar6 = thunk_FUN_01ad9084(StringLiteral_9873);
                    /* WARNING: Subroutine does not return */
      FUN_01b48050(uVar4,uVar6);
    }
    if (*(int *)(*(long *)Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    iVar3 = FUN_03041568(param_2,8,0);
    puVar1 = 
    Method_OVRTrackedKeyboard_<UpdateKeyboardPose>d__98_System_Collections_IEnumerator_Reset__;
    if (iVar3 < 0x1001) {
      lVar5 = *(long *)
               Method_OVRTrackedKeyboard_<UpdateKeyboardPose>d__98_System_Collections_IEnumerator_Reset__
      ;
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
        lVar5 = *(long *)puVar1;
      }
      plVar9 = *(long **)(lVar5 + 0xb8);
      if (*plVar9 != 0) {
        if (*(int *)(lVar5 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
          plVar9 = *(long **)(*(long *)puVar1 + 0xb8);
        }
        lVar10 = plVar9[1];
        local_34[0] = '\0';
        FUN_030a2d7c(lVar10,local_34,0);
        lVar5 = *(long *)puVar1;
        if (*(int *)(lVar5 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
          lVar5 = *(long *)puVar1;
        }
        lVar8 = **(long **)(lVar5 + 0xb8);
        if (lVar8 != 0) {
          if (*(int *)(lVar5 + 0xe0) == 0) {
            thunk_FUN_01ac7298();
            lVar8 = **(long **)(*(long *)puVar1 + 0xb8);
          }
          *(long *)(param_1 + 0x28) = lVar8;
          thunk_FUN_01b4f09c();
          **(undefined8 **)(*(long *)puVar1 + 0xb8) = 0;
          thunk_FUN_01b4f09c(*(undefined8 *)(*(long *)puVar1 + 0xb8),0);
        }
        if (local_34[0] != '\0') {
          thunk_FUN_01b18c7c(lVar10,0);
        }
      }
    }
    plVar9 = (long *)(param_1 + 0x28);
    if (*plVar9 == 0) {
      lVar5 = FUN_01b47fd0(*(undefined8 *)puVar2,iVar3);
      *plVar9 = lVar5;
      thunk_FUN_01b4f09c(plVar9,lVar5);
    }
    else {
      FUN_03062488(*plVar9,0,iVar3,0);
    }
  }
  else {
    uVar4 = FUN_01b47fd0(*(undefined8 *)
                          Method_Meta_WitAi_Requests_WitTTSVRequest_<>c__DisplayClass14_0_<RequestStream>b__0__
                         ,1);
    *(undefined8 *)(param_1 + 0x28) = uVar4;
    thunk_FUN_01b4f09c();
    iVar3 = 0;
  }
  *(int *)(param_1 + 0x5c) = iVar3;
  return;
}


