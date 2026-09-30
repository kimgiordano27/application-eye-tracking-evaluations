/*
FUNCTION_NAME: FUN_02b2ed64
ENTRY_POINT: 02b2ed64
PROGRAM: vrfs-libil2cpp.so
SCORE: 83
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_4;ray_or_cast_sink_hits_5;telemetry_or_network_hits_5
*/


undefined8 FUN_02b2ed64(long *param_1,long param_2)

{
  undefined *puVar1;
  undefined2 uVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long *plVar8;
  undefined1 auVar9 [16];
  
  if ((bRam000000000723564a & 1) == 0) {
    thunk_FUN_0159f088(PTR_DAT_06ddc938);
    bRam000000000723564a = 1;
  }
  puVar1 = PTR_DAT_06ddc938;
  if (*(int *)((long)param_1 + 0x14) != 2) {
    if (*(int *)((long)param_1 + 0x14) != 1) {
      return 0;
    }
    plVar8 = (long *)param_1[4];
    if (plVar8 == (long *)0x0)
    goto 
    Sirenix_Serialization_MinimalBaseFormatter<LayerMask>__Sirenix_Serialization_IFormatter_Serialize
    ;
    lVar4 = *(long *)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 0x28);
    if ((*(byte *)(lVar4 + 0x132) & 1) == 0) {
      lVar4 = FUN_015c2790(lVar4);
    }
    lVar5 = *plVar8;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12a);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == lVar4) {
          puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_02b2ee24;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)FUN_015c2a80(plVar8,lVar4,0);
LAB_02b2ee24:
    lVar4 = (*(code *)*puVar3)(plVar8,puVar3[1]);
    param_1[7] = lVar4;
    thunk_FUN_01656ef8(param_1 + 7,lVar4);
    *(undefined4 *)((long)param_1 + 0x14) = 2;
  }
  do {
    plVar8 = (long *)param_1[7];
    if (plVar8 == (long *)0x0)
    goto 
    Sirenix_Serialization_MinimalBaseFormatter<LayerMask>__Sirenix_Serialization_IFormatter_Serialize
    ;
    lVar4 = *plVar8;
    uVar6 = (ulong)*(ushort *)(lVar4 + 0x12a);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)puVar1) {
          puVar3 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_02b2eea0;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)FUN_015c2a80(plVar8,*(long *)puVar1,0);
LAB_02b2eea0:
    uVar6 = (*(code *)*puVar3)(plVar8,puVar3[1]);
    if ((uVar6 & 1) == 0) {
      if (param_1 != (long *)0x0) {
        (**(code **)(*param_1 + 0x1f8))(param_1,*(undefined8 *)(*param_1 + 0x200));
        return 0;
      }
      goto 
      Sirenix_Serialization_MinimalBaseFormatter<LayerMask>__Sirenix_Serialization_IFormatter_Serialize
      ;
    }
    plVar8 = (long *)param_1[7];
    if (plVar8 == (long *)0x0)
    goto 
    Sirenix_Serialization_MinimalBaseFormatter<LayerMask>__Sirenix_Serialization_IFormatter_Serialize
    ;
    lVar4 = *(long *)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 0x38);
    if ((*(byte *)(lVar4 + 0x132) & 1) == 0) {
      lVar4 = FUN_015c2790(lVar4);
    }
    lVar5 = *plVar8;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12a);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == lVar4) {
          puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_02b2ef20;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)FUN_015c2a80(plVar8,lVar4,0);
LAB_02b2ef20:
    auVar9 = (*(code *)*puVar3)(plVar8,puVar3[1]);
  } while ((param_1[5] != 0) &&
          (uVar6 = (**(code **)(*(long *)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 0x50) + 8))
                             (param_1[5],auVar9._0_8_,auVar9._8_8_), (uVar6 & 1) == 0));
  if (param_1[6] != 0) {
    uVar2 = (**(code **)(*(long *)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 0x60) + 8))
                      (param_1[6],auVar9._0_8_,auVar9._8_8_);
    *(undefined2 *)(param_1 + 3) = uVar2;
    return 1;
  }
Sirenix_Serialization_MinimalBaseFormatter<LayerMask>__Sirenix_Serialization_IFormatter_Serialize:
                    /* WARNING: Subroutine does not return */
  FUN_0160eeb4();
}


