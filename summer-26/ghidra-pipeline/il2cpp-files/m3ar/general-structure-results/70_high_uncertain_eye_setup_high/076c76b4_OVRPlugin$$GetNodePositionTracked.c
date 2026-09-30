/*
FUNCTION_NAME: OVRPlugin$$GetNodePositionTracked
ENTRY_POINT: 076c76b4
PROGRAM: m3ar-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_12;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x076c78f8) */

void OVRPlugin__GetNodePositionTracked(long param_1,ulong param_2,undefined8 param_3)

{
  byte bVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  int *piVar8;
  long unaff_x19;
  ulong unaff_x20;
  long lVar9;
  long *unaff_x24;
  long *unaff_x25;
  undefined8 *unaff_x26;
  undefined8 *unaff_x27;
  undefined8 *unaff_x28;
  long *unaff_x29;
  long *in_stack_00000018;
  
  do {
    uVar2 = FUN_06f68460(param_1,param_2,param_3);
    if ((uVar2 & 1) == 0) {
      lVar9 = *(long *)(unaff_x19 + 0x30);
      plVar3 = (long *)FUN_040316d0(*(undefined8 *)PTR_DAT_08fadae0,2);
      lVar4 = thunk_FUN_0406deb8(*unaff_x28);
      FUN_076c7984();
      if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0403188c();
      }
      if ((lVar4 != 0) &&
         (lVar5 = thunk_FUN_0406ddbc(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0)) {
        uVar7 = thunk_FUN_0407b7a8();
                    /* WARNING: Subroutine does not return */
        FUN_04031750(uVar7,0);
      }
      if ((int)plVar3[3] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04031894();
      }
      plVar3[4] = lVar4;
      lVar4 = thunk_FUN_0406deb8(*unaff_x28);
      FUN_076c7984();
      if ((lVar4 != 0) &&
         (lVar5 = thunk_FUN_0406ddbc(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0)) {
        uVar7 = thunk_FUN_0407b7a8();
                    /* WARNING: Subroutine does not return */
        FUN_04031750(uVar7,0);
      }
      if ((*(uint *)(plVar3 + 3) & 0xfffffffe) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04031894();
      }
      plVar3[5] = lVar4;
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0403188c();
      }
      FUN_06f6826c(lVar9,unaff_x20 & 0xffffffff,plVar3,*(undefined8 *)PTR_DAT_08fadaa8);
      if (*(long *)(unaff_x19 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0403188c();
      }
      lVar4 = FUN_06f681cc(*(long *)(unaff_x19 + 0x30),unaff_x20 & 0xffffffff,*unaff_x27);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0403188c();
      }
      if (*(uint *)(lVar4 + 0x18) <= *(uint *)(unaff_x19 + 0x48)) {
                    /* WARNING: Subroutine does not return */
        FUN_04031894();
      }
      lVar4 = *(long *)(lVar4 + (long)(int)*(uint *)(unaff_x19 + 0x48) * 8 + 0x20);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0403188c();
      }
      plVar3 = *(long **)(unaff_x19 + 0x28);
      if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0403188c();
      }
      lVar9 = *plVar3;
      uVar2 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar2 != 0) {
        piVar8 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *unaff_x29) {
            puVar6 = (undefined8 *)(lVar9 + (long)(*piVar8 + 9) * 0x10 + 0x138);
            goto LAB_076c77f4;
          }
          uVar2 = uVar2 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar2 != 0);
      }
      puVar6 = (undefined8 *)FUN_0406ae20(plVar3,*unaff_x29,9);
LAB_076c77f4:
      bVar1 = (*(code *)*puVar6)(plVar3,unaff_x20 & 0xffffffff,lVar4 + 0x14,puVar6[1]);
      *(byte *)(lVar4 + 0x10) = bVar1 & 1;
    }
    if (in_stack_00000018 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0403188c();
    }
    lVar4 = *in_stack_00000018;
    uVar2 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar2 != 0) {
      piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *unaff_x24) {
          puVar6 = (undefined8 *)(lVar4 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_076c7630;
        }
        uVar2 = uVar2 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar2 != 0);
    }
    puVar6 = (undefined8 *)FUN_0406ae20(in_stack_00000018,*unaff_x24,0);
LAB_076c7630:
    uVar2 = (*(code *)*puVar6)(in_stack_00000018,puVar6[1]);
    if ((uVar2 & 1) == 0) {
      if (in_stack_00000018 == (long *)0x0) {
        return;
      }
      lVar4 = *in_stack_00000018;
      uVar2 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar2 == 0) goto LAB_076c7864;
      piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      break;
    }
    if (in_stack_00000018 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0403188c();
    }
    lVar4 = *in_stack_00000018;
    uVar2 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar2 != 0) {
      piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *unaff_x25) {
          puVar6 = (undefined8 *)(lVar4 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_076c7694;
        }
        uVar2 = uVar2 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar2 != 0);
    }
    puVar6 = (undefined8 *)FUN_0406ae20(in_stack_00000018,*unaff_x25,0);
LAB_076c7694:
    param_2 = (*(code *)*puVar6)(in_stack_00000018,puVar6[1]);
    param_2 = param_2 & 0xffffffff;
    param_1 = *(long *)(unaff_x19 + 0x30);
    if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0403188c();
    }
    param_3 = *unaff_x26;
    unaff_x20 = param_2;
  } while( true );
  while( true ) {
    uVar2 = uVar2 - 1;
    piVar8 = piVar8 + 4;
    if (uVar2 == 0) break;
    if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_08f65868) {
      puVar6 = (undefined8 *)(lVar4 + (long)*piVar8 * 0x10 + 0x138);
      goto LAB_076c7880;
    }
  }
LAB_076c7864:
  puVar6 = (undefined8 *)FUN_0406ae20(in_stack_00000018,*(long *)PTR_DAT_08f65868,0);
LAB_076c7880:
  (*(code *)*puVar6)(in_stack_00000018,puVar6[1]);
  return;
}


