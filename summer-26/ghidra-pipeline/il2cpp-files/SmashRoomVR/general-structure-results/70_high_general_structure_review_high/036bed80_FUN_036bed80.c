/*
FUNCTION_NAME: FUN_036bed80
ENTRY_POINT: 036bed80
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 84
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_13;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_3
*/


void FUN_036bed80(undefined1 param_1 [16],undefined1 param_2 [16],float param_3,float param_4,
                 long *param_5)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  float fVar5;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  
  if ((DAT_03ff74ff & 1) == 0) {
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    DAT_03ff74ff = 1;
  }
  lVar2 = FUN_0391c2b8(param_5,0);
  if (lVar2 != 0) {
    uVar3 = FUN_0391fbf0(lVar2,0);
    puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
    if ((uVar3 & 1) == 0) {
      return;
    }
    lVar2 = param_5[0xe5];
    if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar3 = FUN_0391f968(lVar2,0,0);
    if ((uVar3 & 1) != 0) {
      if (param_5[0xe5] == 0) goto LAB_036bef4c;
      fVar8 = *(float *)(param_5 + 0xe6);
      fVar5 = (float)FUN_03afa7e4(param_5[0xe5],0);
      if (fVar8 != fVar5) {
        if (param_5[0xe5] == 0) goto LAB_036bef4c;
        uVar6 = FUN_03afa7e4(param_5[0xe5],0);
        *(undefined4 *)(param_5 + 0xe6) = uVar6;
        goto LAB_036beefc;
      }
    }
    uVar4 = FUN_036dff78(param_5,0);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01ac7298(*(long *)puVar1);
    }
    uVar3 = FUN_0391f968(uVar4,0,0);
    if ((uVar3 & 1) != 0) {
      if (param_5[0x70] == 0) goto LAB_036bef4c;
      UnityEngine_UIElements_StyleSheets_StylePropertyReader_GetCursorIdFunction___ctor
                (param_5[0x70],0);
      fVar5 = DAT_00b55080;
      if (ABS(param_3 - *(float *)(param_5 + 0x71)) < DAT_00b55080) {
        if (param_5[0x70] == 0) goto LAB_036bef4c;
        UnityEngine_UIElements_StyleSheets_StylePropertyReader_GetCursorIdFunction___ctor
                  (param_5[0x70],0);
        if (ABS(param_4 - *(float *)((long)param_5 + 0x38c)) < fVar5) {
          if (param_5[0x70] == 0) goto LAB_036bef4c;
          fVar8 = (float)FUN_03928134(param_5[0x70],0);
          fVar7 = *(float *)(param_5 + 0x72);
          if (ABS(fVar8 - fVar7) < fVar5) {
            if (param_5[0x70] == 0) goto LAB_036bef4c;
            FUN_03928134(param_5[0x70],0);
            if (ABS(fVar7 - *(float *)((long)param_5 + 0x394)) < fVar5) {
              return;
            }
          }
        }
      }
    }
LAB_036beefc:
    (**(code **)(*param_5 + 0x8a8))(param_5,*(undefined8 *)(*param_5 + 0x8b0));
    FUN_036b8f84(param_5);
    (**(code **)(*param_5 + 0x2f8))(param_5,*(undefined8 *)(*param_5 + 0x300));
                    /* WARNING: Could not recover jumptable at 0x036bef48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_5 + 0x2e8))(param_5,*(undefined8 *)(*param_5 + 0x2f0));
    return;
  }
LAB_036bef4c:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


