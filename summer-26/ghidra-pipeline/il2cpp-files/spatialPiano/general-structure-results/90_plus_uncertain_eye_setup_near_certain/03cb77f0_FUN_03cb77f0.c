/*
FUNCTION_NAME: FUN_03cb77f0
ENTRY_POINT: 03cb77f0
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 103
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_03cb77f0(undefined8 *param_1,long param_2,long param_3)

{
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if (param_3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_050e6f14(8);
  }
  if (0 < *(int *)(param_2 + 0x18)) {
    uVar5 = 0;
    lVar4 = 0x20;
    do {
      lVar3 = *(long *)(param_2 + 0x10);
      if (lVar3 == 0) goto LAB_03cb78d8;
      if (*(uint *)(lVar3 + 0x18) <= uVar5) {
Unity_Collections_NativeArray<OVRPlugin_Vector4f>__get_Item:
                    /* WARNING: Subroutine does not return */
        FUN_02f089d0();
      }
      if (param_3 == 0) {
LAB_03cb78d8:
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      puVar1 = (undefined8 *)(lVar3 + lVar4);
      uStack_68 = puVar1[1];
      local_70 = *puVar1;
      uStack_58 = puVar1[3];
      uStack_60 = puVar1[2];
      uStack_48 = puVar1[5];
      local_50 = puVar1[4];
      uStack_38 = puVar1[7];
      uStack_40 = puVar1[6];
      uVar2 = (**(code **)(param_3 + 0x18))
                        (*(undefined8 *)(param_3 + 0x40),&local_70,*(undefined8 *)(param_3 + 0x28));
      if ((uVar2 & 1) != 0) {
        lVar3 = *(long *)(param_2 + 0x10);
        if (lVar3 != 0) {
          if ((uint)uVar5 < *(uint *)(lVar3 + 0x18)) {
            puVar1 = (undefined8 *)(lVar3 + lVar4);
            uVar6 = *puVar1;
            uVar8 = puVar1[3];
            uVar7 = puVar1[2];
            param_1[1] = puVar1[1];
            *param_1 = uVar6;
            param_1[3] = uVar8;
            param_1[2] = uVar7;
            uVar6 = puVar1[4];
            uVar8 = puVar1[7];
            uVar7 = puVar1[6];
            param_1[5] = puVar1[5];
            param_1[4] = uVar6;
            param_1[7] = uVar8;
            param_1[6] = uVar7;
            return;
          }
          goto Unity_Collections_NativeArray<OVRPlugin_Vector4f>__get_Item;
        }
        goto LAB_03cb78d8;
      }
      uVar5 = uVar5 + 1;
      lVar4 = lVar4 + 0x40;
    } while ((long)uVar5 < (long)*(int *)(param_2 + 0x18));
  }
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  return;
}


