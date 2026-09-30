/*
FUNCTION_NAME: OVRPlugin$$ResetBodyTrackingCalibration
ENTRY_POINT: 063945bc
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


long OVRPlugin__ResetBodyTrackingCalibration(long param_1,long param_2,undefined8 param_3)

{
  uint uVar1;
  short sVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  undefined8 uVar12;
  long *unaff_x25;
  undefined8 *unaff_x26;
  undefined8 *unaff_x28;
  
  do {
    FUN_049ceef4(param_1,param_2,param_3);
    param_2 = unaff_x22;
LAB_063945c0:
    do {
      lVar7 = param_2;
      if (unaff_x19 != 0) {
        lVar7 = unaff_x19;
      }
      if (param_2 == 0) goto LAB_0639476c;
      do {
        lVar5 = *(long *)(param_2 + 0x18);
        if (lVar5 == 0) goto LAB_0639476c;
        lVar8 = *(long *)(lVar5 + 0x10);
        lVar10 = *unaff_x25;
        *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
        if (lVar8 == 0) goto LAB_0639476c;
        uVar1 = *(uint *)(lVar5 + 0x18);
        if (uVar1 < *(uint *)(lVar8 + 0x18)) {
          *(uint *)(lVar5 + 0x18) = uVar1 + 1;
          plVar9 = (long *)(lVar8 + (long)(int)uVar1 * 8 + 0x20);
          *plVar9 = unaff_x21;
          thunk_FUN_037aeb94(plVar9,unaff_x21);
        }
        else {
          FUN_049ceef4(lVar5,unaff_x21,
                       *(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
        }
        do {
          if (*(long *)(unaff_x20 + 0x10) == 0) goto LAB_0639476c;
          sVar2 = FUN_060bb390(*(long *)(unaff_x20 + 0x10),*(undefined4 *)(unaff_x20 + 0x20),0);
          unaff_x19 = lVar7;
          lVar5 = param_2;
          if (sVar2 == 0x7c) {
            uVar6 = FUN_06395298();
            if ((uVar6 & 1) == 0) goto LAB_06394834;
                    /* catch(type#1 @ 078dda18) { ... } // from try @ 06394448 with catch @ 06394664
                        */
            if ((param_2 == 0) || (*(int *)(param_2 + 0x10) != 9)) {
              lVar5 = thunk_FUN_037788cc(*unaff_x28);
              FUN_06395348(lVar5,9);
              if (param_2 != 0) {
                lVar8 = *(long *)(param_2 + 0x18);
                if (lVar8 == 0) goto LAB_0639476c;
                lVar10 = *(long *)(lVar8 + 0x10);
                lVar11 = *unaff_x25;
                *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
                if (lVar10 == 0) goto LAB_0639476c;
                uVar1 = *(uint *)(lVar8 + 0x18);
                if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                  *(uint *)(lVar8 + 0x18) = uVar1 + 1;
                  plVar9 = (long *)(lVar10 + (long)(int)uVar1 * 8 + 0x20);
                  *plVar9 = lVar5;
                  thunk_FUN_037aeb94(plVar9,lVar5);
                }
                else {
                  FUN_049ceef4(lVar8,lVar5,
                               *(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
                }
              }
              unaff_x19 = lVar5;
              if (lVar7 != 0) {
                unaff_x19 = lVar7;
              }
              if (lVar5 == 0) goto LAB_0639476c;
            }
            lVar7 = *(long *)(lVar5 + 0x18);
            if (lVar7 == 0) goto LAB_0639476c;
            lVar8 = *(long *)(lVar7 + 0x10);
            lVar10 = *unaff_x25;
            *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
            if (lVar8 == 0) goto LAB_0639476c;
            uVar1 = *(uint *)(lVar7 + 0x18);
            if (uVar1 < *(uint *)(lVar8 + 0x18)) {
              *(uint *)(lVar7 + 0x18) = uVar1 + 1;
              plVar9 = (long *)(lVar8 + (long)(int)uVar1 * 8 + 0x20);
              *plVar9 = unaff_x21;
              thunk_FUN_037aeb94(plVar9,unaff_x21);
            }
            else {
              FUN_049ceef4(lVar7,unaff_x21,
                           *(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
            }
          }
          if (*(long *)(unaff_x20 + 0x10) == 0) goto LAB_0639476c;
          if (*(int *)(*(long *)(unaff_x20 + 0x10) + 0x10) <= *(int *)(unaff_x20 + 0x20)) {
            thunk_FUN_037a15ac(PTR_DAT_07d967c8);
            uVar12 = thunk_FUN_037788cc();
            uVar4 = thunk_FUN_037a15ac(PTR_DAT_07db6690);
            FUN_062d6d20(uVar12,uVar4,0);
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
            if (lVar5 != 0) {
              lVar7 = *(long *)(lVar5 + 0x18);
              if (lVar7 == 0) goto LAB_0639476c;
              lVar5 = *(long *)(lVar7 + 0x10);
              lVar8 = *unaff_x25;
              *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
              if (lVar5 == 0) goto LAB_0639476c;
              uVar1 = *(uint *)(lVar7 + 0x18);
              if (uVar1 < *(uint *)(lVar5 + 0x18)) {
                *(uint *)(lVar7 + 0x18) = uVar1 + 1;
                plVar9 = (long *)(lVar5 + (long)(int)uVar1 * 8 + 0x20);
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
          if (*(long *)(unaff_x20 + 0x10) == 0) goto LAB_0639476c;
          sVar2 = FUN_060bb390(*(long *)(unaff_x20 + 0x10),*(undefined4 *)(unaff_x20 + 0x20),0);
          lVar7 = unaff_x19;
          param_2 = lVar5;
        } while (sVar2 != 0x26);
        uVar6 = FUN_06395298();
        if ((uVar6 & 1) == 0) {
LAB_06394834:
          uVar12 = FUN_06394acc();
LAB_06394840:
          uVar4 = thunk_FUN_037a15ac(PTR_DAT_07db6698);
                    /* WARNING: Subroutine does not return */
          FUN_0373b680(uVar12,uVar4);
        }
      } while ((lVar5 != 0) && (*(int *)(lVar5 + 0x10) == 8));
      param_2 = thunk_FUN_037788cc(*unaff_x28);
      FUN_06395348(param_2,8);
    } while (lVar5 == 0);
    param_1 = *(long *)(lVar5 + 0x18);
    if (param_1 == 0) {
LAB_0639476c:
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    lVar7 = *(long *)(param_1 + 0x10);
    lVar5 = *unaff_x25;
    *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
    if (lVar7 == 0) goto LAB_0639476c;
    uVar1 = *(uint *)(param_1 + 0x18);
    if (uVar1 < *(uint *)(lVar7 + 0x18)) {
      *(uint *)(param_1 + 0x18) = uVar1 + 1;
      plVar9 = (long *)(lVar7 + (long)(int)uVar1 * 8 + 0x20);
      *plVar9 = param_2;
      thunk_FUN_037aeb94(plVar9,param_2);
      goto LAB_063945c0;
    }
    param_3 = *(undefined8 *)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70);
    unaff_x22 = param_2;
  } while( true );
}


