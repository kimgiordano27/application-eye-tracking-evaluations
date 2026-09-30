/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4s>$$GetSubArray
ENTRY_POINT: 05ea8e38
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 73
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_8;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector4s>__GetSubArray(long *param_1)

{
  ushort uVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  long unaff_x20;
  long unaff_x21;
  undefined8 uVar8;
  code *pcVar9;
  uint uStack000000000000001c;
  
                    /* catch() { ... } // from try @ 05ea8ec8 with catch @ 05ea8e38
                       catch() { ... } // from try @ 05ea8f08 with catch @ 05ea8e38
                       catch() { ... } // from try @ 05ea8f40 with catch @ 05ea8e38
                       catch() { ... } // from try @ 05ea8f6c with catch @ 05ea8e38
                       catch() { ... } // from try @ 05ea8fe0 with catch @ 05ea8e38 */
  if ((*(byte *)(unaff_x21 + 0xa28) & 1) == 0) {
    FUN_04077588(PTR_DAT_092ba5f8);
    *(undefined1 *)(unaff_x21 + 0xa28) = 1;
  }
  lVar3 = *(long *)(unaff_x20 + 0x20);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
                    /* try { // try from 05ea8e68 to 05fa8ec7 has its CatchHandler @ 05ea8ed8 */
    lVar3 = FUN_040b1acc();
  }
  puVar2 = PTR_DAT_09285980;
  uVar8 = *(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x70);
  if (*(int *)(*(long *)(PTR_DAT_09285980 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_040d65a8(*(long *)(PTR_DAT_09285980 + 0xe0));
  }
  uVar8 = FUN_0768890c(uVar8,0);
  uVar4 = FUN_0768890c(*(long *)(puVar2 + 0x88) + 0x20,0);
  uVar5 = FUN_07691f40(uVar8,uVar4,0);
  if ((uVar5 & 1) == 0) {
    lVar3 = *(long *)(unaff_x20 + 0x20);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_040b1acc();
    }
    uVar8 = *(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x70);
    if (*(int *)(*(long *)(puVar2 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_040d65a8(*(long *)(puVar2 + 0xe0));
    }
    plVar6 = (long *)FUN_0768890c(uVar8,0);
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    uVar8 = (**(code **)(*plVar6 + 0x1b8))(plVar6,*(undefined8 *)(*plVar6 + 0x1c0));
    uStack000000000000001c = *(uint *)((long)param_1 + 0xc) & 0x7fffffff;
    uVar4 = thunk_FUN_040b4b34(*(undefined8 *)(puVar2 + 0x48),&stack0x0000001c);
    FUN_074e74a4(*(undefined8 *)PTR_DAT_092ba5f8,uVar8,uVar4,0);
  }
  else {
    plVar6 = (long *)*param_1;
    if ((plVar6 != (long *)0x0) && (*plVar6 == *(long *)(puVar2 + 0x90))) {
      FUN_074e87b0(plVar6,(int)param_1[1],*(uint *)((long)param_1 + 0xc) & 0x7fffffff,0);
      return;
    }
    lVar7 = *(long *)(unaff_x20 + 0x20);
    uVar1 = *(ushort *)(lVar7 + 0x135);
    lVar3 = lVar7;
    if ((uVar1 & 1) == 0) {
      lVar7 = FUN_040b1acc(lVar7);
      uVar1 = *(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135);
      lVar3 = *(long *)(unaff_x20 + 0x20);
    }
    pcVar9 = (code *)**(undefined8 **)(*(long *)(lVar7 + 0xc0) + 0x78);
    if ((uVar1 & 1) == 0) {
      lVar3 = FUN_040b1acc(lVar3);
    }
    (*pcVar9)(param_1,*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x78));
    if ((*(byte *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
      FUN_040b1acc();
    }
    FUN_0659941c();
  }
  return;
}


