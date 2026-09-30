/*
FUNCTION_NAME: FUN_0638602c
ENTRY_POINT: 0638602c
PROGRAM: Waifu-libil2cpp.so
SCORE: 70
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;data_collection;frame_behavior
EVIDENCE: validity_or_gating_hits_21;ui_or_gameplay_sink_hits_2;strong_file_logging_hits_2;frame_or_lifecycle_behavior
*/


void FUN_0638602c(undefined1 param_1 [16],ulong param_2,long param_3)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined4 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined8 uVar12;
  undefined4 uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  
                    /* try { // try from 0638602c to 06486067 has its CatchHandler @ 063861f4 */
  if ((DAT_086dea07 & 1) == 0) {
    FUN_0335b6c8(&DAT_083d11f8,1);
    DataMemoryBarrier(2,3);
    FUN_0335b6c8(&DAT_08440d58,1);
    DataMemoryBarrier(2,3);
                    /* try { // try from 06386094 to 064860cf has its CatchHandler @ 063861ec */
    DAT_086dea07 = 1;
  }
  if (DAT_086f09e0 == (code *)0x0) {
    DAT_086f09e0 = (code *)FUN_033d1b68("UnityEngine.Input::GetKeyDownInt(UnityEngine.KeyCode)");
  }
  uVar3 = (*DAT_086f09e0)(8);
  fVar11 = DAT_012ed8ec;
  if ((uVar3 & 1) == 0) {
    uVar3 = 0;
    lVar5 = 0x24;
    do {
                    /* try { // try from 0638614c to 0648614f has its CatchHandler @ 063861d0 */
      if (DAT_086f09f0 == (code *)0x0) {
        DAT_086f09f0 = (code *)FUN_033d1b68("UnityEngine.Input::GetMouseButtonDown(System.Int32)");
      }
      uVar4 = (*DAT_086f09f0)(uVar3 & 0xffffffff);
      if ((uVar4 & 1) == 0) {
LAB_06386288:
                    /* catch() { ... } // from try @ 06385d98 with catch @ 06386288 */
                    /* catch() { ... } // from try @ 06385d88 with catch @ 0638628c */
                    /* catch() { ... } // from try @ 06385df4 with catch @ 06386290 */
        if (DAT_086f09f8 == (code *)0x0) {
                    /* catch() { ... } // from try @ 06385df0 with catch @ 06386294 */
                    /* catch() { ... } // from try @ 06385de8 with catch @ 06386298 */
                    /* catch() { ... } // from try @ 06385d68 with catch @ 0638629c */
          DAT_086f09f8 = (code *)FUN_033d1b68("UnityEngine.Input::GetMouseButtonUp(System.Int32)");
                    /* catch() { ... } // from try @ 06385910 with catch @ 063862a0 */
                    /* catch() { ... } // from try @ 06385978 with catch @ 063862a4 */
                    /* catch() { ... } // from try @ 06385dd0 with catch @ 063862a8 */
        }
                    /* catch() { ... } // from try @ 06385dcc with catch @ 063862ac */
                    /* catch() { ... } // from try @ 06385dc8 with catch @ 063862b0 */
        uVar4 = (*DAT_086f09f8)(uVar3 & 0xffffffff);
        fVar15 = (float)param_2;
                    /* catch() { ... } // from try @ 06385dc4 with catch @ 063862b4 */
        if ((uVar4 & 1) != 0) {
                    /* catch() { ... } // from try @ 06385db8 with catch @ 063862b8 */
          lVar6 = *(long *)(param_3 + 0x60);
                    /* catch() { ... } // from try @ 06385db4 with catch @ 063862bc */
          if (lVar6 == 0) goto LAB_06386820;
                    /* catch() { ... } // from try @ 06385db0 with catch @ 063862c0 */
                    /* catch() { ... } // from try @ 06385b30 with catch @ 063862c4 */
                    /* catch() { ... } // from try @ 06385da4 with catch @ 063862c8 */
          if (*(uint *)(lVar6 + 0x18) <= uVar3) goto LAB_0638681c;
                    /* catch() { ... } // from try @ 06385bec with catch @ 063862cc */
                    /* catch() { ... } // from try @ 06385da0 with catch @ 063862d0 */
                    /* catch() { ... } // from try @ 06385d9c with catch @ 063862d4 */
          if (*(char *)(lVar6 + uVar3 + 0x20) != '\0') {
                    /* catch() { ... } // from try @ 06385ac4 with catch @ 063862d8 */
                    /* catch() { ... } // from try @ 06385d90 with catch @ 063862dc */
            *(undefined1 *)(lVar6 + uVar3 + 0x20) = 0;
                    /* catch() { ... } // from try @ 06385d8c with catch @ 063862e0 */
            if (lVar5 == 0x24) {
                    /* catch() { ... } // from try @ 06385d80 with catch @ 063862e4 */
                    /* catch() { ... } // from try @ 06385d7c with catch @ 063862e8 */
              if (*(long *)(param_3 + 0x68) == 0) goto LAB_06386820;
                    /* catch() { ... } // from try @ 06385d74 with catch @ 063862ec */
                    /* catch() { ... } // from try @ 06385d70 with catch @ 063862f0 */
              if (*(int *)(*(long *)(param_3 + 0x68) + 0x18) == 0) goto LAB_0638681c;
                    /* catch() { ... } // from try @ 06385d6c with catch @ 063862f4 */
                    /* catch() { ... } // from try @ 06385a10 with catch @ 063862f8
                       catch() { ... } // from try @ 06385dec with catch @ 063862f8 */
              FUN_07a67b60(0);
                    /* catch() { ... } // from try @ 06385d5c with catch @ 063862fc */
                    /* catch() { ... } // from try @ 06385d58 with catch @ 06386300 */
              if (*(long *)(param_3 + 0x48) == 0) goto LAB_06386820;
                    /* catch() { ... } // from try @ 06385d50 with catch @ 06386304 */
                    /* catch() { ... } // from try @ 06385d4c with catch @ 06386308 */
              if (*(int *)(*(long *)(param_3 + 0x48) + 0x18) == 0) goto LAB_0638681c;
                    /* catch() { ... } // from try @ 06385d48 with catch @ 0638630c */
                    /* catch() { ... } // from try @ 06385d44 with catch @ 06386310 */
              if (*(long *)(param_3 + 0x50) == 0) goto LAB_06386820;
                    /* catch() { ... } // from try @ 06385d40 with catch @ 06386314 */
                    /* catch() { ... } // from try @ 06385b58 with catch @ 06386318 */
              if (*(int *)(*(long *)(param_3 + 0x50) + 0x18) == 0) goto LAB_0638681c;
                    /* catch() { ... } // from try @ 06385a54 with catch @ 0638631c */
                    /* catch() { ... } // from try @ 063859ac with catch @ 06386320 */
                    /* catch() { ... } // from try @ 06385a88 with catch @ 06386324
                       catch() { ... } // from try @ 06385d78 with catch @ 06386324 */
                    /* catch() { ... } // from try @ 063859cc with catch @ 06386328
                       catch() { ... } // from try @ 06385d54 with catch @ 06386328 */
              FUN_06386a30(param_3,0);
            }
                    /* catch() { ... } // from try @ 06385cd4 with catch @ 06386338 */
                    /* catch() { ... } // from try @ 06385d04 with catch @ 0638633c */
                    /* catch() { ... } // from try @ 06385cb4 with catch @ 06386340 */
            lVar6 = *(long *)(param_3 + 0x68);
                    /* catch() { ... } // from try @ 06385cc8 with catch @ 06386344 */
            if (DAT_086d8912 == '\0') {
                    /* catch() { ... } // from try @ 06385cc4 with catch @ 06386348 */
                    /* catch() { ... } // from try @ 06385cc0 with catch @ 0638634c */
                    /* catch() { ... } // from try @ 06385c90 with catch @ 06386350 */
                    /* catch() { ... } // from try @ 06385cbc with catch @ 06386354 */
              FUN_0335b6c8(&DAT_083d2c48,1);
                    /* catch() { ... } // from try @ 06385cb8 with catch @ 06386358 */
              DataMemoryBarrier(2,3);
                    /* catch() { ... } // from try @ 06385c38 with catch @ 0638635c */
                    /* catch() { ... } // from try @ 06384e68 with catch @ 06386360 */
              DAT_086d8912 = '\x01';
            }
                    /* catch() { ... } // from try @ 06385164 with catch @ 06386368
                       catch() { ... } // from try @ 06385174 with catch @ 06386368 */
            if (lVar6 == 0) goto LAB_06386820;
                    /* catch() { ... } // from try @ 06384bc8 with catch @ 0638636c */
                    /* catch() { ... } // from try @ 06385c60 with catch @ 06386374 */
            if (*(uint *)(lVar6 + 0x18) <= uVar3) goto LAB_0638681c;
                    /* try { // try from 0638638c to 0648638f has its CatchHandler @ 063864e8 */
            *(undefined8 *)(lVar6 + lVar5 + -4) = **(undefined8 **)(DAT_083d2c48 + 0xb8);
                    /* try { // try from 06386394 to 0648639b has its CatchHandler @ 063864e4 */
            lVar6 = *(long *)(*(long *)(DAT_083d11f8 + 0xb8) + 0x18);
                    /* try { // try from 0638639c to 064863b7 has its CatchHandler @ 06384608 */
            if (lVar6 != 0) {
              FUN_07a67b60(0);
                    /* try { // try from 063863b8 to 06486423 has its CatchHandler @ 0638651c */
              (**(code **)(lVar6 + 0x18))
                        (*(undefined8 *)(lVar6 + 0x40),uVar3 & 0xffffffff,
                         *(undefined8 *)(lVar6 + 0x28));
            }
            lVar6 = *(long *)(param_3 + 0x38);
            if (lVar6 == 0) goto LAB_06386820;
            if (*(int *)(lVar6 + 0x18) == 0) goto LAB_0638681c;
            fVar14 = *(float *)(lVar6 + 0x20);
            fVar16 = *(float *)(lVar6 + 0x24);
            fVar8 = (float)FUN_07a67b60(0);
            if (DAT_086d7d53 == '\0') {
              FUN_0335b6c8(&DAT_083ce8b0,1);
              DataMemoryBarrier(2,3);
              DAT_086d7d53 = '\x01';
            }
            if (*(int *)(DAT_083ce8b0 + 0xe0) == 0) {
              FUN_033b9870();
            }
            fVar14 = fVar14 - fVar8;
            fVar16 = fVar16 - fVar15;
                    /* try { // try from 06386430 to 06486433 has its CatchHandler @ 06386510 */
            fVar16 = fVar16 * fVar16;
            param_2 = (ulong)(uint)fVar16;
                    /* try { // try from 06386454 to 0648645b has its CatchHandler @ 0638650c */
            if ((SQRT(fVar14 * fVar14 + fVar16) / *(float *)(param_3 + 0x74) <=
                 *(float *)(param_3 + 0x20)) &&
               (lVar6 = *(long *)(*(long *)(DAT_083d11f8 + 0xb8) + 0x28), lVar6 != 0)) {
                    /* try { // try from 0638645c to 06486463 has its CatchHandler @ 06386508 */
              FUN_07a67b60(0);
                    /* try { // try from 06386464 to 0648648b has its CatchHandler @ 06386504 */
              (**(code **)(lVar6 + 0x18))
                        (*(undefined8 *)(lVar6 + 0x40),uVar3 & 0xffffffff,
                         *(undefined8 *)(lVar6 + 0x28));
            }
          }
        }
        fVar15 = (float)param_2;
        lVar6 = *(long *)(param_3 + 0x60);
        if (lVar6 == 0) goto LAB_06386820;
        if (*(uint *)(lVar6 + 0x18) <= uVar3) goto LAB_0638681c;
                    /* try { // try from 06386494 to 06486497 has its CatchHandler @ 063864e0 */
        if (*(char *)(lVar6 + uVar3 + 0x20) != '\0') {
                    /* try { // try from 06386498 to 064864a7 has its CatchHandler @ 06384608 */
          fVar8 = (float)FUN_07a67b60(0);
                    /* try { // try from 063864a8 to 064864b7 has its CatchHandler @ 0638651c */
          FUN_07a67b60(0);
          lVar6 = *(long *)(param_3 + 0x68);
          if (lVar6 == 0) {
LAB_06386820:
                    /* WARNING: Subroutine does not return */
            FUN_033d1d3c();
          }
          if (*(uint *)(lVar6 + 0x18) <= uVar3) {
LAB_0638681c:
                    /* WARNING: Subroutine does not return */
            FUN_033d1d44();
          }
                    /* try { // try from 063864c0 to 064864c3 has its CatchHandler @ 063864dc */
                    /* try { // try from 063864d0 to 064864d7 has its CatchHandler @ 063864d8 */
          fVar16 = fVar15 - *(float *)(lVar6 + lVar5);
          fVar14 = fVar8 - ((float *)(lVar6 + lVar5))[-1];
                    /* catch() { ... } // from try @ 063864d0 with catch @ 063864d8 */
                    /* catch() { ... } // from try @ 063864c0 with catch @ 063864dc */
          uVar4 = (ulong)(uint)(fVar16 * fVar16);
                    /* catch() { ... } // from try @ 06386494 with catch @ 063864e0 */
                    /* catch() { ... } // from try @ 06386394 with catch @ 063864e4 */
                    /* catch() { ... } // from try @ 0638638c with catch @ 063864e8 */
          if (fVar11 <= fVar14 * fVar14 + fVar16 * fVar16) {
            fVar17 = *(float *)(param_3 + 0x74);
            if (DAT_086ef698 == (code *)0x0) {
                    /* try { // try from 063864fc to 06486527 has its CatchHandler @ 06386590 */
              DAT_086ef698 = (code *)FUN_033d1b68("UnityEngine.Time::get_deltaTime()");
                    /* catch() { ... } // from try @ 06386464 with catch @ 06386504 */
            }
                    /* catch() { ... } // from try @ 0638645c with catch @ 06386508 */
            fVar9 = (float)(*DAT_086ef698)();
                    /* catch() { ... } // from try @ 06386454 with catch @ 0638650c */
                    /* catch() { ... } // from try @ 06386430 with catch @ 06386510 */
            lVar6 = *(long *)(*(long *)(DAT_083d11f8 + 0xb8) + 8);
            if (lVar6 != 0) {
                    /* catch() { ... } // from try @ 063863b8 with catch @ 0638651c
                       catch() { ... } // from try @ 063864a8 with catch @ 0638651c */
                    /* try { // try from 06386528 to 0648653f has its CatchHandler @ 06384608 */
              uVar12 = FUN_07a67b60(0);
              if (DAT_086ed8a0 == (code *)0x0) {
                    /* try { // try from 06386540 to 06486543 has its CatchHandler @ 06386568 */
                    /* try { // try from 06386544 to 0648656f has its CatchHandler @ 06384608 */
                DAT_086ed8a0 = (code *)FUN_033d1b68("UnityEngine.Screen::get_width()");
              }
              iVar1 = (*DAT_086ed8a0)();
              if (DAT_086ed8a8 == (code *)0x0) {
                    /* catch() { ... } // from try @ 06386540 with catch @ 06386568 */
                    /* try { // try from 06386570 to 0648657b has its CatchHandler @ 06386590 */
                DAT_086ed8a8 = (code *)FUN_033d1b68("UnityEngine.Screen::get_height()");
              }
                    /* try { // try from 0638657c to 06486587 has its CatchHandler @ 06384608 */
              iVar2 = (*DAT_086ed8a8)();
                    /* try { // try from 06386588 to 0648658f has its CatchHandler @ 06386590 */
              if (DAT_086ef698 == (code *)0x0) {
                    /* catch() { ... } // from try @ 063855b0 with catch @ 06386590
                       catch() { ... } // from try @ 063857a4 with catch @ 06386590
                       catch() { ... } // from try @ 063861c8 with catch @ 06386590
                       catch() { ... } // from try @ 063864fc with catch @ 06386590
                       catch() { ... } // from try @ 06386570 with catch @ 06386590
                       catch() { ... } // from try @ 06386588 with catch @ 06386590 */
                DAT_086ef698 = (code *)FUN_033d1b68("UnityEngine.Time::get_deltaTime()");
              }
              fVar10 = (float)(*DAT_086ef698)();
              (**(code **)(lVar6 + 0x18))
                        (uVar12,uVar4,(fVar14 / (float)iVar1) / fVar10,
                         (fVar16 / (float)iVar2) / fVar10,(fVar14 / fVar17) / fVar9,
                         (fVar16 / fVar17) / fVar9,*(undefined8 *)(lVar6 + 0x40),uVar3 & 0xffffffff,
                         *(undefined8 *)(lVar6 + 0x28));
            }
          }
          uVar13 = (undefined4)uVar4;
          lVar6 = *(long *)(param_3 + 0x68);
          uVar7 = FUN_07a67b60(0);
          if (lVar6 == 0) goto LAB_06386820;
          if (*(uint *)(lVar6 + 0x18) <= uVar3) goto LAB_0638681c;
          ((undefined4 *)(lVar6 + lVar5))[-1] = uVar7;
          *(undefined4 *)(lVar6 + lVar5) = uVar13;
          lVar6 = *(long *)(param_3 + 0x48);
          if (lVar6 == 0) goto LAB_06386820;
          if (*(uint *)(lVar6 + 0x18) <= uVar3) goto LAB_0638681c;
          uVar12 = *(undefined8 *)(lVar6 + lVar5 + -4);
          param_2 = CONCAT44(fVar15,fVar8);
          *(ulong *)(lVar6 + lVar5 + -4) =
               CONCAT44((fVar15 + (float)((ulong)uVar12 >> 0x20)) * 0.5,
                        (fVar8 + (float)uVar12) * 0.5);
          lVar6 = *(long *)(param_3 + 0x50);
          if (DAT_086ef688 == (code *)0x0) {
            DAT_086ef688 = (code *)FUN_033d1b68("UnityEngine.Time::get_time()");
          }
          uVar7 = (*DAT_086ef688)();
          if (lVar6 == 0) goto LAB_06386820;
          if (*(uint *)(lVar6 + 0x18) <= uVar3) goto LAB_0638681c;
          *(undefined4 *)(lVar6 + uVar3 * 4 + 0x20) = uVar7;
        }
      }
      else {
        uVar4 = FUN_063868cc(param_3);
        if ((uVar4 & 1) == 0) {
          lVar6 = *(long *)(param_3 + 0x60);
                    /* try { // try from 0638617c to 064861b7 has its CatchHandler @ 063861d4 */
          if (lVar6 == 0) goto LAB_06386820;
          uVar4 = (ulong)*(uint *)(lVar6 + 0x18);
          if (uVar4 <= uVar3) goto LAB_0638681c;
          if ((lVar5 == 0x24) && (*(char *)(lVar6 + uVar3 + 0x20) == '\0')) {
            lVar6 = *(long *)(param_3 + 0x50);
            if (DAT_086ef688 == (code *)0x0) {
              DAT_086ef688 = (code *)FUN_033d1b68("UnityEngine.Time::get_time()");
                    /* try { // try from 063861b8 to 064861bf has its CatchHandler @ 063861c0 */
            }
            uVar7 = (*DAT_086ef688)();
                    /* catch() { ... } // from try @ 063861b8 with catch @ 063861c0 */
            if (lVar6 == 0) goto LAB_06386820;
                    /* catch() { ... } // from try @ 06385838 with catch @ 063861c4 */
                    /* try { // try from 063861c8 to 064861cf has its CatchHandler @ 06386590 */
            if (*(int *)(lVar6 + 0x18) == 0) goto LAB_0638681c;
            *(undefined4 *)(lVar6 + 0x20) = uVar7;
                    /* catch() { ... } // from try @ 0638614c with catch @ 063861d0
                       try { // try from 063861d0 to 0648638b has its CatchHandler @ 06384608 */
            lVar6 = *(long *)(param_3 + 0x60);
                    /* catch() { ... } // from try @ 0638617c with catch @ 063861d4 */
            if (lVar6 == 0) goto LAB_06386820;
                    /* catch() { ... } // from try @ 063860d8 with catch @ 063861d8 */
            uVar4 = (ulong)*(uint *)(lVar6 + 0x18);
          }
                    /* catch() { ... } // from try @ 06385ffc with catch @ 063861dc */
                    /* catch() { ... } // from try @ 06386108 with catch @ 063861e0 */
          if (uVar4 <= uVar3) goto LAB_0638681c;
                    /* catch() { ... } // from try @ 06385f40 with catch @ 063861e4 */
                    /* catch() { ... } // from try @ 06385f18 with catch @ 063861e8 */
                    /* catch() { ... } // from try @ 06386094 with catch @ 063861ec */
          *(undefined1 *)(lVar6 + uVar3 + 0x20) = 1;
                    /* catch() { ... } // from try @ 06385e7c with catch @ 063861f0 */
          lVar6 = *(long *)(param_3 + 0x38);
                    /* catch() { ... } // from try @ 0638602c with catch @ 063861f4 */
                    /* catch() { ... } // from try @ 06385e70 with catch @ 063861f8 */
          uVar7 = FUN_07a67b60(0);
                    /* catch() { ... } // from try @ 06385e64 with catch @ 063861fc */
          if (lVar6 == 0) goto LAB_06386820;
                    /* catch() { ... } // from try @ 06385fb8 with catch @ 06386200 */
                    /* catch() { ... } // from try @ 06385e58 with catch @ 06386204 */
                    /* catch() { ... } // from try @ 06385f50 with catch @ 06386208 */
          if (*(uint *)(lVar6 + 0x18) <= uVar3) goto LAB_0638681c;
                    /* catch() { ... } // from try @ 06385f34 with catch @ 0638620c */
                    /* catch() { ... } // from try @ 06385f30 with catch @ 06386210 */
          ((undefined4 *)(lVar6 + lVar5))[-1] = uVar7;
          *(undefined4 *)(lVar6 + lVar5) = (int)param_2;
                    /* catch() { ... } // from try @ 06385f28 with catch @ 06386214 */
          lVar6 = *(long *)(param_3 + 0x68);
                    /* catch() { ... } // from try @ 06385f24 with catch @ 06386218 */
                    /* catch() { ... } // from try @ 06385f20 with catch @ 0638621c */
          uVar7 = FUN_07a67b60(0);
                    /* catch() { ... } // from try @ 06385f1c with catch @ 06386220 */
          if (lVar6 == 0) goto LAB_06386820;
                    /* catch() { ... } // from try @ 06385e30 with catch @ 06386224 */
                    /* catch() { ... } // from try @ 06385e24 with catch @ 06386228 */
                    /* catch() { ... } // from try @ 06385ed4 with catch @ 0638622c */
          if (*(uint *)(lVar6 + 0x18) <= uVar3) goto LAB_0638681c;
                    /* catch() { ... } // from try @ 06385e18 with catch @ 06386230 */
                    /* catch() { ... } // from try @ 06385e8c with catch @ 06386234 */
                    /* catch() { ... } // from try @ 06385e0c with catch @ 06386238 */
          ((undefined4 *)(lVar6 + lVar5))[-1] = uVar7;
          *(undefined4 *)(lVar6 + lVar5) = (int)param_2;
                    /* catch() { ... } // from try @ 06385e00 with catch @ 0638623c */
          if (lVar5 == 0x24) {
                    /* catch() { ... } // from try @ 06385de4 with catch @ 06386240 */
            lVar6 = *(long *)(param_3 + 0x48);
                    /* catch() { ... } // from try @ 06385888 with catch @ 06386244 */
                    /* catch() { ... } // from try @ 06385dd8 with catch @ 06386248 */
            uVar7 = FUN_07a67b60(0);
                    /* catch() { ... } // from try @ 06385c14 with catch @ 0638624c */
            if (lVar6 == 0) goto LAB_06386820;
                    /* catch() { ... } // from try @ 06385e4c with catch @ 06386250 */
                    /* catch() { ... } // from try @ 06385e48 with catch @ 06386254 */
            if (*(int *)(lVar6 + 0x18) == 0) goto LAB_0638681c;
                    /* catch() { ... } // from try @ 06385e44 with catch @ 06386258 */
            *(undefined4 *)(lVar6 + 0x20) = uVar7;
            *(int *)(lVar6 + 0x24) = (int)param_2;
          }
                    /* catch() { ... } // from try @ 06385e40 with catch @ 0638625c */
                    /* catch() { ... } // from try @ 0638594c with catch @ 06386260 */
                    /* catch() { ... } // from try @ 06385930 with catch @ 06386264 */
          lVar6 = **(long **)(DAT_083d11f8 + 0xb8);
                    /* catch() { ... } // from try @ 063858bc with catch @ 06386268
                       catch() { ... } // from try @ 06385f2c with catch @ 06386268 */
          if (lVar6 != 0) {
                    /* catch() { ... } // from try @ 06385e3c with catch @ 0638626c */
                    /* catch() { ... } // from try @ 06385e38 with catch @ 06386270 */
            FUN_07a67b60(0);
                    /* catch() { ... } // from try @ 06385860 with catch @ 06386274 */
                    /* catch() { ... } // from try @ 06385e34 with catch @ 06386278 */
                    /* catch() { ... } // from try @ 06385dc0 with catch @ 0638627c */
                    /* catch() { ... } // from try @ 06385dac with catch @ 06386280 */
                    /* catch() { ... } // from try @ 06385af0 with catch @ 06386284 */
            (**(code **)(lVar6 + 0x18))
                      (*(undefined8 *)(lVar6 + 0x40),uVar3 & 0xffffffff,
                       *(undefined8 *)(lVar6 + 0x28));
          }
          goto LAB_06386288;
        }
      }
      uVar12 = DAT_08440d58;
      lVar5 = lVar5 + 8;
      uVar3 = uVar3 + 1;
    } while (lVar5 != 0x3c);
    if (DAT_086f0ab8 == (code *)0x0) {
      DAT_086f0ab8 = (code *)FUN_033d1b68(
                                         "UnityEngine.Internal.InputUnsafeUtility::GetAxis(System.String)"
                                         );
    }
    fVar11 = (float)(*DAT_086f0ab8)(uVar12);
    if (DAT_012edd80 < ABS(fVar11)) {
      fVar15 = *(float *)(param_3 + 0x2c);
      if (DAT_086ef698 == (code *)0x0) {
        DAT_086ef698 = (code *)FUN_033d1b68("UnityEngine.Time::get_deltaTime()");
      }
      fVar8 = (float)(*DAT_086ef698)();
      if (DAT_086ed8a0 == (code *)0x0) {
        DAT_086ed8a0 = (code *)FUN_033d1b68("UnityEngine.Screen::get_width()");
      }
      iVar1 = (*DAT_086ed8a0)();
      if (DAT_086ed8a8 == (code *)0x0) {
        DAT_086ed8a8 = (code *)FUN_033d1b68("UnityEngine.Screen::get_height()");
      }
      iVar2 = (*DAT_086ed8a8)();
      if (DAT_086ef698 == (code *)0x0) {
        DAT_086ef698 = (code *)FUN_033d1b68("UnityEngine.Time::get_deltaTime()");
      }
      fVar14 = (float)(*DAT_086ef698)();
      lVar5 = *(long *)(*(long *)(DAT_083d11f8 + 0xb8) + 0x38);
      if (lVar5 != 0) {
        fVar11 = fVar11 * fVar15;
                    /* WARNING: Could not recover jumptable at 0x063867e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(lVar5 + 0x18))
                  (((fVar11 / (float)(iVar2 + iVar1)) * 0.5) / fVar14,fVar11 / fVar8,
                   *(undefined8 *)(lVar5 + 0x40),*(undefined8 *)(lVar5 + 0x28));
        return;
      }
    }
  }
  else {
    lVar5 = *(long *)(*(long *)(DAT_083d11f8 + 0xb8) + 0x40);
    if (lVar5 != 0) {
                    /* try { // try from 063860d8 to 064860db has its CatchHandler @ 063861d8 */
                    /* try { // try from 06386108 to 06486143 has its CatchHandler @ 063861e0 */
                    /* WARNING: Could not recover jumptable at 0x06386110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar5 + 0x18))(*(undefined8 *)(lVar5 + 0x40),*(undefined8 *)(lVar5 + 0x28));
      return;
    }
  }
  return;
}


