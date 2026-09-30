/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceQueryResult>$$get_IsCreated
ENTRY_POINT: 050a2080
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 103
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__get_IsCreated
               (long param_1,uint param_2,int param_3,long param_4,long param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  long lVar6;
  long unaff_x20;
  uint uVar7;
  
  iVar5 = param_3 - param_2;
  if (iVar5 < 0) {
    iVar5 = iVar5 + 1;
  }
  if ((*(ushort *)(param_1 + 0x135) & 1) == 0) {
    param_1 = FUN_03ac4090();
  }
  lVar6 = *(long *)(*(long *)(param_1 + 0xc0) + 0x48);
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_03ac4090();
  }
  uVar7 = param_2 + (iVar5 >> 1);
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  if ((*(ushort *)(*(long *)(param_5 + 0x20) + 0x135) & 1) == 0) {
    FUN_03ac4090();
  }
  FUN_050a1a54();
  if ((*(ushort *)(*(long *)(param_5 + 0x20) + 0x135) & 1) == 0) {
    FUN_03ac4090();
  }
  FUN_050a1a54();
  if ((*(ushort *)(*(long *)(param_5 + 0x20) + 0x135) & 1) == 0) {
    FUN_03ac4090();
  }
  FUN_050a1a54();
  if (unaff_x20 == 0) {
LAB_050a233c:
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  if (uVar7 < *(uint *)(unaff_x20 + 0x18)) {
    lVar6 = unaff_x20 + (long)(int)uVar7 * 0x10;
    uVar7 = param_3 - 1;
    uVar1 = *(undefined8 *)(lVar6 + 0x20);
    uVar3 = *(undefined8 *)(lVar6 + 0x28);
    if ((*(ushort *)(*(long *)(param_5 + 0x20) + 0x135) & 1) == 0) {
      FUN_03ac4090();
    }
    FUN_050a1ba0();
    if ((int)uVar7 <= (int)param_2) {
LAB_050a22bc:
      lVar6 = *(long *)(param_5 + 0x20);
      if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_03ac4090();
      }
      lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 0x48);
      if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_03ac4090();
      }
      if (*(int *)(lVar6 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      if ((*(ushort *)(*(long *)(param_5 + 0x20) + 0x135) & 1) == 0) {
        FUN_03ac4090();
      }
      FUN_050a1ba0();
      return param_2;
    }
    while (param_2 = param_2 + 1, param_2 < *(uint *)(unaff_x20 + 0x18)) {
      if (param_4 == 0) goto LAB_050a233c;
      lVar6 = unaff_x20 + (long)(int)param_2 * 0x10;
      uVar2 = *(undefined8 *)(lVar6 + 0x20);
      uVar4 = *(undefined8 *)(lVar6 + 0x28);
      if ((*(ushort *)(*(long *)(param_5 + 0x20) + 0x135) & 1) == 0) {
        FUN_03ac4090();
      }
      iVar5 = (**(code **)(param_4 + 0x18))
                        (*(undefined8 *)(param_4 + 0x40),uVar2,uVar4,uVar1,uVar3,
                         *(undefined8 *)(param_4 + 0x28));
      if (-1 < iVar5) {
        do {
          uVar7 = uVar7 - 1;
          if (*(uint *)(unaff_x20 + 0x18) <= uVar7) goto LAB_050a2338;
          lVar6 = unaff_x20 + (long)(int)uVar7 * 0x10;
          uVar2 = *(undefined8 *)(lVar6 + 0x20);
          uVar4 = *(undefined8 *)(lVar6 + 0x28);
          if ((*(ushort *)(*(long *)(param_5 + 0x20) + 0x135) & 1) == 0) {
            FUN_03ac4090();
          }
          iVar5 = (**(code **)(param_4 + 0x18))
                            (*(undefined8 *)(param_4 + 0x40),uVar1,uVar3,uVar2,uVar4,
                             *(undefined8 *)(param_4 + 0x28));
        } while (iVar5 < 0);
        if ((int)uVar7 <= (int)param_2) goto LAB_050a22bc;
        lVar6 = *(long *)(param_5 + 0x20);
        if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
          lVar6 = FUN_03ac4090();
        }
        lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 0x48);
        if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
          lVar6 = FUN_03ac4090();
        }
        if (*(int *)(lVar6 + 0xe4) == 0) {
          thunk_FUN_03ae8be4();
        }
        if ((*(ushort *)(*(long *)(param_5 + 0x20) + 0x135) & 1) == 0) {
          FUN_03ac4090();
        }
        FUN_050a1ba0();
      }
    }
  }
LAB_050a2338:
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c8();
}


