/*
FUNCTION_NAME: FUN_036b75c4
ENTRY_POINT: 036b75c4
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_8;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2
*/


void FUN_036b75c4(undefined1 param_1 [16],undefined1 param_2 [16],float param_3,float param_4,
                 long *param_5)

{
  float fVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  float fVar5;
  float fVar6;
  
  puVar2 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
  if ((DAT_03ff74c7 & 1) == 0) {
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    DAT_03ff74c7 = 1;
  }
  uVar3 = FUN_036dff78(param_5,0);
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01ac7298(*(long *)puVar2);
  }
  uVar4 = FUN_0391f968(uVar3,0,0);
  if ((uVar4 & 1) != 0) {
    if (param_5[0x70] == 0) {
LAB_036b7714:
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    UnityEngine_UIElements_StyleSheets_StylePropertyReader_GetCursorIdFunction___ctor
              (param_5[0x70],0);
    fVar1 = DAT_00b55080;
    if (ABS(param_3 - *(float *)(param_5 + 0x71)) < DAT_00b55080) {
      if (param_5[0x70] == 0) goto LAB_036b7714;
      UnityEngine_UIElements_StyleSheets_StylePropertyReader_GetCursorIdFunction___ctor
                (param_5[0x70],0);
      if (ABS(param_4 - *(float *)((long)param_5 + 0x38c)) < fVar1) {
        if (param_5[0x70] == 0) goto LAB_036b7714;
        fVar5 = (float)FUN_03928134(param_5[0x70],0);
        fVar6 = *(float *)(param_5 + 0x72);
        if (ABS(fVar5 - fVar6) < fVar1) {
          if (param_5[0x70] == 0) goto LAB_036b7714;
          FUN_03928134(param_5[0x70],0);
          if (ABS(fVar6 - *(float *)((long)param_5 + 0x394)) < fVar1) {
            return;
          }
        }
      }
    }
  }
  (**(code **)(*param_5 + 0x8a8))(param_5,*(undefined8 *)(*param_5 + 0x8b0));
  (**(code **)(*param_5 + 0x2f8))(param_5,*(undefined8 *)(*param_5 + 0x300));
                    /* WARNING: Could not recover jumptable at 0x036b7700. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_5 + 0x2e8))(param_5,*(undefined8 *)(*param_5 + 0x2f0));
  return;
}


