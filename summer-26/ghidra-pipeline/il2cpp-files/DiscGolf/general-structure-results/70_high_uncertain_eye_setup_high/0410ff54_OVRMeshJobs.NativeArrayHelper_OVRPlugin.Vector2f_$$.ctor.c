/*
FUNCTION_NAME: OVRMeshJobs.NativeArrayHelper<OVRPlugin.Vector2f>$$.ctor
ENTRY_POINT: 0410ff54
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x041101bc) */

void OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector2f>___ctor
               (long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  long in_x9;
  ulong uVar7;
  long in_x10;
  int *piVar8;
  long unaff_x19;
  long unaff_x20;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 *in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  long *in_stack_00000078;
  
  piVar8 = (int *)(in_x10 + 8);
  do {
    if (*(long *)(piVar8 + -2) == param_3) {
      puVar2 = (undefined8 *)(param_1 + (long)*piVar8 * 0x10 + 0x138);
      goto LAB_0410ff8c;
    }
    in_x9 = in_x9 + -1;
    piVar8 = piVar8 + 4;
  } while (in_x9 != 0);
  puVar2 = (undefined8 *)FUN_02dd004c();
LAB_0410ff8c:
  plVar3 = (long *)(*(code *)*puVar2)();
  puVar1 = PTR_DAT_069fbff8;
  in_stack_00000048 = &stack0x00000078;
  in_stack_00000040 = 0;
  do {
    in_stack_00000078 = plVar3;
    if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    lVar4 = *plVar3;
    uVar7 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)puVar1) {
          puVar2 = (undefined8 *)(lVar4 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_04110000;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar2 = (undefined8 *)FUN_02dd004c(plVar3,*(long *)puVar1,0);
LAB_04110000:
    uVar7 = (*(code *)*puVar2)(plVar3,puVar2[1]);
    plVar3 = in_stack_00000078;
    if ((uVar7 & 1) == 0) {
      if (in_stack_00000078 == (long *)0x0) {
        return;
      }
      lVar4 = *in_stack_00000078;
      uVar7 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar7 == 0) goto LAB_04110168;
      piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      break;
    }
    if (in_stack_00000078 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    lVar4 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x140);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_02dcfd18(lVar4);
    }
    lVar5 = *plVar3;
    uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == lVar4) {
          puVar2 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_04110084;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar2 = (undefined8 *)FUN_02dd004c(plVar3,lVar4,0);
LAB_04110084:
    (*(code *)*puVar2)(&stack0x00000020,plVar3,puVar2[1]);
    lVar4 = *(long *)(unaff_x20 + 0x10);
    in_stack_00000058 = in_stack_00000028;
    in_stack_00000050 = in_stack_00000020;
    in_stack_00000068 = in_stack_00000038;
    in_stack_00000060 = in_stack_00000030;
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    uVar6 = *(uint *)(unaff_x20 + 0x18);
    if (uVar6 == *(uint *)(lVar4 + 0x18)) {
      FUN_0410e870();
      uVar6 = *(uint *)(unaff_x20 + 0x18);
      lVar4 = *(long *)(unaff_x20 + 0x10);
      *(uint *)(unaff_x20 + 0x18) = uVar6 + 1;
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
    }
    else {
      *(uint *)(unaff_x20 + 0x18) = uVar6 + 1;
    }
    if (*(uint *)(lVar4 + 0x18) <= uVar6) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96868();
    }
    lVar4 = lVar4 + (long)(int)uVar6 * 0x20;
    *(undefined8 *)(lVar4 + 0x28) = in_stack_00000058;
    *(undefined8 *)(lVar4 + 0x20) = in_stack_00000050;
    *(undefined8 *)(lVar4 + 0x38) = in_stack_00000068;
    *(undefined8 *)(lVar4 + 0x30) = in_stack_00000060;
    plVar3 = in_stack_00000078;
  } while( true );
  while( true ) {
    uVar7 = uVar7 - 1;
    piVar8 = piVar8 + 4;
    if (uVar7 == 0) break;
    if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_069fbff0) {
      puVar2 = (undefined8 *)(lVar4 + (long)*piVar8 * 0x10 + 0x138);
      goto LAB_04110184;
    }
  }
LAB_04110168:
  puVar2 = (undefined8 *)FUN_02dd004c(in_stack_00000078,*(long *)PTR_DAT_069fbff0,0);
LAB_04110184:
  (*(code *)*puVar2)(plVar3,puVar2[1]);
  return;
}


