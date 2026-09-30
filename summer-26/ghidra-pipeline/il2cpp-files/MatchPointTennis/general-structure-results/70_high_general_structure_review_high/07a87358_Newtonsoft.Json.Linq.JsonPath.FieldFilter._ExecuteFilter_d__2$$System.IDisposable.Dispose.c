/*
FUNCTION_NAME: Newtonsoft.Json.Linq.JsonPath.FieldFilter.<ExecuteFilter>d__2$$System.IDisposable.Dispose
ENTRY_POINT: 07a87358
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;data_collection
EVIDENCE: validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;strong_file_logging_hits_2
*/


void Newtonsoft_Json_Linq_JsonPath_FieldFilter_<ExecuteFilter>d__2__System_IDisposable_Dispose(void)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  bool bVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long unaff_x19;
  undefined8 unaff_x20;
  long *plVar9;
  long *unaff_x21;
  undefined8 uVar10;
  undefined8 *unaff_x22;
  long unaff_x23;
  undefined1 auVar11 [16];
  
  FUN_04447ba8(PTR_DAT_09f44378);
  FUN_04447ba8(PTR_DAT_09f286d8);
  FUN_04447ba8(PTR_DAT_09f44370);
  FUN_04447ba8(PTR_DAT_09f466a8);
  FUN_04447ba8(PTR_DAT_09f466b0);
  FUN_04447ba8(PTR_DAT_09f3e828);
  *(undefined1 *)(unaff_x23 + 0x42d) = 1;
  puVar2 = PTR_DAT_09f1e5b8;
  *(undefined8 *)(unaff_x19 + 0x20) = **(undefined8 **)(*(long *)(PTR_DAT_09f1e5b8 + 0x90) + 0xb8);
  thunk_FUN_044bb4b4();
  *(undefined8 *)(unaff_x19 + 0x28) = **(undefined8 **)(*(long *)(puVar2 + 0x90) + 0xb8);
  thunk_FUN_044bb4b4();
  *(undefined1 *)(unaff_x19 + 0x30) = 1;
  uVar5 = thunk_FUN_0448520c(*unaff_x22);
  *(undefined8 *)(unaff_x19 + 0xa8) = uVar5;
  thunk_FUN_044bb4b4();
  *(undefined8 *)(unaff_x19 + 0x58) = unaff_x20;
  *(undefined4 *)(unaff_x19 + 0xd0) = 0xf;
  *(undefined8 *)(unaff_x19 + 0x100) = 0xffffffffffffffff;
  thunk_FUN_044bb4b4();
  if (*(int *)(*unaff_x21 + 0xe4) == 0) {
    thunk_FUN_044a54b4();
  }
  puVar2 = PTR_DAT_09f466a8;
  lVar6 = FUN_07a8fe4c();
  if (lVar6 == 0) {
    uVar7 = thunk_FUN_078b3114();
    if ((uVar7 & 1) != 0) {
      uVar5 = FUN_07a89e34();
LAB_07a874a4:
      auVar11 = thunk_FUN_0448520c(*(undefined8 *)puVar2);
      uVar10 = auVar11._0_8_;
      FUN_07a902b0(uVar10,auVar11._8_8_,uVar5);
      goto LAB_07a874c0;
    }
    uVar7 = thunk_FUN_078b3114();
    if ((uVar7 & 1) != 0) {
      uVar5 = FUN_07a89dc4();
      goto LAB_07a874a4;
    }
  }
  else {
    auVar11 = thunk_FUN_0448520c(*(undefined8 *)puVar2);
    uVar10 = auVar11._0_8_;
    FUN_07a8ffdc(uVar10,auVar11._8_8_,lVar6);
LAB_07a874c0:
    *(undefined8 *)(unaff_x19 + 0x10) = uVar10;
    thunk_FUN_044bb4b4((undefined8 *)(unaff_x19 + 0x10),uVar10);
  }
  puVar3 = PTR_DAT_09f44378;
  plVar9 = (long *)(unaff_x19 + 0x10);
  if (*plVar9 == 0) {
    uVar5 = FUN_07a89ea4();
    auVar11 = thunk_FUN_0448520c(*(undefined8 *)puVar2);
    lVar6 = auVar11._0_8_;
    FUN_07a902b0(lVar6,auVar11._8_8_,uVar5);
    *plVar9 = lVar6;
    thunk_FUN_044bb4b4(plVar9,lVar6);
  }
  lVar6 = *(long *)puVar3;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_044a54b4();
    lVar6 = *(long *)puVar3;
  }
  puVar2 = PTR_DAT_09f46630;
  if ((long *)**(long **)(lVar6 + 0xb8) == (long *)0x0) {
LAB_07a87554:
    bVar4 = true;
  }
  else {
    lVar8 = *(long *)**(long **)(lVar6 + 0xb8);
    bVar1 = *(byte *)(*(long *)PTR_DAT_09f46630 + 0x130);
    if (*(byte *)(lVar8 + 0x130) < bVar1) goto LAB_07a87554;
    bVar4 = *(long *)(*(long *)(lVar8 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_09f46630;
  }
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_044a54b4();
  }
  if (bVar4) {
    uVar5 = FUN_07a86420(0);
    if (DAT_0a52545b == '\0') {
      FUN_04447ba8(PTR_DAT_09f44378);
      DAT_0a52545b = '\x01';
    }
    lVar6 = *(long *)puVar3;
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
      lVar6 = *(long *)puVar3;
    }
    uVar10 = *(undefined8 *)(*(long *)(lVar6 + 0xb8) + 0x28);
    lVar6 = thunk_FUN_0448520c(*(undefined8 *)puVar2);
    FUN_07a17368(lVar6,uVar5,uVar10,0,0);
    plVar9 = (long *)(unaff_x19 + 0x68);
    *plVar9 = lVar6;
    thunk_FUN_044bb4b4(plVar9,lVar6);
    plVar9 = (long *)*plVar9;
    if (plVar9 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x07a87618. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar9 + 0x308))(plVar9,1,*(undefined8 *)(*plVar9 + 0x310));
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_04447e44();
  }
  plVar9 = (long *)**(long **)(*(long *)puVar3 + 0xb8);
  if (plVar9 != (long *)0x0) {
    lVar6 = *(long *)puVar2;
    bVar1 = *(byte *)(lVar6 + 0x130);
    if ((bVar1 <= *(byte *)(*plVar9 + 0x130)) &&
       (*(long *)(*(long *)(*plVar9 + 200) + ((ulong)bVar1 - 1) * 8) == lVar6)) {
      *(long **)(unaff_x19 + 0x68) = plVar9;
      if ((bVar1 <= *(byte *)(*plVar9 + 0x130)) &&
         (*(long *)(*(long *)(*plVar9 + 200) + ((ulong)bVar1 - 1) * 8) == lVar6)) goto LAB_07a87694;
    }
                    /* WARNING: Subroutine does not return */
    FUN_044481e4(plVar9,lVar6);
  }
  *(undefined8 *)(unaff_x19 + 0x68) = 0;
LAB_07a87694:
  thunk_FUN_044bb4b4(unaff_x19 + 0x68);
  return;
}


