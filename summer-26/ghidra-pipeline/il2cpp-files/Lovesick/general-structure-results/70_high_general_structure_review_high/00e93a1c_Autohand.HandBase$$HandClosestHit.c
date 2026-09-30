/*
FUNCTION_NAME: Autohand.HandBase$$HandClosestHit
ENTRY_POINT: 00e93a1c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_10;strong_pose_or_ray_construction_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void Autohand_HandBase__HandClosestHit(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar11;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  
  thunk_FUN_00d48444(*(undefined8 *)(param_1 + 0xa08));
  thunk_FUN_00d48444(StringLiteral_9781);
  thunk_FUN_00d48444(Oculus_Platform_Models_NetSyncSession_TypeInfo);
  thunk_FUN_00d48444(
                    Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter<bool>,_AutomaticColocationLauncher_<ColocateByPlayerWithOculusIdInternal>d__20>__
                    );
                    /* try { // try from 00e93a48 to 00f93a7b has its CatchHandler @ 00e93a48
                       catch() { ... } // from try @ 00e93a48 with catch @ 00e93a48
                       catch() { ... } // from try @ 00e93a88 with catch @ 00e93a48 */
  thunk_FUN_00d48444(System_Collections_Generic_List<ICanvasElement>_TypeInfo);
  thunk_FUN_00d48444(Method_UnityEngine_Texture2D_Internal_Create__);
  thunk_FUN_00d48444(StringLiteral_1764);
  thunk_FUN_00d48444(PTR_DAT_033ed360);
                    /* try { // try from 00e93a7c to 00f93a87 has its CatchHandler @ 00e93a88 */
  thunk_FUN_00d48444(PTR_DAT_033ecbb8);
                    /* catch() { ... } // from try @ 00e93a7c with catch @ 00e93a88
                       try { // try from 00e93a88 to 00f93aa3 has its CatchHandler @ 00e93a48 */
  thunk_FUN_00d48444(Method_UnityEngine_Object_Instantiate<Toggle>__);
  thunk_FUN_00d48444(
                    Method_Unity_Collections_NativeSlice<MB3_MeshCombinerSingle_MB_MeshCombinerSingle_MeshNativeArrayHelper_SIZER_132>_SliceWithStride<Vector3>__
                    );
  thunk_FUN_00d48444(Method_Newtonsoft_Json_JsonConvert_ToString__);
  thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vrshlq_u64__);
  thunk_FUN_00d48444(Oculus_Interaction_HandGrab_Visuals_JointCollection_TypeInfo);
                    /* catch() { ... } // from try @ 00e93c20 with catch @ 00e93ac4 */
  thunk_FUN_00d48444(PTR_DAT_033f3dc8);
  thunk_FUN_00d48444(Method_System_Collections_Generic_Dictionary<string,_string>_ContainsKey__);
  thunk_FUN_00d48444(Method_UnityEngine_InputSystem_InputControl_GetDeviceIndex__);
  thunk_FUN_00d48444(System_Data_SqlTypes_SqlInt16_TypeInfo);
  thunk_FUN_00d48444(
                    Method_Unity_XR_CoreUtils_Collections_HashSetList<ISynchronousAffordanceStateReceiver>_get_Count__
                    );
  *(undefined1 *)(unaff_x20 + 0x15) = 1;
  puVar6 = StringLiteral_9781;
  puVar5 = StringLiteral_9110;
  puVar4 = Method_Unity_Burst_Intrinsics_Arm_Neon_vrshlq_u64__;
  puVar3 = Method_Newtonsoft_Json_JsonConvert_ToString__;
  puVar2 = Method_UnityEngine_Events_UnityEvent<MRUKTrackable>_Invoke__;
  puVar1 = Oculus_Platform_Models_NetSyncSession_TypeInfo;
  in_stack_00000028 = 0;
  in_stack_00000030 = 0;
                    /* try { // try from 00e93b08 to 00f93b47 has its CatchHandler @ 00e93c20 */
  in_stack_00000020 = 0;
  if (*(long *)(unaff_x19 + 0x88) != 0) {
    FUN_01323390(*(long *)(unaff_x19 + 0x88),&stack0x00000008,
                 *(undefined8 *)
                  Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter<bool>,_AutomaticColocationLauncher_<ColocateByPlayerWithOculusIdInternal>d__20>__
                );
    in_stack_00000028 = in_stack_00000010;
    in_stack_00000020 = in_stack_00000008;
    in_stack_00000030 = in_stack_00000018;
    while (uVar7 = FUN_012b894c(&stack0x00000020,*(undefined8 *)puVar6), (uVar7 & 1) != 0) {
      lVar8 = FUN_00ac6fa8(&stack0x00000020,*(undefined8 *)puVar1);
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
                    /* try { // try from 00e93b94 to 00f93b97 has its CatchHandler @ 00e93c24 */
      uVar11 = *(undefined8 *)(lVar8 + 0x18);
      lVar9 = thunk_FUN_00d62348(*(undefined8 *)puVar4);
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      FUN_026c8404(lVar9);
      plVar10 = (long *)FUN_017b76bc(uVar11,lVar9,0);
      if (plVar10 == (long *)0x0) {
        *(undefined8 *)(lVar8 + 0x18) = 0;
                    /* try { // try from 00e93bf8 to 00f93c1f has its CatchHandler @ 00e93c20 */
      }
      else {
        lVar9 = *(long *)puVar4;
        if (*plVar10 != lVar9) {
                    /* WARNING: Subroutine does not return */
          FUN_00da544c();
        }
        *(long **)(lVar8 + 0x18) = plVar10;
        if (*plVar10 != lVar9) {
                    /* WARNING: Subroutine does not return */
          FUN_00da544c();
        }
      }
    }
    FUN_012b8948(&stack0x00000020,*(undefined8 *)puVar5);
    if (*(long *)(unaff_x19 + 0x108) != 0) {
      lVar9 = *(long *)(*(long *)(unaff_x19 + 0x108) + 0x58);
      lVar8 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
                    /* catch() { ... } // from try @ 00e93b08 with catch @ 00e93c20
                       catch() { ... } // from try @ 00e93bf8 with catch @ 00e93c20
                       try { // try from 00e93c20 to 00f93c57 has its CatchHandler @ 00e93ac4 */
                    /* catch() { ... } // from try @ 00e93b94 with catch @ 00e93c24 */
      if ((lVar8 != 0) && (FUN_013df2bc(), lVar9 != 0)) {
        FUN_013df780(lVar9,lVar8,
                     *(undefined8 *)Oculus_Interaction_HandGrab_Visuals_JointCollection_TypeInfo);
        lVar8 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
        if (lVar8 != 0) {
          FUN_016f27fc();
          FUN_00fe0700(*(undefined8 *)
                        Method_System_Collections_Generic_Dictionary<string,_string>_ContainsKey__,
                       lVar8,0);
          lVar8 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
          if (lVar8 != 0) {
            FUN_016f27fc();
            FUN_00fe0700(*(undefined8 *)Method_UnityEngine_InputSystem_InputControl_GetDeviceIndex__
                         ,lVar8,0);
            lVar8 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
            if (lVar8 != 0) {
              FUN_016f27fc();
              FUN_00fe0700(*(undefined8 *)System_Data_SqlTypes_SqlInt16_TypeInfo,lVar8,0);
              lVar8 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
              if (lVar8 != 0) {
                FUN_016f27fc();
                FUN_00fe0700(*(undefined8 *)
                              Method_Unity_XR_CoreUtils_Collections_HashSetList<ISynchronousAffordanceStateReceiver>_get_Count__
                             ,lVar8,0);
                lVar8 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
                if (lVar8 != 0) {
                  FUN_016f27fc();
                  FUN_00fe0700(*(undefined8 *)PTR_DAT_033f3dc8,lVar8,0);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


