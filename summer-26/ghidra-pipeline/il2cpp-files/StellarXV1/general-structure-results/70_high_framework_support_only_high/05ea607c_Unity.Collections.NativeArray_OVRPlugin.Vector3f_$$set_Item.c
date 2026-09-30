/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector3f>$$set_Item
ENTRY_POINT: 05ea607c
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 73
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector3f>__set_Item(long *param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 uVar6;
  uint uStack000000000000001c;
  
  if ((DAT_0988ba25 & 1) == 0) {
                    /* try { // try from 05ea6094 to 05fa60ab has its CatchHandler @ 05ea6144 */
    FUN_04077588(PTR_DAT_092ba5f8);
    DAT_0988ba25 = 1;
  }
  lVar2 = *(long *)(param_2 + 0x20);
                    /* try { // try from 05ea60ac to 05fa60bf has its CatchHandler @ 05ea5fa4 */
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_040b1acc();
  }
  puVar1 = PTR_DAT_09285980;
                    /* try { // try from 05ea60c0 to 05fa60d7 has its CatchHandler @ 05ea6144 */
  uVar6 = *(undefined8 *)(*(long *)(lVar2 + 0xc0) + 0x70);
  if (*(int *)(*(long *)(PTR_DAT_09285980 + 0xe0) + 0xe4) == 0) {
                    /* try { // try from 05ea60d8 to 05fa6133 has its CatchHandler @ 05ea5fa4 */
    thunk_FUN_040d65a8(*(long *)(PTR_DAT_09285980 + 0xe0));
  }
  uVar6 = FUN_0768890c(uVar6,0);
  uVar3 = FUN_0768890c(*(long *)(puVar1 + 0x88) + 0x20,0);
  uVar4 = FUN_07691f40(uVar6,uVar3,0);
  if ((uVar4 & 1) == 0) {
    lVar2 = *(long *)(param_2 + 0x20);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_040b1acc();
    }
    uVar6 = *(undefined8 *)(*(long *)(lVar2 + 0xc0) + 0x70);
    if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_040d65a8(*(long *)(puVar1 + 0xe0));
    }
    plVar5 = (long *)FUN_0768890c(uVar6,0);
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    uVar6 = (**(code **)(*plVar5 + 0x1b8))(plVar5,*(undefined8 *)(*plVar5 + 0x1c0));
    uStack000000000000001c = *(uint *)((long)param_1 + 0xc) & 0x7fffffff;
    uVar3 = thunk_FUN_040b4b34(*(undefined8 *)(puVar1 + 0x48),&stack0x0000001c);
    FUN_074e74a4(*(undefined8 *)PTR_DAT_092ba5f8,uVar6,uVar3,0);
  }
  else {
    plVar5 = (long *)*param_1;
    if ((plVar5 != (long *)0x0) && (*plVar5 == *(long *)(puVar1 + 0x90))) {
      FUN_074e87b0(plVar5,(int)param_1[1],*(uint *)((long)param_1 + 0xc) & 0x7fffffff,0);
      return;
    }
    lVar2 = *(long *)(param_2 + 0x20);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_040b1acc();
    }
    FUN_05ea9d4c(param_1,*(undefined8 *)(*(long *)(lVar2 + 0xc0) + 0x78));
    if ((*(byte *)(*(long *)(param_2 + 0x20) + 0x135) & 1) == 0) {
      FUN_040b1acc();
    }
    FUN_065589b8();
  }
  return;
}


