/*
FUNCTION_NAME: OVRPlugin.OVRP_1_38_0$$ovrp_Media_SetMrcFrameImageFlipped
ENTRY_POINT: 069677e4
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_38_0__ovrp_Media_SetMrcFrameImageFlipped(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  long unaff_x19;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(unaff_x19 + 0x20);
  if (*(int *)(**(long **)(param_1 + 0x738) + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  uVar2 = FUN_07c9c218(uVar4,0,0);
  if ((uVar2 & 1) == 0) {
    if (*(int *)(*(long *)PTR_DAT_08486798 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    uVar2 = FUN_07c43018(0);
    puVar1 = PTR_DAT_08486738;
    if ((uVar2 & 1) != 0) {
      uVar4 = *(undefined8 *)(unaff_x19 + 0x28);
      if (*(int *)(*(long *)PTR_DAT_08486738 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      uVar2 = FUN_07c9e200(uVar4,0,0);
      if ((uVar2 & 1) != 0) {
        return;
      }
      if (*(long *)(unaff_x19 + 0x28) != 0) {
        uVar4 = thunk_FUN_07c6140c(*(long *)(unaff_x19 + 0x28),0);
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_03ae8be4(*(long *)puVar1);
        }
        uVar2 = FUN_07c9e200(uVar4,0,0);
        if ((uVar2 & 1) != 0) {
          return;
        }
        if ((*(long *)(unaff_x19 + 0x28) != 0) &&
           (lVar3 = UnityEngine_TextCore_Text_FontAsset__get_atlasWidth
                              (*(long *)(unaff_x19 + 0x28),0), puVar1 = PTR_DAT_084b6f78, lVar3 != 0
           )) {
          if (*(uint *)(lVar3 + 0x18) <= *(uint *)(unaff_x19 + 0x30)) {
LAB_0696794c:
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c8();
          }
          lVar3 = *(long *)(lVar3 + (long)(int)*(uint *)(unaff_x19 + 0x30) * 8 + 0x20);
          if (lVar3 != 0) {
            FUN_07c6678c(lVar3,*(undefined8 *)PTR_DAT_084b6f78,0);
            if ((*(long *)(unaff_x19 + 0x28) != 0) &&
               (lVar3 = UnityEngine_TextCore_Text_FontAsset__get_atlasWidth
                                  (*(long *)(unaff_x19 + 0x28),0), lVar3 != 0)) {
              if (*(uint *)(lVar3 + 0x18) <= *(uint *)(unaff_x19 + 0x30)) goto LAB_0696794c;
              lVar3 = *(long *)(lVar3 + (long)(int)*(uint *)(unaff_x19 + 0x30) * 8 + 0x20);
              if (lVar3 != 0) {
                FUN_07c6678c(lVar3,*(undefined8 *)puVar1,0);
                goto LAB_06967938;
              }
            }
          }
        }
      }
      goto LAB_06967948;
    }
  }
  else {
    if (*(long *)(unaff_x19 + 0x20) == 0) {
LAB_06967948:
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    FUN_07c9877c(*(long *)(unaff_x19 + 0x20),0,0);
  }
LAB_06967938:
  *(undefined1 *)(unaff_x19 + 0x48) = 0;
  return;
}


