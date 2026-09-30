/*
FUNCTION_NAME: UniGLTF.GltfSerializer$$Serialize_gltf_nodes__rotation
ENTRY_POINT: 071875fc
PROGRAM: Waifu-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_4
*/


void UniGLTF_GltfSerializer__Serialize_gltf_nodes__rotation(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  long unaff_x19;
  undefined8 unaff_x21;
  long unaff_x22;
  long unaff_x23;
  
  do {
    uVar2 = FUN_0666e380(unaff_x21,param_2);
    if ((uVar2 & 1) == 0) {
      *(uint *)(unaff_x19 + 0x28) = *(uint *)(unaff_x19 + 0x28) | 0x100;
    }
    do {
      do {
        uVar2 = FUN_0718a25c();
        if ((uVar2 & 1) == 0) {
          return;
        }
        lVar1 = FUN_0718a0bc();
        if (lVar1 == 0) {
LAB_07187634:
                    /* WARNING: Subroutine does not return */
          FUN_033d1d3c();
        }
      } while (*(char *)(lVar1 + 0x20) == '\0');
      if (*(long *)(lVar1 + 0x10) == 0) goto LAB_07187634;
      unaff_x21 = *(undefined8 *)(*(long *)(lVar1 + 0x10) + 0x10);
      uVar2 = FUN_0666e380(unaff_x21,*(undefined8 *)(unaff_x22 + 0x7f0));
    } while ((uVar2 & 1) != 0);
    param_2 = *(undefined8 *)(unaff_x23 + 0x808);
  } while( true );
}


