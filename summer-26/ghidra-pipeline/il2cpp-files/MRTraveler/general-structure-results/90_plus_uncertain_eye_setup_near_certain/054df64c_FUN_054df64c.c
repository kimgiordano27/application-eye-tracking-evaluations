/*
FUNCTION_NAME: FUN_054df64c
ENTRY_POINT: 054df64c
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 103
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint FUN_054df64c(long param_1,uint param_2,int param_3,long param_4,long param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  uint uVar5;
  int iVar6;
  long lVar7;
  uint uVar8;
  
  lVar7 = *(long *)(param_5 + 0x20);
  iVar6 = param_3 - param_2;
  if (iVar6 < 0) {
    iVar6 = iVar6 + 1;
  }
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_03cf1244();
  }
  lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 0x48);
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_03cf1244();
  }
  uVar8 = param_2 + (iVar6 >> 1);
  if (*(int *)(lVar7 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
  }
  lVar7 = *(long *)(param_5 + 0x20);
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_03cf1244();
  }
  FUN_054df074(param_1,param_4,param_2,uVar8,*(undefined8 *)(*(long *)(lVar7 + 0xc0) + 0x70));
  lVar7 = *(long *)(param_5 + 0x20);
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_03cf1244();
  }
  FUN_054df074(param_1,param_4,param_2,param_3,*(undefined8 *)(*(long *)(lVar7 + 0xc0) + 0x70));
  lVar7 = *(long *)(param_5 + 0x20);
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_03cf1244();
  }
  FUN_054df074(param_1,param_4,uVar8,param_3,*(undefined8 *)(*(long *)(lVar7 + 0xc0) + 0x70));
  if (param_1 == 0) {
LAB_054df8fc:
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb30();
  }
  if (uVar8 < *(uint *)(param_1 + 0x18)) {
    lVar7 = param_1 + (long)(int)uVar8 * 0x10;
    uVar1 = *(undefined8 *)(lVar7 + 0x20);
    uVar3 = *(undefined8 *)(lVar7 + 0x28);
    uVar5 = param_3 - 1;
    if ((*(byte *)(*(long *)(param_5 + 0x20) + 0x135) & 1) == 0) {
      FUN_03cf1244();
    }
    FUN_054df1c0(param_1,uVar8,uVar5);
    uVar8 = uVar5;
    if ((int)uVar5 <= (int)param_2) {
Unity_Collections_NativeArray<OVRPlugin_Vector4f>__CopySafe:
      lVar7 = *(long *)(param_5 + 0x20);
      if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_03cf1244();
      }
      lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 0x48);
      if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_03cf1244();
      }
      if (*(int *)(lVar7 + 0xe0) == 0) {
        thunk_FUN_03cd7500();
      }
      if ((*(byte *)(*(long *)(param_5 + 0x20) + 0x135) & 1) == 0) {
        FUN_03cf1244();
      }
      FUN_054df1c0(param_1,param_2,uVar5);
      return param_2;
    }
    while (param_2 = param_2 + 1, param_2 < *(uint *)(param_1 + 0x18)) {
      if (param_4 == 0) goto LAB_054df8fc;
      lVar7 = param_1 + (long)(int)param_2 * 0x10;
      uVar2 = *(undefined8 *)(lVar7 + 0x20);
      uVar4 = *(undefined8 *)(lVar7 + 0x28);
      if ((*(byte *)(*(long *)(param_5 + 0x20) + 0x135) & 1) == 0) {
        FUN_03cf1244();
      }
      iVar6 = (**(code **)(param_4 + 0x18))
                        (*(undefined8 *)(param_4 + 0x40),uVar2,uVar4,uVar1,uVar3,
                         *(undefined8 *)(param_4 + 0x28));
      if (-1 < iVar6) {
        do {
          uVar8 = uVar8 - 1;
          if (*(uint *)(param_1 + 0x18) <= uVar8) goto LAB_054df8f8;
          lVar7 = param_1 + (long)(int)uVar8 * 0x10;
          uVar2 = *(undefined8 *)(lVar7 + 0x20);
          uVar4 = *(undefined8 *)(lVar7 + 0x28);
          if ((*(byte *)(*(long *)(param_5 + 0x20) + 0x135) & 1) == 0) {
            FUN_03cf1244();
          }
          iVar6 = (**(code **)(param_4 + 0x18))
                            (*(undefined8 *)(param_4 + 0x40),uVar1,uVar3,uVar2,uVar4,
                             *(undefined8 *)(param_4 + 0x28));
        } while (iVar6 < 0);
        if ((int)uVar8 <= (int)param_2)
        goto Unity_Collections_NativeArray<OVRPlugin_Vector4f>__CopySafe;
        lVar7 = *(long *)(param_5 + 0x20);
        if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
          lVar7 = FUN_03cf1244();
        }
        lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 0x48);
        if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
          lVar7 = FUN_03cf1244();
        }
        if (*(int *)(lVar7 + 0xe0) == 0) {
          thunk_FUN_03cd7500();
        }
        if ((*(byte *)(*(long *)(param_5 + 0x20) + 0x135) & 1) == 0) {
          FUN_03cf1244();
        }
        FUN_054df1c0(param_1,param_2,uVar8);
      }
    }
  }
LAB_054df8f8:
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb38();
}


