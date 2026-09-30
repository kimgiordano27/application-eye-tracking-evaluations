/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector2f>$$Equals
ENTRY_POINT: 050a3654
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 97
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_8;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_4
*/


uint Unity_Collections_NativeArray<OVRPlugin_Vector2f>__Equals
               (long param_1,uint param_2,int param_3,long param_4,long param_5)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
                    /* catch(type#1 @ 07fde6e8) { ... } // from try @ 050a35f4 with catch @ 050a366c
                       try { // try from 050a366c to 051a3683 has its CatchHandler @ 050a35a4 */
  lVar3 = *(long *)(param_5 + 0x20);
  iVar2 = param_3 - param_2;
                    /* try { // try from 050a3684 to 051a369b has its CatchHandler @ 050a3714 */
  if (iVar2 < 0) {
    iVar2 = iVar2 + 1;
  }
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
                    /* try { // try from 050a369c to 051a3703 has its CatchHandler @ 050a35a4 */
    lVar3 = FUN_03ac4090();
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x48);
  if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_03ac4090();
  }
  uVar4 = param_2 + (iVar2 >> 1);
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  lVar3 = *(long *)(param_5 + 0x20);
  if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_03ac4090();
  }
  FUN_050a3064(param_1,param_4,param_2,uVar4,*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x70));
  lVar3 = *(long *)(param_5 + 0x20);
                    /* try { // try from 050a3704 to 051a3713 has its CatchHandler @ 050a3714 */
  if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_03ac4090();
  }
                    /* catch() { ... } // from try @ 050a3684 with catch @ 050a3714
                       catch() { ... } // from try @ 050a3704 with catch @ 050a3714 */
                    /* try { // try from 050a3718 to 051a371b has its CatchHandler @ 050a3724 */
                    /* try { // try from 050a371c to 051a3727 has its CatchHandler @ 050a35a4 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 050a3718 with catch @ 050a3724
                        */
  FUN_050a3064(param_1,param_4,param_2,param_3,*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x70));
                    /* try { // try from 050a3728 to 051a3a4b has its CatchHandler @ 050a3728
                       catch() { ... } // from try @ 050a3728 with catch @ 050a3728
                       catch() { ... } // from try @ 050a3b38 with catch @ 050a3728
                       catch() { ... } // from try @ 050a3bfc with catch @ 050a3728
                       catch() { ... } // from try @ 050a3c50 with catch @ 050a3728 */
  lVar3 = *(long *)(param_5 + 0x20);
  if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_03ac4090();
  }
  FUN_050a3064(param_1,param_4,uVar4,param_3,*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x70));
  if (param_1 == 0) {
Unity_Collections_NativeArray<OVRPlugin_Vector2f>__Copy:
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  if (uVar4 < *(uint *)(param_1 + 0x18)) {
    uVar1 = param_3 - 1;
    lVar3 = param_1 + (long)(int)uVar4 * 0x20;
    uVar7 = *(undefined8 *)(lVar3 + 0x28);
    uVar5 = *(undefined8 *)(lVar3 + 0x20);
    uVar11 = *(undefined8 *)(lVar3 + 0x38);
    uVar9 = *(undefined8 *)(lVar3 + 0x30);
    if ((*(byte *)(*(long *)(param_5 + 0x20) + 0x135) & 1) == 0) {
      FUN_03ac4090();
    }
    FUN_050a3190(param_1,uVar4,uVar1);
    uVar4 = uVar1;
    if ((int)uVar1 <= (int)param_2) {
LAB_050a38cc:
      lVar3 = *(long *)(param_5 + 0x20);
      if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_03ac4090();
      }
      lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x48);
      if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_03ac4090();
      }
      if (*(int *)(lVar3 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      if ((*(ushort *)(*(long *)(param_5 + 0x20) + 0x135) & 1) == 0) {
        FUN_03ac4090();
      }
      FUN_050a3190(param_1,param_2,uVar1);
      return param_2;
    }
    while (param_2 = param_2 + 1, param_2 < *(uint *)(param_1 + 0x18)) {
      if (param_4 == 0) goto Unity_Collections_NativeArray<OVRPlugin_Vector2f>__Copy;
      lVar3 = param_1 + (long)(int)param_2 * 0x20;
      uVar8 = *(undefined8 *)(lVar3 + 0x28);
      uVar6 = *(undefined8 *)(lVar3 + 0x20);
      uVar12 = *(undefined8 *)(lVar3 + 0x38);
      uVar10 = *(undefined8 *)(lVar3 + 0x30);
      if ((*(byte *)(*(long *)(param_5 + 0x20) + 0x135) & 1) == 0) {
        FUN_03ac4090();
      }
      local_80 = uVar5;
      uStack_78 = uVar7;
      uStack_70 = uVar9;
      uStack_68 = uVar11;
      local_60 = uVar6;
      uStack_58 = uVar8;
      uStack_50 = uVar10;
      uStack_48 = uVar12;
      iVar2 = (**(code **)(param_4 + 0x18))
                        (*(undefined8 *)(param_4 + 0x40),&local_60,&local_80,
                         *(undefined8 *)(param_4 + 0x28));
      if (-1 < iVar2) {
        do {
          uVar4 = uVar4 - 1;
          if (*(uint *)(param_1 + 0x18) <= uVar4) goto LAB_050a3944;
          lVar3 = param_1 + (long)(int)uVar4 * 0x20;
          uVar8 = *(undefined8 *)(lVar3 + 0x28);
          uVar6 = *(undefined8 *)(lVar3 + 0x20);
          uVar12 = *(undefined8 *)(lVar3 + 0x38);
          uVar10 = *(undefined8 *)(lVar3 + 0x30);
          if ((*(byte *)(*(long *)(param_5 + 0x20) + 0x135) & 1) == 0) {
            FUN_03ac4090();
          }
          local_80 = uVar6;
          uStack_78 = uVar8;
          uStack_70 = uVar10;
          uStack_68 = uVar12;
          local_60 = uVar5;
          uStack_58 = uVar7;
          uStack_50 = uVar9;
          uStack_48 = uVar11;
          iVar2 = (**(code **)(param_4 + 0x18))
                            (*(undefined8 *)(param_4 + 0x40),&local_60,&local_80,
                             *(undefined8 *)(param_4 + 0x28));
        } while (iVar2 < 0);
        if ((int)uVar4 <= (int)param_2) goto LAB_050a38cc;
        lVar3 = *(long *)(param_5 + 0x20);
        if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
          lVar3 = FUN_03ac4090();
        }
        lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x48);
        if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
          lVar3 = FUN_03ac4090();
        }
        if (*(int *)(lVar3 + 0xe4) == 0) {
          thunk_FUN_03ae8be4();
        }
        if ((*(ushort *)(*(long *)(param_5 + 0x20) + 0x135) & 1) == 0) {
          FUN_03ac4090();
        }
        FUN_050a3190(param_1,param_2,uVar4);
      }
    }
  }
LAB_050a3944:
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c8();
}


