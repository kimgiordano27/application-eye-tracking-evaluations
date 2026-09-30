/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Utils.ValueContainer<Vector3>$$.ctor
ENTRY_POINT: 04768024
PROGRAM: Untangled-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x0476807c) */

void Meta_XR_ImmersiveDebugger_Utils_ValueContainer<Vector3>___ctor
               (code *param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long unaff_x19;
  long unaff_x20;
  undefined8 unaff_x21;
  int unaff_w22;
  long unaff_x23;
  undefined8 unaff_x24;
  long unaff_x29;
  
  while( true ) {
    (*param_1)(param_2);
    unaff_w22 = unaff_w22 + 1;
    iVar1 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x60))
                      (unaff_x29 + -0x30);
    if (iVar1 <= unaff_w22) {
      FUN_04266c3c(unaff_x29 + -0x30,
                   *(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x68));
      if (*(long *)(unaff_x23 + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
    puVar3 = *(undefined8 **)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x40);
    uVar2 = *puVar3;
    *(int *)(unaff_x29 + -0xc) = unaff_w22;
    *(undefined8 *)(unaff_x29 + -0x20) = unaff_x24;
    *(undefined8 *)(unaff_x29 + -0x18) = unaff_x21;
    (*(code *)puVar3[2])(uVar2,puVar3,unaff_x29 + -0x30,unaff_x29 + -0x20);
    if (unaff_x20 == 0) break;
    puVar3 = *(undefined8 **)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x58);
    param_2 = *puVar3;
    *(undefined8 *)(unaff_x29 + -0x20) = unaff_x21;
    param_1 = (code *)puVar3[2];
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


