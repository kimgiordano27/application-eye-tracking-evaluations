/*
FUNCTION_NAME: VoxelBusters.EssentialKit.NotificationServicesCore.RequestPermissionInternalCallback$$BeginInvoke
ENTRY_POINT: 03f168c0
PROGRAM: gunraiders-libil2cpp.so
SCORE: 89
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: attempted_eye_tracking_use
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry;attempted_use
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_6;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;attempted_eye_tracking_permission_or_feature_enable;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


/* WARNING: Removing unreachable block (ram,0x03f16780) */
/* WARNING: Removing unreachable block (ram,0x03f166c0) */
/* WARNING: Removing unreachable block (ram,0x03f1678c) */
/* WARNING: Removing unreachable block (ram,0x03f167ac) */
/* WARNING: Removing unreachable block (ram,0x03f16794) */

void VoxelBusters_EssentialKit_NotificationServicesCore_RequestPermissionInternalCallback__BeginInvoke
               (void)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  undefined8 *unaff_x27;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  int iStack0000000000000018;
  int iStack000000000000001c;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  long in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  long in_stack_00000050;
  
  plVar2 = (long *)__cxa_begin_catch();
  lVar3 = *plVar2;
  __cxa_end_catch();
  FUN_029fd610(&stack0x00000060,*(undefined8 *)StringLiteral_12005);
  if (lVar3 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01c01e80(lVar3);
  }
  FUN_02d50a3c(&stack0x00000020);
  in_stack_00000048 = in_stack_00000028;
  in_stack_00000040 = in_stack_00000020;
  in_stack_00000050 = in_stack_00000030;
  while( true ) {
    uVar1 = FUN_029fd614(&stack0x00000040,*unaff_x27);
    if ((uVar1 & 1) == 0) {
      FUN_029fd610(&stack0x00000040,*(undefined8 *)StringLiteral_12005);
      if (iStack0000000000000018 != 0) {
        in_stack_00000038 = in_stack_00000010;
        VoxelBusters_EssentialKit_MediaServicesCore_Android_Converter__from(&stack0x00000038,0);
      }
      if (iStack000000000000001c != 0) {
        in_stack_00000038 = in_stack_00000008;
        VoxelBusters_EssentialKit_MediaServicesCore_Android_Converter__from(&stack0x00000038,0);
      }
      if (*(int *)(*(long *)Newtonsoft_Json_JsonSerializationException_TypeInfo + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      FUN_03e3c18c();
      return;
    }
    if (in_stack_00000050 == 0) break;
    FUN_03f16d88();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4a4();
}


