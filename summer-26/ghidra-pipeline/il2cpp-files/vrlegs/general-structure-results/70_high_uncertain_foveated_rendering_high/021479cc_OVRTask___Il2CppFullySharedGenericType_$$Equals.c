/*
FUNCTION_NAME: OVRTask<__Il2CppFullySharedGenericType>$$Equals
ENTRY_POINT: 021479cc
PROGRAM: vrlegs-libil2cpp.so
SCORE: 85
LABEL: uncertain_foveated_rendering_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_1;strong_foveation_hits_1;functionality_foveated_rendering
*/


void OVRTask<__Il2CppFullySharedGenericType>__Equals(ulong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  long unaff_x20;
  long unaff_x21;
  uint unaff_w22;
  undefined8 uVar4;
  long *unaff_x23;
  long unaff_x24;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000058;
  
  if ((param_1 & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03cdabc0);
    FUN_01ab69ac(PTR_DAT_03cc9e10);
    *(undefined1 *)(unaff_x24 + 0xfb4) = 1;
  }
                    /* try { // try from 021479f4 to 02247a3f has its CatchHandler @ 02147b4c */
  FUN_027b3d9c(param_2,0);
  if (*(int *)(*unaff_x23 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  uVar2 = FUN_027d75b4(&stack0x00000058,0);
  lVar3 = *(long *)(**(long **)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x80);
  if ((uVar2 & 1) == 0) {
    FUN_018820a8(param_2,lVar3 + 0x20);
    FUN_018820a8(param_2,*(long *)(**(long **)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x80) + 0x40,
                 in_stack_00000058);
    FUN_01883150(param_2,*(long *)(**(long **)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x80) + 0xa0,
                 unaff_w22 & 1);
    if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    FUN_02146e50();
    if (*(int *)(*unaff_x23 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar2 = OVRManager__SetFoveatedRenderingLevel(&stack0x00000058,0);
    uVar1 = in_stack_00000058;
    if ((uVar2 & 1) != 0) {
      lVar3 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x40);
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_01a46ff8();
      }
      if (*(int *)(lVar3 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      lVar3 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x40);
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_01a46ff8();
      }
      uVar4 = **(undefined8 **)(lVar3 + 0xb8);
      if (*(int *)(*(long *)PTR_DAT_03cdabc0 + 0xe0) == 0) {
        thunk_FUN_01a58e78(*(long *)PTR_DAT_03cdabc0);
      }
      FUN_030bc0b0(&stack0x00000018,uVar1,uVar4,param_2,0);
      in_stack_00000040 = in_stack_00000028;
      in_stack_00000038 = in_stack_00000020;
      in_stack_00000030 = in_stack_00000018;
      FUN_01887328(param_2,*(long *)(**(long **)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x80) + 0x60)
      ;
    }
  }
  else {
    FUN_01883150(param_2,lVar3 + 0x80,1);
  }
  return;
}


