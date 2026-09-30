/*
FUNCTION_NAME: OVRManager$$add_TrackingAcquired
ENTRY_POINT: 027d4190
PROGRAM: vrlegs-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__add_TrackingAcquired(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined4 *unaff_x19;
  undefined4 *unaff_x20;
  int unaff_w21;
  uint unaff_w22;
  long *unaff_x23;
  uint unaff_w24;
  ulong unaff_x25;
  ulong uVar6;
  uint uVar7;
  undefined4 uStack0000000000000000;
  undefined4 uStack0000000000000004;
  undefined4 in_stack_00000008;
  
  uVar5 = CONCAT44(in_stack_00000008,uStack0000000000000004);
  while( true ) {
    if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    if (*(uint *)(param_1 + 0x18) <= unaff_w22) break;
    uVar7 = *(uint *)(param_1 + (long)(int)unaff_w22 * 4 + 0x20);
    while( true ) {
      if (*(int *)(param_2 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      unaff_x25 = (unaff_x25 & 0xffffffff) * (ulong)uVar7;
      unaff_w21 = unaff_w22 + unaff_w21;
      uVar5 = uVar5 * uVar7 + (unaff_x25 >> 0x20);
      uVar6 = uVar5 >> 0x20;
      uStack0000000000000000 = (undefined4)unaff_x25;
      if ((unaff_w21 < 0) && (uVar7 == unaff_w24)) goto LAB_027d413c;
      do {
        uStack0000000000000004 = (undefined4)uVar5;
        if (*(int *)(*unaff_x23 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        *(ulong *)(unaff_x19 + 2) = CONCAT44(uStack0000000000000004,uStack0000000000000000);
        unaff_x19[1] = (int)uVar6;
        do {
          if (*(int *)(*unaff_x23 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
            iVar1 = unaff_x19[1];
            if (*(int *)(*unaff_x23 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
          }
          else {
            iVar1 = unaff_x19[1];
          }
          if (iVar1 == 0) {
            uVar6 = *(ulong *)(unaff_x20 + 2);
            uVar5 = 0;
            if (uVar6 != 0) {
              uVar5 = *(ulong *)(unaff_x19 + 2) / uVar6;
            }
            *(ulong *)(unaff_x19 + 2) = *(ulong *)(unaff_x19 + 2) - uVar5 * uVar6;
            return;
          }
          iVar1 = unaff_x20[1];
          iVar2 = unaff_x20[3];
          if (*(int *)(*unaff_x23 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          if (iVar2 != 0 || iVar1 != 0) {
            FUN_027d6674();
            return;
          }
          uVar3 = unaff_x19[1];
          uVar7 = unaff_x20[2];
          uVar5 = (ulong)uVar7;
          unaff_x19[1] = 0;
          iVar1 = 0;
          if (uVar5 != 0) {
            iVar1 = (int)(CONCAT44(uVar3,unaff_x19[3]) / uVar5);
          }
          uVar6 = CONCAT44(unaff_x19[3] - iVar1 * uVar7,unaff_x19[2]);
          uVar4 = 0;
          if (uVar5 != 0) {
            uVar4 = uVar6 / uVar5;
          }
          *(ulong *)(unaff_x19 + 2) = uVar6 - uVar4 * uVar5;
          if (-1 < unaff_w21) {
            return;
          }
        } while (-1 < unaff_w21);
        *unaff_x19 = *unaff_x20;
        if (*(int *)(*unaff_x23 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        unaff_x25 = *(ulong *)(unaff_x19 + 2);
        uStack0000000000000000 = (undefined4)unaff_x25;
        uStack0000000000000004 = (undefined4)(unaff_x25 >> 0x20);
        uVar5 = CONCAT44(unaff_x19[1],uStack0000000000000004);
        uVar6 = (ulong)(uint)unaff_x19[1];
LAB_027d413c:
        if (*(int *)(*unaff_x23 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        unaff_w22 = FUN_027d629c();
      } while (unaff_w22 == 0);
      param_2 = *unaff_x23;
      if ((int)unaff_w22 < 9) break;
      uVar7 = 1000000000;
    }
    if (*(int *)(param_2 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      param_2 = *unaff_x23;
    }
    param_1 = **(long **)(param_2 + 0xb8);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c44();
}


