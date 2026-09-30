/*
FUNCTION_NAME: Meta.WitAi.TTS.Integrations.TTSWit$$RequestStreamFromWeb
ENTRY_POINT: 06d28cfc
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_10;ray_or_cast_sink_hits_1;telemetry_or_network_hits_2
*/


void Meta_WitAi_TTS_Integrations_TTSWit__RequestStreamFromWeb(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  undefined8 *unaff_x20;
  long *unaff_x21;
  int unaff_w22;
  int unaff_w23;
  long unaff_x24;
  long *unaff_x28;
  undefined8 *puVar10;
  long *unaff_x29;
  undefined8 in_stack_00000000;
  long in_stack_00000008;
  undefined8 in_stack_00000010;
  int iStack0000000000000018;
  int iStack000000000000001c;
  
code_r0x06d28cfc:
  do {
    unaff_w23 = unaff_w23 + 1;
    if (unaff_w23 == unaff_w22) {
                    /* catch(type#1 @ 088de0a8) { ... } // from try @ 06d28c84 with catch @ 06d28d08
                        */
                    /* catch(type#1 @ 088de0a8) { ... } // from try @ 06d28c9c with catch @ 06d28d0c
                        */
                    /* catch(type#1 @ 088de0a8) { ... } // from try @ 06d28cc0 with catch @ 06d28d10
                        */
                    /* catch(type#1 @ 088de0a8) { ... } // from try @ 06d28c6c with catch @ 06d28d14
                        */
                    /* catch(type#1 @ 088de0a8) { ... } // from try @ 06d28c5c with catch @ 06d28d18
                        */
      return;
    }
    lVar7 = *unaff_x21;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *unaff_x29) {
          puVar4 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_06d28964;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar4 = (undefined8 *)FUN_03cf1348();
LAB_06d28964:
    lVar7 = (*(code *)*puVar4)();
    if ((lVar7 == 0) || (unaff_x24 == 0)) goto LAB_06d28d28;
    iVar2 = *(int *)(lVar7 + 0x10);
    uVar8 = FUN_069a0e9c(unaff_x24,iVar2,*unaff_x20);
  } while ((uVar8 & 1) == 0);
  uVar3 = FUN_069a0c14(unaff_x24,iVar2,*(undefined8 *)PTR_DAT_08e8d5f0);
  lVar5 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08e8ddf0);
  FUN_07145224(lVar5,0);
  puVar4 = (undefined8 *)(lVar7 + 0x18);
  if (lVar5 != 0) {
    *(undefined8 *)(lVar5 + 0x10) = *puVar4;
    thunk_FUN_03d233cc();
    lVar7 = *unaff_x28;
    if (*(int *)(lVar7 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
      lVar7 = *unaff_x28;
    }
    lVar7 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x18);
    if (lVar7 != 0) {
      uVar8 = FUN_069a4480(lVar7,iVar2,*(undefined8 *)PTR_DAT_08e8d998);
      if ((uVar8 & 1) == 0) {
        iStack000000000000001c = iVar2;
        uVar6 = thunk_FUN_03cf4e64(*(undefined8 *)PTR_DAT_08e71500,(long)&stack0x00000018 + 4);
        uVar6 = FUN_06f6be0c(*(undefined8 *)PTR_DAT_08e8de20,uVar6,0);
        if (*(int *)(*(long *)PTR_DAT_08e69670 + 0xe0) == 0) {
          thunk_FUN_03cd7500(*(long *)PTR_DAT_08e69670);
        }
        FUN_085a437c(uVar6,0);
        unaff_x28 = (long *)PTR_DAT_08e8dd60;
      }
      lVar7 = *unaff_x28;
      if (*(int *)(lVar7 + 0xe0) == 0) {
        thunk_FUN_03cd7500();
        lVar7 = *unaff_x28;
      }
      lVar7 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x18);
      if ((lVar7 != 0) &&
         (lVar7 = System_Collections_Generic_Dictionary<object,_PokeInteractor_SurfaceHitCache_HitInfo>__TryInsert
                            (lVar7,iVar2,*(undefined8 *)PTR_DAT_08e8d9a0), lVar7 != 0)) {
        iVar1 = *(int *)(lVar7 + 0x14);
        if (*(int *)(lVar7 + 0x10) != iVar2) {
          lVar7 = FUN_06d2e680();
          if (lVar7 == 0) goto LAB_06d28d28;
          puVar4 = (undefined8 *)(lVar7 + 0x18);
        }
        puVar10 = (undefined8 *)(lVar5 + 0x30);
        *puVar10 = *puVar4;
        thunk_FUN_03d233cc(puVar10);
        if (iVar1 != -1) {
          lVar7 = FUN_06d2e680();
          if (lVar7 == 0) goto LAB_06d28d28;
          puVar10 = (undefined8 *)(lVar7 + 0x18);
        }
        puVar4 = (undefined8 *)(lVar5 + 0x38);
        *puVar4 = *puVar10;
        thunk_FUN_03d233cc(puVar4);
        lVar7 = *unaff_x21;
        uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == *unaff_x29) {
              puVar10 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
              goto LAB_06d28b80;
            }
            uVar8 = uVar8 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar8 != 0);
        }
        puVar10 = (undefined8 *)FUN_03cf1348();
