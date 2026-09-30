/*
FUNCTION_NAME: Meta.WitAi.TTS.Integrations.TTSWit.<>c__DisplayClass30_0$$<RequestDownloadViaHttp>b__0
ENTRY_POINT: 06d2a27c
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


void Meta_WitAi_TTS_Integrations_TTSWit_<>c__DisplayClass30_0__<RequestDownloadViaHttp>b__0
               (undefined **param_1,undefined1 param_2 [16],float param_3,float param_4,
               float param_5)

{
  undefined4 uVar1;
  undefined *puVar2;
  byte bVar3;
  undefined8 *puVar4;
  ulong uVar5;
  byte bVar6;
  long lVar7;
  int *piVar8;
  long unaff_x19;
  long *unaff_x20;
  int unaff_w21;
  int unaff_w22;
  long unaff_x23;
  long unaff_x24;
  long unaff_x25;
  undefined4 unaff_w26;
  long unaff_x27;
  undefined8 *unaff_x28;
  long *unaff_x29;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  float unaff_s11;
  float fVar14;
  float fVar15;
  
  do {
    lVar7 = *(long *)param_1[0x1ac];
    do {
      lVar7 = *(long *)(*(long *)(lVar7 + 0xb8) + 8);
      if (lVar7 == 0) {
LAB_06d2a528:
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30();
      }
      uVar5 = FUN_069a0c14(lVar7,unaff_w26,*(undefined8 *)PTR_DAT_08e8dde8);
      bVar3 = FUN_06d28d2c(uVar5,uVar5 & 0xffffffff,*(undefined8 *)(unaff_x19 + 0x30));
      if (unaff_x27 == 0) {
        if ((*(long *)(unaff_x24 + 0x18) == 0) ||
           (fVar9 = (float)FUN_085eb388(*(long *)(unaff_x24 + 0x18),0), unaff_x25 == 0))
        goto LAB_06d2a528;
        fVar12 = unaff_s10 * param_4;
        fVar13 = unaff_s10 * param_3;
        fVar14 = unaff_s11 * fVar9;
        fVar10 = unaff_s10 * fVar9;
        fVar11 = unaff_s11 * param_3;
        fVar15 = unaff_s8 * param_4;
        unaff_s10 = ((unaff_s10 * param_5 - unaff_s9 * fVar9) - unaff_s8 * param_3) -
                    unaff_s11 * param_4;
        unaff_s11 = (unaff_s8 * fVar9 + unaff_s11 * param_5 + fVar12) - unaff_s9 * param_3;
        unaff_s8 = (unaff_s9 * param_4 + unaff_s8 * param_5 + fVar13) - fVar14;
        FUN_085eb410((fVar11 + unaff_s9 * param_5 + fVar10) - fVar15,unaff_x25,0);
        bVar6 = *(byte *)(unaff_x19 + 0x40);
      }
      else {
        if (*(char *)(unaff_x27 + 0x2c) == '\0') {
          if ((*(long *)(unaff_x24 + 0x18) == 0) ||
             (fVar9 = (float)FUN_085eb388(*(long *)(unaff_x24 + 0x18),0), unaff_x25 == 0))
          goto LAB_06d2a528;
          fVar12 = unaff_s11 * param_5;
          fVar14 = unaff_s9 * param_5;
          fVar11 = unaff_s8 * param_5;
          fVar10 = unaff_s11 * param_3;
          fVar13 = unaff_s9 * param_4;
          fVar15 = unaff_s8 * param_4;
          param_5 = ((unaff_s10 * param_5 - unaff_s9 * fVar9) - unaff_s8 * param_3) -
                    unaff_s11 * param_4;
          param_4 = (unaff_s8 * fVar9 + fVar12 + unaff_s10 * param_4) - unaff_s9 * param_3;
          param_3 = (fVar13 + fVar11 + unaff_s10 * param_3) - unaff_s11 * fVar9;
          FUN_085eb410((fVar10 + fVar14 + unaff_s10 * fVar9) - fVar15,unaff_x25,0);
        }
        else if (unaff_x25 == 0) goto LAB_06d2a528;
        fVar9 = (float)FUN_085eb388(unaff_x25,0);
        fVar10 = *(float *)(unaff_x27 + 0x18);
        fVar13 = *(float *)(unaff_x27 + 0x1c);
        fVar12 = *(float *)(unaff_x27 + 0x20);
        fVar11 = *(float *)(unaff_x27 + 0x24);
        unaff_s8 = (param_4 * fVar10 + param_5 * fVar13 + param_3 * fVar11) - fVar9 * fVar12;
        unaff_s11 = (fVar9 * fVar13 + param_5 * fVar12 + param_4 * fVar11) - param_3 * fVar10;
        unaff_s10 = ((param_5 * fVar11 - fVar9 * fVar10) - param_3 * fVar13) - param_4 * fVar12;
        FUN_085eb410((param_3 * fVar12 + param_5 * fVar10 + fVar9 * fVar11) - param_4 * fVar13,
                     unaff_x25,0);
        if (*(char *)(unaff_x27 + 0x2d) == '\0') {
          bVar6 = *(byte *)(unaff_x19 + 0x40);
        }
        else {
          bVar6 = 0;
        }
      }
      puVar2 = PTR_DAT_08e8dde0;
      if ((bVar3 & bVar6 & 1) != 0) {
        if (*(long *)(unaff_x24 + 0x18) == 0) goto LAB_06d2a528;
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
            lVar7 = *unaff_x20;
            uVar5 = (ulong)*(ushort *)(lVar7 + 0x12e);
            if (uVar5 != 0) {
              piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
              do {
                if (*(long *)(piVar8 + -2) == *unaff_x29) {
                  puVar4 = (undefined8 *)(lVar7 + (long)*piVar8 * 0x10 + 0x138);
                  goto LAB_06d2a18c;
                }
                uVar5 = uVar5 - 1;
                piVar8 = piVar8 + 4;
              } while (uVar5 != 0);
            }
            puVar4 = (undefined8 *)FUN_03cf1348();
LAB_06d2a18c:
            unaff_x24 = (*(code *)*puVar4)();
            if ((unaff_x24 == 0) || (*(long *)(unaff_x19 + 0xf0) == 0)) goto LAB_06d2a528;
            uVar1 = *(undefined4 *)(unaff_x24 + 0x10);
            uVar5 = FUN_069a0e9c(*(long *)(unaff_x19 + 0xf0),uVar1,*(undefined8 *)puVar2);
          } while ((uVar5 & 1) == 0);
          if ((*(long *)(unaff_x19 + 0xf0) == 0) ||
             (unaff_w26 = FUN_069a0c14(*(long *)(unaff_x19 + 0xf0),uVar1,*unaff_x28), unaff_x23 == 0
             )) goto LAB_06d2a528;
          uVar5 = FUN_069a4480();
        } while ((uVar5 & 1) == 0);
        lVar7 = System_Collections_Generic_Dictionary<object,_PokeInteractor_SurfaceHitCache_HitInfo>__TryInsert
                          ();
        if (lVar7 == 0) goto LAB_06d2a528;
      } while (*(char *)(lVar7 + 0x50) == '\0');
      unaff_x25 = *(long *)(lVar7 + 0x10);
      unaff_s9 = (float)FUN_056ba0fc((char *)(lVar7 + 0x50),*(undefined8 *)PTR_DAT_08e8deb8);
      param_3 = unaff_s8;
      param_4 = unaff_s11;
      param_5 = unaff_s10;
      unaff_x27 = FUN_06d2b50c();
      lVar7 = *(long *)PTR_DAT_08e8dd60;
    } while (*(int *)(lVar7 + 0xe0) != 0);
    thunk_FUN_03cd7500(lVar7);
    param_1 = &PTR_DAT_08e8d000;
  } while( true );
}


