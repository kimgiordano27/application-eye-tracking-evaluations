/*
FUNCTION_NAME: FUN_02b31b0c
ENTRY_POINT: 02b31b0c
PROGRAM: vrfs-libil2cpp.so
SCORE: 80
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;telemetry_or_network_hits_2
*/


undefined8 FUN_02b31b0c(long *param_1,long param_2)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long *plVar7;
  undefined4 uVar8;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  if ((bRam000000000723565c & 1) == 0) {
    thunk_FUN_0159f088(PTR_DAT_06ddc938);
    bRam000000000723565c = 1;
  }
  puVar1 = PTR_DAT_06ddc938;
  uStack_40 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  if (*(int *)((long)param_1 + 0x14) != 2) {
    if (*(int *)((long)param_1 + 0x14) != 1) {
      return 0;
    }
    plVar7 = (long *)param_1[5];
    if (plVar7 == (long *)0x0) goto LAB_02b31dd4;
    lVar3 = *(long *)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 0x28);
    if ((*(byte *)(lVar3 + 0x132) & 1) == 0) {
      lVar3 = FUN_015c2790(lVar3);
    }
    lVar4 = *plVar7;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12a);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == lVar3) {
          puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_02b31be0;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)FUN_015c2a80(plVar7,lVar3,0);
LAB_02b31be0:
    lVar3 = (*(code *)*puVar2)(plVar7,puVar2[1]);
    param_1[8] = lVar3;
    thunk_FUN_01656ef8(param_1 + 8,lVar3);
    *(undefined4 *)((long)param_1 + 0x14) = 2;
  }
  do {
    plVar7 = (long *)param_1[8];
    if (plVar7 == (long *)0x0) goto LAB_02b31dd4;
    lVar3 = *plVar7;
    uVar5 = (ulong)*(ushort *)(lVar3 + 0x12a);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)puVar1) {
          puVar2 = (undefined8 *)(lVar3 + (long)*piVar6 * 0x10 + 0x138);
          goto Sirenix_Serialization_MinimalBaseFormatter<Vector3>__Deserialize;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)FUN_015c2a80(plVar7,*(long *)puVar1,0);
Sirenix_Serialization_MinimalBaseFormatter<Vector3>__Deserialize:
    uVar5 = (*(code *)*puVar2)(plVar7,puVar2[1]);
    if ((uVar5 & 1) == 0) {
      if (param_1 != (long *)0x0) {
        (**(code **)(*param_1 + 0x1f8))(param_1,*(undefined8 *)(*param_1 + 0x200));
        return 0;
      }
      goto LAB_02b31dd4;
    }
    plVar7 = (long *)param_1[8];
    if (plVar7 == (long *)0x0) goto LAB_02b31dd4;
    lVar3 = *(long *)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 0x38);
    if ((*(byte *)(lVar3 + 0x132) & 1) == 0) {
      lVar3 = FUN_015c2790(lVar3);
    }
    lVar4 = *plVar7;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12a);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == lVar3) {
          puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_02b31cdc;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)FUN_015c2a80(plVar7,lVar3,0);
LAB_02b31cdc:
    (*(code *)*puVar2)(&uStack_b0,plVar7,puVar2[1]);
    uStack_68 = uStack_a8;
    uStack_70 = uStack_b0;
    uStack_58 = uStack_98;
    uStack_60 = uStack_a0;
    uStack_48 = uStack_88;
    uStack_50 = uStack_90;
    uStack_40 = uStack_80;
    if (param_1[6] == 0) break;
    lVar3 = *(long *)(*(long *)(param_2 + 0x20) + 0xc0);
    uStack_e8 = uStack_a8;
    uStack_f0 = uStack_b0;
    uStack_d8 = uStack_98;
    uStack_e0 = uStack_a0;
    uStack_c8 = uStack_88;
    uStack_d0 = uStack_90;
    uStack_c0 = uStack_80;
    uVar5 = (**(code **)(*(long *)(lVar3 + 0x50) + 8))
                      (param_1[6],&uStack_f0,*(undefined8 *)(lVar3 + 0x50));
  } while ((uVar5 & 1) == 0);
  uStack_a8 = uStack_68;
  uStack_b0 = uStack_70;
  uStack_98 = uStack_58;
  uStack_a0 = uStack_60;
  uStack_88 = uStack_48;
  uStack_90 = uStack_50;
  uStack_80 = uStack_40;
  if (param_1[7] != 0) {
    lVar3 = *(long *)(*(long *)(param_2 + 0x20) + 0xc0);
    uStack_128 = uStack_68;
    uStack_130 = uStack_70;
    uStack_118 = uStack_58;
    uStack_120 = uStack_60;
    uStack_108 = uStack_48;
    uStack_110 = uStack_50;
    uStack_100 = uStack_40;
    uVar8 = (**(code **)(*(long *)(lVar3 + 0x60) + 8))
                      (param_1[7],&uStack_130,*(undefined8 *)(lVar3 + 0x60));
    *(undefined4 *)(param_1 + 3) = uVar8;
    *(int *)((long)param_1 + 0x1c) = (int)uStack_50;
    *(int *)(param_1 + 4) = (int)uStack_60;
    return 1;
  }
LAB_02b31dd4:
                    /* WARNING: Subroutine does not return */
  FUN_0160eeb4();
}


