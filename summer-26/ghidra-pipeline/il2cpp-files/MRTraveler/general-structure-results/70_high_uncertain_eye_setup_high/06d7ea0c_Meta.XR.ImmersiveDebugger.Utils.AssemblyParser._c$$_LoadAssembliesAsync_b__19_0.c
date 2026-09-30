/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Utils.AssemblyParser.<>c$$<LoadAssembliesAsync>b__19_0
ENTRY_POINT: 06d7ea0c
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_4;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Utils_AssemblyParser_<>c__<LoadAssembliesAsync>b__19_0
               (ulong param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  int unaff_w20;
  long unaff_x21;
  undefined8 uVar3;
  long *unaff_x22;
  undefined4 uVar4;
  undefined4 uVar5;
  
  if ((param_1 & 1) == 0) {
    FUN_03c8f898(PTR_DAT_08e68f00);
    *(undefined1 *)(unaff_x21 + 0x9ed) = 1;
  }
  uVar3 = *(undefined8 *)(param_2 + 0x68);
  if (*(int *)(*unaff_x22 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
  }
  uVar1 = FUN_085dfaac(uVar3,0,0);
  if ((uVar1 & 1) == 0) {
    uVar3 = *(undefined8 *)(param_2 + 0x70);
    if (*(int *)(*unaff_x22 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
    }
    uVar1 = FUN_085dfaac(uVar3,0,0);
    if ((uVar1 & 1) == 0) {
      FUN_06d7f16c(param_2,unaff_w20);
      if (*(long *)(param_2 + 0x68) != 0) {
        FUN_085eb198(*(long *)(param_2 + 0x68),0);
        FUN_06d7f198(param_2);
        uVar4 = *(undefined4 *)(param_2 + 0x80);
        uVar5 = 0x3f800000;
        FUN_085ab508(uVar4,uVar4,uVar4,0x3f800000,0);
        if (*(long *)(param_2 + 0x70) != 0) {
          FUN_085eb198(*(long *)(param_2 + 0x70),0);
          FUN_085ab780(0);
          if (unaff_w20 != 0) {
            uVar5 = 0;
          }
          FUN_085ab508(uVar5,uVar5,0x3f800000,0x3f800000,0);
          if ((*(long *)(param_2 + 0x70) != 0) &&
             (lVar2 = FUN_085dbb5c(*(long *)(param_2 + 0x70),0), lVar2 != 0)) {
            FUN_085eb198(lVar2,0);
            FUN_085ab780(0);
            return;
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
  }
  return;
}


