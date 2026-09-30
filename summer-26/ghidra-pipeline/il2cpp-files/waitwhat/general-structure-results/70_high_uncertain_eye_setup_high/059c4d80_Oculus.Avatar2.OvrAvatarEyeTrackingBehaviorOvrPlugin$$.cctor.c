/*
FUNCTION_NAME: Oculus.Avatar2.OvrAvatarEyeTrackingBehaviorOvrPlugin$$.cctor
ENTRY_POINT: 059c4d80
PROGRAM: waitwhat-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_8;weak_xr_or_state_hits_4;validity_or_gating_hits_9;functionality_eye_api_context_without_clear_sink_hits_8
*/


void Oculus_Avatar2_OvrAvatarEyeTrackingBehaviorOvrPlugin___cctor(long param_1)

{
  ushort uVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  uint uVar7;
  int in_w9;
  long unaff_x19;
  ulong unaff_x20;
  int unaff_w21;
  int unaff_w22;
  uint unaff_w23;
  
code_r0x059c4d80:
  iVar2 = (int)param_1 + 1;
  *(int *)(unaff_x19 + 0x8c) = iVar2;
  *(int *)(unaff_x19 + 0x90) = iVar2;
  *(int *)(unaff_x19 + 0x94) = in_w9 + 1;
FUN_059c4e3c:
  lVar6 = *(long *)(unaff_x19 + 0x80);
  if (lVar6 == 0) {
LAB_059c4e44:
                    /* WARNING: Subroutine does not return */
    FUN_03188cd8();
  }
  uVar7 = *(uint *)(unaff_x19 + 0x8c);
  param_1 = (long)(int)uVar7;
  if (*(uint *)(lVar6 + 0x18) <= uVar7) {
LAB_059c4ed0:
                    /* WARNING: Subroutine does not return */
    FUN_03188ce0();
  }
  uVar1 = *(ushort *)(lVar6 + param_1 * 2 + 0x20);
  if (10 < uVar1) {
    if (uVar1 == 0xd) {
      if (unaff_w23 != 0) goto LAB_059c4e48;
      FUN_059c60bc();
    }
    else {
      if (uVar1 != 0x2a) goto LAB_059c4e20;
      uVar7 = uVar7 + 1;
      *(uint *)(unaff_x19 + 0x8c) = uVar7;
      if ((unaff_w23 & 1) == 0) {
        if (*(int *)(unaff_x19 + 0x88) <= (int)uVar7) {
          uVar3 = FUN_059c408c();
          if ((uVar3 & 1) == 0) goto FUN_059c4e3c;
          lVar6 = *(long *)(unaff_x19 + 0x80);
          if (lVar6 == 0) goto LAB_059c4e44;
          uVar7 = *(uint *)(unaff_x19 + 0x8c);
        }
        if (*(uint *)(lVar6 + 0x18) <= uVar7) goto LAB_059c4ed0;
        if (*(short *)(lVar6 + (long)(int)uVar7 * 2 + 0x20) == 0x2f) {
          if ((unaff_x20 & 1) != 0) {
            uVar4 = FUN_057c5eac(0,lVar6,unaff_w21,(uVar7 - unaff_w22) + -2,0);
            uVar7 = *(uint *)(unaff_x19 + 0x8c);
            *(undefined8 *)(unaff_x19 + 0x18) = uVar4;
            *(undefined4 *)(unaff_x19 + 0x10) = 5;
          }
          *(uint *)(unaff_x19 + 0x8c) = uVar7 + 1;
          return;
        }
      }
    }
    goto FUN_059c4e3c;
  }
  if (uVar1 == 0) {
    if (*(uint *)(unaff_x19 + 0x88) == uVar7) {
      iVar2 = FUN_059c3e44();
      if (iVar2 == 0) {
        if ((unaff_w23 & 1) == 0) {
          thunk_FUN_031edd38(PTR_DAT_07109220);
          uVar4 = FUN_059bcd60();
          uVar5 = thunk_FUN_031edd38(PTR_DAT_07109230);
                    /* WARNING: Subroutine does not return */
          FUN_03188b9c(uVar4,uVar5);
        }
        if ((unaff_x20 & 1) == 0) {
          return;
        }
        lVar6 = *(long *)(unaff_x19 + 0x80);
        iVar2 = *(int *)(unaff_x19 + 0x8c) - unaff_w21;
        goto LAB_059c4e50;
      }
      goto FUN_059c4e3c;
    }
  }
  else if (uVar1 == 10) goto Oculus_Avatar2_OvrAvatarEyeTrackingBehaviorOvrPlugin___ctor;
LAB_059c4e20:
  *(uint *)(unaff_x19 + 0x8c) = uVar7 + 1;
  goto FUN_059c4e3c;
Oculus_Avatar2_OvrAvatarEyeTrackingBehaviorOvrPlugin___ctor:
  if (unaff_w23 != 0) {
LAB_059c4e48:
    if ((unaff_x20 & 1) != 0) {
      iVar2 = uVar7 - unaff_w21;
LAB_059c4e50:
      uVar4 = FUN_057c5eac(0,lVar6,unaff_w21,iVar2,0);
      *(undefined8 *)(unaff_x19 + 0x18) = uVar4;
      *(undefined4 *)(unaff_x19 + 0x10) = 5;
    }
    return;
  }
  in_w9 = *(int *)(unaff_x19 + 0x94);
  goto code_r0x059c4d80;
}


