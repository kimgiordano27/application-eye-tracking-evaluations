/*
FUNCTION_NAME: FUN_088d38f0
ENTRY_POINT: 088d38f0
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 75
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_1;telemetry_or_network_hits_3
*/


undefined8 FUN_088d38f0(long param_1,long param_2,undefined8 *param_3)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
                    /* try { // try from 088d38f0 to 089d3917 has its CatchHandler @ 088d3a90 */
  puVar1 = PTR_DAT_09f91a98;
  if ((DAT_0a52fd7a & 1) == 0) {
    FUN_04447ba8(PTR_DAT_09f91910);
    FUN_04447ba8(PTR_DAT_09f27e50);
    FUN_04447ba8(PTR_DAT_09f49260);
    FUN_04447ba8(PTR_DAT_09f91aa0);
    FUN_04447ba8(PTR_DAT_09f91a98);
    FUN_04447ba8(PTR_DAT_09f91898);
    FUN_04447ba8(PTR_DAT_09f91a38);
    FUN_04447ba8(PTR_DAT_09f91a40);
    FUN_04447ba8(PTR_DAT_09f91a48);
    FUN_04447ba8(PTR_DAT_09f91a50);
    FUN_04447ba8(PTR_DAT_09f91a58);
    FUN_04447ba8(PTR_DAT_09f91aa8);
    FUN_04447ba8(PTR_DAT_09f91ab0);
    FUN_04447ba8(PTR_DAT_09f91ab8);
    FUN_04447ba8(PTR_DAT_09f91a68);
    FUN_04447ba8(PTR_DAT_09f91a90);
    FUN_04447ba8(PTR_DAT_09f91ac0);
    FUN_04447ba8(PTR_DAT_09f91a20);
    FUN_04447ba8(PTR_DAT_09f91ac8);
    FUN_04447ba8(PTR_DAT_09f91ad0);
    DAT_0a52fd7a = 1;
  }
  lVar2 = thunk_FUN_0448520c(*(undefined8 *)puVar1);
  FUN_07a80df4(lVar2,0);
  *param_3 = 0;
  thunk_FUN_044bb4b4(param_3,0);
  if (param_2 == 0) {
LAB_088d3c74:
                    /* WARNING: Subroutine does not return */
    FUN_04447e44();
  }
  puVar5 = (undefined8 *)PTR_DAT_09f91aa8;
  if (((*(int *)(param_2 + 0x30) - 0x12dU < 2) ||
      (puVar5 = (undefined8 *)PTR_DAT_09f91ac0, *(int *)(param_2 + 0x30) == 0x191)) ||
     (uVar3 = FUN_088ce420(param_2), puVar5 = (undefined8 *)PTR_DAT_09f91ab8, (uVar3 & 1) == 0))
  goto LAB_088d3c48;
  lVar6 = *(long *)(param_2 + 0x10);
  if (lVar6 == 0) goto LAB_088d3c74;
  lVar4 = FUN_0882a490(lVar6,*(undefined8 *)PTR_DAT_09f91a90,0);
  puVar5 = (undefined8 *)PTR_DAT_09f91ab0;
  if (lVar4 != 0) {
    uVar9 = *(undefined8 *)(param_1 + 0x18);
    if (*(int *)(*(long *)PTR_DAT_09f91898 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
    }
    uVar9 = FUN_088d3c80(uVar9);
    uVar3 = FUN_078b33f8(lVar4,uVar9,0);
    puVar5 = (undefined8 *)PTR_DAT_09f91ad0;
    if (((uVar3 & 1) == 0) &&
       ((lVar4 = FUN_0882a490(lVar6,*(undefined8 *)PTR_DAT_09f91a38,0), lVar4 == 0 ||
        (uVar3 = FUN_078b33f8(lVar4,*(undefined8 *)PTR_DAT_09f91a48,0),
        puVar5 = (undefined8 *)PTR_DAT_09f91a50, (uVar3 & 1) == 0)))) {
      lVar4 = FUN_0882a490(lVar6,*(undefined8 *)PTR_DAT_09f91a58,0);
      if (lVar2 == 0) goto LAB_088d3c74;
      plVar7 = (long *)(lVar2 + 0x10);
      *plVar7 = lVar4;
      thunk_FUN_044bb4b4(plVar7,lVar4);
      if (*plVar7 == 0) {
        puVar5 = (undefined8 *)PTR_DAT_09f91ac8;
        if (*(char *)(param_1 + 0xf0) != '\0') goto LAB_088d3c48;
      }
      else {
        puVar5 = (undefined8 *)PTR_DAT_09f91a40;
        if ((*(char *)(param_1 + 0xf0) == '\0') || (*(int *)(*plVar7 + 0x10) < 1))
        goto LAB_088d3c48;
        uVar8 = *(undefined8 *)(param_1 + 0xe8);
        uVar9 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f49260);
        FUN_05562504(uVar9,lVar2,*(undefined8 *)PTR_DAT_09f91aa0,0);
        if (*(int *)(*(long *)PTR_DAT_09f27e50 + 0xe4) == 0) {
          thunk_FUN_044a54b4();
        }
        uVar3 = Unity_Netcode_BufferSerializer<BufferSerializerReader>__SerializeNetworkSerializable<NetworkDeltaPosition>
                          (uVar8,uVar9,*(undefined8 *)PTR_DAT_09f91910);
        puVar5 = (undefined8 *)PTR_DAT_09f91a40;
        if ((uVar3 & 1) == 0) goto LAB_088d3c48;
      }
      lVar2 = FUN_0882a490(lVar6,*(undefined8 *)PTR_DAT_09f91a20,0);
      if ((lVar2 == 0) ||
         (uVar3 = FUN_088d3d80(param_1,lVar2), puVar5 = (undefined8 *)PTR_DAT_09f91a68,
         (uVar3 & 1) != 0)) {
        return 1;
      }
    }
  }
LAB_088d3c48:
  *param_3 = *puVar5;
  thunk_FUN_044bb4b4(param_3,*puVar5);
  return 0;
}


