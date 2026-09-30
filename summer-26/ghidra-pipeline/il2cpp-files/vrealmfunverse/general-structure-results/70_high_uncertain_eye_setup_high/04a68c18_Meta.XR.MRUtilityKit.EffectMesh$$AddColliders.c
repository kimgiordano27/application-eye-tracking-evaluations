/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.EffectMesh$$AddColliders
ENTRY_POINT: 04a68c18
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_4;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x04a68d58) */

uint Meta_XR_MRUtilityKit_EffectMesh__AddColliders(long param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long unaff_x19;
  uint unaff_w21;
  long *unaff_x22;
  long *unaff_x23;
  long *unaff_x24;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  long *in_stack_00000058;
  
  do {
    lVar3 = *(long *)(param_1 + 0xe8);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_02b76218(lVar3);
    }
    lVar4 = *unaff_x22;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == lVar3) {
          puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_04a68c7c;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)FUN_02b7654c(unaff_x22,lVar3,0);
LAB_04a68c7c:
    (*(code *)*puVar2)(&stack0x00000030,unaff_x22,puVar2[1]);
    uVar5 = FUN_04a662dc();
    plVar1 = in_stack_00000058;
    if ((uVar5 & 1) == 0) {
LAB_04a68cc0:
      plVar1 = in_stack_00000058;
      if (in_stack_00000058 == (long *)0x0) goto code_r0x04a68d30;
      lVar3 = *in_stack_00000058;
      uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar5 == 0) goto LAB_04a68d04;
      piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      break;
    }
    if (in_stack_00000058 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    lVar3 = *in_stack_00000058;
    uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *unaff_x24) {
          puVar2 = (undefined8 *)(lVar3 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_04a68bf4;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)FUN_02b7654c(in_stack_00000058,*unaff_x24,0);
LAB_04a68bf4:
    unaff_w21 = (*(code *)*puVar2)(plVar1,puVar2[1]);
    if ((unaff_w21 & 1) == 0) goto LAB_04a68cc0;
    if (in_stack_00000058 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    param_1 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0);
    unaff_x22 = in_stack_00000058;
  } while( true );
  while( true ) {
    uVar5 = uVar5 - 1;
    piVar6 = piVar6 + 4;
    if (uVar5 == 0) break;
    if (*(long *)(piVar6 + -2) == *unaff_x23) {
      puVar2 = (undefined8 *)(lVar3 + (long)*piVar6 * 0x10 + 0x138);
      goto LAB_04a68d20;
    }
  }
LAB_04a68d04:
  puVar2 = (undefined8 *)FUN_02b7654c(in_stack_00000058,*unaff_x23,0);
LAB_04a68d20:
  (*(code *)*puVar2)(plVar1,puVar2[1]);
code_r0x04a68d30:
  return (unaff_w21 ^ 1) & 1;
}


