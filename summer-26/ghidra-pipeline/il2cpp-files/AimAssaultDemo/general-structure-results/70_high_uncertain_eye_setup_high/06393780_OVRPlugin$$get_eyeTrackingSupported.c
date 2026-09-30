/*
FUNCTION_NAME: OVRPlugin$$get_eyeTrackingSupported
ENTRY_POINT: 06393780
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_6;validity_or_gating_hits_10;functionality_eye_api_context_without_clear_sink_hits_4
*/


long OVRPlugin__get_eyeTrackingSupported(long param_1)

{
  undefined4 uVar1;
  uint uVar2;
  short sVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  uint unaff_w19;
  long unaff_x20;
  short unaff_w21;
  long unaff_x22;
  undefined8 unaff_x23;
  long *unaff_x24;
  undefined8 *unaff_x26;
  undefined8 *unaff_x27;
  undefined2 uStack000000000000000c;
  
  do {
    sVar3 = FUN_060bb390(param_1,*(undefined4 *)(unaff_x22 + 0x20),0);
    if (sVar3 == unaff_w21) {
      if (unaff_x20 == 0) {
        if (*(int *)(*(long *)PTR_DAT_07db6278 + 0xe4) == 0) {
          thunk_FUN_03798b70();
        }
        lVar7 = FUN_06393458(unaff_x23,unaff_w19 & 1);
      }
      else {
        lVar7 = *(long *)(unaff_x20 + 0x10);
        lVar8 = *unaff_x24;
        *(int *)(unaff_x20 + 0x1c) = *(int *)(unaff_x20 + 0x1c) + 1;
        if (lVar7 == 0) break;
        uVar2 = *(uint *)(unaff_x20 + 0x18);
        if (uVar2 < *(uint *)(lVar7 + 0x18)) {
          *(uint *)(unaff_x20 + 0x18) = uVar2 + 1;
          puVar4 = (undefined8 *)(lVar7 + (long)(int)uVar2 * 8 + 0x20);
          *puVar4 = unaff_x23;
          thunk_FUN_037aeb94(puVar4,unaff_x23);
        }
        else {
          FUN_049ceef4(unaff_x20,unaff_x23,
                       *(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
        }
        puVar4 = (undefined8 *)PTR_DAT_07db6610;
        if ((unaff_w19 & 1) == 0) {
          puVar4 = (undefined8 *)PTR_DAT_07db6608;
        }
        lVar7 = thunk_FUN_037788cc(*puVar4);
        FUN_062855bc(lVar7,0);
        *(long *)(lVar7 + 0x10) = unaff_x20;
        thunk_FUN_037aeb94((long *)(lVar7 + 0x10),unaff_x20);
      }
      return lVar7;
    }
    if (*(long *)(unaff_x22 + 0x10) == 0) break;
    sVar3 = FUN_060bb390(*(long *)(unaff_x22 + 0x10),*(undefined4 *)(unaff_x22 + 0x20),0);
    if (sVar3 != 0x2c) {
      uVar5 = *(undefined8 *)(unaff_x22 + 0x10);
      uVar1 = *(undefined4 *)(unaff_x22 + 0x20);
      FUN_031a5e18(uVar5);
      uStack000000000000000c = FUN_060bb390(uVar5,uVar1,0);
      FUN_031ae340(*(undefined8 *)(PTR_DAT_07d86548 + 0x88));
      uVar5 = FUN_0619e108(&stack0x0000000c,0);
      uVar6 = thunk_FUN_037a15ac(PTR_DAT_07db6620);
      uVar5 = System_Convert__ToInt32(uVar6,uVar5,0);
      thunk_FUN_037a15ac(PTR_DAT_07d967c8);
      uVar6 = thunk_FUN_037788cc();
      FUN_062d6d20(uVar6,uVar5,0);
      uVar5 = thunk_FUN_037a15ac(PTR_DAT_07db6618);
                    /* WARNING: Subroutine does not return */
      FUN_0373b680(uVar6,uVar5);
    }
    *(int *)(unaff_x22 + 0x20) = *(int *)(unaff_x22 + 0x20) + 1;
    FUN_06392df8();
    if (unaff_x20 == 0) {
      unaff_x20 = thunk_FUN_037788cc(*unaff_x26);
      FUN_049ce6c0(unaff_x20,*unaff_x27);
      if (unaff_x20 == 0) break;
    }
    lVar7 = *(long *)(unaff_x20 + 0x10);
    lVar8 = *unaff_x24;
    *(int *)(unaff_x20 + 0x1c) = *(int *)(unaff_x20 + 0x1c) + 1;
    if (lVar7 == 0) break;
    uVar2 = *(uint *)(unaff_x20 + 0x18);
    if (uVar2 < *(uint *)(lVar7 + 0x18)) {
      *(uint *)(unaff_x20 + 0x18) = uVar2 + 1;
      puVar4 = (undefined8 *)(lVar7 + (long)(int)uVar2 * 8 + 0x20);
      *puVar4 = unaff_x23;
      thunk_FUN_037aeb94(puVar4,unaff_x23);
    }
    else {
      FUN_049ceef4(unaff_x20,unaff_x23,
                   *(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
    }
    if (*(long *)(unaff_x22 + 0x10) == 0) break;
    if (*(int *)(*(long *)(unaff_x22 + 0x10) + 0x10) <= *(int *)(unaff_x22 + 0x20)) {
      thunk_FUN_037a15ac(PTR_DAT_07d967c8);
      uVar5 = thunk_FUN_037788cc();
      uVar6 = thunk_FUN_037a15ac(PTR_DAT_07db65f8);
      FUN_062d6d20(uVar5,uVar6,0);
      uVar6 = thunk_FUN_037a15ac(PTR_DAT_07db6618);
                    /* WARNING: Subroutine does not return */
      FUN_0373b680(uVar5,uVar6);
    }
    unaff_x23 = FUN_063953d8();
    FUN_06392df8();
    FUN_06393620();
    param_1 = *(long *)(unaff_x22 + 0x10);
  } while (param_1 != 0);
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}


