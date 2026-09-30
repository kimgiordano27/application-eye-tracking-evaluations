/*
FUNCTION_NAME: MotelSkyboxController$$RemoveListeners
ENTRY_POINT: 00ee22e4
PROGRAM: Lovesick-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;ui_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_10;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void MotelSkyboxController__RemoveListeners(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  long unaff_x19;
  long unaff_x21;
  long lVar11;
  uint uVar12;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00ee226c with catch @ 00ee22e8
                        */
  thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vmlal_n_s32__);
  thunk_FUN_00d48444(
                    Method_System_Collections_Generic_List_Enumerator<ProbeVolumePerSceneData_SerializableAssetItem>_Dispose__
                    );
  thunk_FUN_00d48444(Method_UnityEngine_Component_GetComponentsInChildren<ObiUpdater>__);
  thunk_FUN_00d48444(Method_System_Collections_Generic_List<OVRGLTFAccessor_GLTFBuffer>_get_Item__);
                    /* try { // try from 00ee231c to 00fe231f has its CatchHandler @ 00ee2320 */
  thunk_FUN_00d48444(Method_System_Xml_XmlUrlResolver_GetEntity__);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00ee231c with catch @ 00ee2320
                        */
                    /* try { // try from 00ee2324 to 00fe2327 has its CatchHandler @ 00ee2330 */
                    /* try { // try from 00ee2328 to 00fe2333 has its CatchHandler @ 00ee21ec */
  thunk_FUN_00d48444(System_Action<ARMeshesChangedEventArgs>_TypeInfo);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00ee2324 with catch @ 00ee2330
                        */
  thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vdup_lane_u32__);
  thunk_FUN_00d48444(Method_UnityEngine_UIElements_EventBase<PointerLeaveEvent>_TypeId__);
  thunk_FUN_00d48444(Method_UnityEngine_Events_UnityEvent<float[],_int,_float>_Invoke__);
  thunk_FUN_00d48444(Method_System_Collections_Generic_Dictionary<object,_bool>_get_Item__);
  thunk_FUN_00d48444(StringLiteral_13830);
  thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vrshlq_u64__);
  thunk_FUN_00d48444(Method_FullSerializer_Internal_fsOption<fsVersionedType>_get_HasValue__);
  thunk_FUN_00d48444(Method_System_Collections_Generic_Dictionary<int,_Vector4>_TryGetValue__);
                    /* try { // try from 00ee238c to 00fe2413 has its CatchHandler @ 00ee238c
                       catch() { ... } // from try @ 00ee238c with catch @ 00ee238c
                       catch() { ... } // from try @ 00ee2424 with catch @ 00ee238c
                       catch() { ... } // from try @ 00ee24a0 with catch @ 00ee238c */
  *(undefined1 *)(unaff_x21 + 0x330) = 1;
  in_stack_00000028 = 0;
  in_stack_00000030 = 0;
  in_stack_00000020 = 0;
  lVar8 = FUN_010c3404();
  puVar3 = Method_FullSerializer_Internal_fsOption<fsVersionedType>_get_HasValue__;
  puVar2 = Method_System_Collections_Generic_Dictionary<object,_bool>_get_Item__;
  if (lVar8 != 0) {
    uVar1 = *(uint *)(lVar8 + 0x18);
    if (0 < (int)uVar1) {
      uVar12 = 0;
      do {
        if (uVar1 <= uVar12) {
                    /* WARNING: Subroutine does not return */
          FUN_00da5194();
        }
        lVar10 = *(long *)(lVar8 + (long)(int)uVar12 * 8 + 0x20);
        if (lVar10 == 0) goto LAB_00ee25c4;
        lVar11 = *(long *)(lVar10 + 0x108);
        lVar10 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
        if ((lVar10 == 0) || (FUN_013df2bc(), lVar11 == 0)) goto LAB_00ee25c4;
                    /* try { // try from 00ee2414 to 00fe2423 has its CatchHandler @ 00ee24a4 */
        FUN_013df780(lVar11,lVar10,*(undefined8 *)puVar3);
                    /* try { // try from 00ee2424 to 00fe2493 has its CatchHandler @ 00ee238c */
        uVar1 = *(uint *)(lVar8 + 0x18);
        uVar12 = uVar12 + 1;
      } while ((int)uVar12 < (int)uVar1);
    }
    puVar7 = StringLiteral_13830;
    puVar6 = Method_Unity_Burst_Intrinsics_Arm_Neon_vrshlq_u64__;
    puVar5 = Method_Unity_Burst_Intrinsics_Arm_Neon_vdup_lane_u32__;
    puVar4 = Method_System_Xml_XmlUrlResolver_GetEntity__;
    puVar3 = Method_UnityEngine_UIElements_EventBase<PointerLeaveEvent>_TypeId__;
    puVar2 = System_Action<ARMeshesChangedEventArgs>_TypeInfo;
    if (*(long *)(unaff_x19 + 200) != 0) {
      FUN_01323390(*(long *)(unaff_x19 + 200),&stack0x00000008,
                   *(undefined8 *)Method_UnityEngine_Events_UnityEvent<float[],_int,_float>_Invoke__
                  );
                    /* try { // try from 00ee2494 to 00fe249f has its CatchHandler @ 00ee24a0 */
      in_stack_00000028 = in_stack_00000010;
      in_stack_00000020 = in_stack_00000008;
      in_stack_00000030 = in_stack_00000018;
                    /* catch() { ... } // from try @ 00ee2494 with catch @ 00ee24a0
                       try { // try from 00ee24a0 to 00fe24b7 has its CatchHandler @ 00ee238c */
                    /* catch() { ... } // from try @ 00ee2414 with catch @ 00ee24a4 */
      while (uVar9 = FUN_012b894c(&stack0x00000020,*(undefined8 *)puVar2), (uVar9 & 1) != 0) {
                    /* try { // try from 00ee24b8 to 00fe253f has its CatchHandler @ 00ee24b8
                       catch() { ... } // from try @ 00ee24b8 with catch @ 00ee24b8
                       catch() { ... } // from try @ 00ee2550 with catch @ 00ee24b8
                       catch() { ... } // from try @ 00ee25cc with catch @ 00ee24b8 */
        lVar8 = FUN_00ac92f0(&stack0x00000020,*(undefined8 *)puVar5);
        if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        lVar10 = *(long *)(lVar8 + 0xf8);
        lVar8 = thunk_FUN_00d62348(*(undefined8 *)puVar6);
        if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 00ee25c0 with catch @ 00ee25cc
                       try { // try from 00ee25cc to 00fe25e3 has its CatchHandler @ 00ee24b8 */
          FUN_00da518c();
        }
        FUN_026c8404(lVar8);
        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 00ee2540 with catch @ 00ee25d0 */
          FUN_00da518c();
        }
        FUN_026c84dc(lVar10,lVar8,0);
      }
      FUN_012b8948(&stack0x00000020,*(undefined8 *)puVar4);
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      if (DAT_03774e19 == '\0') {
        thunk_FUN_00d48444(Method_UnityEngine_UIElements_EventBase<PointerLeaveEvent>_TypeId__);
        DAT_03774e19 = '\x01';
      }
      lVar8 = *(long *)puVar3;
                    /* try { // try from 00ee2540 to 00fe254f has its CatchHandler @ 00ee25d0 */
      if (*(int *)(lVar8 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar8 = *(long *)puVar3;
      }
                    /* try { // try from 00ee2550 to 00fe25bf has its CatchHandler @ 00ee24b8 */
      if ((**(long **)(lVar8 + 0xb8) != 0) &&
         (lVar8 = *(long *)(**(long **)(lVar8 + 0xb8) + 0xf0), lVar8 != 0)) {
        lVar10 = *(long *)(lVar8 + 0x30);
        lVar8 = thunk_FUN_00d62348(*(undefined8 *)puVar7);
        if ((lVar8 != 0) && (FUN_013df3d0(), lVar10 != 0)) {
          FUN_013dfdd8(lVar10,lVar8,
                       *(undefined8 *)
                        Method_System_Collections_Generic_Dictionary<int,_Vector4>_TryGetValue__);
                    /* try { // try from 00ee25c0 to 00fe25cb has its CatchHandler @ 00ee25cc */
          return;
        }
      }
    }
  }
LAB_00ee25c4:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


