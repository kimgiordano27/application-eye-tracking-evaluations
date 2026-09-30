/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Contains<OVRPassthroughLayer.SerializedSurfaceGeometry>
ENTRY_POINT: 0115310c
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


void System_Array__InternalArray__ICollection_Contains<OVRPassthroughLayer_SerializedSurfaceGeometry>
               (ulong param_1,undefined8 param_2,uint param_3,long param_4)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x23;
  long lStack0000000000000008;
  
  lStack0000000000000008 = param_4;
  if ((param_1 & 1) == 0) {
    FUN_00fdc2e4(PTR_DAT_0234bd08);
    *(undefined1 *)(unaff_x23 + 0xd2) = 1;
  }
  uVar1 = FUN_01d60e34(param_2,0);
  if (uVar1 <= param_3) {
    thunk_FUN_010303a8(PTR_DAT_0234be28);
    uVar5 = thunk_FUN_010400dc();
    uVar4 = thunk_FUN_010303a8(PTR_DAT_0234be20);
    FUN_01c66cb4(uVar5,uVar4,0);
                    /* WARNING: Subroutine does not return */
    FUN_00fdc400(uVar5);
  }
  plVar2 = (long *)thunk_FUN_0103ffe0(param_2,*(undefined8 *)PTR_DAT_0234bd08);
  if (plVar2 == (long *)0x0) {
    FUN_00fdc340(param_2,param_3,&stack0x00000008);
    return;
  }
  if ((param_4 != 0) &&
     (lVar3 = thunk_FUN_0103ffe0(param_4,*(undefined8 *)(*plVar2 + 0x40)), lVar3 == 0)) {
    uVar5 = thunk_FUN_01058ef0();
                    /* WARNING: Subroutine does not return */
    FUN_00fdc400(uVar5,0);
  }
  if (param_3 < *(uint *)(plVar2 + 3)) {
    plVar2[(long)(int)param_3 + 4] = param_4;
    thunk_FUN_0106e12c(plVar2 + (long)(int)param_3 + 4,param_4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00fdc53c();
}


