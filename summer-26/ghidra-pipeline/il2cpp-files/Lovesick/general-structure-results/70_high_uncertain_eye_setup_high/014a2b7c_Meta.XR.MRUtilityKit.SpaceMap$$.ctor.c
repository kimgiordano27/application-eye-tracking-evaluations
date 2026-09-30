/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.SpaceMap$$.ctor
ENTRY_POINT: 014a2b7c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 76
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_4;ray_or_cast_sink_hits_1;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8 Meta_XR_MRUtilityKit_SpaceMap___ctor(void)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  FUN_0136b58c();
  if (unaff_x21 != 0) {
    iVar2 = FUN_01322fd0();
    puVar1 = StringLiteral_720;
    if (-1 < iVar2) {
      if (*(long *)(unaff_x19 + 0x20) == 0) goto LAB_014a2c34;
      if (iVar2 < *(int *)(*(long *)(unaff_x19 + 0x20) + 0x18)) {
        *(int *)(unaff_x19 + 0x38) = iVar2;
        return 1;
      }
    }
    uVar3 = FUN_015f5b28(*(undefined8 *)
                          Method_UnityEngine_Component_GetComponentsInChildren<Collider>__,
                         *(undefined8 *)(unaff_x20 + 0x10),0);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_00d32864(*(long *)puVar1);
    }
    FUN_014ded68(uVar3,0);
    return 0;
  }
LAB_014a2c34:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


