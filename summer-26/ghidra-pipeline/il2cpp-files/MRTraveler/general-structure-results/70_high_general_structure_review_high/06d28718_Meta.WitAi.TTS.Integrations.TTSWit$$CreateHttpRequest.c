/*
FUNCTION_NAME: Meta.WitAi.TTS.Integrations.TTSWit$$CreateHttpRequest
ENTRY_POINT: 06d28718
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_16;ray_or_cast_sink_hits_1;telemetry_or_network_hits_2
*/


void Meta_WitAi_TTS_Integrations_TTSWit__CreateHttpRequest
               (long param_1,long param_2,ulong param_3,long param_4)

{
  int iVar1;
  int iVar2;
  short sVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  undefined4 uVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  int *piVar14;
  long *plVar15;
  int iVar16;
  long *plVar17;
  undefined8 *puVar18;
  long lStack0000000000000008;
  undefined8 in_stack_00000010;
  int iStack0000000000000018;
  int iStack000000000000001c;
  
  lStack0000000000000008 = param_1;
  if ((DAT_094197bf & 1) == 0) {
    FUN_03c8f898(PTR_DAT_08e8ddf0);
    FUN_03c8f898(PTR_DAT_08e71500);
    FUN_03c8f898(PTR_DAT_08e69670);
    FUN_03c8f898(PTR_DAT_08e8ddf8);
    FUN_03c8f898(PTR_DAT_08e8de00);
    FUN_03c8f898(PTR_DAT_08e8dde0);
    FUN_03c8f898(PTR_DAT_08e8d998);
    FUN_03c8f898(PTR_DAT_08e8de08);
    FUN_03c8f898(PTR_DAT_08e8d5f0);
    FUN_03c8f898(PTR_DAT_08e8d9a0);
    FUN_03c8f898(PTR_DAT_08e8dd60);
    FUN_03c8f898(PTR_DAT_08e71528);
    FUN_03c8f898(PTR_DAT_08e71508);
    FUN_03c8f898(PTR_DAT_08e68f00);
    FUN_03c8f898(PTR_DAT_08e8d9a8);
    FUN_03c8f898(PTR_DAT_08e8d9b0);
    FUN_03c8f898(PTR_DAT_08e8de10);
    FUN_03c8f898(PTR_DAT_08e8de18);
    FUN_03c8f898(PTR_DAT_08e8de20);
    DAT_094197bf = 1;
  }
  if (*(long *)(lStack0000000000000008 + 0x10) != 0) {
    iVar6 = FUN_069a3f3c(*(long *)(lStack0000000000000008 + 0x10),*(undefined8 *)PTR_DAT_08e8de08);
    if (iVar6 != 0) {
      if (*(long *)(lStack0000000000000008 + 0x10) == 0) goto LAB_06d28d28;
      FUN_069a4414(*(long *)(lStack0000000000000008 + 0x10),*(undefined8 *)PTR_DAT_08e8de00);
    }
    if (param_2 != 0) {
      lVar11 = 0xa8;
      if ((param_3 & 1) == 0) {
        lVar11 = 0xa0;
      }
      plVar15 = *(long **)(param_2 + lVar11);
      if (plVar15 != (long *)0x0) {
        lVar11 = *plVar15;
        uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar13 != 0) {
          piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_08e71528) {
              puVar8 = (undefined8 *)(lVar11 + (long)*piVar14 * 0x10 + 0x138);
              goto LAB_06d288e0;
            }
            uVar13 = uVar13 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar13 != 0);
        }
        puVar8 = (undefined8 *)FUN_03cf1348(plVar15,*(long *)PTR_DAT_08e71528,0);
LAB_06d288e0:
        iVar6 = (*(code *)*puVar8)(plVar15,puVar8[1]);
        puVar5 = PTR_DAT_08e8dde0;
        puVar4 = PTR_DAT_08e71508;
        if (0 < iVar6) {
          iVar16 = 0;
          plVar17 = (long *)PTR_DAT_08e8dd60;
          do {
            lVar12 = *plVar15;
            lVar11 = *(long *)puVar4;
            uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
            if (uVar13 != 0) {
              piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
              do {
                if (*(long *)(piVar14 + -2) == lVar11) {
                  puVar8 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
                  goto LAB_06d28964;
                }
                uVar13 = uVar13 - 1;
                piVar14 = piVar14 + 4;
              } while (uVar13 != 0);
            }
            puVar8 = (undefined8 *)FUN_03cf1348(plVar15,lVar11,0);
LAB_06d28964:
            lVar11 = (*(code *)*puVar8)(plVar15,iVar16,puVar8[1]);
            if ((lVar11 == 0) || (param_4 == 0)) goto LAB_06d28d28;
            iVar2 = *(int *)(lVar11 + 0x10);
            uVar13 = FUN_069a0e9c(param_4,iVar2,*(undefined8 *)puVar5);
            if ((uVar13 & 1) != 0) {
              uVar7 = FUN_069a0c14(param_4,iVar2,*(undefined8 *)PTR_DAT_08e8d5f0);
              lVar12 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08e8ddf0);
              FUN_07145224(lVar12,0);
              puVar8 = (undefined8 *)(lVar11 + 0x18);
              if (lVar12 == 0) goto LAB_06d28d28;
              *(undefined8 *)(lVar12 + 0x10) = *puVar8;
              thunk_FUN_03d233cc();
              lVar9 = *plVar17;
              if (*(int *)(lVar9 + 0xe0) == 0) {
                thunk_FUN_03cd7500();
                lVar9 = *plVar17;
              }
              lVar9 = *(long *)(*(long *)(lVar9 + 0xb8) + 0x18);
              if (lVar9 == 0) goto LAB_06d28d28;
              uVar13 = FUN_069a4480(lVar9,iVar2,*(undefined8 *)PTR_DAT_08e8d998);
              if ((uVar13 & 1) == 0) {
                iStack000000000000001c = iVar2;
                uVar10 = thunk_FUN_03cf4e64(*(undefined8 *)PTR_DAT_08e71500,
                                            (long)&stack0x00000018 + 4);
                uVar10 = FUN_06f6be0c(*(undefined8 *)PTR_DAT_08e8de20,uVar10,0);
                if (*(int *)(*(long *)PTR_DAT_08e69670 + 0xe0) == 0) {
                  thunk_FUN_03cd7500(*(long *)PTR_DAT_08e69670);
                }
                FUN_085a437c(uVar10,0);
                plVar17 = (long *)PTR_DAT_08e8dd60;
              }
              lVar9 = *plVar17;
              if (*(int *)(lVar9 + 0xe0) == 0) {
                thunk_FUN_03cd7500();
                lVar9 = *plVar17;
              }
              lVar9 = *(long *)(*(long *)(lVar9 + 0xb8) + 0x18);
              if ((lVar9 == 0) ||
                 (lVar9 = System_Collections_Generic_Dictionary<object,_PokeInteractor_SurfaceHitCache_HitInfo>__TryInsert
                                    (lVar9,iVar2,*(undefined8 *)PTR_DAT_08e8d9a0), lVar9 == 0))
              goto LAB_06d28d28;
              iVar1 = *(int *)(lVar9 + 0x14);
              if (*(int *)(lVar9 + 0x10) != iVar2) {
                lVar9 = FUN_06d2e680(lVar9,plVar15);
                if (lVar9 == 0) goto LAB_06d28d28;
                puVar8 = (undefined8 *)(lVar9 + 0x18);
              }
              puVar18 = (undefined8 *)(lVar12 + 0x30);
              *puVar18 = *puVar8;
              uVar10 = thunk_FUN_03d233cc(puVar18);
              if (iVar1 != -1) {
                lVar9 = FUN_06d2e680(uVar10,plVar15,iVar1);
                if (lVar9 == 0) goto LAB_06d28d28;
                puVar18 = (undefined8 *)(lVar9 + 0x18);
              }
              puVar8 = (undefined8 *)(lVar12 + 0x38);
              *puVar8 = *puVar18;
              thunk_FUN_03d233cc(puVar8);
              lVar9 = *plVar15;
              sVar3 = *(short *)(lVar11 + 0x14);
              lVar11 = *(long *)puVar4;
              uVar13 = (ulong)*(ushort *)(lVar9 + 0x12e);
              if (uVar13 != 0) {
                piVar14 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar14 + -2) == lVar11) {
                    puVar18 = (undefined8 *)(lVar9 + (long)*piVar14 * 0x10 + 0x138);
                    goto LAB_06d28b80;
                  }
                  uVar13 = uVar13 - 1;
                  piVar14 = piVar14 + 4;
                } while (uVar13 != 0);
              }
              puVar18 = (undefined8 *)FUN_03cf1348(plVar15,lVar11,0);
