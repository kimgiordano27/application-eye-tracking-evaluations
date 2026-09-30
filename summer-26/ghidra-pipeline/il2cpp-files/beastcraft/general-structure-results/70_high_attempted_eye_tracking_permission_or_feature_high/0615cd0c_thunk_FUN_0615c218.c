/*
FUNCTION_NAME: thunk_FUN_0615c218
ENTRY_POINT: 0615cd0c
PROGRAM: beastcraft-libil2cpp.so
SCORE: 72
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: attempted_eye_tracking_use
MODULES: weak_source_state;validity_gate;telemetry;attempted_use
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_8;telemetry_or_network_hits_1;attempted_eye_tracking_permission_or_feature_enable
*/


undefined8
thunk_FUN_0615c218(undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,long *param_4,
                  long param_5,uint param_6,undefined4 *param_7)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined *puVar3;
  int iVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  
  if ((bRam0000000006e95750 & 1) == 0) {
    FUN_02e3ca1c(PTR_DAT_06a3ac90);
    FUN_02e3ca1c(PTR_DAT_06a662d0);
    FUN_02e3ca1c(UnityEngine_Rendering_BatchBufferTarget_TypeInfo);
    FUN_02e3ca1c(UnityEngine_Rendering_BatchCullingViewType_TypeInfo);
    FUN_02e3ca1c(PTR_DAT_06a79868);
    bRam0000000006e95750 = 1;
  }
  puVar3 = PTR_DAT_06a79868;
  if ((char)param_4[4] != '\0') {
    if (((char)param_4[6] == '\0') || ((char)param_4[10] == '\0')) {
      plVar5 = param_4 + 5;
    }
    else {
      plVar5 = param_4 + 0xb;
    }
    lVar10 = *plVar5;
    if (lVar10 != 0) {
      uVar11 = FUN_06276fd8(lVar10,0);
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_02e9a04c();
      }
      FUN_06108af0(uVar11,param_2,param_3,param_5,0);
      FUN_06275204(lVar10,0);
      FUN_06108c44(param_5,0);
      FUN_06108a0c(param_5,param_6 & 1,0);
      FUN_06108e7c(*param_7,param_7[1],param_5,0);
      FUN_06108dec(param_5,(int)param_4[0xf],0);
      UnityEngine_Android_Permission__RequestUserPermissions(param_5,0,0);
      lVar10 = *(long *)(param_5 + 0xd8);
      if (lVar10 != 0) {
        *(undefined4 *)(lVar10 + 0x18) = 0;
        *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
        (**(code **)(*param_4 + 0x218))(param_4,*(undefined8 *)(*param_4 + 0x220));
        uVar2 = *(uint *)(param_4 + 0xe);
        uVar8 = (ulong)uVar2;
        if ((int)uVar2 < 1) {
          return 0;
        }
        iVar4 = FUN_03fef0b4(lVar10,*(undefined8 *)UnityEngine_Rendering_BatchBufferTarget_TypeInfo)
        ;
        if (iVar4 < (int)uVar2) {
          FUN_03fef0cc(lVar10,uVar2,
                       *(undefined8 *)UnityEngine_Rendering_BatchCullingViewType_TypeInfo);
        }
        puVar3 = PTR_DAT_06a3ac90;
        lVar9 = 0;
        while( true ) {
          puVar1 = (undefined4 *)(param_4[0xd] + lVar9);
          lVar6 = *(long *)(lVar10 + 0x10);
          uVar11 = *puVar1;
          uVar12 = puVar1[1];
          uVar13 = puVar1[2];
          lVar7 = *(long *)puVar3;
          *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
          if (lVar6 == 0) break;
          uVar2 = *(uint *)(lVar10 + 0x18);
          if (uVar2 < *(uint *)(lVar6 + 0x18)) {
            lVar6 = lVar6 + (long)(int)uVar2 * 0xc;
            *(uint *)(lVar10 + 0x18) = uVar2 + 1;
            *(undefined4 *)(lVar6 + 0x20) = uVar11;
            *(undefined4 *)(lVar6 + 0x24) = uVar12;
            *(undefined4 *)(lVar6 + 0x28) = uVar13;
          }
          else {
            FUN_03fef5ac(lVar10,*(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
          }
          uVar8 = uVar8 - 1;
          lVar9 = lVar9 + 0xc;
          if (uVar8 == 0) {
            return 1;
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_02e3ccc4();
  }
  return 0;
}


