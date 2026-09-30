/*
FUNCTION_NAME: OVRManager.InstantiateMrcCameraDelegate$$Invoke
ENTRY_POINT: 060c5a28
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 101
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


long OVRManager_InstantiateMrcCameraDelegate__Invoke(long param_1)

{
  float fVar1;
  ulong uVar2;
  undefined8 *puVar3;
  int in_w9;
  int *piVar4;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long lVar5;
  long *unaff_x22;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  long *unaff_x26;
  long unaff_x27;
  undefined1 unaff_w28;
  undefined4 uVar6;
  float unaff_s8;
  long in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000098;
  
code_r0x060c5a28:
  puVar3 = (undefined8 *)(param_1 + (long)in_w9 * 0x10 + 0x138);
  lVar5 = unaff_x21;
  unaff_x21 = unaff_x27;
  do {
    uVar6 = (*(code *)*puVar3)(unaff_x22,puVar3[1]);
    while( true ) {
      if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03642c18(uVar6);
      }
      FUN_060c4714(unaff_x21,unaff_x19 + 0x148,unaff_x19 + 0x150,(long)&stack0x00000098 + 4);
      fVar1 = in_stack_00000098._4_4_;
      if (unaff_s8 < in_stack_00000098._4_4_) {
        if (*(long *)(unaff_x19 + 0x138) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03642c18();
        }
        FUN_060be5d8(*(long *)(unaff_x19 + 0x138),*(undefined8 *)(unaff_x19 + 0x148),0);
        if (*(long *)(unaff_x19 + 0x140) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03642c18();
        }
        FUN_060be5d8(*(long *)(unaff_x19 + 0x140),*(undefined8 *)(unaff_x19 + 0x150),0);
        *(undefined1 *)(unaff_x19 + 0x168) = unaff_w28;
        unaff_x20 = lVar5;
        unaff_s8 = fVar1;
      }
      uVar2 = FUN_05959d48(&stack0x00000040,*unaff_x24);
      if ((uVar2 & 1) == 0) {
        FUN_0595a004(in_stack_00000010,*unaff_x23);
        if (in_stack_00000008 != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03642c00(in_stack_00000008);
        }
        return unaff_x20;
      }
      unaff_x21 = FUN_05959bf0(&stack0x00000040,*unaff_x25);
      unaff_x22 = *(long **)(unaff_x19 + 0x120);
      lVar5 = unaff_x21;
      if (unaff_x22 != (long *)0x0) break;
      uVar6 = 0x3f800000;
    }
    param_1 = *unaff_x22;
    uVar2 = (ulong)*(ushort *)(param_1 + 0x12e);
    if (uVar2 != 0) {
      piVar4 = (int *)(*(long *)(param_1 + 0xb0) + 8);
      do {
        if (*(long *)(piVar4 + -2) == *unaff_x26) {
          in_w9 = *piVar4 + 4;
          unaff_x27 = unaff_x21;
          goto code_r0x060c5a28;
        }
        uVar2 = uVar2 - 1;
        piVar4 = piVar4 + 4;
      } while (uVar2 != 0);
    }
    puVar3 = (undefined8 *)FUN_0367cd30(unaff_x22,*unaff_x26,4);
  } while( true );
}


