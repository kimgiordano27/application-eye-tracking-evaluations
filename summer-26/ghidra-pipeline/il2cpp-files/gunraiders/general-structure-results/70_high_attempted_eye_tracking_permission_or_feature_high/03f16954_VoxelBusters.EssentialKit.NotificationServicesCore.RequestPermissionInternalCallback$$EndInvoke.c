/*
FUNCTION_NAME: VoxelBusters.EssentialKit.NotificationServicesCore.RequestPermissionInternalCallback$$EndInvoke
ENTRY_POINT: 03f16954
PROGRAM: gunraiders-libil2cpp.so
SCORE: 89
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: attempted_eye_tracking_use
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry;attempted_use
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_9;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;attempted_eye_tracking_permission_or_feature_enable;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


/* WARNING: Removing unreachable block (ram,0x03f16a08) */
/* WARNING: Removing unreachable block (ram,0x03f16a50) */
/* WARNING: Removing unreachable block (ram,0x03f169f0) */

void VoxelBusters_EssentialKit_NotificationServicesCore_RequestPermissionInternalCallback__EndInvoke
               (void)

{
  bool in_ZR;
  long *plVar1;
  int unaff_w20;
  long lVar2;
  long lVar3;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  int iStack0000000000000018;
  int iStack000000000000001c;
  undefined8 in_stack_00000038;
  
  if (in_ZR) {
    plVar1 = (long *)__cxa_begin_catch();
    lVar3 = *plVar1;
    __cxa_end_catch();
    if (iStack0000000000000018 != 0) {
      in_stack_00000038 = in_stack_00000010;
      VoxelBusters_EssentialKit_MediaServicesCore_Android_Converter__from(&stack0x00000038,0);
    }
    lVar2 = 0;
    if (lVar3 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01c01e80(lVar3);
    }
  }
  else {
    if (iStack0000000000000018 != 0) {
      in_stack_00000038 = in_stack_00000010;
                    /* try { // try from 03f16984 to 0401698b has its CatchHandler @ 03f169f8 */
      VoxelBusters_EssentialKit_MediaServicesCore_Android_Converter__from(&stack0x00000038,0);
    }
    if (unaff_w20 != 1) {
      if (iStack000000000000001c != 0) {
        in_stack_00000038 = in_stack_00000008;
        VoxelBusters_EssentialKit_MediaServicesCore_Android_Converter__from(&stack0x00000038,0);
      }
      if (unaff_w20 != 1) {
                    /* catch() { ... } // from try @ 03f16a14 with catch @ 03f16a24 */
        if (*(int *)(*(long *)Newtonsoft_Json_JsonSerializationException_TypeInfo + 0xe0) == 0) {
                    /* try { // try from 03f16a34 to 04016a43 has its CatchHandler @ 03f16a58 */
          thunk_FUN_01c1d1e8();
        }
        FUN_03e3c18c();
                    /* try { // try from 03f16a44 to 04016a4f has its CatchHandler @ 03f1686c */
                    /* WARNING: Subroutine does not return */
        FUN_01cf64e4();
      }
      plVar1 = (long *)__cxa_begin_catch();
                    /* try { // try from 03f169e4 to 040169eb has its CatchHandler @ 03f169fc */
      lVar2 = *plVar1;
      __cxa_end_catch();
                    /* try { // try from 03f169ec to 04016a13 has its CatchHandler @ 03f1686c */
      goto LAB_03f16728;
    }
                    /* try { // try from 03f169a0 to 040169ab has its CatchHandler @ 03f169f4 */
    plVar1 = (long *)__cxa_begin_catch();
    lVar2 = *plVar1;
    __cxa_end_catch();
                    /* try { // try from 03f169ac to 040169e3 has its CatchHandler @ 03f1686c */
  }
  if (iStack000000000000001c != 0) {
    in_stack_00000038 = in_stack_00000008;
    VoxelBusters_EssentialKit_MediaServicesCore_Android_Converter__from(&stack0x00000038,0);
  }
  if (lVar2 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01c01e80(lVar2);
  }
  lVar2 = 0;
LAB_03f16728:
  if (*(int *)(*(long *)Newtonsoft_Json_JsonSerializationException_TypeInfo + 0xe0) == 0) {
    thunk_FUN_01c1d1e8();
  }
  FUN_03e3c18c();
  if (lVar2 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01c01e80(lVar2);
  }
  return;
}


