/*
FUNCTION_NAME: System.Array.InternalEnumerator<RequestSceneHeader>$$get_Current
ENTRY_POINT: 03ff9744
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 80
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;telemetry_or_network_hits_2
*/


void System_Array_InternalEnumerator<RequestSceneHeader>__get_Current(void)

{
  long lVar1;
  long lVar2;
  long unaff_x19;
  undefined4 unaff_w20;
  long unaff_x21;
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
  
  lVar1 = thunk_FUN_03010710();
  if (lVar1 != 0) {
    *(long *)(unaff_x19 + 0x10) = lVar1;
    lVar1 = thunk_FUN_03010710();
    if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02fe9884();
    }
    thunk_FUN_03048534((long *)(unaff_x19 + 0x10),lVar1);
    if (*(long *)(unaff_x21 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02fe94e8();
    }
    unaff_x23 = FUN_05b126c0(*(long *)(unaff_x21 + 0x18),0);
    unaff_x24 = *(long *)(*(long *)(*(long *)(unaff_x22 + 0x20) + 0xc0) + 0x80);
    if ((*(byte *)(unaff_x24 + 0x135) & 1) == 0) {
      unaff_x24 = FUN_02feb2c4(unaff_x24);
    }
    if (unaff_x23 == 0) {
      lVar1 = 0;
    }
    else {
      lVar1 = thunk_FUN_03010710(unaff_x23,unaff_x24);
      if (lVar1 == 0) goto LAB_03ff97d8;
    }
    *(long *)(unaff_x19 + 0x18) = lVar1;
    lVar1 = *(long *)(*(long *)(*(long *)(unaff_x22 + 0x20) + 0xc0) + 0x80);
    if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_02feb2c4(lVar1);
    }
    if (unaff_x23 == 0) {
      lVar2 = 0;
    }
    else {
      lVar2 = thunk_FUN_03010710(unaff_x23,lVar1);
      if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02fe9884(unaff_x23,lVar1);
      }
    }
    thunk_FUN_03048534((long *)(unaff_x19 + 0x18),lVar2);
    *(undefined8 *)(unaff_x19 + 0x24) = *(undefined8 *)(unaff_x21 + 0x24);
    *(undefined4 *)(unaff_x19 + 0x20) = unaff_w20;
    return;
  }
LAB_03ff97d8:
                    /* WARNING: Subroutine does not return */
  FUN_02fe9884(unaff_x23,unaff_x24);
}


