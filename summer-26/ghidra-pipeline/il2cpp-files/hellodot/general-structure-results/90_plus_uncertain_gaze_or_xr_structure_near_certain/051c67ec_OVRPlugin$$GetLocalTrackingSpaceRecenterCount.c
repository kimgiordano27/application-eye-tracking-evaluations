/*
FUNCTION_NAME: OVRPlugin$$GetLocalTrackingSpaceRecenterCount
ENTRY_POINT: 051c67ec
PROGRAM: hellodot-libil2cpp.so
SCORE: 101
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_6;validity_or_gating_hits_6;paired_field_refs_with_eye_source;functionality_gaze_retrieval_or_extraction
*/


void OVRPlugin__GetLocalTrackingSpaceRecenterCount(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long *in_x10;
  int *piVar8;
  long unaff_x19;
  long *plVar9;
  long *unaff_x22;
  undefined8 in_stack_00000020;
  undefined4 in_stack_00000028;
  undefined4 uStack0000000000000030;
  undefined8 uStack0000000000000034;
  undefined8 in_stack_00000040;
  undefined4 in_stack_00000048;
  undefined4 uStack0000000000000050;
  undefined8 uStack0000000000000054;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  ulong in_stack_00000070;
  undefined8 in_stack_00000080;
  undefined4 uStack0000000000000088;
  undefined4 uStack000000000000008c;
  undefined4 uStack0000000000000090;
  undefined4 uStack0000000000000094;
  undefined4 in_stack_00000098;
  
  uVar7 = (ulong)*(ushort *)(param_1 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == *in_x10) {
        puVar4 = (undefined8 *)(param_1 + (long)(*piVar8 + 1) * 0x10 + 0x138);
        goto LAB_051c6838;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar4 = (undefined8 *)FUN_02ce0a7c();
LAB_051c6838:
  puVar3 = PTR_DAT_06605e80;
  puVar2 = PTR_DAT_066056b0;
  puVar1 = PTR_DAT_066056a8;
  (*(code *)*puVar4)(&stack0x00000080);
  in_stack_00000068 = CONCAT44(uStack000000000000008c,uStack0000000000000088);
  in_stack_00000070 = CONCAT44(uStack0000000000000094,uStack0000000000000090);
  in_stack_00000060 = in_stack_00000080;
  do {
    uVar5 = FUN_04812268(&stack0x00000060,*(undefined8 *)puVar2);
    uVar7 = in_stack_00000070;
    if ((uVar5 & 1) == 0) {
      FUN_04812264(&stack0x00000060,*(undefined8 *)puVar1);
      lVar6 = *(long *)(unaff_x19 + 0x20);
      if (lVar6 != 0) {
        (**(code **)(lVar6 + 0x18))(*(undefined8 *)(lVar6 + 0x40),*(undefined8 *)(lVar6 + 0x28));
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    plVar9 = *(long **)(unaff_x19 + 0x30);
    if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    lVar6 = *plVar9;
    uVar5 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar5 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *unaff_x22) {
          puVar4 = (undefined8 *)(lVar6 + (long)(*piVar8 + 7) * 0x10 + 0x138);
          goto LAB_051c68e0;
        }
        uVar5 = uVar5 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar5 != 0);
    }
    puVar4 = (undefined8 *)FUN_02ce0a7c(plVar9,*unaff_x22,7);
LAB_051c68e0:
    uVar5 = (*(code *)*puVar4)(plVar9,uVar7 & 0xffffffff,&stack0x00000040,puVar4[1]);
    if ((uVar5 & 1) != 0) {
      if (*(long *)(unaff_x19 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      uStack0000000000000088 = in_stack_00000048;
      in_stack_00000080 = in_stack_00000040;
      uStack0000000000000094 = (undefined4)uStack0000000000000054;
      in_stack_00000098 = SUB84(uStack0000000000000054,4);
      uStack0000000000000090 = uStack0000000000000050;
      FUN_04611b14(*(long *)(unaff_x19 + 0x40),uVar7 & 0xffffffff,&stack0x00000080,
                   *(undefined8 *)puVar3);
    }
    plVar9 = *(long **)(unaff_x19 + 0x30);
    if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    lVar6 = *plVar9;
    uVar5 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar5 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *unaff_x22) {
          puVar4 = (undefined8 *)(lVar6 + (long)(*piVar8 + 8) * 0x10 + 0x138);
          goto OVRPlugin__SetClientColorDesc;
        }
        uVar5 = uVar5 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar5 != 0);
    }
    puVar4 = (undefined8 *)FUN_02ce0a7c(plVar9,*unaff_x22,8);
OVRPlugin__SetClientColorDesc:
    uVar5 = (*(code *)*puVar4)(plVar9,uVar7 & 0xffffffff,&stack0x00000020,puVar4[1]);
    if ((uVar5 & 1) != 0) {
      if (*(long *)(unaff_x19 + 0x48) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      uStack0000000000000088 = in_stack_00000028;
      in_stack_00000080 = in_stack_00000020;
      uStack0000000000000094 = (undefined4)uStack0000000000000034;
      in_stack_00000098 = SUB84(uStack0000000000000034,4);
      uStack0000000000000090 = uStack0000000000000030;
      FUN_04611b14(*(long *)(unaff_x19 + 0x48),uVar7 & 0xffffffff,&stack0x00000080,
                   *(undefined8 *)puVar3);
    }
  } while( true );
}


