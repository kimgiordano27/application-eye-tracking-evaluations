/*
FUNCTION_NAME: FUN_036e3884
ENTRY_POINT: 036e3884
PROGRAM: vrlegs-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_6;telemetry_or_network_hits_2
*/


void FUN_036e3884(undefined8 param_1,undefined8 param_2,undefined4 param_3,long param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  long *plVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 local_40;
  undefined8 uStack_38;
  
  local_40 = param_1;
  uStack_38 = param_2;
  if (param_4 == 0) {
    thunk_FUN_01a6ca08(PTR_DAT_03cbdf98);
    uVar4 = thunk_FUN_01a89e68();
    uVar6 = thunk_FUN_01a6ca08(PTR_DAT_03cd7b48);
    FUN_026a44fc(uVar4,uVar6,0);
    uVar6 = thunk_FUN_01a6ca08(Method_QFSW_QC_BasicQcSerializer<Vector3>__ctor__);
                    /* WARNING: Subroutine does not return */
    FUN_01ab6b14(uVar4,uVar6);
  }
  plVar3 = (long *)thunk_FUN_01a5dd74(param_4,0);
  if (plVar3 != (long *)0x0) {
    uVar4 = (**(code **)(*plVar3 + 0x538))(plVar3,*(undefined8 *)(*plVar3 + 0x540));
    uVar5 = FUN_0366bab0(uVar4,0);
    if ((uVar5 & 1) != 0) {
      uVar1 = FUN_02787790(param_4,0);
      uVar2 = FUN_0366ba74(uVar4,0);
      if (DAT_041344a0 == (code *)0x0) {
        DAT_041344a0 = (code *)FUN_01ab6968(
                                           "UnityEngine.Profiling.Profiler::Internal_EmitGlobalMetaData_Array(System.Void*,System.Int32,System.Int32,System.Array,System.Int32,System.Int32,System.Boolean)"
                                           );
      }
      (*DAT_041344a0)(&local_40,0x10,param_3,param_4,uVar1,uVar2,0);
      return;
    }
    uVar6 = thunk_FUN_01a6ca08(PTR_DAT_03cd8c78);
    uVar4 = FUN_025b4d3c(uVar6,uVar4,0);
    thunk_FUN_01a6ca08(PTR_DAT_03cbdfd0);
    uVar6 = thunk_FUN_01a89e68();
                    /* try { // try from 036e39cc to 037e3adb has its CatchHandler @ 036e39cc
                       catch() { ... } // from try @ 036e39cc with catch @ 036e39cc
                       catch() { ... } // from try @ 036e3c1c with catch @ 036e39cc
                       catch() { ... } // from try @ 036e3c4c with catch @ 036e39cc
                       catch() { ... } // from try @ 036e3ca8 with catch @ 036e39cc
                       catch() { ... } // from try @ 036e3cf0 with catch @ 036e39cc
                       catch() { ... } // from try @ 036e3d20 with catch @ 036e39cc */
    FUN_026b274c(uVar6,uVar4,0);
    uVar4 = thunk_FUN_01a6ca08(Method_QFSW_QC_BasicQcSerializer<Vector3>__ctor__);
                    /* WARNING: Subroutine does not return */
    FUN_01ab6b14(uVar6,uVar4);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


