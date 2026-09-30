/*
FUNCTION_NAME: Oculus.Avatar2.OvrAvatarEyeTrackingBehaviorOvrPlugin$$InitializeEyePoseProvider
ENTRY_POINT: 059c49ec
PROGRAM: waitwhat-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;validity_or_gating_hits_11;functionality_eye_api_context_without_clear_sink_hits_4
*/


undefined8
Oculus_Avatar2_OvrAvatarEyeTrackingBehaviorOvrPlugin__InitializeEyePoseProvider(long param_1)

{
  ushort uVar1;
  undefined1 in_ZR;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  uint uVar7;
  undefined4 uVar8;
  long lVar9;
  long *unaff_x19;
  ulong unaff_x20;
  uint unaff_w21;
  long unaff_x22;
  undefined2 uStack000000000000000c;
  
code_r0x059c49ec:
  uVar7 = (uint)param_1;
  if ((bool)in_ZR) goto LAB_059c4a74;
  if (unaff_w21 == 0x29) {
    uVar8 = 0xf;
    unaff_x19[3] = 0;
    *(uint *)((long)unaff_x19 + 0x8c) = uVar7 + 1;
LAB_059c4b1c:
    *(undefined4 *)(unaff_x19 + 2) = uVar8;
LAB_059c4b20:
    FUN_059bfcd0();
LAB_059c4b24:
    uVar4 = 1;
  }
  else {
LAB_059c4a0c:
    if (*(int *)(*(long *)(unaff_x22 + 0x88) + 0xe4) == 0) {
      thunk_FUN_031e5338();
    }
    uVar3 = FUN_058a53dc(unaff_w21,0);
    if ((uVar3 & 1) != 0) {
      uVar7 = *(uint *)((long)unaff_x19 + 0x8c);
LAB_059c4a74:
      do {
        *(uint *)((long)unaff_x19 + 0x8c) = uVar7 + 1;
        while( true ) {
          while( true ) {
            while( true ) {
              lVar9 = unaff_x19[0x10];
              if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03188cd8();
              }
              uVar7 = *(uint *)((long)unaff_x19 + 0x8c);
              param_1 = (long)(int)uVar7;
              if (*(uint *)(lVar9 + 0x18) <= uVar7) {
                    /* WARNING: Subroutine does not return */
                FUN_03188ce0();
              }
              uVar1 = *(ushort *)(lVar9 + param_1 * 2 + 0x20);
              unaff_w21 = (uint)uVar1;
              if (uVar1 < 0x2a) break;
              if (0x2f < unaff_w21) {
                if (unaff_w21 == 0x5d) {
                  uVar8 = 0xe;
                  unaff_x19[3] = 0;
                  *(uint *)((long)unaff_x19 + 0x8c) = uVar7 + 1;
                  goto LAB_059c4b1c;
                }
                if (unaff_w21 != 0x7d) goto LAB_059c4a0c;
                *(uint *)((long)unaff_x19 + 0x8c) = uVar7 + 1;
                *(undefined4 *)(unaff_x19 + 2) = 0xd;
                unaff_x19[3] = 0;
                goto LAB_059c4b20;
              }
              if (unaff_w21 != 0x2f) {
                if (uVar1 != 0x2c) goto LAB_059c4a0c;
                *(uint *)((long)unaff_x19 + 0x8c) = uVar7 + 1;
                goto LAB_059c4ab8;
              }
              FUN_059c4cc4();
              if ((unaff_x20 & 1) == 0) goto LAB_059c4b24;
            }
            if (0xd < uVar1) {
              in_ZR = unaff_w21 == 0x20;
              goto code_r0x059c49ec;
            }
            if (unaff_w21 != 0) break;
            if (*(uint *)(unaff_x19 + 0x11) != uVar7) goto LAB_059c4a74;
            uVar4 = FUN_059c3e44();
            if ((int)uVar4 == 0) {
              *(undefined4 *)((long)unaff_x19 + 0x24) = 0xc;
              return uVar4;
            }
          }
          if (unaff_w21 == 9) break;
          if (uVar1 == 10) {
            *(uint *)((long)unaff_x19 + 0x8c) = uVar7 + 1;
            *(uint *)(unaff_x19 + 0x12) = uVar7 + 1;
            *(int *)((long)unaff_x19 + 0x94) = *(int *)((long)unaff_x19 + 0x94) + 1;
          }
          else {
            if (uVar1 != 0xd) goto LAB_059c4a0c;
            FUN_059c60bc();
          }
        }
      } while( true );
    }
    if ((*(char *)((long)unaff_x19 + 0x71) == '\0') ||
       (iVar2 = (**(code **)(*unaff_x19 + 0x1b8))(), iVar2 != 0)) {
      thunk_FUN_031edd38(PTR_DAT_070c2058);
      FUN_02d35640();
      uVar4 = FUN_058c5a58(0);
      uStack000000000000000c = (undefined2)unaff_w21;
      uVar5 = thunk_FUN_031c39fc(*(undefined8 *)(unaff_x22 + 0x88),&stack0x0000000c);
      uVar6 = thunk_FUN_031edd38(PTR_DAT_07109210);
      FUN_059d2420(uVar6,uVar4,uVar5,0);
      uVar4 = FUN_059bcd60();
      uVar5 = thunk_FUN_031edd38(PTR_DAT_07109218);
                    /* WARNING: Subroutine does not return */
      FUN_03188b9c(uVar4,uVar5);
    }
LAB_059c4ab8:
    FUN_059bfed4();
    uVar4 = 0;
  }
  return uVar4;
}


