/*
FUNCTION_NAME: OVRManager$$remove_TrackingAcquired
ENTRY_POINT: 027d426c
PROGRAM: vrlegs-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_10;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__remove_TrackingAcquired(void)

{
  ulong uVar1;
  ulong uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  long lVar7;
  int in_w8;
  long lVar8;
  ulong in_x10;
  ulong in_x11;
  ulong in_x12;
  undefined4 *unaff_x19;
  undefined4 *unaff_x20;
  int unaff_w21;
  long *unaff_x23;
  uint unaff_w24;
  ulong uVar9;
  ulong uVar10;
  uint uVar11;
  undefined4 uStack0000000000000000;
  undefined4 uStack0000000000000004;
  
  do {
    iVar3 = 0;
    if (in_x10 != 0) {
      iVar3 = (int)(in_x12 / in_x10);
    }
    uVar2 = in_x11 & 0xffffffff | (ulong)(uint)(in_w8 - iVar3 * (int)in_x10) << 0x20;
    uVar9 = 0;
    if (in_x10 != 0) {
      uVar9 = uVar2 / in_x10;
    }
    *(ulong *)(unaff_x19 + 2) = uVar2 - uVar9 * in_x10;
    if (-1 < unaff_w21) {
      return;
    }
    if (unaff_w21 < 0) {
      *unaff_x19 = *unaff_x20;
      if (*(int *)(*unaff_x23 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar9 = *(ulong *)(unaff_x19 + 2);
      uStack0000000000000000 = (undefined4)uVar9;
      uStack0000000000000004 = (undefined4)(uVar9 >> 0x20);
      uVar10 = (ulong)(uint)unaff_x19[1];
      uVar2 = CONCAT44(unaff_x19[1],uStack0000000000000004);
      while( true ) {
        uStack0000000000000004 = (undefined4)uVar2;
        uVar1 = CONCAT44((int)uVar10,uStack0000000000000004);
        if (*(int *)(*unaff_x23 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar6 = FUN_027d629c();
        if (uVar6 == 0) break;
        lVar7 = *unaff_x23;
        if ((int)uVar6 < 9) {
          if (*(int *)(lVar7 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
            lVar7 = *unaff_x23;
          }
          lVar8 = **(long **)(lVar7 + 0xb8);
          if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c3c();
          }
          if (*(uint *)(lVar8 + 0x18) <= uVar6) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c44();
          }
          uVar11 = *(uint *)(lVar8 + (long)(int)uVar6 * 4 + 0x20);
        }
        else {
          uVar11 = 1000000000;
        }
        if (*(int *)(lVar7 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar9 = (uVar9 & 0xffffffff) * (ulong)uVar11;
        unaff_w21 = uVar6 + unaff_w21;
        uVar1 = uVar2 * uVar11 + (uVar9 >> 0x20);
        uVar10 = uVar1 >> 0x20;
        uStack0000000000000000 = (undefined4)uVar9;
        if ((-1 < unaff_w21) || (uVar2 = uVar1, uVar11 != unaff_w24)) break;
      }
      uStack0000000000000004 = (undefined4)uVar1;
      if (*(int *)(*unaff_x23 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      *(ulong *)(unaff_x19 + 2) = CONCAT44(uStack0000000000000004,uStack0000000000000000);
      unaff_x19[1] = (int)(uVar1 >> 0x20);
    }
    if (*(int *)(*unaff_x23 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      iVar3 = unaff_x19[1];
      if (*(int *)(*unaff_x23 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
    }
    else {
      iVar3 = unaff_x19[1];
    }
    if (iVar3 == 0) {
      uVar9 = *(ulong *)(unaff_x20 + 2);
      uVar2 = 0;
      if (uVar9 != 0) {
        uVar2 = *(ulong *)(unaff_x19 + 2) / uVar9;
      }
      *(ulong *)(unaff_x19 + 2) = *(ulong *)(unaff_x19 + 2) - uVar2 * uVar9;
      return;
    }
    iVar3 = unaff_x20[1];
    iVar4 = unaff_x20[3];
    if (*(int *)(*unaff_x23 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    if (iVar4 != 0 || iVar3 != 0) {
      FUN_027d6674();
      return;
    }
    in_x11 = (ulong)(uint)unaff_x19[2];
    in_w8 = unaff_x19[3];
    uVar5 = unaff_x19[1];
    in_x10 = (ulong)(uint)unaff_x20[2];
    unaff_x19[1] = 0;
    in_x12 = CONCAT44(uVar5,in_w8);
  } while( true );
}


