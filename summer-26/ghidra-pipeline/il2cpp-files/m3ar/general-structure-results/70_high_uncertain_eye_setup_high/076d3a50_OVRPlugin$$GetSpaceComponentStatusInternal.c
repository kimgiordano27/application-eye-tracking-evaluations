/*
FUNCTION_NAME: OVRPlugin$$GetSpaceComponentStatusInternal
ENTRY_POINT: 076d3a50
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


/* WARNING: Removing unreachable block (ram,0x076d3bb0) */
/* WARNING: Removing unreachable block (ram,0x076d3c70) */

void OVRPlugin__GetSpaceComponentStatusInternal(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long unaff_x19;
  long *plVar6;
  undefined8 unaff_x20;
  long *unaff_x22;
  long *unaff_x23;
  undefined4 in_stack_00000020;
  long *in_stack_00000030;
  
  do {
    lVar3 = *unaff_x22;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_08f65880) {
          puVar1 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_076d3aa4;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar1 = (undefined8 *)FUN_0406ae20(unaff_x22,*(long *)PTR_DAT_08f65880,0);
LAB_076d3aa4:
    uVar4 = (*(code *)*puVar1)(unaff_x22,puVar1[1]);
    plVar6 = in_stack_00000030;
    if ((uVar4 & 1) == 0) {
      if (in_stack_00000030 == (long *)0x0) goto LAB_076d3ba4;
      lVar3 = *in_stack_00000030;
      uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar4 == 0) goto LAB_076d3b7c;
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      break;
    }
    if (in_stack_00000030 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0403188c();
    }
    lVar3 = *in_stack_00000030;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x23) {
          puVar1 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_076d3b08;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar1 = (undefined8 *)FUN_0406ae20(in_stack_00000030,*unaff_x23,0);
LAB_076d3b08:
    lVar3 = (*(code *)*puVar1)(plVar6,puVar1[1]);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0403188c();
    }
    unaff_x20 = FUN_0735c7b4(unaff_x20,*(undefined8 *)(lVar3 + 0x18),0);
    unaff_x22 = in_stack_00000030;
    if (in_stack_00000030 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0403188c();
    }
  } while( true );
  while( true ) {
    uVar4 = uVar4 - 1;
    piVar5 = piVar5 + 4;
    if (uVar4 == 0) break;
    if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_08f65868) {
      puVar1 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
      goto LAB_076d3b98;
    }
  }
LAB_076d3b7c:
  puVar1 = (undefined8 *)FUN_0406ae20(in_stack_00000030,*(long *)PTR_DAT_08f65868,0);
LAB_076d3b98:
  (*(code *)*puVar1)(plVar6,puVar1[1]);
LAB_076d3ba4:
  if (*(long *)(unaff_x19 + 0x30) != 0) {
    plVar6 = *(long **)(unaff_x19 + 0x98);
    in_stack_00000020 = FUN_076ccf14();
    uVar2 = thunk_FUN_0406db0c(*(undefined8 *)PTR_DAT_08fadf50,&stack0x00000020);
    uVar2 = FUN_0736a294(*(undefined8 *)PTR_DAT_08fadfa0,uVar2,unaff_x20,0);
    if (plVar6 != (long *)0x0) {
      (**(code **)(*plVar6 + 0x558))(plVar6,uVar2,*(undefined8 *)(*plVar6 + 0x560));
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
}


