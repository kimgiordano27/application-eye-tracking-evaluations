/*
FUNCTION_NAME: System.Linq.Enumerable.WhereSelectArrayIterator<NamedValue,-Vector4>$$Clone
ENTRY_POINT: 0284f078
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 77
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_6;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0284f1b0) */

void System_Linq_Enumerable_WhereSelectArrayIterator<NamedValue,_Vector4>__Clone(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  undefined8 *puVar5;
  ulong uVar6;
  int *piVar7;
  long unaff_x19;
  long *unaff_x20;
  
                    /* try { // try from 0284f07c to 0294f093 has its CatchHandler @ 0284f0ec */
  lVar2 = FUN_04224ea4(param_1,0);
  if (lVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0284f178. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*unaff_x20 + 0x838))();
    return;
  }
  lVar2 = unaff_x20[0x7e];
                    /* try { // try from 0284f094 to 0294f0db has its CatchHandler @ 0284ef0c */
  (**(code **)(*unaff_x20 + 0x838))();
  lVar1 = unaff_x20[0x7e];
  lVar3 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x58);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_01ecaf44();
  }
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
                    /* try { // try from 0284f0dc to 0294f0eb has its CatchHandler @ 0284f0ec */
  plVar4 = (long *)FUN_029e6758((int)lVar2,(int)lVar1,
                                *(undefined8 *)
                                 (*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x50));
  if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  FUN_041d4560(plVar4);
  (**(code **)(*unaff_x20 + 0x198))();
  lVar2 = *plVar4;
  uVar6 = (ulong)*(ushort *)(lVar2 + 0x12e);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) ==
          *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
        puVar5 = (undefined8 *)(lVar2 + (long)*piVar7 * 0x10 + 0x138);
        goto LAB_0284f188;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  puVar5 = (undefined8 *)
           FUN_01ecb238(plVar4,*(long *)
                                Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                        ,0);
LAB_0284f188:
  (*(code *)*puVar5)(plVar4,puVar5[1]);
  return;
}


