/*
FUNCTION_NAME: OVREyeGaze$$get_EyeTrackingEnabled
ENTRY_POINT: 079abdac
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 103
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;attempted_use
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_7;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


void OVREyeGaze__get_EyeTrackingEnabled(undefined8 *param_1)

{
  undefined4 uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  long unaff_x19;
  undefined8 *unaff_x20;
  undefined8 uVar8;
  long *plVar9;
  undefined8 *unaff_x23;
  undefined8 uVar10;
  undefined4 unaff_s8;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined4 uStack0000000000000010;
  undefined8 uStack0000000000000014;
  
  lVar3 = thunk_FUN_040b4efc(*param_1);
  FUN_076bca34(lVar3,0);
  uVar8 = *(undefined8 *)(unaff_x19 + 0x58);
  lVar4 = thunk_FUN_040b4efc(*unaff_x23);
  FUN_079e3440(unaff_s8,lVar4,uVar8,0);
  if (lVar3 != 0) {
    plVar9 = (long *)(lVar3 + 0x10);
    *plVar9 = lVar4;
    thunk_FUN_040ec700(plVar9,lVar4);
    *(undefined4 *)(lVar3 + 0x18) = 0;
    *(undefined8 *)(lVar3 + 0x24) = in_stack_00000008;
    *(undefined8 *)(lVar3 + 0x1c) = in_stack_00000000;
    *(undefined8 *)(lVar3 + 0x30) = uStack0000000000000014;
    *(ulong *)(lVar3 + 0x28) = CONCAT44(uStack0000000000000010,in_stack_00000008._4_4_);
    uVar10 = *unaff_x20;
    uVar8 = unaff_x20[2];
    uVar1 = *(undefined4 *)(unaff_x20 + 3);
    *(undefined8 *)(lVar3 + 0x40) = unaff_x20[1];
    *(undefined8 *)(lVar3 + 0x38) = uVar10;
    *(undefined8 *)(lVar3 + 0x48) = uVar8;
    *(undefined4 *)(lVar3 + 0x50) = uVar1;
    lVar4 = *(long *)(unaff_x19 + 0x10);
    if (lVar4 != 0) {
      lVar5 = *(long *)(lVar4 + 0x10);
      lVar7 = *(long *)PTR_DAT_092edee0;
      *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
      if (lVar5 != 0) {
        uVar2 = *(uint *)(lVar4 + 0x18);
        if (uVar2 < *(uint *)(lVar5 + 0x18)) {
          *(uint *)(lVar4 + 0x18) = uVar2 + 1;
          plVar6 = (long *)(lVar5 + (long)(int)uVar2 * 8 + 0x20);
          *plVar6 = lVar3;
          thunk_FUN_040ec700(plVar6,lVar3);
        }
        else {
          FUN_05c26d88(lVar4,lVar3,*(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70)
                      );
        }
        if (*plVar9 != 0) {
          FUN_079e36b4(*plVar9,0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


