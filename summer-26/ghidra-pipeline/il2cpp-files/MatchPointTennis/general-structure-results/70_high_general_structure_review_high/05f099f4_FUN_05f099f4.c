/*
FUNCTION_NAME: FUN_05f099f4
ENTRY_POINT: 05f099f4
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_6;telemetry_or_network_hits_3
*/


uint FUN_05f099f4(long param_1,uint param_2,int param_3,long param_4,long param_5)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  uint uVar4;
  undefined8 uVar5;
  code *pcVar6;
  undefined1 auStack_5b8 [152];
  undefined1 auStack_520 [152];
  undefined1 auStack_488 [152];
  undefined1 auStack_3f0 [152];
  undefined1 auStack_358 [152];
  undefined1 auStack_2c0 [152];
  undefined1 auStack_228 [152];
  undefined1 auStack_190 [152];
  undefined1 auStack_f8 [152];
  
  memset(auStack_228,0,0x98);
  lVar3 = *(long *)(param_5 + 0x20);
  iVar2 = param_3 - param_2;
  if (iVar2 < 0) {
    iVar2 = iVar2 + 1;
  }
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_04481fb8();
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x48);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_04481fb8();
  }
  uVar4 = param_2 + (iVar2 >> 1);
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_044a54b4();
  }
  lVar3 = *(long *)(param_5 + 0x20);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_04481fb8();
  }
  FUN_05f093c4(param_1,param_4,param_2,uVar4,*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x70));
  lVar3 = *(long *)(param_5 + 0x20);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_04481fb8();
  }
  FUN_05f093c4(param_1,param_4,param_2,param_3,*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x70));
  lVar3 = *(long *)(param_5 + 0x20);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_04481fb8();
  }
  FUN_05f093c4(param_1,param_4,uVar4,param_3,*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x70));
  if (param_1 == 0) {
LAB_05f09d64:
                    /* WARNING: Subroutine does not return */
    FUN_04447e44();
  }
  if (uVar4 < *(uint *)(param_1 + 0x18)) {
    memcpy(auStack_228,(void *)(param_1 + (long)(int)uVar4 * 0x98 + 0x20),0x98);
    uVar1 = param_3 - 1;
    if ((*(byte *)(*(long *)(param_5 + 0x20) + 0x135) & 1) == 0) {
      FUN_04481fb8();
    }
    Unity_Collections_NativeArray<InstanceOcclusionEventDebugArray_Request>__op_Implicit
              (param_1,uVar4,uVar1);
    uVar4 = uVar1;
    if ((int)uVar1 <= (int)param_2) {
LAB_05f09cec:
      lVar3 = *(long *)(param_5 + 0x20);
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_04481fb8();
      }
      lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x48);
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_04481fb8();
      }
      if (*(int *)(lVar3 + 0xe4) == 0) {
        thunk_FUN_044a54b4();
      }
      if ((*(byte *)(*(long *)(param_5 + 0x20) + 0x135) & 1) == 0) {
        FUN_04481fb8();
      }
      Unity_Collections_NativeArray<InstanceOcclusionEventDebugArray_Request>__op_Implicit
                (param_1,param_2,uVar1);
      return param_2;
    }
    while (param_2 = param_2 + 1, param_2 < *(uint *)(param_1 + 0x18)) {
      memcpy(auStack_2c0,(void *)(param_1 + (long)(int)param_2 * 0x98 + 0x20),0x98);
      memcpy(auStack_358,auStack_228,0x98);
      if (param_4 == 0) goto LAB_05f09d64;
      memcpy(auStack_3f0,auStack_2c0,0x98);
      memcpy(auStack_488,auStack_358,0x98);
      if ((*(byte *)(*(long *)(param_5 + 0x20) + 0x135) & 1) == 0) {
        FUN_04481fb8();
      }
      pcVar6 = *(code **)(param_4 + 0x18);
      uVar5 = *(undefined8 *)(param_4 + 0x40);
      memcpy(auStack_f8,auStack_3f0,0x98);
      memcpy(auStack_190,auStack_488,0x98);
      iVar2 = (*pcVar6)(uVar5,auStack_f8,auStack_190,*(undefined8 *)(param_4 + 0x28));
      if (-1 < iVar2) {
        do {
          memcpy(auStack_2c0,auStack_228,0x98);
          uVar4 = uVar4 - 1;
          if (*(uint *)(param_1 + 0x18) <= uVar4) goto LAB_05f09d60;
          memcpy(auStack_5b8,(void *)(param_1 + (long)(int)uVar4 * 0x98 + 0x20),0x98);
          memcpy(auStack_520,auStack_2c0,0x98);
          if ((*(byte *)(*(long *)(param_5 + 0x20) + 0x135) & 1) == 0) {
            FUN_04481fb8();
          }
          pcVar6 = *(code **)(param_4 + 0x18);
          uVar5 = *(undefined8 *)(param_4 + 0x40);
          memcpy(auStack_f8,auStack_520,0x98);
          memcpy(auStack_190,auStack_5b8,0x98);
          iVar2 = (*pcVar6)(uVar5,auStack_f8,auStack_190,*(undefined8 *)(param_4 + 0x28));
        } while (iVar2 < 0);
        if ((int)uVar4 <= (int)param_2) goto LAB_05f09cec;
        lVar3 = *(long *)(param_5 + 0x20);
        if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
          lVar3 = FUN_04481fb8();
        }
        lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x48);
        if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
          lVar3 = FUN_04481fb8();
        }
        if (*(int *)(lVar3 + 0xe4) == 0) {
          thunk_FUN_044a54b4();
        }
        if ((*(byte *)(*(long *)(param_5 + 0x20) + 0x135) & 1) == 0) {
          FUN_04481fb8();
        }
        Unity_Collections_NativeArray<InstanceOcclusionEventDebugArray_Request>__op_Implicit
                  (param_1,param_2,uVar4);
      }
    }
  }
LAB_05f09d60:
                    /* WARNING: Subroutine does not return */
  FUN_04447e4c();
}


