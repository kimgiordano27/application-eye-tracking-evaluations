/*
FUNCTION_NAME: OVRPlugin$$get_foveatedRenderingLevel
ENTRY_POINT: 056725d4
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 97
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;paired_state_refs;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;paired_field_refs_with_eye_source;strong_foveation_hits_2;functionality_foveated_rendering
*/


uint OVRPlugin__get_foveatedRenderingLevel(void)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined4 unaff_w21;
  undefined8 *unaff_x22;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  
  uVar2 = FUN_0564a96c(unaff_w21);
  uVar1 = FUN_05696b6c(uVar2,*unaff_x22,*unaff_x23,*unaff_x24,0,0);
  if ((uVar1 & 1) != 0) {
    lVar3 = *(long *)(*(long *)PTR_DAT_06a0e888 + 0x20);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_02dcfd18();
    }
    lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 8);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_02dcfd18();
    }
    if (*(long *)(*(long *)(lVar3 + 0xb8) + 8) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    FUN_05686fc4();
  }
  return uVar1 & 1;
}


