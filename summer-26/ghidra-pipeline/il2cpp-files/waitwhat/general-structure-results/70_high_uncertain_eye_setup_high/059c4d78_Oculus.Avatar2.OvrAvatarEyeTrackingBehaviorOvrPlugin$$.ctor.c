/*
FUNCTION_NAME: Oculus.Avatar2.OvrAvatarEyeTrackingBehaviorOvrPlugin$$.ctor
ENTRY_POINT: 059c4d78
PROGRAM: waitwhat-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;validity_or_gating_hits_8;functionality_eye_api_context_without_clear_sink_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x059c4e74) */
/* WARNING: Removing unreachable block (ram,0x059c4e78) */

void Oculus_Avatar2_OvrAvatarEyeTrackingBehaviorOvrPlugin___ctor
               (long param_1,undefined8 param_2,long param_3)

{
  ushort uVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  uint uVar6;
  long unaff_x19;
  ulong unaff_x20;
  int unaff_w21;
  int unaff_w22;
  int unaff_w23;
  
code_r0x059c4d78:
  if (unaff_w23 != 0) {
    if ((unaff_x20 & 1) != 0) {
      uVar4 = FUN_057c5eac(0,param_3,unaff_w21,(int)param_1 - unaff_w21,0);
      *(undefined8 *)(unaff_x19 + 0x18) = uVar4;
      *(undefined4 *)(unaff_x19 + 0x10) = 5;
    }
    return;
  }
  iVar2 = (int)param_1 + 1;
  *(int *)(unaff_x19 + 0x8c) = iVar2;
  *(int *)(unaff_x19 + 0x90) = iVar2;
  *(int *)(unaff_x19 + 0x94) = *(int *)(unaff_x19 + 0x94) + 1;
FUN_059c4e3c:
  do {
    param_3 = *(long *)(unaff_x19 + 0x80);
    if (param_3 == 0) {
LAB_059c4e44:
                    /* WARNING: Subroutine does not return */
      FUN_03188cd8();
    }
    uVar6 = *(uint *)(unaff_x19 + 0x8c);
    param_1 = (long)(int)uVar6;
    if (*(uint *)(param_3 + 0x18) <= uVar6) {
LAB_059c4ed0:
                    /* WARNING: Subroutine does not return */
      FUN_03188ce0();
    }
    uVar1 = *(ushort *)(param_3 + param_1 * 2 + 0x20);
    if (10 < uVar1) {
      if (uVar1 == 0xd) {
        FUN_059c60bc();
        goto FUN_059c4e3c;
      }
      if (uVar1 == 0x2a) {
        uVar6 = uVar6 + 1;
        *(uint *)(unaff_x19 + 0x8c) = uVar6;
        if (*(int *)(unaff_x19 + 0x88) <= (int)uVar6) {
          uVar3 = FUN_059c408c();
          if ((uVar3 & 1) == 0) goto FUN_059c4e3c;
          param_3 = *(long *)(unaff_x19 + 0x80);
          if (param_3 == 0) goto LAB_059c4e44;
          uVar6 = *(uint *)(unaff_x19 + 0x8c);
        }
        if (*(uint *)(param_3 + 0x18) <= uVar6) goto LAB_059c4ed0;
        if (*(short *)(param_3 + (long)(int)uVar6 * 2 + 0x20) == 0x2f) {
          if ((unaff_x20 & 1) != 0) {
            uVar4 = FUN_057c5eac(0,param_3,unaff_w21,(uVar6 - unaff_w22) + -2,0);
            uVar6 = *(uint *)(unaff_x19 + 0x8c);
            *(undefined8 *)(unaff_x19 + 0x18) = uVar4;
            *(undefined4 *)(unaff_x19 + 0x10) = 5;
          }
          *(uint *)(unaff_x19 + 0x8c) = uVar6 + 1;
          return;
        }
        goto FUN_059c4e3c;
      }
LAB_059c4e20:
      *(uint *)(unaff_x19 + 0x8c) = uVar6 + 1;
      goto FUN_059c4e3c;
    }
    if (uVar1 != 0) {
      if (uVar1 != 10) goto LAB_059c4e20;
      goto code_r0x059c4d78;
    }
    if (*(uint *)(unaff_x19 + 0x88) != uVar6) goto LAB_059c4e20;
    iVar2 = FUN_059c3e44();
    if (iVar2 == 0) {
      thunk_FUN_031edd38(PTR_DAT_07109220);
      uVar4 = FUN_059bcd60();
      uVar5 = thunk_FUN_031edd38(PTR_DAT_07109230);
                    /* WARNING: Subroutine does not return */
      FUN_03188b9c(uVar4,uVar5);
    }
  } while( true );
}


