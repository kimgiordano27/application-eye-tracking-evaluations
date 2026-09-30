/*
FUNCTION_NAME: Amazon.Runtime.Internal.DefaultRequest$$set_OriginalStreamPosition
ENTRY_POINT: 04a8a950
PROGRAM: Hyper-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_11;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_4;functionality_data_collection_or_telemetry_hits_4
*/


void Amazon_Runtime_Internal_DefaultRequest__set_OriginalStreamPosition(long param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  int *in_x10;
  long unaff_x20;
  long unaff_x21;
  long *unaff_x22;
  long *unaff_x23;
  long *unaff_x24;
  long *unaff_x25;
  long *unaff_x26;
  long in_stack_00000010;
  undefined8 *in_stack_00000018;
  long *in_stack_00000028;
  
code_r0x04a8a950:
  puVar1 = (undefined8 *)(param_1 + (long)*in_x10 * 0x10 + 0x138);
LAB_04a8a95c:
  (*(code *)*puVar1)(unaff_x22,puVar1[1]);
LAB_04a8a968:
  if (unaff_x21 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04948184(unaff_x21);
  }
  if (in_stack_00000028 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0494818c();
  }
  lVar3 = *in_stack_00000028;
  uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) == *unaff_x25) {
        puVar1 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
        goto LAB_04a8a728;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  puVar1 = (undefined8 *)FUN_04980e68(in_stack_00000028,*unaff_x25,0);
LAB_04a8a728:
  uVar4 = (*(code *)*puVar1)(in_stack_00000028,puVar1[1]);
  if ((uVar4 & 1) != 0) {
    if (in_stack_00000028 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    lVar3 = *in_stack_00000028;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x26) {
          puVar1 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_04a8a78c;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar1 = (undefined8 *)FUN_04980e68(in_stack_00000028,*unaff_x26,0);
LAB_04a8a78c:
    (*(code *)*puVar1)(in_stack_00000028,puVar1[1]);
    plVar2 = (long *)FUN_094d0c80();
    if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    lVar3 = *plVar2;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x24) {
          puVar1 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_04a8a800;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar1 = (undefined8 *)FUN_04980e68(plVar2,*unaff_x24,0);
LAB_04a8a800:
    unaff_x22 = (long *)(*(code *)*puVar1)(plVar2,puVar1[1]);
    do {
      if (unaff_x22 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0494818c();
      }
      lVar3 = *unaff_x22;
      uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar4 != 0) {
        piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == *unaff_x25) {
            puVar1 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
            goto LAB_04a8a868;
          }
          uVar4 = uVar4 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar4 != 0);
      }
      puVar1 = (undefined8 *)FUN_04980e68(unaff_x22,*unaff_x25,0);
LAB_04a8a868:
      uVar4 = (*(code *)*puVar1)(unaff_x22,puVar1[1]);
      if ((uVar4 & 1) == 0) goto LAB_04a8a900;
      if (unaff_x22 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0494818c();
      }
      lVar3 = *unaff_x22;
      uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar4 != 0) {
        piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == *unaff_x26) {
            puVar1 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
            goto Amazon_Runtime_Internal_DefaultRequest__get_ContentStream;
          }
          uVar4 = uVar4 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar4 != 0);
      }
      puVar1 = (undefined8 *)FUN_04980e68(unaff_x22,*unaff_x26,0);
Amazon_Runtime_Internal_DefaultRequest__get_ContentStream:
      (*(code *)*puVar1)(unaff_x22,puVar1[1]);
      if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0494818c();
      }
      FUN_04d11c8c();
    } while( true );
  }
  plVar2 = (long *)*in_stack_00000018;
  if (plVar2 == (long *)0x0) goto LAB_04a8aa9c;
  lVar3 = *plVar2;
  uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
  if (uVar4 == 0) goto LAB_04a8aa74;
  piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
  goto LAB_04a8aa5c;
LAB_04a8a900:
  unaff_x21 = 0;
  if (unaff_x22 != (long *)0x0) goto code_r0x04a8a910;
  goto LAB_04a8a968;
code_r0x04a8a910:
  param_1 = *unaff_x22;
  uVar4 = (ulong)*(ushort *)(param_1 + 0x12e);
  if (uVar4 != 0) {
    in_x10 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    do {
      if (*(long *)(in_x10 + -2) == *unaff_x23) goto code_r0x04a8a950;
      uVar4 = uVar4 - 1;
      in_x10 = in_x10 + 4;
    } while (uVar4 != 0);
  }
  puVar1 = (undefined8 *)FUN_04980e68(unaff_x22,*unaff_x23,0);
  goto LAB_04a8a95c;
  while( true ) {
    uVar4 = uVar4 - 1;
    piVar5 = piVar5 + 4;
    if (uVar4 == 0) break;
LAB_04a8aa5c:
    if (*(long *)(piVar5 + -2) == *unaff_x23) {
      puVar1 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
      goto LAB_04a8aa90;
    }
  }
LAB_04a8aa74:
  puVar1 = (undefined8 *)FUN_04980e68(plVar2,*unaff_x23,0);
LAB_04a8aa90:
  (*(code *)*puVar1)(plVar2,puVar1[1]);
LAB_04a8aa9c:
  if (in_stack_00000010 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04948184();
  }
  return;
}


