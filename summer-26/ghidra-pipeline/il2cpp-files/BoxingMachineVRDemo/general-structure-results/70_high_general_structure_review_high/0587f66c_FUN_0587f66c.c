/*
FUNCTION_NAME: FUN_0587f66c
ENTRY_POINT: 0587f66c
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_5;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_0587f66c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 local_50;
  undefined8 uStack_48;
  long local_38;
  
  puVar1 = Unity_VisualScripting_FullSerializer_fsSerializationCallbackReceiverProcessor_TypeInfo;
  if ((DAT_06b807ed & 1) == 0) {
    FUN_02d6084c(PTR_DAT_067683e8);
    FUN_02d6084c(
                Unity_VisualScripting_FullSerializer_fsSerializationCallbackReceiverProcessor_TypeInfo
                );
    FUN_02d6084c(OVR_OpenVR_IVRCompositor__GetVulkanDeviceExtensionsRequired_TypeInfo);
    FUN_02d6084c(OVR_OpenVR_IVRCompositor__SubmitExplicitTimingData_TypeInfo);
    DAT_06b807ed = 1;
  }
  local_38 = 0;
  uVar4 = thunk_FUN_02d9d534(*(undefined8 *)puVar1);
  FUN_0583fb94(uVar4,0);
  local_38 = FUN_0585deb4(uVar4,0);
  local_38 = FUN_058653fc(&local_38,param_1,10,0);
  if (local_38 != 0) {
    *(undefined8 *)(local_38 + 0x80) = param_4;
    thunk_FUN_02dd37b4((undefined8 *)(local_38 + 0x80),param_4);
    lVar3 = local_38;
    puVar1 = OVR_OpenVR_IVRCompositor__SubmitExplicitTimingData_TypeInfo;
    if (local_38 != 0) {
      *(undefined8 *)(local_38 + 0x98) = DAT_01207bd0;
      puVar2 = OVR_OpenVR_IVRCompositor__GetVulkanDeviceExtensionsRequired_TypeInfo;
      local_50 = 0;
      uStack_48 = 0;
      FUN_0583c144(&local_50,*(undefined8 *)puVar1,0);
      *(undefined8 *)(lVar3 + 0x28) = uStack_48;
      *(undefined8 *)(lVar3 + 0x20) = local_50;
      thunk_FUN_02dd37b4(lVar3 + 0x20,0);
      lVar3 = local_38;
      local_50 = 0;
      uStack_48 = 0;
      FUN_0583c144(&local_50,*(undefined8 *)puVar2,0);
      uVar5 = FUN_0583c56c(local_50,uStack_48,0);
      if (lVar3 != 0) {
        puVar6 = (undefined8 *)(lVar3 + 0x40);
        *puVar6 = uVar5;
        thunk_FUN_02dd37b4(puVar6,uVar5);
        puVar1 = PTR_DAT_067683e8;
        if (local_38 != 0) {
          *(undefined8 *)(local_38 + 0x58) = param_2;
          *(undefined8 *)(local_38 + 0x60) = param_3;
          thunk_FUN_02dd37b4((undefined8 *)(local_38 + 0x58),0);
          if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
            thunk_FUN_02dbd7b4();
          }
          uVar5 = _DAT_0120b190;
          if (local_38 != 0) {
            *(undefined8 *)(local_38 + 0x18) = _UNK_0120b198;
            *(undefined8 *)(local_38 + 0x10) = uVar5;
            Unity_Mathematics_uint4__set_wzx(local_38,1,0);
            return uVar4;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


