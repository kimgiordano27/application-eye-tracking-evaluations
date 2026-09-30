/*
FUNCTION_NAME: UnityEngine.XR.OpenXR.OpenXRSettings$$Internal_HasRequestedEyeTrackingPermissions
ENTRY_POINT: 03f1e53c
PROGRAM: Gorillavs100Men-libil2cpp.so
SCORE: 105
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: permission_setup;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_9;ray_or_cast_sink_hits_1;telemetry_or_network_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_permission_setup;functionality_data_collection_or_telemetry_hits_2
*/


long UnityEngine_XR_OpenXR_OpenXRSettings__Internal_HasRequestedEyeTrackingPermissions
               (long param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long *plVar7;
  long lVar8;
  
  puVar1 = StringLiteral_8731;
  if ((DAT_04922b10 & 1) == 0) {
    FUN_020612a4(StringLiteral_8880);
    FUN_020612a4(StringLiteral_8766);
    FUN_020612a4(PTR_DAT_046bf338);
    FUN_020612a4(StringLiteral_8731);
    FUN_020612a4(PTR_DAT_046bf340);
    FUN_020612a4(PTR_DAT_046bf348);
    DAT_04922b10 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_020b5864();
  }
  uVar2 = FUN_040cbf6c(param_2,0,0);
  if ((uVar2 & 1) != 0) {
    thunk_FUN_020be230(StringLiteral_10199);
    uVar6 = thunk_FUN_02094760();
    uVar5 = thunk_FUN_020be230(PTR_DAT_046bf350);
    FUN_03743f54(uVar6,uVar5,0);
    uVar5 = thunk_FUN_020be230(PTR_DAT_046bf358);
                    /* WARNING: Subroutine does not return */
    FUN_02061410(uVar6,uVar5);
  }
  plVar7 = (long *)(param_1 + 0x10);
  lVar8 = *plVar7;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_020b5864();
  }
  uVar2 = FUN_040ca3b8(lVar8,0,0);
  if ((uVar2 & 1) == 0) {
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_020b5864();
    }
    lVar8 = FUN_024f75b4(param_2,param_3,0,*(undefined8 *)PTR_DAT_046bf338);
    *plVar7 = lVar8;
    thunk_FUN_020ccb58(plVar7,lVar8);
    if (param_2 != 0) {
      lVar8 = *plVar7;
      uVar6 = thunk_FUN_040cfa2c(param_2,0);
      uVar6 = FUN_0372b580(uVar6,*(undefined8 *)PTR_DAT_046bf348,0);
      if (lVar8 != 0) {
        thunk_FUN_040cfb74(lVar8,uVar6,0);
        if (*plVar7 != 0) {
          FUN_040ca85c(*plVar7,0,0);
          FUN_03f1e7ec(*plVar7);
LAB_03f1e774:
          return *plVar7;
        }
      }
    }
  }
  else {
    plVar3 = (long *)RootMotion_Dynamics_Muscle__get_colliders(*(undefined8 *)StringLiteral_8766,2);
    if ((param_2 != 0) && (lVar8 = thunk_FUN_040cfa2c(param_2,0), plVar3 != (long *)0x0)) {
      if ((lVar8 != 0) &&
         (lVar4 = thunk_FUN_02094664(lVar8,*(undefined8 *)(*plVar3 + 0x40)), lVar4 == 0)) {
LAB_03f1e7d8:
        uVar6 = thunk_FUN_020a1c44();
                    /* WARNING: Subroutine does not return */
        FUN_02061410(uVar6,0);
      }
      if ((int)plVar3[3] != 0) {
        plVar3[4] = lVar8;
        thunk_FUN_020ccb58(plVar3 + 4,lVar8);
        if (*plVar7 == 0) goto LAB_03f1e788;
        lVar8 = thunk_FUN_040cfa2c(*plVar7,0);
        if ((lVar8 != 0) &&
           (lVar4 = thunk_FUN_02094664(lVar8,*(undefined8 *)(*plVar3 + 0x40)), lVar4 == 0))
        goto LAB_03f1e7d8;
        if ((*(uint *)(plVar3 + 3) & 0xfffffffe) != 0) {
          plVar3[5] = lVar8;
          thunk_FUN_020ccb58(plVar3 + 5,lVar8);
          if (*(int *)(*(long *)StringLiteral_8880 + 0xe4) == 0) {
            thunk_FUN_020b5864();
          }
          FUN_0408cf44(*(undefined8 *)PTR_DAT_046bf340,plVar3,0);
          goto LAB_03f1e774;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_02061554();
    }
  }
LAB_03f1e788:
                    /* WARNING: Subroutine does not return */
  FUN_0206154c();
}


