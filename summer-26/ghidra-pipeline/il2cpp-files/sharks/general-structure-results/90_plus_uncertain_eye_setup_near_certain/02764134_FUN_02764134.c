/*
FUNCTION_NAME: FUN_02764134
ENTRY_POINT: 02764134
PROGRAM: sharks-libil2cpp.so
SCORE: 103
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint FUN_02764134(long param_1,uint param_2,int param_3,long param_4,long param_5)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  uint uVar4;
  undefined8 uVar5;
  code *pcVar6;
  undefined1 auStack_330 [80];
  undefined1 auStack_2e0 [80];
  undefined1 auStack_290 [80];
  undefined1 auStack_240 [80];
  undefined1 auStack_1f0 [80];
  undefined1 auStack_1a0 [80];
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined1 auStack_100 [80];
  undefined1 auStack_b0 [80];
  
  uStack_118 = 0;
  local_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_138 = 0;
  local_140 = 0;
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_148 = 0;
  local_150 = 0;
  lVar3 = *(long *)(param_5 + 0x20);
  iVar2 = param_3 - param_2;
  if (iVar2 < 0) {
    iVar2 = iVar2 + 1;
  }
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_0185daa4();
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x48);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_0185daa4();
  }
  uVar4 = param_2 + (iVar2 >> 1);
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_01843fdc();
  }
  lVar3 = *(long *)(param_5 + 0x20);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_0185daa4();
  }
  FUN_02763ab4(param_1,param_4,param_2,uVar4,*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x70));
  lVar3 = *(long *)(param_5 + 0x20);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_0185daa4();
  }
  FUN_02763ab4(param_1,param_4,param_2,param_3,*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x70));
  lVar3 = *(long *)(param_5 + 0x20);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_0185daa4();
  }
  FUN_02763ab4(param_1,param_4,uVar4,param_3,*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x70));
  if (param_1 == 0) {
LAB_027644a4:
                    /* WARNING: Subroutine does not return */
    FUN_017fc5a8();
  }
  if (uVar4 < *(uint *)(param_1 + 0x18)) {
    memcpy(&local_150,(void *)(param_1 + (long)(int)uVar4 * 0x50 + 0x20),0x50);
    uVar1 = param_3 - 1;
    if ((*(byte *)(*(long *)(param_5 + 0x20) + 0x135) & 1) == 0) {
      FUN_0185daa4();
    }
    FUN_02763c6c(param_1,uVar4,uVar1);
    uVar4 = uVar1;
    if ((int)uVar1 <= (int)param_2) {
LAB_0276442c:
      lVar3 = *(long *)(param_5 + 0x20);
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_0185daa4();
      }
      lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x48);
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_0185daa4();
      }
      if (*(int *)(lVar3 + 0xe0) == 0) {
        thunk_FUN_01843fdc();
      }
      if ((*(byte *)(*(long *)(param_5 + 0x20) + 0x135) & 1) == 0) {
        FUN_0185daa4();
      }
      FUN_02763c6c(param_1,param_2,uVar1);
      return param_2;
    }
    while (param_2 = param_2 + 1, param_2 < *(uint *)(param_1 + 0x18)) {
      memcpy(auStack_1a0,(void *)(param_1 + (long)(int)param_2 * 0x50 + 0x20),0x50);
      memcpy(auStack_1f0,&local_150,0x50);
      if (param_4 == 0) goto LAB_027644a4;
      memcpy(auStack_240,auStack_1a0,0x50);
      memcpy(auStack_290,auStack_1f0,0x50);
      if ((*(byte *)(*(long *)(param_5 + 0x20) + 0x135) & 1) == 0) {
        FUN_0185daa4();
      }
      pcVar6 = *(code **)(param_4 + 0x18);
      uVar5 = *(undefined8 *)(param_4 + 0x40);
      memcpy(auStack_b0,auStack_240,0x50);
      memcpy(auStack_100,auStack_290,0x50);
      iVar2 = (*pcVar6)(uVar5,auStack_b0,auStack_100,*(undefined8 *)(param_4 + 0x28));
      if (-1 < iVar2) {
        do {
          memcpy(auStack_1a0,&local_150,0x50);
          uVar4 = uVar4 - 1;
          if (*(uint *)(param_1 + 0x18) <= uVar4)
          goto Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>___ctor;
          memcpy(auStack_330,(void *)(param_1 + (long)(int)uVar4 * 0x50 + 0x20),0x50);
          memcpy(auStack_2e0,auStack_1a0,0x50);
          if ((*(byte *)(*(long *)(param_5 + 0x20) + 0x135) & 1) == 0) {
            FUN_0185daa4();
          }
          pcVar6 = *(code **)(param_4 + 0x18);
          uVar5 = *(undefined8 *)(param_4 + 0x40);
          memcpy(auStack_b0,auStack_2e0,0x50);
          memcpy(auStack_100,auStack_330,0x50);
          iVar2 = (*pcVar6)(uVar5,auStack_b0,auStack_100,*(undefined8 *)(param_4 + 0x28));
        } while (iVar2 < 0);
        if ((int)uVar4 <= (int)param_2) goto LAB_0276442c;
        lVar3 = *(long *)(param_5 + 0x20);
        if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
          lVar3 = FUN_0185daa4();
        }
        lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x48);
        if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
          lVar3 = FUN_0185daa4();
        }
        if (*(int *)(lVar3 + 0xe0) == 0) {
          thunk_FUN_01843fdc();
        }
        if ((*(byte *)(*(long *)(param_5 + 0x20) + 0x135) & 1) == 0) {
          FUN_0185daa4();
        }
        FUN_02763c6c(param_1,param_2,uVar4);
      }
    }
  }
Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>___ctor:
                    /* WARNING: Subroutine does not return */
  FUN_017fc5b0();
}


