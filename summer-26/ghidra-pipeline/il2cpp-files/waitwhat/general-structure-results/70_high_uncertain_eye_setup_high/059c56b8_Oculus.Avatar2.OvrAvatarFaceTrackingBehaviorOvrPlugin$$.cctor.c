/*
FUNCTION_NAME: Oculus.Avatar2.OvrAvatarFaceTrackingBehaviorOvrPlugin$$.cctor
ENTRY_POINT: 059c56b8
PROGRAM: waitwhat-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;functionality_eye_api_context_without_clear_sink_hits_2
*/


long Oculus_Avatar2_OvrAvatarFaceTrackingBehaviorOvrPlugin___cctor(long param_1)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long *plVar9;
  undefined4 uVar10;
  long *unaff_x19;
  int unaff_w20;
  uint unaff_w21;
  long unaff_x22;
  
FUN_059c56d8:
  if (unaff_w21 == 0x49) {
    lVar6 = FUN_059c661c();
    return lVar6;
  }
LAB_059c5614:
  do {
    lVar6 = *(long *)(unaff_x22 + 0x88);
    *(int *)((long)unaff_x19 + 0x8c) = (int)param_1 + 1;
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_031e5338();
    }
    uVar5 = FUN_058a53dc(unaff_w21,0);
    if ((uVar5 & 1) == 0) {
LAB_059c5934:
      uVar7 = FUN_059c6000();
      uVar8 = thunk_FUN_031edd38(PTR_DAT_07109248);
                    /* WARNING: Subroutine does not return */
      FUN_03188b9c(uVar7,uVar8);
    }
