/*
FUNCTION_NAME: ThirdParty.Json.LitJson.JsonData$$get_IsArray
ENTRY_POINT: 0401aff0
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 78
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;data_collection
EVIDENCE: validity_or_gating_hits_11;strong_pose_or_ray_construction_hits_4;strong_file_logging_hits_2
*/


void ThirdParty_Json_LitJson_JsonData__get_IsArray(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long unaff_x19;
  long unaff_x20;
  long *plVar12;
  undefined8 uVar13;
  long *plVar14;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined4 uStack0000000000000018;
  undefined4 uStack000000000000001c;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  long in_stack_00000030;
  
  FUN_03d2d2b0();
  FUN_03d2d2b0(PTR_DAT_091a0c40);
  FUN_03d2d2b0(PTR_DAT_091a8fa0);
  FUN_03d2d2b0(PTR_DAT_091a7748);
  FUN_03d2d2b0(PTR_DAT_091a9080);
  FUN_03d2d2b0(PTR_DAT_091a9088);
  FUN_03d2d2b0(PTR_DAT_091a7750);
  *(undefined1 *)(unaff_x20 + 0xe53) = 1;
  in_stack_00000020 = 0;
  in_stack_00000028 = 0;
  in_stack_00000030 = 0;
  plVar12 = (long *)(unaff_x19 + 0x70);
  if (*plVar12 == 0) {
    lVar6 = thunk_FUN_03d2ef40(*(undefined8 *)PTR_DAT_091a8f90);
    System_Collections_Generic_List<BitmapAllocator32_Page>__System_Collections_Generic_IEnumerable<T>_GetEnumerator
              (lVar6,*(undefined8 *)PTR_DAT_091a8f88);
    *plVar12 = lVar6;
    thunk_FUN_03d1023c(plVar12,lVar6);
    if (DAT_098362ca == '\0') {
      FUN_03d2d2b0(PTR_DAT_091a10e8);
      DAT_098362ca = '\x01';
    }
    if (((**(long **)(*(long *)PTR_DAT_091a10e8 + 0xb8) == 0) ||
        (lVar6 = *(long *)(**(long **)(*(long *)PTR_DAT_091a10e8 + 0xb8) + 0xa0), lVar6 == 0)) ||
       (lVar6 = *(long *)(lVar6 + 0x48), lVar6 == 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    FUN_05a3a290(&stack0x00000008,lVar6,*(undefined8 *)PTR_DAT_091a3f80);
    puVar5 = PTR_DAT_091a7750;
    puVar4 = PTR_DAT_091a7748;
    puVar3 = PTR_DAT_091a3f70;
    puVar2 = PTR_DAT_091a3f60;
    in_stack_00000030 = CONCAT44(uStack000000000000001c,uStack0000000000000018);
    in_stack_00000028 = in_stack_00000010;
    in_stack_00000020 = in_stack_00000008;
    while (uVar7 = FUN_06daab3c(&stack0x00000020,*(undefined8 *)puVar3), lVar6 = in_stack_00000030,
          (uVar7 & 1) != 0) {
      if (in_stack_00000030 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03d2d548();
      }
      if (*(long *)(in_stack_00000030 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03d2d548();
      }
      lVar8 = FUN_06b6dd5c(*(long *)(in_stack_00000030 + 0x28),*(undefined8 *)puVar5,
                           *(undefined8 *)puVar2);
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03d2d548();
      }
      in_stack_00000008 = *(undefined8 *)puVar4;
      uVar13 = *(undefined8 *)(lVar8 + 0x10);
      uStack0000000000000018 = 0;
      in_stack_00000010 = 0xffffffffffffffff;
      uVar9 = FUN_071af138(&stack0x00000008,0);
      uVar7 = thunk_FUN_06fd18b4(uVar13,uVar9,0);
      if ((uVar7 & 1) != 0) {
        lVar8 = thunk_FUN_03d2ef40(*(undefined8 *)PTR_DAT_091a9088);
        FUN_071bc31c(lVar8,0);
        if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03d2d548();
        }
        *(long *)(lVar8 + 0x18) = unaff_x19;
        thunk_FUN_03d1023c();
        uVar9 = *(undefined8 *)(unaff_x19 + 0x60);
        uVar13 = *(undefined8 *)(unaff_x19 + 0x68);
        if (*(int *)(*(long *)PTR_DAT_091a0c40 + 0xe0) == 0) {
          thunk_FUN_03db619c();
        }
        lVar10 = FUN_050a1198(uVar13,uVar9,*(undefined8 *)PTR_DAT_091a8f98);
        plVar14 = (long *)(lVar8 + 0x10);
        *plVar14 = lVar10;
        thunk_FUN_03d1023c(plVar14);
        lVar10 = *plVar14;
        uVar9 = thunk_FUN_03d2ef40(*(undefined8 *)PTR_DAT_091a8fa0);
        FUN_040177dc(uVar9,lVar8,*(undefined8 *)PTR_DAT_091a9080);
        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03d2d548();
        }
        FUN_040173f4(lVar10,lVar6,uVar9);
        if (*plVar14 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03d2d548();
        }
        lVar6 = FUN_08a4d9c8(*plVar14,0);
        if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03d2d548();
        }
        FUN_08a50fa8(lVar6,1,0);
        lVar6 = *plVar12;
        if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03d2d548();
        }
        lVar8 = *plVar14;
        lVar10 = *(long *)(lVar6 + 0x10);
        lVar11 = *(long *)PTR_DAT_091a8f70;
        *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03d2d548();
        }
        uVar1 = *(uint *)(lVar6 + 0x18);
        if (uVar1 < *(uint *)(lVar10 + 0x18)) {
          *(uint *)(lVar6 + 0x18) = uVar1 + 1;
          plVar14 = (long *)(lVar10 + (long)(int)uVar1 * 8 + 0x20);
          *plVar14 = lVar8;
          thunk_FUN_03d1023c(plVar14);
        }
        else {
          FUN_05a39734(lVar6,lVar8,
                       *(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
        }
      }
    }
    FUN_06daab38(&stack0x00000020,*(undefined8 *)PTR_DAT_091a3f68);
  }
  return;
}


