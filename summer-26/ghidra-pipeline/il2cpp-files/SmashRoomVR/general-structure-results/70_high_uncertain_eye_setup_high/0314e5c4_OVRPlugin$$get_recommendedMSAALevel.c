/*
FUNCTION_NAME: OVRPlugin$$get_recommendedMSAALevel
ENTRY_POINT: 0314e5c4
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0314e71c) */

void OVRPlugin__get_recommendedMSAALevel(void)

{
  uint uVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  int in_w10;
  int *piVar6;
  long unaff_x19;
  long unaff_x21;
  uint unaff_w22;
  long *unaff_x23;
  long *unaff_x25;
  long *unaff_x26;
  long *unaff_x28;
  long *unaff_x29;
  long in_stack_00000000;
  undefined8 in_stack_00000008;
  ulong in_stack_00000010;
  undefined8 in_stack_00000018;
  
code_r0x0314e5c4:
  lVar4 = *(long *)(unaff_x19 + 0x10);
  *(int *)(unaff_x19 + 0x1c) = in_w10 + 1;
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01b48178();
  }
  uVar1 = *(uint *)(unaff_x19 + 0x18);
  if (uVar1 < *(uint *)(lVar4 + 0x18)) {
    lVar4 = lVar4 + (long)(int)uVar1 * 0x10;
    *(uint *)(unaff_x19 + 0x18) = uVar1 + 1;
    puVar3 = (undefined8 *)(lVar4 + 0x28);
    *puVar3 = in_stack_00000018;
    *(ulong *)(lVar4 + 0x20) = in_stack_00000010;
    thunk_FUN_01b4f09c(puVar3,0);
  }
  else {
    FUN_02c40c38();
  }
  do {
    lVar4 = *unaff_x23;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *unaff_x29) {
          puVar3 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_0314e540;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar3 = (undefined8 *)FUN_01ae9f78(unaff_x23,*unaff_x29,0);
LAB_0314e540:
    uVar5 = (*(code *)*puVar3)(unaff_x23,puVar3[1]);
    if ((uVar5 & 1) != 0) break;
    if (unaff_x23 != (long *)0x0) {
      lVar4 = *unaff_x23;
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *unaff_x25) {
            puVar3 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
            goto LAB_0314e678;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar3 = (undefined8 *)FUN_01ae9f78(unaff_x23,*unaff_x25,0);
LAB_0314e678:
      (*(code *)*puVar3)(unaff_x23,puVar3[1]);
    }
    unaff_w22 = unaff_w22 + 1;
    if (unaff_w22 == 5) {
      in_stack_00000008._4_4_ = in_stack_00000008._4_4_ + 1;
      if ((int)*(uint *)(in_stack_00000000 + 0x18) <= (int)in_stack_00000008._4_4_) {
        return;
      }
      if (*(uint *)(in_stack_00000000 + 0x18) <= in_stack_00000008._4_4_) {
                    /* WARNING: Subroutine does not return */
        FUN_01b48180();
      }
      unaff_x21 = *(long *)(in_stack_00000000 + (long)(int)in_stack_00000008._4_4_ * 8 + 0x20);
      unaff_w22 = 0;
    }
    if ((unaff_x21 == 0) ||
       (plVar2 = (long *)FUN_0314d63c(unaff_x21,unaff_w22), plVar2 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    lVar4 = *plVar2;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *unaff_x28) {
          puVar3 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_0314e4e0;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar3 = (undefined8 *)FUN_01ae9f78(plVar2,*unaff_x28,0);
LAB_0314e4e0:
    unaff_x23 = (long *)(*(code *)*puVar3)(plVar2,puVar3[1]);
    if (unaff_x23 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
  } while( true );
  lVar4 = *unaff_x23;
  uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar5 != 0) {
    piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == *unaff_x26) {
        puVar3 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
        goto LAB_0314e59c;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  puVar3 = (undefined8 *)FUN_01ae9f78(unaff_x23,*unaff_x26,0);
LAB_0314e59c:
  in_stack_00000018 = (*(code *)*puVar3)(unaff_x23,puVar3[1]);
  in_stack_00000010 = (ulong)unaff_w22;
  thunk_FUN_01b4f09c();
  if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01b48178();
  }
  in_w10 = *(int *)(unaff_x19 + 0x1c);
  goto code_r0x0314e5c4;
}