LAB_06d28b80:
              lVar11 = (*(code *)*puVar18)(plVar15,(int)sVar3,puVar18[1]);
              if (lVar11 == 0) goto LAB_06d28d28;
              *(undefined8 *)(lVar12 + 0x68) = *(undefined8 *)(lVar11 + 0x18);
              thunk_FUN_03d233cc((undefined8 *)(lVar12 + 0x68));
              uVar10 = *(undefined8 *)(lVar12 + 0x30);
              if (*(int *)(*(long *)PTR_DAT_08e68f00 + 0xe0) == 0) {
                thunk_FUN_03cd7500();
              }
              uVar13 = FUN_085dfaac(uVar10,0,0);
              if ((uVar13 & 1) != 0) {
                iStack0000000000000018 = iVar2;
                uVar10 = thunk_FUN_03cf4e64(*(undefined8 *)PTR_DAT_08e71500,&stack0x00000018);
                uVar10 = FUN_06f6be0c(*(undefined8 *)PTR_DAT_08e8de18,uVar10,0);
                if (*(int *)(*(long *)PTR_DAT_08e69670 + 0xe0) == 0) {
                  thunk_FUN_03cd7500(*(long *)PTR_DAT_08e69670);
                }
                FUN_085a48e4(uVar10,0);
              }
              uVar10 = *puVar8;
              if (*(int *)(*(long *)PTR_DAT_08e68f00 + 0xe0) == 0) {
                thunk_FUN_03cd7500();
              }
              uVar13 = FUN_085dfaac(uVar10,0,0);
              plVar17 = (long *)PTR_DAT_08e8dd60;
              if ((uVar13 & 1) != 0) {
                in_stack_00000010._4_4_ = iVar2;
                uVar10 = thunk_FUN_03cf4e64(*(undefined8 *)PTR_DAT_08e71500,
                                            (long)&stack0x00000010 + 4);
                uVar10 = FUN_06f6be0c(*(undefined8 *)PTR_DAT_08e8de10,uVar10,0);
                if (*(int *)(*(long *)PTR_DAT_08e69670 + 0xe0) == 0) {
                  thunk_FUN_03cd7500(*(long *)PTR_DAT_08e69670);
                }
                FUN_085a48e4(uVar10,0);
              }
              if (*(long *)(lStack0000000000000008 + 0x10) == 0) goto LAB_06d28d28;
              FUN_069a428c(*(long *)(lStack0000000000000008 + 0x10),uVar7,lVar12,
                           *(undefined8 *)PTR_DAT_08e8ddf8);
            }
            iVar16 = iVar16 + 1;
          } while (iVar16 != iVar6);
        }
        return;
      }
    }
  }
LAB_06d28d28:
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


