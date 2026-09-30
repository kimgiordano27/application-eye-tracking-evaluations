/*
FUNCTION_NAME: FUN_05dcce90
ENTRY_POINT: 05dcce90
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_3;validity_or_gating_hits_4;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


void FUN_05dcce90(long param_1,undefined8 param_2)

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
  long *plVar12;
  ulong uVar13;
  long lVar14;
  
  puVar3 = PTR_DAT_072b2cc8;
  puVar2 = PTR_DAT_072b1a48;
  if ((DAT_076da971 & 1) == 0) {
    thunk_FUN_032e1da0(PTR_DAT_072b1a48);
    thunk_FUN_032e1da0(PTR_DAT_072b2cc8);
    thunk_FUN_032e1da0(PTR_DAT_072b2cd0);
    thunk_FUN_032e1da0(PTR_DAT_072b2cd8);
    thunk_FUN_032e1da0(PTR_DAT_072b2ce0);
    thunk_FUN_032e1da0(PTR_DAT_072b2ce8);
    DAT_076da971 = 1;
  }
  puVar5 = PTR_DAT_072b2ce0;
  puVar4 = PTR_DAT_072b2cd8;
  FUN_04efb108(param_1,*(undefined8 *)puVar3);
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
  }
  uVar7 = FUN_05da9ca0(param_2,0);
  uVar6 = FUN_0597d8bc(uVar7,0);
  lVar8 = thunk_FUN_032a56a0(*(undefined8 *)puVar5);
  FUN_041e24b4(lVar8,(ulong)uVar6,*(undefined8 *)puVar4);
  plVar12 = (long *)(param_1 + 0x10);
  *plVar12 = lVar8;
  thunk_FUN_0333a630(plVar12,lVar8);
  puVar4 = PTR_DAT_072b2ce8;
  puVar3 = PTR_DAT_072b2cd0;
  if (0 < (int)uVar6) {
    uVar13 = 0;
    do {
      lVar14 = *plVar12;
      uVar7 = FUN_0597d8c0(uVar13,0);
      lVar8 = *(long *)puVar2;
      if (*(int *)(lVar8 + 0xe0) == 0) {
        thunk_FUN_032cd7c0(lVar8);
      }
      uVar7 = OVRPlugin_OVRP_1_1_0__ovrp_GetTrackingPositionEnabled(param_2,uVar7,0);
      uVar9 = thunk_FUN_032a56a0(*(undefined8 *)puVar4);
      FUN_05dcce10(uVar9,uVar7);
      if (lVar14 == 0) {
LAB_05dcd088:
                    /* WARNING: Subroutine does not return */
        FUN_032d5ee8();
      }
      lVar8 = *(long *)(lVar14 + 0x10);
      lVar11 = *(long *)puVar3;
      *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
      if (lVar8 == 0) goto LAB_05dcd088;
      uVar1 = *(uint *)(lVar14 + 0x18);
      if (uVar1 < *(uint *)(lVar8 + 0x18)) {
        *(uint *)(lVar14 + 0x18) = uVar1 + 1;
        puVar10 = (undefined8 *)(lVar8 + (long)(int)uVar1 * 8 + 0x20);
        *puVar10 = uVar9;
        thunk_FUN_0333a630(puVar10,uVar9);
      }
      else {
        FUN_041e2c78(lVar14,uVar9,*(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70)
                    );
      }
      uVar13 = uVar13 + 1;
    } while (uVar6 != uVar13);
  }
  return;
}


