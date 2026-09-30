/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Contains<OVRPlugin.SpaceDiscoveryResult>
ENTRY_POINT: 0211815c
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 73
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined1  [16]
System_Array__InternalArray__ICollection_Contains<OVRPlugin_SpaceDiscoveryResult>
          (long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  long unaff_x19;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  
  uVar4 = *(undefined8 *)(param_1 + 8);
  if (*(int *)(param_2 + 0xe0) == 0) {
    thunk_FUN_01dc4f30();
  }
  uVar4 = FUN_033a87c8(uVar4,0);
  FUN_033b3798(uVar4,0);
  auVar5._0_8_ = (*(code *)**(undefined8 **)(*(long *)(unaff_x19 + 0x38) + 0x18))();
  iVar1 = (*(code *)**(undefined8 **)(*(long *)(unaff_x19 + 0x38) + 0x28))();
  puVar3 = *(undefined8 **)(*(long *)(unaff_x19 + 0x38) + 0x38);
  iVar2 = (*(code *)*puVar3)(puVar3);
  if ((long)iVar2 * (long)iVar1 - (long)(int)((long)iVar2 * (long)iVar1) == 0) {
    auVar5._8_4_ = iVar2 * iVar1;
    auVar5._12_4_ = 0;
    return auVar5;
  }
  FUN_01d7db80();
                    /* WARNING: Subroutine does not return */
  FUN_01d7da3c();
}


