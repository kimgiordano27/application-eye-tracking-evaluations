/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.TraceJsonReader$$Newtonsoft.Json.IJsonLineInfo.get_LinePosition
ENTRY_POINT: 05937344
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;data_collection
EVIDENCE: validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;strong_file_logging_hits_2
*/


int Newtonsoft_Json_Serialization_TraceJsonReader__Newtonsoft_Json_IJsonLineInfo_get_LinePosition
              (ulong param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined2 uVar7;
  undefined *puVar8;
  int iVar9;
  long lVar10;
  undefined8 uVar11;
  ulong uVar12;
  ulong uVar13;
  long unaff_x19;
  long unaff_x20;
  long lVar14;
  long unaff_x23;
  ulong unaff_x24;
  long *unaff_x26;
  long in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  long in_stack_00000028;
  
  if (param_1 <= unaff_x24) {
    if (*(int *)(*unaff_x26 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
    }
    lVar14 = *(long *)PTR_DAT_0729a2d0;
    lVar10 = *(long *)(lVar14 + 0x20);
    if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
      lVar10 = FUN_032934b8();
    }
    lVar10 = *(long *)(*(long *)(lVar10 + 0xc0) + 8);
    if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
      lVar10 = FUN_032934b8();
    }
    if (*(int *)(lVar10 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
    }
    lVar10 = *(long *)(lVar14 + 0x20);
    if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
      lVar10 = FUN_032934b8();
    }
    if ((*(byte *)(*(long *)(*(long *)(lVar10 + 0xc0) + 8) + 0x135) & 1) == 0) {
      FUN_032934b8();
    }
    uVar11 = FUN_0596f558();
    do {
      puVar1 = (undefined8 *)(unaff_x20 + unaff_x23 * 2);
      puVar2 = (undefined8 *)(unaff_x19 + unaff_x23 * 2);
      uVar3 = *puVar1;
      uVar5 = puVar1[1];
      uVar4 = *puVar2;
      uVar6 = puVar2[1];
      if (*(int *)(*unaff_x26 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
      }
      lVar14 = *(long *)PTR_DAT_0729a2d8;
      lVar10 = *(long *)(lVar14 + 0x20);
      if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
        lVar10 = FUN_032934b8();
      }
      lVar10 = *(long *)(*(long *)(lVar10 + 0xc0) + 8);
      if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
        lVar10 = FUN_032934b8();
      }
      if (*(int *)(lVar10 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
      }
      lVar10 = *(long *)(lVar14 + 0x20);
      if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
        lVar10 = FUN_032934b8();
      }
      lVar14 = *(long *)(*(long *)(lVar10 + 0xc0) + 0x58);
      lVar10 = *(long *)(lVar14 + 0x20);
      in_stack_00000018 = uVar3;
      in_stack_00000020 = uVar5;
      if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
        lVar10 = FUN_032934b8();
      }
      lVar10 = *(long *)(*(long *)(lVar10 + 0xc0) + 8);
      if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
        lVar10 = FUN_032934b8();
      }
      if (*(int *)(lVar10 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
      }
      lVar10 = *(long *)(lVar14 + 0x20);
      if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
        lVar10 = FUN_032934b8();
      }
      uVar12 = FUN_04d81d24(&stack0x00000018,uVar4,uVar6,
                            *(undefined8 *)(*(long *)(lVar10 + 0xc0) + 0x38));
      if ((uVar12 & 1) == 0) break;
      if (*(int *)(*unaff_x26 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
      }
      lVar14 = *(long *)PTR_DAT_0729a2d0;
      lVar10 = *(long *)(lVar14 + 0x20);
      if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
        lVar10 = FUN_032934b8();
      }
      lVar10 = *(long *)(*(long *)(lVar10 + 0xc0) + 8);
      if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
        lVar10 = FUN_032934b8();
      }
      if (*(int *)(lVar10 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
      }
      lVar10 = *(long *)(lVar14 + 0x20);
      if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
        lVar10 = FUN_032934b8();
      }
      lVar10 = *(long *)(*(long *)(lVar10 + 0xc0) + 8);
      if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
        lVar10 = FUN_032934b8();
      }
      unaff_x23 = FUN_0596f550(unaff_x23,**(undefined4 **)(lVar10 + 0xb8),0);
      uVar12 = FUN_0596f544(uVar11,0);
      uVar13 = FUN_0596f544(unaff_x23,0);
    } while (uVar13 <= uVar12);
  }
  uVar12 = FUN_0596f544();
  uVar11 = FUN_0596f550(unaff_x23,4,0);
  uVar13 = FUN_0596f544(uVar11,0);
  if (uVar13 <= uVar12) {
    do {
      uVar12 = FUN_0597d8ac(*(undefined8 *)(unaff_x20 + unaff_x23 * 2),
                            *(undefined8 *)(unaff_x19 + unaff_x23 * 2),0);
      if ((uVar12 & 1) != 0) break;
      unaff_x23 = FUN_0596f550(unaff_x23,4,0);
      uVar12 = FUN_0596f544();
      uVar11 = FUN_0596f550(unaff_x23,4,0);
      uVar13 = FUN_0596f544(uVar11,0);
    } while (uVar13 <= uVar12);
  }
  uVar12 = FUN_0596f544();
  uVar11 = FUN_0596f550(unaff_x23,2,0);
  uVar13 = FUN_0596f544(uVar11,0);
  if ((uVar13 <= uVar12) &&
     (*(int *)(unaff_x20 + unaff_x23 * 2) == *(int *)(unaff_x19 + unaff_x23 * 2))) {
    unaff_x23 = FUN_0596f550(unaff_x23,2,0);
  }
  uVar12 = FUN_0596f544(unaff_x23,0);
  uVar13 = FUN_0596f544();
  puVar8 = PTR_DAT_0727fa20;
  iVar9 = in_stack_00000010._4_4_;
  if (uVar12 < uVar13) {
    do {
      uVar7 = *(undefined2 *)(unaff_x19 + unaff_x23 * 2);
      if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
      }
      iVar9 = FUN_058a47c8(unaff_x20 + unaff_x23 * 2,uVar7,0);
      if (iVar9 != 0) break;
      unaff_x23 = FUN_0596f550(unaff_x23,1,0);
      uVar12 = FUN_0596f544(unaff_x23,0);
      uVar13 = FUN_0596f544();
      iVar9 = in_stack_00000010._4_4_;
    } while (uVar12 < uVar13);
  }
  if (*(long *)(in_stack_00000008 + 0x28) != in_stack_00000028) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar9;
}


