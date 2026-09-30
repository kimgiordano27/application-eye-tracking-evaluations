/*
FUNCTION_NAME: OVRBounded3D$$Equals
ENTRY_POINT: 019a3a40
PROGRAM: Lovesick-libil2cpp.so
SCORE: 79
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_10;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void OVRBounded3D__Equals(long param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  long in_x9;
  int *piVar7;
  long unaff_x19;
  int unaff_w20;
  long *unaff_x21;
  long *unaff_x22;
  long *plVar8;
  long *unaff_x23;
  long *unaff_x24;
  undefined8 in_stack_00000000;
  undefined4 in_stack_00000008;
  undefined4 in_stack_00000010;
  undefined8 in_stack_00000020;
  undefined4 in_stack_00000028;
  undefined4 in_stack_00000030;
  long in_stack_00000078;
  
code_r0x019a3a40:
  puVar5 = (undefined8 *)(param_1 + in_x9 * 0x10 + 0x138);
  while( true ) {
    uVar2 = (*(code *)*puVar5)(unaff_x21,unaff_w20,puVar5[1]);
    if (in_stack_00000078 == 0) break;
    OVRPlugin__EraseSpace(in_stack_00000078,unaff_w20,0);
    in_stack_00000028 = in_stack_00000008;
    in_stack_00000020 = in_stack_00000000;
    in_stack_00000030 = in_stack_00000010;
    FUN_019ac4bc(uVar2,&stack0x00000020,1,0);
    do {
      unaff_w20 = unaff_w20 + 1;
      if (unaff_w20 == 0x1a) {
        uVar2 = *(undefined8 *)(unaff_x19 + 0x60);
        if (*(int *)(*unaff_x22 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar3 = FUN_02681b9c(uVar2,0,0);
        if ((uVar3 & 1) == 0) goto LAB_019a3b68;
        if (*(long *)(unaff_x19 + 0x60) == 0) goto LAB_019a3b9c;
        lVar4 = FUN_01991930();
        plVar8 = *(long **)(unaff_x19 + 0x20);
        if (plVar8 == (long *)0x0) goto LAB_019a3b9c;
        lVar6 = *plVar8;
        uVar1 = *(undefined4 *)(unaff_x19 + 0x78);
        uVar3 = (ulong)*(ushort *)(lVar6 + 0x12a);
        if (uVar3 == 0) goto LAB_019a3b1c;
        piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        goto LAB_019a3b04;
      }
      plVar8 = *(long **)(unaff_x19 + 0x68);
      if (plVar8 == (long *)0x0) goto LAB_019a3b9c;
      lVar4 = *plVar8;
      uVar3 = (ulong)*(ushort *)(lVar4 + 0x12a);
      if (uVar3 != 0) {
        piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *unaff_x24) {
            puVar5 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_019a39b8;
          }
          uVar3 = uVar3 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar3 != 0);
      }
      puVar5 = (undefined8 *)FUN_00d59724(plVar8,*unaff_x24,0);
LAB_019a39b8:
      uVar2 = (*(code *)*puVar5)(plVar8,unaff_w20,puVar5[1]);
      if (*(int *)(*unaff_x22 + 0xe0) == 0) {
        thunk_FUN_00d32864(*unaff_x22);
      }
      uVar3 = FUN_0268b4e0(uVar2,0,0);
    } while ((uVar3 & 1) != 0);
    unaff_x21 = *(long **)(unaff_x19 + 0x68);
    if (unaff_x21 == (long *)0x0) break;
    param_1 = *unaff_x21;
    uVar3 = (ulong)*(ushort *)(param_1 + 0x12a);
    if (uVar3 != 0) {
      piVar7 = (int *)(*(long *)(param_1 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *unaff_x24) {
          in_x9 = (long)*piVar7;
          goto code_r0x019a3a40;
        }
        uVar3 = uVar3 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar3 != 0);
    }
    puVar5 = (undefined8 *)FUN_00d59724(unaff_x21,*unaff_x24,0);
  }
  goto LAB_019a3b9c;
  while( true ) {
    uVar3 = uVar3 - 1;
    piVar7 = piVar7 + 4;
    if (uVar3 == 0) break;
LAB_019a3b04:
    if (*(long *)(piVar7 + -2) == *unaff_x23) {
      puVar5 = (undefined8 *)(lVar6 + (long)(*piVar7 + 4) * 0x10 + 0x138);
      goto LAB_019a3b3c;
    }
  }
LAB_019a3b1c:
  puVar5 = (undefined8 *)FUN_00d59724(plVar8,*unaff_x23,4);
LAB_019a3b3c:
  (*(code *)*puVar5)(plVar8,puVar5[1]);
  if (lVar4 != 0) {
    FUN_0267be98(lVar4,uVar1,0);
    if (*(long *)(unaff_x19 + 0x60) != 0) {
      FUN_019a1c58();
LAB_019a3b68:
      lVar4 = *(long *)(unaff_x19 + 0x70);
      if (lVar4 != 0) {
        (**(code **)(lVar4 + 0x18))(*(undefined8 *)(lVar4 + 0x40),*(undefined8 *)(lVar4 + 0x28));
        return;
      }
    }
  }
LAB_019a3b9c:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


