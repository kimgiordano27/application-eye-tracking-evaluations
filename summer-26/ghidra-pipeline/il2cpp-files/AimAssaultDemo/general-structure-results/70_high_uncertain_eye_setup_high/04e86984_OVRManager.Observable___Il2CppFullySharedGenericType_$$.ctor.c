/*
FUNCTION_NAME: OVRManager.Observable<__Il2CppFullySharedGenericType>$$.ctor
ENTRY_POINT: 04e86984
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager_Observable<__Il2CppFullySharedGenericType>___ctor(void)

{
  long lVar1;
  long lVar2;
  undefined4 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long *unaff_x19;
  long unaff_x20;
  int unaff_w21;
  int iVar7;
  long unaff_x22;
  long lStack0000000000000000;
  long lStack0000000000000008;
  
  *(undefined1 *)(unaff_x22 + 0xba6) = 1;
  lStack0000000000000000 = 0;
  lStack0000000000000008 = 0;
  if ((*(byte *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
    FUN_03775678();
  }
  iVar7 = (int)unaff_x19[1];
  if (iVar7 < unaff_w21) {
    if ((*(byte *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
      FUN_03775678();
      iVar7 = (int)unaff_x19[1];
    }
    if (*(int *)(*(long *)PTR_DAT_07d863e8 + 0xe4) == 0) {
      thunk_FUN_03798b70();
    }
    iVar7 = iVar7 * 3;
    if (iVar7 < 0) {
      iVar7 = iVar7 + 1;
    }
    uVar3 = FUN_06243d64(4,iVar7 >> 1,0);
    FUN_06243d64(unaff_w21,uVar3,0);
    if ((*(byte *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
      FUN_03775678(*(long *)(unaff_x20 + 0x20));
    }
    FUN_04d3b6c8();
    if ((*(byte *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
      FUN_03775678();
    }
    lVar2 = lStack0000000000000008;
    lVar1 = lStack0000000000000000;
    if (*unaff_x19 != 0) {
      lVar4 = *(long *)(unaff_x20 + 0x20);
      if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_03775678();
      }
      uVar5 = FUN_040939cc(lVar1,lVar2,*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x68));
      lVar4 = *(long *)(unaff_x20 + 0x20);
      lVar1 = *unaff_x19;
      lVar2 = unaff_x19[1];
      if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_03775678(lVar4);
      }
      uVar6 = FUN_04093b54(lVar1,lVar2,*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x170));
      if ((*(byte *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
        FUN_03775678(*(long *)(unaff_x20 + 0x20));
      }
      FUN_0754e55c(uVar5,uVar6,(long)(*(int *)((long)unaff_x19 + 0x14) << 4),0);
      if ((*(byte *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
        FUN_03775678();
      }
      FUN_04d3b99c();
    }
    unaff_x19[1] = lStack0000000000000008;
    *unaff_x19 = lStack0000000000000000;
  }
  return;
}


