/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.Slider$$set_EmptyBackgroundStyle
ENTRY_POINT: 063667fc
PROGRAM: Waifu-libil2cpp.so
SCORE: 86
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_6;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_Generic_Slider__set_EmptyBackgroundStyle(long param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 *puVar3;
  long unaff_x19;
  int unaff_w20;
  long unaff_x21;
  undefined8 uVar4;
  undefined1 unaff_w22;
  
  FUN_0335b6c8(param_1 + 0xe8,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_083ebbc0,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_083ebbd0,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_083ebbd8,1);
  DataMemoryBarrier(2,3);
  *(undefined1 *)(unaff_x21 + 0x912) = unaff_w22;
  if (*(long *)(unaff_x19 + 0xb0) != 0) {
    puVar3 = (undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0xb0) + 0x10) + (long)unaff_w20 * 0x38);
    uVar4 = *puVar3;
    iVar2 = *(int *)(puVar3 + 2) + -1;
    uVar1 = *(undefined4 *)((long)puVar3 + 0x24);
                    /* try { // try from 06366898 to 064668a3 has its CatchHandler @ 06366bd4 */
    if (iVar2 != 0) {
      *(int *)(puVar3 + 2) = iVar2;
      *(undefined4 *)(puVar3 + 4) = *(undefined4 *)(puVar3 + 4);
      puVar3[3] = puVar3[3];
      *(undefined4 *)(puVar3 + 6) = *(undefined4 *)(puVar3 + 6);
      puVar3[5] = puVar3[5];
      return;
    }
    if (*(long *)(unaff_x19 + 0xc0) != 0) {
      FUN_042a1b6c(*(long *)(unaff_x19 + 0xc0),*(undefined4 *)((long)puVar3 + 0x14),DAT_083eb0e8);
      if (*(long *)(unaff_x19 + 200) != 0) {
        FUN_042b3978(*(long *)(unaff_x19 + 200),uVar1,DAT_083eb438);
        if (*(long *)(unaff_x19 + 0xb0) != 0) {
          FUN_0438ebf0(*(long *)(unaff_x19 + 0xb0),unaff_w20,DAT_083ebbc0);
          if (*(long *)(unaff_x19 + 0xb8) != 0) {
            FUN_05d2ca4c(*(long *)(unaff_x19 + 0xb8),uVar4,DAT_083e22f0);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


