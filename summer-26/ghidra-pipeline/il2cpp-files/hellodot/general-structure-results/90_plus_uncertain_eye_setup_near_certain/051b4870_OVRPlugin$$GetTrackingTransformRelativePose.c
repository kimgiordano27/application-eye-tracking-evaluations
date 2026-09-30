/*
FUNCTION_NAME: OVRPlugin$$GetTrackingTransformRelativePose
ENTRY_POINT: 051b4870
PROGRAM: hellodot-libil2cpp.so
SCORE: 109
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetTrackingTransformRelativePose(long param_1)

{
  float fVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long *unaff_x19;
  long unaff_x20;
  ulong unaff_x21;
  undefined8 unaff_x22;
  float fVar5;
  float unaff_s8;
  ulong unaff_d9;
  
  do {
    uVar2 = FUN_051a89a8(param_1);
    if ((((*(long *)(unaff_x20 + 0x170) == 0) ||
         (lVar4 = *(long *)(*(long *)(unaff_x20 + 0x170) + 0x18), lVar4 == 0)) ||
        (*(char *)(lVar4 + 0x10) == '\0')) || (*(long *)(lVar4 + 0x18) == 0)) break;
    uVar3 = FUN_051a89a8();
    FUN_051b490c(unaff_d9,uVar3,unaff_x22,uVar2,uVar3,unaff_x21 & 0xffffffff);
    unaff_x21 = unaff_x21 + 1;
    if (unaff_x21 == 5) {
      return;
    }
    lVar4 = *unaff_x19;
    if (lVar4 == 0) break;
    if (*(uint *)(lVar4 + 0x18) <= unaff_x21) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c84();
    }
    fVar5 = *(float *)(lVar4 + unaff_x21 * 4 + 0x20);
    fVar1 = unaff_s8;
    if (fVar5 <= unaff_s8) {
      fVar1 = fVar5;
    }
    unaff_d9 = (ulong)(uint)fVar1;
    if (*(long *)(unaff_x20 + 0x138) == 0) break;
    unaff_x22 = FUN_051a89a8();
    param_1 = *(long *)(unaff_x20 + 0x140);
  } while (param_1 != 0);
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c7c();
}


