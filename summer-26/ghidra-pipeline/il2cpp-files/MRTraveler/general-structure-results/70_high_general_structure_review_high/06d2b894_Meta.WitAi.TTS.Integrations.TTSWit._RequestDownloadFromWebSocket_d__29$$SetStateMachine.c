/*
FUNCTION_NAME: Meta.WitAi.TTS.Integrations.TTSWit.<RequestDownloadFromWebSocket>d__29$$SetStateMachine
ENTRY_POINT: 06d2b894
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_6;ray_or_cast_sink_hits_1;telemetry_or_network_hits_2
*/


void Meta_WitAi_TTS_Integrations_TTSWit_<RequestDownloadFromWebSocket>d__29__SetStateMachine
               (undefined1 param_1 [16],float param_2,float param_3)

{
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  long unaff_x19;
  long *unaff_x20;
  int unaff_w21;
  int unaff_w22;
  long unaff_x23;
  undefined8 *unaff_x24;
  long unaff_x26;
  long unaff_x27;
  long *unaff_x29;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  float unaff_s8;
  ulong unaff_d9;
  undefined4 uVar8;
  ulong unaff_d10;
  
  do {
    if (!(bool)in_ZR && in_NG == in_OV) {
      if (unaff_x26 == 0) {
LAB_06d2b900:
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30();
      }
      fVar5 = (float)FUN_085eb198(unaff_x26,0);
      fVar6 = *(float *)(unaff_x27 + 0x28);
      FUN_085eb238(fVar5 + unaff_s8 * fVar6,param_2 + (float)unaff_d9 * fVar6,
                   param_3 + (float)unaff_d10 * fVar6,unaff_x26,0);
    }
    do {
      do {
        do {
          do {
            unaff_w22 = unaff_w22 + 1;
            if (unaff_w22 == unaff_w21) {
              return;
            }
            lVar2 = *unaff_x20;
            uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
            if (uVar3 != 0) {
              piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
              do {
                if (*(long *)(piVar4 + -2) == *unaff_x29) {
                  puVar1 = (undefined8 *)(lVar2 + (long)*piVar4 * 0x10 + 0x138);
                  goto LAB_06d2b6f0;
                }
                uVar3 = uVar3 - 1;
                piVar4 = piVar4 + 4;
              } while (uVar3 != 0);
            }
            puVar1 = (undefined8 *)FUN_03cf1348();
LAB_06d2b6f0:
            lVar2 = (*(code *)*puVar1)();
            if ((lVar2 == 0) || (*(long *)(unaff_x19 + 0xf0) == 0)) goto LAB_06d2b900;
            uVar7 = *(undefined4 *)(lVar2 + 0x10);
            uVar3 = FUN_069a0e9c(*(long *)(unaff_x19 + 0xf0),uVar7,*unaff_x24);
          } while ((uVar3 & 1) == 0);
          if ((*(long *)(unaff_x19 + 0xf0) == 0) ||
             (FUN_069a0c14(*(long *)(unaff_x19 + 0xf0),uVar7,*(undefined8 *)PTR_DAT_08e8d5f0),
             unaff_x23 == 0)) goto LAB_06d2b900;
          uVar3 = FUN_069a4480();
        } while ((uVar3 & 1) == 0);
        lVar2 = System_Collections_Generic_Dictionary<object,_PokeInteractor_SurfaceHitCache_HitInfo>__TryInsert
                          ();
        if (lVar2 == 0) goto LAB_06d2b900;
      } while (*(char *)(lVar2 + 0x50) == '\0');
      unaff_x26 = *(long *)(lVar2 + 0x10);
      unaff_x27 = FUN_06d2b50c();
    } while ((unaff_x27 == 0) ||
            (ABS(*(float *)(unaff_x27 + 0x28)) <= **(float **)(*(long *)PTR_DAT_08e722b0 + 0xb8)));
    uVar7 = *(undefined4 *)(lVar2 + 0x40);
    unaff_d9 = (ulong)*(uint *)(lVar2 + 0x44);
    unaff_d10 = (ulong)*(uint *)(lVar2 + 0x48);
    uVar8 = *(undefined4 *)(lVar2 + 0x4c);
    if (DAT_09410146 == '\0') {
      FUN_03c8f898(PTR_DAT_08e68e18);
      DAT_09410146 = '\x01';
    }
    lVar2 = *(long *)(*(long *)PTR_DAT_08e68e18 + 0xb8);
    unaff_s8 = (float)FUN_085d2bd4(uVar7,unaff_d9,unaff_d10,uVar8,*(undefined4 *)(lVar2 + 0x48),
                                   *(undefined4 *)(lVar2 + 0x4c),*(undefined4 *)(lVar2 + 0x50),0);
    if (DAT_094100b5 == '\0') {
      FUN_03c8f898(PTR_DAT_08e6a6b8);
      DAT_094100b5 = '\x01';
    }
    if (*(int *)(*(long *)PTR_DAT_08e6a6b8 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
    }
    param_3 = (float)unaff_d10 * (float)unaff_d10;
    fVar5 = SQRT(param_3 + unaff_s8 * unaff_s8 + (float)unaff_d9 * (float)unaff_d9);
    param_2 = **(float **)(*(long *)PTR_DAT_08e722b0 + 0xb8);
    in_NG = '\0';
    in_ZR = false;
    in_OV = '\x01';
    if (!NAN(fVar5) && !NAN(param_2)) {
      in_NG = fVar5 < param_2;
      in_ZR = fVar5 == param_2;
      in_OV = '\0';
    }
  } while( true );
}


