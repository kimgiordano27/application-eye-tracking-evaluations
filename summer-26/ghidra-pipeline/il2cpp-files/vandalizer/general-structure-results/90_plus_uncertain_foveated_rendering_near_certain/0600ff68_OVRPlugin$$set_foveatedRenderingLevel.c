/*
FUNCTION_NAME: OVRPlugin$$set_foveatedRenderingLevel
ENTRY_POINT: 0600ff68
PROGRAM: vandalizer-libil2cpp.so
SCORE: 104
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_foveation_hits_2;functionality_foveated_rendering
*/


undefined8
OVRPlugin__set_foveatedRenderingLevel
          (float param_1,float param_2,float param_3,undefined1 param_4 [16],undefined1 param_5 [16]
          )

{
  undefined *puVar1;
  undefined4 uVar2;
  float fVar3;
  uint in_w8;
  long lVar4;
  float *pfVar5;
  undefined8 *unaff_x19;
  long unaff_x22;
  long unaff_x23;
  float fVar6;
  undefined8 uVar7;
  ulong uVar8;
  float unaff_s9;
  ulong unaff_d10;
  ulong uStack0000000000000010;
  undefined8 uStack0000000000000018;
  undefined8 in_stack_00000020;
  undefined4 uStack0000000000000028;
  undefined4 uStack000000000000002c;
  undefined4 uStack0000000000000030;
  undefined8 uStack0000000000000034;
  undefined8 in_stack_00000040;
  undefined4 uStack0000000000000048;
  undefined4 uStack000000000000004c;
  undefined4 uStack0000000000000050;
  undefined8 uStack0000000000000054;
  
  uStack0000000000000018 = param_5._8_8_;
  uStack0000000000000010 = param_5._0_8_;
  fVar6 = SQRT(param_3 * param_3 + param_2 + param_1) - unaff_s9;
  *(float *)(unaff_x23 + 0x20) = fVar6;
  puVar1 = PTR_DAT_075d64f0;
  if (1 < (int)in_w8) {
    lVar4 = (ulong)in_w8 - 1;
    pfVar5 = (float *)(unaff_x23 + 0x24);
    do {
      fVar3 = *pfVar5;
      if (*pfVar5 <= fVar6) {
        fVar3 = fVar6;
      }
      fVar6 = fVar3;
      lVar4 = lVar4 + -1;
      pfVar5 = pfVar5 + 1;
    } while (lVar4 != 0);
  }
  if (fVar6 < unaff_s9) {
    fVar6 = SQRT(unaff_s9 * unaff_s9 - fVar6 * fVar6);
    uStack0000000000000010 =
         CONCAT44(param_5._4_4_ - (float)((ulong)*(undefined8 *)(unaff_x22 + 0xc) >> 0x20) * fVar6,
                  param_5._0_4_ - (float)*(undefined8 *)(unaff_x22 + 0xc) * fVar6);
    uStack0000000000000018 = 0;
    unaff_d10 = (ulong)(uint)((float)unaff_d10 - fVar6 * *(float *)(unaff_x22 + 0x14));
  }
  FUN_0600f814(&stack0x00000040);
  uVar2 = uStack0000000000000050;
  uVar8 = uStack0000000000000010 >> 0x20;
  uVar7 = FUN_060100c0(uStack0000000000000010,uVar8,unaff_d10);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  FUN_06e67e1c(uVar7,uVar8,unaff_d10,uStack000000000000004c,uVar2,
               uStack0000000000000054 & 0xffffffff,uStack0000000000000054._4_4_,&stack0x00000060,0);
  FUN_060101f0(&stack0x00000020);
  unaff_x19[1] = CONCAT44(uStack000000000000002c,uStack0000000000000028);
  *unaff_x19 = in_stack_00000020;
  *(undefined8 *)((long)unaff_x19 + 0x14) = uStack0000000000000034;
  *(ulong *)((long)unaff_x19 + 0xc) = CONCAT44(uStack0000000000000030,uStack000000000000002c);
  return 1;
}


