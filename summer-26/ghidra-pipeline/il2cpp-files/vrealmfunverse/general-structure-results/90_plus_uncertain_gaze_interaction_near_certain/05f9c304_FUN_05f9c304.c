/*
FUNCTION_NAME: FUN_05f9c304
ENTRY_POINT: 05f9c304
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 109
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;pose_vector;ui_interaction
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;strong_pose_or_ray_construction_hits_6;ui_or_gameplay_sink_hits_2;functionality_gaze_interaction_hits_2
*/


void FUN_05f9c304(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long *plVar8;
  undefined8 uVar9;
  long *plVar10;
  undefined8 uVar11;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined4 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 local_6c [4];
  undefined8 local_68;
  
  puVar3 = UnityEngine_UIElements_ObjectPool<VisualElementFocusChangeTarget>_TypeInfo;
  puVar2 = PTR_DAT_0631c5b8;
  if ((DAT_066dd5cf & 1) == 0) {
    FUN_02b3c81c(StringLiteral_950);
    FUN_02b3c81c(PTR_DAT_0631c5b8);
    FUN_02b3c81c(UnityEngine_UIElements_ObjectPool<RenderTreeCompositor_DrawOperation>_TypeInfo);
    FUN_02b3c81c(UnityEngine_UIElements_ObjectPool<UIRAtlasAllocator_AreaNode>_TypeInfo);
    FUN_02b3c81c(StringLiteral_951);
    FUN_02b3c81c(StringLiteral_952);
    FUN_02b3c81c(StringLiteral_953);
    FUN_02b3c81c(UnityEngine_Rendering_ObservableList<Volume>_TypeInfo);
    FUN_02b3c81c(StringLiteral_954);
    FUN_02b3c81c(OVRManager_Observable<OVRManager_PassthroughInitializationState>_TypeInfo);
    FUN_02b3c81c(UnityEngine_UIElements_ObjectPool<VisualElementFocusChangeTarget>_TypeInfo);
    FUN_02b3c81c(StringLiteral_955);
    FUN_02b3c81c(StringLiteral_956);
    FUN_02b3c81c(Oculus_Interaction_Input_OneEuroFilter_OneEuroFilterMulti<Pose>_TypeInfo);
    FUN_02b3c81c(StringLiteral_957);
    FUN_02b3c81c(Oculus_Interaction_Input_OneEuroFilter_OneEuroFilterMulti<Quaternion>_TypeInfo);
    FUN_02b3c81c(StringLiteral_958);
    FUN_02b3c81c(Oculus_Interaction_Input_OneEuroFilter_OneEuroFilterMulti<Vector2>_TypeInfo);
    FUN_02b3c81c(StringLiteral_959);
    FUN_02b3c81c(StringLiteral_960);
    FUN_02b3c81c(StringLiteral_961);
    FUN_02b3c81c(StringLiteral_962);
    DAT_066dd5cf = 1;
  }
  local_68 = 0;
  local_6c[0] = 0;
  local_e8 = 0;
  uStack_c8 = 0;
  local_d0 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_a8 = 0;
  local_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_88 = 0;
  local_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_d8 = 0;
  local_e0 = 0;
  plVar8 = (long *)thunk_FUN_02b79644(*(undefined8 *)puVar2);
  FUN_04c149dc(plVar8,0);
  local_68 = *(undefined8 *)(param_1 + 0x144);
  uVar9 = FUN_03ae4294(&local_68,0,0,0);
  uVar9 = FUN_04bffdac(*(undefined8 *)puVar3,uVar9,0);
  puVar1 = Oculus_Interaction_Input_OneEuroFilter_OneEuroFilterMulti<Vector2>_TypeInfo;
  puVar3 = Oculus_Interaction_Input_OneEuroFilter_OneEuroFilterMulti<Pose>_TypeInfo;
  puVar2 = OVRManager_Observable<OVRManager_PassthroughInitializationState>_TypeInfo;
  if (plVar8 != (long *)0x0) {
    FUN_04c16810(plVar8,uVar9,0);
                    /* try { // try from 05f9c4e4 to 0609c6a7 has its CatchHandler @ 05f9c4e4
                       catch() { ... } // from try @ 05f9c4e4 with catch @ 05f9c4e4
                       catch() { ... } // from try @ 05f9ca40 with catch @ 05f9c4e4
                       catch() { ... } // from try @ 05f9cb30 with catch @ 05f9c4e4
                       catch() { ... } // from try @ 05f9cb3c with catch @ 05f9c4e4
                       catch() { ... } // from try @ 05f9cb4c with catch @ 05f9c4e4
                       catch() { ... } // from try @ 05f9cc08 with catch @ 05f9c4e4 */
    local_68 = *(undefined8 *)(param_1 + 0x14c);
    uVar9 = FUN_03ae4294(&local_68,0,0,0);
    uVar9 = FUN_04bffdac(*(undefined8 *)puVar1,uVar9,0);
    FUN_04c16810(plVar8,uVar9,0);
    puVar1 = PTR_DAT_06312310;
    local_6c[0] = *(undefined1 *)(param_1 + 0x138);
    if (*(int *)(*(long *)(PTR_DAT_06312310 + 0x28) + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    puVar4 = Oculus_Interaction_Input_OneEuroFilter_OneEuroFilterMulti<Quaternion>_TypeInfo;
    uVar9 = FUN_04cf7810(local_6c,0);
    uVar9 = FUN_04bffdac(*(undefined8 *)puVar3,uVar9,0);
    FUN_04c16810(plVar8,uVar9,0);
    plVar10 = *(long **)(param_1 + 0x20);
    uVar9 = *(undefined8 *)puVar2;
    if (plVar10 == (long *)0x0) {
      uVar11 = 0;
    }
    else {
      uVar11 = (**(code **)(*plVar10 + 0x168))(plVar10,*(undefined8 *)(*plVar10 + 0x170));
    }
    puVar2 = UnityEngine_UIElements_ObjectPool<UIRAtlasAllocator_AreaNode>_TypeInfo;
    uVar9 = FUN_04bffdac(uVar9,uVar11,0);
    FUN_04c16810(plVar8,uVar9,0);
    plVar10 = *(long **)(param_1 + 0x28);
    uVar9 = *(undefined8 *)puVar4;
    if (plVar10 == (long *)0x0) {
      uVar11 = 0;
    }
    else {
      uVar11 = (**(code **)(*plVar10 + 0x168))(plVar10,*(undefined8 *)(*plVar10 + 0x170));
    }
    puVar3 = UnityEngine_UIElements_ObjectPool<RenderTreeCompositor_DrawOperation>_TypeInfo;
    uVar9 = FUN_04bffdac(uVar9,uVar11,0);
    FUN_04c16810(plVar8,uVar9,0);
    plVar10 = *(long **)(param_1 + 0x30);
    uVar9 = *(undefined8 *)puVar2;
    if (plVar10 == (long *)0x0) {
      uVar11 = 0;
    }
    else {
      uVar11 = (**(code **)(*plVar10 + 0x168))(plVar10,*(undefined8 *)(*plVar10 + 0x170));
    }
    uVar9 = FUN_04bffdac(uVar9,uVar11,0);
    FUN_04c16810(plVar8,uVar9,0);
    plVar10 = *(long **)(param_1 + 0x40);
    uVar9 = *(undefined8 *)puVar3;
    if (plVar10 == (long *)0x0) {
      uVar11 = 0;
    }
    else {
      uVar11 = (**(code **)(*plVar10 + 0x168))(plVar10,*(undefined8 *)(*plVar10 + 0x170));
    }
    puVar7 = StringLiteral_962;
    puVar6 = StringLiteral_957;
    puVar5 = StringLiteral_956;
    puVar4 = StringLiteral_953;
    puVar3 = StringLiteral_952;
    puVar2 = UnityEngine_Rendering_ObservableList<Volume>_TypeInfo;
                    /* try { // try from 05f9c6a8 to 0609c6bb has its CatchHandler @ 05f9cb68 */
    uVar9 = FUN_04bffdac(uVar9,uVar11,0);
    FUN_04c16810(plVar8,uVar9,0);
    local_6c[0] = *(undefined1 *)(param_1 + 0x184);
                    /* try { // try from 05f9c6cc to 0609c73f has its CatchHandler @ 05f9cb74 */
    if (*(int *)(*(long *)(puVar1 + 0x28) + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    uVar9 = FUN_04cf7810(local_6c,0);
    uVar9 = FUN_04bffdac(*(undefined8 *)puVar2,uVar9,0);
    FUN_04c16810(plVar8,uVar9,0);
    FUN_04c16810(plVar8,*(undefined8 *)puVar4,0);
    memcpy(&local_e0,(void *)(param_1 + 0x50),0x70);
    uVar9 = FUN_05f9ca38(&local_e0);
    FUN_04c16810(plVar8,uVar9,0);
                    /* try { // try from 05f9c740 to 0609c74b has its CatchHandler @ 05f9cb64 */
    FUN_04c16810(plVar8,*(undefined8 *)puVar3,0);
                    /* try { // try from 05f9c74c to 0609c753 has its CatchHandler @ 05f9cb60 */
    memcpy(&local_e0,(void *)(param_1 + 0xc0),0x70);
                    /* try { // try from 05f9c75c to 0609c76b has its CatchHandler @ 05f9cb4c */
    uVar9 = FUN_05f9ca38(&local_e0);
    FUN_04c16810(plVar8,uVar9,0);
                    /* try { // try from 05f9c774 to 0609c7df has its CatchHandler @ 05f9cb70 */
    FUN_04c16810(plVar8,*(undefined8 *)puVar7,0);
    local_e8._4_4_ = *(undefined4 *)(param_1 + 0x13c);
    uVar9 = FUN_04d78c14((long)&local_e8 + 4,0);
    FUN_04c16810(plVar8,uVar9,0);
    local_e8._0_4_ = *(undefined4 *)(param_1 + 0x18c);
    uVar9 = FUN_04d8dfe8(&local_e8,0);
    uVar9 = FUN_04bffdac(*(undefined8 *)puVar5,uVar9,0);
    FUN_04c16810(plVar8,uVar9,0);
                    /* try { // try from 05f9c7e0 to 0609c7ef has its CatchHandler @ 05f9cb5c */
    local_e8._0_4_ = *(undefined4 *)(param_1 + 400);
    uVar9 = FUN_04d8dfe8(&local_e8,0);
    uVar9 = FUN_04bffdac(*(undefined8 *)puVar6,uVar9,0);
    FUN_04c16810(plVar8,uVar9,0);
    local_e8._0_4_ = *(undefined4 *)(param_1 + 0x194);
                    /* try { // try from 05f9c820 to 0609c82f has its CatchHandler @ 05f9cba0 */
    uVar9 = FUN_04d8dfe8(&local_e8,0);
                    /* try { // try from 05f9c838 to 0609c8a3 has its CatchHandler @ 05f9cba4 */
    uVar9 = FUN_04bffdac(*(undefined8 *)StringLiteral_961,uVar9,0);
    FUN_04c16810(plVar8,uVar9,0);
    local_e8._0_4_ = *(undefined4 *)(param_1 + 0x198);
    uVar9 = FUN_04d8dfe8(&local_e8,0);
    uVar9 = FUN_04bffdac(*(undefined8 *)StringLiteral_960,uVar9,0);
    FUN_04c16810(plVar8,uVar9,0);
    local_e8 = CONCAT44(local_e8._4_4_,*(undefined4 *)(param_1 + 0x19c));
    uVar9 = FUN_04d8dfe8(&local_e8,0);
                    /* try { // try from 05f9c8b0 to 0609c8bb has its CatchHandler @ 05f9cb54 */
    uVar9 = FUN_04bffdac(*(undefined8 *)StringLiteral_958,uVar9,0);
    FUN_04c16810(plVar8,uVar9,0);
    local_68 = *(undefined8 *)(param_1 + 0x1a0);
                    /* try { // try from 05f9c8dc to 0609c8eb has its CatchHandler @ 05f9cb98 */
    uVar9 = FUN_03ae4294(&local_68,0,0,0);
                    /* try { // try from 05f9c8fc to 0609c903 has its CatchHandler @ 05f9cb9c */
    uVar9 = FUN_04bffdac(*(undefined8 *)StringLiteral_955,uVar9,0);
                    /* try { // try from 05f9c910 to 0609c92b has its CatchHandler @ 05f9cb88 */
    FUN_04c16810(plVar8,uVar9,0);
    local_f0 = *(undefined4 *)(param_1 + 0x1a8);
                    /* try { // try from 05f9c934 to 0609c94f has its CatchHandler @ 05f9cb8c */
    local_100 = *(undefined8 *)StringLiteral_950;
    uStack_f8 = 0xffffffffffffffff;
    uVar9 = FUN_04db1580(&local_100,0);
                    /* try { // try from 05f9c958 to 0609c963 has its CatchHandler @ 05f9cb90 */
    uVar9 = FUN_04bffdac(*(undefined8 *)StringLiteral_951,uVar9,0);
    FUN_04c16810(plVar8,uVar9,0);
    local_68 = *(undefined8 *)(param_1 + 0x1ac);
                    /* try { // try from 05f9c984 to 0609c98b has its CatchHandler @ 05f9cbbc */
    uVar9 = FUN_03ae4294(&local_68,0,0,0);
    uVar9 = FUN_04bffdac(*(undefined8 *)StringLiteral_959,uVar9,0);
    FUN_04c16810(plVar8,uVar9,0);
                    /* try { // try from 05f9c9bc to 0609c9cb has its CatchHandler @ 05f9cbb4 */
    local_68 = *(undefined8 *)(param_1 + 0x1b4);
    uVar9 = FUN_03ae4294(&local_68,0,0,0);
                    /* try { // try from 05f9c9e8 to 0609c9f7 has its CatchHandler @ 05f9cb78 */
    uVar9 = FUN_04bffdac(*(undefined8 *)StringLiteral_954,uVar9,0);
    FUN_04c16810(plVar8,uVar9,0);
                    /* try { // try from 05f9ca04 to 0609ca13 has its CatchHandler @ 05f9cb84 */
    (**(code **)(*plVar8 + 0x168))(plVar8,*(undefined8 *)(*plVar8 + 0x170));
                    /* try { // try from 05f9ca24 to 0609ca3f has its CatchHandler @ 05f9cb50 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


