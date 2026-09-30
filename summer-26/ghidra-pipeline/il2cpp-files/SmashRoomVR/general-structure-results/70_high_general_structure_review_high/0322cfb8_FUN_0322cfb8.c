/*
FUNCTION_NAME: FUN_0322cfb8
ENTRY_POINT: 0322cfb8
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_21;validity_or_gating_hits_10;ui_or_gameplay_sink_hits_9;telemetry_or_network_hits_2
*/


void FUN_0322cfb8(int param_1)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined8 uVar7;
  int iVar8;
  undefined8 local_110 [2];
  undefined8 uStack_fc;
  undefined8 local_f0 [2];
  undefined8 uStack_dc;
  undefined8 local_d0 [2];
  undefined8 uStack_bc;
  undefined8 local_b0 [2];
  undefined8 uStack_9c;
  undefined8 local_90 [2];
  undefined8 uStack_7c;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  puVar5 = local_110;
  if ((DAT_03ff469f & 1) == 0) {
    thunk_FUN_01ad9084(
                      Method_Oculus_Interaction_Body_Input_ReadOnlyBodyJointPoses_<GetEnumerator>d__2_System_Collections_IEnumerator_Reset__
                      );
    thunk_FUN_01ad9084(Method_UnityEngine_UIElements_RectField_<>c_<DescribeFields>b__0_2__);
    thunk_FUN_01ad9084(StringLiteral_13603);
    thunk_FUN_01ad9084(
                      Method_System_Net_Security_SslStream_<>c__DisplayClass21_0_<SetAndVerifySelectionCallback>b__0__
                      );
    DAT_03ff469f = 1;
  }
  puVar3 = Method_UnityEngine_UIElements_RectField_<>c_<DescribeFields>b__0_2__;
  local_40 = 0;
  uStack_38 = 0;
  local_50 = 0;
  uStack_48 = 0;
  local_60 = 0;
  uStack_58 = 0;
  local_70 = 0;
  uStack_68 = 0;
  if (param_1 < 3) {
    if (param_1 == 1) {
      lVar4 = *(long *)Method_UnityEngine_UIElements_RectField_<>c_<DescribeFields>b__0_2__;
      if (*(int *)(lVar4 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
        lVar4 = *(long *)puVar3;
      }
      puVar2 = 
      Method_Oculus_Interaction_Body_Input_ReadOnlyBodyJointPoses_<GetEnumerator>d__2_System_Collections_IEnumerator_Reset__
      ;
      iVar8 = *(int *)(*(long *)(lVar4 + 0xb8) + 0x100);
      if (iVar8 != 1) {
        if (*(int *)(lVar4 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
          iVar8 = *(int *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x100);
        }
        puVar3 = 
        Method_Oculus_Interaction_Body_Input_ReadOnlyBodyJointPoses_<GetEnumerator>d__2_System_Collections_IEnumerator_Reset__
        ;
        lVar4 = *(long *)
                 Method_Oculus_Interaction_Body_Input_ReadOnlyBodyJointPoses_<GetEnumerator>d__2_System_Collections_IEnumerator_Reset__
        ;
        if (*(int *)(lVar4 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
          lVar4 = *(long *)puVar3;
        }
        lVar4 = *(long *)(lVar4 + 0xb8);
        if (iVar8 == 2) goto LAB_0322d470;
        uVar1 = *(undefined4 *)(lVar4 + 0x18);
        if (*(int *)(*(long *)StringLiteral_13603 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        uVar6 = FUN_0320c4d8(4,5,0xc,uVar1,&local_40,0);
        goto joined_r0x0322d4c0;
      }
      lVar4 = *(long *)
               Method_Oculus_Interaction_Body_Input_ReadOnlyBodyJointPoses_<GetEnumerator>d__2_System_Collections_IEnumerator_Reset__
      ;
      if (*(int *)(lVar4 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
        lVar4 = *(long *)puVar2;
      }
      uVar1 = *(undefined4 *)(*(long *)(lVar4 + 0xb8) + 0x18);
      if (*(int *)(*(long *)
                    Method_System_Net_Security_SslStream_<>c__DisplayClass21_0_<SetAndVerifySelectionCallback>b__0__
                  + 0xe0) == 0) {
        thunk_FUN_01ac7298(*(long *)
                            Method_System_Net_Security_SslStream_<>c__DisplayClass21_0_<SetAndVerifySelectionCallback>b__0__
                          );
      }
      FUN_0324fb4c(local_90,0xc,uVar1,0);
      puVar5 = local_b0;
      local_b0[0] = local_90[0];
      uStack_9c = uStack_7c;
    }
    else {
      if (param_1 != 2) goto LAB_0322d510;
      lVar4 = *(long *)Method_UnityEngine_UIElements_RectField_<>c_<DescribeFields>b__0_2__;
      if (*(int *)(lVar4 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
        lVar4 = *(long *)puVar3;
      }
      puVar2 = 
      Method_Oculus_Interaction_Body_Input_ReadOnlyBodyJointPoses_<GetEnumerator>d__2_System_Collections_IEnumerator_Reset__
      ;
      iVar8 = *(int *)(*(long *)(lVar4 + 0xb8) + 0x100);
      if (iVar8 != 1) {
        if (*(int *)(lVar4 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
          iVar8 = *(int *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x100);
        }
        puVar3 = 
        Method_Oculus_Interaction_Body_Input_ReadOnlyBodyJointPoses_<GetEnumerator>d__2_System_Collections_IEnumerator_Reset__
        ;
        lVar4 = *(long *)
                 Method_Oculus_Interaction_Body_Input_ReadOnlyBodyJointPoses_<GetEnumerator>d__2_System_Collections_IEnumerator_Reset__
        ;
        if (*(int *)(lVar4 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
          lVar4 = *(long *)puVar3;
        }
        lVar4 = *(long *)(lVar4 + 0xb8);
        if (iVar8 == 2) goto LAB_0322d390;
        uVar1 = *(undefined4 *)(lVar4 + 0x18);
        if (*(int *)(*(long *)StringLiteral_13603 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        uVar6 = FUN_0320c4d8(5,5,0xd,uVar1,&local_60,0);
        goto joined_r0x0322d4c0;
      }
      lVar4 = *(long *)
               Method_Oculus_Interaction_Body_Input_ReadOnlyBodyJointPoses_<GetEnumerator>d__2_System_Collections_IEnumerator_Reset__
      ;
      if (*(int *)(lVar4 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
        lVar4 = *(long *)puVar2;
      }
      uVar1 = *(undefined4 *)(*(long *)(lVar4 + 0xb8) + 0x18);
      if (*(int *)(*(long *)
                    Method_System_Net_Security_SslStream_<>c__DisplayClass21_0_<SetAndVerifySelectionCallback>b__0__
                  + 0xe0) == 0) {
        thunk_FUN_01ac7298(*(long *)
                            Method_System_Net_Security_SslStream_<>c__DisplayClass21_0_<SetAndVerifySelectionCallback>b__0__
                          );
      }
      FUN_0324fb4c(local_90,0xd,uVar1,0);
      puVar5 = local_f0;
      local_f0[0] = local_90[0];
      uStack_dc = uStack_7c;
    }
LAB_0322d2b8:
    FUN_03206228(local_90,puVar5,0);
  }
  else {
    if (param_1 == 0x20) {
      lVar4 = *(long *)Method_UnityEngine_UIElements_RectField_<>c_<DescribeFields>b__0_2__;
      if (*(int *)(lVar4 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
        lVar4 = *(long *)puVar3;
      }
      puVar2 = 
      Method_Oculus_Interaction_Body_Input_ReadOnlyBodyJointPoses_<GetEnumerator>d__2_System_Collections_IEnumerator_Reset__
      ;
      iVar8 = *(int *)(*(long *)(lVar4 + 0xb8) + 0x100);
      if (iVar8 == 1) {
        lVar4 = *(long *)
                 Method_Oculus_Interaction_Body_Input_ReadOnlyBodyJointPoses_<GetEnumerator>d__2_System_Collections_IEnumerator_Reset__
        ;
        if (*(int *)(lVar4 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
          lVar4 = *(long *)puVar2;
        }
        uVar1 = *(undefined4 *)(*(long *)(lVar4 + 0xb8) + 0x18);
        if (*(int *)(*(long *)
                      Method_System_Net_Security_SslStream_<>c__DisplayClass21_0_<SetAndVerifySelectionCallback>b__0__
                    + 0xe0) == 0) {
          thunk_FUN_01ac7298(*(long *)
                              Method_System_Net_Security_SslStream_<>c__DisplayClass21_0_<SetAndVerifySelectionCallback>b__0__
                            );
        }
        FUN_0324fb4c(local_90,3,uVar1,0);
        puVar5 = local_d0;
        local_d0[0] = local_90[0];
        uStack_bc = uStack_7c;
        goto LAB_0322d2b8;
      }
      if (*(int *)(lVar4 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
        iVar8 = *(int *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x100);
      }
      puVar3 = 
      Method_Oculus_Interaction_Body_Input_ReadOnlyBodyJointPoses_<GetEnumerator>d__2_System_Collections_IEnumerator_Reset__
      ;
      lVar4 = *(long *)
               Method_Oculus_Interaction_Body_Input_ReadOnlyBodyJointPoses_<GetEnumerator>d__2_System_Collections_IEnumerator_Reset__
      ;
      if (*(int *)(lVar4 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
        lVar4 = *(long *)puVar3;
      }
      lVar4 = *(long *)(lVar4 + 0xb8);
      if (iVar8 == 2) {
LAB_0322d470:
        if (*(long *)(lVar4 + 0x60) == 0) {
LAB_0322d560:
                    /* WARNING: Subroutine does not return */
          FUN_01b48178();
        }
        if (*(int *)(*(long *)(lVar4 + 0x60) + 0x18) != 0) {
          return;
        }
LAB_0322d564:
                    /* WARNING: Subroutine does not return */
        FUN_01b48180();
      }
      uVar1 = *(undefined4 *)(lVar4 + 0x18);
      if (*(int *)(*(long *)StringLiteral_13603 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar6 = FUN_0320c4d8(4,5,3,uVar1,&local_50,0);
joined_r0x0322d4c0:
      if ((uVar6 & 1) != 0) {
        return;
      }
    }
    else if (param_1 == 0x40) {
      lVar4 = *(long *)Method_UnityEngine_UIElements_RectField_<>c_<DescribeFields>b__0_2__;
      if (*(int *)(lVar4 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
        lVar4 = *(long *)puVar3;
      }
      puVar2 = 
      Method_Oculus_Interaction_Body_Input_ReadOnlyBodyJointPoses_<GetEnumerator>d__2_System_Collections_IEnumerator_Reset__
      ;
      iVar8 = *(int *)(*(long *)(lVar4 + 0xb8) + 0x100);
      if (iVar8 != 1) {
        if (*(int *)(lVar4 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
          iVar8 = *(int *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x100);
        }
        puVar3 = 
        Method_Oculus_Interaction_Body_Input_ReadOnlyBodyJointPoses_<GetEnumerator>d__2_System_Collections_IEnumerator_Reset__
        ;
        lVar4 = *(long *)
                 Method_Oculus_Interaction_Body_Input_ReadOnlyBodyJointPoses_<GetEnumerator>d__2_System_Collections_IEnumerator_Reset__
        ;
        if (*(int *)(lVar4 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
          lVar4 = *(long *)puVar3;
        }
        lVar4 = *(long *)(lVar4 + 0xb8);
        if (iVar8 == 2) {
LAB_0322d390:
          if (*(long *)(lVar4 + 0x60) == 0) goto LAB_0322d560;
          if (1 < *(uint *)(*(long *)(lVar4 + 0x60) + 0x18)) {
            return;
          }
          goto LAB_0322d564;
        }
        uVar1 = *(undefined4 *)(lVar4 + 0x18);
        if (*(int *)(*(long *)StringLiteral_13603 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        uVar6 = FUN_0320c4d8(5,5,4,uVar1,&local_70,0);
        goto joined_r0x0322d4c0;
      }
      lVar4 = *(long *)
               Method_Oculus_Interaction_Body_Input_ReadOnlyBodyJointPoses_<GetEnumerator>d__2_System_Collections_IEnumerator_Reset__
      ;
      if (*(int *)(lVar4 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
        lVar4 = *(long *)puVar2;
      }
      uVar1 = *(undefined4 *)(*(long *)(lVar4 + 0xb8) + 0x18);
      if (*(int *)(*(long *)
                    Method_System_Net_Security_SslStream_<>c__DisplayClass21_0_<SetAndVerifySelectionCallback>b__0__
                  + 0xe0) == 0) {
        thunk_FUN_01ac7298(*(long *)
                            Method_System_Net_Security_SslStream_<>c__DisplayClass21_0_<SetAndVerifySelectionCallback>b__0__
                          );
      }
      FUN_0324fb4c(local_90,4,uVar1,0);
      local_110[0] = local_90[0];
      uStack_fc = uStack_7c;
      goto LAB_0322d2b8;
    }
LAB_0322d510:
    if (DAT_03fed256 == '\0') {
      thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_2__);
      DAT_03fed256 = '\x01';
    }
    uVar7 = *(undefined8 *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_2__;
  }
  return;
}


