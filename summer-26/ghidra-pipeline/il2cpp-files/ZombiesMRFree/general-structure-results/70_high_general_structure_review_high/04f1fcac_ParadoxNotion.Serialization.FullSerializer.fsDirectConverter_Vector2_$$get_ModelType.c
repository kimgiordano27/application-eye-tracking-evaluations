/*
FUNCTION_NAME: ParadoxNotion.Serialization.FullSerializer.fsDirectConverter<Vector2>$$get_ModelType
ENTRY_POINT: 04f1fcac
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 80
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;telemetry_or_network_hits_2
*/


void ParadoxNotion_Serialization_FullSerializer_fsDirectConverter<Vector2>__get_ModelType(void)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long *unaff_x21;
  long unaff_x22;
  int unaff_w25;
  long unaff_x26;
  long *unaff_x27;
  undefined2 uStack0000000000000008;
  undefined2 uStack000000000000000c;
  
  do {
                    /* try { // try from 04f1fcac to 0501fcbf has its CatchHandler @ 04f1fce0 */
    lVar2 = FUN_02feb2c4();
    do {
      lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 8);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
                    /* try { // try from 04f1fcc0 to 0501fccf has its CatchHandler @ 04f1fa74 */
        lVar2 = FUN_02feb2c4();
      }
      if (*(int *)(lVar2 + 0xe0) == 0) {
        thunk_FUN_02fdcff0();
      }
                    /* try { // try from 04f1fcd0 to 0501fcd3 has its CatchHandler @ 04f1fcd4 */
      lVar2 = *(long *)(unaff_x26 + 0x20);
                    /* catch(type#1 @ 06b7e988) { ... } // from try @ 04f1fcd0 with catch @ 04f1fcd4
                       try { // try from 04f1fcd4 to 0501fcf7 has its CatchHandler @ 04f1fa74 */
                    /* catch(type#1 @ 06b7e988) { ... } // from try @ 04f1fca8 with catch @ 04f1fcd8
                        */
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
                    /* catch(type#1 @ 06b7e988) { ... } // from try @ 04f1fc34 with catch @ 04f1fcdc
                        */
        lVar2 = FUN_02feb2c4();
      }
                    /* catch(type#1 @ 06b7e988) { ... } // from try @ 04f1fcac with catch @ 04f1fce0
                        */
      lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 8);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_02feb2c4();
      }
      lVar5 = *(long *)(unaff_x22 + 0x20);
                    /* try { // try from 04f1fcf8 to 0501fd0f has its CatchHandler @ 04f1fd44 */
      iVar1 = **(int **)(lVar2 + 0xb8);
      if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_02feb2c4(lVar5);
      }
      lVar2 = *(long *)(*(long *)(lVar5 + 0xc0) + 8);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_02feb2c4();
      }
      if (*(int *)(lVar2 + 0xe0) == 0) {
        thunk_FUN_02fdcff0();
      }
      lVar2 = *(long *)(unaff_x22 + 0x20);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_02feb2c4();
      }
      if (iVar1 + -1 <= unaff_w25) {
        lVar5 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x28);
        lVar2 = *(long *)(lVar5 + 0x20);
        if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
          lVar2 = FUN_02feb2c4();
        }
        lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 8);
        if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
          lVar2 = FUN_02feb2c4();
        }
        if (*(int *)(lVar2 + 0xe0) == 0) {
          thunk_FUN_02fdcff0();
        }
        lVar2 = *(long *)(lVar5 + 0x20);
        if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
          lVar2 = FUN_02feb2c4();
        }
        if ((*(byte *)(*(long *)(*(long *)(lVar2 + 0xc0) + 8) + 0x135) & 1) == 0) {
          FUN_02feb2c4();
        }
        if ((*(byte *)(*(long *)(unaff_x22 + 0x20) + 0x135) & 1) == 0) {
          FUN_02feb2c4();
        }
        uStack0000000000000008 = d2<bz,_av>__ab();
        lVar2 = *(long *)(unaff_x22 + 0x20);
        if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
          lVar2 = FUN_02feb2c4();
        }
        plVar3 = (long *)thunk_FUN_0301043c(*(undefined8 *)(*(long *)(lVar2 + 0xc0) + 0x20),
                                            &stack0x00000008);
        lVar2 = *plVar3;
        uVar6 = (ulong)*(ushort *)(lVar2 + 0x12e);
        if (uVar6 == 0) goto LAB_04f1ff04;
        piVar7 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
        goto LAB_04f1feec;
      }
      uStack000000000000000c = d2<bz,_av>__ab();
      lVar2 = *(long *)(unaff_x22 + 0x20);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_02feb2c4();
      }
      plVar3 = (long *)thunk_FUN_0301043c(*(undefined8 *)(*(long *)(lVar2 + 0xc0) + 0x20),
                                          (long)&stack0x00000008 + 4);
      lVar2 = *plVar3;
      uVar6 = (ulong)*(ushort *)(lVar2 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *unaff_x27) {
            puVar4 = (undefined8 *)(lVar2 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_04f1fc58;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar4 = (undefined8 *)FUN_02feb5b8(plVar3,*unaff_x27,0);
LAB_04f1fc58:
      (*(code *)*puVar4)(plVar3);
      FUN_0597e018();
      FUN_0597e018();
      FUN_0597ef24();
      unaff_w25 = unaff_w25 + 1;
      lVar2 = *(long *)(unaff_x22 + 0x20);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_02feb2c4();
      }
      lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 8);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_02feb2c4();
      }
      if (*(int *)(lVar2 + 0xe0) == 0) {
        thunk_FUN_02fdcff0();
      }
      lVar2 = *(long *)(unaff_x22 + 0x20);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_02feb2c4();
      }
      unaff_x26 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x28);
      lVar2 = *(long *)(unaff_x26 + 0x20);
    } while ((*(byte *)(lVar2 + 0x135) & 1) != 0);
  } while( true );
  while( true ) {
    uVar6 = uVar6 - 1;
    piVar7 = piVar7 + 4;
    if (uVar6 == 0) break;
LAB_04f1feec:
    if (*(long *)(piVar7 + -2) == *unaff_x27) {
      puVar4 = (undefined8 *)(lVar2 + (long)*piVar7 * 0x10 + 0x138);
      goto LAB_04f1ff20;
    }
  }
LAB_04f1ff04:
  puVar4 = (undefined8 *)FUN_02feb5b8(plVar3,*unaff_x27,0);
LAB_04f1ff20:
  (*(code *)*puVar4)(plVar3);
  FUN_0597e018();
  FUN_0597ef24();
  (**(code **)(*unaff_x21 + 0x168))();
  return;
}


