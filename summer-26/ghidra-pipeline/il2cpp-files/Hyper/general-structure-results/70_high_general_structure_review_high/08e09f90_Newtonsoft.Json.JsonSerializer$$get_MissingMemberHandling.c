/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$get_MissingMemberHandling
ENTRY_POINT: 08e09f90
PROGRAM: Hyper-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_13;strong_file_logging_hits_2;telemetry_or_network_hits_7
*/


void Newtonsoft_Json_JsonSerializer__get_MissingMemberHandling(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  int *piVar9;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  long unaff_x22;
  undefined8 *puVar10;
  long lVar11;
  long *plVar12;
  undefined8 unaff_x24;
  undefined8 *puVar13;
  long lVar14;
  undefined8 *unaff_x26;
  
  puVar10 = (undefined8 *)(unaff_x22 + 0x60);
  *puVar10 = unaff_x24;
  thunk_FUN_049ee3d8(puVar10);
  puVar13 = (undefined8 *)(unaff_x19 + 0x58);
  *puVar13 = unaff_x20;
  thunk_FUN_049ee3d8(puVar13);
  puVar2 = PTR_DAT_0ac37530;
  if (*(long *)(unaff_x19 + 0x40) != 0) {
    FUN_09f7cf00();
    lVar14 = *(long *)(unaff_x19 + 0x38);
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_049a583c();
    }
    uVar6 = FUN_08a9d668();
    uVar6 = FUN_08a9d344(uVar6,0);
    if (lVar14 != 0) {
      FUN_09f7cf00(lVar14,uVar6,0);
      puVar2 = PTR_DAT_0ac6a500;
      plVar12 = (long *)*puVar13;
      if (plVar12 != (long *)0x0) {
        lVar14 = *plVar12;
        uVar6 = *unaff_x26;
        uVar8 = (ulong)*(ushort *)(lVar14 + 0x12e);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_0ac6a500) {
              puVar13 = (undefined8 *)(lVar14 + (long)(*piVar9 + 7) * 0x10 + 0x138);
              goto LAB_08e0a070;
            }
            uVar8 = uVar8 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar8 != 0);
        }
        puVar13 = (undefined8 *)FUN_04980e68(plVar12,*(long *)PTR_DAT_0ac6a500,7);
LAB_08e0a070:
        uVar8 = (*(code *)*puVar13)(plVar12,uVar6,puVar13[1]);
        if ((uVar8 & 1) == 0) {
          if ((*(long *)(unaff_x19 + 0x30) == 0) ||
             (lVar14 = FUN_0a178414(*(long *)(unaff_x19 + 0x30),0), lVar14 == 0))
          goto Newtonsoft_Json_JsonSerializer__get_DateParseHandling;
          FUN_0a17ba14(lVar14,0,0);
        }
        else {
          plVar12 = *(long **)(unaff_x19 + 0x40);
          if (plVar12 == (long *)0x0) goto Newtonsoft_Json_JsonSerializer__get_DateParseHandling;
          (**(code **)(*plVar12 + 0x2a8))
                    (0,0x3f800000,0,0x3f800000,plVar12,*(undefined8 *)(*plVar12 + 0x2b0));
          plVar12 = *(long **)(unaff_x19 + 0x40);
          if (plVar12 == (long *)0x0) goto Newtonsoft_Json_JsonSerializer__get_DateParseHandling;
          uVar6 = (**(code **)(*plVar12 + 0x548))(plVar12,*(undefined8 *)(*plVar12 + 0x550));
          uVar6 = FUN_08bcc3c0(uVar6,*(undefined8 *)PTR_DAT_0ac6a538,0);
          FUN_09f7cf00(plVar12,uVar6,0);
        }
        plVar12 = (long *)*puVar10;
        if (plVar12 != (long *)0x0) {
          lVar14 = *plVar12;
          uVar8 = (ulong)*(ushort *)(lVar14 + 0x12e);
          uVar6 = *(undefined8 *)PTR_DAT_0ac6a530;
          if (uVar8 != 0) {
            piVar9 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
            do {
              if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_0ac36df8) {
                puVar10 = (undefined8 *)(lVar14 + (long)*piVar9 * 0x10 + 0x138);
                goto LAB_08e0a178;
              }
              uVar8 = uVar8 - 1;
              piVar9 = piVar9 + 4;
            } while (uVar8 != 0);
          }
          puVar10 = (undefined8 *)FUN_04980e68(plVar12,*(long *)PTR_DAT_0ac36df8,0);
