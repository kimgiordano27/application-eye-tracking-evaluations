/*
FUNCTION_NAME: OVRPlugin$$GetControllerState5
ENTRY_POINT: 02c1d400
PROGRAM: sharks-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_9;functionality_eye_api_context_without_clear_sink_hits_2
*/


long * OVRPlugin__GetControllerState5(uint param_1)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined4 uVar5;
  uint unaff_w20;
  undefined8 uVar6;
  uint uVar7;
  
  if ((param_1 >> 0xc & 1) == 0) {
    if ((unaff_w20 >> 0xd & 1) == 0) {
      return (long *)0x0;
    }
    plVar2 = (long *)FUN_017fc3f4(*(undefined8 *)PTR_DAT_03804688,unaff_w20 >> 0xd & 1);
LAB_02c1d454:
    puVar1 = PTR_DAT_037f2c78;
    uVar6 = *(undefined8 *)PTR_DAT_0380b900;
    if (*(int *)(*(long *)PTR_DAT_037f2c78 + 0xe0) == 0) {
      thunk_FUN_01843fdc();
    }
    lVar3 = FUN_02bddb5c(uVar6,0);
    if (lVar3 == 0) goto LAB_02c1d5bc;
    uVar6 = FUN_02be8b24(lVar3,*(undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x10),0);
    lVar3 = thunk_FUN_01861bbc(*(undefined8 *)PTR_DAT_03804690);
    FUN_02b0e594(lVar3,uVar6,0);
    if (plVar2 == (long *)0x0) goto LAB_02c1d5bc;
    if ((lVar3 != 0) &&
       (lVar4 = thunk_FUN_01861ac0(lVar3,*(undefined8 *)(*plVar2 + 0x40)), lVar4 == 0))
    goto LAB_02c1d5c4;
    if ((int)plVar2[3] == 0) goto LAB_02c1d5c0;
    plVar2[4] = lVar3;
    thunk_FUN_0188fd20(plVar2 + 4,lVar3);
    if ((unaff_w20 >> 0xc & 1) == 0) {
      return plVar2;
    }
    uVar7 = 1;
  }
  else {
    uVar5 = 1;
    if ((unaff_w20 & 0x2000) != 0) {
      uVar5 = 2;
    }
    plVar2 = (long *)FUN_017fc3f4(*(undefined8 *)PTR_DAT_03804688,uVar5);
    if ((unaff_w20 >> 0xd & 1) != 0) goto LAB_02c1d454;
    uVar7 = 0;
  }
  puVar1 = PTR_DAT_037f2c78;
  uVar6 = *(undefined8 *)PTR_DAT_0380b8f8;
  if (*(int *)(*(long *)PTR_DAT_037f2c78 + 0xe0) == 0) {
    thunk_FUN_01843fdc();
  }
  lVar3 = FUN_02bddb5c(uVar6,0);
  if (lVar3 != 0) {
    uVar6 = FUN_02be8b24(lVar3,*(undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x10),0);
    lVar3 = thunk_FUN_01861bbc(*(undefined8 *)PTR_DAT_03804690);
    FUN_02b0e594(lVar3,uVar6,0);
    if (plVar2 != (long *)0x0) {
      if ((lVar3 == 0) ||
         (lVar4 = thunk_FUN_01861ac0(lVar3,*(undefined8 *)(*plVar2 + 0x40)), lVar4 != 0)) {
        if (uVar7 < *(uint *)(plVar2 + 3)) {
          plVar2[(ulong)uVar7 + 4] = lVar3;
          thunk_FUN_0188fd20(plVar2 + (ulong)uVar7 + 4,lVar3);
          return plVar2;
        }
LAB_02c1d5c0:
                    /* WARNING: Subroutine does not return */
        FUN_017fc5b0();
      }
LAB_02c1d5c4:
      uVar6 = thunk_FUN_0187aa4c();
                    /* WARNING: Subroutine does not return */
      FUN_017fc474(uVar6,0);
    }
  }
LAB_02c1d5bc:
                    /* WARNING: Subroutine does not return */
  FUN_017fc5a8();
}


