/*
FUNCTION_NAME: OVRPlugin$$get_headphonesPresent
ENTRY_POINT: 0314e534
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

void OVRPlugin__get_headphonesPresent(long param_1)

{
  uint uVar1;
  long *plVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  int *piVar7;
  int *in_x10;
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
  ulong uStack0000000000000010;
  
code_r0x0314e534:
  puVar4 = (undefined8 *)(param_1 + (long)*in_x10 * 0x10 + 0x138);
  do {
    uVar3 = (*(code *)*puVar4)(unaff_x23,puVar4[1]);
    if ((uVar3 & 1) == 0) {
      if (unaff_x23 != (long *)0x0) {
        lVar6 = *unaff_x23;
        uVar3 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar3 != 0) {
          piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == *unaff_x25) {
              puVar4 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
              goto LAB_0314e678;
            }
            uVar3 = uVar3 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar3 != 0);
        }
        puVar4 = (undefined8 *)FUN_01ae9f78(unaff_x23,*unaff_x25,0);
LAB_0314e678:
        (*(code *)*puVar4)(unaff_x23,puVar4[1]);
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
      lVar6 = *plVar2;
      uVar3 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar3 != 0) {
        piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *unaff_x28) {
            puVar4 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_0314e4e0;
          }
          uVar3 = uVar3 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar3 != 0);
      }
      puVar4 = (undefined8 *)FUN_01ae9f78(plVar2,*unaff_x28,0);
LAB_0314e4e0:
      unaff_x23 = (long *)(*(code *)*puVar4)(plVar2,puVar4[1]);
      if (unaff_x23 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01b48178();
      }
    }
    else {
      lVar6 = *unaff_x23;
      uVar3 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar3 != 0) {
        piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *unaff_x26) {
            puVar4 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_0314e59c;
          }
          uVar3 = uVar3 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar3 != 0);
      }
      puVar4 = (undefined8 *)FUN_01ae9f78(unaff_x23,*unaff_x26,0);
LAB_0314e59c:
      uVar5 = (*(code *)*puVar4)(unaff_x23,puVar4[1]);
      uStack0000000000000010 = (ulong)unaff_w22;
      thunk_FUN_01b4f09c();
      if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01b48178();
      }
      lVar6 = *(long *)(unaff_x19 + 0x10);
      *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01b48178();
      }
      uVar1 = *(uint *)(unaff_x19 + 0x18);
      if (uVar1 < *(uint *)(lVar6 + 0x18)) {
        lVar6 = lVar6 + (long)(int)uVar1 * 0x10;
        *(uint *)(unaff_x19 + 0x18) = uVar1 + 1;
        puVar4 = (undefined8 *)(lVar6 + 0x28);
        *puVar4 = uVar5;
        *(ulong *)(lVar6 + 0x20) = uStack0000000000000010;
        thunk_FUN_01b4f09c(puVar4,0);
      }
      else {
        FUN_02c40c38();
      }
    }
    param_1 = *unaff_x23;
    uVar3 = (ulong)*(ushort *)(param_1 + 0x12e);
    if (uVar3 != 0) {
      in_x10 = (int *)(*(long *)(param_1 + 0xb0) + 8);
      do {
        if (*(long *)(in_x10 + -2) == *unaff_x29) goto code_r0x0314e534;
        uVar3 = uVar3 - 1;
        in_x10 = in_x10 + 4;
      } while (uVar3 != 0);
    }
    puVar4 = (undefined8 *)FUN_01ae9f78(unaff_x23,*unaff_x29,0);
  } while( true );
}


