/*
FUNCTION_NAME: FUN_054ddefc
ENTRY_POINT: 054ddefc
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


uint FUN_054ddefc(long param_1,uint param_2,int param_3,long param_4,long param_5)

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
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  
                    /* try { // try from 054ddf0c to 055ddf23 has its CatchHandler @ 054ddf90 */
  lVar3 = *(long *)(param_5 + 0x20);
  iVar2 = param_3 - param_2;
  if (iVar2 < 0) {
    iVar2 = iVar2 + 1;
  }
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_03cf1244();
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x48);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_03cf1244();
  }
  uVar6 = param_2 + (iVar2 >> 1);
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
  }
  lVar3 = *(long *)(param_5 + 0x20);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_03cf1244();
  }
  FUN_054dd8a0(param_1,param_4,param_2,uVar6,*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x70));
  lVar3 = *(long *)(param_5 + 0x20);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_03cf1244();
  }
  FUN_054dd8a0(param_1,param_4,param_2,param_3,*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x70));
  lVar3 = *(long *)(param_5 + 0x20);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_03cf1244();
  }
  FUN_054dd8a0(param_1,param_4,uVar6,param_3,*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x70));
  if (param_1 == 0) {
LAB_054de254:
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb30();
  }
  if (uVar6 < *(uint *)(param_1 + 0x18)) {
    lVar3 = param_1 + (long)(int)uVar6 * 0x18;
    uVar4 = *(undefined8 *)(lVar3 + 0x30);
    uVar8 = *(undefined8 *)(lVar3 + 0x28);
    uVar7 = *(undefined8 *)(lVar3 + 0x20);
    uVar1 = param_3 - 1;
    if ((*(byte *)(*(long *)(param_5 + 0x20) + 0x135) & 1) == 0) {
      FUN_03cf1244();
    }
    FUN_054dda48(param_1,uVar6,uVar1);
    uVar6 = uVar1;
    if ((int)uVar1 <= (int)param_2) {
Unity_Collections_NativeArray<OVRPlugin_Vector3f>__CopyTo:
      lVar3 = *(long *)(param_5 + 0x20);
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_03cf1244();
      }
      lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x48);
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_03cf1244();
      }
      if (*(int *)(lVar3 + 0xe0) == 0) {
        thunk_FUN_03cd7500();
      }
      if ((*(byte *)(*(long *)(param_5 + 0x20) + 0x135) & 1) == 0) {
        FUN_03cf1244();
      }
      FUN_054dda48(param_1,param_2,uVar1);
      return param_2;
    }
    while (param_2 = param_2 + 1, param_2 < *(uint *)(param_1 + 0x18)) {
      lVar3 = param_1 + (long)(int)param_2 * 0x18;
      uVar5 = *(undefined8 *)(lVar3 + 0x30);
      uVar10 = *(undefined8 *)(lVar3 + 0x28);
      uVar9 = *(undefined8 *)(lVar3 + 0x20);
      if (param_4 == 0) goto LAB_054de254;
      if ((*(byte *)(*(long *)(param_5 + 0x20) + 0x135) & 1) == 0) {
        FUN_03cf1244();
      }
      local_90 = uVar7;
      uStack_88 = uVar8;
      local_80 = uVar4;
      local_70 = uVar9;
      uStack_68 = uVar10;
      local_60 = uVar5;
      iVar2 = (**(code **)(param_4 + 0x18))
                        (*(undefined8 *)(param_4 + 0x40),&local_70,&local_90,
                         *(undefined8 *)(param_4 + 0x28));
      if (-1 < iVar2) {
        do {
          uVar6 = uVar6 - 1;
          if (*(uint *)(param_1 + 0x18) <= uVar6) goto LAB_054de250;
          lVar3 = param_1 + (long)(int)uVar6 * 0x18;
          uVar5 = *(undefined8 *)(lVar3 + 0x30);
          uVar10 = *(undefined8 *)(lVar3 + 0x28);
          uVar9 = *(undefined8 *)(lVar3 + 0x20);
          if ((*(byte *)(*(long *)(param_5 + 0x20) + 0x135) & 1) == 0) {
            FUN_03cf1244();
          }
          local_90 = uVar9;
          uStack_88 = uVar10;
          local_80 = uVar5;
          local_70 = uVar7;
          uStack_68 = uVar8;
          local_60 = uVar4;
          iVar2 = (**(code **)(param_4 + 0x18))
                            (*(undefined8 *)(param_4 + 0x40),&local_70,&local_90,
                             *(undefined8 *)(param_4 + 0x28));
        } while (iVar2 < 0);
        if ((int)uVar6 <= (int)param_2)
        goto Unity_Collections_NativeArray<OVRPlugin_Vector3f>__CopyTo;
        lVar3 = *(long *)(param_5 + 0x20);
        if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
          lVar3 = FUN_03cf1244();
        }
        lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x48);
        if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
          lVar3 = FUN_03cf1244();
        }
        if (*(int *)(lVar3 + 0xe0) == 0) {
          thunk_FUN_03cd7500();
        }
        if ((*(byte *)(*(long *)(param_5 + 0x20) + 0x135) & 1) == 0) {
          FUN_03cf1244();
        }
        FUN_054dda48(param_1,param_2,uVar6);
      }
    }
  }
LAB_054de250:
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb38();
}


