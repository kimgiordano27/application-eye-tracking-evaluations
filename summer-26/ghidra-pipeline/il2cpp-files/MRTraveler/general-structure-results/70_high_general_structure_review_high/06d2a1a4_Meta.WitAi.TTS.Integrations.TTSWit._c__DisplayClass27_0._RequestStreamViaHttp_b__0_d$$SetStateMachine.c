/*
FUNCTION_NAME: Meta.WitAi.TTS.Integrations.TTSWit.<>c__DisplayClass27_0.<<RequestStreamViaHttp>b__0>d$$SetStateMachine
ENTRY_POINT: 06d2a1a4
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


void Meta_WitAi_TTS_Integrations_TTSWit_<>c__DisplayClass27_0_<<RequestStreamViaHttp>b__0>d__SetStateMachine
               (undefined1 param_1 [16],float param_2,float param_3,float param_4)

{
  byte bVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  ulong uVar4;
  long lVar5;
  byte bVar6;
  long lVar7;
  int *piVar8;
  long unaff_x19;
  long *unaff_x20;
  int unaff_w21;
  int unaff_w22;
  long unaff_x23;
  long unaff_x24;
  long lVar9;
  undefined8 *unaff_x27;
  undefined8 *unaff_x28;
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
  
  while (*(long *)(unaff_x19 + 0xf0) != 0) {
    uVar2 = *(undefined4 *)(unaff_x24 + 0x10);
    uVar4 = FUN_069a0e9c(*(long *)(unaff_x19 + 0xf0),uVar2,*unaff_x28);
    if ((uVar4 & 1) != 0) {
      if ((*(long *)(unaff_x19 + 0xf0) == 0) ||
         (uVar2 = FUN_069a0c14(*(long *)(unaff_x19 + 0xf0),uVar2,*unaff_x27), unaff_x23 == 0))
      break;
      uVar4 = FUN_069a4480();
      if ((uVar4 & 1) != 0) {
        lVar5 = System_Collections_Generic_Dictionary<object,_PokeInteractor_SurfaceHitCache_HitInfo>__TryInsert
                          ();
        if (lVar5 == 0) break;
        if (*(char *)(lVar5 + 0x50) != '\0') {
          lVar9 = *(long *)(lVar5 + 0x10);
          fVar10 = (float)FUN_056ba0fc((char *)(lVar5 + 0x50),*(undefined8 *)PTR_DAT_08e8deb8);
          fVar11 = param_2;
          fVar12 = param_3;
          fVar13 = param_4;
          lVar5 = FUN_06d2b50c();
          lVar7 = *(long *)PTR_DAT_08e8dd60;
          if (*(int *)(lVar7 + 0xe0) == 0) {
            thunk_FUN_03cd7500(lVar7);
            lVar7 = *(long *)PTR_DAT_08e8dd60;
          }
          lVar7 = *(long *)(*(long *)(lVar7 + 0xb8) + 8);
          if (lVar7 == 0) break;
          uVar4 = FUN_069a0c14(lVar7,uVar2,*(undefined8 *)PTR_DAT_08e8dde8);
          bVar1 = FUN_06d28d2c(uVar4,uVar4 & 0xffffffff,*(undefined8 *)(unaff_x19 + 0x30));
          if (lVar5 == 0) {
            if ((*(long *)(unaff_x24 + 0x18) == 0) ||
               (fVar14 = (float)FUN_085eb388(*(long *)(unaff_x24 + 0x18),0), lVar9 == 0)) break;
            fVar17 = param_4 * fVar12;
            fVar18 = param_4 * fVar11;
            fVar19 = param_3 * fVar14;
            fVar15 = param_4 * fVar14;
            fVar16 = param_3 * fVar11;
            fVar20 = param_2 * fVar12;
            param_4 = ((param_4 * fVar13 - fVar10 * fVar14) - param_2 * fVar11) - param_3 * fVar12;
            param_3 = (param_2 * fVar14 + param_3 * fVar13 + fVar17) - fVar10 * fVar11;
            param_2 = (fVar10 * fVar12 + param_2 * fVar13 + fVar18) - fVar19;
            FUN_085eb410((fVar16 + fVar10 * fVar13 + fVar15) - fVar20,lVar9,0);
            bVar6 = *(byte *)(unaff_x19 + 0x40);
          }
          else {
            if (*(char *)(lVar5 + 0x2c) == '\0') {
              if ((*(long *)(unaff_x24 + 0x18) == 0) ||
                 (fVar14 = (float)FUN_085eb388(*(long *)(unaff_x24 + 0x18),0), lVar9 == 0)) break;
              fVar17 = param_3 * fVar13;
              fVar19 = fVar10 * fVar13;
              fVar16 = param_2 * fVar13;
              fVar15 = param_3 * fVar11;
              fVar18 = fVar10 * fVar12;
              fVar20 = param_2 * fVar12;
              fVar13 = ((param_4 * fVar13 - fVar10 * fVar14) - param_2 * fVar11) - param_3 * fVar12;
              fVar12 = (param_2 * fVar14 + fVar17 + param_4 * fVar12) - fVar10 * fVar11;
              fVar11 = (fVar18 + fVar16 + param_4 * fVar11) - param_3 * fVar14;
              FUN_085eb410((fVar15 + fVar19 + param_4 * fVar14) - fVar20,lVar9,0);
            }
            else if (lVar9 == 0) break;
            fVar10 = (float)FUN_085eb388(lVar9,0);
            fVar14 = *(float *)(lVar5 + 0x18);
            fVar17 = *(float *)(lVar5 + 0x1c);
            fVar16 = *(float *)(lVar5 + 0x20);
            fVar15 = *(float *)(lVar5 + 0x24);
            param_2 = (fVar12 * fVar14 + fVar13 * fVar17 + fVar11 * fVar15) - fVar10 * fVar16;
            param_3 = (fVar10 * fVar17 + fVar13 * fVar16 + fVar12 * fVar15) - fVar11 * fVar14;
            param_4 = ((fVar13 * fVar15 - fVar10 * fVar14) - fVar11 * fVar17) - fVar12 * fVar16;
            FUN_085eb410((fVar11 * fVar16 + fVar13 * fVar14 + fVar10 * fVar15) - fVar12 * fVar17,
                         lVar9,0);
            if (*(char *)(lVar5 + 0x2d) == '\0') {
              bVar6 = *(byte *)(unaff_x19 + 0x40);
            }
            else {
              bVar6 = 0;
            }
          }
          unaff_x28 = (undefined8 *)PTR_DAT_08e8dde0;
          if ((bVar1 & bVar6 & 1) != 0) {
            if (*(long *)(unaff_x24 + 0x18) == 0) break;
            FUN_085eb198(*(long *)(unaff_x24 + 0x18),0);
            FUN_085eb238(lVar9,0);
          }
        }
      }
    }
    unaff_w22 = unaff_w22 + 1;
    if (unaff_w22 == unaff_w21) {
      if (*(char *)(unaff_x19 + 0x40) == '\0') {
        return;
      }
      FUN_06d2b568();
      return;
    }
    lVar5 = *unaff_x20;
    uVar4 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar4 != 0) {
      piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *unaff_x29) {
          puVar3 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_06d2a18c;
        }
        uVar4 = uVar4 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar4 != 0);
    }
    puVar3 = (undefined8 *)FUN_03cf1348();
LAB_06d2a18c:
    unaff_x24 = (*(code *)*puVar3)();
    if (unaff_x24 == 0) break;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


