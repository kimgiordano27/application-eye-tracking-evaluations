/*
FUNCTION_NAME: OVRPlugin$$get_monoscopic
ENTRY_POINT: 033b9eb4
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_12;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__get_monoscopic(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined *puVar4;
  uint uVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  int *piVar13;
  long *unaff_x19;
  int unaff_w21;
  undefined4 unaff_w23;
  uint unaff_w24;
  long *plVar14;
  int unaff_w28;
  undefined8 uStack0000000000000000;
  undefined8 in_stack_00000008;
  
  if (unaff_x19[1] == 0) {
    uStack0000000000000000 = 0;
  }
  else {
    uStack0000000000000000 = FUN_033aae5c(unaff_x19[1],unaff_w23);
  }
  puVar4 = StringLiteral_2464;
  iVar2 = unaff_w21;
  if (unaff_w21 < 0) {
    iVar2 = unaff_w21 + 1;
  }
  while ((int)unaff_w24 <= iVar2 >> 1) {
    uVar3 = unaff_w24 * 2;
    if ((int)uVar3 < unaff_w21) {
      if (*unaff_x19 == 0) goto LAB_033ba0ec;
      plVar14 = (long *)unaff_x19[2];
      uVar7 = FUN_033aae5c(*unaff_x19,uVar3 + in_stack_00000008._4_4_ + -1);
      if ((*unaff_x19 == 0) ||
         (uVar8 = FUN_033aae5c(*unaff_x19,uVar3 + in_stack_00000008._4_4_), plVar14 == (long *)0x0))
      goto LAB_033ba0ec;
      lVar11 = *plVar14;
      lVar10 = *(long *)puVar4;
      uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar12 != 0) {
        piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == lVar10) {
            puVar9 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
            goto LAB_033b9f90;
          }
          uVar12 = uVar12 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar12 != 0);
      }
      puVar9 = (undefined8 *)FUN_01dde8fc(plVar14,lVar10,0);
LAB_033b9f90:
      uVar5 = (*(code *)*puVar9)(plVar14,uVar7,uVar8,puVar9[1]);
      uVar3 = uVar3 | uVar5 >> 0x1f;
    }
    if (*unaff_x19 == 0) goto LAB_033ba0ec;
    plVar14 = (long *)unaff_x19[2];
    iVar1 = unaff_w28 + uVar3;
    uVar7 = FUN_033aae5c(*unaff_x19,iVar1);
    if (plVar14 == (long *)0x0) goto LAB_033ba0ec;
    lVar11 = *plVar14;
    lVar10 = *(long *)puVar4;
    uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == lVar10) {
          puVar9 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
          goto LAB_033ba014;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    puVar9 = (undefined8 *)FUN_01dde8fc(plVar14,lVar10,0);
LAB_033ba014:
    iVar6 = (*(code *)*puVar9)(plVar14,param_1,uVar7,puVar9[1]);
    if (-1 < iVar6) break;
    lVar10 = *unaff_x19;
    if (lVar10 == 0) goto LAB_033ba0ec;
    uVar7 = FUN_033aae5c(lVar10,iVar1);
    iVar6 = unaff_w28 + unaff_w24;
    FUN_033b49e8(lVar10,uVar7,iVar6);
    lVar10 = unaff_x19[1];
    unaff_w24 = uVar3;
    if (lVar10 != 0) {
      uVar7 = FUN_033aae5c(lVar10,iVar1);
      FUN_033b49e8(lVar10,uVar7,iVar6);
    }
  }
  if (*unaff_x19 != 0) {
    FUN_033b49e8(*unaff_x19,param_1,unaff_w28 + unaff_w24);
    if (unaff_x19[1] == 0) {
      return;
    }
    FUN_033b49e8(unaff_x19[1],uStack0000000000000000,unaff_w28 + unaff_w24);
    return;
  }
LAB_033ba0ec:
                    /* WARNING: Subroutine does not return */
  FUN_01d7db70();
}


