/*
FUNCTION_NAME: FUN_06145150
ENTRY_POINT: 06145150
PROGRAM: beastcraft-libil2cpp.so
SCORE: 72
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: attempted_eye_tracking_use
MODULES: weak_source_state;validity_gate;telemetry;attempted_use
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_6;telemetry_or_network_hits_1;attempted_eye_tracking_permission_or_feature_enable
*/


void FUN_06145150(long *param_1,long param_2)

{
  uint uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  undefined4 uStack_80;
  float fStack_7c;
  float fStack_78;
  undefined4 uStack_74;
  
  if ((bRam0000000006e9569d & 1) == 0) {
    FUN_02e3ca1c(PTR_DAT_06a3ac90);
    FUN_02e3ca1c(PTR_DAT_06a662d0);
    FUN_02e3ca1c(PTR_DAT_06a79868);
    bRam0000000006e9569d = 1;
  }
  puVar2 = PTR_DAT_06a79868;
  uVar3 = FUN_062645f8(param_1,0);
  if (((uVar3 & 1) == 0) || (uVar3 = FUN_0612ed0c(param_1), (uVar3 & 1) != 0)) {
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_02e9a04c();
    }
    FUN_06109228(param_2,0,0);
    return;
  }
  uVar4 = (**(code **)(*param_1 + 0x4c8))(param_1,0,*(undefined8 *)(*param_1 + 0x4d0));
  FUN_060ba3e8(&fStack_8c,uVar4,0);
  if (DAT_06e861f3 == '\0') {
    FUN_02e3ca1c(PTR_DAT_06a2ef80);
    DAT_06e861f3 = '\x01';
  }
  lVar5 = *(long *)(*(long *)PTR_DAT_06a2ef80 + 0xb8);
  fVar9 = fStack_7c;
  fVar10 = fStack_78;
  fVar8 = (float)FUN_06256950(uStack_80,fStack_7c,fStack_78,uStack_74,*(undefined4 *)(lVar5 + 0x48),
                              *(undefined4 *)(lVar5 + 0x4c),*(undefined4 *)(lVar5 + 0x50),0);
  fVar11 = *(float *)(param_1 + 0x28);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_02e9a04c();
  }
  FUN_06108af0(fStack_8c,fStack_88,fStack_84,param_2,0);
  FUN_06108c44(uStack_80,fStack_7c,fStack_78,uStack_74,param_2,0);
  FUN_06108bac(param_2,param_1[0x3e],0);
  FUN_06108dec(param_2,*(undefined4 *)((long)param_1 + 0x154),0);
  FUN_06108f20((int)param_1[0x28],param_2,0);
  UnityEngine_Android_Permission__RequestUserPermissions(param_2,1,0);
  *(undefined1 *)(param_2 + 0xa5) = *(undefined1 *)((long)param_1 + 0x162);
  FUN_06109020(param_2,0);
  puVar2 = PTR_DAT_06a3ac90;
  lVar5 = *(long *)(param_2 + 0xd8);
  if (lVar5 != 0) {
    lVar6 = *(long *)(lVar5 + 0x10);
    lVar7 = *(long *)PTR_DAT_06a3ac90;
    *(undefined4 *)(lVar5 + 0x18) = 0;
    *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 2;
    if (lVar6 != 0) {
      if (*(int *)(lVar6 + 0x18) == 0) {
        FUN_03fef5ac(fStack_8c,fStack_88,fStack_84,lVar5,
                     *(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
      }
      else {
        *(undefined4 *)(lVar5 + 0x18) = 1;
        *(float *)(lVar6 + 0x20) = fStack_8c;
        *(float *)(lVar6 + 0x24) = fStack_88;
        *(float *)(lVar6 + 0x28) = fStack_84;
      }
      lVar6 = *(long *)(lVar5 + 0x10);
      lVar7 = *(long *)puVar2;
      *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
      if (lVar6 != 0) {
        uVar1 = *(uint *)(lVar5 + 0x18);
        if (uVar1 < *(uint *)(lVar6 + 0x18)) {
          lVar6 = lVar6 + (long)(int)uVar1 * 0xc;
          *(uint *)(lVar5 + 0x18) = uVar1 + 1;
          *(float *)(lVar6 + 0x20) = fStack_8c + fVar8 * fVar11;
          *(float *)(lVar6 + 0x24) = fStack_88 + fVar9 * fVar11;
          *(float *)(lVar6 + 0x28) = fStack_84 + fVar10 * fVar11;
        }
        else {
          FUN_03fef5ac(lVar5,*(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
        }
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02e3ccc4();
}


