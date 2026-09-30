/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$set_PreserveReferencesHandling
ENTRY_POINT: 08e09ed0
PROGRAM: Hyper-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_14;strong_file_logging_hits_2;telemetry_or_network_hits_7
*/


void Newtonsoft_Json_JsonSerializer__set_PreserveReferencesHandling(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  ulong uVar11;
  int *piVar12;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  undefined8 unaff_x22;
  undefined8 *puVar13;
  long lVar14;
  long *plVar15;
  undefined8 unaff_x24;
  undefined8 *puVar16;
  undefined8 unaff_x25;
  long lVar17;
  undefined8 *unaff_x26;
  undefined8 *puVar18;
  
  FUN_04947ee4(*(undefined8 *)(param_1 + 0x508));
  FUN_04947ee4(PTR_DAT_0ac09ea8);
  FUN_04947ee4(PTR_DAT_0ac6a510);
  FUN_04947ee4(PTR_DAT_0ac6a518);
  FUN_04947ee4(PTR_DAT_0ac6a520);
  FUN_04947ee4(PTR_DAT_0ac6a528);
  FUN_04947ee4(PTR_DAT_0ac6a4f0);
  FUN_04947ee4(PTR_DAT_0ac6a530);
  FUN_04947ee4(PTR_DAT_0ac6a538);
  *(undefined1 *)(unaff_x21 + 0xc46) = 1;
  lVar8 = thunk_FUN_04983f60(*unaff_x26);
  FUN_08dbf2f0(lVar8,0);
  if (lVar8 != 0) {
    *(long *)(lVar8 + 0x10) = unaff_x19;
    thunk_FUN_049ee3d8();
    puVar18 = (undefined8 *)(lVar8 + 0x18);
    *puVar18 = unaff_x25;
    thunk_FUN_049ee3d8(puVar18);
    *(undefined8 *)(lVar8 + 0x20) = unaff_x22;
    thunk_FUN_049ee3d8();
    puVar13 = (undefined8 *)(unaff_x19 + 0x60);
    *puVar13 = unaff_x24;
    thunk_FUN_049ee3d8(puVar13);
    puVar16 = (undefined8 *)(unaff_x19 + 0x58);
    *puVar16 = unaff_x20;
    thunk_FUN_049ee3d8(puVar16);
    puVar2 = PTR_DAT_0ac37530;
    if (*(long *)(unaff_x19 + 0x40) != 0) {
      FUN_09f7cf00();
      lVar17 = *(long *)(unaff_x19 + 0x38);
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_049a583c();
      }
      uVar9 = FUN_08a9d668();
      uVar9 = FUN_08a9d344(uVar9,0);
      if (lVar17 != 0) {
        FUN_09f7cf00(lVar17,uVar9,0);
        puVar2 = PTR_DAT_0ac6a500;
        plVar15 = (long *)*puVar16;
        if (plVar15 != (long *)0x0) {
          lVar17 = *plVar15;
          uVar9 = *puVar18;
          uVar11 = (ulong)*(ushort *)(lVar17 + 0x12e);
          if (uVar11 != 0) {
            piVar12 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_0ac6a500) {
                puVar16 = (undefined8 *)(lVar17 + (long)(*piVar12 + 7) * 0x10 + 0x138);
                goto LAB_08e0a070;
              }
              uVar11 = uVar11 - 1;
              piVar12 = piVar12 + 4;
            } while (uVar11 != 0);
          }
          puVar16 = (undefined8 *)FUN_04980e68(plVar15,*(long *)PTR_DAT_0ac6a500,7);
LAB_08e0a070:
          uVar11 = (*(code *)*puVar16)(plVar15,uVar9,puVar16[1]);
          if ((uVar11 & 1) == 0) {
            if ((*(long *)(unaff_x19 + 0x30) == 0) ||
               (lVar17 = FUN_0a178414(*(long *)(unaff_x19 + 0x30),0), lVar17 == 0))
            goto Newtonsoft_Json_JsonSerializer__get_DateParseHandling;
            FUN_0a17ba14(lVar17,0,0);
          }
          else {
            plVar15 = *(long **)(unaff_x19 + 0x40);
            if (plVar15 == (long *)0x0) goto Newtonsoft_Json_JsonSerializer__get_DateParseHandling;
            (**(code **)(*plVar15 + 0x2a8))
                      (0,0x3f800000,0,0x3f800000,plVar15,*(undefined8 *)(*plVar15 + 0x2b0));
            plVar15 = *(long **)(unaff_x19 + 0x40);
            if (plVar15 == (long *)0x0) goto Newtonsoft_Json_JsonSerializer__get_DateParseHandling;
            uVar9 = (**(code **)(*plVar15 + 0x548))(plVar15,*(undefined8 *)(*plVar15 + 0x550));
            uVar9 = FUN_08bcc3c0(uVar9,*(undefined8 *)PTR_DAT_0ac6a538,0);
            FUN_09f7cf00(plVar15,uVar9,0);
          }
          plVar15 = (long *)*puVar13;
          if (plVar15 != (long *)0x0) {
            lVar17 = *plVar15;
            uVar11 = (ulong)*(ushort *)(lVar17 + 0x12e);
            uVar9 = *(undefined8 *)PTR_DAT_0ac6a530;
            if (uVar11 != 0) {
              piVar12 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
              do {
                if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_0ac36df8) {
                  puVar13 = (undefined8 *)(lVar17 + (long)*piVar12 * 0x10 + 0x138);
                  goto LAB_08e0a178;
                }
                uVar11 = uVar11 - 1;
                piVar12 = piVar12 + 4;
              } while (uVar11 != 0);
            }
            puVar13 = (undefined8 *)FUN_04980e68(plVar15,*(long *)PTR_DAT_0ac36df8,0);
LAB_08e0a178:
            uVar11 = (*(code *)*puVar13)(plVar15,uVar9,puVar13[1]);
            if ((uVar11 & 1) == 0) {
              if ((*(long *)(unaff_x19 + 0x30) == 0) ||
                 (lVar17 = FUN_0a178414(*(long *)(unaff_x19 + 0x30),0), lVar17 == 0))
              goto Newtonsoft_Json_JsonSerializer__get_DateParseHandling;
              FUN_0a17ba14(lVar17,0,0);
            }
            lVar17 = *(long *)(unaff_x19 + 0x28);
            uVar9 = thunk_FUN_04983f60(*(undefined8 *)PTR_DAT_0ac09d30);
            FUN_08cc3ad0();
            if (lVar17 != 0) {
              FUN_05291894(lVar17,uVar9,0);
              if (((*(long *)(unaff_x19 + 0x28) != 0) &&
                  (lVar17 = FUN_0a178414(*(long *)(unaff_x19 + 0x28),0), lVar17 != 0)) &&
                 (FUN_0a17ba14(lVar17,0,0), puVar6 = PTR_DAT_0ac6a518, puVar3 = PTR_DAT_0ac09ea8,
                 puVar1 = PTR_DAT_0ac09cd0, unaff_x20 != (long *)0x0)) {
                lVar17 = *unaff_x20;
                uVar11 = (ulong)*(ushort *)(lVar17 + 0x12e);
                if (uVar11 != 0) {
                  piVar12 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
                      puVar13 = (undefined8 *)(lVar17 + (long)(*piVar12 + 4) * 0x10 + 0x138);
                      goto LAB_08e0a27c;
                    }
                    uVar11 = uVar11 - 1;
                    piVar12 = piVar12 + 4;
                  } while (uVar11 != 0);
                }
                puVar13 = (undefined8 *)FUN_04980e68();
LAB_08e0a27c:
                puVar7 = PTR_DAT_0ac6a520;
                puVar5 = PTR_DAT_0ac6a510;
                puVar4 = PTR_DAT_0ac6a4f8;
                uVar9 = (*(code *)*puVar13)();
                uVar10 = thunk_FUN_04983f60(*(undefined8 *)puVar1);
                FUN_05f878c4(uVar10,lVar8,*(undefined8 *)puVar6,0);
                uVar9 = FUN_05d0896c(uVar9,uVar10,*(undefined8 *)puVar3);
                *(undefined8 *)(lVar8 + 0x30) = uVar9;
                thunk_FUN_049ee3d8();
                lVar17 = *unaff_x20;
                uVar11 = (ulong)*(ushort *)(lVar17 + 0x12e);
                if (uVar11 != 0) {
                  piVar12 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
                      puVar13 = (undefined8 *)(lVar17 + (long)(*piVar12 + 5) * 0x10 + 0x138);
                      goto LAB_08e0a334;
                    }
                    uVar11 = uVar11 - 1;
                    piVar12 = piVar12 + 4;
                  } while (uVar11 != 0);
                }
                puVar13 = (undefined8 *)FUN_04980e68();
