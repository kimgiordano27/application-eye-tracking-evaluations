/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Contains<OVRTask.Callback<OVRSceneManager.Metrics>>
ENTRY_POINT: 03799e24
PROGRAM: Waifu-libil2cpp.so
SCORE: 86
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;data_collection;frame_behavior
EVIDENCE: validity_or_gating_hits_13;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;strong_file_logging_hits_3;frame_or_lifecycle_behavior
*/


/* WARNING: Removing unreachable block (ram,0x03799f88) */

void System_Array__InternalArray__ICollection_Contains<OVRTask_Callback<OVRSceneManager_Metrics>>
               (void)

{
  int in_w8;
  long unaff_x19;
  long lVar1;
  float fVar2;
  float fVar3;
  float unaff_s8;
  float fVar4;
  
  if (in_w8 != 0) {
    fVar4 = *(float *)(unaff_x19 + 0x24);
    fVar2 = unaff_s8;
    if (*(char *)(unaff_x19 + 0x18) != '\0') {
      fVar2 = fmodf(unaff_s8,fVar4);
    }
    fVar2 = fVar2 / fVar4;
    fVar4 = 0.0;
    if ((0.0 <= fVar2) && (fVar4 = fVar2, 1.0 < fVar2)) {
      fVar4 = 1.0;
    }
    if (*(char *)(unaff_x19 + 0x30) == '\0') {
      lVar1 = *(long *)(unaff_x19 + 0x28);
      if (lVar1 == 0) goto LAB_0379a1ec;
      if (DAT_086ed278 == (code *)0x0) {
        DAT_086ed278 = (code *)FUN_033d1b68("UnityEngine.AnimationCurve::Evaluate(System.Single)");
      }
      fVar2 = (float)(*DAT_086ed278)(fVar4,lVar1);
    }
    else {
      if (DAT_086ef688 == (code *)0x0) {
        DAT_086ef688 = (code *)FUN_033d1b68("UnityEngine.Time::get_time()");
      }
      fVar2 = (float)(*DAT_086ef688)();
      fVar4 = *(float *)(unaff_x19 + 0x34);
      if (DAT_086eef88 == (code *)0x0) {
        DAT_086eef88 = (code *)FUN_033d1b68(
                                           "UnityEngine.Mathf::PerlinNoise(System.Single,System.Single)"
                                           );
      }
      fVar2 = (float)(*DAT_086eef88)(fVar2 * fVar4,0);
    }
    lVar1 = *(long *)(unaff_x19 + 0x10);
    if (lVar1 == 0) goto LAB_0379a1ec;
    fVar3 = *(float *)(unaff_x19 + 0x1c);
    fVar4 = *(float *)(unaff_x19 + 0x20);
    if (DAT_086ee400 == (code *)0x0) {
      DAT_086ee400 = (code *)FUN_033d1b68("UnityEngine.Light::set_intensity(System.Single)");
    }
    (*DAT_086ee400)(fVar4 + fVar2 * (fVar3 - fVar4),lVar1);
    if ((*(char *)(unaff_x19 + 0x38) != '\0') && (unaff_s8 < *(float *)(unaff_x19 + 0x3c))) {
      lVar1 = *(long *)(unaff_x19 + 0x10);
      if (lVar1 == 0) goto LAB_0379a1ec;
      if (DAT_086ee3f8 == (code *)0x0) {
        DAT_086ee3f8 = (code *)FUN_033d1b68("UnityEngine.Light::get_intensity()");
      }
      fVar4 = (float)(*DAT_086ee3f8)(lVar1);
      fVar2 = unaff_s8 / *(float *)(unaff_x19 + 0x3c);
      if (fVar2 < 0.0) {
        fVar2 = 0.0;
      }
      if (DAT_086ee400 == (code *)0x0) {
        DAT_086ee400 = (code *)FUN_033d1b68("UnityEngine.Light::set_intensity(System.Single)");
      }
      (*DAT_086ee400)(fVar4 * fVar2,lVar1);
    }
  }
  if (*(char *)(unaff_x19 + 0x48) != '\0') {
    fVar4 = *(float *)(unaff_x19 + 0x54);
    fVar2 = unaff_s8;
    if (*(char *)(unaff_x19 + 0x18) != '\0') {
      fVar2 = fmodf(unaff_s8,fVar4);
    }
    fVar2 = fVar2 / fVar4;
    fVar4 = 0.0;
    if ((0.0 <= fVar2) && (fVar4 = fVar2, 1.0 < fVar2)) {
      fVar4 = 1.0;
    }
    if (*(char *)(unaff_x19 + 0x60) == '\0') {
      lVar1 = *(long *)(unaff_x19 + 0x58);
      if (lVar1 == 0) goto LAB_0379a1ec;
      if (DAT_086ed278 == (code *)0x0) {
        DAT_086ed278 = (code *)FUN_033d1b68("UnityEngine.AnimationCurve::Evaluate(System.Single)");
      }
      fVar2 = (float)(*DAT_086ed278)(fVar4,lVar1);
    }
    else {
      if (DAT_086ef688 == (code *)0x0) {
        DAT_086ef688 = (code *)FUN_033d1b68("UnityEngine.Time::get_time()");
      }
      fVar2 = (float)(*DAT_086ef688)();
      fVar4 = *(float *)(unaff_x19 + 100);
      if (DAT_086eef88 == (code *)0x0) {
        DAT_086eef88 = (code *)FUN_033d1b68(
                                           "UnityEngine.Mathf::PerlinNoise(System.Single,System.Single)"
                                           );
      }
      fVar2 = (float)(*DAT_086eef88)(fVar2 * fVar4,0x41200000);
    }
    lVar1 = *(long *)(unaff_x19 + 0x10);
    if (lVar1 == 0) goto LAB_0379a1ec;
    fVar3 = *(float *)(unaff_x19 + 0x4c);
    fVar4 = *(float *)(unaff_x19 + 0x50);
    if (DAT_086ee460 == (code *)0x0) {
      DAT_086ee460 = (code *)FUN_033d1b68("UnityEngine.Light::set_range(System.Single)");
    }
    (*DAT_086ee460)(fVar4 + fVar2 * (fVar3 - fVar4),lVar1);
  }
  if (*(char *)(unaff_x19 + 0x68) == '\0') {
    return;
  }
  fVar2 = *(float *)(unaff_x19 + 0x78);
  if (*(char *)(unaff_x19 + 0x18) != '\0') {
    unaff_s8 = fmodf(unaff_s8,fVar2);
  }
  fVar2 = unaff_s8 / fVar2;
  fVar4 = 0.0;
  if ((0.0 <= fVar2) && (fVar4 = fVar2, 1.0 < fVar2)) {
    fVar4 = 1.0;
  }
  if (*(char *)(unaff_x19 + 0x88) == '\0') {
    lVar1 = *(long *)(unaff_x19 + 0x80);
    if (lVar1 == 0) goto LAB_0379a1ec;
    if (DAT_086ed278 == (code *)0x0) {
      DAT_086ed278 = (code *)FUN_033d1b68("UnityEngine.AnimationCurve::Evaluate(System.Single)");
    }
    (*DAT_086ed278)(fVar4,lVar1);
  }
  else {
    if (DAT_086ef688 == (code *)0x0) {
      DAT_086ef688 = (code *)FUN_033d1b68("UnityEngine.Time::get_time()");
    }
    fVar2 = (float)(*DAT_086ef688)();
    fVar4 = *(float *)(unaff_x19 + 0x8c);
    if (DAT_086eef88 == (code *)0x0) {
      DAT_086eef88 = (code *)FUN_033d1b68(
                                         "UnityEngine.Mathf::PerlinNoise(System.Single,System.Single)"
                                         );
    }
    (*DAT_086eef88)(fVar2 * fVar4,0);
  }
  if (*(long *)(unaff_x19 + 0x70) != 0) {
    lVar1 = *(long *)(unaff_x19 + 0x10);
    FUN_079fbccc(*(long *)(unaff_x19 + 0x70),0);
    if (lVar1 != 0) {
      FUN_079e54f4(lVar1,0);
      return;
    }
  }
LAB_0379a1ec:
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


