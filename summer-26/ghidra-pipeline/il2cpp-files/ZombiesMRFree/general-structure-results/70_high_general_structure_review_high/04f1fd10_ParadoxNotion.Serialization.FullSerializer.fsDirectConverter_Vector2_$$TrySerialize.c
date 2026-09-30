/*
FUNCTION_NAME: ParadoxNotion.Serialization.FullSerializer.fsDirectConverter<Vector2>$$TrySerialize
ENTRY_POINT: 04f1fd10
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;telemetry_or_network_hits_4
*/


void ParadoxNotion_Serialization_FullSerializer_fsDirectConverter<Vector2>__TrySerialize
               (long param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 *puVar3;
  ulong uVar4;
  int *piVar5;
  long *unaff_x21;
  long unaff_x22;
  int unaff_w25;
  int unaff_w26;
  long lVar6;
  long *unaff_x27;
  undefined2 uStack0000000000000008;
  undefined2 uStack000000000000000c;
  
                    /* try { // try from 04f1fd10 to 0501fd33 has its CatchHandler @ 04f1fa74 */
  while( true ) {
    lVar1 = *(long *)(*(long *)(param_1 + 0xc0) + 8);
    if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_02feb2c4();
    }
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
    }
                    /* try { // try from 04f1fd34 to 0501fd43 has its CatchHandler @ 04f1fd44 */
    lVar1 = *(long *)(unaff_x22 + 0x20);
    if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
                    /* catch() { ... } // from try @ 04f1fcf8 with catch @ 04f1fd44
                       catch() { ... } // from try @ 04f1fd34 with catch @ 04f1fd44 */
      lVar1 = FUN_02feb2c4();
    }
                    /* try { // try from 04f1fd48 to 0501fd4b has its CatchHandler @ 04f1fd54 */
                    /* try { // try from 04f1fd4c to 0501fd57 has its CatchHandler @ 04f1fa74 */
    if (unaff_w26 + -1 <= unaff_w25) break;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 04f1fd48 with catch @ 04f1fd54
                        */
    uStack000000000000000c = d2<bz,_av>__ab();
    lVar1 = *(long *)(unaff_x22 + 0x20);
    if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_02feb2c4();
    }
    plVar2 = (long *)thunk_FUN_0301043c(*(undefined8 *)(*(long *)(lVar1 + 0xc0) + 0x20),
                                        (long)&stack0x00000008 + 4);
    lVar1 = *plVar2;
    uVar4 = (ulong)*(ushort *)(lVar1 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x27) {
          puVar3 = (undefined8 *)(lVar1 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_04f1fc58;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar3 = (undefined8 *)FUN_02feb5b8(plVar2,*unaff_x27,0);
LAB_04f1fc58:
    (*(code *)*puVar3)(plVar2);
    FUN_0597e018();
    FUN_0597e018();
    FUN_0597ef24();
    unaff_w25 = unaff_w25 + 1;
    lVar1 = *(long *)(unaff_x22 + 0x20);
    if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_02feb2c4();
    }
    lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 8);
    if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_02feb2c4();
    }
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
    }
    lVar1 = *(long *)(unaff_x22 + 0x20);
    if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_02feb2c4();
    }
    lVar6 = *(long *)(*(long *)(lVar1 + 0xc0) + 0x28);
    lVar1 = *(long *)(lVar6 + 0x20);
    if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_02feb2c4();
    }
    lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 8);
    if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_02feb2c4();
    }
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
    }
    lVar1 = *(long *)(lVar6 + 0x20);
    if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_02feb2c4();
    }
    lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 8);
    if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_02feb2c4();
    }
    param_1 = *(long *)(unaff_x22 + 0x20);
    unaff_w26 = **(int **)(lVar1 + 0xb8);
    if ((*(byte *)(param_1 + 0x135) & 1) == 0) {
      param_1 = FUN_02feb2c4(param_1);
    }
  }
  lVar6 = *(long *)(*(long *)(lVar1 + 0xc0) + 0x28);
  lVar1 = *(long *)(lVar6 + 0x20);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_02feb2c4();
  }
  lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 8);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_02feb2c4();
  }
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  lVar1 = *(long *)(lVar6 + 0x20);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_02feb2c4();
  }
  if ((*(byte *)(*(long *)(*(long *)(lVar1 + 0xc0) + 8) + 0x135) & 1) == 0) {
    FUN_02feb2c4();
  }
  if ((*(byte *)(*(long *)(unaff_x22 + 0x20) + 0x135) & 1) == 0) {
    FUN_02feb2c4();
  }
  uStack0000000000000008 = d2<bz,_av>__ab();
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


