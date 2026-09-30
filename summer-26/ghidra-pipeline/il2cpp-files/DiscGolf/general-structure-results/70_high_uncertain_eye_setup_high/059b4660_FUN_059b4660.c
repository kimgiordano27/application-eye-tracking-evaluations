/*
FUNCTION_NAME: FUN_059b4660
ENTRY_POINT: 059b4660
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_1;functionality_eye_api_context_without_clear_sink_hits_4
*/


undefined1  [16] FUN_059b4660(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  ulong uVar4;
  undefined1 auVar5 [16];
  ulong local_40;
  undefined8 uStack_38;
  undefined8 local_28;
  
  puVar2 = OVRPlugin_OVRP_1_78_0_TypeInfo;
  puVar1 = PTR_DAT_06a0db58;
  if ((DAT_06dc14fa & 1) == 0) {
    FUN_02d965b8(OVRPlugin_OVRP_1_78_0_TypeInfo);
    FUN_02d965b8(OVRPlugin_OVRP_1_79_0_TypeInfo);
    FUN_02d965b8(System_Version_var);
                    /* try { // try from 059b46bc to 05ab46e7 has its CatchHandler @ 059b4870 */
    FUN_02d965b8(PTR_DAT_06a0de90);
    FUN_02d965b8(PTR_DAT_06a0db58);
    DAT_06dc14fa = 1;
  }
  local_28 = 0;
  auVar5 = FUN_0365dd9c(param_1,*(undefined8 *)puVar1,*(undefined8 *)puVar2);
  if ((auVar5._0_8_ & 0xff) == 0) {
    if (*(long *)(param_1 + 0x20) == 0) {
LAB_059b4784:
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    auVar5 = FUN_059b6ab4();
    if ((auVar5._0_8_ & 0xff) == 0) {
      plVar3 = *(long **)(param_1 + 0x20);
                    /* try { // try from 059b4724 to 05ab472f has its CatchHandler @ 059b485c */
      if (plVar3 == (long *)0x0) goto LAB_059b4784;
      uVar4 = (**(code **)(*plVar3 + 0x1a8))(plVar3,&local_28,*(undefined8 *)(*plVar3 + 0x1b0));
      if ((uVar4 & 1) == 0) {
        auVar5 = ZEXT816(0);
      }
      else {
                    /* try { // try from 059b473c to 05ab4747 has its CatchHandler @ 059b4860 */
                    /* try { // try from 059b4754 to 05ab4757 has its CatchHandler @ 059b486c */
                    /* try { // try from 059b4758 to 05ab47f3 has its CatchHandler @ 059b4338 */
        FUN_0365e944(param_1,*(undefined8 *)puVar1,local_28,0,
                     *(undefined8 *)OVRPlugin_OVRP_1_79_0_TypeInfo);
        local_40 = 0;
        uStack_38 = 0;
        FUN_04330568(&local_40,local_28,*(undefined8 *)System_Version_var);
        auVar5._8_8_ = uStack_38;
        auVar5._0_8_ = local_40;
      }
    }
  }
  return auVar5;
}


