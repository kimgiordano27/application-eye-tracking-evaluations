/*
FUNCTION_NAME: HVRInputActions.RightHandActions$$get_PrimaryButton
ENTRY_POINT: 0218962c
PROGRAM: vrlegs-libil2cpp.so
SCORE: 95
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x02189790) */

undefined8 HVRInputActions_RightHandActions__get_PrimaryButton(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  char cStack000000000000000c;
  
  uVar6 = *(undefined8 *)(param_1 + 0x18);
  cStack000000000000000c = '\0';
  FUN_027e0bd8(uVar6,&stack0x0000000c,0);
  lVar3 = *(long *)(*(long *)(param_2 + 0x20) + 0xc0);
  if (*(int *)(param_1 + 0x20) == 0) {
    lVar7 = *(long *)(lVar3 + 0x68);
    lVar3 = *(long *)(lVar7 + 0x38);
    if (lVar3 == 0) {
      FUN_01a47054(lVar7);
      lVar3 = *(long *)(lVar7 + 0x38);
    }
    lVar3 = *(long *)(lVar3 + 0x10);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_01a46ff8();
    }
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    lVar3 = *(long *)(*(long *)(lVar7 + 0x38) + 0x10);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_01a46ff8();
    }
    plVar8 = (long *)**(undefined8 **)(lVar3 + 0xb8);
    if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    lVar3 = *(long *)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 0x78);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_01a46ff8(lVar3);
    }
    lVar7 = *plVar8;
    uVar4 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == lVar3) {
          puVar2 = (undefined8 *)(lVar7 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_02189750;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined8 *)FUN_01a472ec(plVar8,lVar3,0);
LAB_02189750:
    uVar1 = (*(code *)*puVar2)(plVar8,puVar2[1]);
  }
  else {
    if ((*(byte *)(*(long *)(lVar3 + 0x58) + 0x135) & 1) == 0) {
      FUN_01a46ff8();
    }
    uVar1 = thunk_FUN_01a89e68();
    FUN_021bb470(uVar1,param_1,*(undefined8 *)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 0x60));
  }
  if (cStack000000000000000c != '\0') {
    OVRManager_<>c__<InitOVRManager>b__424_0(uVar6,0);
  }
  return uVar1;
}


