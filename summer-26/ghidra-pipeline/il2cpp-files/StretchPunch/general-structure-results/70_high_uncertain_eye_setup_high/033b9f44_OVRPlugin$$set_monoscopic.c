/*
FUNCTION_NAME: OVRPlugin$$set_monoscopic
ENTRY_POINT: 033b9f44
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_11;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__set_monoscopic(long param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long *unaff_x19;
  long *unaff_x20;
  int unaff_w21;
  int unaff_w23;
  uint unaff_w24;
  uint uVar9;
  long *unaff_x25;
  undefined8 unaff_x26;
  long *plVar10;
  int unaff_w28;
  uint unaff_w29;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  
  do {
    uVar7 = (ulong)*(ushort *)(param_1 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(param_1 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *unaff_x20) {
          puVar4 = (undefined8 *)(param_1 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_033b9f90;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined8 *)FUN_01dde8fc(unaff_x25,*unaff_x20,0);
LAB_033b9f90:
    uVar2 = (*(code *)*puVar4)(unaff_x25,unaff_x26,param_2,puVar4[1]);
    uVar9 = unaff_w24;
    unaff_w29 = unaff_w29 | uVar2 >> 0x1f;
    do {
      unaff_w24 = unaff_w29;
      if (*unaff_x19 == 0) goto LAB_033ba0ec;
      plVar10 = (long *)unaff_x19[2];
      iVar1 = unaff_w28 + unaff_w24;
      FUN_033aae5c(*unaff_x19,iVar1);
      if (plVar10 == (long *)0x0) goto LAB_033ba0ec;
      lVar6 = *plVar10;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *unaff_x20) {
            puVar4 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_033ba014;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar4 = (undefined8 *)FUN_01dde8fc(plVar10,*unaff_x20,0);
LAB_033ba014:
      iVar3 = (*(code *)*puVar4)(plVar10);
      if (-1 < iVar3) {
LAB_033ba084:
        if (*unaff_x19 != 0) {
          FUN_033b49e8();
          if (unaff_x19[1] == 0) {
            return;
          }
          FUN_033b49e8(unaff_x19[1],in_stack_00000000,unaff_w28 + uVar9);
          return;
        }
        goto LAB_033ba0ec;
      }
      lVar6 = *unaff_x19;
      if (lVar6 == 0) goto LAB_033ba0ec;
      uVar5 = FUN_033aae5c(lVar6,iVar1);
      FUN_033b49e8(lVar6,uVar5,unaff_w28 + uVar9);
      lVar6 = unaff_x19[1];
      if (lVar6 != 0) {
        uVar5 = FUN_033aae5c(lVar6,iVar1);
        FUN_033b49e8(lVar6,uVar5,unaff_w28 + uVar9);
      }
      uVar9 = unaff_w24;
      if (unaff_w23 < (int)unaff_w24) goto LAB_033ba084;
      unaff_w29 = unaff_w24 * 2;
    } while (unaff_w21 <= (int)unaff_w29);
    if (*unaff_x19 == 0) {
LAB_033ba0ec:
                    /* WARNING: Subroutine does not return */
      FUN_01d7db70();
    }
    unaff_x25 = (long *)unaff_x19[2];
    unaff_x26 = FUN_033aae5c(*unaff_x19,unaff_w29 + in_stack_00000008._4_4_ + -1);
    if ((*unaff_x19 == 0) ||
       (param_2 = FUN_033aae5c(*unaff_x19,unaff_w29 + in_stack_00000008._4_4_),
       unaff_x25 == (long *)0x0)) goto LAB_033ba0ec;
    param_1 = *unaff_x25;
  } while( true );
}


