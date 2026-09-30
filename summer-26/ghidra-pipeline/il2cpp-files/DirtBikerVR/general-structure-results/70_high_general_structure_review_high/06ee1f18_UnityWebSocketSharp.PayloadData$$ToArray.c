/*
FUNCTION_NAME: UnityWebSocketSharp.PayloadData$$ToArray
ENTRY_POINT: 06ee1f18
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x06ee1fe0) */

void UnityWebSocketSharp_PayloadData__ToArray(void)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  long *unaff_x21;
  long *unaff_x22;
  long *unaff_x23;
  long in_stack_00000020;
  char *in_stack_00000028;
  undefined8 *in_stack_00000030;
  long *in_stack_00000038;
  
  do {
    FUN_06ee1538();
    if (in_stack_00000038 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    lVar2 = *in_stack_00000038;
    uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar3 != 0) {
      piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar4 + -2) == *unaff_x22) {
          puVar1 = (undefined8 *)(lVar2 + (long)*piVar4 * 0x10 + 0x138);
          goto LAB_06ee1ea4;
        }
        uVar3 = uVar3 - 1;
        piVar4 = piVar4 + 4;
      } while (uVar3 != 0);
    }
    puVar1 = (undefined8 *)FUN_03ac43c4(in_stack_00000038,*unaff_x22,0);
LAB_06ee1ea4:
    uVar3 = (*(code *)*puVar1)(in_stack_00000038,puVar1[1]);
    if ((uVar3 & 1) == 0) {
      if (in_stack_00000038 == (long *)0x0) goto code_r0x06ee1f90;
      lVar2 = *in_stack_00000038;
      uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
      if (uVar3 == 0) goto LAB_06ee1f64;
      piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      break;
    }
    if (in_stack_00000038 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    lVar2 = *in_stack_00000038;
    uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar3 != 0) {
      piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar4 + -2) == *unaff_x23) {
          puVar1 = (undefined8 *)(lVar2 + (long)*piVar4 * 0x10 + 0x138);
          goto LAB_06ee1f08;
        }
        uVar3 = uVar3 - 1;
        piVar4 = piVar4 + 4;
      } while (uVar3 != 0);
    }
    puVar1 = (undefined8 *)FUN_03ac43c4(in_stack_00000038,*unaff_x23,0);
LAB_06ee1f08:
    lVar2 = (*(code *)*puVar1)(in_stack_00000038,puVar1[1]);
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
  } while( true );
  while( true ) {
    uVar3 = uVar3 - 1;
    piVar4 = piVar4 + 4;
    if (uVar3 == 0) break;
    if (*(long *)(piVar4 + -2) == *unaff_x21) {
      puVar1 = (undefined8 *)(lVar2 + (long)*piVar4 * 0x10 + 0x138);
      goto LAB_06ee1f80;
    }
  }
LAB_06ee1f64:
  puVar1 = (undefined8 *)FUN_03ac43c4(in_stack_00000038,*unaff_x21,0);
LAB_06ee1f80:
  (*(code *)*puVar1)(in_stack_00000038,puVar1[1]);
code_r0x06ee1f90:
  if (*in_stack_00000028 != '\0') {
    thunk_FUN_03a98474(*in_stack_00000030,0);
  }
  if (in_stack_00000020 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9b8();
  }
  return;
}


