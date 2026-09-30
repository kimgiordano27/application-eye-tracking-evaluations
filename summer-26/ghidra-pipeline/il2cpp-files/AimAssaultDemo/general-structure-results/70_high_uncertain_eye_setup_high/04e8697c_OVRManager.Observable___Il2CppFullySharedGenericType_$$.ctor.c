/*
FUNCTION_NAME: OVRManager.Observable<__Il2CppFullySharedGenericType>$$.ctor
ENTRY_POINT: 04e8697c
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


void OVRManager_Observable<__Il2CppFullySharedGenericType>___ctor(long param_1)

{
  long lVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long *unaff_x19;
  long unaff_x20;
  int unaff_w21;
  int iVar7;
  long unaff_x22;
  
  FUN_0373b518(*(undefined8 *)(param_1 + 1000));
  *(undefined1 *)(unaff_x22 + 0xba6) = 1;
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
    uVar2 = FUN_06243d64(4,iVar7 >> 1,0);
    FUN_06243d64(unaff_w21,uVar2,0);
    if ((*(byte *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
      FUN_03775678(*(long *)(unaff_x20 + 0x20));
    }
    FUN_04d3b6c8();
    if ((*(byte *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
      FUN_03775678();
    }
    if (*unaff_x19 != 0) {
      lVar3 = *(long *)(unaff_x20 + 0x20);
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_03775678();
      }
      uVar4 = FUN_040939cc(0,0,*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x68));
      lVar6 = *(long *)(unaff_x20 + 0x20);
      lVar3 = *unaff_x19;
      lVar1 = unaff_x19[1];
      if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_03775678(lVar6);
      }
      uVar5 = FUN_04093b54(lVar3,lVar1,*(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0x170));
      if ((*(byte *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
        FUN_03775678(*(long *)(unaff_x20 + 0x20));
      }
      FUN_0754e55c(uVar4,uVar5,(long)(*(int *)((long)unaff_x19 + 0x14) << 4),0);
      if ((*(byte *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
        FUN_03775678();
      }
      FUN_04d3b99c();
    }
    unaff_x19[1] = 0;
    *unaff_x19 = 0;
  }
  return;
}