LAB_08e0a334:
                uVar9 = (*(code *)*puVar13)();
                uVar10 = thunk_FUN_04983f60(*(undefined8 *)puVar4);
                FUN_05f851bc(uVar10,lVar8,*(undefined8 *)puVar7,0);
                uVar9 = FUN_05d0806c(uVar9,uVar10,*(undefined8 *)puVar5);
                *(undefined8 *)(lVar8 + 0x28) = uVar9;
                thunk_FUN_049ee3d8();
                lVar17 = *unaff_x20;
                lVar14 = *(long *)(unaff_x19 + 0x30);
                uVar11 = (ulong)*(ushort *)(lVar17 + 0x12e);
                if (uVar11 != 0) {
                  piVar12 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
                      puVar13 = (undefined8 *)(lVar17 + (long)(*piVar12 + 2) * 0x10 + 0x138);
                      goto LAB_08e0a3d8;
                    }
                    uVar11 = uVar11 - 1;
                    piVar12 = piVar12 + 4;
                  } while (uVar11 != 0);
                }
                puVar13 = (undefined8 *)FUN_04980e68();
LAB_08e0a3d8:
                uVar9 = (*(code *)*puVar13)();
                uVar10 = thunk_FUN_04983f60(*(undefined8 *)puVar1);
                uVar11 = (ulong)*(ushort *)(*unaff_x20 + 0x12e);
                if (uVar11 != 0) {
                  lVar17 = *(long *)(*unaff_x20 + 0xb0) + 8;
                  do {
                    if (*(long *)(lVar17 + -8) == *(long *)puVar2) goto LAB_08e0a448;
                    uVar11 = uVar11 - 1;
                    lVar17 = lVar17 + 0x10;
                  } while (uVar11 != 0);
                }
                FUN_04980e68();
LAB_08e0a448:
                FUN_05f878c4(uVar10);
                puVar6 = PTR_DAT_0ac6a528;
                puVar3 = PTR_DAT_0ac37c00;
                puVar1 = PTR_DAT_0ac0a0f8;
                puVar2 = PTR_DAT_0ac09e20;
                if (lVar14 != 0) {
                  uVar9 = FUN_04d0b2fc(lVar14,uVar9,uVar10,0);
                  uVar10 = FUN_08aa1c24();
                  FUN_05b466fc(uVar9,uVar10,*(undefined8 *)puVar3);
                  uVar9 = thunk_FUN_04983f60(*(undefined8 *)PTR_DAT_0ac09d30);
                  FUN_08cc3ad0(uVar9,lVar8,*(undefined8 *)puVar6,0);
                  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                    thunk_FUN_049a583c();
                  }
                  uVar9 = FUN_09b8bbb0(uVar9,0);
                  uVar10 = FUN_08aa1c24();
                  FUN_05b466fc(uVar9,uVar10,*(undefined8 *)puVar2);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
Newtonsoft_Json_JsonSerializer__get_DateParseHandling:
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


