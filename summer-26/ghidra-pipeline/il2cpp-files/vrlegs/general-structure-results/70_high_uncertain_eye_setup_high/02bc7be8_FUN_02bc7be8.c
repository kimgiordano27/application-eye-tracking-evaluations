/*
FUNCTION_NAME: FUN_02bc7be8
ENTRY_POINT: 02bc7be8
PROGRAM: vrlegs-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x02bc7f38) */

long * FUN_02bc7be8(undefined8 param_1,uint param_2)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  long *plVar8;
  undefined8 uVar9;
  long *local_60;
  long local_58;
  undefined8 local_50 [2];
  char local_34 [4];
  
  puVar2 = PTR_DAT_03d13e50;
  if ((DAT_04128fa7 & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03d141b0);
    FUN_01ab69ac(PTR_DAT_03d14210);
    FUN_01ab69ac(PTR_DAT_03d14218);
    FUN_01ab69ac(PTR_DAT_03d14220);
    FUN_01ab69ac(PTR_DAT_03d14228);
    FUN_01ab69ac(PTR_DAT_03d13e50);
    FUN_01ab69ac(PTR_DAT_03d14230);
    FUN_01ab69ac(PTR_DAT_03d14238);
    FUN_01ab69ac(PTR_DAT_03cca940);
    FUN_01ab69ac(PTR_DAT_03cbe5e8);
    DAT_04128fa7 = 1;
  }
  lVar5 = *(long *)puVar2;
  local_60 = (long *)0x0;
  local_58 = 0;
  if (*(int *)(lVar5 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
    lVar5 = *(long *)puVar2;
  }
  uVar9 = **(undefined8 **)(lVar5 + 0xb8);
  local_34[0] = '\0';
  FUN_027e0bd8(uVar9,local_34,0);
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  FUN_02bc7860();
  lVar5 = *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x18);
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  uVar6 = FUN_0219f8b8(lVar5,param_1,&local_58,*(undefined8 *)PTR_DAT_03d14210);
  if ((uVar6 & 1) == 0) {
    if ((param_2 & 1) != 0) {
      uVar9 = thunk_FUN_01a6ca08(PTR_DAT_03d14240);
      uVar9 = FUN_025b4d3c(uVar9,param_1,0);
      thunk_FUN_01a6ca08(PTR_DAT_03cbee40);
      uVar7 = thunk_FUN_01a89e68();
      FUN_02765308(uVar7,uVar9,0);
      uVar9 = thunk_FUN_01a6ca08(PTR_DAT_03d14228);
                    /* WARNING: Subroutine does not return */
      FUN_01ab6b14(uVar7,uVar9);
    }
  }
  else {
    lVar5 = *(long *)puVar2;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      lVar5 = *(long *)puVar2;
    }
    puVar3 = PTR_DAT_03d14230;
    if (local_58 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x20);
    FUN_01c6a6c4(local_58,local_50,*(undefined8 *)PTR_DAT_03d14230);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    uVar6 = FUN_0219f8b8(lVar5,local_50,&local_60,*(undefined8 *)PTR_DAT_03d14218);
    plVar8 = local_60;
    if ((uVar6 & 1) != 0) goto LAB_02bc7ea8;
    if (local_58 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    FUN_01c6a75c(local_58,local_50,*(undefined8 *)PTR_DAT_03d14238);
    uVar7 = local_50[0];
    if (*(int *)(*(long *)PTR_DAT_03cbe5e8 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar7 = FUN_01ab6dbc(uVar7,0,*(undefined8 *)PTR_DAT_03cca940,*(undefined8 *)PTR_DAT_03d14228);
    uVar4 = FUN_02786d28(uVar7,0,0);
    lVar5 = local_58;
    if ((uVar4 & param_2 & 1) != 0) {
      if (local_58 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      uVar9 = thunk_FUN_01a6ca08(PTR_DAT_03d14238);
      FUN_01c6a75c(lVar5,local_50,uVar9);
      uVar9 = thunk_FUN_01a6ca08(PTR_DAT_03d14248);
      uVar9 = FUN_025b4d3c(uVar9,local_50[0],0);
      thunk_FUN_01a6ca08(PTR_DAT_03cbee40);
      uVar7 = thunk_FUN_01a89e68();
      FUN_02765308(uVar7,uVar9,0);
      uVar9 = thunk_FUN_01a6ca08(PTR_DAT_03d14228);
                    /* WARNING: Subroutine does not return */
      FUN_01ab6b14(uVar7,uVar9);
    }
    plVar8 = (long *)FUN_0279a688(uVar7,1,0);
    if (plVar8 != (long *)0x0) {
      bVar1 = *(byte *)(*(long *)PTR_DAT_03d14220 + 0x130);
      if ((*(byte *)(*plVar8 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*plVar8 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_03d14220))
      {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6ee0();
      }
      lVar5 = *(long *)puVar2;
      local_60 = plVar8;
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_01a58e78(lVar5);
        lVar5 = *(long *)puVar2;
      }
      if (local_58 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x20);
      FUN_01c6a6c4(local_58,local_50,*(undefined8 *)puVar3);
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      FUN_0219b9a4(lVar5,local_50,local_60,*(undefined8 *)PTR_DAT_03d141b0);
      plVar8 = local_60;
      goto LAB_02bc7ea8;
    }
    local_60 = (long *)0x0;
    if ((param_2 & 1) != 0) {
      uVar9 = thunk_FUN_01a6ca08(PTR_DAT_03d14240);
      uVar9 = FUN_025b4d3c(uVar9,param_1,0);
      thunk_FUN_01a6ca08(PTR_DAT_03cbee40);
      uVar7 = thunk_FUN_01a89e68();
      FUN_02765308(uVar7,uVar9,0);
      uVar9 = thunk_FUN_01a6ca08(PTR_DAT_03d14228);
                    /* WARNING: Subroutine does not return */
      FUN_01ab6b14(uVar7,uVar9);
    }
  }
  plVar8 = (long *)0x0;
LAB_02bc7ea8:
  if (local_34[0] != '\0') {
    OVRManager_<>c__<InitOVRManager>b__424_0(uVar9,0);
  }
  return plVar8;
}


