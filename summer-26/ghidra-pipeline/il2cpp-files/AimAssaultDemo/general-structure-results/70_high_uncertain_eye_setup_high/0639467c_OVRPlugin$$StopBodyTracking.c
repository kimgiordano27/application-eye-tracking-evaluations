/*
FUNCTION_NAME: OVRPlugin$$StopBodyTracking
ENTRY_POINT: 0639467c
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;functionality_eye_api_context_without_clear_sink_hits_2
*/


long OVRPlugin__StopBodyTracking(long param_1)

{
  uint uVar1;
  short sVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  undefined8 uVar11;
  long *unaff_x25;
  undefined8 *unaff_x26;
  long unaff_x27;
  undefined8 *unaff_x28;
  
  while( true ) {
    FUN_06395348(param_1,9);
                    /* try { // try from 06394688 to 0649468b has its CatchHandler @ 063946c4 */
    if (unaff_x27 != 0) {
                    /* try { // try from 0639468c to 064946b3 has its CatchHandler @ 06394390 */
      lVar6 = *(long *)(unaff_x27 + 0x18);
      if (lVar6 == 0) break;
      lVar7 = *(long *)(lVar6 + 0x10);
      lVar9 = *unaff_x25;
      *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
      if (lVar7 == 0) break;
      uVar1 = *(uint *)(lVar6 + 0x18);
                    /* try { // try from 063946b4 to 064946c3 has its CatchHandler @ 063946c4 */
      if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                    /* catch() { ... } // from try @ 06394688 with catch @ 063946c4
                       catch() { ... } // from try @ 063946b4 with catch @ 063946c4 */
        *(uint *)(lVar6 + 0x18) = uVar1 + 1;
                    /* try { // try from 063946c8 to 064946cb has its CatchHandler @ 063946d4 */
        plVar8 = (long *)(lVar7 + (long)(int)uVar1 * 8 + 0x20);
        *plVar8 = param_1;
                    /* try { // try from 063946cc to 064946d7 has its CatchHandler @ 06394390 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 063946c8 with catch @ 063946d4
                        */
        thunk_FUN_037aeb94(plVar8,param_1);
      }
      else {
        FUN_049ceef4(lVar6,param_1,*(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70)
                    );
      }
    }
    lVar6 = param_1;
    if (unaff_x19 != 0) {
      lVar6 = unaff_x19;
    }
    if (param_1 == 0) break;
    do {
      lVar7 = *(long *)(param_1 + 0x18);
      if (lVar7 == 0) goto LAB_0639476c;
      lVar9 = *(long *)(lVar7 + 0x10);
      lVar10 = *unaff_x25;
      *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
      if (lVar9 == 0) goto LAB_0639476c;
      uVar1 = *(uint *)(lVar7 + 0x18);
      if (uVar1 < *(uint *)(lVar9 + 0x18)) {
        *(uint *)(lVar7 + 0x18) = uVar1 + 1;
        plVar8 = (long *)(lVar9 + (long)(int)uVar1 * 8 + 0x20);
        *plVar8 = unaff_x21;
        thunk_FUN_037aeb94(plVar8,unaff_x21);
      }
      else {
        FUN_049ceef4(lVar7,unaff_x21,
                     *(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
      }
      do {
        if (*(long *)(unaff_x20 + 0x10) == 0) goto LAB_0639476c;
        if (*(int *)(*(long *)(unaff_x20 + 0x10) + 0x10) <= *(int *)(unaff_x20 + 0x20)) {
          thunk_FUN_037a15ac(PTR_DAT_07d967c8);
          uVar11 = thunk_FUN_037788cc();
          uVar4 = thunk_FUN_037a15ac(PTR_DAT_07db6690);
          FUN_062d6d20(uVar11,uVar4,0);
          goto LAB_06394840;
        }
        uVar4 = FUN_06394ba0();
        if (*(long *)(unaff_x20 + 0x10) == 0) goto LAB_0639476c;
        sVar2 = FUN_060bb390(*(long *)(unaff_x20 + 0x10),*(undefined4 *)(unaff_x20 + 0x20),0);
        if (sVar2 == 0x29) {
LAB_0639449c:
          uVar11 = 0;
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
          uVar11 = FUN_06394ba0();
        }
        unaff_x21 = thunk_FUN_037788cc(*unaff_x26);
        FUN_06395244(unaff_x21,uVar3,uVar4,uVar11);
        if (*(long *)(unaff_x20 + 0x10) == 0) goto LAB_0639476c;
        sVar2 = FUN_060bb390(*(long *)(unaff_x20 + 0x10),*(undefined4 *)(unaff_x20 + 0x20),0);
        if (sVar2 == 0x29) {
          if (param_1 != 0) {
            lVar7 = *(long *)(param_1 + 0x18);
            if (lVar7 == 0) goto LAB_0639476c;
            lVar9 = *(long *)(lVar7 + 0x10);
            lVar10 = *unaff_x25;
            *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
            if (lVar9 == 0) goto LAB_0639476c;
            uVar1 = *(uint *)(lVar7 + 0x18);
            if (uVar1 < *(uint *)(lVar9 + 0x18)) {
              *(uint *)(lVar7 + 0x18) = uVar1 + 1;
              plVar8 = (long *)(lVar9 + (long)(int)uVar1 * 8 + 0x20);
              *plVar8 = unaff_x21;
              thunk_FUN_037aeb94(plVar8,unaff_x21);
              unaff_x21 = lVar6;
            }
            else {
              FUN_049ceef4(lVar7,unaff_x21,
                           *(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
              unaff_x21 = lVar6;
            }
          }
          return unaff_x21;
        }
        if (*(long *)(unaff_x20 + 0x10) == 0) goto LAB_0639476c;
        sVar2 = FUN_060bb390(*(long *)(unaff_x20 + 0x10),*(undefined4 *)(unaff_x20 + 0x20),0);
        unaff_x19 = lVar6;
        unaff_x27 = param_1;
        if (sVar2 == 0x26) {
          uVar5 = FUN_06395298();
          if ((uVar5 & 1) == 0) goto LAB_06394834;
          if ((param_1 == 0) || (*(int *)(param_1 + 0x10) != 8)) {
            unaff_x27 = thunk_FUN_037788cc(*unaff_x28);
            FUN_06395348(unaff_x27,8);
            if (param_1 != 0) {
              lVar7 = *(long *)(param_1 + 0x18);
              if (lVar7 == 0) goto LAB_0639476c;
              lVar9 = *(long *)(lVar7 + 0x10);
              lVar10 = *unaff_x25;
              *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
              if (lVar9 == 0) goto LAB_0639476c;
              uVar1 = *(uint *)(lVar7 + 0x18);
              if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                *(uint *)(lVar7 + 0x18) = uVar1 + 1;
                plVar8 = (long *)(lVar9 + (long)(int)uVar1 * 8 + 0x20);
                *plVar8 = unaff_x27;
                thunk_FUN_037aeb94(plVar8,unaff_x27);
              }
              else {
                FUN_049ceef4(lVar7,unaff_x27,
                             *(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
              }
            }
            unaff_x19 = unaff_x27;
            if (lVar6 != 0) {
              unaff_x19 = lVar6;
            }
            if (unaff_x27 == 0) goto LAB_0639476c;
          }
          lVar6 = *(long *)(unaff_x27 + 0x18);
          if (lVar6 == 0) goto LAB_0639476c;
          lVar7 = *(long *)(lVar6 + 0x10);
          lVar9 = *unaff_x25;
          *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
          if (lVar7 == 0) goto LAB_0639476c;
          uVar1 = *(uint *)(lVar6 + 0x18);
          if (uVar1 < *(uint *)(lVar7 + 0x18)) {
            *(uint *)(lVar6 + 0x18) = uVar1 + 1;
            plVar8 = (long *)(lVar7 + (long)(int)uVar1 * 8 + 0x20);
            *plVar8 = unaff_x21;
            thunk_FUN_037aeb94(plVar8,unaff_x21);
          }
          else {
            FUN_049ceef4(lVar6,unaff_x21,
                         *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
          }
        }
        if (*(long *)(unaff_x20 + 0x10) == 0) goto LAB_0639476c;
        sVar2 = FUN_060bb390(*(long *)(unaff_x20 + 0x10),*(undefined4 *)(unaff_x20 + 0x20),0);
        lVar6 = unaff_x19;
        param_1 = unaff_x27;
      } while (sVar2 != 0x7c);
      uVar5 = FUN_06395298();
      if ((uVar5 & 1) == 0) {
LAB_06394834:
        uVar11 = FUN_06394acc();
LAB_06394840:
        uVar4 = thunk_FUN_037a15ac(PTR_DAT_07db6698);
                    /* WARNING: Subroutine does not return */
        FUN_0373b680(uVar11,uVar4);
      }
    } while ((unaff_x27 != 0) && (*(int *)(unaff_x27 + 0x10) == 9));
    param_1 = thunk_FUN_037788cc(*unaff_x28);
  }
LAB_0639476c:
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}


