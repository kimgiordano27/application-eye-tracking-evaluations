/*
FUNCTION_NAME: FUN_06aa31b4
ENTRY_POINT: 06aa31b4
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 80
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;data_collection
EVIDENCE: validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_8;strong_file_logging_hits_6
*/


void FUN_06aa31b4(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  undefined8 uVar10;
  
  puVar2 = Method_System_Tuple<bool,_bool,_bool,_bool>_get_Item2__;
  if ((DAT_076e304c & 1) == 0) {
    thunk_FUN_032e1da0(Method_System_Tuple<bool,_bool,_bool,_bool>_get_Item3__);
    thunk_FUN_032e1da0(Method_System_Tuple<bool,_bool,_bool,_bool>_get_Item4__);
    thunk_FUN_032e1da0(Method_System_Tuple<int,_int,_int,_bool>__ctor__);
    thunk_FUN_032e1da0(Method_System_Tuple<Pose,_float,_float,_float>_get_Item1__);
    thunk_FUN_032e1da0(Method_System_Tuple<Pose,_float,_float,_float>_get_Item2__);
    thunk_FUN_032e1da0(Method_System_Tuple<Pose,_float,_float,_float>_get_Item3__);
    thunk_FUN_032e1da0(Method_System_Tuple<Pose,_float,_float,_float>_get_Item4__);
    thunk_FUN_032e1da0(Method_System_Tuple<TextWriter,_char[],_int,_int>__ctor__);
    thunk_FUN_032e1da0(Method_System_Tuple<TextWriter,_char[],_int,_int>_get_Item1__);
    thunk_FUN_032e1da0(Method_System_Tuple<TextWriter,_char[],_int,_int>_get_Item2__);
    thunk_FUN_032e1da0(Method_System_Tuple<bool,_bool,_bool,_bool>_get_Item2__);
    thunk_FUN_032e1da0(PTR_DAT_0727a028);
    DAT_076e304c = 1;
  }
  *(undefined4 *)(param_1 + 0x1a8) = 1;
  *(undefined1 *)(param_1 + 0x210) = 1;
  *(undefined2 *)(param_1 + 600) = 0x101;
  lVar7 = *(long *)puVar2;
  if (*(int *)(lVar7 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
    lVar7 = *(long *)puVar2;
  }
  puVar3 = Method_System_Tuple<Pose,_float,_float,_float>_get_Item3__;
  puVar1 = Method_System_Tuple<Pose,_float,_float,_float>_get_Item1__;
  lVar9 = *(long *)(*(long *)(lVar7 + 0xb8) + 8);
  if (lVar9 == 0) {
    if (*(int *)(lVar7 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar7 = *(long *)puVar2;
    }
    uVar10 = **(undefined8 **)(lVar7 + 0xb8);
    lVar9 = thunk_FUN_032a56a0(*(undefined8 *)
                                Method_System_Tuple<bool,_bool,_bool,_bool>_get_Item4__);
    FUN_055c629c(lVar9,uVar10,
                 *(undefined8 *)Method_System_Tuple<TextWriter,_char[],_int,_int>_get_Item1__,0);
    plVar8 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 8);
    *plVar8 = lVar9;
    thunk_FUN_0333a630(plVar8,lVar9);
  }
  uVar10 = thunk_FUN_032a56a0(*(undefined8 *)puVar3);
  FUN_03fdae14(uVar10,lVar9,0,0,0,0,10000,*(undefined8 *)puVar1);
  *(undefined8 *)(param_1 + 0x268) = uVar10;
  thunk_FUN_0333a630(param_1 + 0x268,uVar10);
  lVar7 = *(long *)puVar2;
  if (*(int *)(lVar7 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
    lVar7 = *(long *)puVar2;
  }
  puVar6 = Method_System_Tuple<TextWriter,_char[],_int,_int>__ctor__;
  puVar5 = Method_System_Tuple<Pose,_float,_float,_float>_get_Item4__;
  puVar4 = Method_System_Tuple<Pose,_float,_float,_float>_get_Item2__;
  puVar3 = Method_System_Tuple<int,_int,_int,_bool>__ctor__;
  puVar1 = PTR_DAT_0727a028;
  lVar9 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x10);
  if (lVar9 == 0) {
    if (*(int *)(lVar7 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar7 = *(long *)puVar2;
    }
    uVar10 = **(undefined8 **)(lVar7 + 0xb8);
    lVar9 = thunk_FUN_032a56a0(*(undefined8 *)
                                Method_System_Tuple<bool,_bool,_bool,_bool>_get_Item3__);
    FUN_055c629c(lVar9,uVar10,
                 *(undefined8 *)Method_System_Tuple<TextWriter,_char[],_int,_int>_get_Item2__,0);
    plVar8 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x10);
    *plVar8 = lVar9;
    thunk_FUN_0333a630(plVar8,lVar9);
  }
  uVar10 = thunk_FUN_032a56a0(*(undefined8 *)puVar4);
  FUN_03fdae14(uVar10,lVar9,0,0,0,0,10000,*(undefined8 *)puVar3);
  *(undefined8 *)(param_1 + 0x270) = uVar10;
  thunk_FUN_0333a630(param_1 + 0x270,uVar10);
  uVar10 = thunk_FUN_032a56a0(*(undefined8 *)puVar6);
  System_Collections_Generic_List<HIDParser_HIDReportData>__Clear(uVar10,*(undefined8 *)puVar5);
  *(undefined8 *)(param_1 + 0x288) = uVar10;
  thunk_FUN_0333a630(param_1 + 0x288,uVar10);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
  }
  FUN_06aa347c(param_1);
  return;
}


