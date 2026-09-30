/*
FUNCTION_NAME: OVRPlugin$$get_userPresent
ENTRY_POINT: 0314e4a4
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0314e71c) */

void OVRPlugin__get_userPresent(long param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  ulong in_x9;
  ulong uVar6;
  int *piVar7;
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
  
  do {
    piVar7 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == param_3) {
        puVar2 = (undefined8 *)(param_1 + (long)*piVar7 * 0x10 + 0x138);
        goto LAB_0314e4e0;
      }
      in_x9 = in_x9 - 1;
      piVar7 = piVar7 + 4;
    } while (in_x9 != 0);
    do {
      puVar2 = (undefined8 *)FUN_01ae9f78(unaff_x23,param_3,0);
LAB_0314e4e0:
      plVar3 = (long *)(*(code *)*puVar2)(unaff_x23,puVar2[1]);
      if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01b48178();
      }
LAB_0314e4f4:
      lVar5 = *plVar3;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *unaff_x29) {
            puVar2 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_0314e540;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar2 = (undefined8 *)FUN_01ae9f78(plVar3,*unaff_x29,0);
LAB_0314e540:
      uVar6 = (*(code *)*puVar2)(plVar3,puVar2[1]);
      if ((uVar6 & 1) != 0) {
        lVar5 = *plVar3;
        uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar6 != 0) {
          piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == *unaff_x26) {
              puVar2 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
              goto LAB_0314e59c;
            }
            uVar6 = uVar6 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar6 != 0);
        }
        puVar2 = (undefined8 *)FUN_01ae9f78(plVar3,*unaff_x26,0);
LAB_0314e59c:
        uVar4 = (*(code *)*puVar2)(plVar3,puVar2[1]);
        uStack0000000000000010 = (ulong)unaff_w22;
        thunk_FUN_01b4f09c();
        if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01b48178();
        }
        lVar5 = *(long *)(unaff_x19 + 0x10);
        *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
        if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01b48178();
        }
        uVar1 = *(uint *)(unaff_x19 + 0x18);
        if (uVar1 < *(uint *)(lVar5 + 0x18)) {
          lVar5 = lVar5 + (long)(int)uVar1 * 0x10;
          *(uint *)(unaff_x19 + 0x18) = uVar1 + 1;
          puVar2 = (undefined8 *)(lVar5 + 0x28);
          *puVar2 = uVar4;
          *(ulong *)(lVar5 + 0x20) = uStack0000000000000010;
          thunk_FUN_01b4f09c(puVar2,0);
        }
        else {
          FUN_02c40c38();
        }
        goto LAB_0314e4f4;
      }
      if (plVar3 != (long *)0x0) {
        lVar5 = *plVar3;
        uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar6 != 0) {
          piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == *unaff_x25) {
              puVar2 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
              goto LAB_0314e678;
            }
            uVar6 = uVar6 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar6 != 0);
        }
        puVar2 = (undefined8 *)FUN_01ae9f78(plVar3,*unaff_x25,0);
LAB_0314e678:
        (*(code *)*puVar2)(plVar3,puVar2[1]);
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
         (unaff_x23 = (long *)FUN_0314d63c(unaff_x21,unaff_w22), unaff_x23 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
        FUN_01b48178();
      }
      param_1 = *unaff_x23;
      param_3 = *unaff_x28;
      in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
    } while (in_x9 == 0);
  } while( true );
}


