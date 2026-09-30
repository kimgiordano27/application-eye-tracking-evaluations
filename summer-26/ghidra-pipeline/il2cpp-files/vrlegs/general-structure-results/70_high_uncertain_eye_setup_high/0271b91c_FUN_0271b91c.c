/*
FUNCTION_NAME: FUN_0271b91c
ENTRY_POINT: 0271b91c
PROGRAM: vrlegs-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0271bb20) */

undefined4 FUN_0271b91c(long param_1)

{
  undefined *puVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  int *piVar8;
  long *plVar9;
  undefined4 local_2c;
  char local_28 [4];
  undefined4 local_24;
  
  if ((DAT_04124838 & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03cc8790);
    FUN_01ab69ac(PTR_DAT_03cc87f8);
    FUN_01ab69ac(PTR_DAT_03cf0880);
    FUN_01ab69ac(PTR_DAT_03ccbd08);
    DAT_04124838 = 1;
  }
  puVar1 = PTR_DAT_03cf0880;
  local_2c = 0;
  if (param_1 == 0) {
    thunk_FUN_01a6ca08(PTR_DAT_03cbdf98);
    uVar5 = thunk_FUN_01a89e68();
    uVar6 = thunk_FUN_01a6ca08(PTR_DAT_03cc9c00);
    FUN_026a44fc(uVar5,uVar6,0);
    uVar6 = thunk_FUN_01a6ca08(PTR_DAT_03cf9018);
                    /* WARNING: Subroutine does not return */
    FUN_01ab6b14(uVar5,uVar6);
  }
  lVar3 = *(long *)PTR_DAT_03cf0880;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
    lVar3 = *(long *)puVar1;
  }
  plVar9 = *(long **)(*(long *)(lVar3 + 0xb8) + 0x18);
  if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  lVar3 = *plVar9;
  uVar7 = (ulong)*(ushort *)(lVar3 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_03ccbd08) {
        puVar4 = (undefined8 *)(lVar3 + (long)(*piVar8 + 2) * 0x10 + 0x138);
        goto LAB_0271b9f8;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar4 = (undefined8 *)FUN_01a472ec(plVar9,*(long *)PTR_DAT_03ccbd08,2);
LAB_0271b9f8:
  uVar5 = (*(code *)*puVar4)(plVar9,puVar4[1]);
  local_28[0] = '\0';
  FUN_027e0bd8(uVar5,local_28,0);
  lVar3 = *(long *)puVar1;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
    lVar3 = *(long *)puVar1;
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x18);
  if (lVar3 != 0) {
    uVar7 = FUN_0219f8b8(lVar3,param_1,&local_2c,*(undefined8 *)PTR_DAT_03cc8790);
    if ((uVar7 & 1) == 0) {
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      local_2c = FUN_0271b6c8(param_1);
      lVar3 = *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x18);
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      local_24 = local_2c;
      FUN_0219b83c(lVar3,param_1,&local_24,*(undefined8 *)PTR_DAT_03cc87f8);
    }
    uVar2 = local_2c;
    if (local_28[0] != '\0') {
      OVRManager_<>c__<InitOVRManager>b__424_0(uVar5,0);
    }
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


