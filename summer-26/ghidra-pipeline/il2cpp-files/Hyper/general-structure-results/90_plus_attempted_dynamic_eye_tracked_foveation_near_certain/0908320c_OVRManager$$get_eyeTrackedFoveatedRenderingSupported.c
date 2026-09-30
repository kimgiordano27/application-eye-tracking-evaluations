/*
FUNCTION_NAME: OVRManager$$get_eyeTrackedFoveatedRenderingSupported
ENTRY_POINT: 0908320c
PROGRAM: Hyper-libil2cpp.so
SCORE: 165
LABEL: attempted_dynamic_eye_tracked_foveation_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_4;validity_or_gating_hits_4;paired_field_refs_with_eye_source;strong_foveation_hits_2;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_foveated_rendering
*/


void OVRManager__get_eyeTrackedFoveatedRenderingSupported(void)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  long unaff_x19;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined4 uStack000000000000000c;
  undefined8 in_stack_00000010;
  undefined4 uStack0000000000000018;
  undefined4 uStack000000000000001c;
  float fStack0000000000000020;
  float fStack0000000000000024;
  undefined4 uStack0000000000000028;
  undefined4 uStack000000000000002c;
  float in_stack_00000078;
  float fStack000000000000007c;
  
  FUN_0907ed1c();
  uVar5 = uStack0000000000000028;
  uVar4 = uStack000000000000001c;
  uVar3 = uStack0000000000000018;
  uVar2 = in_stack_00000010._4_4_;
  in_stack_00000078 = fStack0000000000000024;
  fStack000000000000007c = fStack0000000000000020;
  uStack000000000000000c = uStack000000000000002c;
  fVar10 = fStack0000000000000024;
  fVar9 = fStack0000000000000020;
  fVar6 = (float)FUN_09082cb8();
  if (*(long *)(unaff_x19 + 0x28) != 0) {
    fVar11 = fVar10;
    fVar7 = (float)FUN_0a18a1a0(*(long *)(unaff_x19 + 0x28),0);
    fVar12 = fVar11;
    fVar8 = (float)FUN_09083310();
    puVar1 = PTR_DAT_0ac401c0;
    if (*(long *)(unaff_x19 + 0x28) != 0) {
      FUN_0a18a274(fVar6 + (fVar7 - fVar8),fVar9 + 0.0,fVar10 + (fVar11 - fVar12),
                   *(long *)(unaff_x19 + 0x28),0);
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_049a583c();
      }
      FUN_0a188688((long)&stack0x00000010 + 4,0);
      *(ulong *)(unaff_x19 + 0xa0) = CONCAT44(fStack0000000000000020,uStack000000000000001c);
      *(ulong *)(unaff_x19 + 0x98) = CONCAT44(uStack0000000000000018,in_stack_00000010._4_4_);
      *(ulong *)(unaff_x19 + 0xac) = CONCAT44(uStack000000000000002c,uStack0000000000000028);
      *(ulong *)(unaff_x19 + 0xa4) = CONCAT44(fStack0000000000000024,fStack0000000000000020);
      if (*(long *)(unaff_x19 + 0x20) != 0) {
        FUN_0907fa94(uVar2,uVar3,uVar4,*(long *)(unaff_x19 + 0x20),0);
        if (*(long *)(unaff_x19 + 0x20) != 0) {
          FUN_0907fa30(fStack000000000000007c,in_stack_00000078,uVar5,uStack000000000000000c,
                       *(long *)(unaff_x19 + 0x20),0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


