/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Contains<OVRPlugin.SpaceDiscoveryResult>
ENTRY_POINT: 01b68be4
PROGRAM: sharks-libil2cpp.so
SCORE: 73
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8
System_Array__InternalArray__ICollection_Contains<OVRPlugin_SpaceDiscoveryResult>(long param_1)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 (*unaff_x19) [16];
  long unaff_x20;
  long *unaff_x21;
  undefined1 auVar5 [16];
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  uint uStack0000000000000028;
  uint uStack000000000000002c;
  
  lVar4 = *unaff_x21;
  if ((*(byte *)(param_1 + 0x130) <= *(byte *)(lVar4 + 0x130)) &&
     (*(long *)(*(long *)(lVar4 + 200) + (ulong)*(byte *)(param_1 + 0x130) * 8 + -8) == param_1)) {
    uVar2 = (**(code **)(lVar4 + 0x198))();
    if ((uVar2 & 1) == 0) {
      if ((uStack0000000000000028 & 0x7fffffff) != 0) {
        *(undefined8 *)*unaff_x19 = 0;
        *(undefined8 *)(*unaff_x19 + 8) = 0;
        return 0;
      }
      lVar4 = *(long *)(*(long *)(unaff_x20 + 0x38) + 0x38);
      if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_0185daa4();
      }
      if (*(int *)(lVar4 + 0xe0) == 0) {
        thunk_FUN_01843fdc();
      }
      auVar5 = (*(code *)**(undefined8 **)(*(long *)(unaff_x20 + 0x38) + 0x60))();
      *unaff_x19 = auVar5;
    }
    else {
      lVar4 = *(long *)(*(long *)(unaff_x20 + 0x38) + 0x38);
      if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_0185daa4();
      }
      if (*(int *)(lVar4 + 0xe0) == 0) {
        thunk_FUN_01843fdc();
      }
      uVar3 = (*(code *)**(undefined8 **)(*(long *)(unaff_x20 + 0x38) + 0x30))(&stack0x00000018);
      iVar1 = (*(code *)**(undefined8 **)(*(long *)(unaff_x20 + 0x38) + 0x48))(&stack0x00000018);
      in_stack_00000008 = 0;
      in_stack_00000010 = 0;
      FUN_021eb9f0(&stack0x00000008,uVar3,(uStack000000000000002c & 0x7fffffff) + iVar1,
                   uStack0000000000000028,*(undefined8 *)(*(long *)(unaff_x20 + 0x38) + 0x58));
      *(undefined8 *)(*unaff_x19 + 8) = in_stack_00000010;
      *(undefined8 *)*unaff_x19 = in_stack_00000008;
    }
    thunk_FUN_0188fd20();
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_017fc944();
}


