/*
FUNCTION_NAME: OVRPlugin$$GetSpaceRoomLayout
ENTRY_POINT: 076d5684
PROGRAM: m3ar-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin__GetSpaceRoomLayout(long param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  ulong in_x9;
  long in_x10;
  int *piVar4;
  long *unaff_x19;
  long *plVar5;
  long *unaff_x21;
  long *unaff_x22;
  long *unaff_x23;
  undefined1 auVar6 [16];
  long in_stack_00000018;
  
  do {
    piVar4 = (int *)(in_x10 + 8);
    do {
      if (*(long *)(piVar4 + -2) == param_3) {
        puVar1 = (undefined8 *)(param_1 + (long)*piVar4 * 0x10 + 0x138);
        goto LAB_076d56bc;
      }
      in_x9 = in_x9 - 1;
      piVar4 = piVar4 + 4;
    } while (in_x9 != 0);
    do {
      puVar1 = (undefined8 *)FUN_0406ae20(unaff_x19,param_3,0);
LAB_076d56bc:
      uVar2 = (*(code *)*puVar1)(unaff_x19,puVar1[1]);
      if ((uVar2 & 1) == 0) {
        FUN_076d5a08();
        *(undefined8 *)(in_stack_00000018 + 0x38) = 0;
        return 0;
      }
      plVar5 = *(long **)(in_stack_00000018 + 0x38);
      if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0403188c();
      }
      lVar3 = *plVar5;
      uVar2 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar2 != 0) {
        piVar4 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar4 + -2) == *unaff_x22) {
            puVar1 = (undefined8 *)(lVar3 + (long)*piVar4 * 0x10 + 0x138);
            goto LAB_076d5728;
          }
          uVar2 = uVar2 - 1;
          piVar4 = piVar4 + 4;
        } while (uVar2 != 0);
      }
      puVar1 = (undefined8 *)FUN_0406ae20(plVar5,*unaff_x22,0);
LAB_076d5728:
      lVar3 = (*(code *)*puVar1)(plVar5,puVar1[1]);
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0403188c();
      }
      plVar5 = (long *)FUN_076cc4e4();
      if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0403188c();
      }
      lVar3 = *plVar5;
      uVar2 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar2 != 0) {
        piVar4 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar4 + -2) == *unaff_x23) {
            puVar1 = (undefined8 *)(lVar3 + (long)*piVar4 * 0x10 + 0x138);
            goto LAB_076d5790;
          }
          uVar2 = uVar2 - 1;
          piVar4 = piVar4 + 4;
        } while (uVar2 != 0);
      }
      puVar1 = (undefined8 *)FUN_0406ae20(plVar5,*unaff_x23,0);
LAB_076d5790:
      plVar5 = (long *)(*(code *)*puVar1)(plVar5,puVar1[1]);
      *(long **)(in_stack_00000018 + 0x40) = plVar5;
      *(undefined4 *)(in_stack_00000018 + 0x10) = 0xfffffffc;
      if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0403188c();
      }
      lVar3 = *plVar5;
      uVar2 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar2 != 0) {
        piVar4 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar4 + -2) == *unaff_x21) {
            puVar1 = (undefined8 *)(lVar3 + (long)*piVar4 * 0x10 + 0x138);
            goto LAB_076d5800;
          }
          uVar2 = uVar2 - 1;
          piVar4 = piVar4 + 4;
        } while (uVar2 != 0);
      }
      puVar1 = (undefined8 *)FUN_0406ae20(plVar5,*unaff_x21,0);
LAB_076d5800:
      uVar2 = (*(code *)*puVar1)(plVar5,puVar1[1]);
      if ((uVar2 & 1) != 0) {
        plVar5 = *(long **)(in_stack_00000018 + 0x40);
        if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_0403188c();
        }
        lVar3 = *plVar5;
        uVar2 = (ulong)*(ushort *)(lVar3 + 0x12e);
        if (uVar2 == 0) goto LAB_076d5880;
        piVar4 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        goto LAB_076d5868;
      }
      FUN_076d5958();
      unaff_x19 = *(long **)(in_stack_00000018 + 0x38);
      *(undefined8 *)(in_stack_00000018 + 0x40) = 0;
      if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0403188c();
      }
      param_1 = *unaff_x19;
      param_3 = *unaff_x21;
      in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
    } while (in_x9 == 0);
    in_x10 = *(long *)(param_1 + 0xb0);
  } while( true );
  while( true ) {
    uVar2 = uVar2 - 1;
    piVar4 = piVar4 + 4;
    if (uVar2 == 0) break;
LAB_076d5868:
    if (*(long *)(piVar4 + -2) == *(long *)PTR_DAT_08fadfe8) {
      puVar1 = (undefined8 *)(lVar3 + (long)*piVar4 * 0x10 + 0x138);
      goto LAB_076d589c;
    }
  }
LAB_076d5880:
  puVar1 = (undefined8 *)FUN_0406ae20(plVar5,*(long *)PTR_DAT_08fadfe8,0);
LAB_076d589c:
  auVar6 = (*(code *)*puVar1)(plVar5,puVar1[1]);
  *(undefined1 (*) [16])(in_stack_00000018 + 0x18) = auVar6;
  *(undefined4 *)(in_stack_00000018 + 0x10) = 1;
  return 1;
}


