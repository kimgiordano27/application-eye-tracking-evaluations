/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4s>$$get_Item
ENTRY_POINT: 05f1c874
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint Unity_Collections_NativeArray<OVRPlugin_Vector4s>__get_Item
               (long param_1,uint param_2,int param_3,long param_4,long param_5)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  uint uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  undefined8 uStack_10;
  
                    /* try { // try from 05f1c884 to 0601c88b has its CatchHandler @ 05f1c990 */
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
  uVar6 = param_2 + (iVar2 >> 1);
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_044a54b4();
  }
  lVar3 = *(long *)(param_5 + 0x20);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_04481fb8();
  }
  FUN_05f1c16c(param_1,param_4,param_2,uVar6,*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x70));
  lVar3 = *(long *)(param_5 + 0x20);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_04481fb8();
  }
  FUN_05f1c16c(param_1,param_4,param_2,param_3,*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x70));
  lVar3 = *(long *)(param_5 + 0x20);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_04481fb8();
  }
  FUN_05f1c16c(param_1,param_4,uVar6,param_3,*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x70));
  if (param_1 == 0) {
LAB_05f1cc20:
                    /* WARNING: Subroutine does not return */
    FUN_04447e44();
  }
  if (uVar6 < *(uint *)(param_1 + 0x18)) {
    lVar3 = param_1 + (long)(int)uVar6 * 0x38;
    uVar5 = *(undefined8 *)(lVar3 + 0x50);
    uVar10 = *(undefined8 *)(lVar3 + 0x38);
    uVar9 = *(undefined8 *)(lVar3 + 0x30);
    uVar8 = *(undefined8 *)(lVar3 + 0x48);
    uVar7 = *(undefined8 *)(lVar3 + 0x40);
    uVar12 = *(undefined8 *)(lVar3 + 0x28);
    uVar11 = *(undefined8 *)(lVar3 + 0x20);
    uVar1 = param_3 - 1;
    if ((*(byte *)(*(long *)(param_5 + 0x20) + 0x135) & 1) == 0) {
      FUN_04481fb8();
    }
    FUN_05f1c374(param_1,uVar6,uVar1);
    uVar6 = uVar1;
    if ((int)uVar1 <= (int)param_2) {
LAB_05f1cbac:
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
      FUN_05f1c374(param_1,param_2,uVar1);
      return param_2;
    }
    while (param_2 = param_2 + 1, param_2 < *(uint *)(param_1 + 0x18)) {
      lVar3 = param_1 + (long)(int)param_2 * 0x38;
      uVar14 = *(undefined8 *)(lVar3 + 0x28);
      uVar13 = *(undefined8 *)(lVar3 + 0x20);
      uVar16 = *(undefined8 *)(lVar3 + 0x38);
      uVar15 = *(undefined8 *)(lVar3 + 0x30);
      uVar18 = *(undefined8 *)(lVar3 + 0x48);
      uVar17 = *(undefined8 *)(lVar3 + 0x40);
      uVar4 = *(undefined8 *)(lVar3 + 0x50);
      if (param_4 == 0) goto LAB_05f1cc20;
      if ((*(byte *)(*(long *)(param_5 + 0x20) + 0x135) & 1) == 0) {
        FUN_04481fb8();
      }
      uStack_80 = uVar11;
      uStack_78 = uVar12;
      uStack_70 = uVar9;
      uStack_68 = uVar10;
      uStack_60 = uVar7;
      uStack_58 = uVar8;
      uStack_50 = uVar5;
      uStack_40 = uVar13;
      uStack_38 = uVar14;
      uStack_30 = uVar15;
      uStack_28 = uVar16;
      uStack_20 = uVar17;
      uStack_18 = uVar18;
      uStack_10 = uVar4;
      iVar2 = (**(code **)(param_4 + 0x18))
                        (*(undefined8 *)(param_4 + 0x40),&uStack_40,&uStack_80,
                         *(undefined8 *)(param_4 + 0x28));
      if (-1 < iVar2) {
        do {
          uVar6 = uVar6 - 1;
          if (*(uint *)(param_1 + 0x18) <= uVar6) goto LAB_05f1cc1c;
          lVar3 = param_1 + (long)(int)uVar6 * 0x38;
          uVar14 = *(undefined8 *)(lVar3 + 0x28);
          uVar13 = *(undefined8 *)(lVar3 + 0x20);
          uVar16 = *(undefined8 *)(lVar3 + 0x38);
          uVar15 = *(undefined8 *)(lVar3 + 0x30);
          uVar18 = *(undefined8 *)(lVar3 + 0x48);
          uVar17 = *(undefined8 *)(lVar3 + 0x40);
          uVar4 = *(undefined8 *)(lVar3 + 0x50);
          if ((*(byte *)(*(long *)(param_5 + 0x20) + 0x135) & 1) == 0) {
            FUN_04481fb8();
          }
          uStack_80 = uVar13;
          uStack_78 = uVar14;
          uStack_70 = uVar15;
          uStack_68 = uVar16;
          uStack_60 = uVar17;
          uStack_58 = uVar18;
          uStack_50 = uVar4;
          uStack_40 = uVar11;
          uStack_38 = uVar12;
          uStack_30 = uVar9;
          uStack_28 = uVar10;
          uStack_20 = uVar7;
          uStack_18 = uVar8;
          uStack_10 = uVar5;
          iVar2 = (**(code **)(param_4 + 0x18))
                            (*(undefined8 *)(param_4 + 0x40),&uStack_40,&uStack_80,
                             *(undefined8 *)(param_4 + 0x28));
        } while (iVar2 < 0);
        if ((int)uVar6 <= (int)param_2) goto LAB_05f1cbac;
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
        FUN_05f1c374(param_1,param_2,uVar6);
      }
    }
  }
LAB_05f1cc1c:
                    /* WARNING: Subroutine does not return */
  FUN_04447e4c();
}


