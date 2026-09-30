/*
FUNCTION_NAME: FUN_0610f9f0
ENTRY_POINT: 0610f9f0
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_5;ray_or_cast_sink_hits_2;telemetry_or_network_hits_2
*/


undefined8 FUN_0610f9f0(long param_1,int param_2,int param_3)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  long extraout_x1;
  long lVar4;
  int iVar5;
  
  puVar1 = Method_OVRVirtualKeyboard_PopulateCollision__;
  if ((DAT_06b8a764 & 1) == 0) {
    FUN_02d6084c(Method_System_Runtime_Remoting_Messaging_ObjRefSurrogate_SetObjectData__);
    FUN_02d6084c(Method_UnityEngine_Object_FindAnyObjectByType<ARCameraManager>__);
    FUN_02d6084c(Method_UnityEngine_Object_FindAnyObjectByType<ARGestureInteractor>__);
    FUN_02d6084c(Method_UnityEngine_Object_FindAnyObjectByType<ARSession>__);
    FUN_02d6084c(Method_OVRVirtualKeyboard_PopulateCollision__);
    DAT_06b8a764 = 1;
  }
  lVar3 = *(long *)puVar1;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar3 = *(long *)puVar1;
  }
  lVar4 = **(long **)(lVar3 + 0xb8);
  if (lVar4 == 0) {
LAB_0610fb30:
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
  if (param_2 < *(int *)(lVar4 + 0x18)) {
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar4 = **(long **)(*(long *)puVar1 + 0xb8);
      if (lVar4 == 0) goto LAB_0610fb30;
    }
    FUN_03c19c50(lVar4,param_2,
                 *(undefined8 *)Method_UnityEngine_Object_FindAnyObjectByType<ARGestureInteractor>__
                );
    puVar1 = Method_UnityEngine_Object_FindAnyObjectByType<ARSession>__;
    if (extraout_x1 == 0) goto LAB_0610fb30;
    if (0 < *(int *)(extraout_x1 + 0x18)) {
      iVar5 = 0;
      do {
        iVar2 = FUN_03a3a730(extraout_x1,iVar5,*(undefined8 *)puVar1);
        if (iVar2 == param_3) {
          *(int *)(param_1 + 0x20) = param_2;
          *(int *)(param_1 + 0x24) = param_3;
          return 1;
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < *(int *)(extraout_x1 + 0x18));
    }
  }
  return 0;
}


