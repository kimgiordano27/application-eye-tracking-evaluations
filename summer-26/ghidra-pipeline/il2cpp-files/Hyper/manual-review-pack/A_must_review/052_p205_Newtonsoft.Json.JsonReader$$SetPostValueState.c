/*
FUNCTION_NAME: Newtonsoft.Json.JsonReader$$SetPostValueState
ENTRY_POINT: 08e079a0
PROGRAM: Hyper-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;data_collection;telemetry
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_9;strong_file_logging_hits_2;telemetry_or_network_hits_2;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void Newtonsoft_Json_JsonReader__SetPostValueState(void)

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
  long *plVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  ulong uVar13;
  int *piVar14;
  long unaff_x19;
  undefined8 unaff_x20;
  undefined8 uVar15;
  undefined8 unaff_x21;
  undefined8 *puVar16;
  long unaff_x22;
  undefined8 *unaff_x23;
  long lVar17;
  
  FUN_04947ee4();
  FUN_04947ee4(PTR_DAT_0ac6a330);
  FUN_04947ee4(PTR_DAT_0ac09ea8);
  FUN_04947ee4(PTR_DAT_0ac6a338);
  FUN_04947ee4(PTR_DAT_0ac6a340);
  FUN_04947ee4(PTR_DAT_0ac6a348);
  FUN_04947ee4(PTR_DAT_0ac6a350);
  FUN_04947ee4(PTR_DAT_0ac6a358);
  FUN_04947ee4(PTR_DAT_0ac6a360);
  FUN_04947ee4(PTR_DAT_0ac6a308);
  FUN_04947ee4(PTR_DAT_0ac6a368);
  *(undefined1 *)(unaff_x22 + 0xc33) = 1;
  lVar8 = thunk_FUN_04983f60(*unaff_x23);
  FUN_08dbf2f0(lVar8,0);
  puVar7 = PTR_DAT_0ac6a368;
  puVar1 = PTR_DAT_0ac6a360;
  puVar5 = PTR_DAT_0ac6a318;
  if (lVar8 != 0) {
    *(undefined8 *)(lVar8 + 0x10) = unaff_x21;
    thunk_FUN_049ee3d8();
    *(long *)(lVar8 + 0x18) = unaff_x19;
    thunk_FUN_049ee3d8();
    puVar16 = (undefined8 *)(unaff_x19 + 0x40);
    *puVar16 = unaff_x20;
    thunk_FUN_049ee3d8(puVar16);
    uVar9 = thunk_FUN_04983f60(*(undefined8 *)puVar5);
    FUN_06411a74(uVar9,lVar8,*(undefined8 *)puVar1,0);
    lVar8 = *(long *)puVar7;
    if (*(int *)(lVar8 + 0xe4) == 0) {
      thunk_FUN_049a583c();
      lVar8 = *(long *)puVar7;
    }
    puVar1 = PTR_DAT_0ac6a348;
    puVar5 = PTR_DAT_0ac6a340;
    puVar12 = *(undefined8 **)(lVar8 + 0xb8);
    lVar17 = puVar12[1];
    if (lVar17 == 0) {
      if (*(int *)(lVar8 + 0xe4) == 0) {
        thunk_FUN_049a583c();
        puVar12 = *(undefined8 **)(*(long *)puVar7 + 0xb8);
      }
      uVar15 = *puVar12;
      lVar17 = thunk_FUN_04983f60(*(undefined8 *)PTR_DAT_0ac6a310);
      FUN_05f901fc(lVar17,uVar15,*(undefined8 *)PTR_DAT_0ac6a350,0);
      plVar10 = (long *)(*(long *)(*(long *)puVar7 + 0xb8) + 8);
      *plVar10 = lVar17;
      thunk_FUN_049ee3d8(plVar10,lVar17);
    }
    lVar8 = thunk_FUN_04983f60(*(undefined8 *)puVar1);
    FUN_072567ec(lVar8,uVar9,lVar17,0,*(undefined8 *)puVar5);
    puVar5 = PTR_DAT_0ac6a320;
    plVar10 = (long *)*puVar16;
    if (plVar10 != (long *)0x0) {
      lVar17 = *plVar10;
      uVar13 = (ulong)*(ushort *)(lVar17 + 0x12e);
      if (uVar13 != 0) {
        piVar14 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_0ac6a320) {
            puVar16 = (undefined8 *)(lVar17 + (long)*piVar14 * 0x10 + 0x138);
            goto LAB_08e07ba8;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
      puVar16 = (undefined8 *)FUN_04980e68(plVar10,*(long *)PTR_DAT_0ac6a320,0);
LAB_08e07ba8:
      plVar10 = (long *)(*(code *)*puVar16)(plVar10,puVar16[1]);
      if (plVar10 != (long *)0x0) {
        lVar17 = *plVar10;
        uVar13 = (ulong)*(ushort *)(lVar17 + 0x12e);
        if (uVar13 != 0) {
          piVar14 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_0ac6a228) {
              puVar16 = (undefined8 *)(lVar17 + (long)(*piVar14 + 4) * 0x10 + 0x138);
              goto LAB_08e07c14;
            }
            uVar13 = uVar13 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar13 != 0);
        }
        puVar16 = (undefined8 *)FUN_04980e68(plVar10,*(long *)PTR_DAT_0ac6a228,4);
LAB_08e07c14:
        uVar9 = (*(code *)*puVar16)(plVar10,puVar16[1]);
        if ((lVar8 != 0) &&
           (uVar9 = FUN_072569ec(lVar8,uVar9,*(undefined8 *)PTR_DAT_0ac6a338), unaff_x19 != 0)) {
          *(undefined8 *)(unaff_x19 + 0x48) = uVar9;
          thunk_FUN_049ee3d8((undefined8 *)(unaff_x19 + 0x48),uVar9);
          puVar6 = PTR_DAT_0ac37268;
          puVar4 = PTR_DAT_0ac09ea8;
          puVar3 = PTR_DAT_0ac09e20;
          puVar2 = PTR_DAT_0ac09d30;
          puVar1 = PTR_DAT_0ac09cd0;
          plVar10 = *(long **)(unaff_x19 + 0x40);
          if (plVar10 != (long *)0x0) {
            lVar8 = *plVar10;
            uVar13 = (ulong)*(ushort *)(lVar8 + 0x12e);
            if (uVar13 != 0) {
              piVar14 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
              do {
                if (*(long *)(piVar14 + -2) == *(long *)puVar5) {
                  puVar16 = (undefined8 *)(lVar8 + (long)(*piVar14 + 1) * 0x10 + 0x138);
                  goto LAB_08e07cdc;
                }
                uVar13 = uVar13 - 1;
                piVar14 = piVar14 + 4;
              } while (uVar13 != 0);
            }
            puVar16 = (undefined8 *)FUN_04980e68(plVar10,*(long *)puVar5,1);
LAB_08e07cdc:
            uVar9 = (*(code *)*puVar16)(plVar10,puVar16[1]);
            uVar15 = FUN_0a178414();
            uVar11 = thunk_FUN_04983f60(*(undefined8 *)puVar1);
            FUN_05f878c4(uVar11,uVar15,*(undefined8 *)puVar6,0);
            uVar9 = FUN_05d0896c(uVar9,uVar11,*(undefined8 *)puVar4);
            uVar15 = FUN_08aa1c24();
            FUN_05b466fc(uVar9,uVar15,*(undefined8 *)puVar3);
            lVar8 = *(long *)(unaff_x19 + 0x28);
            uVar9 = thunk_FUN_04983f60(*(undefined8 *)puVar2);
            FUN_08cc3ad0();
            if (lVar8 != 0) {
              FUN_05291894(lVar8,uVar9,0);
              lVar8 = *(long *)(unaff_x19 + 0x30);
              uVar9 = thunk_FUN_04983f60(*(undefined8 *)puVar2);
              FUN_08cc3ad0();
              if (lVar8 != 0) {
                FUN_05291894(lVar8,uVar9,0);
                lVar8 = *(long *)puVar7;
                if (*(int *)(lVar8 + 0xe4) == 0) {
                  thunk_FUN_049a583c();
                  lVar8 = *(long *)puVar7;
                }
                puVar5 = PTR_DAT_0ac0a0f8;
                puVar16 = *(undefined8 **)(lVar8 + 0xb8);
                lVar17 = puVar16[2];
                if (lVar17 == 0) {
                  if (*(int *)(lVar8 + 0xe4) == 0) {
                    thunk_FUN_049a583c();
                    puVar16 = *(undefined8 **)(*(long *)puVar7 + 0xb8);
                  }
                  uVar9 = *puVar16;
                  lVar17 = thunk_FUN_04983f60(*(undefined8 *)puVar2);
                  FUN_08cc3ad0(lVar17,uVar9,*(undefined8 *)PTR_DAT_0ac6a358,0);
                  plVar10 = (long *)(*(long *)(*(long *)puVar7 + 0xb8) + 0x10);
                  *plVar10 = lVar17;
                  thunk_FUN_049ee3d8(plVar10,lVar17);
                }
                if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
                  thunk_FUN_049a583c();
                }
                uVar9 = FUN_09b8bbb0(lVar17,0);
                uVar15 = FUN_08aa1c24();
                FUN_05b466fc(uVar9,uVar15,*(undefined8 *)puVar3);
                return;
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


