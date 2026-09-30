/*
FUNCTION_NAME: OVRPlugin$$DestroyVirtualKeyboard
ENTRY_POINT: 07a43f08
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__DestroyVirtualKeyboard(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  long unaff_x19;
  undefined4 unaff_w20;
  long *plVar5;
  long *unaff_x22;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  undefined8 in_stack_00000010;
  undefined4 in_stack_00000018;
  undefined4 uStack0000000000000020;
  undefined8 uStack0000000000000024;
  undefined8 in_stack_00000030;
  undefined4 in_stack_00000038;
  undefined4 uStack0000000000000040;
  undefined8 uStack0000000000000044;
  undefined4 in_stack_00000060;
  undefined8 uStack0000000000000070;
  undefined4 uStack0000000000000078;
  undefined4 uStack0000000000000080;
  undefined8 uStack0000000000000084;
  
  do {
    uStack0000000000000078 = in_stack_00000038;
    uStack0000000000000070 = in_stack_00000030;
    uStack0000000000000084 = uStack0000000000000044;
    uStack0000000000000080 = uStack0000000000000040;
    FUN_06e849ac(param_1,unaff_w20,&stack0x00000070,*unaff_x25);
    do {
      plVar5 = *(long **)(unaff_x19 + 0x30);
      if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      lVar2 = *plVar5;
      uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
      if (uVar3 != 0) {
        piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
        do {
          if (*(long *)(piVar4 + -2) == *unaff_x22) {
            puVar1 = (undefined8 *)(lVar2 + (long)(*piVar4 + 8) * 0x10 + 0x138);
            goto LAB_07a43f80;
          }
          uVar3 = uVar3 - 1;
          piVar4 = piVar4 + 4;
        } while (uVar3 != 0);
      }
      puVar1 = (undefined8 *)FUN_040b1e00(plVar5,*unaff_x22,8);
LAB_07a43f80:
      uVar3 = (*(code *)*puVar1)(plVar5,unaff_w20,&stack0x00000010,puVar1[1]);
      if ((uVar3 & 1) != 0) {
        if (*(long *)(unaff_x19 + 0x48) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04077830();
        }
        uStack0000000000000078 = in_stack_00000018;
        uStack0000000000000070 = in_stack_00000010;
        uStack0000000000000084 = uStack0000000000000024;
        uStack0000000000000080 = uStack0000000000000020;
        FUN_06e849ac(*(long *)(unaff_x19 + 0x48),unaff_w20,&stack0x00000070,*unaff_x25);
      }
      uVar3 = FUN_0712a164(&stack0x00000050,*unaff_x24);
      unaff_w20 = in_stack_00000060;
      if ((uVar3 & 1) == 0) {
        FUN_0712a160(&stack0x00000050,*unaff_x23);
        lVar2 = *(long *)(unaff_x19 + 0x20);
        if (lVar2 != 0) {
          (**(code **)(lVar2 + 0x18))(*(undefined8 *)(lVar2 + 0x40),*(undefined8 *)(lVar2 + 0x28));
          return;
        }
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      plVar5 = *(long **)(unaff_x19 + 0x30);
      if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      lVar2 = *plVar5;
      uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
      if (uVar3 != 0) {
        piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
        do {
          if (*(long *)(piVar4 + -2) == *unaff_x22) {
            puVar1 = (undefined8 *)(lVar2 + (long)(*piVar4 + 7) * 0x10 + 0x138);
            goto LAB_07a43ee8;
          }
          uVar3 = uVar3 - 1;
          piVar4 = piVar4 + 4;
        } while (uVar3 != 0);
      }
      puVar1 = (undefined8 *)FUN_040b1e00(plVar5,*unaff_x22,7);
LAB_07a43ee8:
      uVar3 = (*(code *)*puVar1)(plVar5,unaff_w20,&stack0x00000030,puVar1[1]);
    } while ((uVar3 & 1) == 0);
    param_1 = *(long *)(unaff_x19 + 0x40);
    if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
  } while( true );
}


