/*
FUNCTION_NAME: FUN_054fd838
ENTRY_POINT: 054fd838
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_9;weak_xr_or_state_hits_9;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_9
*/


void FUN_054fd838(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  
  lVar9 = param_2;
  if ((DAT_06bbf535 & 1) == 0) {
    FUN_02f08768(OVRManager_CompositionMethod_TypeInfo);
    FUN_02f08768(OVRManager_EventListener_TypeInfo);
    FUN_02f08768(OVRManager_MrcCameraType_TypeInfo);
    FUN_02f08768(OVRManager_PassthroughCapabilities_TypeInfo);
    DAT_06bbf535 = 1;
  }
  for (; lVar9 != 0; lVar9 = *(long *)(lVar9 + 0x20)) {
    uVar3 = FUN_054fdf58(param_1,lVar9);
    if ((uVar3 & 1) != 0) {
      return;
    }
    if ((*(uint *)(lVar9 + 0x18) & 0xfffffffe) == 6) break;
  }
  *(undefined1 *)(param_1 + 0x30) = 1;
  if (*(long *)(param_1 + 0x10) != 0) {
    uVar7 = *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x18);
    lVar9 = *(long *)(PTR_DAT_067c9338 + 0x20);
    if (*(int *)(*(long *)(PTR_DAT_067c9338 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    uVar4 = FUN_050e4454(lVar9 + 0x20,0);
    uVar3 = FUN_050edfb8(uVar7,uVar4,0);
    if ((uVar3 & 1) != 0) {
      lVar9 = *(long *)(param_1 + 0x10);
      FUN_02a7da48(lVar9);
      uVar7 = FUN_054ddb8c(*(undefined8 *)(lVar9 + 0x10),0);
      goto LAB_054fda60;
    }
  }
  uVar3 = FUN_054fdedc(param_1);
  puVar2 = OVRManager_PassthroughCapabilities_TypeInfo;
  if ((uVar3 & 1) == 0) {
    lVar9 = FUN_054fe00c(param_1);
    lVar5 = *(long *)puVar2;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_02f6670c(lVar5);
      lVar5 = *(long *)puVar2;
    }
    puVar1 = OVRManager_EventListener_TypeInfo;
    puVar6 = *(undefined8 **)(lVar5 + 0xb8);
    lVar8 = puVar6[1];
    if (lVar8 == 0) {
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_02f6670c(lVar5);
        puVar6 = *(undefined8 **)(*(long *)puVar2 + 0xb8);
      }
      uVar7 = *puVar6;
      lVar8 = thunk_FUN_02f45270(*(undefined8 *)OVRManager_CompositionMethod_TypeInfo);
      FUN_04e02ad4(lVar8,uVar7,*(undefined8 *)OVRManager_MrcCameraType_TypeInfo,0);
      *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 8) = lVar8;
    }
    lVar5 = FUN_03458424(lVar9,param_2,lVar8,*(undefined8 *)puVar1);
    for (; lVar5 != param_2; param_2 = *(long *)(param_2 + 0x20)) {
      if (param_2 == 0) goto LAB_054fda28;
      if (*(int *)(param_2 + 0x18) == 7) {
        uVar7 = FUN_054dd888(0);
        goto LAB_054fda60;
      }
      if (*(int *)(param_2 + 0x18) == 6) {
        uVar7 = FUN_054dd7c4(0);
        goto LAB_054fda60;
      }
    }
    do {
      if (lVar9 == lVar5) {
        return;
      }
      if (lVar9 == 0) {
LAB_054fda28:
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      if (3 < *(uint *)(lVar9 + 0x18)) {
        if (*(uint *)(lVar9 + 0x18) == 8) {
          uVar7 = FUN_054ddac8(0);
        }
        else {
          uVar7 = FUN_054dda04(0);
        }
        goto LAB_054fda60;
      }
      lVar9 = *(long *)(lVar9 + 0x20);
    } while( true );
  }
  lVar9 = *(long *)(param_1 + 0x10);
  FUN_02a7da48(lVar9);
  uVar7 = FUN_054dd94c(*(undefined8 *)(lVar9 + 0x10),0);
LAB_054fda60:
  uVar4 = thunk_FUN_02f6ef30(OVRManager_SystemHeadsetType_TypeInfo);
                    /* WARNING: Subroutine does not return */
  FUN_02f0888c(uVar7,uVar4);
}


