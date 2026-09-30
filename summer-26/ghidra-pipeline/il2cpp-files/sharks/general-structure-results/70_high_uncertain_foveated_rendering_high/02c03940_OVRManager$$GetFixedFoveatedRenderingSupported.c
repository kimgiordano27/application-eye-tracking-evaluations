/*
FUNCTION_NAME: OVRManager$$GetFixedFoveatedRenderingSupported
ENTRY_POINT: 02c03940
PROGRAM: sharks-libil2cpp.so
SCORE: 87
LABEL: uncertain_foveated_rendering_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;strong_foveation_hits_2;functionality_foveated_rendering
*/


void OVRManager__GetFixedFoveatedRenderingSupported(ulong param_1,undefined8 param_2)

{
  byte bVar1;
  long *plVar2;
  undefined8 uVar3;
  long unaff_x19;
  long *unaff_x21;
  
  if ((param_1 & 1) == 0) {
    FUN_017fc350(PTR_DAT_037f4790);
    FUN_017fc350(PTR_DAT_037f87b8);
    *(undefined1 *)(unaff_x19 + 0xdcb) = 1;
  }
  plVar2 = (long *)thunk_FUN_0187f3ac(param_2,0);
  uVar3 = FUN_017f82a0(param_2);
  if (*(int *)(*unaff_x21 + 0xe0) == 0) {
    thunk_FUN_01843fdc(*unaff_x21);
  }
  if (plVar2 != (long *)0x0) {
    bVar1 = *(byte *)(*(long *)PTR_DAT_037f87b8 + 0x130);
    if ((*(byte *)(*plVar2 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*plVar2 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_037f87b8)) {
                    /* WARNING: Subroutine does not return */
      FUN_017fc944(plVar2);
    }
  }
  FUN_02c0088c(plVar2,uVar3);
  return;
}


