/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.Controller$$get_Children
ENTRY_POINT: 0728e8b8
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


void Meta_XR_ImmersiveDebugger_UserInterface_Generic_Controller__get_Children(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  int in_w8;
  long lVar4;
  bool bVar5;
  long unaff_x19;
  int unaff_w20;
  long lVar6;
  int unaff_w21;
  long *unaff_x23;
  int unaff_w24;
  float fVar7;
  float fVar8;
  undefined8 uVar9;
  
  iVar1 = (int)((ulong)((long)in_w8 * (long)unaff_w21) >> 0x20);
  iVar1 = in_w8 + (iVar1 - (iVar1 >> 0x1f)) * -3;
  FUN_0728afc8(param_1,iVar1);
  iVar2 = (int)((ulong)((long)(unaff_w20 + 2) * (long)unaff_w21) >> 0x20);
  iVar2 = unaff_w20 + 2 + (iVar2 - (iVar2 >> 0x1f)) * -3;
  FUN_0728afc8(*(undefined4 *)(unaff_x19 + 0x98),unaff_x19 + 0x2c,iVar2);
  FUN_0728afc8(0,unaff_x19 + 0x38,unaff_w20);
  fVar7 = (float)FUN_0728af68();
  fVar8 = -*(float *)(unaff_x19 + 0x98);
  if (fVar7 <= 0.0) {
    fVar8 = *(float *)(unaff_x19 + 0x98);
  }
  if (*(int *)(*unaff_x23 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
  FUN_0728afc8(fVar8,unaff_x19 + 0x38,iVar1);
  fVar7 = (float)FUN_0728af68();
  fVar8 = *(float *)(unaff_x19 + 0x94);
  if (fVar7 <= 0.0) {
    fVar8 = -*(float *)(unaff_x19 + 0x94);
  }
  if (*(int *)(*unaff_x23 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
  FUN_0728afc8(fVar8,unaff_x19 + 0x38,iVar2);
  lVar4 = *(long *)(unaff_x19 + 0x18);
  if (lVar4 != 0) {
    lVar6 = *(long *)(lVar4 + 0x10);
    lVar3 = lVar6;
    while (lVar3 != 0) {
      lVar6 = *(long *)(lVar6 + 0x18);
      if (lVar6 == *(long *)(lVar4 + 0x10)) {
        if (unaff_w24 != 0) {
          FUN_0728e6d8();
          lVar4 = *(long *)(unaff_x19 + 0x18);
          if (lVar4 == 0) break;
        }
        lVar4 = *(long *)(lVar4 + 0x10);
        if (lVar4 != 0) {
          lVar6 = *(long *)(lVar4 + 0x18);
          if (lVar6 == lVar4) {
            return;
          }
          bVar5 = true;
          goto LAB_0728ea40;
        }
        break;
      }
      if (lVar6 == 0) break;
      if (*(int *)(*unaff_x23 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
        lVar4 = *(long *)(unaff_x19 + 0x18);
      }
      *(float *)(lVar6 + 0x34) =
           *(float *)(lVar6 + 0x28) * *(float *)(unaff_x19 + 0x2c) +
           *(float *)(lVar6 + 0x2c) * *(float *)(unaff_x19 + 0x30) +
           *(float *)(lVar6 + 0x30) * *(float *)(unaff_x19 + 0x34);
      *(float *)(lVar6 + 0x38) =
           *(float *)(lVar6 + 0x28) * *(float *)(unaff_x19 + 0x38) +
           *(float *)(lVar6 + 0x2c) * *(float *)(unaff_x19 + 0x3c) +
           *(float *)(lVar6 + 0x30) * *(float *)(unaff_x19 + 0x40);
      lVar3 = lVar4;
    }
  }
LAB_0728ea10:
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
LAB_0728ea40:
  if (bVar5) {
    if (lVar6 == 0) goto LAB_0728ea10;
    uVar9 = *(undefined8 *)(lVar6 + 0x34);
    *(undefined8 *)(unaff_x19 + 0x4c) = uVar9;
    *(undefined8 *)(unaff_x19 + 0x44) = uVar9;
  }
  else {
    if (lVar6 == 0) goto LAB_0728ea10;
    fVar8 = *(float *)(lVar6 + 0x34);
    if (fVar8 < *(float *)(unaff_x19 + 0x44)) {
      *(float *)(unaff_x19 + 0x44) = fVar8;
    }
    if (*(float *)(unaff_x19 + 0x4c) < fVar8) {
      *(float *)(unaff_x19 + 0x4c) = fVar8;
    }
    fVar8 = *(float *)(lVar6 + 0x38);
    if (fVar8 < *(float *)(unaff_x19 + 0x48)) {
      *(float *)(unaff_x19 + 0x48) = fVar8;
    }
    if (*(float *)(unaff_x19 + 0x50) < fVar8) {
      *(float *)(unaff_x19 + 0x50) = fVar8;
    }
  }
  lVar6 = *(long *)(lVar6 + 0x18);
  bVar5 = false;
  if (lVar6 == lVar4) {
    return;
  }
  goto LAB_0728ea40;
}


