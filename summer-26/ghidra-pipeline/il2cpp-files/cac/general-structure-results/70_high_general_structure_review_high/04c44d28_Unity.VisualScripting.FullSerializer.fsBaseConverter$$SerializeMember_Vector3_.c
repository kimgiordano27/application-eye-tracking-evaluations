/*
FUNCTION_NAME: Unity.VisualScripting.FullSerializer.fsBaseConverter$$SerializeMember<Vector3>
ENTRY_POINT: 04c44d28
PROGRAM: cac-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x04c45048) */

void Unity_VisualScripting_FullSerializer_fsBaseConverter__SerializeMember<Vector3>
               (long param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  ulong in_x9;
  int *in_x10;
  int *piVar7;
  long unaff_x19;
  long *unaff_x20;
  uint uVar8;
  long *unaff_x22;
  long *in_stack_000000f8;
  long in_stack_000001c8;
  
code_r0x04c44d28:
  in_x9 = in_x9 - 1;
  in_x10 = in_x10 + 4;
  if (in_x9 != 0) goto LAB_04c44d1c;
  do {
    puVar1 = (undefined8 *)FUN_03f4b594(unaff_x20,param_3,0);
    while( true ) {
      uVar2 = (*(code *)*puVar1)(unaff_x20,puVar1[1]);
      uVar3 = FUN_0888cf38(&stack0x000001a0,0);
      uVar4 = thunk_FUN_0732565c(uVar2,uVar3,0);
      if ((uVar4 & 1) != 0) {
        lVar6 = *unaff_x20;
        uVar4 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar4 == 0) goto LAB_04c44db0;
        piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        goto LAB_04c44d98;
      }
      uVar4 = FUN_072199ac(&stack0x000000b0,
                           *(undefined8 *)(*(long *)(in_stack_000001c8 + 0x38) + 0x78));
      if ((uVar4 & 1) == 0) {
        uVar8 = 0x10;
        goto LAB_04c44ff8;
      }
      if (in_stack_000000f8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f1362c();
      }
      param_1 = *in_stack_000000f8;
      param_3 = *unaff_x22;
      in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
      unaff_x20 = in_stack_000000f8;
      if (in_x9 == 0) break;
      in_x10 = (int *)(*(long *)(param_1 + 0xb0) + 8);
LAB_04c44d1c:
      if (*(long *)(in_x10 + -2) != param_3) goto code_r0x04c44d28;
      puVar1 = (undefined8 *)(param_1 + (long)*in_x10 * 0x10 + 0x138);
    }
  } while( true );
  while( true ) {
    uVar4 = uVar4 - 1;
    piVar7 = piVar7 + 4;
    if (uVar4 == 0) break;
LAB_04c44d98:
    if (*(long *)(piVar7 + -2) == *unaff_x22) {
      puVar1 = (undefined8 *)(lVar6 + (long)(*piVar7 + 1) * 0x10 + 0x138);
      goto LAB_04c44f38;
    }
  }
LAB_04c44db0:
  puVar1 = (undefined8 *)FUN_03f4b594(unaff_x20,*unaff_x22,1);
LAB_04c44f38:
  uVar2 = (*(code *)*puVar1)(unaff_x20,puVar1[1]);
  *(undefined8 *)(unaff_x19 + 0xb0) = uVar2;
  thunk_FUN_03f86000((undefined8 *)(unaff_x19 + 0xb0),uVar2);
  plVar5 = (long *)FUN_08890574(uVar2,0);
  if (plVar5 != (long *)0x0) {
    lVar6 = *plVar5;
    uVar4 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar4 != 0) {
      piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_09122038) {
          puVar1 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_04c44fe0;
        }
        uVar4 = uVar4 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar4 != 0);
    }
    puVar1 = (undefined8 *)FUN_03f4b594(plVar5,*(long *)PTR_DAT_09122038,0);
LAB_04c44fe0:
    (*(code *)*puVar1)(plVar5);
  }
  uVar8 = 0xf;
LAB_04c44ff8:
  Mono_Math_BigInteger__GeneratePseudoPrime
            (&stack0x000000b0,*(undefined8 *)(*(long *)(in_stack_000001c8 + 0x38) + 0x80));
  if ((uVar8 | 0x10) == 0x10) {
    *(undefined4 *)(unaff_x19 + 0xa8) = 4;
  }
  return;
}


