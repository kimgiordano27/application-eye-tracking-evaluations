/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$get_DefaultValueHandling
ENTRY_POINT: 08e0a058
PROGRAM: Hyper-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_10;strong_file_logging_hits_2;telemetry_or_network_hits_7
*/


void Newtonsoft_Json_JsonSerializer__get_DefaultValueHandling(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  ulong uVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  int *piVar11;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  undefined8 *unaff_x22;
  long lVar12;
  long *unaff_x25;
  
  puVar5 = (undefined8 *)FUN_04980e68();
  uVar6 = (*(code *)*puVar5)();
  if ((uVar6 & 1) == 0) {
    if ((*(long *)(unaff_x19 + 0x30) == 0) ||
       (lVar10 = FUN_0a178414(*(long *)(unaff_x19 + 0x30),0), lVar10 == 0))
    goto Newtonsoft_Json_JsonSerializer__get_DateParseHandling;
    FUN_0a17ba14(lVar10,0,0);
  }
  else {
    plVar7 = *(long **)(unaff_x19 + 0x40);
    if (plVar7 == (long *)0x0) goto Newtonsoft_Json_JsonSerializer__get_DateParseHandling;
    (**(code **)(*plVar7 + 0x2a8))
              (0,0x3f800000,0,0x3f800000,plVar7,*(undefined8 *)(*plVar7 + 0x2b0));
    plVar7 = *(long **)(unaff_x19 + 0x40);
    if (plVar7 == (long *)0x0) goto Newtonsoft_Json_JsonSerializer__get_DateParseHandling;
    uVar8 = (**(code **)(*plVar7 + 0x548))(plVar7,*(undefined8 *)(*plVar7 + 0x550));
    uVar8 = FUN_08bcc3c0(uVar8,*(undefined8 *)PTR_DAT_0ac6a538,0);
    FUN_09f7cf00(plVar7,uVar8,0);
  }
  plVar7 = (long *)*unaff_x22;
  if (plVar7 != (long *)0x0) {
    lVar10 = *plVar7;
    uVar6 = (ulong)*(ushort *)(lVar10 + 0x12e);
    uVar8 = *(undefined8 *)PTR_DAT_0ac6a530;
    if (uVar6 != 0) {
      piVar11 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_0ac36df8) {
          puVar5 = (undefined8 *)(lVar10 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_08e0a178;
        }
        uVar6 = uVar6 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar6 != 0);
    }
    puVar5 = (undefined8 *)FUN_04980e68(plVar7,*(long *)PTR_DAT_0ac36df8,0);
LAB_08e0a178:
    uVar6 = (*(code *)*puVar5)(plVar7,uVar8,puVar5[1]);
    if ((uVar6 & 1) == 0) {
      if ((*(long *)(unaff_x19 + 0x30) == 0) ||
         (lVar10 = FUN_0a178414(*(long *)(unaff_x19 + 0x30),0), lVar10 == 0))
      goto Newtonsoft_Json_JsonSerializer__get_DateParseHandling;
      FUN_0a17ba14(lVar10,0,0);
    }
    lVar10 = *(long *)(unaff_x19 + 0x28);
    uVar8 = thunk_FUN_04983f60(*(undefined8 *)PTR_DAT_0ac09d30);
    FUN_08cc3ad0();
    if (lVar10 != 0) {
      FUN_05291894(lVar10,uVar8,0);
      if (((*(long *)(unaff_x19 + 0x28) != 0) &&
          (lVar10 = FUN_0a178414(*(long *)(unaff_x19 + 0x28),0), lVar10 != 0)) &&
         (FUN_0a17ba14(lVar10,0,0), puVar2 = PTR_DAT_0ac09ea8, puVar1 = PTR_DAT_0ac09cd0,
         unaff_x20 != (long *)0x0)) {
        lVar10 = *unaff_x20;
        uVar6 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar6 != 0) {
          piVar11 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == *unaff_x25) {
              puVar5 = (undefined8 *)(lVar10 + (long)(*piVar11 + 4) * 0x10 + 0x138);
              goto LAB_08e0a27c;
            }
            uVar6 = uVar6 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar6 != 0);
        }
        puVar5 = (undefined8 *)FUN_04980e68();
