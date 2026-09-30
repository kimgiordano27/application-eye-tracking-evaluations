/*
FUNCTION_NAME: OVRPermissionsRequester$$ShouldRequestPermission
ENTRY_POINT: 0534256c
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 84
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: attempted_eye_tracking_use
MODULES: weak_source_state;validity_gate;telemetry;attempted_use
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_8;telemetry_or_network_hits_4;attempted_eye_tracking_permission_or_feature_enable
*/


long OVRPermissionsRequester__ShouldRequestPermission(void)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long unaff_x19;
  long *unaff_x21;
  uint uVar6;
  
  FUN_02f08768();
  FUN_02f08768(
              UnityEngine_XR_Interaction_Toolkit_Utilities_UnityObjectReferenceCache<ICurveInteractionDataProvider,_Object>_TypeInfo
              );
  *(undefined1 *)(unaff_x19 + 0x4b7) = 1;
  if (*(int *)(*unaff_x21 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  lVar2 = FUN_05342420();
  if (**(long **)(*unaff_x21 + 0xb8) == 0) {
LAB_05342680:
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  lVar3 = FUN_02f0880c(*(undefined8 *)PTR_DAT_067d23f0,
                       *(undefined4 *)(**(long **)(*unaff_x21 + 0xb8) + 0x18));
  lVar4 = *unaff_x21;
  uVar6 = 0;
  while( true ) {
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
      lVar4 = *unaff_x21;
    }
    lVar5 = **(long **)(lVar4 + 0xb8);
    if (lVar5 == 0) goto LAB_05342680;
    if (*(int *)(lVar5 + 0x18) <= (int)uVar6) {
      return lVar3;
    }
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
      lVar4 = *unaff_x21;
      lVar5 = **(long **)(lVar4 + 0xb8);
      if (lVar5 == 0) goto LAB_05342680;
    }
    if (*(uint *)(lVar5 + 0x18) <= uVar6) break;
    if (lVar2 == 0) goto LAB_05342680;
    uVar1 = *(uint *)(lVar5 + (long)(int)uVar6 * 4 + 0x20);
    if (*(uint *)(lVar2 + 0x18) <= uVar1) break;
    if (lVar3 == 0) goto LAB_05342680;
    if (*(uint *)(lVar3 + 0x18) <= uVar6) break;
    lVar5 = (long)(int)uVar6;
    uVar6 = uVar6 + 1;
    *(bool *)(lVar3 + lVar5 + 0x20) =
         *(int *)(lVar2 + (long)(int)uVar1 * 4 + 0x20) < 2 && uVar1 != 3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f089d0();
}


