/*
FUNCTION_NAME: FUN_0208d4ac
ENTRY_POINT: 0208d4ac
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_8;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_0208d4ac(long param_1,int param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  int local_44;
  
  puVar1 = Method_Unity_VisualScripting_StaticFunctionInvoker<Quaternion,_Quaternion,_bool>__ctor__;
                    /* try { // try from 0208d4c8 to 0218d4e7 has its CatchHandler @ 0208d4c8
                       catch(type#1 @ 00000000) { ... } // from try @ 0208d4c8 with catch @ 0208d4c8
                       catch(type#1 @ 00000000) { ... } // from try @ 0208d528 with catch @ 0208d4c8
                        */
  if ((DAT_0482f772 & 1) == 0) {
                    /* try { // try from 0208d4e8 to 0218d4ef has its CatchHandler @ 0208d518 */
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__);
    thunk_FUN_01efb3a4(Method_System_Runtime_CompilerServices_StrongBox<object>__ctor__);
                    /* try { // try from 0208d4f8 to 0218d4ff has its CatchHandler @ 0208d514 */
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LivestreamingStatus>_get_Data__);
    thunk_FUN_01efb3a4(
                      Method_Unity_VisualScripting_StaticFunctionInvoker<Quaternion,_Quaternion,_bool>__ctor__
                      );
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0208d4f8 with catch @ 0208d514
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0208d4e8 with catch @ 0208d518
                        */
    thunk_FUN_01efb3a4(Method_System_Runtime_CompilerServices_StrongBox<object>__ctor__);
                    /* try { // try from 0208d520 to 0218d527 has its CatchHandler @ 0208d530 */
    thunk_FUN_01efb3a4(Method_UnityEngine_UIElements_StyleDataRef<InheritedData>_Acquire__);
                    /* try { // try from 0208d528 to 0218d533 has its CatchHandler @ 0208d4c8 */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0208d520 with catch @ 0208d530
                        */
    thunk_FUN_01efb3a4(Method_UnityEngine_UIElements_StyleDataRef<InheritedData>_CopyFrom__);
                    /* try { // try from 0208d534 to 0218d587 has its CatchHandler @ 0208d534
                       catch(type#1 @ 00000000) { ... } // from try @ 0208d534 with catch @ 0208d534
                       catch(type#1 @ 00000000) { ... } // from try @ 0208d5d8 with catch @ 0208d534
                        */
    thunk_FUN_01efb3a4(Method_UnityEngine_UIElements_StyleDataRef<InheritedData>_Create__);
    thunk_FUN_01efb3a4(Method_UnityEngine_UIElements_StyleDataRef<InheritedData>_Equals__);
    DAT_0482f772 = 1;
  }
  puVar2 = Method_System_Runtime_CompilerServices_StrongBox<object>__ctor__;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  puVar3 = Method_UnityEngine_UIElements_StyleDataRef<InheritedData>_Equals__;
  puVar1 = Method_UnityEngine_UIElements_StyleDataRef<InheritedData>_Create__;
  uVar6 = FUN_034e4458(param_3,0);
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c(*(long *)puVar2);
  }
  lVar7 = FUN_03a13534(uVar6,*(undefined8 *)puVar1,*(undefined8 *)puVar3,0);
  puVar1 = Method_Oculus_Platform_Message<LivestreamingStatus>_get_Data__;
  if (lVar7 != 0) {
    uVar6 = FUN_03412ab4(lVar7,0);
    iVar5 = FUN_0408419c(param_1 + 0x30,0);
    if (iVar5 == param_2) {
      uVar6 = FUN_03405678(*(undefined8 *)
                            Method_UnityEngine_UIElements_StyleDataRef<InheritedData>_CopyFrom__,
                           uVar6,0);
    }
    puVar4 = Method_UnityEngine_UIElements_StyleDataRef<InheritedData>_Acquire__;
    puVar3 = Method_System_Runtime_CompilerServices_StrongBox<object>__ctor__;
    puVar2 = Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__;
    uVar8 = *(undefined8 *)(param_1 + 0x28);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    lVar7 = FUN_023aa7e0(uVar8,*(undefined8 *)puVar3);
    local_44 = param_2 + 1;
    uVar8 = thunk_FUN_01f113fc(*(undefined8 *)puVar2,&local_44);
    uVar6 = FUN_0340f2f0(*(undefined8 *)puVar4,uVar8,uVar6,0);
    if (lVar7 != 0) {
      FUN_03e78360(lVar7,uVar6,1,0);
      lVar7 = FUN_03e74dd8(lVar7,0);
      if ((*(long *)(param_1 + 0x20) != 0) &&
         (uVar6 = FUN_04070398(*(long *)(param_1 + 0x20),0), lVar7 != 0)) {
        FUN_0407dcf4(lVar7,uVar6,0,0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


