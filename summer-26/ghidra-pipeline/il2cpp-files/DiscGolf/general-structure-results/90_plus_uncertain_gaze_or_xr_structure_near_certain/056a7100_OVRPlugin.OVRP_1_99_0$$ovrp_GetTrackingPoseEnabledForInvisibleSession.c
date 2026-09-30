/*
FUNCTION_NAME: OVRPlugin.OVRP_1_99_0$$ovrp_GetTrackingPoseEnabledForInvisibleSession
ENTRY_POINT: 056a7100
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 106
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_7;validity_or_gating_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


bool OVRPlugin_OVRP_1_99_0__ovrp_GetTrackingPoseEnabledForInvisibleSession(ulong param_1)

{
  int iVar1;
  bool bVar2;
  long unaff_x19;
  long unaff_x20;
  long *plVar3;
  long unaff_x21;
  undefined1 auVar4 [16];
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  
  if ((param_1 & 1) == 0) {
    FUN_02d965b8(PTR_DAT_06a0d468);
    FUN_02d965b8(System_Collections_Generic_IEnumerable<ServicePoint>_TypeInfo);
    FUN_02d965b8(TMPro_TMP_ListPool<Canvas>_TypeInfo);
    *(undefined1 *)(unaff_x20 + 0xa51) = 1;
  }
  in_stack_00000090 = 0;
  plVar3 = (long *)(unaff_x21 + 0x40);
  in_stack_00000018 = 0;
  in_stack_00000020 = 0;
  in_stack_00000028 = 0;
  in_stack_00000038 = 0;
  in_stack_00000030 = 0;
  in_stack_00000048 = 0;
  in_stack_00000040 = 0;
  in_stack_00000058 = 0;
  in_stack_00000050 = 0;
  in_stack_00000068 = 0;
  in_stack_00000060 = 0;
  in_stack_00000078 = 0;
  in_stack_00000070 = 0;
  in_stack_00000088 = 0;
  in_stack_00000080 = 0;
  if (*plVar3 == 0) {
    FUN_056a7270(&stack0x00000030);
    FUN_056a9f68(&stack0x00000018);
    auVar4 = OVRPlugin_<>c__<_cctor>b__807_26(&stack0x00000018,0);
    if (*(int *)(*(long *)PTR_DAT_06a0d468 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    iVar1 = FUN_056a45ec(auVar4._0_8_,auVar4._8_8_,&stack0x00000030,0);
    thunk_FUN_056a9c0c(&stack0x00000018,0);
    bVar2 = iVar1 == 0;
    if (bVar2) {
      *plVar3 = unaff_x19;
      LeanTween__value(plVar3);
    }
    FUN_056a7614(&stack0x00000030);
  }
  else {
    bVar2 = false;
  }
  return bVar2;
}


