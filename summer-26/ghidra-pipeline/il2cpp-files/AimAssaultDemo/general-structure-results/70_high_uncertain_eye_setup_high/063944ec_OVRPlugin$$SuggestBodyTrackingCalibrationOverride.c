/*
FUNCTION_NAME: OVRPlugin$$SuggestBodyTrackingCalibrationOverride
ENTRY_POINT: 063944ec
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


long OVRPlugin__SuggestBodyTrackingCalibrationOverride(long param_1,ulong param_2)

{
  uint uVar1;
  short sVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  undefined8 uVar12;
  long *unaff_x25;
  undefined8 *unaff_x26;
  long unaff_x27;
  undefined8 *unaff_x28;
  
  do {
    sVar2 = FUN_060bb390(param_1,param_2,0);
    lVar7 = unaff_x19;
    lVar6 = unaff_x27;
    if (sVar2 == 0x26) {
      uVar5 = FUN_06395298();
      if ((uVar5 & 1) == 0) {
LAB_06394834:
        uVar4 = FUN_06394acc();
LAB_06394840:
        uVar12 = thunk_FUN_037a15ac(PTR_DAT_07db6698);
                    /* WARNING: Subroutine does not return */
        FUN_0373b680(uVar4,uVar12);
      }
      if ((unaff_x27 == 0) || (*(int *)(unaff_x27 + 0x10) != 8)) {
        lVar6 = thunk_FUN_037788cc(*unaff_x28);
        FUN_06395348(lVar6,8);
        if (unaff_x27 != 0) {
          lVar7 = *(long *)(unaff_x27 + 0x18);
          if (lVar7 == 0) goto LAB_0639476c;
          lVar8 = *(long *)(lVar7 + 0x10);
          lVar10 = *unaff_x25;
          *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
          if (lVar8 == 0) goto LAB_0639476c;
          uVar1 = *(uint *)(lVar7 + 0x18);
          if (uVar1 < *(uint *)(lVar8 + 0x18)) {
            *(uint *)(lVar7 + 0x18) = uVar1 + 1;
            plVar9 = (long *)(lVar8 + (long)(int)uVar1 * 8 + 0x20);
            *plVar9 = lVar6;
            thunk_FUN_037aeb94(plVar9,lVar6);
          }
          else {
            FUN_049ceef4(lVar7,lVar6,
                         *(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
          }
        }
        lVar7 = lVar6;
        if (unaff_x19 != 0) {
          lVar7 = unaff_x19;
        }
        if (lVar6 == 0) goto LAB_0639476c;
      }
      lVar8 = *(long *)(lVar6 + 0x18);
      if (lVar8 != 0) {
        lVar10 = *(long *)(lVar8 + 0x10);
        lVar11 = *unaff_x25;
        *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
        if (lVar10 != 0) {
          uVar1 = *(uint *)(lVar8 + 0x18);
          if (uVar1 < *(uint *)(lVar10 + 0x18)) {
            *(uint *)(lVar8 + 0x18) = uVar1 + 1;
            plVar9 = (long *)(lVar10 + (long)(int)uVar1 * 8 + 0x20);
            *plVar9 = unaff_x21;
            thunk_FUN_037aeb94(plVar9,unaff_x21);
          }
          else {
            FUN_049ceef4(lVar8,unaff_x21,
                         *(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
          }
          goto LAB_06394634;
        }
      }
      goto LAB_0639476c;
    }
LAB_06394634:
    if (*(long *)(unaff_x20 + 0x10) == 0) goto LAB_0639476c;
    sVar2 = FUN_060bb390(*(long *)(unaff_x20 + 0x10),*(undefined4 *)(unaff_x20 + 0x20),0);
    unaff_x19 = lVar7;
    unaff_x27 = lVar6;
    if (sVar2 == 0x7c) {
      uVar5 = FUN_06395298();
      if ((uVar5 & 1) == 0) goto LAB_06394834;
      if ((lVar6 == 0) || (*(int *)(lVar6 + 0x10) != 9)) {
        unaff_x27 = thunk_FUN_037788cc(*unaff_x28);
        FUN_06395348(unaff_x27,9);
        if (lVar6 != 0) {
          lVar6 = *(long *)(lVar6 + 0x18);
          if (lVar6 == 0) goto LAB_0639476c;
          lVar8 = *(long *)(lVar6 + 0x10);
          lVar10 = *unaff_x25;
          *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
          if (lVar8 == 0) goto LAB_0639476c;
          uVar1 = *(uint *)(lVar6 + 0x18);
          if (uVar1 < *(uint *)(lVar8 + 0x18)) {
            *(uint *)(lVar6 + 0x18) = uVar1 + 1;
            plVar9 = (long *)(lVar8 + (long)(int)uVar1 * 8 + 0x20);
            *plVar9 = unaff_x27;
            thunk_FUN_037aeb94(plVar9,unaff_x27);
          }
          else {
            FUN_049ceef4(lVar6,unaff_x27,
                         *(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
          }
        }
        unaff_x19 = unaff_x27;
        if (lVar7 != 0) {
          unaff_x19 = lVar7;
        }
        if (unaff_x27 == 0) goto LAB_0639476c;
      }
      lVar7 = *(long *)(unaff_x27 + 0x18);
      if (lVar7 == 0) goto LAB_0639476c;
      lVar6 = *(long *)(lVar7 + 0x10);
      lVar8 = *unaff_x25;
      *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
      if (lVar6 == 0) goto LAB_0639476c;
      uVar1 = *(uint *)(lVar7 + 0x18);
      if (uVar1 < *(uint *)(lVar6 + 0x18)) {
        *(uint *)(lVar7 + 0x18) = uVar1 + 1;
        plVar9 = (long *)(lVar6 + (long)(int)uVar1 * 8 + 0x20);
        *plVar9 = unaff_x21;
        thunk_FUN_037aeb94(plVar9,unaff_x21);
      }
      else {
        FUN_049ceef4(lVar7,unaff_x21,
                     *(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
      }
    }
    if (*(long *)(unaff_x20 + 0x10) == 0) goto LAB_0639476c;
    if (*(int *)(*(long *)(unaff_x20 + 0x10) + 0x10) <= *(int *)(unaff_x20 + 0x20)) {
      thunk_FUN_037a15ac(PTR_DAT_07d967c8);
      uVar4 = thunk_FUN_037788cc();
      uVar12 = thunk_FUN_037a15ac(PTR_DAT_07db6690);
      FUN_062d6d20(uVar4,uVar12,0);
      goto LAB_06394840;
    }
    uVar4 = FUN_06394ba0();
    if (*(long *)(unaff_x20 + 0x10) == 0) goto LAB_0639476c;
    sVar2 = FUN_060bb390(*(long *)(unaff_x20 + 0x10),*(undefined4 *)(unaff_x20 + 0x20),0);
    if (sVar2 == 0x29) {
LAB_0639449c:
      uVar12 = 0;
      uVar3 = 3;
    }
    else {
      if (*(long *)(unaff_x20 + 0x10) == 0) goto LAB_0639476c;
      sVar2 = FUN_060bb390(*(long *)(unaff_x20 + 0x10),*(undefined4 *)(unaff_x20 + 0x20),0);
      if (sVar2 == 0x7c) goto LAB_0639449c;
      if (*(long *)(unaff_x20 + 0x10) == 0) goto LAB_0639476c;
      sVar2 = FUN_060bb390(*(long *)(unaff_x20 + 0x10),*(undefined4 *)(unaff_x20 + 0x20),0);
      if (sVar2 == 0x26) goto LAB_0639449c;
      uVar3 = FUN_06394fe4();
      uVar12 = FUN_06394ba0();
    }
    unaff_x21 = thunk_FUN_037788cc(*unaff_x26);
    FUN_06395244(unaff_x21,uVar3,uVar4,uVar12);
    if (*(long *)(unaff_x20 + 0x10) == 0) goto LAB_0639476c;
    sVar2 = FUN_060bb390(*(long *)(unaff_x20 + 0x10),*(undefined4 *)(unaff_x20 + 0x20),0);
    if (sVar2 == 0x29) {
      if (unaff_x27 != 0) {
        lVar7 = *(long *)(unaff_x27 + 0x18);
        if (lVar7 == 0) goto LAB_0639476c;
        lVar6 = *(long *)(lVar7 + 0x10);
        lVar8 = *unaff_x25;
        *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
        if (lVar6 == 0) {
LAB_0639476c:
                    /* WARNING: Subroutine does not return */
          FUN_0373b7b4();
        }
        uVar1 = *(uint *)(lVar7 + 0x18);
        if (uVar1 < *(uint *)(lVar6 + 0x18)) {
          *(uint *)(lVar7 + 0x18) = uVar1 + 1;
          plVar9 = (long *)(lVar6 + (long)(int)uVar1 * 8 + 0x20);
          *plVar9 = unaff_x21;
          thunk_FUN_037aeb94(plVar9,unaff_x21);
          unaff_x21 = unaff_x19;
        }
        else {
          FUN_049ceef4(lVar7,unaff_x21,
                       *(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
          unaff_x21 = unaff_x19;
        }
      }
      return unaff_x21;
    }
    param_1 = *(long *)(unaff_x20 + 0x10);
    if (param_1 == 0) goto LAB_0639476c;
    param_2 = (ulong)*(uint *)(unaff_x20 + 0x20);
  } while( true );
}


