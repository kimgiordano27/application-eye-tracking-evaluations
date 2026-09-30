/*
FUNCTION_NAME: Meta.XR.EnvironmentDepthManagerRaycastExtensions$$EnsureDepthRaycastComponentIsPresent
ENTRY_POINT: 01461754
PROGRAM: Lovesick-libil2cpp.so
SCORE: 84
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_5;ray_or_cast_sink_hits_3;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_EnvironmentDepthManagerRaycastExtensions__EnsureDepthRaycastComponentIsPresent
               (long param_1)

{
  undefined *puVar1;
  long lVar2;
  long in_x9;
  long in_x10;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *unaff_x24;
  long in_stack_00000098;
  long in_stack_000000e8;
  
  puVar1 = UnityEngine_UIElements_EventCallbackListPool_TypeInfo;
  if (*(uint *)(in_x9 + 0x18) <= (uint)in_x10) {
                    /* WARNING: Subroutine does not return */
    FUN_00da5194();
  }
  *(undefined8 *)(param_1 + 0xb8) = *(undefined8 *)(in_x9 + in_x10 * 8 + 0x20);
  lVar2 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
  if (lVar2 != 0) {
    FUN_01320e50(lVar2,*(undefined8 *)Method_System_Xml_Schema_XsdBuilder_BuildElement_MinOccurs__);
    if (*(long *)(in_stack_000000e8 + 0x98) != 0) {
      FUN_0132138c(*(long *)(in_stack_000000e8 + 0x98),*(undefined4 *)(in_stack_000000e8 + 0xa0),
                   &stack0x00000098,*unaff_x24);
      if (in_stack_00000098 != 0) {
        FUN_013e73c0(in_stack_00000098,lVar2,0);
        if (*(long *)(in_stack_000000e8 + 0x98) != 0) {
          lVar2 = *(long *)(in_stack_000000e8 + 0x20);
          uVar3 = *(undefined8 *)(in_stack_000000e8 + 0x40);
          uVar4 = *(undefined8 *)(in_stack_000000e8 + 0xb8);
          FUN_0132138c(*(long *)(in_stack_000000e8 + 0x98),*(undefined4 *)(in_stack_000000e8 + 0xa0)
                       ,&stack0x00000098,*unaff_x24);
          if ((in_stack_00000098 != 0) &&
             (FUN_013e74ec(in_stack_00000098,*(undefined8 *)(in_stack_000000e8 + 0x48),0),
             lVar2 != 0)) {
            uVar3 = FUN_0143eb4c(*(undefined4 *)(in_stack_000000e8 + 0x60),lVar2,uVar3,uVar4);
            *(undefined8 *)(in_stack_000000e8 + 0x18) = uVar3;
            *(undefined4 *)(in_stack_000000e8 + 0x10) = 1;
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


