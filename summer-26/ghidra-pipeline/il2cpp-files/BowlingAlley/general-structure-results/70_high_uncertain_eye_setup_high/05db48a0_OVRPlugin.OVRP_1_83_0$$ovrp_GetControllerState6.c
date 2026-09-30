/*
FUNCTION_NAME: OVRPlugin.OVRP_1_83_0$$ovrp_GetControllerState6
ENTRY_POINT: 05db48a0
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_83_0__ovrp_GetControllerState6(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  long unaff_x19;
  long *plVar11;
  long unaff_x22;
  ulong uVar12;
  long *unaff_x26;
  
  thunk_FUN_032e1da0(*(undefined8 *)(param_1 + 0xfc8));
  thunk_FUN_032e1da0(PTR_DAT_072b1fd0);
  *(undefined1 *)(unaff_x22 + 0x92a) = 1;
  puVar3 = PTR_DAT_072b1fd0;
  puVar2 = PTR_DAT_072b1fc8;
  FUN_04efb108();
  if (*(int *)(*unaff_x26 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
  }
  uVar5 = FUN_05d9d130();
  uVar4 = FUN_0597d8bc(uVar5,0);
  lVar6 = thunk_FUN_032a56a0(*(undefined8 *)puVar3);
  FUN_041e24b4(lVar6,(ulong)uVar4,*(undefined8 *)puVar2);
  plVar11 = (long *)(unaff_x19 + 0x10);
  *plVar11 = lVar6;
  thunk_FUN_0333a630(plVar11,lVar6);
  puVar3 = PTR_DAT_072b1fc0;
  puVar2 = PTR_DAT_072b1fb8;
  if (0 < (int)uVar4) {
    uVar12 = 0;
    do {
      lVar6 = *plVar11;
      FUN_0597d8c0(uVar12,0);
      if (*(int *)(*unaff_x26 + 0xe0) == 0) {
        thunk_FUN_032cd7c0(*unaff_x26);
      }
      uVar5 = FUN_05d9cfd8();
      uVar7 = thunk_FUN_032a56a0(*(undefined8 *)puVar2);
      FUN_05dc8484(uVar7,uVar5);
      if (lVar6 == 0) {
LAB_05db4a48:
                    /* WARNING: Subroutine does not return */
        FUN_032d5ee8();
      }
      lVar9 = *(long *)(lVar6 + 0x10);
      lVar10 = *(long *)puVar3;
      *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
      if (lVar9 == 0) goto LAB_05db4a48;
      uVar1 = *(uint *)(lVar6 + 0x18);
      if (uVar1 < *(uint *)(lVar9 + 0x18)) {
        *(uint *)(lVar6 + 0x18) = uVar1 + 1;
        puVar8 = (undefined8 *)(lVar9 + (long)(int)uVar1 * 8 + 0x20);
        *puVar8 = uVar7;
        thunk_FUN_0333a630(puVar8,uVar7);
      }
      else {
        FUN_041e2c78(lVar6,uVar7,*(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70))
        ;
      }
      uVar12 = uVar12 + 1;
    } while (uVar4 != uVar12);
  }
  if (*(int *)(*unaff_x26 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
  }
  uVar5 = FUN_05d9d05c();
  *(undefined8 *)(unaff_x19 + 0x18) = uVar5;
  thunk_FUN_0333a630((undefined8 *)(unaff_x19 + 0x18),uVar5);
  return;
}


