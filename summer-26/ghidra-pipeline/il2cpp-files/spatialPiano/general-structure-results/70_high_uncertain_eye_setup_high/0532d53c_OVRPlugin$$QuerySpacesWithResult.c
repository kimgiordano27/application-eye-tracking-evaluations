/*
FUNCTION_NAME: OVRPlugin$$QuerySpacesWithResult
ENTRY_POINT: 0532d53c
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__QuerySpacesWithResult(undefined8 *param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long lVar4;
  int *piVar5;
  long unaff_x19;
  long *plVar6;
  long *unaff_x22;
  long unaff_x23;
  undefined8 *puVar7;
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
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  ulong in_stack_00000060;
  undefined8 in_stack_00000070;
  undefined4 uStack0000000000000078;
  undefined4 uStack000000000000007c;
  undefined4 uStack0000000000000080;
  undefined4 uStack0000000000000084;
  undefined4 in_stack_00000088;
  
  puVar7 = *(undefined8 **)(unaff_x23 + 0x278);
  (*(code *)*param_1)(&stack0x00000070);
  in_stack_00000060 = CONCAT44(uStack0000000000000084,uStack0000000000000080);
  in_stack_00000058 = CONCAT44(uStack000000000000007c,uStack0000000000000078);
  in_stack_00000050 = in_stack_00000070;
  do {
    uVar2 = FUN_04aeea48(&stack0x00000050,*unaff_x24);
    uVar1 = in_stack_00000060;
    if ((uVar2 & 1) == 0) {
      FUN_04aeea44(&stack0x00000050,*puVar7);
      lVar4 = *(long *)(unaff_x19 + 0x20);
      if (lVar4 != 0) {
        (**(code **)(lVar4 + 0x18))(*(undefined8 *)(lVar4 + 0x40),*(undefined8 *)(lVar4 + 0x28));
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    plVar6 = *(long **)(unaff_x19 + 0x30);
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    lVar4 = *plVar6;
    uVar2 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar2 != 0) {
      piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x22) {
          puVar3 = (undefined8 *)(lVar4 + (long)(*piVar5 + 7) * 0x10 + 0x138);
          goto LAB_0532d5d4;
        }
        uVar2 = uVar2 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar2 != 0);
    }
    puVar3 = (undefined8 *)FUN_02f421d0(plVar6,*unaff_x22,7);
LAB_0532d5d4:
    uVar2 = (*(code *)*puVar3)(plVar6,uVar1 & 0xffffffff,&stack0x00000030,puVar3[1]);
    if ((uVar2 & 1) != 0) {
      if (*(long *)(unaff_x19 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      uStack0000000000000078 = in_stack_00000038;
      in_stack_00000070 = in_stack_00000030;
      uStack0000000000000084 = (undefined4)uStack0000000000000044;
      in_stack_00000088 = SUB84(uStack0000000000000044,4);
      uStack0000000000000080 = uStack0000000000000040;
      FUN_048b42ec(*(long *)(unaff_x19 + 0x40),uVar1 & 0xffffffff,&stack0x00000070,*unaff_x25);
    }
    plVar6 = *(long **)(unaff_x19 + 0x30);
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    lVar4 = *plVar6;
    uVar2 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar2 != 0) {
      piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x22) {
          puVar3 = (undefined8 *)(lVar4 + (long)(*piVar5 + 8) * 0x10 + 0x138);
          goto LAB_0532d66c;
        }
        uVar2 = uVar2 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar2 != 0);
    }
    puVar3 = (undefined8 *)FUN_02f421d0(plVar6,*unaff_x22,8);
LAB_0532d66c:
    uVar2 = (*(code *)*puVar3)(plVar6,uVar1 & 0xffffffff,&stack0x00000010,puVar3[1]);
    if ((uVar2 & 1) != 0) {
      if (*(long *)(unaff_x19 + 0x48) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      uStack0000000000000078 = in_stack_00000018;
      in_stack_00000070 = in_stack_00000010;
      uStack0000000000000084 = (undefined4)uStack0000000000000024;
      in_stack_00000088 = SUB84(uStack0000000000000024,4);
      uStack0000000000000080 = uStack0000000000000020;
      FUN_048b42ec(*(long *)(unaff_x19 + 0x48),uVar1 & 0xffffffff,&stack0x00000070,*unaff_x25);
    }
  } while( true );
}


