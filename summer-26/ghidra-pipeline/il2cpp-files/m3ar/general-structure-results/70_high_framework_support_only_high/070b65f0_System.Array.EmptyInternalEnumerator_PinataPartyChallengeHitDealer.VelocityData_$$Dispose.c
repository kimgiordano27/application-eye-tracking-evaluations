/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<PinataPartyChallengeHitDealer.VelocityData>$$Dispose
ENTRY_POINT: 070b65f0
PROGRAM: m3ar-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_12;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_1
*/


void System_Array_EmptyInternalEnumerator<PinataPartyChallengeHitDealer_VelocityData>__Dispose(void)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long unaff_x19;
  uint unaff_w20;
  long unaff_x21;
  long unaff_x22;
  long unaff_x23;
  long lVar8;
  ulong uVar9;
  undefined4 *puVar10;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined4 in_stack_00000028;
  undefined8 in_stack_00000038;
  
  FUN_0403162c();
  FUN_0403162c(PTR_DAT_08f65d88);
  *(undefined1 *)(unaff_x23 + 0x47e) = 1;
  in_stack_00000028 = 0;
  if (unaff_x22 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_074f6cdc(3,0);
  }
  iVar1 = thunk_FUN_040405ec();
  if (iVar1 != 1) {
    FUN_0750636c(7,0);
  }
  iVar1 = thunk_FUN_040405ac();
  if (iVar1 != 0) {
    FUN_0750636c(6,0);
  }
  uVar2 = FUN_074fdcc4();
  if (uVar2 < unaff_w20) {
    FUN_07506bd4(0);
  }
  iVar1 = FUN_074fdcc4();
  if ((int)(iVar1 - unaff_w20) < *(int *)(unaff_x21 + 0x20) - *(int *)(unaff_x21 + 0x28)) {
    FUN_0750636c(5,0);
  }
  lVar7 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x148);
  if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
    FUN_0406aaec(lVar7);
  }
  lVar7 = thunk_FUN_0406ddbc();
  if (lVar7 != 0) {
    System_Array_EmptyInternalEnumerator<OVRPlugin_Quatf>__System_Collections_IEnumerator_get_Current
              ();
    return;
  }
  lVar7 = thunk_FUN_0406ddbc();
  if (lVar7 == 0) {
    plVar5 = (long *)thunk_FUN_0406ddbc();
    if (plVar5 == (long *)0x0) {
      FUN_07506c0c();
    }
    uVar2 = *(uint *)(unaff_x21 + 0x20);
    if (0 < (int)uVar2) {
      lVar7 = *(long *)(unaff_x21 + 0x18);
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0403188c();
      }
      uVar9 = 0;
      puVar10 = (undefined4 *)(lVar7 + 0x2c);
      do {
        if (*(uint *)(lVar7 + 0x18) <= uVar9) {
                    /* WARNING: Subroutine does not return */
          FUN_04031894();
        }
        if (-1 < (int)puVar10[-3]) {
          in_stack_00000010 = 0;
          FUN_05622568(*puVar10,&stack0x00000010,puVar10[-1],
                       *(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x158));
          in_stack_00000008 = in_stack_00000010;
          lVar8 = thunk_FUN_0406db0c(*(undefined8 *)
                                      (*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xa8),
                                     &stack0x00000008);
          if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_0403188c();
          }
          if ((lVar8 != 0) &&
             (lVar6 = thunk_FUN_0406ddbc(lVar8,*(undefined8 *)(*plVar5 + 0x40)), lVar6 == 0)) {
            uVar3 = thunk_FUN_0407b7a8();
                    /* WARNING: Subroutine does not return */
            FUN_04031750(uVar3,0);
          }
          if (*(uint *)(plVar5 + 3) <= unaff_w20) {
                    /* WARNING: Subroutine does not return */
            FUN_04031894();
          }
          lVar6 = (long)(int)unaff_w20;
          unaff_w20 = unaff_w20 + 1;
          plVar5[lVar6 + 4] = lVar8;
        }
        uVar9 = uVar9 + 1;
        puVar10 = puVar10 + 4;
      } while (uVar2 != uVar9);
    }
  }
  else {
    iVar1 = *(int *)(unaff_x21 + 0x20);
    if (0 < iVar1) {
      lVar8 = *(long *)(unaff_x21 + 0x18);
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0403188c();
      }
      uVar9 = 0;
      puVar10 = (undefined4 *)(lVar8 + 0x2c);
      do {
        if (*(uint *)(lVar8 + 0x18) <= uVar9) goto LAB_070b68d0;
        if (-1 < (int)puVar10[-3]) {
          in_stack_00000008 = CONCAT44(in_stack_00000008._4_4_,puVar10[-1]);
          uVar3 = thunk_FUN_0406db0c(*(undefined8 *)
                                      (*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x70),
                                     &stack0x00000008);
          if (*(uint *)(lVar8 + 0x18) <= uVar9) {
LAB_070b68d0:
                    /* WARNING: Subroutine does not return */
            FUN_04031894();
          }
          in_stack_00000038._4_4_ = *puVar10;
          uVar4 = thunk_FUN_0406db0c(*(undefined8 *)
                                      (*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x78),
                                     (long)&stack0x00000038 + 4);
          in_stack_00000010 = 0;
          in_stack_00000018 = 0;
          FUN_0747f870(&stack0x00000010,uVar3,uVar4,0);
          if (*(uint *)(lVar7 + 0x18) <= unaff_w20) goto LAB_070b68d0;
          lVar6 = lVar7 + (long)(int)unaff_w20 * 0x10;
          unaff_w20 = unaff_w20 + 1;
          *(undefined8 *)(lVar6 + 0x28) = in_stack_00000018;
          *(undefined8 *)(lVar6 + 0x20) = in_stack_00000010;
          iVar1 = *(int *)(unaff_x21 + 0x20);
        }
        uVar9 = uVar9 + 1;
        puVar10 = puVar10 + 4;
      } while ((long)uVar9 < (long)iVar1);
    }
  }
  return;
}


