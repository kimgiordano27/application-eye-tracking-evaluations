/*
FUNCTION_NAME: FUN_0271bba0
ENTRY_POINT: 0271bba0
PROGRAM: vrlegs-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0271bde0) */

undefined8 FUN_0271bba0(uint param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  uint uVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  long *plVar10;
  uint uVar11;
  char local_44 [4];
  undefined8 local_40;
  uint local_34;
  
  puVar1 = PTR_DAT_03cf0880;
  if ((DAT_04124839 & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03cf82b0);
    FUN_01ab69ac(PTR_DAT_03cf9020);
    FUN_01ab69ac(PTR_DAT_03cf9028);
    FUN_01ab69ac(PTR_DAT_03cf0880);
    FUN_01ab69ac(PTR_DAT_03ccbd08);
    DAT_04124839 = 1;
  }
  lVar2 = *(long *)puVar1;
  local_40 = 0;
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
    lVar2 = *(long *)puVar1;
  }
  plVar10 = *(long **)(*(long *)(lVar2 + 0xb8) + 0x20);
  if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  lVar2 = *plVar10;
  uVar8 = (ulong)*(ushort *)(lVar2 + 0x12e);
  if (uVar8 != 0) {
    piVar9 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_03ccbd08) {
        puVar3 = (undefined8 *)(lVar2 + (long)(*piVar9 + 2) * 0x10 + 0x138);
        goto LAB_0271bc88;
      }
      uVar8 = uVar8 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar8 != 0);
  }
  puVar3 = (undefined8 *)FUN_01a472ec(plVar10,*(long *)PTR_DAT_03ccbd08,2);
LAB_0271bc88:
  uVar4 = (*(code *)*puVar3)(plVar10,puVar3[1]);
  local_44[0] = '\0';
  FUN_027e0bd8(uVar4,local_44,0);
  lVar2 = *(long *)puVar1;
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
    lVar2 = *(long *)puVar1;
  }
  lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x20);
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  local_34 = param_1;
  uVar8 = FUN_0219f8b8(lVar2,&local_34,&local_40,*(undefined8 *)PTR_DAT_03cf9020);
  uVar5 = local_40;
  if ((uVar8 & 1) == 0) {
    lVar2 = *(long *)puVar1;
    uVar11 = 0;
    while( true ) {
      if (*(int *)(lVar2 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar2 = *(long *)puVar1;
      }
      lVar7 = *(long *)(*(long *)(lVar2 + 0xb8) + 8);
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      if (*(uint *)(lVar7 + 0x18) <= uVar11) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c44();
      }
      uVar6 = (uint)*(ushort *)(lVar7 + (long)(int)uVar11 * 0x10 + 0x20);
      if (uVar6 == 0) {
        uVar5 = 0;
        goto LAB_0271bda4;
      }
      if (uVar6 == param_1) break;
      uVar11 = uVar11 + 1;
    }
    uVar5 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03cf82b0);
    FUN_02711448(uVar5,uVar11);
    lVar2 = *(long *)puVar1;
    local_40 = uVar5;
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      lVar2 = *(long *)puVar1;
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x20);
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    local_34 = param_1;
    FUN_0219b83c(lVar2,&local_34,local_40,*(undefined8 *)PTR_DAT_03cf9028);
    uVar5 = local_40;
  }
LAB_0271bda4:
  if (local_44[0] != '\0') {
    OVRManager_<>c__<InitOVRManager>b__424_0(uVar4,0);
  }
  return uVar5;
}


