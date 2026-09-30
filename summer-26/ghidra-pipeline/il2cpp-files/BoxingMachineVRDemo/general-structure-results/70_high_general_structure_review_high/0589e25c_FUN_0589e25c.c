/*
FUNCTION_NAME: FUN_0589e25c
ENTRY_POINT: 0589e25c
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

undefined8 FUN_0589e25c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
                    /* try { // try from 0589e274 to 0599e293 has its CatchHandler @ 0589e528 */
  if ((DAT_06b808e5 & 1) == 0) {
    FUN_02d6084c(PTR_DAT_067683e8);
    FUN_02d6084c(Unity_VisualScripting_FullSerializer_fsSerializer_TypeInfo);
                    /* try { // try from 0589e2b0 to 0599e2bb has its CatchHandler @ 0589e520 */
    FUN_02d6084c(
                UnityEngine_XR_Interaction_Toolkit_Utilities_BurstPhysicsUtils_GetSphereOverlapParameters_00000361_BurstDirectCall_TypeInfo
                );
    FUN_02d6084c(OVR_OpenVR_IVROverlay__GetOverlayErrorNameFromEnum_TypeInfo);
    DAT_06b808e5 = 1;
  }
  local_38 = 0;
                    /* try { // try from 0589e2d4 to 0599e2ff has its CatchHandler @ 0589e508 */
  uVar3 = thunk_FUN_02d9d534(*(undefined8 *)puVar1);
  Unity_Mathematics_math__mul(uVar3,0);
  local_38 = FUN_0585deb4(uVar3,0);
  local_38 = FUN_058653fc(&local_38,param_1,0x102,0);
  puVar1 = 
  UnityEngine_XR_Interaction_Toolkit_Utilities_BurstPhysicsUtils_GetSphereOverlapParameters_00000361_BurstDirectCall_TypeInfo
  ;
  if (local_38 != 0) {
    *(undefined8 *)(local_38 + 0x80) = param_4;
                    /* try { // try from 0589e31c to 0599e31f has its CatchHandler @ 0589e500 */
    thunk_FUN_02dd37b4((undefined8 *)(local_38 + 0x80),param_4);
    lVar2 = local_38;
    local_50 = 0;
    uStack_48 = 0;
    FUN_0583c144(&local_50,*(undefined8 *)puVar1,0);
    puVar1 = OVR_OpenVR_IVROverlay__GetOverlayErrorNameFromEnum_TypeInfo;
                    /* try { // try from 0589e33c to 0599e343 has its CatchHandler @ 0589e508 */
    if (lVar2 != 0) {
      *(undefined8 *)(lVar2 + 0x28) = uStack_48;
      *(undefined8 *)(lVar2 + 0x20) = local_50;
      thunk_FUN_02dd37b4(lVar2 + 0x20,0);
      lVar2 = local_38;
                    /* try { // try from 0589e35c to 0599e377 has its CatchHandler @ 0589e51c */
      local_50 = 0;
      uStack_48 = 0;
      FUN_0583c144(&local_50,*(undefined8 *)puVar1,0);
      uVar4 = FUN_0583c56c(local_50,uStack_48,0);
      if (lVar2 != 0) {
        puVar5 = (undefined8 *)(lVar2 + 0x40);
        *puVar5 = uVar4;
        thunk_FUN_02dd37b4(puVar5,uVar4);
        lVar2 = local_38;
        local_50 = 0;
        uStack_48 = 0;
        FUN_0583c144(&local_50,*(undefined8 *)puVar1,0);
                    /* try { // try from 0589e3ac to 0599e3b3 has its CatchHandler @ 0589e514 */
        uVar4 = FUN_0583c56c(local_50,uStack_48,0);
        if (lVar2 != 0) {
          puVar5 = (undefined8 *)(lVar2 + 0x50);
          *puVar5 = uVar4;
          thunk_FUN_02dd37b4(puVar5,uVar4);
          if (local_38 != 0) {
                    /* try { // try from 0589e3d4 to 0599e3db has its CatchHandler @ 0589e50c */
            *(undefined8 *)(local_38 + 0x58) = param_2;
                    /* try { // try from 0589e3dc to 0599e45b has its CatchHandler @ 0589df1c */
            *(undefined8 *)(local_38 + 0x60) = param_3;
            thunk_FUN_02dd37b4((undefined8 *)(local_38 + 0x58),0);
            puVar1 = PTR_DAT_067683e8;
            if (local_38 != 0) {
              FUN_0585bbd0(local_38,1,0);
              if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                thunk_FUN_02dbd7b4();
              }
              uVar4 = _DAT_0120ba60;
              if (local_38 != 0) {
                *(undefined8 *)(local_38 + 0x18) = _UNK_0120ba68;
                *(undefined8 *)(local_38 + 0x10) = uVar4;
                auVar6 = FUN_0584b064(0,0);
                auVar7 = FUN_0584b064(1,0);
                if (local_38 != 0) {
                  *(undefined1 (*) [16])(local_38 + 200) = auVar7;
                    /* try { // try from 0589e45c to 0599e45f has its CatchHandler @ 0589e524 */
                  *(undefined1 (*) [16])(local_38 + 0xb8) = auVar6;
                    /* try { // try from 0589e460 to 0599e463 has its CatchHandler @ 0589e518 */
                  Unity_Mathematics_uint4__set_wzx(local_38,1,0);
                    /* try { // try from 0589e464 to 0599e467 has its CatchHandler @ 0589e510 */
                    /* try { // try from 0589e468 to 0599e4af has its CatchHandler @ 0589df1c */
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