LAB_08e0a27c:
        puVar4 = PTR_DAT_0ac6a510;
        puVar3 = PTR_DAT_0ac6a4f8;
        uVar8 = (*(code *)*puVar5)();
        uVar9 = thunk_FUN_04983f60(*(undefined8 *)puVar1);
        FUN_05f878c4();
        uVar8 = FUN_05d0896c(uVar8,uVar9,*(undefined8 *)puVar2);
        *(undefined8 *)(unaff_x21 + 0x30) = uVar8;
        thunk_FUN_049ee3d8();
        lVar10 = *unaff_x20;
        uVar6 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar6 != 0) {
          piVar11 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == *unaff_x25) {
              puVar5 = (undefined8 *)(lVar10 + (long)(*piVar11 + 5) * 0x10 + 0x138);
              goto LAB_08e0a334;
            }
            uVar6 = uVar6 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar6 != 0);
        }
        puVar5 = (undefined8 *)FUN_04980e68();
LAB_08e0a334:
        uVar8 = (*(code *)*puVar5)();
        uVar9 = thunk_FUN_04983f60(*(undefined8 *)puVar3);
        FUN_05f851bc();
        uVar8 = FUN_05d0806c(uVar8,uVar9,*(undefined8 *)puVar4);
        *(undefined8 *)(unaff_x21 + 0x28) = uVar8;
        thunk_FUN_049ee3d8();
        lVar10 = *unaff_x20;
        lVar12 = *(long *)(unaff_x19 + 0x30);
        uVar6 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar6 != 0) {
          piVar11 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == *unaff_x25) {
              puVar5 = (undefined8 *)(lVar10 + (long)(*piVar11 + 2) * 0x10 + 0x138);
              goto LAB_08e0a3d8;
            }
            uVar6 = uVar6 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar6 != 0);
        }
        puVar5 = (undefined8 *)FUN_04980e68();
LAB_08e0a3d8:
        uVar8 = (*(code *)*puVar5)();
        uVar9 = thunk_FUN_04983f60(*(undefined8 *)puVar1);
        uVar6 = (ulong)*(ushort *)(*unaff_x20 + 0x12e);
        if (uVar6 != 0) {
          lVar10 = *(long *)(*unaff_x20 + 0xb0) + 8;
          do {
            if (*(long *)(lVar10 + -8) == *unaff_x25) goto LAB_08e0a448;
            uVar6 = uVar6 - 1;
            lVar10 = lVar10 + 0x10;
          } while (uVar6 != 0);
        }
        FUN_04980e68();
LAB_08e0a448:
        FUN_05f878c4(uVar9);
        puVar3 = PTR_DAT_0ac37c00;
        puVar2 = PTR_DAT_0ac0a0f8;
        puVar1 = PTR_DAT_0ac09e20;
        if (lVar12 != 0) {
          uVar8 = FUN_04d0b2fc(lVar12,uVar8,uVar9,0);
          uVar9 = FUN_08aa1c24();
          FUN_05b466fc(uVar8,uVar9,*(undefined8 *)puVar3);
          uVar8 = thunk_FUN_04983f60(*(undefined8 *)PTR_DAT_0ac09d30);
          FUN_08cc3ad0();
          if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
            thunk_FUN_049a583c();
          }
          uVar8 = FUN_09b8bbb0(uVar8,0);
          uVar9 = FUN_08aa1c24();
          FUN_05b466fc(uVar8,uVar9,*(undefined8 *)puVar1);
          return;
        }
      }
    }
  }
Newtonsoft_Json_JsonSerializer__get_DateParseHandling:
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


