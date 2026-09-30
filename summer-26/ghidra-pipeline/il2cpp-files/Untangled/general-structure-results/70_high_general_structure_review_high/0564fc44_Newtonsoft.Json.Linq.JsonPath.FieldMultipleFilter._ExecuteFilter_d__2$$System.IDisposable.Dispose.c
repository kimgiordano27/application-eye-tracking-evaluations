/*
FUNCTION_NAME: Newtonsoft.Json.Linq.JsonPath.FieldMultipleFilter.<ExecuteFilter>d__2$$System.IDisposable.Dispose
ENTRY_POINT: 0564fc44
PROGRAM: Untangled-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;data_collection
EVIDENCE: validity_or_gating_hits_11;strong_pose_or_ray_construction_hits_2;strong_file_logging_hits_2
*/


undefined8
Newtonsoft_Json_Linq_JsonPath_FieldMultipleFilter_<ExecuteFilter>d__2__System_IDisposable_Dispose
          (void)

{
  uint uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long *unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long lVar10;
  undefined4 unaff_w24;
  long lVar11;
  
  if (*(int *)(*unaff_x21 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
  }
                    /* try { // try from 0564fc54 to 0574fd23 has its CatchHandler @ 05650284 */
  uVar3 = FUN_05619d34();
  if ((uVar3 & 1) != 0) {
    uVar1 = *(uint *)(unaff_x20 + 0x18);
    if (0 < (int)uVar1) {
      lVar7 = 0;
      do {
        if (uVar1 <= (uint)lVar7) goto LAB_05650098;
        if (*(long *)(unaff_x20 + 0x20 + lVar7 * 8) == 0) goto LAB_0564fff4;
        lVar7 = lVar7 + 1;
      } while ((int)lVar7 < (int)uVar1);
    }
    uVar4 = FUN_02f07f14(*(undefined8 *)PTR_DAT_06d52de0);
    FUN_05624fa8();
    return uVar4;
  }
  lVar7 = thunk_FUN_02ef1808(*(undefined8 *)PTR_DAT_06d03d00);
  FUN_03fd04d8(lVar7,unaff_w24,*(undefined8 *)PTR_DAT_06d53a80);
  puVar2 = PTR_DAT_06d15f58;
  uVar1 = *(uint *)(unaff_x20 + 0x18);
  if (0 < (int)uVar1) {
    lVar11 = 0;
    do {
      if (uVar1 <= (uint)lVar11) {
LAB_05650098:
                    /* WARNING: Subroutine does not return */
        FUN_02f080c8();
      }
      lVar10 = *(long *)(unaff_x20 + 0x20 + lVar11 * 8);
      if (lVar10 == 0) {
LAB_0564fff4:
        thunk_FUN_02f239f0(PTR_DAT_06d53a90);
        uVar4 = thunk_FUN_02ef1808();
        uVar6 = thunk_FUN_02f239f0(PTR_DAT_06d53a98);
        FUN_0552dd14(uVar4,uVar6,0);
        uVar6 = thunk_FUN_02f239f0(PTR_DAT_06d53aa0);
                    /* WARNING: Subroutine does not return */
        FUN_02f07f94(uVar4,uVar6);
      }
      FUN_02ebbee0(lVar10);
      if (*(int *)(*unaff_x21 + 0xe0) == 0) {
        thunk_FUN_02f12b58(*unaff_x21);
      }
      uVar3 = FUN_0561ab0c();
      if ((uVar3 & 1) == 0) {
LAB_0564fdc0:
        if (lVar7 == 0) goto LAB_0564fc40;
        lVar8 = *(long *)(lVar7 + 0x10);
        lVar9 = *(long *)puVar2;
        *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
        if (lVar8 == 0) goto LAB_0564fc40;
        uVar1 = *(uint *)(lVar7 + 0x18);
        if (uVar1 < *(uint *)(lVar8 + 0x18)) {
          *(uint *)(lVar7 + 0x18) = uVar1 + 1;
          plVar5 = (long *)(lVar8 + (long)(int)uVar1 * 8 + 0x20);
          *plVar5 = lVar10;
          thunk_FUN_02f411dc(plVar5,lVar10);
        }
        else {
          FUN_03fd0c9c(lVar7,lVar10,
                       *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
        }
      }
      else {
        if (unaff_x19 == (long *)0x0) goto LAB_0564fc40;
        uVar3 = (**(code **)(*unaff_x19 + 0x298))();
        if ((uVar3 & 1) != 0) goto LAB_0564fdc0;
      }
      uVar1 = *(uint *)(unaff_x20 + 0x18);
      lVar11 = lVar11 + 1;
    } while ((int)lVar11 < (int)uVar1);
  }
  if (*(int *)(*unaff_x21 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
  }
  uVar3 = FUN_05619d34();
  if ((uVar3 & 1) == 0) {
    if (unaff_x19 == (long *)0x0) goto LAB_0564fc40;
    uVar3 = FUN_0561bef0();
    if ((uVar3 & 1) == 0) {
      if (lVar7 == 0) goto LAB_0564fc40;
      uVar4 = FUN_0562816c();
      uVar4 = thunk_FUN_02ef170c(uVar4,*(undefined8 *)PTR_DAT_06d02bd0);
      goto LAB_0564ffa8;
    }
  }
  if (lVar7 != 0) {
    uVar4 = FUN_02f07f14(*(undefined8 *)PTR_DAT_06d52de0,*(undefined4 *)(lVar7 + 0x18));
LAB_0564ffa8:
    FUN_03fd12b0(lVar7,uVar4,0,*(undefined8 *)PTR_DAT_06d53a78);
    return uVar4;
  }
LAB_0564fc40:
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


