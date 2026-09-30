/*
FUNCTION_NAME: OVRManager$$SetFoveatedRenderingLevel
ENTRY_POINT: 05305cf4
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 119
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_9;paired_field_refs_with_eye_source;strong_foveation_hits_2;functionality_foveated_rendering
*/


void OVRManager__SetFoveatedRenderingLevel
               (undefined1 param_1 [16],float param_2,float param_3,long param_4,ulong param_5)

{
  float *pfVar1;
  long lVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  if (*(long *)(param_4 + 0x38) != 0) {
    fVar4 = (float)FUN_0609fe3c(*(long *)(param_4 + 0x38),0);
    if (((param_5 & 1) == 0) || (360.0 <= fVar4)) {
      if (*(long *)(param_4 + 0x30) != 0) {
        FUN_060ed000(*(long *)(param_4 + 0x30),0,0);
        lVar2 = *(long *)(param_4 + 0x30);
        if (lVar2 != 0) {
          fVar4 = 360.0;
LAB_05305e70:
          *(float *)(lVar2 + 0x74) = fVar4;
          return;
        }
      }
    }
    else if (*(long *)(param_4 + 0x28) != 0) {
      fVar5 = (float)FUN_060ffbe4(*(long *)(param_4 + 0x28),0);
      if (*(long *)(param_4 + 0x20) != 0) {
        fVar7 = param_2;
        fVar8 = param_3;
        fVar6 = (float)FUN_060ffbe4(*(long *)(param_4 + 0x20),0);
        if (DAT_06bb42bf == '\0') {
          FUN_02f08768(PTR_DAT_067c8f80);
          DAT_06bb42bf = '\x01';
        }
        fVar5 = fVar5 - fVar6;
        param_2 = param_2 - fVar7;
        param_3 = param_3 - fVar8;
        if (*(int *)(*(long *)PTR_DAT_067c8f80 + 0xe4) == 0) {
          thunk_FUN_02f6670c();
        }
        fVar7 = SQRT(param_3 * param_3 + fVar5 * fVar5 + param_2 * param_2);
        if (fVar7 <= DAT_011b06e4) {
          if (DAT_06bb42c1 == '\0') {
            FUN_02f08768(PTR_DAT_067c8f78);
            DAT_06bb42c1 = '\x01';
          }
          pfVar1 = *(float **)(*(long *)PTR_DAT_067c8f78 + 0xb8);
          fVar5 = *pfVar1;
          param_2 = pfVar1[1];
          param_3 = pfVar1[2];
        }
        else {
          fVar5 = fVar5 / fVar7;
          param_2 = param_2 / fVar7;
          param_3 = param_3 / fVar7;
        }
        if (*(long *)(param_4 + 0x30) != 0) {
          FUN_060ed000(*(long *)(param_4 + 0x30),1,0);
          lVar3 = *(long *)(param_4 + 0x30);
          if (lVar3 != 0) {
            *(float *)(lVar3 + 0x40) = fVar5;
            *(float *)(lVar3 + 0x44) = param_2;
            *(float *)(lVar3 + 0x48) = param_3;
            lVar2 = *(long *)(param_4 + 0x30);
            *(undefined1 *)(lVar3 + 0x4c) = 1;
            if (lVar2 != 0) goto LAB_05305e70;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


