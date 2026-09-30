/*
FUNCTION_NAME: Unity.Netcode.BufferSerializer<BufferSerializerReader>$$SerializeNetworkSerializable<NetworkDeltaPosition>
ENTRY_POINT: 04d36acc
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_12
*/


/* WARNING: Removing unreachable block (ram,0x04d36d20) */

uint Unity_Netcode_BufferSerializer<BufferSerializerReader>__SerializeNetworkSerializable<NetworkDeltaPosition>
               (long *param_1,long param_2,long param_3)

{
  undefined *puVar1;
  uint uVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  
                    /* try { // try from 04d36ad4 to 04e36adf has its CatchHandler @ 04d36c78 */
                    /* try { // try from 04d36ae0 to 04e36aff has its CatchHandler @ 04d36944 */
  if (*(long *)(param_3 + 0x38) == 0) {
    FUN_04447ba8(PTR_DAT_09f1f008);
                    /* try { // try from 04d36b00 to 04e36b07 has its CatchHandler @ 04d36c9c */
    FUN_04447ba8(PTR_DAT_09f1f018);
    if (*(long *)(param_3 + 0x38) == 0) {
      FUN_04482014(param_3);
    }
  }
  if (param_1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_04447e44();
  }
  lVar6 = **(long **)(param_3 + 0x38);
  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_04481fb8(lVar6);
  }
  lVar7 = *param_1;
  uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar8 != 0) {
    piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == lVar6) {
        puVar3 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
        goto LAB_04d36b7c;
      }
      uVar8 = uVar8 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar8 != 0);
  }
  puVar3 = (undefined8 *)FUN_044822ac(param_1,lVar6,0);
LAB_04d36b7c:
  plVar4 = (long *)(*(code *)*puVar3)(param_1,puVar3[1]);
  puVar1 = PTR_DAT_09f1f018;
  if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_04447e44();
  }
  do {
    lVar6 = *plVar4;
    uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)puVar1) {
          puVar3 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_04d36be4;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar3 = (undefined8 *)FUN_044822ac(plVar4,*(long *)puVar1,0);
LAB_04d36be4:
    uVar2 = (*(code *)*puVar3)(plVar4,puVar3[1]);
    if ((uVar2 & 1) == 0) {
      uVar2 = 0;
      break;
    }
    lVar6 = *(long *)(*(long *)(param_3 + 0x38) + 0x10);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_04481fb8(lVar6);
    }
    lVar7 = *plVar4;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == lVar6) {
          puVar3 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto Unity_Netcode_BufferSerializer<BufferSerializerReader>__SerializeValue<HalfVector3>;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar3 = (undefined8 *)FUN_044822ac(plVar4,lVar6,0);
Unity_Netcode_BufferSerializer<BufferSerializerReader>__SerializeValue<HalfVector3>:
    uVar5 = (*(code *)*puVar3)(plVar4,puVar3[1]);
    if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44(uVar5,uVar5);
    }
    uVar8 = (**(code **)(param_2 + 0x18))
                      (*(undefined8 *)(param_2 + 0x40),uVar5,*(undefined8 *)(param_2 + 0x28));
  } while ((uVar8 & 1) == 0);
  if (plVar4 != (long *)0x0) {
    lVar6 = *plVar4;
    uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_09f1f008) {
          puVar3 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_04d36cf0;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar3 = (undefined8 *)FUN_044822ac(plVar4,*(long *)PTR_DAT_09f1f008,0);
LAB_04d36cf0:
    (*(code *)*puVar3)(plVar4,puVar3[1]);
  }
  return uVar2 & 1;
}


