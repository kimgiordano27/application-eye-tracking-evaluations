/*
FUNCTION_NAME: FUN_055004f8
ENTRY_POINT: 055004f8
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_4
*/


void FUN_055004f8(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  
  puVar1 = PTR_DAT_067c9fd8;
  if ((DAT_06bbf549 & 1) == 0) {
    FUN_02f08768(PTR_DAT_067c9fd8);
    FUN_02f08768(PTR_DAT_067c9648);
    FUN_02f08768(OVRPlugin_<>c_TypeInfo);
    FUN_02f08768(OVRPlugin_<>c__DisplayClass533_0_TypeInfo);
    DAT_06bbf549 = 1;
  }
  puVar2 = OVRPlugin_<>c_TypeInfo;
  if (*(char *)(param_1 + 0x28) != '\0') {
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    uVar3 = FUN_050656a0(0);
    local_34 = *(undefined4 *)(param_1 + 0x18);
    uVar4 = thunk_FUN_02f44ec4(*(undefined8 *)(PTR_DAT_067c9338 + 0x48),&local_34);
    FUN_04f70148(uVar3,*(undefined8 *)puVar2,uVar4,0);
    return;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  uVar3 = FUN_050656a0(0);
  plVar5 = (long *)FUN_02f0880c(*(undefined8 *)PTR_DAT_067c9648,4);
  puVar1 = PTR_DAT_067c9338;
  local_34 = *(undefined4 *)(param_1 + 0x18);
  lVar6 = thunk_FUN_02f44ec4(*(undefined8 *)(PTR_DAT_067c9338 + 0x48),&local_34);
  if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  if ((lVar6 != 0) &&
     (lVar7 = thunk_FUN_02f45174(lVar6,*(undefined8 *)(*plVar5 + 0x40)), lVar7 == 0)) {
LAB_05500710:
    uVar3 = thunk_FUN_02f52b60();
                    /* WARNING: Subroutine does not return */
    FUN_02f0888c(uVar3,0);
  }
  if ((int)plVar5[3] != 0) {
    plVar5[4] = lVar6;
    local_38 = *(undefined4 *)(param_1 + 0x10);
    lVar6 = thunk_FUN_02f44ec4(*(undefined8 *)(puVar1 + 0x48),&local_38);
    if ((lVar6 != 0) &&
       (lVar7 = thunk_FUN_02f45174(lVar6,*(undefined8 *)(*plVar5 + 0x40)), lVar7 == 0))
    goto LAB_05500710;
    if ((*(uint *)(plVar5 + 3) & 0xfffffffe) != 0) {
      plVar5[5] = lVar6;
      local_3c = *(undefined4 *)(param_1 + 0x14);
      lVar6 = thunk_FUN_02f44ec4(*(undefined8 *)(puVar1 + 0x48),&local_3c);
      if ((lVar6 != 0) &&
         (lVar7 = thunk_FUN_02f45174(lVar6,*(undefined8 *)(*plVar5 + 0x40)), lVar7 == 0))
      goto LAB_05500710;
      uVar8 = plVar5[3];
      if (2 < (uint)uVar8) {
        plVar5[6] = lVar6;
        lVar6 = *(long *)(param_1 + 0x20);
        if (lVar6 != 0) {
          lVar7 = thunk_FUN_02f45174(lVar6,*(undefined8 *)(*plVar5 + 0x40));
          if (lVar7 == 0) goto LAB_05500710;
          uVar8 = plVar5[3];
        }
        puVar1 = OVRPlugin_<>c__DisplayClass533_0_TypeInfo;
        if ((uVar8 & 0xfffffffc) != 0) {
          plVar5[7] = lVar6;
          FUN_04f70250(uVar3,*(undefined8 *)puVar1,plVar5,0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f089d0();
}


