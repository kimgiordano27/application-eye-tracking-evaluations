/*
FUNCTION_NAME: FUN_06c614c4
ENTRY_POINT: 06c614c4
PROGRAM: vandalizer-libil2cpp.so
SCORE: 70
LABEL: uncertain_foveated_rendering_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: weak_source_state;validity_gate;foveation_rendering;keyword_support
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_3;strong_foveation_hits_2;eye_or_gaze_keyword_boost_only;functionality_foveated_rendering
*/


bool FUN_06c614c4(undefined8 param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  uint uVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 *puVar5;
  ulong uVar6;
  int *piVar7;
  long lVar8;
  ushort local_14 [2];
  
  if ((DAT_07a505c6 & 1) == 0) {
    FUN_031f20f4(
                UnityEngine_XR_ARFoundation_VisualScripting_GetTrackablesUnit<ARParticipantManager,_XRParticipantSubsystem,_XRParticipantSubsystemDescriptor,_XRParticipantSubsystem_Provider,_XRParticipant,_ARParticipant>_TypeInfo
                );
    FUN_031f20f4(
                UnityEngine_XR_ARFoundation_VisualScripting_GetTrackablesUnit<ARPlaneManager,_XRPlaneSubsystem,_XRPlaneSubsystemDescriptor,_XRPlaneSubsystem_Provider,_BoundedPlane,_ARPlane>_TypeInfo
                );
    FUN_031f20f4(PTR_DAT_0759d8a0);
    FUN_031f20f4(PTR_DAT_0759d8a8);
    DAT_07a505c6 = 1;
  }
  lVar8 = *(long *)(param_3 + 0x250);
  uVar3 = FUN_0681e694(param_3 + 0x1b8,0);
  if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_031f2390();
  }
  plVar4 = (long *)FUN_06d2f1dc(lVar8,uVar3,0);
  bVar1 = false;
  if (plVar4 != (long *)0x0) {
    lVar8 = *plVar4;
    uVar6 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) ==
            *(long *)
             UnityEngine_XR_ARFoundation_VisualScripting_GetTrackablesUnit<ARParticipantManager,_XRParticipantSubsystem,_XRParticipantSubsystemDescriptor,_XRParticipantSubsystem_Provider,_XRParticipant,_ARParticipant>_TypeInfo
           ) {
          puVar5 = (undefined8 *)(lVar8 + (long)(*piVar7 + 1) * 0x10 + 0x138);
          goto LAB_06c615a4;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar5 = (undefined8 *)
             FUN_0322c1e8(plVar4,*(long *)
                                  UnityEngine_XR_ARFoundation_VisualScripting_GetTrackablesUnit<ARParticipantManager,_XRParticipantSubsystem,_XRParticipantSubsystemDescriptor,_XRParticipantSubsystem_Provider,_XRParticipant,_ARParticipant>_TypeInfo
                          ,1);
LAB_06c615a4:
    plVar4 = (long *)(*(code *)*puVar5)(plVar4,0,puVar5[1]);
    bVar1 = false;
    if (plVar4 != (long *)0x0) {
      lVar8 = *plVar4;
      uVar6 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) ==
              *(long *)
               UnityEngine_XR_ARFoundation_VisualScripting_GetTrackablesUnit<ARPlaneManager,_XRPlaneSubsystem,_XRPlaneSubsystemDescriptor,_XRPlaneSubsystem_Provider,_BoundedPlane,_ARPlane>_TypeInfo
             ) {
            puVar5 = (undefined8 *)(lVar8 + (long)*piVar7 * 0x10 + 0x138);
            goto UnityEngine_XR_OpenXR_OpenXRSettings__set_foveatedRenderingApi;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar5 = (undefined8 *)
               FUN_0322c1e8(plVar4,*(long *)
                                    UnityEngine_XR_ARFoundation_VisualScripting_GetTrackablesUnit<ARPlaneManager,_XRPlaneSubsystem,_XRPlaneSubsystemDescriptor,_XRPlaneSubsystem_Provider,_BoundedPlane,_ARPlane>_TypeInfo
                            ,0);
UnityEngine_XR_OpenXR_OpenXRSettings__set_foveatedRenderingApi:
      uVar2 = (*(code *)*puVar5)(param_1,param_2,0,plVar4,puVar5[1]);
      local_14[0] = 0;
      FUN_04b98914(local_14,uVar2 & 1,*(undefined8 *)PTR_DAT_0759d8a8);
      bVar1 = 0xff < local_14[0];
    }
  }
  return bVar1;
}


