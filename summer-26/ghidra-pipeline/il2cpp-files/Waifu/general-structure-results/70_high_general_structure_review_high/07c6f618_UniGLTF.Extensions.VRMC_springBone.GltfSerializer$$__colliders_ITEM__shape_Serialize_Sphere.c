/*
FUNCTION_NAME: UniGLTF.Extensions.VRMC_springBone.GltfSerializer$$__colliders_ITEM__shape_Serialize_Sphere
ENTRY_POINT: 07c6f618
PROGRAM: Waifu-libil2cpp.so
SCORE: 85
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_6;ray_or_cast_sink_hits_2;telemetry_or_network_hits_4;frame_or_lifecycle_behavior
*/


void UniGLTF_Extensions_VRMC_springBone_GltfSerializer____colliders_ITEM__shape_Serialize_Sphere
               (void)

{
  int iVar1;
  long unaff_x19;
  int unaff_w20;
  int unaff_w21;
  undefined4 uVar2;
  
  if (unaff_w21 < 0) {
    iVar1 = 0;
LAB_07c6f638:
    *(int *)(unaff_x19 + 0x194) = iVar1;
  }
  else {
    if (*(long *)(unaff_x19 + 0x180) == 0) goto LAB_07c6f6b0;
    iVar1 = *(int *)(*(long *)(unaff_x19 + 0x180) + 0x10);
    if (iVar1 < unaff_w21) goto LAB_07c6f638;
  }
  iVar1 = FUN_07c6e2ec();
  if (iVar1 != unaff_w20) {
    *(int *)(unaff_x19 + 0x198) = unaff_w20;
    if (unaff_w20 < 0) {
      *(undefined4 *)(unaff_x19 + 0x198) = 0;
    }
    else {
      if (*(long *)(unaff_x19 + 0x180) == 0) {
LAB_07c6f6b0:
                    /* WARNING: Subroutine does not return */
        FUN_033d1d3c();
      }
      iVar1 = *(int *)(*(long *)(unaff_x19 + 0x180) + 0x10);
      if (iVar1 < unaff_w20) {
        *(int *)(unaff_x19 + 0x198) = iVar1;
      }
    }
  }
  if (DAT_086ef6a8 == (code *)0x0) {
    DAT_086ef6a8 = (code *)FUN_033d1b68("UnityEngine.Time::get_unscaledTime()");
  }
  uVar2 = (*DAT_086ef6a8)();
  *(undefined4 *)(unaff_x19 + 0x1e0) = uVar2;
  FUN_07c6d0ac();
  return;
}


