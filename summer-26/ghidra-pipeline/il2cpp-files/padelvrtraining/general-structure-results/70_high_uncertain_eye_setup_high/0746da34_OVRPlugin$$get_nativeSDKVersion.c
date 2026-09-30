/*
FUNCTION_NAME: OVRPlugin$$get_nativeSDKVersion
ENTRY_POINT: 0746da34
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_13;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined4
OVRPlugin__get_nativeSDKVersion(long param_1,float *param_2,ulong *param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  float fVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  undefined4 *puVar13;
  float *pfVar14;
  int iVar15;
  float fVar16;
  undefined4 uVar17;
  undefined8 uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined4 uVar23;
  ulong uVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  ulong uVar31;
  float fVar32;
  float fVar33;
  undefined4 uStack_1fc;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined8 uStack_1a0;
  float fStack_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  uint uStack_178;
  undefined4 uStack_174;
  undefined8 uStack_170;
  float fStack_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined8 uStack_150;
  undefined4 uStack_148;
  ulong uStack_140;
  float fStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined8 uStack_120;
  ulong uStack_110;
  float fStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined8 uStack_ec;
  undefined8 uStack_e0;
  float fStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  ulong uStack_c0;
  float fStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined8 uStack_ac;
  
  puVar3 = PTR_DAT_091f9220;
                    /* try { // try from 0746da40 to 0756da47 has its CatchHandler @ 0746da6c */
                    /* try { // try from 0746da48 to 0756da4b has its CatchHandler @ 0746da60 */
                    /* try { // try from 0746da4c to 0756da4f has its CatchHandler @ 0746da54 */
                    /* try { // try from 0746da50 to 0756da83 has its CatchHandler @ 0746d8cc */
                    /* catch(type#1 @ 08cb6798) { ... } // from try @ 0746da4c with catch @ 0746da54
                        */
                    /* catch(type#1 @ 08cb6798) { ... } // from try @ 0746d998 with catch @ 0746da58
                        */
                    /* catch(type#1 @ 08cb6798) { ... } // from try @ 0746d9e0 with catch @ 0746da5c
                        */
                    /* catch(type#1 @ 08cb6798) { ... } // from try @ 0746da48 with catch @ 0746da60
                        */
                    /* catch(type#1 @ 08cb6798) { ... } // from try @ 0746d9fc with catch @ 0746da64
                        */
                    /* catch(type#1 @ 08cb6798) { ... } // from try @ 0746d9e4 with catch @ 0746da68
                        */
                    /* catch(type#1 @ 08cb6798) { ... } // from try @ 0746da40 with catch @ 0746da6c
                        */
                    /* try { // try from 0746da84 to 0756da87 has its CatchHandler @ 0746daa8 */
  if ((DAT_098458b7 & 1) == 0) {
                    /* try { // try from 0746da88 to 0756daaf has its CatchHandler @ 0746d8cc */
    FUN_03d2d2b0(PTR_DAT_09220a10);
    FUN_03d2d2b0(PTR_DAT_09223390);
                    /* catch() { ... } // from try @ 0746da84 with catch @ 0746daa8 */
    FUN_03d2d2b0(PTR_DAT_09223398);
                    /* try { // try from 0746dab0 to 0756dab7 has its CatchHandler @ 0746dacc */
    FUN_03d2d2b0(PTR_DAT_091f9220);
                    /* try { // try from 0746dab8 to 0756dac3 has its CatchHandler @ 0746d8cc */
    DAT_098458b7 = 1;
  }
  puVar4 = PTR_DAT_09220a10;
                    /* try { // try from 0746dac4 to 0756dacb has its CatchHandler @ 0746dacc */
  uStack_e0 = 0;
  fStack_d8 = 0.0;
  uStack_d4 = 0;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0746dab0 with catch @ 0746dacc
                       catch(type#2 @ 00000000) { ... } // from try @ 0746dac4 with catch @ 0746dacc
                        */
  uStack_c8 = 0;
                    /* try { // try from 0746dad0 to 0756db9f has its CatchHandler @ 0746dad0
                       catch() { ... } // from try @ 0746dad0 with catch @ 0746dad0
                       catch() { ... } // from try @ 0746dc28 with catch @ 0746dad0
                       catch() { ... } // from try @ 0746dc78 with catch @ 0746dad0
                       catch() { ... } // from try @ 0746dcb8 with catch @ 0746dad0
                       catch() { ... } // from try @ 0746dce8 with catch @ 0746dad0 */
  uStack_d0 = 0;
  uStack_cc = 0;
  uStack_120 = 0;
  uStack_148 = 0;
  uStack_150 = 0;
  uStack_170 = 0;
  fStack_168 = 0.0;
  uStack_164 = 0;
  uStack_ec = 0;
  uStack_f0 = 0;
  fStack_108 = 0.0;
  uStack_104 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_f4 = 0;
  uStack_100 = 0;
  uStack_fc = 0;
  fStack_138 = 0.0;
  uStack_134 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  uStack_124 = 0;
  uStack_130 = 0;
  uStack_12c = 0;
  uStack_158 = 0;
  uStack_160 = 0;
  uStack_15c = 0;
  uStack_174 = 0;
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_03db619c();
  }
  FUN_08a5bcd8(&uStack_1a0,0);
  fStack_d8 = fStack_198;
  uStack_e0 = uStack_1a0;
  uStack_cc = uStack_18c;
  uStack_c8 = uStack_188;
  uStack_d4 = uStack_194;
  FUN_08a5bcd8(&uStack_1a0,0);
  FUN_08a5bcd8(&uStack_c0,0);
  uStack_18c = (undefined4)uStack_ac;
  uStack_188 = (undefined4)((ulong)uStack_ac >> 0x20);
  uStack_190 = uStack_b0;
  fStack_198 = fStack_b8;
  uStack_194 = uStack_b4;
  uStack_1a0 = uStack_c0;
  *(undefined8 *)((long)param_3 + 0x14) = uStack_ac;
  *(ulong *)((long)param_3 + 0xc) = CONCAT44(uStack_b0,uStack_b4);
  param_3[1] = CONCAT44(uStack_b4,fStack_b8);
  *param_3 = uStack_c0;
  lVar12 = *(long *)puVar4;
  if (*(int *)(lVar12 + 0xe0) == 0) {
    thunk_FUN_03db619c(lVar12);
    lVar12 = *(long *)puVar4;
  }
  puVar5 = PTR_DAT_09223398;
  puVar4 = PTR_DAT_091a2ee8;
  puVar3 = PTR_DAT_091a1008;
  lVar10 = *(long *)(param_1 + 0x20);
  if (lVar10 != 0) {
    uStack_1fc = 0;
    puVar13 = *(undefined4 **)(lVar12 + 0xb8);
                    /* try { // try from 0746dba0 to 0756dba7 has its CatchHandler @ 0746dc80 */
    uStack_1b4 = *puVar13;
    uStack_1b8 = puVar13[1];
    iVar15 = 0;
    uStack_1bc = puVar13[2];
    do {
      if (*(int *)(lVar10 + 0x18) <= iVar15) {
        return uStack_1fc;
      }
      FUN_0592ed18(&uStack_1a0,lVar10,iVar15,*(undefined8 *)puVar5);
                    /* try { // try from 0746dbe8 to 0756dbeb has its CatchHandler @ 0746dc84 */
                    /* try { // try from 0746dbec to 0756dbf7 has its CatchHandler @ 0746dc94 */
      uStack_ec = CONCAT44(uStack_178,uStack_17c);
      fStack_108 = fStack_198;
      uStack_104 = uStack_194;
      uStack_110 = uStack_1a0;
      uStack_f8 = uStack_188;
      uStack_100 = uStack_190;
      uStack_fc = uStack_18c;
      uStack_f4 = uStack_184;
      uStack_f0 = uStack_180;
      lVar12 = *(long *)(param_1 + 0x20);
      if (lVar12 == 0) break;
      iVar1 = *(int *)(lVar12 + 0x18);
                    /* try { // try from 0746dc08 to 0756dc27 has its CatchHandler @ 0746dc98 */
      iVar15 = iVar15 + 1;
      iVar2 = 0;
      if (iVar1 != 0) {
        iVar2 = iVar15 / iVar1;
      }
      FUN_0592ed18(&uStack_1a0,lVar12,iVar15 - iVar2 * iVar1,*(undefined8 *)puVar5);
      uStack_120 = CONCAT44(uStack_17c,uStack_180);
      fStack_138 = fStack_198;
      uStack_134 = uStack_194;
                    /* try { // try from 0746dc28 to 0756dc5f has its CatchHandler @ 0746dad0 */
      uStack_140 = uStack_1a0;
      uStack_128 = uStack_188;
      uStack_124 = uStack_184;
      uStack_130 = uStack_190;
      uStack_12c = uStack_18c;
      if (uStack_ec._4_1_ == '\0') {
        if ((uStack_178 & 0xff) == 0) goto LAB_0746dc44;
        goto LAB_0746e128;
      }
      if ((uStack_178 & 0xff) == 0) {
LAB_0746dc44:
        if (*(long *)(param_1 + 0x20) == 0) break;
        if (*(int *)(*(long *)(param_1 + 0x20) + 0x18) == 1) goto LAB_0746dc58;
        uStack_ac = CONCAT44(uStack_f8,uStack_fc);
        uStack_c0 = uStack_110;
        FUN_07411d10(&uStack_1a0,param_4,&uStack_c0,0);
        uVar9 = uStack_188;
        uVar8 = uStack_18c;
        uVar7 = uStack_194;
        fVar6 = fStack_198;
        uVar31 = uStack_1a0;
        uVar11 = uStack_1a0 & 0xffffffff;
        fVar22 = uStack_1a0._4_4_;
        uStack_ac = CONCAT44(uStack_128,uStack_12c);
        uStack_c0 = uStack_140;
        uVar23 = uStack_188;
        FUN_07411d10(&uStack_1a0,param_4,&uStack_c0,0);
        uVar17 = uStack_18c;
        fVar30 = (float)FUN_0746d3e8(&uStack_110,param_4);
        fVar21 = fVar30;
        fVar25 = fVar22;
        fVar29 = fVar6;
        fVar16 = (float)FUN_0746e16c(uVar11);
        fVar32 = *param_2;
        fVar26 = param_2[1];
        fVar28 = param_2[2];
        fVar19 = param_2[3];
        fVar33 = param_2[4];
        fVar27 = param_2[5];
        if (DAT_098363dc == '\0') {
          FUN_03d2d2b0(puVar4);
          DAT_098363dc = '\x01';
        }
        fVar27 = fVar29 * fVar27 + fVar16 * fVar19 + fVar25 * fVar33;
        fVar33 = ABS(fVar27);
        if (fVar33 <= 0.0) {
          fVar33 = 0.0;
        }
        fVar20 = **(float **)(*(long *)puVar4 + 0xb8) * 8.0;
        fVar19 = fVar33 * DAT_01914a48;
        if (fVar33 * DAT_01914a48 <= fVar20) {
          fVar19 = fVar20;
        }
        if (fVar19 <= ABS(0.0 - fVar27)) {
          uVar24 = (ulong)(uint)(fVar29 * fVar28);
          fVar21 = -(fVar29 * fVar28 + fVar32 * fVar16 + fVar25 * fVar26) - fVar21;
          uVar11 = (ulong)(uint)fVar21;
          if (fVar21 / fVar27 <= 0.0) goto LAB_0746e128;
          uVar18 = FUN_08a157e0(param_2,0);
          FUN_0746d40c(uVar18,param_1,&uStack_174);
          fStack_d8 = fVar6;
          uVar17 = FUN_0746e4cc(uVar31 & 0xffffffff,fVar22,fVar6,fVar30,uVar17,uVar23);
          uStack_e0 = CONCAT44(fVar22,uVar17);
          uStack_d4 = FUN_08a44560(uVar7,0);
          uStack_c8 = uVar9;
          uStack_cc = uVar8;
LAB_0746e0a0:
          fVar22 = fStack_d8;
          uVar31 = uStack_e0 & 0xffffffff;
          uVar7 = uStack_e0._4_4_;
          if (*(int *)(*(long *)PTR_DAT_09220a10 + 0xe0) == 0) {
            thunk_FUN_03db619c();
          }
          FUN_0746c6c8(uVar18,uVar11,uVar24,uVar31,uVar7,fVar22,&uStack_150,0);
          uVar11 = FUN_07466a2c(uStack_1b4,uStack_1b8,uStack_1bc,&uStack_150);
          if ((uVar11 & 1) != 0) {
            uStack_1b8 = uStack_150._4_4_;
            uStack_1b4 = (undefined4)uStack_150;
            uStack_1bc = uStack_148;
            FUN_074115cc(param_3,&uStack_e0,0);
            uStack_1fc = 1;
          }
        }
      }
      else {
LAB_0746dc58:
        uStack_ac = CONCAT44(uStack_f8,uStack_fc);
                    /* try { // try from 0746dc60 to 0756dc67 has its CatchHandler @ 0746dc9c */
                    /* try { // try from 0746dc68 to 0756dc6b has its CatchHandler @ 0746dc90 */
                    /* try { // try from 0746dc6c to 0756dc6f has its CatchHandler @ 0746dc8c */
                    /* try { // try from 0746dc70 to 0756dc73 has its CatchHandler @ 0746dc88 */
        uStack_c0 = uStack_110;
                    /* try { // try from 0746dc74 to 0756dc77 has its CatchHandler @ 0746dc7c */
                    /* try { // try from 0746dc78 to 0756dcb3 has its CatchHandler @ 0746dad0 */
        FUN_07411d10(&uStack_1a0,param_4,&uStack_c0,0);
        fVar22 = fStack_198;
        fStack_168 = fStack_198;
                    /* catch(type#1 @ 08cb6798) { ... } // from try @ 0746dc74 with catch @ 0746dc7c
                        */
                    /* catch(type#1 @ 08cb6798) { ... } // from try @ 0746dba0 with catch @ 0746dc80
                        */
                    /* catch(type#1 @ 08cb6798) { ... } // from try @ 0746dbe8 with catch @ 0746dc84
                        */
                    /* catch(type#1 @ 08cb6798) { ... } // from try @ 0746dc70 with catch @ 0746dc88
                        */
        uStack_170 = uStack_1a0;
        uVar11 = uStack_170;
        uStack_15c = uStack_18c;
        uStack_158 = uStack_188;
                    /* catch(type#1 @ 08cb6798) { ... } // from try @ 0746dc6c with catch @ 0746dc8c
                        */
        uStack_164 = uStack_194;
        uStack_160 = uStack_190;
                    /* catch(type#1 @ 08cb6798) { ... } // from try @ 0746dc68 with catch @ 0746dc90
                        */
        uStack_170._0_4_ = (float)uStack_1a0;
        fVar6 = (float)uStack_170;
                    /* catch(type#1 @ 08cb6798) { ... } // from try @ 0746dbec with catch @ 0746dc94
                        */
        uStack_170._4_4_ = (float)(uStack_1a0 >> 0x20);
        fVar21 = uStack_170._4_4_;
                    /* catch(type#1 @ 08cb6798) { ... } // from try @ 0746dc08 with catch @ 0746dc98
                        */
        fVar30 = param_2[3];
        fVar29 = param_2[4];
                    /* catch(type#1 @ 08cb6798) { ... } // from try @ 0746dc60 with catch @ 0746dc9c
                        */
        fVar25 = param_2[5];
        uStack_170 = uVar11;
        if (DAT_0983637d == '\0') {
                    /* try { // try from 0746dcb4 to 0756dcb7 has its CatchHandler @ 0746dcd8 */
          FUN_03d2d2b0(puVar3);
                    /* try { // try from 0746dcb8 to 0756dcdf has its CatchHandler @ 0746dad0 */
          DAT_0983637d = '\x01';
        }
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          thunk_FUN_03db619c();
        }
                    /* catch() { ... } // from try @ 0746dcb4 with catch @ 0746dcd8 */
                    /* try { // try from 0746dce0 to 0756dce7 has its CatchHandler @ 0746dcfc */
                    /* try { // try from 0746dce8 to 0756dcf3 has its CatchHandler @ 0746dad0 */
        fVar16 = SQRT(fVar25 * fVar25 + fVar30 * fVar30 + fVar29 * fVar29);
                    /* try { // try from 0746dcf4 to 0756dcfb has its CatchHandler @ 0746dcfc */
        if (fVar16 <= DAT_0191476c) {
          if (DAT_098362c7 == '\0') {
            FUN_03d2d2b0(PTR_DAT_091a0f88);
            DAT_098362c7 = '\x01';
          }
          pfVar14 = *(float **)(*(long *)PTR_DAT_091a0f88 + 0xb8);
          fVar30 = *pfVar14;
          fVar29 = pfVar14[1];
          fVar16 = pfVar14[2];
        }
        else {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0746dce0 with catch @ 0746dcfc
                       catch(type#2 @ 00000000) { ... } // from try @ 0746dcf4 with catch @ 0746dcfc
                        */
          fVar30 = -fVar30 / fVar16;
          fVar29 = -fVar29 / fVar16;
          fVar16 = -fVar25 / fVar16;
        }
        fVar25 = *param_2;
        fVar33 = param_2[1];
        fVar26 = param_2[2];
        fVar27 = param_2[3];
        fVar32 = param_2[4];
        fVar28 = param_2[5];
        if (DAT_098363dc == '\0') {
          FUN_03d2d2b0(puVar4);
          DAT_098363dc = '\x01';
        }
        fVar27 = fVar16 * fVar28 + fVar30 * fVar27 + fVar29 * fVar32;
        fVar28 = ABS(fVar27);
        if (fVar28 <= 0.0) {
          fVar28 = 0.0;
        }
        fVar19 = **(float **)(*(long *)puVar4 + 0xb8) * 8.0;
        fVar32 = fVar28 * DAT_01914a48;
        if (fVar28 * DAT_01914a48 <= fVar19) {
          fVar32 = fVar19;
        }
        if (fVar32 <= ABS(0.0 - fVar27)) {
          fVar25 = fVar16 * fVar26 + fVar30 * fVar25 + fVar29 * fVar33;
          uVar24 = (ulong)(uint)fVar25;
          fVar25 = (fVar22 * fVar16 + fVar6 * fVar30 + fVar21 * fVar29) - fVar25;
          uVar11 = (ulong)(uint)fVar25;
          if (0.0 < fVar25 / fVar27) {
            uVar18 = FUN_08a157e0(param_2,0);
            FUN_074115cc(&uStack_e0,&uStack_170,0);
            goto LAB_0746e0a0;
          }
        }
      }
LAB_0746e128:
      lVar10 = *(long *)(param_1 + 0x20);
    } while (lVar10 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_03d2d548();
}


