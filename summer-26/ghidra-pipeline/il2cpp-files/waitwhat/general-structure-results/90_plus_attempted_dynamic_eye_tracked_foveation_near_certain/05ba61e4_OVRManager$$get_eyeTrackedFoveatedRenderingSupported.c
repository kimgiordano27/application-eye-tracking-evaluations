/*
FUNCTION_NAME: OVRManager$$get_eyeTrackedFoveatedRenderingSupported
ENTRY_POINT: 05ba61e4
PROGRAM: waitwhat-libil2cpp.so
SCORE: 150
LABEL: attempted_dynamic_eye_tracked_foveation_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_4;validity_or_gating_hits_3;strong_foveation_hits_2;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_foveated_rendering
*/


void OVRManager__get_eyeTrackedFoveatedRenderingSupported(long param_1,ulong param_2)

{
  undefined *puVar1;
  char cVar2;
  byte bVar3;
  ulong uVar4;
  long lVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  uVar4 = FUN_05ba5738(0,param_1,param_1 + 0x50);
  if ((uVar4 & 1) == 0) {
    bVar3 = 0;
  }
  else {
    FUN_06a63564(param_1 + 0x50,0);
    bVar3 = FUN_05ba5938(param_1);
  }
  if (param_1 != 0) {
    *(byte *)(param_1 + 0x7c) = bVar3 & 1;
    cVar2 = DAT_075457aa;
    if (((bVar3 & 1) != 0) || ((param_2 & 1) == 0)) {
      return;
    }
    *(undefined1 *)(param_1 + 0x7c) = 1;
    if (cVar2 == '\0') {
      FUN_03188a78(PTR_DAT_070c1a80);
      DAT_075457aa = '\x01';
    }
    puVar1 = PTR_DAT_070c1a80;
    lVar5 = *(long *)(*(long *)PTR_DAT_070c1a80 + 0xb8);
    fVar8 = *(float *)(lVar5 + 0x1c);
    fVar9 = *(float *)(lVar5 + 0x20);
    FUN_06a63570(*(undefined4 *)(lVar5 + 0x18),fVar8,fVar9,param_1 + 0x50,0);
    if ((*(long *)(param_1 + 0x20) != 0) &&
       (lVar5 = FUN_069d3a80(*(long *)(param_1 + 0x20),0), lVar5 != 0)) {
      fVar6 = (float)FUN_069e6fbc(lVar5,0);
      if (DAT_07547004 == '\0') {
        FUN_03188a78(PTR_DAT_070c1a80);
        DAT_07547004 = '\x01';
      }
      if (*(long *)(param_1 + 0x20) != 0) {
        lVar5 = *(long *)(*(long *)puVar1 + 0xb8);
        fVar11 = *(float *)(lVar5 + 0x28);
        fVar10 = *(float *)(lVar5 + 0x2c);
        fVar12 = *(float *)(lVar5 + 0x24);
        fVar7 = (float)FUN_06a577c0(*(long *)(param_1 + 0x20),0);
        fVar7 = fVar7 * 0.5 + *(float *)(param_1 + 0x28);
        FUN_06a63558(fVar6 + fVar12 * fVar7,fVar8 + fVar11 * fVar7,fVar9 + fVar10 * fVar7,
                     param_1 + 0x50,0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


