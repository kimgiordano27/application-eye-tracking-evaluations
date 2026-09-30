/*
FUNCTION_NAME: OVRPlugin$$StopBodyTracking
ENTRY_POINT: 05759adc
PROGRAM: Untangled-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__StopBodyTracking(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  
  puVar2 = PTR_DAT_06d56c60;
  if ((DAT_071c3a74 & 1) == 0) {
    FUN_02f07e70(PTR_DAT_06d59738);
    FUN_02f07e70(PTR_DAT_06d56c60);
    FUN_02f07e70(PTR_DAT_06d02bd0);
    FUN_02f07e70(PTR_DAT_06d01eb0);
    DAT_071c3a74 = 1;
  }
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
  }
  if (DAT_071c37cf == '\0') {
    FUN_02f07e70(PTR_DAT_06d56c60);
    DAT_071c37cf = '\x01';
  }
  lVar3 = *(long *)puVar2;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar3 = *(long *)puVar2;
  }
  puVar1 = PTR_DAT_06d02bd0;
  lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 8);
  if (lVar3 != 0) {
    lVar3 = *(long *)(lVar3 + 0x30);
    plVar4 = (long *)FUN_02f07f14(*(undefined8 *)PTR_DAT_06d02bd0,2);
    if (plVar4 == (long *)0x0) goto LAB_05759cb8;
    if ((param_1 != 0) &&
       (lVar5 = thunk_FUN_02ef170c(param_1,*(undefined8 *)(*plVar4 + 0x40)), lVar5 == 0)) {
      uVar6 = thunk_FUN_02ea6cf0();
                    /* WARNING: Subroutine does not return */
      FUN_02f07f94(uVar6,0);
    }
    if ((int)plVar4[3] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c8();
    }
    plVar4[4] = param_1;
    thunk_FUN_02f411dc(plVar4 + 4,param_1);
    if (lVar3 == 0) goto LAB_05759cb8;
    plVar4 = (long *)(**(code **)(lVar3 + 0x18))
                               (*(undefined8 *)(lVar3 + 0x40),0,plVar4,*(undefined8 *)(lVar3 + 0x28)
                               );
    lVar3 = 0;
    if (plVar4 != (long *)0x0) {
      lVar5 = *(long *)puVar1;
      lVar3 = thunk_FUN_02ef170c(plVar4,lVar5);
      if (lVar3 == 0) goto LAB_05759cd4;
    }
    uVar6 = FUN_03a1b5b4(lVar3,*(undefined8 *)PTR_DAT_06d59738);
    if (DAT_071c37cf == '\0') {
      FUN_02f07e70(PTR_DAT_06d56c60);
      DAT_071c37cf = '\x01';
    }
    lVar3 = *(long *)puVar2;
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar3 = *(long *)puVar2;
    }
    lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 8);
    if ((lVar3 != 0) && (lVar3 = *(long *)(lVar3 + 0x50), lVar3 != 0)) {
      plVar4 = (long *)(**(code **)(lVar3 + 0x18))
                                 (*(undefined8 *)(lVar3 + 0x40),uVar6,*(undefined8 *)(lVar3 + 0x28))
      ;
      if (plVar4 != (long *)0x0) {
        lVar5 = *(long *)PTR_DAT_06d01eb0;
        if ((*(byte *)(*plVar4 + 0x130) < *(byte *)(lVar5 + 0x130)) ||
           (*(long *)(*(long *)(*plVar4 + 200) + (ulong)*(byte *)(lVar5 + 0x130) * 8 + -8) != lVar5)
           ) {
LAB_05759cd4:
                    /* WARNING: Subroutine does not return */
          FUN_02f08440(plVar4,lVar5);
        }
      }
      return;
    }
  }
LAB_05759cb8:
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


