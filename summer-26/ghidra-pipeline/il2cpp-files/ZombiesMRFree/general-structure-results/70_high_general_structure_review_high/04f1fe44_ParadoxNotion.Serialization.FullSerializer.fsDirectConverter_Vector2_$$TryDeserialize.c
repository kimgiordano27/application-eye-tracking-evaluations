/*
FUNCTION_NAME: ParadoxNotion.Serialization.FullSerializer.fsDirectConverter<Vector2>$$TryDeserialize
ENTRY_POINT: 04f1fe44
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;telemetry_or_network_hits_4
*/


void ParadoxNotion_Serialization_FullSerializer_fsDirectConverter<Vector2>__TryDeserialize
               (ulong param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  undefined8 *puVar3;
  ulong uVar4;
  int *piVar5;
  long *unaff_x21;
  long unaff_x22;
  long unaff_x24;
  long *unaff_x27;
  undefined2 in_stack_00000008;
  
  if ((param_1 & 1) == 0) {
    param_2 = FUN_02feb2c4();
  }
  if (*(int *)(param_2 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  lVar1 = *(long *)(unaff_x24 + 0x20);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_02feb2c4();
  }
  if ((*(byte *)(*(long *)(*(long *)(lVar1 + 0xc0) + 8) + 0x135) & 1) == 0) {
    FUN_02feb2c4();
  }
  if ((*(byte *)(*(long *)(unaff_x22 + 0x20) + 0x135) & 1) == 0) {
    FUN_02feb2c4();
  }
  in_stack_00000008 = d2<bz,_av>__ab();
  lVar1 = *(long *)(unaff_x22 + 0x20);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_02feb2c4();
  }
  plVar2 = (long *)thunk_FUN_0301043c(*(undefined8 *)(*(long *)(lVar1 + 0xc0) + 0x20),
                                      &stack0x00000008);
  lVar1 = *plVar2;
  uVar4 = (ulong)*(ushort *)(lVar1 + 0x12e);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) == *unaff_x27) {
        puVar3 = (undefined8 *)(lVar1 + (long)*piVar5 * 0x10 + 0x138);
        goto LAB_04f1ff20;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  puVar3 = (undefined8 *)FUN_02feb5b8(plVar2,*unaff_x27,0);
LAB_04f1ff20:
  (*(code *)*puVar3)(plVar2);
  FUN_0597e018();
  FUN_0597ef24();
  (**(code **)(*unaff_x21 + 0x168))();
  return;
}


