/*
FUNCTION_NAME: FUN_03760214
ENTRY_POINT: 03760214
PROGRAM: gunraiders-libil2cpp.so
SCORE: 92
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_03760214(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_DAT_0422fd68;
  if ((DAT_04538c53 & 1) == 0) {
    FUN_01c5d288(PTR_DAT_0422fd68);
    FUN_01c5d288(Method_UnityEngine_GameObject_GetComponent<MuscleCollisionBroadcaster>__);
    FUN_01c5d288(PTR_DAT_042316f8);
    FUN_01c5d288(Method_UnityEngine_GameObject_GetComponent<OVRManager>__);
    DAT_04538c53 = 1;
  }
  lVar2 = FUN_01c5d2fc(*(undefined8 *)puVar1,5);
  if (lVar2 != 0) {
    if (*(int *)(lVar2 + 0x18) != 0) {
      *(undefined8 *)(lVar2 + 0x20) =
           *(undefined8 *)Method_UnityEngine_GameObject_GetComponent<MuscleCollisionBroadcaster>__;
      uVar3 = FUN_032e3e84(param_1,0);
      if ((1 < *(uint *)(lVar2 + 0x18)) &&
         (*(undefined8 *)(lVar2 + 0x28) = uVar3, *(uint *)(lVar2 + 0x18) != 2)) {
        *(undefined8 *)(lVar2 + 0x30) =
             *(undefined8 *)Method_UnityEngine_GameObject_GetComponent<OVRManager>__;
        uVar3 = FUN_032e3e84(param_1 + 4,0);
        if ((3 < *(uint *)(lVar2 + 0x18)) &&
           (*(undefined8 *)(lVar2 + 0x38) = uVar3, *(uint *)(lVar2 + 0x18) != 4)) {
          *(undefined8 *)(lVar2 + 0x40) = *(undefined8 *)PTR_DAT_042316f8;
          FUN_031533cc(lVar2,0);
          return;
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01c5d4ac();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4a4();
}


