/*
FUNCTION_NAME: FUN_062193fc
ENTRY_POINT: 062193fc
PROGRAM: beastcraft-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_4;ray_or_cast_sink_hits_2;telemetry_or_network_hits_2
*/


undefined8
FUN_062193fc(float param_1,float param_2,float param_3,float param_4,undefined4 param_5,
            undefined4 param_6,float param_7,long *param_8,undefined4 param_9,undefined4 param_10,
            uint param_11,long param_12)

{
  undefined *puVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  float fStack_a8;
  float fStack_a4;
  float fStack_58;
  float fStack_54;
  
  puVar1 = PTR_DAT_06a2ed80;
  if ((bRam0000000006e9713b & 1) == 0) {
    FUN_02e3ca1c(PTR_DAT_06a2ed80);
    bRam0000000006e9713b = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_02e9a04c();
  }
  uVar3 = FUN_062696b0(param_8,0,0);
  if ((uVar3 & 1) != 0) {
    return 0;
  }
  if (param_8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02e3ccc4();
  }
  iVar2 = (**(code **)(*param_8 + 0x188))(param_8,*(undefined8 *)(*param_8 + 400));
  if ((param_3 + param_1 <= (float)iVar2) &&
     (iVar2 = (**(code **)(*param_8 + 0x1a8))(param_8,*(undefined8 *)(*param_8 + 0x1b0)),
     param_4 + param_2 <= (float)iVar2)) {
    if (param_7 <= 0.0) {
      thunk_FUN_02ea289c(PTR_DAT_06a30728);
      uVar4 = thunk_FUN_02e78ab8();
      uVar5 = thunk_FUN_02ea289c(Unity_Services_CloudSave_Internal_Http_IHttpClient_TypeInfo);
      FUN_0557a944(uVar4,uVar5,0);
      uVar5 = thunk_FUN_02ea289c(Fusion_LagCompensation_IHitboxColliderContainer_TypeInfo);
                    /* WARNING: Subroutine does not return */
      FUN_02e3cb88(uVar4,uVar5);
    }
    if ((param_12 != 0) && (0 < (int)*(ulong *)(param_12 + 0x18))) {
      uVar3 = 0;
      uVar6 = *(ulong *)(param_12 + 0x18) & 0xffffffff;
      puVar7 = (undefined8 *)(param_12 + 0x28);
      do {
        if (uVar6 <= uVar3) {
                    /* WARNING: Subroutine does not return */
          FUN_02e3cccc();
        }
        uVar4 = puVar7[-1];
        uVar5 = *puVar7;
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_02e9a04c();
        }
        uVar6 = FUN_062696b0(uVar5,param_8,0);
        if ((uVar6 & 1) != 0) {
          uVar5 = thunk_FUN_02ea289c(Best_HTTP_Shared_Extensions_IHeartbeat_TypeInfo);
          uVar4 = FUN_054838b8(uVar5,uVar4,0);
          goto LAB_06219620;
        }
        uVar6 = (ulong)*(uint *)(param_12 + 0x18);
        uVar3 = uVar3 + 1;
        puVar7 = puVar7 + 2;
      } while ((long)uVar3 < (long)(int)*(uint *)(param_12 + 0x18));
    }
    uVar4 = FUN_06218a5c(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                         param_10,param_11 & 1,param_12);
    return uVar4;
  }
  uVar4 = thunk_FUN_02ea289c(PTR_DAT_06a2f1e8);
  uVar4 = FUN_02e3cb08(uVar4,6);
  puVar1 = PTR_DAT_06a2f000;
  fStack_54 = param_1;
  uVar5 = thunk_FUN_02e786f0(*(undefined8 *)(PTR_DAT_06a2f000 + 0x78),&fStack_54);
  FUN_02a71e6c(uVar4);
  FUN_02a7417c(uVar4,uVar5);
  FUN_02a720b4(uVar4,0,uVar5);
  fStack_58 = param_2;
  uVar5 = thunk_FUN_02e786f0(*(undefined8 *)(puVar1 + 0x78),&fStack_58);
  FUN_02a7417c(uVar4,uVar5);
  FUN_02a720b4(uVar4,1,uVar5);
  fStack_a4 = param_3;
  uVar5 = thunk_FUN_02e786f0(*(undefined8 *)(puVar1 + 0x78),&fStack_a4);
  FUN_02a7417c(uVar4,uVar5);
  FUN_02a720b4(uVar4,2,uVar5);
  fStack_a8 = param_4;
  uVar5 = thunk_FUN_02e786f0(*(undefined8 *)(puVar1 + 0x78),&fStack_a8);
  FUN_02a7417c(uVar4,uVar5);
  FUN_02a720b4(uVar4,3,uVar5);
  FUN_02a71e6c(param_8);
  uStack_ac = (**(code **)(*param_8 + 0x188))(param_8,*(undefined8 *)(*param_8 + 400));
  uVar5 = thunk_FUN_02e786f0(*(undefined8 *)(puVar1 + 0x48),&uStack_ac);
  FUN_02a7417c(uVar4,uVar5);
  FUN_02a720b4(uVar4,4,uVar5);
  FUN_02a71e6c(param_8);
  uStack_b0 = (**(code **)(*param_8 + 0x1a8))(param_8,*(undefined8 *)(*param_8 + 0x1b0));
  uVar5 = thunk_FUN_02e786f0(*(undefined8 *)(puVar1 + 0x48),&uStack_b0);
  FUN_02a7417c(uVar4,uVar5);
  FUN_02a720b4(uVar4,5,uVar5);
  uVar5 = thunk_FUN_02ea289c(Unity_Services_CloudCode_Internal_Http_IHttpClient_TypeInfo);
  uVar4 = FUN_0548df8c(uVar5,uVar4,0);
LAB_06219620:
  thunk_FUN_02ea289c(PTR_DAT_06a30728);
  uVar5 = thunk_FUN_02e78ab8();
  FUN_0557a944(uVar5,uVar4,0);
  uVar4 = thunk_FUN_02ea289c(Fusion_LagCompensation_IHitboxColliderContainer_TypeInfo);
                    /* WARNING: Subroutine does not return */
  FUN_02e3cb88(uVar5,uVar4);
}


