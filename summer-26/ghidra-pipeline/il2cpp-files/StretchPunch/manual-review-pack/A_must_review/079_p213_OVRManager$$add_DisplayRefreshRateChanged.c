/*
FUNCTION_NAME: OVRManager$$add_DisplayRefreshRateChanged
ENTRY_POINT: 033a66d0
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 110
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_4;validity_or_gating_hits_4;telemetry_or_network_hits_1;functionality_data_collection_or_telemetry_hits_1
*/


int OVRManager__add_DisplayRefreshRateChanged
              (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined2 uVar1;
  undefined *puVar2;
  int iVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  long unaff_x19;
  long unaff_x20;
  long unaff_x23;
  int unaff_w25;
  long unaff_x26;
  long in_stack_00000028;
  
  while (uVar4 = OVRPlugin_UnityOpenXR__OnSessionStateChange(param_1,param_2,param_3),
        (uVar4 & 1) == 0) {
    unaff_x23 = FUN_033dc904(unaff_x23,4,0);
    uVar4 = FUN_033dc8f8();
    uVar5 = FUN_033dc904(unaff_x23,4,0);
    uVar6 = FUN_033dc8f8(uVar5,0);
    if (uVar4 < uVar6) break;
    param_1 = *(undefined8 *)(unaff_x20 + unaff_x23 * 2);
    param_2 = *(undefined8 *)(unaff_x19 + unaff_x23 * 2);
    param_3 = 0;
  }
  uVar4 = FUN_033dc8f8();
  uVar5 = FUN_033dc904(unaff_x23,2,0);
  uVar6 = FUN_033dc8f8(uVar5,0);
  if ((uVar6 <= uVar4) &&
     (*(int *)(unaff_x20 + unaff_x23 * 2) == *(int *)(unaff_x19 + unaff_x23 * 2))) {
    unaff_x23 = FUN_033dc904(unaff_x23,2,0);
  }
  uVar4 = FUN_033dc8f8(unaff_x23,0);
  uVar6 = FUN_033dc8f8();
  puVar2 = StringLiteral_1167;
  iVar3 = unaff_w25;
  if (uVar4 < uVar6) {
    do {
      uVar1 = *(undefined2 *)(unaff_x19 + unaff_x23 * 2);
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_01dc4f30();
      }
      iVar3 = FUN_032931ec(unaff_x20 + unaff_x23 * 2,uVar1,0);
      if (iVar3 != 0) break;
      unaff_x23 = FUN_033dc904(unaff_x23,1,0);
      uVar4 = FUN_033dc8f8(unaff_x23,0);
      uVar6 = FUN_033dc8f8();
      iVar3 = unaff_w25;
    } while (uVar4 < uVar6);
  }
  if (*(long *)(unaff_x26 + 0x28) == in_stack_00000028) {
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


