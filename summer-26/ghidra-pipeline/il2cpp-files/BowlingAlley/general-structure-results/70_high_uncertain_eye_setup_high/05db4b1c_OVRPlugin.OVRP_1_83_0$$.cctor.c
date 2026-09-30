/*
FUNCTION_NAME: OVRPlugin.OVRP_1_83_0$$.cctor
ENTRY_POINT: 05db4b1c
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_83_0___cctor(long param_1,undefined8 param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  uint uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  ulong uVar14;
  
  puVar3 = PTR_DAT_072b1fe8;
  puVar2 = PTR_DAT_072b1a48;
  if ((DAT_076da92c & 1) == 0) {
    thunk_FUN_032e1da0(PTR_DAT_072b1ff0);
    thunk_FUN_032e1da0(PTR_DAT_072b1a48);
    thunk_FUN_032e1da0(PTR_DAT_072b1fe8);
    thunk_FUN_032e1da0(PTR_DAT_072b1ff8);
    thunk_FUN_032e1da0(PTR_DAT_072b2000);
    thunk_FUN_032e1da0(PTR_DAT_072b2008);
    DAT_076da92c = 1;
  }
  puVar5 = PTR_DAT_072b2008;
  puVar4 = PTR_DAT_072b2000;
  FUN_04efb108(param_1,*(undefined8 *)puVar3);
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
  }
  uVar7 = FUN_05d9d704(param_2);
  uVar6 = FUN_0597d8bc(uVar7,0);
  lVar8 = thunk_FUN_032a56a0(*(undefined8 *)puVar5);
  FUN_041e24b4(lVar8,(ulong)uVar6,*(undefined8 *)puVar4);
  plVar13 = (long *)(param_1 + 0x10);
  *plVar13 = lVar8;
  thunk_FUN_0333a630(plVar13,lVar8);
  puVar4 = PTR_DAT_072b1ff8;
  puVar3 = PTR_DAT_072b1ff0;
  if (0 < (int)uVar6) {
    uVar14 = 0;
    do {
      lVar8 = *plVar13;
      uVar7 = FUN_0597d8c0(uVar14,0);
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_032cd7c0(*(long *)puVar2);
      }
      uVar7 = FUN_05d9d5ac(param_2,uVar7);
      uVar9 = thunk_FUN_032a56a0(*(undefined8 *)puVar3);
      FUN_05dc8528(uVar9,uVar7);
      if (lVar8 == 0) {
LAB_05db4d30:
                    /* WARNING: Subroutine does not return */
        FUN_032d5ee8();
      }
      lVar11 = *(long *)(lVar8 + 0x10);
      lVar12 = *(long *)puVar4;
      *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
      if (lVar11 == 0) goto LAB_05db4d30;
      uVar1 = *(uint *)(lVar8 + 0x18);
      if (uVar1 < *(uint *)(lVar11 + 0x18)) {
        *(uint *)(lVar8 + 0x18) = uVar1 + 1;
        puVar10 = (undefined8 *)(lVar11 + (long)(int)uVar1 * 8 + 0x20);
        *puVar10 = uVar9;
        thunk_FUN_0333a630(puVar10,uVar9);
      }
      else {
        FUN_041e2c78(lVar8,uVar9,*(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70))
        ;
      }
      uVar14 = uVar14 + 1;
    } while (uVar6 != uVar14);
  }
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
  }
  uVar7 = FUN_05d9d630(param_2);
  *(undefined8 *)(param_1 + 0x18) = uVar7;
  thunk_FUN_0333a630((undefined8 *)(param_1 + 0x18),uVar7);
  return;
}


