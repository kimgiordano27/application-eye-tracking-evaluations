/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_CopyTo<OVRPlugin.Qpl.Annotation.Builder.Entry>
ENTRY_POINT: 03b6d114
PROGRAM: vrfs-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array__InternalArray__ICollection_CopyTo<OVRPlugin_Qpl_Annotation_Builder_Entry>
               (undefined8 param_1,float param_2)

{
  ulong uVar1;
  float *pfVar2;
  long unaff_x19;
  ulong unaff_x20;
  undefined8 uVar3;
  long *unaff_x21;
  long unaff_x22;
  long unaff_x23;
  long *unaff_x24;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined8 in_d6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  fVar6 = *(float *)(unaff_x19 + 0xa8);
  FUN_03b6dcf4(in_d6,param_2,fVar6,*(undefined4 *)(unaff_x19 + 0xe4),
               *(undefined4 *)(unaff_x19 + 0xe8),*(undefined4 *)(unaff_x19 + 0xec),param_1);
  fVar7 = (float)param_1;
  if ((unaff_x20 & 1) != 0) {
    if (*(long *)(unaff_x19 + 0xb8) == 0) goto LAB_03b6d380;
    FUN_049ac9e8(*(long *)(unaff_x19 + 0xb8),0);
    fVar4 = (float)FUN_03b8bbb0(0);
    if (*(long *)(unaff_x19 + 0xb8) == 0) goto LAB_03b6d380;
    fVar9 = param_2;
    fVar8 = fVar6;
    fVar5 = (float)FUN_049abdc8(*(long *)(unaff_x19 + 0xb8),0);
    if (*(long *)(unaff_x19 + 0xb8) == 0) goto LAB_03b6d380;
    param_2 = fVar7 * (param_2 - fVar9);
    fVar6 = fVar7 * (fVar6 - fVar8);
    FUN_049ad1bc(fVar7 * (fVar4 - fVar5),param_2,fVar6,*(long *)(unaff_x19 + 0xb8),2,0);
  }
  uVar3 = *(undefined8 *)(unaff_x19 + 0xf8);
  if (*(int *)(*(long *)PTR_DAT_06d9fd78 + 0xe0) == 0) {
    thunk_FUN_016466fc();
  }
  uVar1 = FUN_051d2ac0(uVar3,0,0);
  if ((uVar1 & 1) != 0) {
    if (*(char *)(unaff_x23 + 0x13e) == '\0') {
      thunk_FUN_0159f088(PTR_DAT_06e50440);
      *(undefined1 *)(unaff_x23 + 0x13e) = 1;
    }
    if (*(long *)(unaff_x19 + 0xf0) == 0) {
LAB_03b6d380:
                    /* WARNING: Subroutine does not return */
      FUN_0160eeb4();
    }
    fVar5 = *(float *)(unaff_x19 + 0x338);
    fVar8 = *(float *)(unaff_x19 + 0x340);
    fVar9 = *(float *)(unaff_x19 + 0x33c);
    fVar4 = (float)FUN_049ac524(*(long *)(unaff_x19 + 0xf0),0);
    if (*(char *)(unaff_x22 + 0x8a4) == '\0') {
      thunk_FUN_0159f088(PTR_DAT_06db0af8);
      *(undefined1 *)(unaff_x22 + 0x8a4) = 1;
    }
    fVar5 = fVar5 - fVar4;
    if (*(int *)(*unaff_x24 + 0xe0) == 0) {
      thunk_FUN_016466fc();
    }
    if ((uint)ABS(fVar5) < 0x7f800001) {
      fVar9 = fVar9 - param_2;
      fVar8 = fVar8 - fVar6;
    }
    else {
      if (*(char *)(unaff_x23 + 0x13e) == '\0') {
        thunk_FUN_0159f088(PTR_DAT_06e50440);
        *(undefined1 *)(unaff_x23 + 0x13e) = 1;
      }
      pfVar2 = *(float **)(*unaff_x21 + 0xb8);
      fVar5 = *pfVar2;
      fVar9 = pfVar2[1];
      fVar8 = pfVar2[2];
    }
    FUN_03b6dcf4(fVar5,fVar9,fVar8,*(undefined4 *)(unaff_x19 + 800),
                 *(undefined4 *)(unaff_x19 + 0x324),*(undefined4 *)(unaff_x19 + 0x328),
                 fVar7 * *(float *)(unaff_x19 + 0x108));
  }
  return;
}


