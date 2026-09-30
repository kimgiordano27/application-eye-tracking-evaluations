/*
FUNCTION_NAME: OVRPlugin.OVRP_1_91_0$$.cctor
ENTRY_POINT: 05db5988
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


void OVRPlugin_OVRP_1_91_0___cctor(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  long unaff_x20;
  long *plVar11;
  undefined8 *unaff_x21;
  ulong uVar12;
  undefined8 *unaff_x22;
  long *unaff_x25;
  
  uVar4 = FUN_0597d8bc();
  lVar5 = thunk_FUN_032a56a0(*unaff_x22);
  FUN_041e24b4(lVar5,(ulong)uVar4,*unaff_x21);
  plVar11 = (long *)(unaff_x20 + 0x10);
  *plVar11 = lVar5;
  thunk_FUN_0333a630(plVar11,lVar5);
  puVar3 = PTR_DAT_072b20b8;
  puVar2 = PTR_DAT_072b2090;
  if (0 < (int)uVar4) {
    uVar12 = 0;
    do {
      lVar5 = *plVar11;
      FUN_0597d8c0(uVar12,0);
      if (*(int *)(*unaff_x25 + 0xe0) == 0) {
        thunk_FUN_032cd7c0(*unaff_x25);
      }
      uVar6 = FUN_05d9eb48();
      uVar7 = thunk_FUN_032a56a0(*(undefined8 *)puVar2);
      FUN_05db5680(uVar7,uVar6);
      if (lVar5 == 0) {
LAB_05db5ab4:
                    /* WARNING: Subroutine does not return */
        FUN_032d5ee8();
      }
      lVar9 = *(long *)(lVar5 + 0x10);
      lVar10 = *(long *)puVar3;
      *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
      if (lVar9 == 0) goto LAB_05db5ab4;
      uVar1 = *(uint *)(lVar5 + 0x18);
      if (uVar1 < *(uint *)(lVar9 + 0x18)) {
        *(uint *)(lVar5 + 0x18) = uVar1 + 1;
        puVar8 = (undefined8 *)(lVar9 + (long)(int)uVar1 * 8 + 0x20);
        *puVar8 = uVar7;
        thunk_FUN_0333a630(puVar8,uVar7);
      }
      else {
        FUN_041e2c78(lVar5,uVar7,*(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70))
        ;
      }
      uVar12 = uVar12 + 1;
    } while (uVar4 != uVar12);
  }
  return;
}


