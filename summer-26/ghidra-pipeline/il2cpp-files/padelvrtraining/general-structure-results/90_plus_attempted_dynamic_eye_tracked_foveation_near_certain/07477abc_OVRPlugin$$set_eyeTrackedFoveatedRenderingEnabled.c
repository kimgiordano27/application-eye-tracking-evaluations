/*
FUNCTION_NAME: OVRPlugin$$set_eyeTrackedFoveatedRenderingEnabled
ENTRY_POINT: 07477abc
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 153
LABEL: attempted_dynamic_eye_tracked_foveation_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_4;validity_or_gating_hits_4;strong_foveation_hits_2;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_foveated_rendering
*/


void OVRPlugin__set_eyeTrackedFoveatedRenderingEnabled
               (undefined1 param_1 [16],float param_2,float param_3,long param_4)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  if ((param_4 == 0) || (lVar1 = FUN_08a20670(param_4,0), lVar1 == 0)) goto LAB_07477bb0;
  FUN_08a26304(lVar1,*(undefined8 *)(unaff_x19 + 0x58),0);
  if (*(char *)(unaff_x19 + 0x60) == '\0') {
    if ((*(long *)(unaff_x19 + 0x48) == 0) ||
       (lVar1 = FUN_08a4d98c(*(long *)(unaff_x19 + 0x48),0), unaff_x20 == 0)) goto LAB_07477bb0;
    fVar3 = *(float *)(unaff_x19 + 100);
    fVar4 = *(float *)(unaff_x19 + 0x68);
    fVar5 = *(float *)(unaff_x19 + 0x6c);
    fVar2 = (float)FUN_07476a78();
    if (DAT_098362cc == '\0') {
      FUN_03d2d2b0(PTR_DAT_091a1008);
      DAT_098362cc = '\x01';
    }
    if (*(int *)(*(long *)PTR_DAT_091a1008 + 0xe0) == 0) {
      thunk_FUN_03db619c();
    }
    if (lVar1 == 0) goto LAB_07477bb0;
    fVar2 = SQRT(param_3 * param_3 + fVar2 * fVar2 + param_2 * param_2);
    FUN_08a5debc(fVar3 * fVar2,fVar4 * fVar2,fVar5 * fVar2,lVar1,0);
  }
  if (*(long *)(unaff_x19 + 0x48) != 0) {
    FUN_08a200c4(*(long *)(unaff_x19 + 0x48),1,0);
    return;
  }
LAB_07477bb0:
                    /* WARNING: Subroutine does not return */
  FUN_03d2d548();
}


