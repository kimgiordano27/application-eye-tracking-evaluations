/*
FUNCTION_NAME: OVRManager$$get_fixedFoveatedRenderingLevel
ENTRY_POINT: 02fc7a80
PROGRAM: vrfs-libil2cpp.so
SCORE: 119
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;paired_field_refs_with_eye_source;strong_foveation_hits_2;functionality_foveated_rendering
*/


void OVRManager__get_fixedFoveatedRenderingLevel(ulong param_1)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined1 in_ZR;
  ulong in_x9;
  long unaff_x19;
  int unaff_w20;
  long unaff_x21;
  long unaff_x23;
  ulong unaff_x24;
  
  while( true ) {
    if ((bool)in_ZR) {
      *(long *)(unaff_x19 + 0x10) = unaff_x21;
      thunk_FUN_01656ef8((long *)(unaff_x19 + 0x10));
      *(long *)(unaff_x19 + 0x18) = unaff_x23;
      thunk_FUN_01656ef8();
      return;
    }
    if (param_1 <= in_x9) break;
    iVar2 = *(int *)(unaff_x23 + in_x9 * 0x10 + 0x20);
    if (-1 < iVar2) {
      if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0160eeb4();
      }
      iVar4 = 0;
      if (unaff_w20 != 0) {
        iVar4 = iVar2 / unaff_w20;
      }
      uVar3 = iVar2 - iVar4 * unaff_w20;
      if (*(uint *)(unaff_x21 + 0x18) <= uVar3) break;
      lVar1 = unaff_x21 + (long)(int)uVar3 * 4;
      *(int *)(unaff_x23 + in_x9 * 0x10 + 0x24) = *(int *)(lVar1 + 0x20) + -1;
      *(int *)(lVar1 + 0x20) = (int)in_x9 + 1;
    }
    in_x9 = in_x9 + 1;
    in_ZR = in_x9 == unaff_x24;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0160eebc();
}


