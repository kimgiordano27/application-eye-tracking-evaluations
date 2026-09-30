/*
FUNCTION_NAME: FUN_088ee280
ENTRY_POINT: 088ee280
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 75
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_1;telemetry_or_network_hits_3
*/


void FUN_088ee280(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  int local_44;
  
  if ((DAT_0a52fe78 & 1) == 0) {
    FUN_04447ba8(PTR_DAT_09f91910);
    FUN_04447ba8(PTR_DAT_09f27e50);
    FUN_04447ba8(PTR_DAT_09f49260);
    FUN_04447ba8(PTR_DAT_09f925e0);
    FUN_04447ba8(PTR_DAT_09f925e8);
    FUN_04447ba8(PTR_DAT_09f925f0);
    FUN_04447ba8(PTR_DAT_09f925f8);
    FUN_04447ba8(PTR_DAT_09f20d70);
    FUN_04447ba8(PTR_DAT_09f8f430);
    FUN_04447ba8(PTR_DAT_09f92600);
    FUN_04447ba8(PTR_DAT_09f26600);
    FUN_04447ba8(PTR_DAT_09f92300);
    FUN_04447ba8(PTR_DAT_09f92608);
    DAT_0a52fe78 = 1;
  }
  puVar2 = PTR_DAT_09f8f430;
  if (*(long *)(param_1 + 0x18) == 0) goto LAB_088ee560;
  lVar4 = FUN_0882a490(*(long *)(param_1 + 0x18),*(undefined8 *)PTR_DAT_09f8f430,0);
  puVar3 = PTR_DAT_09f925e8;
  if (lVar4 != 0) {
    uVar5 = FUN_078b7504(lVar4,0x2c,0,0);
    lVar4 = *(long *)puVar3;
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_044a54b4(lVar4);
      lVar4 = *(long *)puVar3;
    }
    puVar1 = PTR_DAT_09f27e50;
    lVar8 = *(long *)(*(long *)(lVar4 + 0xb8) + 8);
    if (lVar8 == 0) {
      if (*(int *)(lVar4 + 0xe4) == 0) {
        thunk_FUN_044a54b4(lVar4);
        lVar4 = *(long *)puVar3;
      }
      uVar9 = **(undefined8 **)(lVar4 + 0xb8);
      lVar8 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f49260);
      FUN_05562504(lVar8,uVar9,*(undefined8 *)PTR_DAT_09f925e0,0);
      plVar6 = (long *)(*(long *)(*(long *)puVar3 + 0xb8) + 8);
      *plVar6 = lVar8;
      thunk_FUN_044bb4b4(plVar6,lVar8);
    }
    puVar3 = PTR_DAT_09f91910;
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
    }
    uVar7 = Unity_Netcode_BufferSerializer<BufferSerializerReader>__SerializeNetworkSerializable<NetworkDeltaPosition>
                      (uVar5,lVar8,*(undefined8 *)puVar3);
    lVar4 = *(long *)(param_1 + 0x18);
    if (lVar4 == 0) goto LAB_088ee560;
    uVar5 = *(undefined8 *)puVar2;
    if ((uVar7 & 1) == 0) {
      uVar9 = 0;
    }
    else {
      FUN_0882a4a0(lVar4,uVar5,*(undefined8 *)PTR_DAT_09f92300,0);
      lVar4 = *(long *)(param_1 + 0x18);
      uVar5 = FUN_088ed260();
      if (lVar4 == 0) goto LAB_088ee560;
      FUN_0882a4a0(lVar4,*(undefined8 *)PTR_DAT_09f92600,uVar5,0);
      lVar4 = *(long *)(param_1 + 0x18);
      local_44 = *(int *)(param_1 + 0x10) + 1;
      *(int *)(param_1 + 0x10) = local_44;
      uVar5 = thunk_FUN_04484e3c(*(undefined8 *)(PTR_DAT_09f1e5b8 + 0x50),&local_44);
      uVar9 = FUN_078ab14c(*(undefined8 *)PTR_DAT_09f92608,uVar5,0);
      if (lVar4 == 0) goto LAB_088ee560;
      uVar5 = *(undefined8 *)PTR_DAT_09f925f0;
    }
    FUN_0882a4a0(lVar4,uVar5,uVar9,0);
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_0882a4a0(*(long *)(param_1 + 0x18),*(undefined8 *)PTR_DAT_09f26600,
                 *(undefined8 *)PTR_DAT_09f20d70,0);
    lVar4 = *(long *)(param_1 + 0x18);
    uVar5 = FUN_088eec20(lVar4);
    if (lVar4 != 0) {
      FUN_0882a4a0(lVar4,*(undefined8 *)PTR_DAT_09f925f8,uVar5,0);
      return;
    }
  }
LAB_088ee560:
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


