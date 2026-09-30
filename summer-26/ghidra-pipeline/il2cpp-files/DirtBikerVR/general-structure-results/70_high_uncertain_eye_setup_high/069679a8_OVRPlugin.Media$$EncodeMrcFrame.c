/*
FUNCTION_NAME: OVRPlugin.Media$$EncodeMrcFrame
ENTRY_POINT: 069679a8
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_Media__EncodeMrcFrame(void)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  long unaff_x19;
  undefined8 uVar4;
  
  if (*(long *)(unaff_x19 + 0x38) != 0) {
    FUN_07cb2910(*(long *)(unaff_x19 + 0x38),0);
    if (*(int *)(unaff_x19 + 0x34) == 0) {
      uVar4 = *(undefined8 *)(unaff_x19 + 0x20);
      if (*(int *)(*(long *)PTR_DAT_08486738 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      uVar2 = FUN_07c9c218(uVar4,0,0);
      if ((uVar2 & 1) != 0) {
        if (*(long *)(unaff_x19 + 0x20) == 0) goto LAB_06967b14;
        FUN_07c9877c(*(long *)(unaff_x19 + 0x20),1,0);
        goto LAB_06967b00;
      }
    }
    if (*(int *)(*(long *)PTR_DAT_08486798 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    uVar2 = FUN_07c43018(0);
    puVar1 = PTR_DAT_08486738;
    if ((uVar2 & 1) == 0) {
LAB_06967b00:
      *(undefined1 *)(unaff_x19 + 0x48) = 1;
      return;
    }
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
         (lVar3 = UnityEngine_TextCore_Text_FontAsset__get_atlasWidth(*(long *)(unaff_x19 + 0x28),0)
         , lVar3 != 0)) {
        if (*(uint *)(lVar3 + 0x18) <= *(uint *)(unaff_x19 + 0x30)) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c8();
        }
        lVar3 = *(long *)(lVar3 + (long)(int)*(uint *)(unaff_x19 + 0x30) * 8 + 0x20);
        if (lVar3 != 0) {
          FUN_07c66588(lVar3,*(undefined8 *)PTR_DAT_084b6f78,0);
          FUN_07c69dfc(*(undefined4 *)(unaff_x19 + 0x10),*(undefined4 *)(unaff_x19 + 0x14),
                       *(undefined4 *)(unaff_x19 + 0x18),*(undefined4 *)(unaff_x19 + 0x1c),lVar3,
                       *(undefined8 *)PTR_DAT_084b6f80,0);
          goto LAB_06967b00;
        }
      }
    }
  }
LAB_06967b14:
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


