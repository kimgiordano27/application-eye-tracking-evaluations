/*
FUNCTION_NAME: OVRPlugin$$GetNodePose
ENTRY_POINT: 04f5ad70
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 109
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;functionality_gaze_interaction_hits_1
*/


void OVRPlugin__GetNodePose
               (long param_1,undefined1 param_2 [16],undefined4 param_3,undefined4 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *unaff_x19;
  long unaff_x20;
  undefined4 uVar4;
  long *in_stack_00000060;
  long *in_stack_00000068;
  
  if ((((param_1 == 0) || (in_stack_00000068 == (long *)0x0)) ||
      ((**(code **)(*in_stack_00000068 + 0x1a8))(), *(long *)(unaff_x20 + 0x20) == 0)) ||
     (in_stack_00000060 == (long *)0x0)) goto LAB_04f5af8c;
  (**(code **)(*in_stack_00000060 + 0x1a8))();
  lVar2 = *(long *)(unaff_x20 + 0x20);
  if ((lVar2 == 0) || (lVar1 = *(long *)(lVar2 + 0x10), lVar1 == 0)) goto LAB_04f5af8c;
  lVar2 = *(long *)(lVar2 + 0x18);
  if (*(char *)(lVar1 + 0x10) == '\0') {
    if (lVar2 == 0) goto LAB_04f5af8c;
    if (*(char *)(lVar2 + 0x10) != '\0') {
      lVar1 = *unaff_x19;
      if (lVar1 == 0) goto LAB_04f5af8c;
      *(undefined1 *)(lVar1 + 0x10) = 1;
      if (*(long *)(lVar1 + 0x18) == 0) goto LAB_04f5af8c;
      FUN_04f5b230(*(long *)(lVar1 + 0x18),*(undefined8 *)(lVar2 + 0x18),0);
      lVar2 = *unaff_x19;
      if ((lVar2 == 0) || (*(long *)(unaff_x20 + 0x20) == 0)) goto LAB_04f5af8c;
      lVar1 = *(long *)(*(long *)(unaff_x20 + 0x20) + 0x18);
      goto joined_r0x04f5aed0;
    }
  }
  else {
    if (lVar2 == 0) goto LAB_04f5af8c;
    lVar3 = *unaff_x19;
    if (*(char *)(lVar2 + 0x10) == '\0') {
      if (lVar3 == 0) goto LAB_04f5af8c;
      *(undefined1 *)(lVar3 + 0x10) = 1;
      if (*(long *)(lVar3 + 0x18) == 0) goto LAB_04f5af8c;
      FUN_04f5b230(*(long *)(lVar3 + 0x18),*(undefined8 *)(lVar1 + 0x18),0);
      lVar2 = *unaff_x19;
      if ((lVar2 == 0) || (*(long *)(unaff_x20 + 0x20) == 0)) goto LAB_04f5af8c;
      lVar1 = *(long *)(*(long *)(unaff_x20 + 0x20) + 0x10);
joined_r0x04f5aed0:
      if (lVar1 == 0) goto LAB_04f5af8c;
      FUN_04f0d164(lVar2 + 0x20,lVar1 + 0x20,0);
    }
    else {
      if (lVar3 == 0) goto LAB_04f5af8c;
      *(undefined1 *)(lVar3 + 0x10) = 1;
      if (*(long *)(lVar3 + 0x18) == 0) goto LAB_04f5af8c;
      FUN_04f5b230(*(long *)(lVar3 + 0x18),*(undefined8 *)(lVar1 + 0x18),0);
      lVar2 = *(long *)(unaff_x20 + 0x20);
      if ((((lVar2 == 0) || (*(long *)(lVar2 + 0x10) == 0)) || (*(long *)(lVar2 + 0x18) == 0)) ||
         (*unaff_x19 == 0)) goto LAB_04f5af8c;
      FUN_04f5b310(*(long *)(lVar2 + 0x10) + 0x18,*(long *)(lVar2 + 0x18) + 0x18,*unaff_x19 + 0x18);
      lVar2 = *(long *)(unaff_x20 + 0x20);
      if (((lVar2 == 0) || (*(long *)(lVar2 + 0x10) == 0)) ||
         ((*(long *)(lVar2 + 0x18) == 0 || (*unaff_x19 == 0)))) goto LAB_04f5af8c;
      FUN_04f0d094(*(long *)(lVar2 + 0x10) + 0x20,*(long *)(lVar2 + 0x18) + 0x20,*unaff_x19 + 0x20,0
                  );
    }
  }
  lVar2 = *(long *)(unaff_x20 + 0x20);
  if (((lVar2 != 0) && (lVar1 = *(long *)(lVar2 + 0x10), lVar1 != 0)) &&
     (lVar2 = *(long *)(lVar2 + 0x18), lVar2 != 0)) {
    lVar3 = *unaff_x19;
    if (*(int *)(*(long *)
                  UnityEngine_Rendering_RenderGraphModule_Util_RenderGraphUtils_BlitMaterialParameters_var
                + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    uVar4 = FUN_04f5b4e8(lVar1 + 0x3c,lVar2 + 0x3c);
    if (lVar3 != 0) {
      *(undefined4 *)(lVar3 + 0x3c) = uVar4;
      *(undefined4 *)(lVar3 + 0x40) = param_3;
      *(undefined4 *)(lVar3 + 0x44) = param_4;
      return;
    }
  }
LAB_04f5af8c:
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


