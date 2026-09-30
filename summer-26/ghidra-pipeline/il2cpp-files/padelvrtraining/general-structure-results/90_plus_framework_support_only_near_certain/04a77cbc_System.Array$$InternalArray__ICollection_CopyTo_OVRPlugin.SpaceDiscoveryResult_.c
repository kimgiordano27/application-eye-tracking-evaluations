/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_CopyTo<OVRPlugin.SpaceDiscoveryResult>
ENTRY_POINT: 04a77cbc
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 106
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_4
*/


void System_Array__InternalArray__ICollection_CopyTo<OVRPlugin_SpaceDiscoveryResult>(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int unaff_w20;
  int unaff_w21;
  long unaff_x22;
  undefined *puVar4;
  
  FUN_03d8f2c8();
  if (unaff_x22 == 0) {
    thunk_FUN_03d1e194(PTR_DAT_091adab0);
    uVar1 = thunk_FUN_03d2ef40();
    uVar2 = thunk_FUN_03d1e194(PTR_DAT_091b3178);
    FUN_070c4c34(uVar1,uVar2,0);
    goto System_Array__InternalArray__ICollection_CopyTo<OVRPlugin_Vector3f>;
  }
  if (unaff_w21 < 0) {
LAB_04a77d28:
    thunk_FUN_03d1e194(PTR_DAT_091ab0b0);
    uVar1 = thunk_FUN_03d2ef40();
    uVar2 = thunk_FUN_03d1e194(PTR_DAT_091f9130);
    puVar4 = PTR_DAT_091f9138;
  }
  else {
    if (*(int *)(unaff_x22 + 0x18) < unaff_w21) goto LAB_04a77d28;
    if ((-1 < unaff_w20) && (unaff_w20 <= *(int *)(unaff_x22 + 0x18) - unaff_w21)) {
      FUN_04a948a0();
      return;
    }
    thunk_FUN_03d1e194(PTR_DAT_091ab0b0);
    uVar1 = thunk_FUN_03d2ef40();
    uVar2 = thunk_FUN_03d1e194(PTR_DAT_091b4488);
    puVar4 = PTR_DAT_091f9140;
  }
  uVar3 = thunk_FUN_03d1e194(puVar4);
  FUN_070c848c(uVar1,uVar2,uVar3,0);
System_Array__InternalArray__ICollection_CopyTo<OVRPlugin_Vector3f>:
                    /* WARNING: Subroutine does not return */
  FUN_03d2d414(uVar1);
}


