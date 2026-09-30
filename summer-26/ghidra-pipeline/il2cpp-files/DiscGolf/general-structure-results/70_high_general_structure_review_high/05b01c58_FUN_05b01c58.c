/*
FUNCTION_NAME: FUN_05b01c58
ENTRY_POINT: 05b01c58
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_8;telemetry_or_network_hits_2
*/


void FUN_05b01c58(long param_1)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  
  if ((DAT_06dc1f0f & 1) == 0) {
    FUN_02d965b8(Method_OVRTask_Awaiter<OVRResult<OVRColocationSession_Result>>_get_IsCompleted__);
    FUN_02d965b8(
                Method_UnityEngine_InputSystem_Utilities_CallbackArray<Action<Finger>>_AddCallback__
                );
    FUN_02d965b8(
                Method_UnityEngine_InputSystem_Utilities_CallbackArray<Action<Finger>>_RemoveCallback__
                );
    DAT_06dc1f0f = 1;
  }
  if ((param_1 != 0) && (lVar3 = *(long *)(param_1 + 0x78), lVar3 != 0)) {
    plVar2 = (long *)
             Method_OVRTask_Awaiter<OVRResult<OVRColocationSession_Result>>_get_IsCompleted__;
    if (*(char *)(lVar3 + 0x3d) == '\0') goto LAB_05b01d10;
    if (*(long *)(lVar3 + 0x10) != 0) {
      plVar2 = *(long **)(*(long *)(lVar3 + 0x10) + 0x30);
      if (plVar2 == (long *)0x0) {
        return;
      }
      iVar1 = (**(code **)(*plVar2 + 0x188))(plVar2,*(undefined8 *)(*plVar2 + 400));
      lVar3 = *(long *)(param_1 + 0x78);
      if (iVar1 == 9) {
        if (lVar3 == 0) goto LAB_05b01d48;
        plVar2 = (long *)
                 Method_UnityEngine_InputSystem_Utilities_CallbackArray<Action<Finger>>_AddCallback__
        ;
        if (*(char *)(lVar3 + 0x3c) != '\0') {
          return;
        }
      }
      else {
        if (lVar3 == 0) goto LAB_05b01d48;
        plVar2 = (long *)
                 Method_UnityEngine_InputSystem_Utilities_CallbackArray<Action<Finger>>_RemoveCallback__
        ;
        if (*(char *)(lVar3 + 0x3c) == '\0') {
          return;
        }
      }
LAB_05b01d10:
      if (*plVar2 == 0) {
        return;
      }
      FUN_05afcfc8(param_1,*plVar2,**(undefined8 **)(*(long *)(PTR_DAT_069fb9c0 + 0x90) + 0xb8));
      return;
    }
  }
LAB_05b01d48:
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


