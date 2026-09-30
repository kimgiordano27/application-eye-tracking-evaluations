/*
FUNCTION_NAME: OVRPlugin$$get_foveatedRenderingLevel
ENTRY_POINT: 0600fe84
PROGRAM: vandalizer-libil2cpp.so
SCORE: 107
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_foveation_hits_2;functionality_foveated_rendering
*/


undefined8 OVRPlugin__get_foveatedRenderingLevel(void)

{
  undefined *puVar1;
  undefined4 uVar2;
  float fVar3;
  long lVar4;
  undefined1 in_w8;
  int iVar5;
  long lVar6;
  float *pfVar7;
  undefined8 *unaff_x19;
  undefined8 *unaff_x22;
  undefined8 *unaff_x23;
  long unaff_x24;
  float fVar8;
  ulong uVar9;
  ulong uVar10;
  float fVar11;
  float fVar13;
  float unaff_s8;
  float fVar14;
  undefined8 uVar15;
  float fVar16;
  undefined8 uVar17;
  float in_stack_00000000;
  float in_stack_00000010;
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
  ulong uVar12;
  
  *(undefined1 *)(unaff_x24 + 0xa82) = in_w8;
  uVar15 = **(undefined8 **)(*(long *)PTR_DAT_0759b378 + 0xb8);
  fVar14 = *(float *)(*(undefined8 **)(*(long *)PTR_DAT_0759b378 + 0xb8) + 1);
  uVar17 = *unaff_x22;
  fVar16 = *(float *)(unaff_x22 + 1);
  fVar8 = (float)FUN_0600f8e8();
  lVar4 = FUN_031f21dc(*unaff_x23,1);
  if (DAT_07a3fba1 == '\0') {
    FUN_031f20f4(PTR_DAT_0759b370);
    DAT_07a3fba1 = '\x01';
  }
  if (*(int *)(*(long *)PTR_DAT_0759b370 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  if (lVar4 != 0) {
    iVar5 = (int)*(ulong *)(lVar4 + 0x18);
    if (iVar5 != 0) {
      fVar11 = (float)uVar15 + (float)uVar17;
      fVar13 = (float)((ulong)uVar15 >> 0x20) + (float)((ulong)uVar17 >> 0x20);
      uVar12 = CONCAT44(fVar13,fVar11);
      fVar14 = fVar14 + fVar16;
      fVar16 = SQRT((unaff_s8 - fVar14) * (unaff_s8 - fVar14) +
                    (in_stack_00000000 - fVar11) * (in_stack_00000000 - fVar11) +
                    (in_stack_00000010 - fVar13) * (in_stack_00000010 - fVar13)) - fVar8;
      *(float *)(lVar4 + 0x20) = fVar16;
      puVar1 = PTR_DAT_075d64f0;
      if (1 < iVar5) {
        lVar6 = (*(ulong *)(lVar4 + 0x18) & 0xffffffff) - 1;
        pfVar7 = (float *)(lVar4 + 0x24);
        do {
          fVar3 = *pfVar7;
          if (*pfVar7 <= fVar16) {
            fVar3 = fVar16;
          }
          fVar16 = fVar3;
          lVar6 = lVar6 + -1;
          pfVar7 = pfVar7 + 1;
        } while (lVar6 != 0);
      }
      if (fVar16 < fVar8) {
        fVar8 = SQRT(fVar8 * fVar8 - fVar16 * fVar16);
        uVar12 = CONCAT44(fVar13 - (float)((ulong)*(undefined8 *)((long)unaff_x22 + 0xc) >> 0x20) *
                                   fVar8,
                          fVar11 - (float)*(undefined8 *)((long)unaff_x22 + 0xc) * fVar8);
        fVar14 = fVar14 - fVar8 * *(float *)((long)unaff_x22 + 0x14);
      }
      uVar10 = (ulong)(uint)fVar14;
      FUN_0600f814(&stack0x00000040);
      uVar2 = uStack0000000000000050;
      uVar9 = uVar12 >> 0x20;
      uVar15 = FUN_060100c0(uVar12,uVar9,uVar10);
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
      }
      FUN_06e67e1c(uVar15,uVar9,uVar10,uStack000000000000004c,uVar2,
                   uStack0000000000000054 & 0xffffffff,uStack0000000000000054._4_4_,&stack0x00000060
                   ,0);
      FUN_060101f0(&stack0x00000020);
      unaff_x19[1] = CONCAT44(uStack000000000000002c,uStack0000000000000028);
      *unaff_x19 = in_stack_00000020;
      *(undefined8 *)((long)unaff_x19 + 0x14) = uStack0000000000000034;
      *(ulong *)((long)unaff_x19 + 0xc) = CONCAT44(uStack0000000000000030,uStack000000000000002c);
      return 1;
    }
                    /* WARNING: Subroutine does not return */
    FUN_031f2398();
  }
                    /* WARNING: Subroutine does not return */
  FUN_031f2390();
}


