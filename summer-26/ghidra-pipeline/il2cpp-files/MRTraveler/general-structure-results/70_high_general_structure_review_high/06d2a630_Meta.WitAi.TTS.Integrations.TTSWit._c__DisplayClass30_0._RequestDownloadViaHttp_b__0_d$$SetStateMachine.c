/*
FUNCTION_NAME: Meta.WitAi.TTS.Integrations.TTSWit.<>c__DisplayClass30_0.<<RequestDownloadViaHttp>b__0>d$$SetStateMachine
ENTRY_POINT: 06d2a630
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_21;ray_or_cast_sink_hits_2;telemetry_or_network_hits_2
*/


void Meta_WitAi_TTS_Integrations_TTSWit_<>c__DisplayClass30_0_<<RequestDownloadViaHttp>b__0>d__SetStateMachine
               (void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  ulong uVar12;
  uint unaff_w19;
  long unaff_x20;
  long *plVar13;
  long unaff_x21;
  long unaff_x22;
  long lVar14;
  long *plVar15;
  undefined8 *puVar16;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined4 uStack0000000000000028;
  undefined4 uStack000000000000002c;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined4 uStack0000000000000040;
  
  FUN_03c8f898();
  FUN_03c8f898(PTR_DAT_08e8dde8);
  FUN_03c8f898(PTR_DAT_08e8dd20);
  FUN_03c8f898(PTR_DAT_08e8ded8);
  FUN_03c8f898(PTR_DAT_08e8dd28);
  FUN_03c8f898(PTR_DAT_08e8dd30);
  FUN_03c8f898(PTR_DAT_08e8dd38);
  FUN_03c8f898(PTR_DAT_08e8dd40);
  FUN_03c8f898(PTR_DAT_08e73ea8);
  FUN_03c8f898(PTR_DAT_08e8dd60);
  FUN_03c8f898(PTR_DAT_08e8dbd8);
  FUN_03c8f898(PTR_DAT_08e8dd48);
  FUN_03c8f898(PTR_DAT_08e69dd0);
  FUN_03c8f898(PTR_DAT_08e68f00);
  FUN_03c8f898(PTR_DAT_08e8dee0);
  *(undefined1 *)(unaff_x20 + 0x7b4) = 1;
  in_stack_00000030 = 0;
  in_stack_00000038 = 0;
  _uStack0000000000000040 = 0;
  if (unaff_x22 != 0) {
    lVar14 = *(long *)(unaff_x22 + 0x10);
    if ((lVar14 == 0) ||
       (lVar4 = FUN_069a3f4c(lVar14,*(undefined8 *)PTR_DAT_08e8dd28), puVar2 = PTR_DAT_08e8ded8,
       puVar1 = PTR_DAT_08e8dd38, lVar4 == 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    FUN_05004cd4(&stack0x00000018,lVar4,*(undefined8 *)PTR_DAT_08e8dd48);
    _uStack0000000000000040 = CONCAT44(uStack000000000000002c,uStack0000000000000028);
    lVar4 = (long)(int)unaff_w19;
    in_stack_00000038 = in_stack_00000020;
    in_stack_00000030 = in_stack_00000018;
    while (uVar5 = FUN_04a93060(&stack0x00000030,*(undefined8 *)puVar1),
          uVar12 = _uStack0000000000000040, (uVar5 & 1) != 0) {
      if (*(long *)(unaff_x21 + 0xe8) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30();
      }
      uVar3 = uStack0000000000000040;
      lVar6 = System_Collections_Generic_Dictionary<object,_PokeInteractor_SurfaceHitCache_HitInfo>__TryInsert
                        (*(long *)(unaff_x21 + 0xe8),_uStack0000000000000040 & 0xffffffff,
                         *(undefined8 *)puVar2);
      lVar7 = System_Collections_Generic_Dictionary<object,_PokeInteractor_SurfaceHitCache_HitInfo>__TryInsert
                        (lVar14,uVar12 & 0xffffffff,*(undefined8 *)PTR_DAT_08e8dd20);
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30();
      }
      plVar13 = *(long **)(lVar6 + 0x10);
      if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30();
      }
      if (*(uint *)(plVar13 + 3) <= unaff_w19) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb38();
      }
      plVar15 = plVar13 + lVar4 + 4;
      if (*plVar15 == 0) {
        lVar8 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08e8dec8);
        FUN_07145224(lVar8,0);
        if ((lVar8 != 0) &&
           (lVar9 = thunk_FUN_03cf5138(lVar8,*(undefined8 *)(*plVar13 + 0x40)), lVar9 == 0)) {
          uVar10 = thunk_FUN_03d0e0d0();
                    /* WARNING: Subroutine does not return */
          FUN_03c8f9fc(uVar10,0);
        }
        if (*(uint *)(plVar13 + 3) <= unaff_w19) {
                    /* WARNING: Subroutine does not return */
          FUN_03c8fb38();
        }
        *plVar15 = lVar8;
        thunk_FUN_03d233cc(plVar15,lVar8);
        if (*(int *)(*(long *)PTR_DAT_08e68f00 + 0xe0) == 0) {
          thunk_FUN_03cd7500();
        }
        lVar8 = FUN_0476e7ec(in_stack_00000010,*(undefined8 *)PTR_DAT_08e69dd0);
        if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03c8fb30();
        }
        uVar10 = FUN_085e29cc(lVar8,0);
        in_stack_00000018 = CONCAT44(in_stack_00000018._4_4_,uVar3);
        uVar11 = thunk_FUN_03cf4e64(*(undefined8 *)PTR_DAT_08e8dbd8,&stack0x00000018);
        uVar11 = FUN_06f6be0c(*(undefined8 *)PTR_DAT_08e8dee0,uVar11,0);
        uVar10 = FUN_06f683f8(uVar10,uVar11,0);
        FUN_085e2a7c(lVar8,uVar10,0);
        lVar9 = *(long *)(lVar6 + 0x10);
        if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03c8fb30();
        }
        if (*(uint *)(lVar9 + 0x18) <= unaff_w19) {
                    /* WARNING: Subroutine does not return */
          FUN_03c8fb38();
        }
        lVar9 = *(long *)(lVar9 + lVar4 * 8 + 0x20);
        uVar10 = FUN_0469cbf4(lVar8,*(undefined8 *)PTR_DAT_08e73ea8);
        if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03c8fb30();
        }
        puVar16 = (undefined8 *)(lVar9 + 0x10);
        *puVar16 = uVar10;
        thunk_FUN_03d233cc(puVar16);
        lVar8 = *(long *)(lVar6 + 0x10);
        if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03c8fb30();
        }
        if (*(uint *)(lVar8 + 0x18) <= unaff_w19) {
                    /* WARNING: Subroutine does not return */
          FUN_03c8fb38();
        }
        lVar8 = *(long *)(lVar8 + lVar4 * 8 + 0x20);
        if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03c8fb30();
        }
        if (*(long *)(lVar8 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03c8fb30();
        }
        uVar10 = FUN_045e11a4(*(long *)(lVar8 + 0x10),*(undefined8 *)PTR_DAT_08e8ded0);
        *(undefined8 *)(lVar8 + 0x18) = uVar10;
        thunk_FUN_03d233cc((undefined8 *)(lVar8 + 0x18));
        lVar8 = *(long *)PTR_DAT_08e8dd60;
        if (*(int *)(lVar8 + 0xe0) == 0) {
          thunk_FUN_03cd7500();
          lVar8 = *(long *)PTR_DAT_08e8dd60;
        }
        lVar8 = *(long *)(*(long *)(lVar8 + 0xb8) + 8);
        if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03c8fb30();
        }
        uVar12 = FUN_069a0c14(lVar8,uVar12 & 0xffffffff,*(undefined8 *)PTR_DAT_08e8dde8);
        uVar12 = FUN_06d28d2c(uVar12,uVar12 & 0xffffffff,*(undefined8 *)(unaff_x21 + 0x78));
        if ((uVar12 & 1) != 0) {
          lVar8 = *(long *)(lVar6 + 0x10);
          if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03c8fb30();
          }
          if (*(uint *)(lVar8 + 0x18) <= unaff_w19) {
                    /* WARNING: Subroutine does not return */
            FUN_03c8fb38();
          }
          lVar8 = *(long *)(lVar8 + lVar4 * 8 + 0x20);
          if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03c8fb30();
          }
          plVar13 = *(long **)(lVar8 + 0x18);
          uStack0000000000000028 = uVar3;
          in_stack_00000018 = *(undefined8 *)PTR_DAT_08e8dbd8;
          in_stack_00000020 = 0xffffffffffffffff;
          uVar10 = FUN_07138048(&stack0x00000018,0);
          if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_03c8fb30(uVar10,uVar10);
          }
          (**(code **)(*plVar13 + 0x558))(plVar13,uVar10,*(undefined8 *)(*plVar13 + 0x560));
        }
      }
      lVar8 = *(long *)(lVar6 + 0x10);
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30();
      }
      if (*(uint *)(lVar8 + 0x18) <= unaff_w19) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb38();
      }
      lVar8 = *(long *)(lVar8 + lVar4 * 8 + 0x20);
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30();
      }
      lVar8 = *(long *)(lVar8 + 0x18);
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30();
      }
      lVar8 = FUN_083ecc1c(lVar8,0);
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30();
      }
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30();
      }
      FUN_085eb238(*(undefined4 *)(lVar7 + 0x18),*(undefined4 *)(lVar7 + 0x1c),
                   *(undefined4 *)(lVar7 + 0x20),lVar8,0);
      lVar8 = *(long *)(lVar6 + 0x10);
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30();
      }
      if (*(uint *)(lVar8 + 0x18) <= unaff_w19) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb38();
      }
      lVar8 = *(long *)(lVar8 + lVar4 * 8 + 0x20);
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30();
      }
      lVar8 = *(long *)(lVar8 + 0x10);
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30();
      }
      FUN_085b1c34(*(undefined4 *)(lVar7 + 0x18),*(undefined4 *)(lVar7 + 0x1c),
                   *(undefined4 *)(lVar7 + 0x20),lVar8,0,0);
      lVar6 = *(long *)(lVar6 + 0x10);
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30();
      }
      if (*(uint *)(lVar6 + 0x18) <= unaff_w19) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb38();
      }
      lVar6 = *(long *)(lVar6 + lVar4 * 8 + 0x20);
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30();
      }
      lVar6 = *(long *)(lVar6 + 0x10);
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30();
      }
      FUN_085b1c34(*(undefined4 *)(lVar7 + 0x24),*(undefined4 *)(lVar7 + 0x28),
                   *(undefined4 *)(lVar7 + 0x2c),lVar6,1,0);
    }
    FUN_04a9305c(&stack0x00000030,*(undefined8 *)PTR_DAT_08e8dd30);
  }
  return;
}


