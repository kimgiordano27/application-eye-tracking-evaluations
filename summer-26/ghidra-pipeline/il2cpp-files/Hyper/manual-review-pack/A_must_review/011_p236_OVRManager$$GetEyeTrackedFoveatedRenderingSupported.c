/*
FUNCTION_NAME: OVRManager$$GetEyeTrackedFoveatedRenderingSupported
ENTRY_POINT: 09083258
PROGRAM: Hyper-libil2cpp.so
SCORE: 162
LABEL: attempted_dynamic_eye_tracked_foveation_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_4;validity_or_gating_hits_3;paired_field_refs_with_eye_source;strong_foveation_hits_2;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_foveated_rendering
*/


void OVRManager__GetEyeTrackedFoveatedRenderingSupported
               (undefined1 param_1 [16],undefined1 param_2 [16],float param_3)

{
  undefined *puVar1;
  long unaff_x19;
  float fVar2;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  float unaff_s11;
  undefined4 unaff_s12;
  undefined4 unaff_s13;
  float unaff_s15;
  undefined8 in_stack_00000008;
  undefined4 uStack0000000000000010;
  undefined8 uStack0000000000000014;
  undefined4 uStack000000000000001c;
  undefined4 uStack0000000000000020;
  undefined4 uStack0000000000000024;
  undefined8 in_stack_00000028;
  undefined4 uStack0000000000000078;
  undefined4 uStack000000000000007c;
  
  fVar2 = (float)FUN_09083310();
  puVar1 = PTR_DAT_0ac401c0;
  if (*(long *)(unaff_x19 + 0x28) != 0) {
    FUN_0a18a274(unaff_s15 + (unaff_s10 - fVar2),unaff_s8 + 0.0,unaff_s9 + (unaff_s11 - param_3),
                 *(long *)(unaff_x19 + 0x28),0);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_049a583c();
    }
    FUN_0a188688((undefined1 *)((long)&stack0x00000010 + 4),0);
    *(ulong *)(unaff_x19 + 0xa0) = CONCAT44(uStack0000000000000020,uStack000000000000001c);
    *(undefined8 *)(unaff_x19 + 0x98) = uStack0000000000000014;
    *(undefined8 *)(unaff_x19 + 0xac) = in_stack_00000028;
    *(ulong *)(unaff_x19 + 0xa4) = CONCAT44(uStack0000000000000024,uStack0000000000000020);
    if (*(long *)(unaff_x19 + 0x20) != 0) {
      FUN_0907fa94(unaff_s12,unaff_s13,*(long *)(unaff_x19 + 0x20),0);
      if (*(long *)(unaff_x19 + 0x20) != 0) {
        FUN_0907fa30(uStack000000000000007c,uStack0000000000000078,uStack0000000000000010,
                     in_stack_00000008._4_4_,*(long *)(unaff_x19 + 0x20),0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


