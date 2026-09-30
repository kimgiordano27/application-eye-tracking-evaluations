/*
FUNCTION_NAME: FUN_05883850
ENTRY_POINT: 05883850
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 88
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_8;strong_file_logging_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_05883850(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 local_50;
  undefined8 uStack_48;
  long local_38;
  
  puVar1 = OVR_OpenVR_IVRCompositor__ReleaseSharedGLTexture_TypeInfo;
  if ((DAT_06b8080f & 1) == 0) {
    FUN_02d6084c(OVR_OpenVR_IVRCompositor__ReleaseSharedGLTexture_TypeInfo);
    FUN_02d6084c(PTR_DAT_067683e8);
    FUN_02d6084c(
                UnityEngine_XR_Interaction_Toolkit_Utilities_BurstMathUtility_OrthogonalUpVector_0000034F_PostfixBurstDelegate_TypeInfo
                );
    FUN_02d6084c(OVR_OpenVR_IVROverlay__CloseMessageOverlay_TypeInfo);
    DAT_06b8080f = 1;
  }
  local_38 = 0;
  lVar3 = thunk_FUN_02d9d534(*(undefined8 *)puVar1);
  FUN_0583cfc4(lVar3,0);
  if (lVar3 != 0) {
    *(undefined4 *)(lVar3 + 0x104) = 1;
    *(undefined4 *)(lVar3 + 0x10c) = 0x7f7ffffd;
    local_38 = FUN_0585deb4(lVar3,0);
                    /* try { // try from 0588390c to 0598399b has its CatchHandler @ 0588390c
                       catch() { ... } // from try @ 0588390c with catch @ 0588390c
                       catch() { ... } // from try @ 058839a4 with catch @ 0588390c
                       catch() { ... } // from try @ 05883b64 with catch @ 0588390c
                       catch() { ... } // from try @ 05883b9c with catch @ 0588390c */
    local_38 = FUN_058653fc(&local_38,param_1,0x2c,0);
    puVar1 = 
    UnityEngine_XR_Interaction_Toolkit_Utilities_BurstMathUtility_OrthogonalUpVector_0000034F_PostfixBurstDelegate_TypeInfo
    ;
    if (local_38 != 0) {
      *(undefined8 *)(local_38 + 0x80) = param_4;
      thunk_FUN_02dd37b4((undefined8 *)(local_38 + 0x80),param_4);
      lVar2 = local_38;
      local_50 = 0;
      uStack_48 = 0;
      FUN_0583c144(&local_50,*(undefined8 *)puVar1,0);
      puVar1 = OVR_OpenVR_IVROverlay__CloseMessageOverlay_TypeInfo;
      if (lVar2 != 0) {
        *(undefined8 *)(lVar2 + 0x28) = uStack_48;
        *(undefined8 *)(lVar2 + 0x20) = local_50;
        thunk_FUN_02dd37b4(lVar2 + 0x20,0);
        lVar2 = local_38;
        local_50 = 0;
        uStack_48 = 0;
        FUN_0583c144(&local_50,*(undefined8 *)puVar1,0);
        uVar4 = FUN_0583c56c(local_50,uStack_48,0);
        if (lVar2 != 0) {
          puVar5 = (undefined8 *)(lVar2 + 0x40);
          *puVar5 = uVar4;
                    /* try { // try from 0588399c to 059839a3 has its CatchHandler @ 05883b34 */
          thunk_FUN_02dd37b4(puVar5,uVar4);
          lVar2 = local_38;
                    /* try { // try from 058839a4 to 05983b4b has its CatchHandler @ 0588390c */
          local_50 = 0;
          uStack_48 = 0;
          FUN_0583c144(&local_50,*(undefined8 *)puVar1,0);
          uVar4 = FUN_0583c56c(local_50,uStack_48,0);
          if (lVar2 != 0) {
            puVar5 = (undefined8 *)(lVar2 + 0x50);
            *puVar5 = uVar4;
            thunk_FUN_02dd37b4(puVar5,uVar4);
            if (local_38 != 0) {
              *(undefined8 *)(local_38 + 0x58) = param_2;
              *(undefined8 *)(local_38 + 0x60) = param_3;
              thunk_FUN_02dd37b4((undefined8 *)(local_38 + 0x58),0);
              puVar1 = PTR_DAT_067683e8;
              if (local_38 != 0) {
                Unity_Mathematics_uint4__get_ywzx(local_38,1,0);
                if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                  thunk_FUN_02dbd7b4();
                }
                uVar4 = _DAT_0120b4d0;
                if (local_38 != 0) {
                  *(undefined8 *)(local_38 + 0x18) = _UNK_0120b4d8;
                  *(undefined8 *)(local_38 + 0x10) = uVar4;
                  Unity_Mathematics_uint4__set_wzx(local_38,1,0);
                  return lVar3;
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


