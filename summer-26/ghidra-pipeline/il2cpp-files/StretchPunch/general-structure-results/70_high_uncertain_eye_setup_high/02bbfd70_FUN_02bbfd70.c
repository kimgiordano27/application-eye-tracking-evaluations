/*
FUNCTION_NAME: FUN_02bbfd70
ENTRY_POINT: 02bbfd70
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void FUN_02bbfd70(long param_1,long param_2,uint param_3,long param_4)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  undefined4 *puVar6;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_033a44fc(3);
  }
  uVar3 = *(uint *)(param_2 + 0x18);
  if (uVar3 < param_3) {
    OVRManager_PassthroughCapabilities___ctor(0);
    uVar3 = *(uint *)(param_2 + 0x18);
  }
  uVar1 = *(uint *)(param_1 + 0x20);
  if ((int)(uVar3 - param_3) < (int)(uVar1 - *(int *)(param_1 + 0x28))) {
    FUN_033b2d60(5,0);
    uVar1 = *(uint *)(param_1 + 0x20);
  }
  if (0 < (int)uVar1) {
    lVar4 = *(long *)(param_1 + 0x18);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01d7db70();
    }
    uVar5 = 0;
    puVar6 = (undefined4 *)(lVar4 + 0x38);
    do {
      if (*(uint *)(lVar4 + 0x18) <= uVar5) {

        System_Collections_Generic_Dictionary_ValueCollection_Enumerator<Guid,_ValueTuple<Int32Enum,_int>>__Dispose
        :
                    /* WARNING: Subroutine does not return */
        FUN_01d7db78();
      }
      if (-1 < (int)puVar6[-6]) {
        local_68 = 0;
        uStack_60 = 0;
        local_58 = 0;
        FUN_03072c08(&local_68,*(undefined8 *)(puVar6 + -4),*(undefined8 *)(puVar6 + -2),*puVar6,
                     *(undefined8 *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x130));
        if (*(uint *)(param_2 + 0x18) <= param_3)
        goto 
        System_Collections_Generic_Dictionary_ValueCollection_Enumerator<Guid,_ValueTuple<Int32Enum,_int>>__Dispose
        ;
        lVar2 = param_2 + (long)(int)param_3 * 0x18;
        param_3 = param_3 + 1;
        *(undefined8 *)(lVar2 + 0x30) = local_58;
        *(undefined8 *)(lVar2 + 0x28) = uStack_60;
        *(undefined8 *)(lVar2 + 0x20) = local_68;
        thunk_FUN_01e10808(lVar2 + 0x20,0);
      }
      uVar5 = uVar5 + 1;
      puVar6 = puVar6 + 8;
    } while (uVar1 != uVar5);
  }
  return;
}


