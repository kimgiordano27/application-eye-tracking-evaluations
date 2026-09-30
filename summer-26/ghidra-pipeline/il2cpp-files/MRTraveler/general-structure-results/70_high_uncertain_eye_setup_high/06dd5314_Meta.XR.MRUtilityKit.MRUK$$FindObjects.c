/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUK$$FindObjects
ENTRY_POINT: 06dd5314
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_21;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_MRUK__FindObjects(void)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  long unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x21;
  long *plVar13;
  long unaff_x22;
  long *plVar14;
  
  FUN_03c8f898(PTR_DAT_08e90b80);
  FUN_03c8f898(PTR_DAT_08e91358);
  FUN_03c8f898(PTR_DAT_08e91338);
  FUN_03c8f898(PTR_DAT_08e90a38);
  FUN_03c8f898(PTR_DAT_08e6c418);
  FUN_03c8f898(PTR_DAT_08e90a40);
  FUN_03c8f898(PTR_DAT_08e6c420);
  FUN_03c8f898(PTR_DAT_08e90bb0);
  FUN_03c8f898(PTR_DAT_08e90bb8);
  FUN_03c8f898(PTR_DAT_08e90bc0);
  FUN_03c8f898(PTR_DAT_08e90bd0);
  FUN_03c8f898(PTR_DAT_08e90bd8);
  FUN_03c8f898(PTR_DAT_08e90a60);
  FUN_03c8f898(PTR_DAT_08e90ae8);
  FUN_03c8f898(PTR_DAT_08e91360);
  FUN_03c8f898(PTR_DAT_08e91368);
  FUN_03c8f898(PTR_DAT_08e90e10);
  FUN_03c8f898(PTR_DAT_08e91370);
  *(undefined1 *)(unaff_x20 + 0xcdc) = 1;
  lVar5 = thunk_FUN_03cf5234(*unaff_x21);
  FUN_07145224(lVar5,0);
  if (lVar5 == 0) goto LAB_06dd58dc;
  *(long *)(lVar5 + 0x10) = unaff_x19;
  thunk_FUN_03d233cc();
  plVar13 = (long *)(lVar5 + 0x18);
  *plVar13 = unaff_x22;
  thunk_FUN_03d233cc(plVar13);
  puVar2 = PTR_DAT_08e69e98;
  lVar9 = *plVar13;
  if ((lVar9 == 0) || (lVar10 = *(long *)(lVar9 + 0x38), lVar10 == 0)) goto LAB_06dd58dc;
  if (*(int *)(lVar10 + 0x28) == 1) {
    plVar14 = (long *)(unaff_x19 + 0x38);
    if (*plVar14 == lVar9) {
      return;
    }
    *plVar14 = lVar9;
    thunk_FUN_03d233cc(plVar14,lVar9);
    puVar3 = PTR_DAT_08e91350;
    plVar6 = (long *)thunk_FUN_03cf5138(*plVar14,*(undefined8 *)PTR_DAT_08e91350);
    if (plVar6 != (long *)0x0) {
      if (*(long *)(unaff_x19 + 200) == 0) goto LAB_06dd58dc;
      uVar7 = FUN_06e41508(*(long *)(unaff_x19 + 200),0);
      lVar10 = *plVar6;
      lVar9 = *(long *)puVar3;
      uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == lVar9) {
            puVar8 = (undefined8 *)(lVar10 + (long)(*piVar12 + 4) * 0x10 + 0x138);
            goto LAB_06dd552c;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar8 = (undefined8 *)FUN_03cf1348(plVar6,lVar9,4);
LAB_06dd552c:
      (*(code *)*puVar8)(plVar6,uVar7,puVar8[1]);
      uVar7 = thunk_FUN_03cf5234(*(undefined8 *)puVar2);
      FUN_07064478();
      lVar10 = *plVar6;
      lVar9 = *(long *)puVar3;
      uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == lVar9) {
            puVar8 = (undefined8 *)(lVar10 + (long)(*piVar12 + 2) * 0x10 + 0x138);
            goto LAB_06dd55b0;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar8 = (undefined8 *)FUN_03cf1348(plVar6,lVar9,2);
LAB_06dd55b0:
      (*(code *)*puVar8)(plVar6,uVar7,puVar8[1]);
    }
    plVar6 = (long *)*plVar14;
    if (plVar6 == (long *)0x0) {
LAB_06dd5648:
      if (plVar6 == (long *)0x0) goto LAB_06dd58dc;
    }
    else {
      bVar1 = *(byte *)(*(long *)PTR_DAT_08e90ae8 + 0x130);
      if ((bVar1 <= *(byte *)(*plVar6 + 0x130)) &&
         (*(long *)(*(long *)(*plVar6 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)PTR_DAT_08e90ae8))
      {
        if (plVar6[7] == 0) {
          uVar7 = 0;
        }
        else {
          uVar7 = *(undefined8 *)(plVar6[7] + 0x10);
        }
        lVar10 = plVar6[0x14];
        lVar9 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08e91340);
        FUN_06dc24ec(lVar9,uVar7,lVar10);
        plVar6[0x1d] = lVar9;
        thunk_FUN_03d233cc(plVar6 + 0x1d,lVar9);
        plVar6 = (long *)*plVar14;
        goto LAB_06dd5648;
      }
    }
    if (plVar6[8] == 0) goto LAB_06dd58dc;
    lVar9 = *(long *)(plVar6[8] + 0x80);
    uVar7 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08e6c418);
    FUN_05d60b38();
    if (lVar9 == 0) goto LAB_06dd58dc;
    FUN_05d68e60(lVar9,uVar7,*(undefined8 *)PTR_DAT_08e6c420);
  }
  else {
    if (*(long *)(unaff_x19 + 0x90) == 0) goto LAB_06dd58dc;
    FUN_0675cb84(*(long *)(unaff_x19 + 0x90),*(undefined8 *)(lVar10 + 0x10),lVar9,
                 *(undefined8 *)PTR_DAT_08e91348);
  }
  puVar3 = PTR_DAT_08e90a38;
  if ((*plVar13 != 0) && (lVar9 = *(long *)(*plVar13 + 0x40), lVar9 != 0)) {
    lVar9 = *(long *)(lVar9 + 0x28);
    uVar7 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08e90a38);
    FUN_05d60b38();
    puVar4 = PTR_DAT_08e90a40;
    if (lVar9 != 0) {
      FUN_05d68e60(lVar9,uVar7,*(undefined8 *)PTR_DAT_08e90a40);
      if ((*plVar13 != 0) && (lVar9 = *(long *)(*plVar13 + 0x40), lVar9 != 0)) {
        lVar9 = *(long *)(lVar9 + 0x30);
        uVar7 = thunk_FUN_03cf5234(*(undefined8 *)puVar3);
        FUN_05d60b38();
        if (lVar9 != 0) {
          FUN_05d68e60(lVar9,uVar7,*(undefined8 *)puVar4);
          if ((*plVar13 != 0) && (lVar9 = *(long *)(*plVar13 + 0x40), lVar9 != 0)) {
            lVar9 = *(long *)(lVar9 + 0x38);
            uVar7 = thunk_FUN_03cf5234(*(undefined8 *)puVar3);
            FUN_05d60b38();
            if (lVar9 != 0) {
              FUN_05d68e60(lVar9,uVar7,*(undefined8 *)puVar4);
              if ((*plVar13 != 0) && (lVar9 = *(long *)(*plVar13 + 0x40), lVar9 != 0)) {
                lVar9 = *(long *)(lVar9 + 0x40);
                uVar7 = thunk_FUN_03cf5234(*(undefined8 *)puVar3);
                FUN_05d60b38();
                puVar3 = PTR_DAT_08e84f40;
                if (lVar9 != 0) {
                  FUN_05d68e60(lVar9,uVar7,*(undefined8 *)puVar4);
                  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
                    thunk_FUN_03cd7500();
                  }
                  if (DAT_0941341a == '\0') {
                    FUN_03c8f898(PTR_DAT_08e84f40);
                    DAT_0941341a = '\x01';
                  }
                  lVar9 = *(long *)puVar3;
                  if (*(int *)(lVar9 + 0xe0) == 0) {
                    thunk_FUN_03cd7500();
                    lVar9 = *(long *)puVar3;
                  }
                  if ((*plVar13 != 0) && (lVar10 = *(long *)(*plVar13 + 0x38), lVar10 != 0)) {
                    lVar9 = **(long **)(lVar9 + 0xb8);
                    uVar7 = FUN_08887a9c(*(undefined8 *)(lVar10 + 0x10),0);
                    puVar4 = PTR_DAT_08e91358;
                    puVar3 = PTR_DAT_08e82448;
                    if (lVar9 != 0) {
                      FUN_08887d18(lVar9,uVar7,1,0);
                      lVar9 = FUN_06dd3bf8();
                      if ((lVar9 != 0) && (lVar9 = *(long *)(lVar9 + 0x28), lVar9 != 0)) {
                        (**(code **)(lVar9 + 0x18))
                                  (*(undefined8 *)(lVar9 + 0x40),*plVar13,
                                   *(undefined8 *)(lVar9 + 0x28));
                      }
                      uVar7 = thunk_FUN_03cf5234(*(undefined8 *)puVar2);
                      FUN_07064478(uVar7,lVar5,*(undefined8 *)puVar4,0);
                      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
                        thunk_FUN_03cd7500();
                      }
                      FUN_06dff658(uVar7,0);
                      return;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_06dd58dc:
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


