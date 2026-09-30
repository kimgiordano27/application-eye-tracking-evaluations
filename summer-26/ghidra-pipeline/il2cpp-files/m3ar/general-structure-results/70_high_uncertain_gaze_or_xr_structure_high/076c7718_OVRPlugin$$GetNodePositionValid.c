/*
FUNCTION_NAME: OVRPlugin$$GetNodePositionValid
ENTRY_POINT: 076c7718
PROGRAM: m3ar-libil2cpp.so
SCORE: 75
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_14;functionality_gaze_retrieval_or_extraction
*/


/* WARNING: Removing unreachable block (ram,0x076c78f8) */

void OVRPlugin__GetNodePositionValid(long param_1)

{
  byte bVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long unaff_x19;
  undefined4 unaff_w20;
  long unaff_x21;
  long *plVar8;
  long *unaff_x22;
  long *unaff_x24;
  long *unaff_x25;
  undefined8 *unaff_x26;
  undefined8 *unaff_x27;
  undefined8 *unaff_x28;
  long *unaff_x29;
  long *in_stack_00000018;
  
  do {
    FUN_076c7984();
    if ((param_1 != 0) &&
       (lVar2 = thunk_FUN_0406ddbc(param_1,*(undefined8 *)(*unaff_x22 + 0x40)), lVar2 == 0)) {
      uVar4 = thunk_FUN_0407b7a8();
                    /* WARNING: Subroutine does not return */
      FUN_04031750(uVar4,0);
    }
    if ((*(uint *)(unaff_x22 + 3) & 0xfffffffe) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04031894();
    }
    unaff_x22[5] = param_1;
    if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0403188c();
    }
    FUN_06f6826c(unaff_x21,unaff_w20,unaff_x22,*(undefined8 *)PTR_DAT_08fadaa8);
    if (*(long *)(unaff_x19 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0403188c();
    }
    lVar2 = FUN_06f681cc(*(long *)(unaff_x19 + 0x30),unaff_w20,*unaff_x27);
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0403188c();
    }
    if (*(uint *)(lVar2 + 0x18) <= *(uint *)(unaff_x19 + 0x48)) {
                    /* WARNING: Subroutine does not return */
      FUN_04031894();
    }
    lVar2 = *(long *)(lVar2 + (long)(int)*(uint *)(unaff_x19 + 0x48) * 8 + 0x20);
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0403188c();
    }
    plVar8 = *(long **)(unaff_x19 + 0x28);
    if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0403188c();
    }
    lVar5 = *plVar8;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *unaff_x29) {
          puVar3 = (undefined8 *)(lVar5 + (long)(*piVar7 + 9) * 0x10 + 0x138);
          goto LAB_076c77f4;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)FUN_0406ae20(plVar8,*unaff_x29,9);
LAB_076c77f4:
    bVar1 = (*(code *)*puVar3)(plVar8,unaff_w20,lVar2 + 0x14,puVar3[1]);
    *(byte *)(lVar2 + 0x10) = bVar1 & 1;
    do {
      if (in_stack_00000018 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0403188c();
      }
      lVar2 = *in_stack_00000018;
      uVar6 = (ulong)*(ushort *)(lVar2 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *unaff_x24) {
            puVar3 = (undefined8 *)(lVar2 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_076c7630;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar3 = (undefined8 *)FUN_0406ae20(in_stack_00000018,*unaff_x24,0);
LAB_076c7630:
      uVar6 = (*(code *)*puVar3)(in_stack_00000018,puVar3[1]);
      if ((uVar6 & 1) == 0) {
        if (in_stack_00000018 == (long *)0x0) {
          return;
        }
        lVar2 = *in_stack_00000018;
        uVar6 = (ulong)*(ushort *)(lVar2 + 0x12e);
        if (uVar6 == 0) goto LAB_076c7864;
        piVar7 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
        goto LAB_076c784c;
      }
      if (in_stack_00000018 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0403188c();
      }
      lVar2 = *in_stack_00000018;
      uVar6 = (ulong)*(ushort *)(lVar2 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *unaff_x25) {
            puVar3 = (undefined8 *)(lVar2 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_076c7694;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar3 = (undefined8 *)FUN_0406ae20(in_stack_00000018,*unaff_x25,0);
LAB_076c7694:
      unaff_w20 = (*(code *)*puVar3)(in_stack_00000018,puVar3[1]);
      if (*(long *)(unaff_x19 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0403188c();
      }
      uVar6 = FUN_06f68460(*(long *)(unaff_x19 + 0x30),unaff_w20,*unaff_x26);
    } while ((uVar6 & 1) != 0);
    unaff_x21 = *(long *)(unaff_x19 + 0x30);
    unaff_x22 = (long *)FUN_040316d0(*(undefined8 *)PTR_DAT_08fadae0,2);
    lVar2 = thunk_FUN_0406deb8(*unaff_x28);
    FUN_076c7984();
    if (unaff_x22 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0403188c();
    }
    if ((lVar2 != 0) &&
       (lVar5 = thunk_FUN_0406ddbc(lVar2,*(undefined8 *)(*unaff_x22 + 0x40)), lVar5 == 0)) {
      uVar4 = thunk_FUN_0407b7a8();
                    /* WARNING: Subroutine does not return */
      FUN_04031750(uVar4,0);
    }
    if ((int)unaff_x22[3] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04031894();
    }
    unaff_x22[4] = lVar2;
    param_1 = thunk_FUN_0406deb8(*unaff_x28);
  } while( true );
  while( true ) {
    uVar6 = uVar6 - 1;
    piVar7 = piVar7 + 4;
    if (uVar6 == 0) break;
LAB_076c784c:
    if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_08f65868) {
      puVar3 = (undefined8 *)(lVar2 + (long)*piVar7 * 0x10 + 0x138);
      goto LAB_076c7880;
    }
  }
LAB_076c7864:
  puVar3 = (undefined8 *)FUN_0406ae20(in_stack_00000018,*(long *)PTR_DAT_08f65868,0);
LAB_076c7880:
  (*(code *)*puVar3)(in_stack_00000018,puVar3[1]);
  return;
}


