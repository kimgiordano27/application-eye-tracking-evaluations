/*
FUNCTION_NAME: FUN_01bdb0cc
ENTRY_POINT: 01bdb0cc
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_10;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2
*/


void FUN_01bdb0cc(undefined1 param_1 [16],float param_2,float param_3,long param_4)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  puVar1 = 
  Method_System_Net_Security_SslStream_<>c__DisplayClass21_0_<SetAndVerifySelectionCallback>b__0__;
  if ((DAT_03fed28a & 1) == 0) {
    thunk_FUN_01ad9084(
                      Method_System_Net_Security_SslStream_<>c__DisplayClass21_0_<SetAndVerifySelectionCallback>b__0__
                      );
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    DAT_03fed28a = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar2 = FUN_03258158(0);
  lVar3 = *(long *)(param_4 + 0x28);
  if (lVar3 != 0) {
    if ((uVar2 & 1) != 0) {
      FUN_0391fb70(lVar3,0,0);
      return;
    }
    FUN_0391fb70(lVar3,1,0);
    uVar4 = *(undefined8 *)(param_4 + 0x38);
    if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar2 = FUN_03923030(uVar4,0);
    if ((uVar2 & 1) == 0) {
      return;
    }
    if (*(long *)(param_4 + 0x28) != 0) {
      lVar3 = FUN_0391fab4(*(long *)(param_4 + 0x28),0);
      if (*(long *)(param_4 + 0x38) != 0) {
        fVar5 = (float)FUN_03928d34(*(long *)(param_4 + 0x38),0);
        if ((*(long *)(param_4 + 0x38) != 0) &&
           (fVar7 = param_2, fVar8 = param_3,
           fVar6 = (float)FUN_039291ac(*(long *)(param_4 + 0x38),0), lVar3 != 0)) {
          FUN_03928dd4(fVar5 + fVar6 * 0.5,param_2 + fVar7 * 0.5,param_3 + fVar8 * 0.5,lVar3,0);
          if (*(long *)(param_4 + 0x28) != 0) {
            lVar3 = FUN_0391fab4(*(long *)(param_4 + 0x28),0);
            if ((*(long *)(param_4 + 0x38) != 0) &&
               (FUN_039274a0(*(long *)(param_4 + 0x38),0), lVar3 != 0)) {
              FUN_03928f54(lVar3,0);
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


