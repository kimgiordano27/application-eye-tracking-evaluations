/*
FUNCTION_NAME: FUN_0671c2c8
ENTRY_POINT: 0671c2c8
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void FUN_0671c2c8(undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,long param_4,
                 long param_5,long param_6,undefined4 param_7)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined4 uVar4;
  undefined8 local_50;
  undefined8 uStack_48;
  
  if ((DAT_073a1304 & 1) == 0) {
    FUN_02fe925c(Unity_Entities_TypeManager_SharedTypeIndex<LaserSword>_TypeInfo);
    DAT_073a1304 = 1;
  }
  if (param_5 != 0) {
    uStack_48 = *(undefined8 *)(param_5 + 0x20);
    local_50 = *(undefined8 *)(param_5 + 0x18);
    FUN_068b2130(&local_50,0);
    if ((param_6 != 0) && (lVar3 = *(long *)(param_6 + 0x48), lVar3 != 0)) {
      FUN_068bc0b4(lVar3,*(undefined8 *)(param_4 + 0x18),0);
      if ((*(long *)(param_4 + 0x18) != 0) &&
         (lVar2 = FUN_068f5d7c(*(long *)(param_4 + 0x18),0),
         puVar1 = Unity_Entities_TypeManager_SharedTypeIndex<LaserSword>_TypeInfo, lVar2 != 0)) {
        FUN_069042b4(lVar2,0);
        thunk_FUN_068bc29c(lVar3,0);
        FUN_068bc258(lVar3,*(undefined8 *)(param_4 + 0x10),0);
        Unity_Collections_NativeArray<OVRPlugin_Qpl_Annotation>__CopyTo
                  (param_5 + 0xd8,*(undefined8 *)(param_5 + 0x148),*(undefined8 *)puVar1);
        FUN_068bc0f8(lVar3,*(undefined8 *)(param_5 + 0x148),0);
        FUN_068bc13c(lVar3,param_7,0);
        if ((*(long *)(param_4 + 0x18) != 0) &&
           (lVar3 = FUN_068f5d7c(*(long *)(param_4 + 0x18),0), lVar3 != 0)) {
          uVar4 = FUN_069042b4(lVar3,0);
          *(undefined4 *)(param_6 + 0x28) = uVar4;
          *(undefined4 *)(param_6 + 0x2c) = param_2;
          *(undefined4 *)(param_6 + 0x30) = param_3;
          if (*(long *)(param_4 + 0x18) != 0) {
            uVar4 = FUN_068b99d4(*(long *)(param_4 + 0x18),0);
            *(undefined4 *)(param_6 + 0x40) = uVar4;
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}


