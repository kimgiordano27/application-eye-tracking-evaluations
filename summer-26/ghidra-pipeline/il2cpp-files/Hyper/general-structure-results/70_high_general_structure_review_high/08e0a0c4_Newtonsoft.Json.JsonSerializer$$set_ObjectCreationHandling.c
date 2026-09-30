/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$set_ObjectCreationHandling
ENTRY_POINT: 08e0a0c4
PROGRAM: Hyper-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_9;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


void Newtonsoft_Json_JsonSerializer__set_ObjectCreationHandling(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long lVar8;
  code *in_x9;
  ulong uVar9;
  int *piVar10;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  undefined8 *unaff_x22;
  long *plVar11;
  long lVar12;
  long *unaff_x25;
  
  uVar5 = (*in_x9)();
  FUN_08bcc3c0(uVar5,*(undefined8 *)PTR_DAT_0ac6a538,0);
  FUN_09f7cf00();
  plVar11 = (long *)*unaff_x22;
  if (plVar11 != (long *)0x0) {
    lVar8 = *plVar11;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    uVar5 = *(undefined8 *)PTR_DAT_0ac6a530;
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
    puVar6 = (undefined8 *)FUN_04980e68(plVar11,*(long *)PTR_DAT_0ac36df8,0);
LAB_08e0a178:
    uVar9 = (*(code *)*puVar6)(plVar11,uVar5,puVar6[1]);
    if ((uVar9 & 1) == 0) {
      if ((*(long *)(unaff_x19 + 0x30) == 0) ||
         (lVar8 = FUN_0a178414(*(long *)(unaff_x19 + 0x30),0), lVar8 == 0))
      goto Newtonsoft_Json_JsonSerializer__get_DateParseHandling;
      FUN_0a17ba14(lVar8,0,0);
    }
    lVar8 = *(long *)(unaff_x19 + 0x28);
    uVar5 = thunk_FUN_04983f60(*(undefined8 *)PTR_DAT_0ac09d30);
    FUN_08cc3ad0();
    if (lVar8 != 0) {
      FUN_05291894(lVar8,uVar5,0);
      if (((*(long *)(unaff_x19 + 0x28) != 0) &&
          (lVar8 = FUN_0a178414(*(long *)(unaff_x19 + 0x28),0), lVar8 != 0)) &&
         (FUN_0a17ba14(lVar8,0,0), puVar2 = PTR_DAT_0ac09ea8, puVar1 = PTR_DAT_0ac09cd0,
         unaff_x20 != (long *)0x0)) {
        lVar8 = *unaff_x20;
        uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == *unaff_x25) {
              puVar6 = (undefined8 *)(lVar8 + (long)(*piVar10 + 4) * 0x10 + 0x138);
              goto LAB_08e0a27c;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        puVar6 = (undefined8 *)FUN_04980e68();
LAB_08e0a27c:
        puVar4 = PTR_DAT_0ac6a510;
        puVar3 = PTR_DAT_0ac6a4f8;
        uVar5 = (*(code *)*puVar6)();
        uVar7 = thunk_FUN_04983f60(*(undefined8 *)puVar1);
        FUN_05f878c4();
        uVar5 = FUN_05d0896c(uVar5,uVar7,*(undefined8 *)puVar2);
        *(undefined8 *)(unaff_x21 + 0x30) = uVar5;
        thunk_FUN_049ee3d8();
        lVar8 = *unaff_x20;
        uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == *unaff_x25) {
              puVar6 = (undefined8 *)(lVar8 + (long)(*piVar10 + 5) * 0x10 + 0x138);
              goto LAB_08e0a334;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        puVar6 = (undefined8 *)FUN_04980e68();
LAB_08e0a334:
        uVar5 = (*(code *)*puVar6)();
        uVar7 = thunk_FUN_04983f60(*(undefined8 *)puVar3);
        FUN_05f851bc();
        uVar5 = FUN_05d0806c(uVar5,uVar7,*(undefined8 *)puVar4);
        *(undefined8 *)(unaff_x21 + 0x28) = uVar5;
        thunk_FUN_049ee3d8();
        lVar8 = *unaff_x20;
        lVar12 = *(long *)(unaff_x19 + 0x30);
        uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == *unaff_x25) {
              puVar6 = (undefined8 *)(lVar8 + (long)(*piVar10 + 2) * 0x10 + 0x138);
              goto LAB_08e0a3d8;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        puVar6 = (undefined8 *)FUN_04980e68();
LAB_08e0a3d8:
        uVar5 = (*(code *)*puVar6)();
        uVar7 = thunk_FUN_04983f60(*(undefined8 *)puVar1);
        uVar9 = (ulong)*(ushort *)(*unaff_x20 + 0x12e);
        if (uVar9 != 0) {
          lVar8 = *(long *)(*unaff_x20 + 0xb0) + 8;
          do {
            if (*(long *)(lVar8 + -8) == *unaff_x25) goto LAB_08e0a448;
            uVar9 = uVar9 - 1;
            lVar8 = lVar8 + 0x10;
          } while (uVar9 != 0);
        }
        FUN_04980e68();
LAB_08e0a448:
        FUN_05f878c4(uVar7);
        puVar3 = PTR_DAT_0ac37c00;
        puVar2 = PTR_DAT_0ac0a0f8;
        puVar1 = PTR_DAT_0ac09e20;
        if (lVar12 != 0) {
          uVar5 = FUN_04d0b2fc(lVar12,uVar5,uVar7,0);
          uVar7 = FUN_08aa1c24();
          FUN_05b466fc(uVar5,uVar7,*(undefined8 *)puVar3);
          uVar5 = thunk_FUN_04983f60(*(undefined8 *)PTR_DAT_0ac09d30);
          FUN_08cc3ad0();
          if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
            thunk_FUN_049a583c();
          }
          uVar5 = FUN_09b8bbb0(uVar5,0);
          uVar7 = FUN_08aa1c24();
          FUN_05b466fc(uVar5,uVar7,*(undefined8 *)puVar1);
          return;
        }
      }
    }
  }
Newtonsoft_Json_JsonSerializer__get_DateParseHandling:
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


