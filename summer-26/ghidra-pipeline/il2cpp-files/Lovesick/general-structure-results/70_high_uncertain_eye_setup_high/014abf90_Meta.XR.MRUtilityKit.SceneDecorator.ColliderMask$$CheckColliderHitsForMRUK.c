/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.SceneDecorator.ColliderMask$$CheckColliderHitsForMRUK
ENTRY_POINT: 014abf90
PROGRAM: Lovesick-libil2cpp.so
SCORE: 84
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_4;ray_or_cast_sink_hits_4;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_SceneDecorator_ColliderMask__CheckColliderHitsForMRUK(undefined8 param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x21;
  undefined8 *unaff_x23;
  undefined8 *unaff_x26;
  undefined8 *unaff_x27;
  undefined8 *unaff_x28;
  undefined8 in_stack_00000008;
  
  while( true ) {
    while( true ) {
      *(undefined8 *)(unaff_x21 + 0x18) = param_1;
      FUN_00bc40b0();
      uVar1 = FUN_012c2b80(&stack0x00000020,*unaff_x26);
      if ((uVar1 & 1) == 0) {
        FUN_012c2b7c(&stack0x00000020,
                     *(undefined8 *)
                      Method_System_Collections_Hashtable_HashtableEnumerator_get_Key__);
        FUN_01325140();
        return;
      }
      uVar2 = FUN_00bc3fa8(&stack0x00000020,*unaff_x27);
      unaff_x21 = thunk_FUN_00d62348(*unaff_x28);
      if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      FUN_014fc08c(unaff_x21,0);
      *(undefined8 *)(unaff_x21 + 0x10) = uVar2;
      lVar3 = FUN_00bc379c();
      if (lVar3 != 0) break;
      param_1 = 0;
    }
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    if (*(long *)(lVar3 + 0x20) == 0) break;
    FUN_01299bc0(*(long *)(lVar3 + 0x20),uVar2,&stack0x00000008,*unaff_x23);
    param_1 = in_stack_00000008;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


