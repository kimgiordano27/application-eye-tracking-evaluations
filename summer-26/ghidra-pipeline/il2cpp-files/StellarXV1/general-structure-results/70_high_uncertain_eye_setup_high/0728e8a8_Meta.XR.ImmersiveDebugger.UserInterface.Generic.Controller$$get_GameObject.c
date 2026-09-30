/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.Controller$$get_GameObject
ENTRY_POINT: 0728e8a8
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_13;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_Generic_Controller__get_GameObject(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  bool bVar6;
  long unaff_x19;
  int unaff_w20;
  long lVar7;
  uint unaff_w21;
  long *unaff_x23;
  int unaff_w24;
  float fVar8;
  float fVar9;
  undefined8 uVar10;
  
  uVar1 = unaff_w21 & 0xffff | 0x55550000;
  iVar2 = (int)((ulong)((long)(unaff_w20 + 1) * (long)(int)uVar1) >> 0x20);
  iVar2 = unaff_w20 + 1 + (iVar2 - (iVar2 >> 0x1f)) * -3;
  FUN_0728afc8(*(undefined4 *)(unaff_x19 + 0x94),unaff_x19 + 0x2c,iVar2);
  iVar3 = (int)((ulong)((long)(unaff_w20 + 2) * (long)(int)uVar1) >> 0x20);
  iVar3 = unaff_w20 + 2 + (iVar3 - (iVar3 >> 0x1f)) * -3;
  FUN_0728afc8(*(undefined4 *)(unaff_x19 + 0x98),unaff_x19 + 0x2c,iVar3);
  FUN_0728afc8(0,unaff_x19 + 0x38,unaff_w20);
  fVar8 = (float)FUN_0728af68();
  fVar9 = -*(float *)(unaff_x19 + 0x98);
  if (fVar8 <= 0.0) {
    fVar9 = *(float *)(unaff_x19 + 0x98);
  }
  if (*(int *)(*unaff_x23 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
  FUN_0728afc8(fVar9,unaff_x19 + 0x38,iVar2);
  fVar8 = (float)FUN_0728af68();
  fVar9 = *(float *)(unaff_x19 + 0x94);
  if (fVar8 <= 0.0) {
    fVar9 = -*(float *)(unaff_x19 + 0x94);
  }
  if (*(int *)(*unaff_x23 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
  FUN_0728afc8(fVar9,unaff_x19 + 0x38,iVar3);
  lVar5 = *(long *)(unaff_x19 + 0x18);
  if (lVar5 != 0) {
    lVar7 = *(long *)(lVar5 + 0x10);
    lVar4 = lVar7;
    while (lVar4 != 0) {
      lVar7 = *(long *)(lVar7 + 0x18);
      if (lVar7 == *(long *)(lVar5 + 0x10)) {
        if (unaff_w24 != 0) {
          FUN_0728e6d8();
          lVar5 = *(long *)(unaff_x19 + 0x18);
          if (lVar5 == 0) break;
        }
        lVar5 = *(long *)(lVar5 + 0x10);
        if (lVar5 != 0) {
          lVar7 = *(long *)(lVar5 + 0x18);
          if (lVar7 == lVar5) {
            return;
          }
          bVar6 = true;
          goto LAB_0728ea40;
        }
        break;
      }
      if (lVar7 == 0) break;
      if (*(int *)(*unaff_x23 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
        lVar5 = *(long *)(unaff_x19 + 0x18);
      }
      *(float *)(lVar7 + 0x34) =
           *(float *)(lVar7 + 0x28) * *(float *)(unaff_x19 + 0x2c) +
           *(float *)(lVar7 + 0x2c) * *(float *)(unaff_x19 + 0x30) +
           *(float *)(lVar7 + 0x30) * *(float *)(unaff_x19 + 0x34);
      *(float *)(lVar7 + 0x38) =
           *(float *)(lVar7 + 0x28) * *(float *)(unaff_x19 + 0x38) +
           *(float *)(lVar7 + 0x2c) * *(float *)(unaff_x19 + 0x3c) +
           *(float *)(lVar7 + 0x30) * *(float *)(unaff_x19 + 0x40);
      lVar4 = lVar5;
    }
  }
LAB_0728ea10:
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
LAB_0728ea40:
  if (bVar6) {
    if (lVar7 == 0) goto LAB_0728ea10;
    uVar10 = *(undefined8 *)(lVar7 + 0x34);
    *(undefined8 *)(unaff_x19 + 0x4c) = uVar10;
    *(undefined8 *)(unaff_x19 + 0x44) = uVar10;
  }
  else {
    if (lVar7 == 0) goto LAB_0728ea10;
    fVar9 = *(float *)(lVar7 + 0x34);
    if (fVar9 < *(float *)(unaff_x19 + 0x44)) {
      *(float *)(unaff_x19 + 0x44) = fVar9;
    }
    if (*(float *)(unaff_x19 + 0x4c) < fVar9) {
      *(float *)(unaff_x19 + 0x4c) = fVar9;
    }
    fVar9 = *(float *)(lVar7 + 0x38);
    if (fVar9 < *(float *)(unaff_x19 + 0x48)) {
      *(float *)(unaff_x19 + 0x48) = fVar9;
    }
    if (*(float *)(unaff_x19 + 0x50) < fVar9) {
      *(float *)(unaff_x19 + 0x50) = fVar9;
    }
  }
  lVar7 = *(long *)(lVar7 + 0x18);
  bVar6 = false;
  if (lVar7 == lVar5) {
    return;
  }
  goto LAB_0728ea40;
}


