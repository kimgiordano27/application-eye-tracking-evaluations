/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$set_NullValueHandling
ENTRY_POINT: 08e09ffc
PROGRAM: Hyper-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_11;strong_file_logging_hits_2;telemetry_or_network_hits_8
*/


void Newtonsoft_Json_JsonSerializer__set_NullValueHandling(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  undefined8 *unaff_x22;
  long lVar11;
  long *plVar12;
  undefined8 *unaff_x24;
  undefined8 uVar13;
  undefined8 *unaff_x26;
  
  FUN_09f7cf00();
  puVar2 = PTR_DAT_0ac6a500;
  plVar12 = (long *)*unaff_x24;
  if (plVar12 == (long *)0x0) goto Newtonsoft_Json_JsonSerializer__get_DateParseHandling;
  lVar8 = *plVar12;
  uVar13 = *unaff_x26;
  uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
  if (uVar9 != 0) {
    piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
    do {
      if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_0ac6a500) {
        puVar6 = (undefined8 *)(lVar8 + (long)(*piVar10 + 7) * 0x10 + 0x138);
        goto LAB_08e0a070;
      }
      uVar9 = uVar9 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar9 != 0);
  }
  puVar6 = (undefined8 *)FUN_04980e68(plVar12,*(long *)PTR_DAT_0ac6a500,7);
