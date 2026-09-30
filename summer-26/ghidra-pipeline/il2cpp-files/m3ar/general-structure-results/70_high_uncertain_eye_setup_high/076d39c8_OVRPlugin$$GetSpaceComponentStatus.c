/*
FUNCTION_NAME: OVRPlugin$$GetSpaceComponentStatus
ENTRY_POINT: 076d39c8
PROGRAM: m3ar-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x076d3bb0) */
/* WARNING: Removing unreachable block (ram,0x076d3c70) */

void OVRPlugin__GetSpaceComponentStatus(void)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  long in_x10;
  int *piVar7;
  long unaff_x19;
  long *plVar8;
  long *unaff_x20;
  undefined8 uVar9;
  undefined8 in_stack_00000020;
  undefined8 *in_stack_00000028;
  long *in_stack_00000030;
  
  lVar5 = *unaff_x20;
  uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
  uVar9 = **(undefined8 **)(in_x10 + 0xda8);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_08fadf60) {
        puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
        goto LAB_076d3a24;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  puVar3 = (undefined8 *)FUN_0406ae20();
LAB_076d3a24:
  puVar1 = PTR_DAT_08fadf68;
  in_stack_00000030 = (long *)(*(code *)*puVar3)();
  in_stack_00000028 = &stack0x00000030;
  in_stack_00000020 = 0;
  do {
    plVar8 = in_stack_00000030;
    if (in_stack_00000030 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0403188c();
    }
    lVar5 = *in_stack_00000030;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_08f65880) {
          puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_076d3aa4;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)FUN_0406ae20(in_stack_00000030,*(long *)PTR_DAT_08f65880,0);
LAB_076d3aa4:
    uVar6 = (*(code *)*puVar3)(plVar8,puVar3[1]);
    plVar8 = in_stack_00000030;
    if ((uVar6 & 1) == 0) {
      if (in_stack_00000030 == (long *)0x0) goto LAB_076d3ba4;
      lVar5 = *in_stack_00000030;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 == 0) goto LAB_076d3b7c;
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      break;
    }
    if (in_stack_00000030 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0403188c();
    }
    lVar5 = *in_stack_00000030;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)puVar1) {
          puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_076d3b08;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)FUN_0406ae20(in_stack_00000030,*(long *)puVar1,0);
LAB_076d3b08:
    lVar5 = (*(code *)*puVar3)(plVar8,puVar3[1]);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0403188c();
    }
    uVar9 = FUN_0735c7b4(uVar9,*(undefined8 *)(lVar5 + 0x18),0);
  } while( true );
  while( true ) {
    uVar6 = uVar6 - 1;
    piVar7 = piVar7 + 4;
    if (uVar6 == 0) break;
    if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_08f65868) {
      puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
      goto LAB_076d3b98;
    }
  }
LAB_076d3b7c:
  puVar3 = (undefined8 *)FUN_0406ae20(in_stack_00000030,*(long *)PTR_DAT_08f65868,0);
LAB_076d3b98:
  (*(code *)*puVar3)(plVar8,puVar3[1]);
LAB_076d3ba4:
  if (*(long *)(unaff_x19 + 0x30) != 0) {
    plVar8 = *(long **)(unaff_x19 + 0x98);
    uVar2 = FUN_076ccf14();
    in_stack_00000020 = CONCAT44(in_stack_00000020._4_4_,uVar2);
    uVar4 = thunk_FUN_0406db0c(*(undefined8 *)PTR_DAT_08fadf50,&stack0x00000020);
    uVar9 = FUN_0736a294(*(undefined8 *)PTR_DAT_08fadfa0,uVar4,uVar9,0);
    if (plVar8 != (long *)0x0) {
      (**(code **)(*plVar8 + 0x558))(plVar8,uVar9,*(undefined8 *)(*plVar8 + 0x560));
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
}


