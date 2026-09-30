/*
FUNCTION_NAME: FUN_01bf8270
ENTRY_POINT: 01bf8270
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_15;validity_or_gating_hits_20;telemetry_or_network_hits_6
*/


void FUN_01bf8270(undefined1 param_1 [16],undefined8 param_2,ulong param_3,ulong param_4,
                 long param_5)

{
  undefined4 uVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  uint *puVar5;
  undefined8 uVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  ulong uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  
  if ((DAT_03fed324 & 1) == 0) {
    thunk_FUN_01ad9084(
                      Method_Meta_WitAi_TTS_Integrations_TTSDiskCache_<>c__DisplayClass15_0_<StreamFromDiskCache>b__1__
                      );
    thunk_FUN_01ad9084(
                      Method_Oculus_Interaction_Body_Input_ReadOnlyBodyJointPoses_<GetEnumerator>d__2_System_Collections_IEnumerator_Reset__
                      );
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_0__);
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    DAT_03fed324 = 1;
  }
  puVar2 = 
  Method_Oculus_Interaction_Body_Input_ReadOnlyBodyJointPoses_<GetEnumerator>d__2_System_Collections_IEnumerator_Reset__
  ;
  if (*(char *)(param_5 + 0x48) == '\0') {
    uVar1 = *(undefined4 *)(param_5 + 0x30);
    if (*(int *)(*(long *)
                  Method_Oculus_Interaction_Body_Input_ReadOnlyBodyJointPoses_<GetEnumerator>d__2_System_Collections_IEnumerator_Reset__
                + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar3 = FUN_0322e1d4(uVar1,0x80000000,0);
    if ((uVar3 & 1) == 0) {
      if (*(char *)(param_5 + 0x48) == '\0') {
        return;
      }
    }
    else {
      if (*(long *)(param_5 + 0x28) == 0) goto LAB_01bf857c;
      uVar6 = *(undefined8 *)(param_5 + 0x38);
      lVar4 = FUN_0391fab4(*(long *)(param_5 + 0x28),0);
      if (lVar4 == 0) goto LAB_01bf857c;
      uVar8 = FUN_03928d34(lVar4,0);
      if (DAT_03fed256 == '\0') {
        thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_2__);
        DAT_03fed256 = '\x01';
      }
      puVar5 = *(uint **)(*(long *)
                           Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_2__ +
                         0xb8);
      param_4 = (ulong)*puVar5;
      uVar15 = puVar5[1];
      uVar14 = puVar5[2];
      uVar13 = puVar5[3];
      if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                  0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      lVar4 = FUN_01f259b0(uVar8,param_2,param_3,param_4,uVar15,uVar14,uVar13,uVar6,
                           *(undefined8 *)
                            Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_0__);
      plVar7 = (long *)(param_5 + 0x40);
      *plVar7 = lVar4;
      thunk_FUN_01b4f09c(plVar7,lVar4);
      if (*plVar7 == 0) goto LAB_01bf857c;
      lVar4 = FUN_0391fab4(*plVar7,0);
      if ((*(long *)(param_5 + 0x28) == 0) ||
         (uVar6 = FUN_0391fab4(*(long *)(param_5 + 0x28),0), lVar4 == 0)) goto LAB_01bf857c;
      FUN_039294c8(lVar4,uVar6,0);
      *(undefined1 *)(param_5 + 0x48) = 1;
    }
  }
  uVar1 = *(undefined4 *)(param_5 + 0x30);
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar3 = FUN_0322e404(uVar1,0x80000000,0);
  if ((uVar3 & 1) == 0) {
    return;
  }
  if ((*(long *)(param_5 + 0x40) != 0) &&
     (lVar4 = FUN_0391fab4(*(long *)(param_5 + 0x40),0), lVar4 != 0)) {
    FUN_039294c8(lVar4,0,0);
    if ((*(long *)(param_5 + 0x40) != 0) &&
       (lVar4 = FUN_0391fab4(*(long *)(param_5 + 0x40),0), lVar4 != 0)) {
      uVar6 = FUN_03928d34(lVar4,0);
      if (*(long *)(param_5 + 0x20) != 0) {
        uVar8 = param_2;
        uVar3 = param_3;
        uVar9 = FUN_039274a0(*(long *)(param_5 + 0x20),0);
        uVar11 = uVar8;
        uVar12 = uVar3;
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        uVar10 = FUN_0322cafc(2,0);
        uVar11 = FUN_03914a7c(uVar9,uVar8,uVar3,param_4,uVar10,uVar11,uVar12,0);
        FUN_0322d568(2,0);
        if ((*(long *)(param_5 + 0x40) != 0) &&
           (lVar4 = FUN_01ed712c(*(long *)(param_5 + 0x40),
                                 *(undefined8 *)
                                  Method_Meta_WitAi_TTS_Integrations_TTSDiskCache_<>c__DisplayClass15_0_<StreamFromDiskCache>b__1__
                                ), lVar4 != 0)) {
          FUN_01bf7fe0(uVar6,param_2,param_3 & 0xffffffff,uVar11,uVar8,uVar3);
          *(undefined1 *)(param_5 + 0x48) = 0;
          return;
        }
      }
    }
  }
LAB_01bf857c:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


