/*
FUNCTION_NAME: FUN_0767646c
ENTRY_POINT: 0767646c
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_5;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


undefined8 FUN_0767646c(long param_1,undefined4 param_2,undefined8 param_3,int param_4,int param_5)

{
  uint uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 local_38;
  
  if ((DAT_08271013 & 1) == 0) {
    FUN_0373b518(
                Method_UnityEngine_XR_ARFoundation_ARTrackableManager<XRPlaneSubsystem,_XRPlaneSubsystemDescriptor,_XRPlaneSubsystem_Provider,_BoundedPlane,_ARPlane>_OnEnable__
                );
    FUN_0373b518(
                UnityEngine_XR_OpenXR_Features_Extensions_PerformanceSettings_XrPerformanceSettingsFeature_NativeApi_XrPerformanceNotificationDelegate_TypeInfo
                );
    FUN_0373b518(
                Method_UnityEngine_XR_ARFoundation_ARTrackable<XRParticipant,_ARParticipant>_get_sessionRelativeData__
                );
    DAT_08271013 = 1;
  }
  local_38 = 0;
  if (*(long *)(param_1 + 0x130) != 0) {
    uVar2 = FUN_05bc5484(*(long *)(param_1 + 0x130),param_2,&local_38,
                         *(undefined8 *)
                          UnityEngine_XR_OpenXR_Features_Extensions_PerformanceSettings_XrPerformanceSettingsFeature_NativeApi_XrPerformanceNotificationDelegate_TypeInfo
                        );
    if ((uVar2 & 1) != 0) {
LAB_0767659c:
      if ((param_4 != 0) || (param_5 != 400)) {
        FUN_07671948(param_1,param_2,local_38,param_4,param_5);
      }
      return local_38;
    }
    uVar3 = thunk_FUN_037788cc(*(undefined8 *)
                                Method_UnityEngine_XR_ARFoundation_ARTrackableManager<XRPlaneSubsystem,_XRPlaneSubsystemDescriptor,_XRPlaneSubsystem_Provider,_BoundedPlane,_ARPlane>_OnEnable__
                              );
    FUN_07669a10(uVar3,param_2,param_1,param_3);
    lVar4 = *(long *)(param_1 + 0x128);
    local_38 = uVar3;
    if (lVar4 != 0) {
      lVar5 = *(long *)(lVar4 + 0x10);
      lVar7 = *(long *)
               Method_UnityEngine_XR_ARFoundation_ARTrackable<XRParticipant,_ARParticipant>_get_sessionRelativeData__
      ;
      *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
      if (lVar5 != 0) {
        uVar1 = *(uint *)(lVar4 + 0x18);
        if (uVar1 < *(uint *)(lVar5 + 0x18)) {
          *(uint *)(lVar4 + 0x18) = uVar1 + 1;
          puVar6 = (undefined8 *)(lVar5 + (long)(int)uVar1 * 8 + 0x20);
          *puVar6 = uVar3;
          thunk_FUN_037aeb94(puVar6,uVar3);
        }
        else {
          FUN_049ceef4(lVar4,uVar3,*(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70)
                      );
        }
        FUN_07671948(param_1,param_2,local_38,0,400);
        goto LAB_0767659c;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}


