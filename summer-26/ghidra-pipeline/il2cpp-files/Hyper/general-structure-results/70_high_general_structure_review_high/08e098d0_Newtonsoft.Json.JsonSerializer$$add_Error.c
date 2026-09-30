/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$add_Error
ENTRY_POINT: 08e098d0
PROGRAM: Hyper-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_8;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_JsonSerializer__add_Error(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  long unaff_x19;
  undefined8 *unaff_x21;
  long *plVar11;
  undefined8 unaff_x23;
  long *unaff_x24;
  undefined8 *unaff_x26;
  
  *(undefined8 *)(param_1 + 8) = unaff_x23;
  thunk_FUN_049ee3d8();
  lVar4 = thunk_FUN_04983f60(*unaff_x26);
  FUN_072567ec();
  plVar11 = (long *)*unaff_x21;
  if (plVar11 != (long *)0x0) {
    lVar8 = *plVar11;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_0ac6a488) {
          puVar5 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_08e09954;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined8 *)FUN_04980e68(plVar11,*(long *)PTR_DAT_0ac6a488,0);
LAB_08e09954:
    plVar11 = (long *)(*(code *)*puVar5)(plVar11,puVar5[1]);
    if (plVar11 != (long *)0x0) {
      lVar8 = *plVar11;
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_0ac6a228) {
            puVar5 = (undefined8 *)(lVar8 + (long)(*piVar10 + 7) * 0x10 + 0x138);
            goto LAB_08e099c0;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar5 = (undefined8 *)FUN_04980e68(plVar11,*(long *)PTR_DAT_0ac6a228,7);
LAB_08e099c0:
      uVar6 = (*(code *)*puVar5)(plVar11,puVar5[1]);
      if ((lVar4 != 0) &&
         (uVar6 = FUN_072569ec(lVar4,uVar6,*(undefined8 *)PTR_DAT_0ac6a498), unaff_x19 != 0)) {
        *(undefined8 *)(unaff_x19 + 0x40) = uVar6;
        thunk_FUN_049ee3d8((undefined8 *)(unaff_x19 + 0x40),uVar6);
        if ((*(long *)(unaff_x19 + 0x28) != 0) &&
           (lVar4 = FUN_0a178414(*(long *)(unaff_x19 + 0x28),0), puVar1 = PTR_DAT_0ac09d30,
           lVar4 != 0)) {
          FUN_0a17ba14(lVar4,0,0);
          lVar4 = *(long *)(unaff_x19 + 0x28);
          uVar6 = thunk_FUN_04983f60(*(undefined8 *)puVar1);
          FUN_08cc3ad0();
          if (lVar4 != 0) {
            FUN_05291894(lVar4,uVar6,0);
            lVar4 = *unaff_x24;
            if (*(int *)(lVar4 + 0xe4) == 0) {
              thunk_FUN_049a583c();
              lVar4 = *unaff_x24;
            }
            puVar3 = PTR_DAT_0ac0a0f8;
            puVar5 = *(undefined8 **)(lVar4 + 0xb8);
            lVar8 = puVar5[2];
            if (lVar8 == 0) {
              if (*(int *)(lVar4 + 0xe4) == 0) {
                thunk_FUN_049a583c();
                puVar5 = *(undefined8 **)(*unaff_x24 + 0xb8);
              }
              uVar6 = *puVar5;
              lVar8 = thunk_FUN_04983f60(*(undefined8 *)puVar1);
              FUN_08cc3ad0(lVar8,uVar6,*(undefined8 *)PTR_DAT_0ac6a4b8,0);
              plVar11 = (long *)(*(long *)(*unaff_x24 + 0xb8) + 0x10);
              *plVar11 = lVar8;
              thunk_FUN_049ee3d8(plVar11,lVar8);
            }
            puVar2 = PTR_DAT_0ac09e20;
            if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
              thunk_FUN_049a583c();
            }
            uVar6 = FUN_09b8bbb0(lVar8,0);
            uVar7 = FUN_08aa1c24();
            FUN_05b466fc(uVar6,uVar7,*(undefined8 *)puVar2);
            if ((*(long *)(unaff_x19 + 0x48) != 0) &&
               (lVar4 = FUN_0a178414(*(long *)(unaff_x19 + 0x48),0), lVar4 != 0)) {
              FUN_0a17ba14(lVar4,0,0);
              lVar4 = *unaff_x24;
              if (*(int *)(lVar4 + 0xe4) == 0) {
                thunk_FUN_049a583c();
                lVar4 = *unaff_x24;
              }
              puVar5 = *(undefined8 **)(lVar4 + 0xb8);
              lVar8 = puVar5[3];
              if (lVar8 == 0) {
                if (*(int *)(lVar4 + 0xe4) == 0) {
                  thunk_FUN_049a583c();
                  puVar5 = *(undefined8 **)(*unaff_x24 + 0xb8);
                }
                uVar6 = *puVar5;
                lVar8 = thunk_FUN_04983f60(*(undefined8 *)puVar1);
                FUN_08cc3ad0(lVar8,uVar6,*(undefined8 *)PTR_DAT_0ac6a4c0,0);
                plVar11 = (long *)(*(long *)(*unaff_x24 + 0xb8) + 0x18);
                *plVar11 = lVar8;
                thunk_FUN_049ee3d8(plVar11,lVar8);
              }
              if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                thunk_FUN_049a583c();
              }
              uVar6 = FUN_09b8bbb0(lVar8,0);
              uVar7 = FUN_08aa1c24();
              FUN_05b466fc(uVar6,uVar7,*(undefined8 *)puVar2);
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


