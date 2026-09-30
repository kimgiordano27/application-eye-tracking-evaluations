/*
FUNCTION_NAME: OVRPlugin.OVRP_0_1_2$$.cctor
ENTRY_POINT: 051e22a4
PROGRAM: hellodot-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_19;functionality_eye_api_context_without_clear_sink_hits_2
*/


bool OVRPlugin_OVRP_0_1_2___cctor(void)

{
  bool bVar1;
  int iVar2;
  ulong uVar3;
  long unaff_x19;
  long *unaff_x20;
  undefined8 uVar4;
  long unaff_x21;
  
  AkMIDIEventCallbackInfo__get_byProgramNum();
  *(undefined1 *)(unaff_x21 + 0x621) = 1;
  uVar4 = *(undefined8 *)(unaff_x19 + 0x80);
  if (*(int *)(*unaff_x20 + 0xe0) == 0) {
    thunk_FUN_02cd038c();
  }
  uVar3 = FUN_05ef739c(uVar4,0,0);
  if ((uVar3 & 1) == 0) {
    if (*(long *)(unaff_x19 + 0x80) == 0) goto LAB_051e2410;
    iVar2 = FUN_051e20e0(*(undefined4 *)(*(long *)(unaff_x19 + 0x80) + 0x1c),
                         *(undefined4 *)(unaff_x19 + 0x8c),1);
    if (iVar2 == 0) {
      if (*(long *)(unaff_x19 + 0x80) == 0) goto LAB_051e2410;
      iVar2 = FUN_051e20e0(*(undefined4 *)(*(long *)(unaff_x19 + 0x80) + 0x18),
                           *(undefined4 *)(unaff_x19 + 0x8c),2);
      if (iVar2 == 0) {
        if (*(long *)(unaff_x19 + 0x80) == 0) goto LAB_051e2410;
        iVar2 = FUN_051e20e0(*(undefined4 *)(*(long *)(unaff_x19 + 0x80) + 0x20),
                             *(undefined4 *)(unaff_x19 + 0x8c),8);
        if (iVar2 == 0) {
          if (*(long *)(unaff_x19 + 0x80) == 0) goto LAB_051e2410;
          iVar2 = FUN_051e20e0(*(undefined4 *)(*(long *)(unaff_x19 + 0x80) + 0x28),
                               *(undefined4 *)(unaff_x19 + 0x8c),3);
          if (iVar2 == 0) {
            if (*(long *)(unaff_x19 + 0x80) == 0) goto LAB_051e2410;
            iVar2 = FUN_051e20e0(*(undefined4 *)(*(long *)(unaff_x19 + 0x80) + 0x24),
                                 *(undefined4 *)(unaff_x19 + 0x8c),4);
            if (iVar2 == 0) {
              if (*(long *)(unaff_x19 + 0x80) == 0) goto LAB_051e2410;
              iVar2 = FUN_051e20e0(*(undefined4 *)(*(long *)(unaff_x19 + 0x80) + 0x2c),
                                   *(undefined4 *)(unaff_x19 + 0x8c),9);
              if (iVar2 == 0) {
                if (*(long *)(unaff_x19 + 0x80) == 0) goto LAB_051e2410;
                iVar2 = FUN_051e20e0(*(undefined4 *)(*(long *)(unaff_x19 + 0x80) + 0x34),
                                     *(undefined4 *)(unaff_x19 + 0x8c),5);
                if (iVar2 == 0) {
                  if (*(long *)(unaff_x19 + 0x80) == 0) goto LAB_051e2410;
                  iVar2 = FUN_051e20e0(*(undefined4 *)(*(long *)(unaff_x19 + 0x80) + 0x30),
                                       *(undefined4 *)(unaff_x19 + 0x8c),6);
                  if (iVar2 == 0) {
                    if (*(long *)(unaff_x19 + 0x80) == 0) {
LAB_051e2410:
                    /* WARNING: Subroutine does not return */
                      FUN_02ce7c7c();
                    }
                    iVar2 = FUN_051e20e0(*(undefined4 *)(*(long *)(unaff_x19 + 0x80) + 0x38),
                                         *(undefined4 *)(unaff_x19 + 0x8c),10);
                    if (iVar2 == 0) {
                      if (*(long *)(unaff_x19 + 0x80) != 0) {
                        iVar2 = FUN_051e20e0(*(undefined4 *)(*(long *)(unaff_x19 + 0x80) + 0x3c),
                                             *(undefined4 *)(unaff_x19 + 0x8c),7);
                        return iVar2 == 0;
                      }
                      goto LAB_051e2410;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  return bVar1;
}


