/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.Style$$Default<object>
ENTRY_POINT: 03cb5fb0
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 76
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_1;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_Generic_Style__Default<object>(undefined8 param_1)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x22;
  long *plVar4;
  long unaff_x23;
  undefined1 unaff_w24;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 uStack0000000000000050;
  undefined1 uStack0000000000000058;
  undefined7 uStack0000000000000059;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  
  uStack0000000000000050 = param_1;
  thunk_FUN_03048534(&stack0x00000050);
  uVar2 = CONCAT71(uStack0000000000000059,unaff_w24);
  if (unaff_x23 != 0) {
    in_stack_00000068 = in_stack_00000038;
    in_stack_00000060 = in_stack_00000030;
    in_stack_00000078 = in_stack_00000048;
    in_stack_00000070 = in_stack_00000040;
    in_stack_00000080 = uStack0000000000000050;
    lVar3 = *(long *)(unaff_x23 + 0x10);
    *(int *)(unaff_x23 + 0x1c) = *(int *)(unaff_x23 + 0x1c) + 1;
    in_stack_00000088 = uVar2;
    if (lVar3 != 0) {
      uVar1 = *(uint *)(unaff_x23 + 0x18);
      if (uVar1 < *(uint *)(lVar3 + 0x18)) {
        *(uint *)(unaff_x23 + 0x18) = uVar1 + 1;
        lVar3 = lVar3 + (long)(int)uVar1 * 0x30;
        *(undefined8 *)(lVar3 + 0x38) = in_stack_00000048;
        *(undefined8 *)(lVar3 + 0x30) = in_stack_00000040;
        *(undefined8 *)(lVar3 + 0x48) = uVar2;
        *(undefined8 *)(lVar3 + 0x40) = uStack0000000000000050;
        *(undefined8 *)(lVar3 + 0x28) = in_stack_00000038;
        *(undefined8 *)(lVar3 + 0x20) = in_stack_00000030;
        thunk_FUN_03048534(lVar3 + 0x40,0);
      }
      else {
        in_stack_00000098 = in_stack_00000038;
        in_stack_00000090 = in_stack_00000030;
        in_stack_000000a8 = in_stack_00000048;
        in_stack_000000a0 = in_stack_00000040;
        in_stack_000000b0 = uStack0000000000000050;
        in_stack_000000b8 = uVar2;
        FUN_04582c3c();
      }
      plVar4 = (long *)(unaff_x22 + 0x18);
      if (*plVar4 == 0) {
        lVar3 = thunk_FUN_0301080c(*(undefined8 *)PTR_DAT_06f911d0);
        FUN_0371924c(lVar3,0);
        *plVar4 = lVar3;
        thunk_FUN_03048534(plVar4,lVar3);
        if (*plVar4 == 0) goto LAB_03cb60dc;
      }
      Unity_Entities_ManagedObjectClone__Unity_Properties_IPropertyBagVisitor_Visit<Vector4>();
      return;
    }
  }
LAB_03cb60dc:
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}


