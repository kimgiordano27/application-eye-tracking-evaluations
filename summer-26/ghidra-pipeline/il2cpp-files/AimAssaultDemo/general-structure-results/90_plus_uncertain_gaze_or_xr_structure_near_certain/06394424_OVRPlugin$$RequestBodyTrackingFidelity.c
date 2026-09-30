/*
FUNCTION_NAME: OVRPlugin$$RequestBodyTrackingFidelity
ENTRY_POINT: 06394424
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 119
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;paired_field_refs_with_eye_source;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


long OVRPlugin__RequestBodyTrackingFidelity(void)

{
  uint uVar1;
  short sVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  int in_w8;
  long lVar9;
  long *plVar10;
  int in_w9;
  long lVar11;
  long lVar12;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar13;
  long *unaff_x25;
  undefined8 *unaff_x26;
  long unaff_x27;
  undefined8 *unaff_x28;
  
  do {
    if (in_w8 <= in_w9) {
      thunk_FUN_037a15ac(PTR_DAT_07d967c8);
      uVar13 = thunk_FUN_037788cc();
      uVar4 = thunk_FUN_037a15ac(PTR_DAT_07db6690);
      FUN_062d6d20(uVar13,uVar4,0);
LAB_06394840:
      uVar4 = thunk_FUN_037a15ac(PTR_DAT_07db6698);
                    /* WARNING: Subroutine does not return */
      FUN_0373b680(uVar13,uVar4);
    }
    uVar4 = FUN_06394ba0();
    if (*(long *)(unaff_x20 + 0x10) == 0) goto LAB_0639476c;
                    /* try { // try from 06394448 to 0649444f has its CatchHandler @ 06394664 */
    sVar2 = FUN_060bb390(*(long *)(unaff_x20 + 0x10),*(undefined4 *)(unaff_x20 + 0x20),0);
                    /* try { // try from 06394450 to 06494687 has its CatchHandler @ 06394390 */
    if (sVar2 == 0x29) {
LAB_0639449c:
      uVar13 = 0;
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
      uVar13 = FUN_06394ba0();
    }
    lVar5 = thunk_FUN_037788cc(*unaff_x26);
    FUN_06395244(lVar5,uVar3,uVar4,uVar13);
    if (*(long *)(unaff_x20 + 0x10) == 0) goto LAB_0639476c;
    sVar2 = FUN_060bb390(*(long *)(unaff_x20 + 0x10),*(undefined4 *)(unaff_x20 + 0x20),0);
    if (sVar2 == 0x29) {
      if (unaff_x27 == 0) {
        return lVar5;
      }
      lVar8 = *(long *)(unaff_x27 + 0x18);
      if (lVar8 != 0) {
        lVar7 = *(long *)(lVar8 + 0x10);
        lVar9 = *unaff_x25;
        *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
        if (lVar7 != 0) {
          uVar1 = *(uint *)(lVar8 + 0x18);
          if (uVar1 < *(uint *)(lVar7 + 0x18)) {
            *(uint *)(lVar8 + 0x18) = uVar1 + 1;
            plVar10 = (long *)(lVar7 + (long)(int)uVar1 * 8 + 0x20);
            *plVar10 = lVar5;
            thunk_FUN_037aeb94(plVar10,lVar5);
            return unaff_x19;
          }
          FUN_049ceef4(lVar8,lVar5,*(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70)
                      );
          return unaff_x19;
        }
      }
      goto LAB_0639476c;
    }
    if (*(long *)(unaff_x20 + 0x10) == 0) goto LAB_0639476c;
    sVar2 = FUN_060bb390(*(long *)(unaff_x20 + 0x10),*(undefined4 *)(unaff_x20 + 0x20),0);
    lVar8 = unaff_x19;
    lVar7 = unaff_x27;
    if (sVar2 == 0x26) {
      uVar6 = FUN_06395298();
      if ((uVar6 & 1) != 0) {
        if ((unaff_x27 == 0) || (*(int *)(unaff_x27 + 0x10) != 8)) {
          lVar7 = thunk_FUN_037788cc(*unaff_x28);
          FUN_06395348(lVar7,8);
          if (unaff_x27 != 0) {
            lVar8 = *(long *)(unaff_x27 + 0x18);
            if (lVar8 == 0) goto LAB_0639476c;
            lVar9 = *(long *)(lVar8 + 0x10);
            lVar11 = *unaff_x25;
            *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
            if (lVar9 == 0) goto LAB_0639476c;
            uVar1 = *(uint *)(lVar8 + 0x18);
            if (uVar1 < *(uint *)(lVar9 + 0x18)) {
              *(uint *)(lVar8 + 0x18) = uVar1 + 1;
              plVar10 = (long *)(lVar9 + (long)(int)uVar1 * 8 + 0x20);
              *plVar10 = lVar7;
              thunk_FUN_037aeb94(plVar10,lVar7);
            }
            else {
              FUN_049ceef4(lVar8,lVar7,
                           *(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
            }
          }
          lVar8 = lVar7;
          if (unaff_x19 != 0) {
            lVar8 = unaff_x19;
          }
          if (lVar7 == 0) goto LAB_0639476c;
        }
        lVar9 = *(long *)(lVar7 + 0x18);
        if (lVar9 == 0) goto LAB_0639476c;
        lVar11 = *(long *)(lVar9 + 0x10);
        lVar12 = *unaff_x25;
        *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
        if (lVar11 == 0) goto LAB_0639476c;
        uVar1 = *(uint *)(lVar9 + 0x18);
        if (uVar1 < *(uint *)(lVar11 + 0x18)) {
          *(uint *)(lVar9 + 0x18) = uVar1 + 1;
          plVar10 = (long *)(lVar11 + (long)(int)uVar1 * 8 + 0x20);
          *plVar10 = lVar5;
          thunk_FUN_037aeb94(plVar10,lVar5);
        }
        else {
          FUN_049ceef4(lVar9,lVar5,
                       *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
        }
        goto LAB_06394634;
      }
LAB_06394834:
      uVar13 = FUN_06394acc();
      goto LAB_06394840;
    }
LAB_06394634:
    if (*(long *)(unaff_x20 + 0x10) == 0) goto LAB_0639476c;
    sVar2 = FUN_060bb390(*(long *)(unaff_x20 + 0x10),*(undefined4 *)(unaff_x20 + 0x20),0);
    unaff_x19 = lVar8;
    unaff_x27 = lVar7;
    if (sVar2 == 0x7c) {
      uVar6 = FUN_06395298();
      if ((uVar6 & 1) == 0) goto LAB_06394834;
      if ((lVar7 == 0) || (*(int *)(lVar7 + 0x10) != 9)) {
        unaff_x27 = thunk_FUN_037788cc(*unaff_x28);
        FUN_06395348(unaff_x27,9);
        if (lVar7 != 0) {
          lVar7 = *(long *)(lVar7 + 0x18);
          if (lVar7 == 0) goto LAB_0639476c;
          lVar9 = *(long *)(lVar7 + 0x10);
          lVar11 = *unaff_x25;
          *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
          if (lVar9 == 0) goto LAB_0639476c;
          uVar1 = *(uint *)(lVar7 + 0x18);
          if (uVar1 < *(uint *)(lVar9 + 0x18)) {
            *(uint *)(lVar7 + 0x18) = uVar1 + 1;
            plVar10 = (long *)(lVar9 + (long)(int)uVar1 * 8 + 0x20);
            *plVar10 = unaff_x27;
            thunk_FUN_037aeb94(plVar10,unaff_x27);
          }
          else {
            FUN_049ceef4(lVar7,unaff_x27,
                         *(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
          }
        }
        unaff_x19 = unaff_x27;
        if (lVar8 != 0) {
          unaff_x19 = lVar8;
        }
        if (unaff_x27 == 0) goto LAB_0639476c;
      }
      lVar8 = *(long *)(unaff_x27 + 0x18);
      if (lVar8 == 0) goto LAB_0639476c;
      lVar7 = *(long *)(lVar8 + 0x10);
      lVar9 = *unaff_x25;
      *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
      if (lVar7 == 0) goto LAB_0639476c;
      uVar1 = *(uint *)(lVar8 + 0x18);
      if (uVar1 < *(uint *)(lVar7 + 0x18)) {
        *(uint *)(lVar8 + 0x18) = uVar1 + 1;
        plVar10 = (long *)(lVar7 + (long)(int)uVar1 * 8 + 0x20);
        *plVar10 = lVar5;
        thunk_FUN_037aeb94(plVar10,lVar5);
      }
      else {
        FUN_049ceef4(lVar8,lVar5,*(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
      }
    }
    if (*(long *)(unaff_x20 + 0x10) == 0) {
LAB_0639476c:
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    in_w9 = *(int *)(unaff_x20 + 0x20);
    in_w8 = *(int *)(*(long *)(unaff_x20 + 0x10) + 0x10);
  } while( true );
}


