/*
FUNCTION_NAME: Newtonsoft.Json.Linq.JToken$$Newtonsoft.Json.IJsonLineInfo.get_LinePosition
ENTRY_POINT: 076b6744
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;data_collection
EVIDENCE: validity_or_gating_hits_11;strong_pose_or_ray_construction_hits_2;strong_file_logging_hits_2
*/


long Newtonsoft_Json_Linq_JToken__Newtonsoft_Json_IJsonLineInfo_get_LinePosition(void)

{
  bool bVar1;
  uint uVar2;
  byte bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined1 in_w8;
  undefined4 uVar13;
  long lVar14;
  ulong uVar15;
  undefined4 uVar16;
  long lVar17;
  ulong unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  long lVar18;
  long *plVar19;
  uint uVar20;
  undefined8 uStack0000000000000000;
  undefined8 uStack0000000000000008;
  undefined4 uStack0000000000000018;
  char cStack000000000000001c;
  
  *(undefined1 *)(unaff_x22 + 0x42b) = in_w8;
  puVar4 = PTR_DAT_092b6e08;
  uStack0000000000000000 = 0;
  uStack0000000000000008 = 0;
  uStack0000000000000018 = 0;
  if (unaff_x20 == 0) {
    thunk_FUN_040dedf8(PTR_DAT_0929cbf8);
    uVar9 = thunk_FUN_040b4efc();
    FUN_075d6038(uVar9,0);
    uVar12 = thunk_FUN_040dedf8(PTR_DAT_092db820);
                    /* WARNING: Subroutine does not return */
    FUN_040776f4(uVar9,uVar12);
  }
  uVar16 = 0x30;
  if ((unaff_x19 & 1) != 0) {
    uVar16 = 0x31;
  }
  if (*(int *)(*(long *)PTR_DAT_092b6e08 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
  FUN_076b3124();
  FUN_076b33c8(uVar16,&stack0x00000008,(long)&stack0x00000018 + 4,&stack0x00000018);
  uVar13 = 4;
  if (cStack000000000000001c != '\0') {
    uVar13 = 5;
  }
  lVar8 = (**(code **)(*unaff_x21 + 0x918))(4);
  puVar7 = PTR_DAT_092db818;
  puVar6 = PTR_DAT_092db810;
  puVar5 = PTR_DAT_092db800;
  if (lVar8 != 0) {
    uVar2 = *(uint *)(lVar8 + 0x18);
    if (0 < (int)uVar2) {
      uVar20 = 0;
      lVar18 = 0;
      do {
        if (uVar2 <= uVar20) goto LAB_076b69cc;
        plVar19 = *(long **)(lVar8 + (long)(int)uVar20 * 8 + 0x20);
        if (plVar19 == (long *)0x0) goto LAB_076b69c8;
        lVar14 = *plVar19;
        bVar3 = *(byte *)(*(long *)puVar4 + 0x130);
        if ((*(byte *)(lVar14 + 0x130) < bVar3) ||
           (*(long *)(*(long *)(lVar14 + 200) + (ulong)bVar3 * 8 + -8) != *(long *)puVar4)) {
                    /* WARNING: Subroutine does not return */
          FUN_04077bb0(plVar19);
        }
        uVar9 = (**(code **)(lVar14 + 0x1b8))(plVar19,*(undefined8 *)(lVar14 + 0x1c0));
        uVar10 = FUN_074e488c(uVar9,uStack0000000000000008,uVar13,0);
        if ((uVar10 & 1) != 0) {
          if (lVar18 == 0) {
            lVar18 = thunk_FUN_040b4efc(*(undefined8 *)puVar7);
            FUN_05c26598(lVar18,2,*(undefined8 *)puVar6);
            if (lVar18 == 0) goto LAB_076b69c8;
          }
          lVar14 = *(long *)(lVar18 + 0x10);
          lVar17 = *(long *)puVar5;
          *(int *)(lVar18 + 0x1c) = *(int *)(lVar18 + 0x1c) + 1;
          if (lVar14 == 0) goto LAB_076b69c8;
          uVar2 = *(uint *)(lVar18 + 0x18);
          if (uVar2 < *(uint *)(lVar14 + 0x18)) {
            *(uint *)(lVar18 + 0x18) = uVar2 + 1;
            puVar11 = (undefined8 *)(lVar14 + (long)(int)uVar2 * 8 + 0x20);
            *puVar11 = plVar19;
            thunk_FUN_040ec700(puVar11,plVar19);
          }
          else {
            FUN_05c26d88(lVar18,plVar19,
                         *(undefined8 *)(*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70));
          }
        }
        uVar2 = *(uint *)(lVar8 + 0x18);
        uVar20 = uVar20 + 1;
      } while ((int)uVar20 < (int)uVar2);
      if (lVar18 != 0) {
        lVar8 = FUN_05c287cc(lVar18,*(undefined8 *)PTR_DAT_092db808);
        if (lVar8 == 0) goto LAB_076b69c8;
        if (0 < (int)*(ulong *)(lVar8 + 0x18)) {
          lVar18 = 0;
          uVar10 = 0;
          uVar15 = *(ulong *)(lVar8 + 0x18) & 0xffffffff;
          while (uVar12 = uStack0000000000000008, uVar9 = uStack0000000000000000, uVar10 < uVar15) {
            lVar14 = *(long *)(lVar8 + 0x20 + uVar10 * 8);
            if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
              thunk_FUN_040d65a8();
            }
            uVar15 = FUN_076b36b0(lVar14,uVar16,uVar12,0,uVar9);
            if ((uVar15 & 1) != 0) {
              if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
                thunk_FUN_040d65a8();
              }
              bVar1 = lVar18 != 0;
              lVar18 = lVar14;
              if (bVar1) {
                uVar9 = thunk_FUN_040dedf8(PTR_DAT_092d41f8);
                uVar9 = FUN_076bca2c(uVar9,0);
                thunk_FUN_040dedf8(PTR_DAT_092d3b80);
                uVar12 = thunk_FUN_040b4efc();
                FUN_0759f638(uVar12,uVar9,0);
                uVar9 = thunk_FUN_040dedf8(PTR_DAT_092db820);
                    /* WARNING: Subroutine does not return */
                FUN_040776f4(uVar12,uVar9);
              }
            }
            uVar15 = (ulong)*(uint *)(lVar8 + 0x18);
            uVar10 = uVar10 + 1;
            if ((long)(int)*(uint *)(lVar8 + 0x18) <= (long)uVar10) {
              return lVar18;
            }
          }
LAB_076b69cc:
                    /* WARNING: Subroutine does not return */
          FUN_04077838();
        }
      }
    }
    return 0;
  }
LAB_076b69c8:
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