LAB_059c563c:
    puVar4 = PTR_DAT_070f2268;
    lVar6 = unaff_x19[0x10];
    if (lVar6 == 0) {
LAB_059c5920:
                    /* WARNING: Subroutine does not return */
      FUN_03188cd8();
    }
    uVar2 = *(uint *)((long)unaff_x19 + 0x8c);
    param_1 = (long)(int)uVar2;
    if (*(uint *)(lVar6 + 0x18) <= uVar2) {
LAB_059c591c:
                    /* WARNING: Subroutine does not return */
      FUN_03188ce0();
    }
    uVar1 = *(ushort *)(lVar6 + param_1 * 2 + 0x20);
    unaff_w21 = (uint)uVar1;
    if (uVar1 < 0x4a) {
      if (0xd < unaff_w21) {
        if (uVar1 < 0x28) {
          if (0x22 < uVar1) {
            if (3 < unaff_w21 - 0x23) {
              if (unaff_w21 == 0x27) {
LAB_059c5880:
                FUN_059c3544();
                lVar6 = FUN_059c6250();
                return lVar6;
              }
              goto FUN_059c56d8;
            }
            goto LAB_059c5614;
          }
          if (unaff_w21 != 0x20) {
            if (unaff_w21 != 0x21) {
              if (unaff_w21 == 0x22) goto LAB_059c5880;
              goto FUN_059c56d8;
            }
            goto LAB_059c5614;
          }
LAB_059c5674:
          *(uint *)((long)unaff_x19 + 0x8c) = uVar2 + 1;
          goto LAB_059c563c;
        }
        if (uVar1 < 0x2c) goto LAB_059c5614;
        if (uVar1 < 0x2f) {
          if (unaff_w21 == 0x2c) {
            FUN_059c5f9c();
            goto LAB_059c563c;
          }
          if (unaff_w21 == 0x2d) {
            if ((int)unaff_x19[0x11] <= (int)(uVar2 + 1)) {
              uVar5 = FUN_059c408c();
              if ((uVar5 & 1) == 0) goto LAB_059c5840;
              lVar6 = unaff_x19[0x10];
              if (lVar6 == 0) goto LAB_059c5920;
            }
            uVar2 = *(int *)((long)unaff_x19 + 0x8c) + 1;
            if (*(uint *)(lVar6 + 0x18) <= uVar2) goto LAB_059c591c;
            if (*(short *)(lVar6 + (long)(int)uVar2 * 2 + 0x20) == 0x49) {
              lVar6 = FUN_059c6490();
              return lVar6;
            }
            goto LAB_059c5840;
          }
          if (unaff_w21 != 0x2e) goto FUN_059c56d8;
        }
        else {
          if (unaff_w21 == 0x2f) {
            FUN_059c4cc4();
            goto LAB_059c563c;
          }
          if (9 < unaff_w21 - 0x30) goto FUN_059c56d8;
        }
        if (unaff_w20 == 4) {
LAB_059c5840:
          FUN_059c6510();
                    /* WARNING: Could not recover jumptable at 0x059c585c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          lVar6 = (**(code **)(*unaff_x19 + 0x198))();
          return lVar6;
        }
        goto LAB_059c5924;
      }
      if (unaff_w21 == 0) {
        uVar5 = FUN_059c5e7c();
        if ((uVar5 & 1) != 0) {
          *(undefined4 *)(unaff_x19 + 2) = 0;
          unaff_x19[3] = 0;
          return 0;
        }
      }
      else {
        if (unaff_w21 == 9) goto LAB_059c5674;
        if (unaff_w21 == 10) {
          *(uint *)((long)unaff_x19 + 0x8c) = uVar2 + 1;
          *(uint *)(unaff_x19 + 0x12) = uVar2 + 1;
          *(int *)((long)unaff_x19 + 0x94) = *(int *)((long)unaff_x19 + 0x94) + 1;
        }
        else {
          if (unaff_w21 != 0xd) goto LAB_059c5614;
          FUN_059c60bc();
        }
      }
      goto LAB_059c563c;
    }
    if (unaff_w21 < 0x5e) {
      if (unaff_w21 == 0x4e) {
        lVar6 = FUN_059c669c();
        return lVar6;
      }
      if (unaff_w21 == 0x5d) {
        *(uint *)((long)unaff_x19 + 0x8c) = uVar2 + 1;
        if ((*(int *)((long)unaff_x19 + 0x24) - 5U < 2) || (*(int *)((long)unaff_x19 + 0x24) == 8))
        {
          *(undefined4 *)(unaff_x19 + 2) = 0xe;
          unaff_x19[3] = 0;
          FUN_059bfcd0();
          return 0;
        }
        goto LAB_059c5934;
      }
      goto LAB_059c5614;
    }
    if (unaff_w21 == 0x66) break;
    if (unaff_w21 == 0x6e) {
      FUN_059c5ecc();
      return 0;
    }
  } while (unaff_w21 != 0x74);
  if (unaff_w20 == 4) {
    lVar6 = *(long *)PTR_DAT_070f2268;
    if (unaff_w21 == 0x74) {
      if (*(int *)(lVar6 + 0xe4) == 0) {
        thunk_FUN_031e5338();
        lVar6 = *(long *)puVar4;
      }
      plVar9 = (long *)(*(long *)(lVar6 + 0xb8) + 8);
    }
    else {
      if (*(int *)(lVar6 + 0xe4) == 0) {
        thunk_FUN_031e5338();
        lVar6 = *(long *)puVar4;
      }
      plVar9 = (long *)(*(long *)(lVar6 + 0xb8) + 0x10);
    }
    lVar6 = *plVar9;
    uVar5 = FUN_059c6578();
    if ((uVar5 & 1) != 0) {
      unaff_x19[3] = lVar6;
      *(undefined4 *)(unaff_x19 + 2) = 9;
      uVar10 = 8;
      if (((int)unaff_x19[5] == 0) && (uVar10 = 0xc, *(char *)((long)unaff_x19 + 0x71) != '\0')) {
        uVar10 = 8;
      }
      *(undefined4 *)((long)unaff_x19 + 0x24) = uVar10;
      if ((char)unaff_x19[7] != '\0') {
        *(int *)((long)unaff_x19 + 0x2c) = *(int *)((long)unaff_x19 + 0x2c) + 1;
        return lVar6;
      }
      return lVar6;
    }
    lVar6 = unaff_x19[0x10];
    iVar3 = *(int *)((long)unaff_x19 + 0x8c);
    FUN_02d342ac(lVar6);
    FUN_030eba6c(lVar6,(long)iVar3);
  }
  else {
LAB_059c5924:
    *(uint *)((long)unaff_x19 + 0x8c) = uVar2 + 1;
  }
  goto LAB_059c5934;
}


