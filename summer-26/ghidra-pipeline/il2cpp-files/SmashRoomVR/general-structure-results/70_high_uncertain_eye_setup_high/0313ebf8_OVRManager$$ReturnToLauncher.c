/*
FUNCTION_NAME: OVRManager$$ReturnToLauncher
ENTRY_POINT: 0313ebf8
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__ReturnToLauncher
               (long param_1,undefined1 param_2 [16],undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  int *piVar7;
  undefined8 *unaff_x19;
  long unaff_x20;
  long *plVar8;
  long *unaff_x24;
  undefined4 uVar9;
  undefined8 unaff_d8;
  undefined4 unaff_s9;
  undefined8 unaff_d10;
  undefined4 unaff_s11;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined4 uStack000000000000008c;
  undefined4 uStack0000000000000090;
  undefined4 uStack0000000000000094;
  undefined4 uStack000000000000009c;
  undefined8 in_stack_000000a0;
  
  uStack000000000000009c = param_3;
  uVar9 = FUN_02d0b228(unaff_x20 + 0x108,**(undefined8 **)(param_1 + 0x9a8));
  uStack000000000000008c = (undefined4)unaff_d10;
  uStack0000000000000090 = (undefined4)((ulong)unaff_d10 >> 0x20);
  in_stack_000000a0._4_4_ = CONCAT31(in_stack_000000a0._5_3_,1);
  lVar2 = *(long *)(unaff_x20 + 0xd8);
  if (lVar2 != 0) {
    lVar6 = *unaff_x24;
    lVar4 = *(long *)(lVar2 + 0x10);
    *(int *)(lVar2 + 0x1c) = *(int *)(lVar2 + 0x1c) + 1;
    if (lVar4 != 0) {
      uVar1 = *(uint *)(lVar2 + 0x18);
      uStack0000000000000094 = unaff_s11;
      if (uVar1 < *(uint *)(lVar4 + 0x18)) {
        *(uint *)(lVar2 + 0x18) = uVar1 + 1;
        lVar4 = lVar4 + (long)(int)uVar1 * 0x28;
        *(ulong *)(lVar4 + 0x40) = CONCAT44(in_stack_000000a0._4_4_,param_4);
        *(ulong *)(lVar4 + 0x28) = CONCAT44(uStack000000000000008c,unaff_s9);
        *(undefined8 *)(lVar4 + 0x20) = unaff_d8;
        *(ulong *)(lVar4 + 0x38) = CONCAT44(uStack000000000000009c,uVar9);
        *(ulong *)(lVar4 + 0x30) = CONCAT44(unaff_s11,uStack0000000000000090);
      }
      else {
        in_stack_00000040 = unaff_d8;
        in_stack_00000048 = CONCAT44(uStack000000000000008c,unaff_s9);
        in_stack_00000050 = CONCAT44(unaff_s11,uStack0000000000000090);
        in_stack_00000058 = CONCAT44(uStack000000000000009c,uVar9);
        in_stack_00000060 = CONCAT44(in_stack_000000a0._4_4_,param_4);
        FUN_02b970b4(lVar2,&stack0x00000040,
                     *(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
      }
      lVar2 = *(long *)(unaff_x20 + 0xe0);
      if (lVar2 != 0) {
        (**(code **)(lVar2 + 0x18))
                  (*(undefined8 *)(lVar2 + 0x40),*(undefined8 *)(unaff_x20 + 0xd8),
                   *(undefined8 *)(lVar2 + 0x28));
        lVar2 = *(long *)(unaff_x20 + 0x130);
        if (lVar2 != 0) {
          *(undefined4 *)(lVar2 + 0x18) = 0;
          *(int *)(lVar2 + 0x1c) = *(int *)(lVar2 + 0x1c) + 1;
          plVar8 = *(long **)(unaff_x20 + 0x78);
          *(undefined4 *)(unaff_x20 + 0x138) = 0xffffffff;
          if (plVar8 != (long *)0x0) {
            lVar2 = *plVar8;
            uVar5 = (ulong)*(ushort *)(lVar2 + 0x12e);
            if (uVar5 != 0) {
              piVar7 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
              do {
                if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_03d7f9e0) {
                  puVar3 = (undefined8 *)(lVar2 + (long)(*piVar7 + 3) * 0x10 + 0x138);
                  goto LAB_0313ed84;
                }
                uVar5 = uVar5 - 1;
                piVar7 = piVar7 + 4;
              } while (uVar5 != 0);
            }
            puVar3 = (undefined8 *)FUN_01ae9f78(plVar8,*(long *)PTR_DAT_03d7f9e0,3);
LAB_0313ed84:
            (*(code *)*puVar3)(plVar8,puVar3[1]);
            unaff_x19[4] = CONCAT44(in_stack_000000a0._4_4_,param_4);
            unaff_x19[1] = CONCAT44(uStack000000000000008c,unaff_s9);
            *unaff_x19 = unaff_d8;
            unaff_x19[3] = CONCAT44(uStack000000000000009c,uVar9);
            unaff_x19[2] = CONCAT44(uStack0000000000000094,uStack0000000000000090);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


