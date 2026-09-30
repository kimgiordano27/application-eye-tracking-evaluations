/*
FUNCTION_NAME: Newtonsoft.Json.Linq.JToken$$Newtonsoft.Json.IJsonLineInfo.get_LinePosition
ENTRY_POINT: 0678f818
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;data_collection
EVIDENCE: validity_or_gating_hits_11;strong_pose_or_ray_construction_hits_2;strong_file_logging_hits_2
*/


undefined8 Newtonsoft_Json_Linq_JToken__Newtonsoft_Json_IJsonLineInfo_get_LinePosition(long param_1)

{
  byte bVar1;
  uint uVar2;
  undefined4 uVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  ulong uVar11;
  int *piVar12;
  long *unaff_x19;
  long unaff_x20;
  undefined8 uVar13;
  long unaff_x24;
  long lVar14;
  int unaff_w26;
  uint uVar15;
  ulong uVar16;
  undefined8 in_stack_00000058;
  
  if ((unaff_x20 == param_1) &&
     (uVar2 = in_stack_00000058._4_4_ - (uint)(unaff_w26 == 0), 0 < (int)uVar2)) {
    lVar4 = FUN_03a8a804(*(undefined8 *)PTR_DAT_084874c8,uVar2);
    puVar8 = PTR_DAT_084a1640;
    uVar15 = 0;
    do {
      if (unaff_x24 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      if (*(uint *)(unaff_x24 + 0x18) <= uVar15) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c8();
      }
      uVar16 = (ulong)uVar15;
      lVar14 = *(long *)(unaff_x24 + uVar16 * 8 + 0x20);
      if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      uVar13 = *(undefined8 *)puVar8;
      lVar5 = thunk_FUN_03ac73c0(lVar14,uVar13);
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8ad40(lVar14,uVar13);
      }
      lVar5 = *(long *)puVar8;
      plVar6 = (long *)thunk_FUN_03ac73c0(lVar14,lVar5);
      if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8ad40(lVar14,lVar5);
      }
      lVar14 = *plVar6;
      uVar11 = (ulong)*(ushort *)(lVar14 + 0x12e);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == lVar5) {
            puVar7 = (undefined8 *)(lVar14 + (long)(*piVar12 + 7) * 0x10 + 0x138);
            goto LAB_0678f8fc;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar7 = (undefined8 *)FUN_03ac43c4(plVar6,lVar5,7);
LAB_0678f8fc:
      uVar3 = (*(code *)*puVar7)(plVar6,0,puVar7[1]);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      if (*(uint *)(lVar4 + 0x18) <= uVar15) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c8();
      }
      uVar15 = uVar15 + 1;
      *(undefined4 *)(lVar4 + uVar16 * 4 + 0x20) = uVar3;
    } while (uVar15 != uVar2);
    plVar6 = (long *)(**(code **)(*unaff_x19 + 0x2f8))();
    if (plVar6 == (long *)0x0) {
      if ((unaff_w26 != 0) || (uVar2 < *(uint *)(unaff_x24 + 0x18))) {
LAB_06790440:
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
    }
    else {
      bVar1 = *(byte *)(*(long *)(PTR_DAT_08486760 + 0xa0) + 0x130);
      if ((*(byte *)(*plVar6 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*plVar6 + 200) + (ulong)bVar1 * 8 + -8) !=
          *(long *)(PTR_DAT_08486760 + 0xa0))) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8ad40();
      }
      if (unaff_w26 != 0) {
        uVar13 = thunk_FUN_03a99868(plVar6,lVar4,0);
        return uVar13;
      }
      if (uVar2 < *(uint *)(unaff_x24 + 0x18)) {
        thunk_FUN_03a999f0(plVar6,*(undefined8 *)(unaff_x24 + (ulong)uVar2 * 8 + 0x20),lVar4,0);
        return 0;
      }
    }
LAB_06790444:
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c8();
  }
  if (unaff_w26 == 0) {
    puVar8 = PTR_DAT_084aaf98;
    if (in_stack_00000058._4_4_ == 1) {
      if (unaff_x24 == 0) goto LAB_06790440;
      if (*(int *)(unaff_x24 + 0x18) != 0) {
        (**(code **)(*unaff_x19 + 0x318))();
        return 0;
      }
      goto LAB_06790444;
    }
  }
  else {
    puVar8 = PTR_DAT_084aafa0;
    if (in_stack_00000058._4_4_ == 0) {
                    /* WARNING: Could not recover jumptable at 0x06790208. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar13 = (**(code **)(*unaff_x19 + 0x2f8))();
      return uVar13;
    }
  }
  uVar13 = thunk_FUN_03af1434(puVar8);
  uVar13 = FUN_06793434(uVar13,0);
  thunk_FUN_03af1434(PTR_DAT_08488490);
  uVar9 = thunk_FUN_03ac74bc();
  uVar10 = thunk_FUN_03af1434(PTR_DAT_084aafa8);
  FUN_066af718(uVar9,uVar13,uVar10,0);
  uVar13 = thunk_FUN_03af1434(PTR_DAT_084aaf70);
                    /* WARNING: Subroutine does not return */
  FUN_03a8a884(uVar9,uVar13);
}


