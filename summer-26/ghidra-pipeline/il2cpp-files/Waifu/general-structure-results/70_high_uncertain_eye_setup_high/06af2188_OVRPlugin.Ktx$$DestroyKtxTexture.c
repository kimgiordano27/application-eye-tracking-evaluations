/*
FUNCTION_NAME: OVRPlugin.Ktx$$DestroyKtxTexture
ENTRY_POINT: 06af2188
PROGRAM: Waifu-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_5;validity_or_gating_hits_6;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


bool OVRPlugin_Ktx__DestroyKtxTexture(void)

{
  char cVar1;
  char cVar2;
  byte bVar3;
  ulong uVar4;
  long lVar5;
  long unaff_x19;
  long unaff_x20;
  undefined1 unaff_w21;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  long in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  long in_stack_00000030;
  float fStack000000000000004c;
  
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_083e7f28,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_083f61a0,1);
  DataMemoryBarrier(2,3);
  *(undefined1 *)(unaff_x20 + 0x4bd) = unaff_w21;
  in_stack_00000020 = 0;
  in_stack_00000028 = 0;
  in_stack_00000030 = 0;
  fStack000000000000004c = 0.0;
  if (DAT_086ef170 == (code *)0x0) {
    DAT_086ef170 = (code *)FUN_033d1b68("UnityEngine.Behaviour::get_isActiveAndEnabled()");
  }
  uVar4 = (*DAT_086ef170)();
  if ((uVar4 & 1) == 0) {
    return false;
  }
  cVar1 = *(char *)(unaff_x19 + 0x61);
  *(undefined1 *)(unaff_x19 + 0x61) = 1;
  if (*(long *)(unaff_x19 + 0x40) != 0) {
    in_stack_00000010 = 0;
    in_stack_00000018 = 0;
    in_stack_00000008 = 0;
    FUN_05fd5ad4(&stack0x00000008,*(long *)(unaff_x19 + 0x40),
                 *(undefined8 *)(*(long *)(*(long *)(DAT_083f61a0 + 0x20) + 0xc0) + 0x138));
    in_stack_00000028 = in_stack_00000010;
    in_stack_00000020 = in_stack_00000008;
    in_stack_00000030 = in_stack_00000018;
    while (uVar4 = FUN_05fd5b44(&stack0x00000020,DAT_083e7f20), lVar5 = in_stack_00000030,
          (uVar4 & 1) != 0) {
      if (cVar1 == '\0') {
        if (in_stack_00000030 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_033d1d3c();
        }
        fVar7 = *(float *)(in_stack_00000030 + 0x14);
        fVar6 = *(float *)(in_stack_00000030 + 0x18) * -0.5;
      }
      else {
        if (in_stack_00000030 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_033d1d3c();
        }
        fVar7 = *(float *)(in_stack_00000030 + 0x14);
        fVar6 = *(float *)(in_stack_00000030 + 0x18) * 0.5;
      }
      bVar3 = FUN_06af23b8();
      fVar8 = ABS(fStack000000000000004c);
      if (*(long *)(unaff_x19 + 0x58) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_033d1d3c();
      }
      FUN_05e17eb4(fStack000000000000004c,fVar7 + fVar6,*(long *)(unaff_x19 + 0x58),lVar5,1,
                   *(undefined8 *)(*(long *)(*(long *)(DAT_083e5000 + 0x20) + 0xc0) + 0x110));
      *(byte *)(unaff_x19 + 0x61) = *(byte *)(unaff_x19 + 0x61) & bVar3 & fVar8 <= fVar7 + fVar6;
    }
    lVar5 = *(long *)(unaff_x19 + 0x50);
    if (lVar5 != 0) {
      fVar6 = (float)(**(code **)(lVar5 + 0x18))
                               (*(undefined8 *)(lVar5 + 0x40),*(undefined8 *)(lVar5 + 0x28));
      cVar2 = *(char *)(unaff_x19 + 0x61);
      if (cVar1 == cVar2) {
        fVar7 = *(float *)(unaff_x19 + 100);
      }
      else {
        *(float *)(unaff_x19 + 100) = fVar6;
        fVar7 = fVar6;
      }
      if (*(float *)(unaff_x19 + 0x48) <= fVar6 - fVar7) {
        *(char *)(unaff_x19 + 0x60) = cVar2;
      }
      else {
        cVar2 = *(char *)(unaff_x19 + 0x60);
      }
      return cVar2 != '\0';
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


