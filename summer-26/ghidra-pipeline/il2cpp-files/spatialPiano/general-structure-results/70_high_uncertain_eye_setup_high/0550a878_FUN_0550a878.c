/*
FUNCTION_NAME: FUN_0550a878
ENTRY_POINT: 0550a878
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_9;weak_xr_or_state_hits_9;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_9
*/


void FUN_0550a878(long param_1,long *param_2)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  if ((DAT_06bbf581 & 1) == 0) {
    FUN_02f08768(OVRPlugin_OVRP_1_44_0_TypeInfo);
    FUN_02f08768(OVRPlugin_OVRP_1_45_0_TypeInfo);
    FUN_02f08768(OVRPlugin_OVRP_1_46_0_TypeInfo);
    FUN_02f08768(OVRPlugin_OVRP_1_47_0_TypeInfo);
    FUN_02f08768(OVRPlugin_OVRP_1_48_0_TypeInfo);
    FUN_02f08768(OVR_OpenVR_IVROverlay__ShowMessageOverlay_TypeInfo);
    FUN_02f08768(PTR_DAT_067ce4e8);
    DAT_06bbf581 = 1;
  }
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  if (param_2 != (long *)0x0) {
    bVar1 = *(byte *)(*(long *)OVR_OpenVR_IVROverlay__ShowMessageOverlay_TypeInfo + 0x130);
    if ((*(byte *)(*param_2 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar1 * 8 + -8) !=
        *(long *)OVR_OpenVR_IVROverlay__ShowMessageOverlay_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
      FUN_02f08d48(param_2);
    }
  }
  lVar5 = thunk_FUN_02f45270(*(undefined8 *)PTR_DAT_067ce4e8);
  FUN_0550083c();
  *(long *)(lVar5 + 0x40) = param_1;
  uVar6 = FUN_05500a38(lVar5,param_2);
  if (*(long *)(lVar5 + 0x18) != 0) {
    lVar5 = *(long *)(*(long *)(lVar5 + 0x18) + 0x18);
    if (lVar5 != 0) {
      lVar5 = FUN_0492ca60(lVar5,*(undefined8 *)OVRPlugin_OVRP_1_44_0_TypeInfo);
      puVar3 = OVRPlugin_OVRP_1_46_0_TypeInfo;
      puVar2 = OVRPlugin_OVRP_1_45_0_TypeInfo;
      if (lVar5 == 0) goto LAB_0550aa14;
      FUN_038f0504(&local_48,lVar5,*(undefined8 *)OVRPlugin_OVRP_1_48_0_TypeInfo);
      while (uVar7 = FUN_04bbfa6c(&local_48,*(undefined8 *)puVar3), uVar4 = local_38,
            (uVar7 & 1) != 0) {
        FUN_0550110c(param_1,local_38);
        FUN_05501424(param_1,uVar4);
      }
      FUN_04bbfa68(&local_48,*(undefined8 *)puVar2);
    }
    if (*(long *)(param_1 + 0x10) != 0) {
      FUN_054fb1e8(*(long *)(param_1 + 0x10),uVar6);
      return;
    }
  }
LAB_0550aa14:
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


