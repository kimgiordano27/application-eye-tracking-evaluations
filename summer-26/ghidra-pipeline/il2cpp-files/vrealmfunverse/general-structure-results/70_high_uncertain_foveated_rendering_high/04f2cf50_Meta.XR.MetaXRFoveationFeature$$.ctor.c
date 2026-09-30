/*
FUNCTION_NAME: Meta.XR.MetaXRFoveationFeature$$.ctor
ENTRY_POINT: 04f2cf50
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 83
LABEL: uncertain_foveated_rendering_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;validity_gate;foveation_rendering
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;strong_foveation_hits_2;functionality_foveated_rendering
*/


void Meta_XR_MetaXRFoveationFeature___ctor(void)

{
  undefined8 *puVar1;
  undefined1 in_w8;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  long unaff_x19;
  long unaff_x20;
  long *plVar5;
  
  *(undefined1 *)(unaff_x20 + 0x93a) = in_w8;
  if (*(char *)(unaff_x19 + 0x81) != '\0') {
    plVar5 = *(long **)(unaff_x19 + 0x58);
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    lVar2 = *plVar5;
    uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar3 != 0) {
      piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar4 + -2) == *(long *)System_Runtime_Remoting_IRemotingTypeInfo_var) {
          puVar1 = (undefined8 *)(lVar2 + (long)(*piVar4 + 0x11) * 0x10 + 0x138);
          goto LAB_04f2cfbc;
        }
        uVar3 = uVar3 - 1;
        piVar4 = piVar4 + 4;
      } while (uVar3 != 0);
    }
    puVar1 = (undefined8 *)
             FUN_02b7654c(plVar5,*(long *)System_Runtime_Remoting_IRemotingTypeInfo_var,0x11);
LAB_04f2cfbc:
    uVar3 = (*(code *)*puVar1)(plVar5,puVar1[1]);
    if ((uVar3 & 1) != 0) {
      FUN_04f2d008();
      FUN_04f2d064();
      FUN_04f2d354();
      return;
    }
  }
  FUN_04f2d008();
  return;
}


