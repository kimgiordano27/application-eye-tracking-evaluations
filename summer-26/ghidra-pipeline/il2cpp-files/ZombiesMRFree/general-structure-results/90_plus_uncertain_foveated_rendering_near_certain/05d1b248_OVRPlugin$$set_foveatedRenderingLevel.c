/*
FUNCTION_NAME: OVRPlugin$$set_foveatedRenderingLevel
ENTRY_POINT: 05d1b248
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 119
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;paired_field_refs_with_eye_source;strong_foveation_hits_2;functionality_foveated_rendering
*/


long OVRPlugin__set_foveatedRenderingLevel(undefined4 param_1,long param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  long lVar3;
  int *piVar4;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  undefined8 *unaff_x22;
  undefined8 *unaff_x23;
  long *plVar5;
  undefined1 unaff_w25;
  undefined8 *unaff_x26;
  undefined8 *unaff_x27;
  long *unaff_x28;
  float unaff_s8;
  undefined8 in_stack_00000028;
  
  do {
    while( true ) {
      if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02fe94e8(param_1);
      }
      FUN_05d19f38();
      if (unaff_s8 < in_stack_00000028._4_4_) {
        if (*(long *)(unaff_x19 + 0x138) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02fe94e8();
        }
        FUN_05d11cb4(*(long *)(unaff_x19 + 0x138),*unaff_x22,0);
        if (*(long *)(unaff_x19 + 0x140) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02fe94e8();
        }
        FUN_05d11cb4(*(long *)(unaff_x19 + 0x140),*unaff_x23,0);
        *(undefined1 *)(unaff_x19 + 0x168) = unaff_w25;
        unaff_x20 = unaff_x21;
        unaff_s8 = in_stack_00000028._4_4_;
      }
      uVar1 = FUN_055c9cc0(&stack0x00000030,*unaff_x26);
      if ((uVar1 & 1) == 0) {
        FUN_055c9f5c(&stack0x00000030,*(undefined8 *)PTR_DAT_06fb89e8);
        return unaff_x20;
      }
      param_2 = FUN_055c9b7c(&stack0x00000030,*unaff_x27);
      plVar5 = *(long **)(unaff_x19 + 0x120);
      unaff_x21 = param_2;
      if (plVar5 != (long *)0x0) break;
      param_1 = 0x3f800000;
    }
    lVar3 = *plVar5;
    uVar1 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar1 != 0) {
      piVar4 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar4 + -2) == *unaff_x28) {
          puVar2 = (undefined8 *)(lVar3 + (long)(*piVar4 + 4) * 0x10 + 0x138);
          goto LAB_05d1b238;
        }
        uVar1 = uVar1 - 1;
        piVar4 = piVar4 + 4;
      } while (uVar1 != 0);
    }
    puVar2 = (undefined8 *)FUN_02feb5b8(plVar5,*unaff_x28,4);
LAB_05d1b238:
    param_1 = (*(code *)*puVar2)(plVar5,puVar2[1]);
  } while( true );
}


