/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$get_MetadataPropertyHandling
ENTRY_POINT: 08e0a184
PROGRAM: Hyper-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;data_collection;telemetry
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_8;strong_file_logging_hits_2;telemetry_or_network_hits_4;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void Newtonsoft_Json_JsonSerializer__get_MetadataPropertyHandling(code *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  int *piVar10;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  long lVar11;
  long *unaff_x25;
  
  uVar5 = (*param_1)();
  if ((uVar5 & 1) == 0) {
    if ((*(long *)(unaff_x19 + 0x30) == 0) ||
       (lVar6 = FUN_0a178414(*(long *)(unaff_x19 + 0x30),0), lVar6 == 0))
    goto Newtonsoft_Json_JsonSerializer__get_DateParseHandling;
    FUN_0a17ba14(lVar6,0,0);
  }
  lVar6 = *(long *)(unaff_x19 + 0x28);
  uVar7 = thunk_FUN_04983f60(*(undefined8 *)PTR_DAT_0ac09d30);
  FUN_08cc3ad0();
  if (lVar6 != 0) {
    FUN_05291894(lVar6,uVar7,0);
    if (((*(long *)(unaff_x19 + 0x28) != 0) &&
        (lVar6 = FUN_0a178414(*(long *)(unaff_x19 + 0x28),0), lVar6 != 0)) &&
       (FUN_0a17ba14(lVar6,0,0), puVar2 = PTR_DAT_0ac09ea8, puVar1 = PTR_DAT_0ac09cd0,
       unaff_x20 != (long *)0x0)) {
      lVar6 = *unaff_x20;
      uVar5 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar5 != 0) {
        piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *unaff_x25) {
            puVar8 = (undefined8 *)(lVar6 + (long)(*piVar10 + 4) * 0x10 + 0x138);
            goto LAB_08e0a27c;
          }
          uVar5 = uVar5 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar5 != 0);
      }
      puVar8 = (undefined8 *)FUN_04980e68();
LAB_08e0a27c:
      puVar4 = PTR_DAT_0ac6a510;
      puVar3 = PTR_DAT_0ac6a4f8;
      uVar7 = (*(code *)*puVar8)();
      uVar9 = thunk_FUN_04983f60(*(undefined8 *)puVar1);
      FUN_05f878c4();
      uVar7 = FUN_05d0896c(uVar7,uVar9,*(undefined8 *)puVar2);
      *(undefined8 *)(unaff_x21 + 0x30) = uVar7;
      thunk_FUN_049ee3d8();
      lVar6 = *unaff_x20;
      uVar5 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar5 != 0) {
        piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *unaff_x25) {
            puVar8 = (undefined8 *)(lVar6 + (long)(*piVar10 + 5) * 0x10 + 0x138);
            goto LAB_08e0a334;
          }
          uVar5 = uVar5 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar5 != 0);
      }
      puVar8 = (undefined8 *)FUN_04980e68();
LAB_08e0a334:
      uVar7 = (*(code *)*puVar8)();
      uVar9 = thunk_FUN_04983f60(*(undefined8 *)puVar3);
      FUN_05f851bc();
      uVar7 = FUN_05d0806c(uVar7,uVar9,*(undefined8 *)puVar4);
      *(undefined8 *)(unaff_x21 + 0x28) = uVar7;
      thunk_FUN_049ee3d8();
      lVar6 = *unaff_x20;
      lVar11 = *(long *)(unaff_x19 + 0x30);
      uVar5 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar5 != 0) {
        piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *unaff_x25) {
            puVar8 = (undefined8 *)(lVar6 + (long)(*piVar10 + 2) * 0x10 + 0x138);
            goto LAB_08e0a3d8;
          }
          uVar5 = uVar5 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar5 != 0);
      }
      puVar8 = (undefined8 *)FUN_04980e68();
LAB_08e0a3d8:
      uVar7 = (*(code *)*puVar8)();
      uVar9 = thunk_FUN_04983f60(*(undefined8 *)puVar1);
      uVar5 = (ulong)*(ushort *)(*unaff_x20 + 0x12e);
      if (uVar5 != 0) {
        lVar6 = *(long *)(*unaff_x20 + 0xb0) + 8;
        do {
          if (*(long *)(lVar6 + -8) == *unaff_x25) goto LAB_08e0a448;
          uVar5 = uVar5 - 1;
          lVar6 = lVar6 + 0x10;
        } while (uVar5 != 0);
      }
      FUN_04980e68();
LAB_08e0a448:
      FUN_05f878c4(uVar9);
      puVar3 = PTR_DAT_0ac37c00;
      puVar2 = PTR_DAT_0ac0a0f8;
      puVar1 = PTR_DAT_0ac09e20;
      if (lVar11 != 0) {
        uVar7 = FUN_04d0b2fc(lVar11,uVar7,uVar9,0);
        uVar9 = FUN_08aa1c24();
        FUN_05b466fc(uVar7,uVar9,*(undefined8 *)puVar3);
        uVar7 = thunk_FUN_04983f60(*(undefined8 *)PTR_DAT_0ac09d30);
        FUN_08cc3ad0();
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_049a583c();
        }
        uVar7 = FUN_09b8bbb0(uVar7,0);
        uVar9 = FUN_08aa1c24();
        FUN_05b466fc(uVar7,uVar9,*(undefined8 *)puVar1);
        return;
      }
    }
  }
Newtonsoft_Json_JsonSerializer__get_DateParseHandling:
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


