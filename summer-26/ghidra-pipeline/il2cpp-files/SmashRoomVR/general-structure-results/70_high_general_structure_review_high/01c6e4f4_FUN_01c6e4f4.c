/*
FUNCTION_NAME: FUN_01c6e4f4
ENTRY_POINT: 01c6e4f4
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_14;telemetry_or_network_hits_3;frame_or_lifecycle_behavior
*/


void FUN_01c6e4f4(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  if ((DAT_03fed724 & 1) == 0) {
                    /* try { // try from 01c6e514 to 01d6e573 has its CatchHandler @ 01c6e1e8 */
    thunk_FUN_01ad9084(
                      Method_OVRRuntimeController_<UpdateControllerModel>d__16_System_Collections_IEnumerator_Reset__
                      );
    thunk_FUN_01ad9084(
                      Method_Oculus_Interaction_PoseDetection_TransformFeatureConfigBuilder_<>c_<_cctor>b__29_8__
                      );
                    /* catch() { ... } // from try @ 01c6e24c with catch @ 01c6e52c */
                    /* catch() { ... } // from try @ 01c6e438 with catch @ 01c6e530 */
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
                    /* catch() { ... } // from try @ 01c6e334 with catch @ 01c6e534 */
                    /* catch() { ... } // from try @ 01c6e2d0 with catch @ 01c6e538
                       catch() { ... } // from try @ 01c6e398 with catch @ 01c6e538 */
    DAT_03fed724 = 1;
  }
  if (*(char *)(param_1 + 0x21) != '\0') {
    if (*(int *)(*(long *)
                  Method_OVRRuntimeController_<UpdateControllerModel>d__16_System_Collections_IEnumerator_Reset__
                + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar2 = FUN_038f032c(0);
    if ((uVar2 & 1) == 0) {
      return;
    }
  }
  puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
  if (*(char *)(param_1 + 0x31) != '\0') {
                    /* try { // try from 01c6e57c to 01d6e5df has its CatchHandler @ 01c6e57c
                       catch() { ... } // from try @ 01c6e57c with catch @ 01c6e57c
                       catch() { ... } // from try @ 01c6e8a8 with catch @ 01c6e57c */
    uVar5 = *(undefined8 *)(param_1 + 0x38);
    if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar2 = FUN_0391f968(uVar5,0,0);
    if ((uVar2 & 1) == 0) {
LAB_01c6e5f0:
      uVar5 = *(undefined8 *)(param_1 + 0x40);
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar2 = FUN_0391f968(uVar5,0,0);
      if ((uVar2 & 1) != 0) {
        if ((*(long *)(param_1 + 0x40) == 0) ||
           (lVar3 = FUN_03452478(*(long *)(param_1 + 0x40),0), lVar3 == 0)) goto LAB_01c6e770;
        fVar6 = (float)FUN_01ee1390(lVar3,*(undefined8 *)
                                           Method_Oculus_Interaction_PoseDetection_TransformFeatureConfigBuilder_<>c_<_cctor>b__29_8__
                                   );
        if (fVar6 == 1.0) {
          lVar3 = *(long *)(param_1 + 0xd0);
          if (lVar3 == 0) goto LAB_01c6e770;
          fVar9 = *(float *)(lVar3 + 100);
          fVar7 = (float)FUN_03925cf4(0);
          fVar8 = *(float *)(param_1 + 0x48);
          fVar6 = *(float *)(param_1 + 0x4c);
          fVar9 = fVar9 - fVar7;
          goto LAB_01c6e664;
        }
      }
    }
    else {
      if ((*(long *)(param_1 + 0x38) == 0) ||
         (lVar3 = FUN_03452478(*(long *)(param_1 + 0x38),0), lVar3 == 0)) goto LAB_01c6e770;
      fVar6 = (float)FUN_01ee1390(lVar3,*(undefined8 *)
                                         Method_Oculus_Interaction_PoseDetection_TransformFeatureConfigBuilder_<>c_<_cctor>b__29_8__
                                 );
      if (fVar6 != 1.0) goto LAB_01c6e5f0;
      lVar3 = *(long *)(param_1 + 0xd0);
      if (lVar3 == 0) goto LAB_01c6e770;
      fVar9 = *(float *)(lVar3 + 100);
                    /* try { // try from 01c6e5e0 to 01d6e5f3 has its CatchHandler @ 01c6e8c0 */
      fVar7 = (float)FUN_03925cf4(0);
      fVar8 = *(float *)(param_1 + 0x48);
      fVar6 = *(float *)(param_1 + 0x4c);
      fVar9 = fVar9 + fVar7;
LAB_01c6e664:
      if (fVar9 <= fVar6) {
        fVar6 = fVar9;
      }
      if (fVar9 < fVar8) {
        fVar6 = fVar8;
      }
      *(float *)(lVar3 + 100) = fVar6;
    }
  }
  if (*(char *)(param_1 + 0x30) != '\0') {
    uVar5 = *(undefined8 *)(param_1 + 0xe0);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar2 = FUN_0391f968(uVar5,0,0);
    if ((uVar2 & 1) != 0) {
      lVar3 = *(long *)(param_1 + 0xe0);
      if (lVar3 == 0) goto LAB_01c6e770;
      if (*(char *)(lVar3 + 0xaa) == '\0') {
        *(undefined1 *)(lVar3 + 0xaa) = 1;
      }
    }
  }
  uVar5 = *(undefined8 *)(param_1 + 0xd8);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar2 = FUN_0391f968(uVar5,0,0);
  if ((uVar2 & 1) == 0) {
    return;
  }
  if (*(long *)(param_1 + 0xd8) != 0) {
    uVar2 = FUN_0391b750(*(long *)(param_1 + 0xd8),0);
    if ((uVar2 & 1) != 0) {
      return;
    }
    plVar4 = *(long **)(param_1 + 0xd8);
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 0x198))(plVar4,*(undefined8 *)(*plVar4 + 0x1a0));
      plVar4 = *(long **)(param_1 + 0xd8);
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x1a8))(plVar4,*(undefined8 *)(*plVar4 + 0x1b0));
        plVar4 = *(long **)(param_1 + 0xd8);
        if (plVar4 != (long *)0x0) {
          if ((int)plVar4[4] == 1) {
            UNRECOVERED_JUMPTABLE = *(code **)(*plVar4 + 0x1f8);
            uVar5 = *(undefined8 *)(*plVar4 + 0x200);
          }
          else {
            if ((int)plVar4[4] != 0) {
              return;
            }
            UNRECOVERED_JUMPTABLE = *(code **)(*plVar4 + 0x1d8);
            uVar5 = *(undefined8 *)(*plVar4 + 0x1e0);
          }
                    /* WARNING: Could not recover jumptable at 0x01c6e76c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)(plVar4,uVar5);
          return;
        }
      }
    }
  }
LAB_01c6e770:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


