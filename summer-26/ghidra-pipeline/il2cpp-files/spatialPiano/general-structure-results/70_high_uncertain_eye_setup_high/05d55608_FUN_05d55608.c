/*
FUNCTION_NAME: FUN_05d55608
ENTRY_POINT: 05d55608
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_05d55608(long param_1,long param_2,long param_3,int param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  ulong uVar4;
  long lVar5;
  undefined1 auVar6 [16];
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined1 auStack_d8 [144];
  undefined8 local_48;
  undefined1 local_34 [4];
  
  if ((DAT_06bc3909 & 1) == 0) {
    FUN_02f08768(Method_OVRPlugin_get_version__);
    FUN_02f08768(Method_OVRAnchor_ShareAsync__);
    FUN_02f08768(Method_System_Number_NumberToString__);
    FUN_02f08768(Method_OVRAnchorContainer_IOVRAnchorComponent<OVRAnchorContainer>_SetEnabledAsync__
                );
    FUN_02f08768(Method_OVRAnchorContainer_get_Uuids__);
    FUN_02f08768(Method_OVRResult_From<OVRAnchor_ConfigureTrackerResult>__);
    DAT_06bc3909 = 1;
  }
  local_f0 = 0;
  uStack_e8 = 0;
  local_34[0] = 0;
  memset(&local_180,0,0x90);
  if (param_4 == 0) {
    return;
  }
  if (param_3 != 0) {
    uStack_e8 = *(undefined8 *)(param_3 + 0x20);
    local_f0 = *(undefined8 *)(param_3 + 0x18);
    FUN_0609937c(&local_f0,0);
    puVar2 = Method_OVRResult_From<OVRAnchor_ConfigureTrackerResult>__;
    if ((param_2 != 0) && (lVar5 = *(long *)(param_2 + 0x28), lVar5 != 0)) {
      uVar4 = FUN_060be310(lVar5,*(undefined8 *)
                                  Method_OVRResult_From<OVRAnchor_ConfigureTrackerResult>__,0);
      if ((uVar4 & 1) != 0) {
        uVar3 = FUN_060c1508(lVar5,*(undefined8 *)puVar2,0);
        *(undefined4 *)(param_3 + 0x40) = uVar3;
      }
      puVar2 = Method_OVRPlugin_get_version__;
      if (*(char *)(param_3 + 0x44) == '\0') {
        uVar3 = FUN_060bf1ec(lVar5,*(undefined8 *)
                                    Method_OVRAnchorContainer_IOVRAnchorComponent<OVRAnchorContainer>_SetEnabledAsync__
                             ,0);
        puVar1 = Method_System_Number_NumberToString__;
        *(undefined4 *)(param_3 + 0x30) = uVar3;
        uVar3 = FUN_060bf1ec(lVar5,*(undefined8 *)puVar1,0);
        puVar1 = Method_OVRAnchor_ShareAsync__;
        *(undefined4 *)(param_3 + 0x34) = uVar3;
        uVar3 = FUN_060bf1ec(lVar5,*(undefined8 *)puVar1,0);
        puVar1 = Method_OVRAnchorContainer_get_Uuids__;
        *(undefined4 *)(param_3 + 0x38) = uVar3;
        uVar3 = FUN_060bf1ec(lVar5,*(undefined8 *)puVar1,0);
        *(undefined4 *)(param_3 + 0x3c) = uVar3;
        *(undefined1 *)(param_3 + 0x44) = 1;
      }
      FUN_05c5cb44(local_34,*(undefined8 *)(param_1 + 0x20),0);
      uStack_178 = *(undefined8 *)(param_3 + 0x110);
      local_180 = *(undefined8 *)(param_3 + 0x108);
      uStack_168 = *(undefined8 *)(param_3 + 0x120);
      uStack_170 = *(undefined8 *)(param_3 + 0x118);
      uStack_158 = *(undefined8 *)(param_3 + 0x130);
      local_160 = *(undefined8 *)(param_3 + 0x128);
      uStack_148 = *(undefined8 *)(param_3 + 0x140);
      uStack_150 = *(undefined8 *)(param_3 + 0x138);
      uStack_138 = *(undefined8 *)(param_3 + 0xf0);
      local_140 = *(undefined8 *)(param_3 + 0xe8);
      uStack_128 = *(undefined8 *)(param_3 + 0x70);
      uStack_130 = *(undefined8 *)(param_3 + 0x68);
      uStack_118 = *(undefined8 *)(param_3 + 0x50);
      local_120 = *(undefined8 *)(param_3 + 0x48);
      uStack_108 = *(undefined8 *)(param_3 + 0x60);
      uStack_110 = *(undefined8 *)(param_3 + 0x58);
      uStack_f8 = *(undefined8 *)(param_3 + 0xe0);
      local_100 = *(undefined8 *)(param_3 + 0xd8);
      memcpy(auStack_d8,&local_180,0x90);
      local_f0 = 0;
      uStack_e8 = 0;
      local_48 = 1;
      auVar6 = FUN_03436478(auStack_d8,*(undefined8 *)(param_2 + 0x48),0,0,*(undefined8 *)puVar2);
      *(undefined1 (*) [16])(param_3 + 0x18) = auVar6;
      FUN_05c5cb50(local_34,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


