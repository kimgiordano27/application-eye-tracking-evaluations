/*
FUNCTION_NAME: FUN_058885c8
ENTRY_POINT: 058885c8
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 85
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_8;ray_or_cast_sink_hits_2;telemetry_or_network_hits_4;frame_or_lifecycle_behavior
*/


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_058885c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined8 local_50;
  undefined8 uStack_48;
  long local_38;
  
  puVar1 = Unity_VisualScripting_FullSerializer_fsSerializer_TypeInfo;
                    /* try { // try from 058885d8 to 059885df has its CatchHandler @ 05888910 */
  if ((DAT_06b80836 & 1) == 0) {
    FUN_02d6084c(PTR_DAT_067683e8);
                    /* try { // try from 05888614 to 0598861b has its CatchHandler @ 058888e8 */
    FUN_02d6084c(Unity_VisualScripting_FullSerializer_fsSerializer_TypeInfo);
    FUN_02d6084c(
                UnityEngine_XR_Interaction_Toolkit_Utilities_BurstPhysicsUtils_GetSphereOverlapParameters_00000361_BurstDirectCall_TypeInfo
                );
    FUN_02d6084c(OVR_OpenVR_IVROverlay__GetOverlayErrorNameFromEnum_TypeInfo);
                    /* try { // try from 05888634 to 05988637 has its CatchHandler @ 058888bc */
    DAT_06b80836 = 1;
  }
  local_38 = 0;
  uVar3 = thunk_FUN_02d9d534(*(undefined8 *)puVar1);
  Unity_Mathematics_math__mul(uVar3,0);
  local_38 = FUN_0585deb4(uVar3,0);
                    /* try { // try from 05888670 to 05988677 has its CatchHandler @ 058888ec */
  local_38 = FUN_058653fc(&local_38,param_1,0x53,0);
  puVar1 = 
  UnityEngine_XR_Interaction_Toolkit_Utilities_BurstPhysicsUtils_GetSphereOverlapParameters_00000361_BurstDirectCall_TypeInfo
  ;
  if (local_38 != 0) {
                    /* try { // try from 05888680 to 05988687 has its CatchHandler @ 058888f0 */
    *(undefined8 *)(local_38 + 0x80) = param_4;
    thunk_FUN_02dd37b4((undefined8 *)(local_38 + 0x80),param_4);
    lVar2 = local_38;
                    /* try { // try from 0588869c to 0598869f has its CatchHandler @ 058888c4 */
    local_50 = 0;
    uStack_48 = 0;
    FUN_0583c144(&local_50,*(undefined8 *)puVar1,0);
    puVar1 = OVR_OpenVR_IVROverlay__GetOverlayErrorNameFromEnum_TypeInfo;
    if (lVar2 != 0) {
      *(undefined8 *)(lVar2 + 0x28) = uStack_48;
      *(undefined8 *)(lVar2 + 0x20) = local_50;
      thunk_FUN_02dd37b4(lVar2 + 0x20,0);
      lVar2 = local_38;
                    /* try { // try from 058886d8 to 059886db has its CatchHandler @ 058888c0 */
      local_50 = 0;
      uStack_48 = 0;
                    /* try { // try from 058886dc to 059886eb has its CatchHandler @ 058888c8 */
      FUN_0583c144(&local_50,*(undefined8 *)puVar1,0);
      uVar4 = FUN_0583c56c(local_50,uStack_48,0);
      if (lVar2 != 0) {
        puVar5 = (undefined8 *)(lVar2 + 0x40);
        *puVar5 = uVar4;
        thunk_FUN_02dd37b4(puVar5,uVar4);
        lVar2 = local_38;
                    /* try { // try from 0588870c to 0598870f has its CatchHandler @ 05888900 */
        local_50 = 0;
        uStack_48 = 0;
        FUN_0583c144(&local_50,*(undefined8 *)puVar1,0);
        uVar4 = FUN_0583c56c(local_50,uStack_48,0);
        if (lVar2 != 0) {
                    /* try { // try from 05888728 to 0598872f has its CatchHandler @ 058888cc */
          puVar5 = (undefined8 *)(lVar2 + 0x50);
          *puVar5 = uVar4;
                    /* try { // try from 05888730 to 05988743 has its CatchHandler @ 058888f4 */
          thunk_FUN_02dd37b4(puVar5,uVar4);
          if (local_38 != 0) {
            *(undefined8 *)(local_38 + 0x58) = param_2;
            *(undefined8 *)(local_38 + 0x60) = param_3;
            thunk_FUN_02dd37b4((undefined8 *)(local_38 + 0x58),0);
            puVar1 = PTR_DAT_067683e8;
            if (local_38 != 0) {
                    /* try { // try from 05888764 to 05988767 has its CatchHandler @ 05888900 */
              FUN_0585bbd0(local_38,1,0);
                    /* try { // try from 05888774 to 05988783 has its CatchHandler @ 058888e0 */
              if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                thunk_FUN_02dbd7b4();
              }
              uVar4 = _DAT_0120a5c0;
              if (local_38 != 0) {
                *(undefined8 *)(local_38 + 0x18) = _UNK_0120a5c8;
                *(undefined8 *)(local_38 + 0x10) = uVar4;
                auVar6 = FUN_0584b064(0,0);
                    /* try { // try from 0588879c to 059887a7 has its CatchHandler @ 058888dc */
                auVar7 = FUN_0584b064(1,0);
                    /* try { // try from 058887b8 to 059887bb has its CatchHandler @ 05888900 */
                if (local_38 != 0) {
                  *(undefined1 (*) [16])(local_38 + 200) = auVar7;
                    /* try { // try from 058887c8 to 059887d7 has its CatchHandler @ 058888d4 */
                  *(undefined1 (*) [16])(local_38 + 0xb8) = auVar6;
                  Unity_Mathematics_uint4__set_wzx(local_38,1,0);
                    /* try { // try from 058887e0 to 059887e3 has its CatchHandler @ 05888810 */
                    /* try { // try from 058887e8 to 059887eb has its CatchHandler @ 0588880c */
                  return uVar3;
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


