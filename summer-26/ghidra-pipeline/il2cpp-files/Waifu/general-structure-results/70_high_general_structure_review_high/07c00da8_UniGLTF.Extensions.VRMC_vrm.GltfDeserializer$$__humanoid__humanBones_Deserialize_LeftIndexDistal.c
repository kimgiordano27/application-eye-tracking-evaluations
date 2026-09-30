/*
FUNCTION_NAME: UniGLTF.Extensions.VRMC_vrm.GltfDeserializer$$__humanoid__humanBones_Deserialize_LeftIndexDistal
ENTRY_POINT: 07c00da8
PROGRAM: Waifu-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_4
*/


void UniGLTF_Extensions_VRMC_vrm_GltfDeserializer____humanoid__humanBones_Deserialize_LeftIndexDistal
               (float param_1,float param_2)

{
  ulong *puVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  code *pcVar11;
  float *pfVar12;
  void *unaff_x19;
  float *unaff_x20;
  int unaff_w22;
  byte unaff_w23;
  byte unaff_w24;
  long unaff_x26;
  long unaff_x27;
  long unaff_x28;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined1 auVar16 [16];
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float unaff_s12;
  float unaff_s13;
  float unaff_s14;
  float unaff_s15;
  float in_s19;
  float fStack0000000000000004;
  float fStack000000000000000c;
  undefined8 in_stack_00000028;
  float fStack0000000000000030;
  float fStack0000000000000034;
  float fStack0000000000000038;
  float fStack000000000000003c;
  float fStack0000000000000040;
  float fStack0000000000000044;
  undefined8 in_stack_00000050;
  float in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  float in_stack_00000070;
  float fStack0000000000000078;
  float fStack000000000000007c;
  undefined8 in_stack_000001a0;
  undefined8 in_stack_000001a8;
  undefined8 in_stack_000001b0;
  undefined8 in_stack_000001b8;
  undefined8 in_stack_000001c0;
  undefined8 in_stack_000001c8;
  float in_stack_000001d0;
  float fStack00000000000001d4;
  float in_stack_000001d8;
  float fStack00000000000001dc;
  
                    /* catch() { ... } // from try @ 07c00a0c with catch @ 07c00da8 */
                    /* catch() { ... } // from try @ 07c009d4 with catch @ 07c00dac
                       catch() { ... } // from try @ 07c00d50 with catch @ 07c00dac */
                    /* catch() { ... } // from try @ 07c0094c with catch @ 07c00db0
                       catch() { ... } // from try @ 07c00d4c with catch @ 07c00db0 */
                    /* catch() { ... } // from try @ 07c008d8 with catch @ 07c00db4 */
                    /* catch() { ... } // from try @ 07c00894 with catch @ 07c00db8
                       catch() { ... } // from try @ 07c00d48 with catch @ 07c00db8 */
                    /* catch() { ... } // from try @ 07c00b10 with catch @ 07c00dbc */
  if (unaff_s15 == 0.0) {
                    /* catch() { ... } // from try @ 07c00d38 with catch @ 07c00dc0 */
                    /* catch() { ... } // from try @ 07c00b20 with catch @ 07c00dc4 */
                    /* catch() { ... } // from try @ 07c00b2c with catch @ 07c00dc8 */
                    /* catch() { ... } // from try @ 07c00d34 with catch @ 07c00dcc
                       catch() { ... } // from try @ 07c00d74 with catch @ 07c00dcc */
                    /* catch() { ... } // from try @ 07c00c0c with catch @ 07c00dd0 */
                    /* catch() { ... } // from try @ 07c009b8 with catch @ 07c00dd4 */
                    /* catch() { ... } // from try @ 07c00b74 with catch @ 07c00dd8 */
                    /* catch() { ... } // from try @ 07c00d30 with catch @ 07c00ddc */
                    /* catch() { ... } // from try @ 07c00c1c with catch @ 07c00de0 */
    bVar4 = unaff_s12 != 1.0 || (unaff_s14 != 0.0 || unaff_s13 != 1.0);
                    /* catch() { ... } // from try @ 07c00d2c with catch @ 07c00de4
                       catch() { ... } // from try @ 07c00d5c with catch @ 07c00de4 */
  }
  else {
                    /* catch() { ... } // from try @ 07c00d28 with catch @ 07c00de8
                       catch() { ... } // from try @ 07c00d58 with catch @ 07c00de8 */
    bVar4 = true;
  }
                    /* catch() { ... } // from try @ 07c00c5c with catch @ 07c00dec */
  bVar2 = (unaff_w22 == 1 | unaff_w24 | unaff_w23) & 1;
                    /* try { // try from 07c00e04 to 07d00e07 has its CatchHandler @ 07c00e14 */
  if ((in_s19 <= param_1 || bVar2 != 0) || bVar4) {
                    /* catch() { ... } // from try @ 07c00e04 with catch @ 07c00e14 */
    if (DAT_086efaa8 == (code *)0x0) {
      DAT_086efaa8 = (code *)FUN_033d1b68("UnityEngine.Sprite::GetPacked()");
                    /* try { // try from 07c00e24 to 07d00e37 has its CatchHandler @ 07c00e4c */
    }
    iVar5 = (*DAT_086efaa8)();
    param_2 = fStack0000000000000030;
                    /* try { // try from 07c00e38 to 07d00e43 has its CatchHandler @ 07c006c8 */
    if (iVar5 == 1) {
                    /* try { // try from 07c00e44 to 07d00e4b has its CatchHandler @ 07c00e4c */
      if (DAT_086efaa0 == (code *)0x0) {
                    /* catch() { ... } // from try @ 07c00e24 with catch @ 07c00e4c
                       catch() { ... } // from try @ 07c00e44 with catch @ 07c00e4c */
        DAT_086efaa0 = (code *)FUN_033d1b68("UnityEngine.Sprite::GetPackingRotation()");
      }
      iVar5 = (*DAT_086efaa0)();
      if (iVar5 != 0) {
        if (DAT_086efaa0 == (code *)0x0) {
          DAT_086efaa0 = (code *)FUN_033d1b68("UnityEngine.Sprite::GetPackingRotation()");
        }
        (*DAT_086efaa0)();
        FUN_07c006f8();
      }
    }
  }
  fStack0000000000000004 = in_stack_00000058;
  fStack000000000000000c = fStack0000000000000038;
  FUN_07c000f0();
  pcVar11 = *(code **)(unaff_x28 + 0xb08);
  if (pcVar11 == (code *)0x0) {
    pcVar11 = (code *)FUN_033d1b68("UnityEngine.Sprite::get_bounds_Injected(UnityEngine.Bounds&)");
    *(code **)(unaff_x28 + 0xb08) = pcVar11;
  }
  (*pcVar11)();
  pcVar11 = *(code **)(unaff_x28 + 0xb08);
  if (pcVar11 == (code *)0x0) {
    pcVar11 = (code *)FUN_033d1b68("UnityEngine.Sprite::get_bounds_Injected(UnityEngine.Bounds&)");
    *(code **)(unaff_x28 + 0xb08) = pcVar11;
  }
  fStack000000000000003c = fStack000000000000003c / 0.0;
  fStack0000000000000038 = fStack0000000000000038 / 0.0;
  (*pcVar11)();
  pcVar11 = *(code **)(unaff_x28 + 0xb08);
  if (pcVar11 == (code *)0x0) {
    pcVar11 = (code *)FUN_033d1b68("UnityEngine.Sprite::get_bounds_Injected(UnityEngine.Bounds&)");
    *(code **)(unaff_x28 + 0xb08) = pcVar11;
  }
  (*pcVar11)();
  fVar18 = (fStack0000000000000034 - 0.0) / 0.0;
  fVar20 = 1.0 - (fStack0000000000000038 + (in_stack_00000058 - 0.0) / 0.0);
  memset(&stack0x000001e0,0,0xe0);
  auVar16 = NEON_fmov(0x3f800000,4);
  in_stack_000001c8 = auVar16._8_8_;
  in_stack_000001c0 = auVar16._0_8_;
  in_stack_000001d0 = fVar18;
  fStack00000000000001d4 = fVar20;
  in_stack_000001d8 = fStack000000000000003c;
  fStack00000000000001dc = fStack0000000000000038;
  if ((in_s19 <= param_1 || bVar2 != 0) || bVar4) {
    pcVar11 = *(code **)(unaff_x27 + 0xab0);
    if (pcVar11 == (code *)0x0) {
      pcVar11 = (code *)FUN_033d1b68("UnityEngine.Sprite::get_texture()");
      *(code **)(unaff_x27 + 0xab0) = pcVar11;
    }
    (*pcVar11)();
  }
  if (DAT_08908cd0 != 0) {
    puVar1 = &DAT_0873ccb0 + ((ulong)&stack0x00000218 >> 0x12 & 0x7fff);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar4) {
        *puVar1 = *puVar1 | 1L << ((ulong)&stack0x00000218 >> 0xc & 0x3f);
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    puVar1 = &DAT_0873ccb0 + ((ulong)&stack0x00000220 >> 0x12 & 0x7fff);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar4) {
        *puVar1 = *puVar1 | 1L << ((ulong)&stack0x00000220 >> 0xc & 0x3f);
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  FUN_07a1cb0c();
  pcVar11 = *(code **)(unaff_x27 + 0xab0);
  if (pcVar11 == (code *)0x0) {
    pcVar11 = (code *)FUN_033d1b68("UnityEngine.Sprite::get_texture()");
    *(code **)(unaff_x27 + 0xab0) = pcVar11;
  }
  plVar6 = (long *)(*pcVar11)();
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 0x188))(plVar6,*(undefined8 *)(*plVar6 + 400));
    pcVar11 = *(code **)(unaff_x27 + 0xab0);
    if (pcVar11 == (code *)0x0) {
      pcVar11 = (code *)FUN_033d1b68("UnityEngine.Sprite::get_texture()");
      *(code **)(unaff_x27 + 0xab0) = pcVar11;
    }
    plVar6 = (long *)(*pcVar11)();
    if (plVar6 != (long *)0x0) {
      (**(code **)(*plVar6 + 0x1a8))(plVar6,*(undefined8 *)(*plVar6 + 0x1b0));
      if (DAT_086efaa8 == (code *)0x0) {
        DAT_086efaa8 = (code *)FUN_033d1b68("UnityEngine.Sprite::GetPacked()");
      }
      (*DAT_086efaa8)();
      memcpy(&stack0x000002c0,&stack0x000001a0,0x120);
      fVar18 = *unaff_x20;
      fVar20 = unaff_x20[1];
      fVar21 = unaff_x20[2];
      fVar19 = unaff_x20[3];
      if (*(char *)(unaff_x26 + 0x32b) == '\0') {
        FUN_0335b6c8(&DAT_083d2cd8,1);
        DataMemoryBarrier(2,3);
        *(undefined1 *)(unaff_x26 + 0x32b) = 1;
      }
      pfVar12 = *(float **)(DAT_083d2cd8 + 0xb8);
      fVar13 = *pfVar12;
      fVar14 = pfVar12[1];
      fVar15 = pfVar12[2];
      fVar17 = pfVar12[3];
      if ((((fVar19 - fVar17) * (fVar19 - fVar17) +
            (fVar21 - fVar15) * (fVar21 - fVar15) +
            (fVar18 - fVar13) * (fVar18 - fVar13) + (fVar20 - fVar14) * (fVar20 - fVar14) <
            in_stack_00000028._4_4_) ||
          ((param_2 - fVar17) * (param_2 - fVar17) +
           (fStack0000000000000040 - fVar15) * (fStack0000000000000040 - fVar15) +
           (fStack0000000000000044 - fVar13) * (fStack0000000000000044 - fVar13) +
           (in_stack_00000050._4_4_ - fVar14) * (in_stack_00000050._4_4_ - fVar14) <
           in_stack_00000028._4_4_)) ||
         ((param_2 - unaff_x20[3]) * (param_2 - unaff_x20[3]) +
          (fStack0000000000000040 - unaff_x20[2]) * (fStack0000000000000040 - unaff_x20[2]) +
          (fStack0000000000000044 - *unaff_x20) * (fStack0000000000000044 - *unaff_x20) +
          (in_stack_00000050._4_4_ - unaff_x20[1]) * (in_stack_00000050._4_4_ - unaff_x20[1]) <
          in_stack_00000028._4_4_)) {
        if ((unaff_x20[3] - fVar17) * (unaff_x20[3] - fVar17) +
            (unaff_x20[2] - fVar15) * (unaff_x20[2] - fVar15) +
            (*unaff_x20 - fVar13) * (*unaff_x20 - fVar13) +
            (unaff_x20[1] - fVar14) * (unaff_x20[1] - fVar14) < in_stack_00000028._4_4_) {
          *unaff_x20 = fStack0000000000000044;
          unaff_x20[1] = in_stack_00000050._4_4_;
          unaff_x20[2] = fStack0000000000000040;
          unaff_x20[3] = param_2;
        }
      }
      else {
        uVar7 = FUN_07a11ba4();
        in_stack_00000070 = fStack0000000000000044;
        fStack0000000000000078 = fStack0000000000000040;
        fStack000000000000007c = param_2;
        uVar8 = FUN_03398650(DAT_083d2cd8,&stack0x00000070);
        in_stack_00000068 = *(undefined8 *)(unaff_x20 + 2);
        in_stack_00000060 = *(undefined8 *)unaff_x20;
        uVar9 = FUN_03398650(DAT_083d2cd8,&stack0x00000060);
        uVar10 = DAT_084466d8;
        FUN_0683f5f0(&stack0x00000420,uVar7,uVar8,uVar9,0);
        uVar10 = FUN_0666f060(0,uVar10,&stack0x00000400);
        if (*(int *)(DAT_083ca458 + 0xe0) == 0) {
          FUN_033b9870(DAT_083ca458);
        }
        FUN_079ca678(uVar10,0);
      }
      memcpy(&stack0x00000080,&stack0x000002c0,0x120);
      memcpy(unaff_x19,&stack0x00000080,0x120);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