LAB_08e0a178:
          uVar8 = (*(code *)*puVar10)(plVar12,uVar6,puVar10[1]);
          if ((uVar8 & 1) == 0) {
            if ((*(long *)(unaff_x19 + 0x30) == 0) ||
               (lVar14 = FUN_0a178414(*(long *)(unaff_x19 + 0x30),0), lVar14 == 0))
            goto Newtonsoft_Json_JsonSerializer__get_DateParseHandling;
            FUN_0a17ba14(lVar14,0,0);
          }
          lVar14 = *(long *)(unaff_x19 + 0x28);
          uVar6 = thunk_FUN_04983f60(*(undefined8 *)PTR_DAT_0ac09d30);
          FUN_08cc3ad0();
          if (lVar14 != 0) {
            FUN_05291894(lVar14,uVar6,0);
            if (((*(long *)(unaff_x19 + 0x28) != 0) &&
                (lVar14 = FUN_0a178414(*(long *)(unaff_x19 + 0x28),0), lVar14 != 0)) &&
               (FUN_0a17ba14(lVar14,0,0), puVar3 = PTR_DAT_0ac09ea8, puVar1 = PTR_DAT_0ac09cd0,
               unaff_x20 != (long *)0x0)) {
              lVar14 = *unaff_x20;
              uVar8 = (ulong)*(ushort *)(lVar14 + 0x12e);
              if (uVar8 != 0) {
                piVar9 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar9 + -2) == *(long *)puVar2) {
                    puVar10 = (undefined8 *)(lVar14 + (long)(*piVar9 + 4) * 0x10 + 0x138);
                    goto LAB_08e0a27c;
                  }
                  uVar8 = uVar8 - 1;
                  piVar9 = piVar9 + 4;
                } while (uVar8 != 0);
              }
              puVar10 = (undefined8 *)FUN_04980e68();
LAB_08e0a27c:
              puVar5 = PTR_DAT_0ac6a510;
              puVar4 = PTR_DAT_0ac6a4f8;
              uVar6 = (*(code *)*puVar10)();
              uVar7 = thunk_FUN_04983f60(*(undefined8 *)puVar1);
              FUN_05f878c4();
              uVar6 = FUN_05d0896c(uVar6,uVar7,*(undefined8 *)puVar3);
              *(undefined8 *)(unaff_x21 + 0x30) = uVar6;
              thunk_FUN_049ee3d8();
              lVar14 = *unaff_x20;
              uVar8 = (ulong)*(ushort *)(lVar14 + 0x12e);
              if (uVar8 != 0) {
                piVar9 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar9 + -2) == *(long *)puVar2) {
                    puVar10 = (undefined8 *)(lVar14 + (long)(*piVar9 + 5) * 0x10 + 0x138);
                    goto LAB_08e0a334;
                  }
                  uVar8 = uVar8 - 1;
                  piVar9 = piVar9 + 4;
                } while (uVar8 != 0);
              }
              puVar10 = (undefined8 *)FUN_04980e68();
LAB_08e0a334:
              uVar6 = (*(code *)*puVar10)();
              uVar7 = thunk_FUN_04983f60(*(undefined8 *)puVar4);
              FUN_05f851bc();
              uVar6 = FUN_05d0806c(uVar6,uVar7,*(undefined8 *)puVar5);
              *(undefined8 *)(unaff_x21 + 0x28) = uVar6;
              thunk_FUN_049ee3d8();
              lVar14 = *unaff_x20;
              lVar11 = *(long *)(unaff_x19 + 0x30);
              uVar8 = (ulong)*(ushort *)(lVar14 + 0x12e);
              if (uVar8 != 0) {
                piVar9 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar9 + -2) == *(long *)puVar2) {
                    puVar10 = (undefined8 *)(lVar14 + (long)(*piVar9 + 2) * 0x10 + 0x138);
                    goto LAB_08e0a3d8;
                  }
                  uVar8 = uVar8 - 1;
                  piVar9 = piVar9 + 4;
                } while (uVar8 != 0);
              }
              puVar10 = (undefined8 *)FUN_04980e68();
LAB_08e0a3d8:
              uVar6 = (*(code *)*puVar10)();
              uVar7 = thunk_FUN_04983f60(*(undefined8 *)puVar1);
              uVar8 = (ulong)*(ushort *)(*unaff_x20 + 0x12e);
              if (uVar8 != 0) {
                lVar14 = *(long *)(*unaff_x20 + 0xb0) + 8;
                do {
                  if (*(long *)(lVar14 + -8) == *(long *)puVar2) goto LAB_08e0a448;
                  uVar8 = uVar8 - 1;
                  lVar14 = lVar14 + 0x10;
                } while (uVar8 != 0);
              }
              FUN_04980e68();
LAB_08e0a448:
              FUN_05f878c4(uVar7);
              puVar3 = PTR_DAT_0ac37c00;
              puVar1 = PTR_DAT_0ac0a0f8;
              puVar2 = PTR_DAT_0ac09e20;
              if (lVar11 != 0) {
                uVar6 = FUN_04d0b2fc(lVar11,uVar6,uVar7,0);
                uVar7 = FUN_08aa1c24();
                FUN_05b466fc(uVar6,uVar7,*(undefined8 *)puVar3);
                uVar6 = thunk_FUN_04983f60(*(undefined8 *)PTR_DAT_0ac09d30);
                FUN_08cc3ad0();
                if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                  thunk_FUN_049a583c();
                }
                uVar6 = FUN_09b8bbb0(uVar6,0);
                uVar7 = FUN_08aa1c24();
                FUN_05b466fc(uVar6,uVar7,*(undefined8 *)puVar2);
                return;
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


