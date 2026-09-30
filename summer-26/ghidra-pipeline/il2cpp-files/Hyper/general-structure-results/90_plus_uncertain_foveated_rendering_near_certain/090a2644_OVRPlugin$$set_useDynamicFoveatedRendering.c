/*
FUNCTION_NAME: OVRPlugin$$set_useDynamicFoveatedRendering
ENTRY_POINT: 090a2644
PROGRAM: Hyper-libil2cpp.so
SCORE: 101
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_foveation_hits_2;functionality_foveated_rendering
*/


void OVRPlugin__set_useDynamicFoveatedRendering(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 in_w8;
  long lVar3;
  long unaff_x19;
  long *plVar4;
  long unaff_x20;
  long unaff_x22;
  long unaff_x23;
  float fVar5;
  undefined4 uStack000000000000000c;
  undefined8 uStack0000000000000014;
  undefined1 in_stack_00000020 [16];
  undefined4 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined4 in_stack_00000048;
  undefined4 uStack000000000000004c;
  undefined4 in_stack_00000050;
  undefined8 uStack0000000000000054;
  
  *(undefined1 *)(unaff_x23 + 0x763) = in_w8;
  if (unaff_x22 != 0) {
    fVar5 = *(float *)(unaff_x20 + 0x28);
    lVar3 = *(long *)(*(long *)PTR_DAT_0ac0def8 + 0xb8);
    FUN_0a18aa1c(fVar5 * *(float *)(lVar3 + 0xc),fVar5 * *(float *)(lVar3 + 0x10),
                 *(float *)(lVar3 + 0x14) * fVar5);
    uVar1 = FUN_0a17834c();
    uStack0000000000000014 = *(undefined8 *)(unaff_x20 + 0x14);
    uStack000000000000000c = (undefined4)*(undefined8 *)(unaff_x20 + 0xc);
    FUN_0904dae4(&stack0x00000020 + 4);
    in_stack_00000040 = in_stack_00000020._4_8_;
    uStack0000000000000054 = in_stack_00000038;
    uStack000000000000004c = in_stack_00000030;
    FUN_0903b848(uVar1,&stack0x00000040,0,0);
    lVar3 = *(long *)(unaff_x20 + 0x20);
    if (lVar3 != 0) {
      lVar2 = thunk_FUN_04983f60(*(undefined8 *)PTR_DAT_0ac78d20);
      FUN_090a2734(lVar2,lVar3);
      plVar4 = (long *)(unaff_x19 + 0x48);
      *plVar4 = lVar2;
      thunk_FUN_049ee3d8(plVar4,lVar2);
      *(bool *)(unaff_x19 + 0x38) = *plVar4 != 0;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
                    /* catch(type#1 @ 0a568bf8) { ... } // from try @ 090a2634 with catch @ 090a2730
                        */
  FUN_0494818c();
}