LAB_06d28b80:
        lVar7 = (*(code *)*puVar10)();
        if (lVar7 != 0) {
          *(undefined8 *)(lVar5 + 0x68) = *(undefined8 *)(lVar7 + 0x18);
          thunk_FUN_03d233cc((undefined8 *)(lVar5 + 0x68));
          uVar6 = *(undefined8 *)(lVar5 + 0x30);
          if (*(int *)(*(long *)PTR_DAT_08e68f00 + 0xe0) == 0) {
            thunk_FUN_03cd7500();
          }
          uVar8 = FUN_085dfaac(uVar6,0,0);
          if ((uVar8 & 1) != 0) {
            iStack0000000000000018 = iVar2;
            uVar6 = thunk_FUN_03cf4e64(*(undefined8 *)PTR_DAT_08e71500,&stack0x00000018);
            uVar6 = FUN_06f6be0c(*(undefined8 *)PTR_DAT_08e8de18,uVar6,0);
            if (*(int *)(*(long *)PTR_DAT_08e69670 + 0xe0) == 0) {
              thunk_FUN_03cd7500(*(long *)PTR_DAT_08e69670);
            }
            FUN_085a48e4(uVar6,0);
          }
          uVar6 = *puVar4;
          if (*(int *)(*(long *)PTR_DAT_08e68f00 + 0xe0) == 0) {
            thunk_FUN_03cd7500();
          }
          uVar8 = FUN_085dfaac(uVar6,0,0);
          unaff_x28 = (long *)PTR_DAT_08e8dd60;
          if ((uVar8 & 1) != 0) {
            in_stack_00000010._4_4_ = iVar2;
            uVar6 = thunk_FUN_03cf4e64(*(undefined8 *)PTR_DAT_08e71500,(long)&stack0x00000010 + 4);
            uVar6 = FUN_06f6be0c(*(undefined8 *)PTR_DAT_08e8de10,uVar6,0);
            if (*(int *)(*(long *)PTR_DAT_08e69670 + 0xe0) == 0) {
              thunk_FUN_03cd7500(*(long *)PTR_DAT_08e69670);
            }
            FUN_085a48e4(uVar6,0);
          }
          if (*(long *)(in_stack_00000008 + 0x10) != 0) {
            FUN_069a428c(*(long *)(in_stack_00000008 + 0x10),uVar3,lVar5,
                         *(undefined8 *)PTR_DAT_08e8ddf8);
            unaff_w22 = in_stack_00000000._4_4_;
            goto code_r0x06d28cfc;
          }
        }
      }
    }
  }
LAB_06d28d28:
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