LAB_08e0a070:
  uVar9 = (*(code *)*puVar6)(plVar12,uVar13,puVar6[1]);
  if ((uVar9 & 1) == 0) {
    if ((*(long *)(unaff_x19 + 0x30) == 0) ||
       (lVar8 = FUN_0a178414(*(long *)(unaff_x19 + 0x30),0), lVar8 == 0))
    goto Newtonsoft_Json_JsonSerializer__get_DateParseHandling;
    FUN_0a17ba14(lVar8,0,0);
  }
  else {
    plVar12 = *(long **)(unaff_x19 + 0x40);
    if (plVar12 == (long *)0x0) goto Newtonsoft_Json_JsonSerializer__get_DateParseHandling;
    (**(code **)(*plVar12 + 0x2a8))
              (0,0x3f800000,0,0x3f800000,plVar12,*(undefined8 *)(*plVar12 + 0x2b0));
    plVar12 = *(long **)(unaff_x19 + 0x40);
    if (plVar12 == (long *)0x0) goto Newtonsoft_Json_JsonSerializer__get_DateParseHandling;
    uVar13 = (**(code **)(*plVar12 + 0x548))(plVar12,*(undefined8 *)(*plVar12 + 0x550));
    uVar13 = FUN_08bcc3c0(uVar13,*(undefined8 *)PTR_DAT_0ac6a538,0);
    FUN_09f7cf00(plVar12,uVar13,0);
  }
  plVar12 = (long *)*unaff_x22;
  if (plVar12 != (long *)0x0) {
    lVar8 = *plVar12;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    uVar13 = *(undefined8 *)PTR_DAT_0ac6a530;
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_0ac36df8) {
          puVar6 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_08e0a178;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar6 = (undefined8 *)FUN_04980e68(plVar12,*(long *)PTR_DAT_0ac36df8,0);
LAB_08e0a178:
    uVar9 = (*(code *)*puVar6)(plVar12,uVar13,puVar6[1]);
    if ((uVar9 & 1) == 0) {
      if ((*(long *)(unaff_x19 + 0x30) == 0) ||
         (lVar8 = FUN_0a178414(*(long *)(unaff_x19 + 0x30),0), lVar8 == 0))
      goto Newtonsoft_Json_JsonSerializer__get_DateParseHandling;
      FUN_0a17ba14(lVar8,0,0);
    }
    lVar8 = *(long *)(unaff_x19 + 0x28);
    uVar13 = thunk_FUN_04983f60(*(undefined8 *)PTR_DAT_0ac09d30);
    FUN_08cc3ad0();
    if (lVar8 != 0) {
      FUN_05291894(lVar8,uVar13,0);
      if (((*(long *)(unaff_x19 + 0x28) != 0) &&
          (lVar8 = FUN_0a178414(*(long *)(unaff_x19 + 0x28),0), lVar8 != 0)) &&
         (FUN_0a17ba14(lVar8,0,0), puVar3 = PTR_DAT_0ac09ea8, puVar1 = PTR_DAT_0ac09cd0,
         unaff_x20 != (long *)0x0)) {
        lVar8 = *unaff_x20;
        uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == *(long *)puVar2) {
              puVar6 = (undefined8 *)(lVar8 + (long)(*piVar10 + 4) * 0x10 + 0x138);
              goto LAB_08e0a27c;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        puVar6 = (undefined8 *)FUN_04980e68();
LAB_08e0a27c:
        puVar5 = PTR_DAT_0ac6a510;
        puVar4 = PTR_DAT_0ac6a4f8;
        uVar13 = (*(code *)*puVar6)();
        uVar7 = thunk_FUN_04983f60(*(undefined8 *)puVar1);
        FUN_05f878c4();
        uVar13 = FUN_05d0896c(uVar13,uVar7,*(undefined8 *)puVar3);
        *(undefined8 *)(unaff_x21 + 0x30) = uVar13;
        thunk_FUN_049ee3d8();
        lVar8 = *unaff_x20;
        uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == *(long *)puVar2) {
              puVar6 = (undefined8 *)(lVar8 + (long)(*piVar10 + 5) * 0x10 + 0x138);
              goto LAB_08e0a334;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        puVar6 = (undefined8 *)FUN_04980e68();
LAB_08e0a334:
        uVar13 = (*(code *)*puVar6)();
        uVar7 = thunk_FUN_04983f60(*(undefined8 *)puVar4);
        FUN_05f851bc();
        uVar13 = FUN_05d0806c(uVar13,uVar7,*(undefined8 *)puVar5);
        *(undefined8 *)(unaff_x21 + 0x28) = uVar13;
        thunk_FUN_049ee3d8();
        lVar8 = *unaff_x20;
        lVar11 = *(long *)(unaff_x19 + 0x30);
        uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == *(long *)puVar2) {
              puVar6 = (undefined8 *)(lVar8 + (long)(*piVar10 + 2) * 0x10 + 0x138);
              goto LAB_08e0a3d8;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        puVar6 = (undefined8 *)FUN_04980e68();
LAB_08e0a3d8:
        uVar13 = (*(code *)*puVar6)();
        uVar7 = thunk_FUN_04983f60(*(undefined8 *)puVar1);
        uVar9 = (ulong)*(ushort *)(*unaff_x20 + 0x12e);
        if (uVar9 != 0) {
          lVar8 = *(long *)(*unaff_x20 + 0xb0) + 8;
          do {
            if (*(long *)(lVar8 + -8) == *(long *)puVar2) goto LAB_08e0a448;
            uVar9 = uVar9 - 1;
            lVar8 = lVar8 + 0x10;
          } while (uVar9 != 0);
        }
        FUN_04980e68();
LAB_08e0a448:
        FUN_05f878c4(uVar7);
        puVar3 = PTR_DAT_0ac37c00;
        puVar1 = PTR_DAT_0ac0a0f8;
        puVar2 = PTR_DAT_0ac09e20;
        if (lVar11 != 0) {
          uVar13 = FUN_04d0b2fc(lVar11,uVar13,uVar7,0);
          uVar7 = FUN_08aa1c24();
          FUN_05b466fc(uVar13,uVar7,*(undefined8 *)puVar3);
          uVar13 = thunk_FUN_04983f60(*(undefined8 *)PTR_DAT_0ac09d30);
          FUN_08cc3ad0();
          if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
            thunk_FUN_049a583c();
          }
          uVar13 = FUN_09b8bbb0(uVar13,0);
          uVar7 = FUN_08aa1c24();
          FUN_05b466fc(uVar13,uVar7,*(undefined8 *)puVar2);
          return;
        }
      }
    }
  }
Newtonsoft_Json_JsonSerializer__get_DateParseHandling:
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


