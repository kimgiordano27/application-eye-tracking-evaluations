/*
FUNCTION_NAME: Meta.WitAi.TTS.Integrations.TTSWit.<>c__DisplayClass30_0.<<RequestDownloadViaHttp>b__0>d$$MoveNext
ENTRY_POINT: 06d2a378
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


void Meta_WitAi_TTS_Integrations_TTSWit_<>c__DisplayClass30_0_<<RequestDownloadViaHttp>b__0>d__MoveNext
               (float param_1,float param_2,float param_3,float param_4)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  byte bVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long unaff_x19;
  long *unaff_x20;
  int unaff_w21;
  int unaff_w22;
  long unaff_x23;
  long unaff_x24;
  long unaff_x25;
  byte unaff_w26;
  long unaff_x27;
  undefined8 *unaff_x28;
  long *unaff_x29;
  float fVar8;
  float fVar9;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  float unaff_s11;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
code_r0x06d2a378:
  fVar10 = unaff_s11 * param_4;
  fVar12 = unaff_s9 * param_4;
  fVar9 = unaff_s8 * param_4;
  fVar8 = unaff_s11 * param_2;
  fVar11 = unaff_s9 * param_3;
  fVar14 = unaff_s8 * param_3;
  param_4 = ((unaff_s10 * param_4 - unaff_s9 * param_1) - unaff_s8 * param_2) - unaff_s11 * param_3;
  param_3 = (unaff_s8 * param_1 + fVar10 + unaff_s10 * param_3) - unaff_s9 * param_2;
  param_2 = (fVar11 + fVar9 + unaff_s10 * param_2) - unaff_s11 * param_1;
  FUN_085eb410((fVar8 + fVar12 + unaff_s10 * param_1) - fVar14,unaff_x25,0);
LAB_06d2a3f4:
  fVar8 = (float)FUN_085eb388(unaff_x25,0);
  fVar9 = *(float *)(unaff_x27 + 0x18);
  fVar12 = *(float *)(unaff_x27 + 0x1c);
  fVar11 = *(float *)(unaff_x27 + 0x20);
  fVar10 = *(float *)(unaff_x27 + 0x24);
  unaff_s8 = (param_3 * fVar9 + param_4 * fVar12 + param_2 * fVar10) - fVar8 * fVar11;
  unaff_s11 = (fVar8 * fVar12 + param_4 * fVar11 + param_3 * fVar10) - param_2 * fVar9;
  unaff_s10 = ((param_4 * fVar10 - fVar8 * fVar9) - param_2 * fVar12) - param_3 * fVar11;
  FUN_085eb410((param_2 * fVar11 + param_4 * fVar9 + fVar8 * fVar10) - param_3 * fVar12,unaff_x25,0)
  ;
  if (*(char *)(unaff_x27 + 0x2d) == '\0') {
    bVar4 = *(byte *)(unaff_x19 + 0x40);
  }
  else {
    bVar4 = 0;
  }
  do {
    puVar1 = PTR_DAT_08e8dde0;
    if ((unaff_w26 & bVar4 & 1) != 0) {
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
          lVar5 = *unaff_x20;
          uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
          if (uVar6 != 0) {
            piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
            do {
              if (*(long *)(piVar7 + -2) == *unaff_x29) {
                puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
                goto LAB_06d2a18c;
              }
              uVar6 = uVar6 - 1;
              piVar7 = piVar7 + 4;
            } while (uVar6 != 0);
          }
          puVar3 = (undefined8 *)FUN_03cf1348();
LAB_06d2a18c:
          unaff_x24 = (*(code *)*puVar3)();
          if ((unaff_x24 == 0) || (*(long *)(unaff_x19 + 0xf0) == 0)) goto LAB_06d2a528;
          uVar2 = *(undefined4 *)(unaff_x24 + 0x10);
          uVar6 = FUN_069a0e9c(*(long *)(unaff_x19 + 0xf0),uVar2,*(undefined8 *)puVar1);
        } while ((uVar6 & 1) == 0);
        if ((*(long *)(unaff_x19 + 0xf0) == 0) ||
           (uVar2 = FUN_069a0c14(*(long *)(unaff_x19 + 0xf0),uVar2,*unaff_x28), unaff_x23 == 0))
        goto LAB_06d2a528;
        uVar6 = FUN_069a4480();
      } while ((uVar6 & 1) == 0);
      lVar5 = System_Collections_Generic_Dictionary<object,_PokeInteractor_SurfaceHitCache_HitInfo>__TryInsert
                        ();
      if (lVar5 == 0) goto LAB_06d2a528;
    } while (*(char *)(lVar5 + 0x50) == '\0');
    unaff_x25 = *(long *)(lVar5 + 0x10);
    unaff_s9 = (float)FUN_056ba0fc((char *)(lVar5 + 0x50),*(undefined8 *)PTR_DAT_08e8deb8);
    param_2 = unaff_s8;
    param_3 = unaff_s11;
    param_4 = unaff_s10;
    unaff_x27 = FUN_06d2b50c();
    lVar5 = *(long *)PTR_DAT_08e8dd60;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_03cd7500(lVar5);
      lVar5 = *(long *)PTR_DAT_08e8dd60;
    }
    lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
    if (lVar5 == 0) goto LAB_06d2a528;
    uVar6 = FUN_069a0c14(lVar5,uVar2,*(undefined8 *)PTR_DAT_08e8dde8);
    unaff_w26 = FUN_06d28d2c(uVar6,uVar6 & 0xffffffff,*(undefined8 *)(unaff_x19 + 0x30));
    if (unaff_x27 != 0) break;
    if ((*(long *)(unaff_x24 + 0x18) == 0) ||
       (fVar8 = (float)FUN_085eb388(*(long *)(unaff_x24 + 0x18),0), unaff_x25 == 0))
    goto LAB_06d2a528;
    fVar11 = unaff_s10 * param_3;
    fVar12 = unaff_s10 * param_2;
    fVar14 = unaff_s11 * fVar8;
    fVar9 = unaff_s10 * fVar8;
    fVar10 = unaff_s11 * param_2;
    fVar13 = unaff_s8 * param_3;
    unaff_s10 = ((unaff_s10 * param_4 - unaff_s9 * fVar8) - unaff_s8 * param_2) -
                unaff_s11 * param_3;
    unaff_s11 = (unaff_s8 * fVar8 + unaff_s11 * param_4 + fVar11) - unaff_s9 * param_2;
    unaff_s8 = (unaff_s9 * param_3 + unaff_s8 * param_4 + fVar12) - fVar14;
    FUN_085eb410((fVar10 + unaff_s9 * param_4 + fVar9) - fVar13,unaff_x25,0);
    bVar4 = *(byte *)(unaff_x19 + 0x40);
  } while( true );
  if (*(char *)(unaff_x27 + 0x2c) == '\0') goto LAB_06d2a364;
  if (unaff_x25 == 0) goto LAB_06d2a528;
  goto LAB_06d2a3f4;
LAB_06d2a364:
  if ((*(long *)(unaff_x24 + 0x18) == 0) ||
     (param_1 = (float)FUN_085eb388(*(long *)(unaff_x24 + 0x18),0), unaff_x25 == 0)) {
LAB_06d2a528:
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb30();
  }
  goto code_r0x06d2a378;
}


