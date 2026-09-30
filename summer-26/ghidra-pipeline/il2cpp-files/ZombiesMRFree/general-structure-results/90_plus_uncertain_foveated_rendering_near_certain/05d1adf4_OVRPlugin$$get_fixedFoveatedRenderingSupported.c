/*
FUNCTION_NAME: OVRPlugin$$get_fixedFoveatedRenderingSupported
ENTRY_POINT: 05d1adf4
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 121
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_6;paired_field_refs_with_eye_source;strong_foveation_hits_2;functionality_foveated_rendering
*/


void OVRPlugin__get_fixedFoveatedRenderingSupported(long param_1)

{
  float fVar1;
  undefined1 in_CY;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long *unaff_x19;
  long unaff_x20;
  ulong unaff_x21;
  float fVar6;
  float unaff_s8;
  
  while( true ) {
    if ((bool)in_CY) {
                    /* WARNING: Subroutine does not return */
      FUN_02fe94f0();
    }
    fVar6 = *(float *)(param_1 + unaff_x21 * 4 + 0x20);
    fVar1 = unaff_s8;
    if (fVar6 <= unaff_s8) {
      fVar1 = fVar6;
    }
    if (*(long *)(unaff_x20 + 0x138) == 0) break;
    uVar2 = FUN_05d18ce8();
    if (*(long *)(unaff_x20 + 0x140) == 0) break;
    uVar3 = FUN_05d18ce8(*(long *)(unaff_x20 + 0x140));
    if ((((*(long *)(unaff_x20 + 0x170) == 0) ||
         (lVar5 = *(long *)(*(long *)(unaff_x20 + 0x170) + 0x18), lVar5 == 0)) ||
        (*(char *)(lVar5 + 0x10) == '\0')) || (*(long *)(lVar5 + 0x18) == 0)) break;
    uVar4 = FUN_05d18ce8();
    FUN_05d1aec0(fVar1,uVar4,uVar2,uVar3,uVar4,unaff_x21 & 0xffffffff);
    unaff_x21 = unaff_x21 + 1;
    if (unaff_x21 == 5) {
      return;
    }
    param_1 = *unaff_x19;
    if (param_1 == 0) break;
    in_CY = *(uint *)(param_1 + 0x18) <= unaff_x21;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}


