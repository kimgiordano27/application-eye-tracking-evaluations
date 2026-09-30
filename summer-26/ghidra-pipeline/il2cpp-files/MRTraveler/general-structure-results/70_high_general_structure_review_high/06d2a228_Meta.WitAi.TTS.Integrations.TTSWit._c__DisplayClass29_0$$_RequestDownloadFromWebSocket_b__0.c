/*
FUNCTION_NAME: Meta.WitAi.TTS.Integrations.TTSWit.<>c__DisplayClass29_0$$<RequestDownloadFromWebSocket>b__0
ENTRY_POINT: 06d2a228
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_11;ray_or_cast_sink_hits_1;telemetry_or_network_hits_2
*/


void Meta_WitAi_TTS_Integrations_TTSWit_<>c__DisplayClass29_0__<RequestDownloadFromWebSocket>b__0
               (char *param_1,undefined1 param_2 [16],float param_3,float param_4,float param_5)

{
  undefined4 uVar1;
  undefined *puVar2;
  byte bVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  byte bVar7;
  long lVar8;
  undefined **in_x9;
  int *piVar9;
  long unaff_x19;
  long *unaff_x20;
  int unaff_w21;
  int unaff_w22;
  long unaff_x23;
  long unaff_x24;
  long unaff_x25;
  undefined4 unaff_w26;
  undefined8 *unaff_x27;
  long *unaff_x29;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  
  while( true ) {
    fVar10 = (float)FUN_056ba0fc(param_1,*(undefined8 *)in_x9[0x1d7]);
    fVar11 = param_3;
    fVar12 = param_4;
    fVar13 = param_5;
    lVar5 = FUN_06d2b50c();
    lVar8 = *(long *)PTR_DAT_08e8dd60;
    if (*(int *)(lVar8 + 0xe0) == 0) {
      thunk_FUN_03cd7500(lVar8);
      lVar8 = *(long *)PTR_DAT_08e8dd60;
    }
    lVar8 = *(long *)(*(long *)(lVar8 + 0xb8) + 8);
    if (lVar8 == 0) break;
    uVar6 = FUN_069a0c14(lVar8,unaff_w26,*(undefined8 *)PTR_DAT_08e8dde8);
    bVar3 = FUN_06d28d2c(uVar6,uVar6 & 0xffffffff,*(undefined8 *)(unaff_x19 + 0x30));
    if (lVar5 == 0) {
      if ((*(long *)(unaff_x24 + 0x18) == 0) ||
         (fVar14 = (float)FUN_085eb388(*(long *)(unaff_x24 + 0x18),0), unaff_x25 == 0)) break;
      fVar17 = param_5 * fVar12;
      fVar18 = param_5 * fVar11;
      fVar19 = param_4 * fVar14;
      fVar15 = param_5 * fVar14;
      fVar16 = param_4 * fVar11;
      fVar20 = param_3 * fVar12;
      param_5 = ((param_5 * fVar13 - fVar10 * fVar14) - param_3 * fVar11) - param_4 * fVar12;
      param_4 = (param_3 * fVar14 + param_4 * fVar13 + fVar17) - fVar10 * fVar11;
      param_3 = (fVar10 * fVar12 + param_3 * fVar13 + fVar18) - fVar19;
      FUN_085eb410((fVar16 + fVar10 * fVar13 + fVar15) - fVar20,unaff_x25,0);
      bVar7 = *(byte *)(unaff_x19 + 0x40);
    }
    else {
      if (*(char *)(lVar5 + 0x2c) == '\0') {
        if ((*(long *)(unaff_x24 + 0x18) == 0) ||
           (fVar14 = (float)FUN_085eb388(*(long *)(unaff_x24 + 0x18),0), unaff_x25 == 0)) break;
        fVar17 = param_4 * fVar13;
        fVar19 = fVar10 * fVar13;
        fVar16 = param_3 * fVar13;
        fVar15 = param_4 * fVar11;
        fVar18 = fVar10 * fVar12;
        fVar20 = param_3 * fVar12;
        fVar13 = ((param_5 * fVar13 - fVar10 * fVar14) - param_3 * fVar11) - param_4 * fVar12;
        fVar12 = (param_3 * fVar14 + fVar17 + param_5 * fVar12) - fVar10 * fVar11;
        fVar11 = (fVar18 + fVar16 + param_5 * fVar11) - param_4 * fVar14;
        FUN_085eb410((fVar15 + fVar19 + param_5 * fVar14) - fVar20,unaff_x25,0);
      }
      else if (unaff_x25 == 0) break;
      fVar10 = (float)FUN_085eb388(unaff_x25,0);
      fVar14 = *(float *)(lVar5 + 0x18);
      fVar17 = *(float *)(lVar5 + 0x1c);
      fVar16 = *(float *)(lVar5 + 0x20);
      fVar15 = *(float *)(lVar5 + 0x24);
      param_3 = (fVar12 * fVar14 + fVar13 * fVar17 + fVar11 * fVar15) - fVar10 * fVar16;
      param_4 = (fVar10 * fVar17 + fVar13 * fVar16 + fVar12 * fVar15) - fVar11 * fVar14;
      param_5 = ((fVar13 * fVar15 - fVar10 * fVar14) - fVar11 * fVar17) - fVar12 * fVar16;
      FUN_085eb410((fVar11 * fVar16 + fVar13 * fVar14 + fVar10 * fVar15) - fVar12 * fVar17,unaff_x25
                   ,0);
      if (*(char *)(lVar5 + 0x2d) == '\0') {
        bVar7 = *(byte *)(unaff_x19 + 0x40);
      }
      else {
        bVar7 = 0;
      }
    }
    puVar2 = PTR_DAT_08e8dde0;
    if ((bVar3 & bVar7 & 1) != 0) {
      if (*(long *)(unaff_x24 + 0x18) == 0) break;
      FUN_085eb198(*(long *)(unaff_x24 + 0x18),0);
      FUN_085eb238(unaff_x25,0);
    }
    do {
      do {
        do {
          unaff_w22 = unaff_w22 + 1;
          if (unaff_w22 == unaff_w21) {
            if (*(char *)(unaff_x19 + 0x40) == '\0') {
              return;
            }
            FUN_06d2b568();
            return;
          }
          lVar5 = *unaff_x20;
          uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
          if (uVar6 != 0) {
            piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
            do {
              if (*(long *)(piVar9 + -2) == *unaff_x29) {
                puVar4 = (undefined8 *)(lVar5 + (long)*piVar9 * 0x10 + 0x138);
                goto LAB_06d2a18c;
              }
              uVar6 = uVar6 - 1;
              piVar9 = piVar9 + 4;
            } while (uVar6 != 0);
          }
          puVar4 = (undefined8 *)FUN_03cf1348();
LAB_06d2a18c:
          unaff_x24 = (*(code *)*puVar4)();
          if ((unaff_x24 == 0) || (*(long *)(unaff_x19 + 0xf0) == 0)) goto LAB_06d2a528;
          uVar1 = *(undefined4 *)(unaff_x24 + 0x10);
          uVar6 = FUN_069a0e9c(*(long *)(unaff_x19 + 0xf0),uVar1,*(undefined8 *)puVar2);
        } while ((uVar6 & 1) == 0);
        if ((*(long *)(unaff_x19 + 0xf0) == 0) ||
           (unaff_w26 = FUN_069a0c14(*(long *)(unaff_x19 + 0xf0),uVar1,*unaff_x27), unaff_x23 == 0))
        goto LAB_06d2a528;
        uVar6 = FUN_069a4480();
      } while ((uVar6 & 1) == 0);
      lVar5 = System_Collections_Generic_Dictionary<object,_PokeInteractor_SurfaceHitCache_HitInfo>__TryInsert
                        ();
      if (lVar5 == 0) goto LAB_06d2a528;
      param_1 = (char *)(lVar5 + 0x50);
    } while (*param_1 == '\0');
    in_x9 = &PTR_DAT_08e8d000;
    unaff_x25 = *(long *)(lVar5 + 0x10);
  }
LAB_06d2a528:
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


