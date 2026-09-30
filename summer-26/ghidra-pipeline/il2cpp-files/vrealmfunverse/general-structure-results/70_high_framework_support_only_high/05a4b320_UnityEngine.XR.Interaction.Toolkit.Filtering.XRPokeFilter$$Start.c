/*
FUNCTION_NAME: UnityEngine.XR.Interaction.Toolkit.Filtering.XRPokeFilter$$Start
ENTRY_POINT: 05a4b320
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 77
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: permission_setup
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;frame_behavior
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_5;validity_or_gating_hits_20;strong_pose_or_ray_construction_hits_2;frame_or_lifecycle_behavior;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_permission_setup
*/


void UnityEngine_XR_Interaction_Toolkit_Filtering_XRPokeFilter__Start(long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined4 uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  long *plVar8;
  int unaff_w22;
  long *plVar9;
  int iVar10;
  long unaff_x23;
  undefined4 unaff_w24;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  undefined8 *unaff_x27;
  undefined8 *unaff_x28;
  undefined8 *unaff_x29;
  
  while (param_1 != 0) {
                    /* try { // try from 05a4b328 to 05b4b32b has its CatchHandler @ 05a4b4fc */
    FUN_045cf440(param_1,unaff_w24,unaff_w22,*unaff_x28);
    do {
      if (*unaff_x20 == 0) goto LAB_05a4b5a8;
                    /* try { // try from 05a4b344 to 05b4b347 has its CatchHandler @ 05a4b55c */
      uVar4 = FUN_045e12ac(*unaff_x20,unaff_w24,*unaff_x26);
      if ((uVar4 & 1) == 0) {
        if (*unaff_x20 == 0) goto LAB_05a4b5a8;
                    /* try { // try from 05a4b360 to 05b4b37f has its CatchHandler @ 05a4b528 */
        FUN_045e10b8(*unaff_x20,unaff_w24,unaff_x23,
                     *(undefined8 *)
                      Method_Meta_XR_ImmersiveDebugger_UserInterface_Console_OnConsoleLineClicked__)
        ;
      }
      lVar5 = *(long *)(unaff_x19 + 0xc0);
      unaff_w22 = unaff_w22 + 1;
      if (lVar5 == 0) goto LAB_05a4b5a8;
      if (*(int *)(lVar5 + 0x18) <= unaff_w22) {
        plVar8 = (long *)(unaff_x19 + 0x98);
        if (*plVar8 == 0) {
          lVar5 = thunk_FUN_02b79644(*(undefined8 *)System_Reflection_SignaturePointerType_TypeInfo)
          ;
          FUN_0444dc30(lVar5,*(undefined8 *)System_Reflection_SignatureType_TypeInfo);
          *plVar8 = lVar5;
          thunk_FUN_02bb0e9c(plVar8,lVar5);
        }
        else {
                    /* try { // try from 05a4b38c to 05b4b393 has its CatchHandler @ 05a4b4f8 */
          FUN_0444eb38(*plVar8,*(undefined8 *)
                                Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__
                      );
        }
        puVar2 = Method_UnityEngine_Rendering_ConstantBuffer_Set<Hammersley_Hammersley2dSeq16>__;
                    /* try { // try from 05a4b3d8 to 05b4b413 has its CatchHandler @ 05a4b55c */
        plVar9 = (long *)(unaff_x19 + 0xb8);
        if (*plVar9 == 0) {
          lVar5 = thunk_FUN_02b79644(*(undefined8 *)
                                      Method_UnityEngine_Rendering_ConstantBuffer_Set<Hammersley_Hammersley2dSeq32>__
                                    );
                    /* try { // try from 05a4b414 to 05b4b4a7 has its CatchHandler @ 05a4af4c */
          FUN_045e0318(lVar5,*(undefined8 *)
                              Method_UnityEngine_Rendering_ConstantBuffer_Set<STP_StpConstantBufferData>__
                      );
          *plVar9 = lVar5;
          thunk_FUN_02bb0e9c(plVar9,lVar5);
        }
        else {
          FUN_045e1240(*plVar9,*(undefined8 *)Method_System_Console_SetOut__);
        }
        lVar5 = *(long *)(unaff_x19 + 0xb0);
        if (lVar5 == 0) goto LAB_05a4b5a8;
        iVar10 = 0;
        goto LAB_05a4b43c;
      }
      unaff_x23 = FUN_037a6268(lVar5,unaff_w22,*unaff_x25);
      if (unaff_x23 == 0) goto LAB_05a4b5a8;
      unaff_w24 = FUN_05d3dd8c(unaff_x23,0);
      if (*unaff_x21 == 0) goto LAB_05a4b5a8;
      uVar4 = FUN_045cf62c(*unaff_x21,unaff_w24,*unaff_x29);
    } while ((uVar4 & 1) != 0);
    param_1 = *unaff_x21;
  }
  goto LAB_05a4b5a8;
LAB_05a4b43c:
  do {
    if (*(int *)(lVar5 + 0x18) <= iVar10) {
      *(undefined1 *)(unaff_x19 + 0xe0) = 0;
      return;
    }
    lVar5 = FUN_037a6268(lVar5,iVar10,*unaff_x27);
    if (lVar5 != 0) {
      if (*unaff_x20 == 0) break;
      uVar3 = *(undefined4 *)(lVar5 + 0x28);
      uVar4 = FUN_045e12ac(*unaff_x20,uVar3,*unaff_x26);
      if ((uVar4 & 1) != 0) {
        if (*unaff_x20 == 0) break;
        uVar6 = FUN_045e1018(*unaff_x20,uVar3,*(undefined8 *)puVar2);
        *(undefined8 *)(lVar5 + 0x20) = uVar6;
        thunk_FUN_02bb0e9c();
        *(long *)(lVar5 + 0x18) = unaff_x19;
                    /* try { // try from 05a4b4a8 to 05b4b4ab has its CatchHandler @ 05a4b544 */
        thunk_FUN_02bb0e9c();
                    /* try { // try from 05a4b4ac to 05b4b4b3 has its CatchHandler @ 05a4af4c */
                    /* try { // try from 05a4b4b4 to 05b4b4b7 has its CatchHandler @ 05a4b558 */
                    /* try { // try from 05a4b4b8 to 05b4b4bb has its CatchHandler @ 05a4b554 */
                    /* try { // try from 05a4b4bc to 05b4b4bf has its CatchHandler @ 05a4b540 */
                    /* try { // try from 05a4b4c0 to 05b4b4c3 has its CatchHandler @ 05a4b550 */
        if ((*(long *)(unaff_x19 + 0xb0) == 0) ||
           (lVar7 = FUN_037a6268(*(long *)(unaff_x19 + 0xb0),iVar10,*unaff_x27), lVar7 == 0)) break;
                    /* try { // try from 05a4b4c4 to 05b4b4c7 has its CatchHandler @ 05a4b53c */
                    /* try { // try from 05a4b4c8 to 05b4b4cb has its CatchHandler @ 05a4b538 */
                    /* try { // try from 05a4b4cc to 05b4b4cf has its CatchHandler @ 05a4b55c */
                    /* try { // try from 05a4b4d0 to 05b4b4d3 has its CatchHandler @ 05a4b524 */
        uVar6 = *(undefined8 *)(lVar7 + 0x30);
                    /* try { // try from 05a4b4d4 to 05b4b4d7 has its CatchHandler @ 05a4b520 */
                    /* try { // try from 05a4b4d8 to 05b4b4db has its CatchHandler @ 05a4b51c */
                    /* try { // try from 05a4b4dc to 05b4b4df has its CatchHandler @ 05a4b518 */
        if (*(int *)(*(long *)Method_System_Security_CodeAccessPermission_CheckPermissionState__ +
                    0xe4) == 0) {
                    /* try { // try from 05a4b4e0 to 05b4b4e3 has its CatchHandler @ 05a4b510 */
          thunk_FUN_02b9ad44();
        }
                    /* try { // try from 05a4b4e4 to 05b4b4e7 has its CatchHandler @ 05a4b50c */
                    /* try { // try from 05a4b4e8 to 05b4b4eb has its CatchHandler @ 05a4b508 */
                    /* try { // try from 05a4b4ec to 05b4b4ef has its CatchHandler @ 05a4b54c */
        uVar3 = FUN_05a551f0(uVar6,0);
                    /* try { // try from 05a4b4f0 to 05b4b4f3 has its CatchHandler @ 05a4b548 */
                    /* catch() { ... } // from try @ 05a4b208 with catch @ 05a4b4f4
                       try { // try from 05a4b4f4 to 05b4b577 has its CatchHandler @ 05a4af4c */
        if (*plVar8 == 0) break;
                    /* catch() { ... } // from try @ 05a4b38c with catch @ 05a4b4f8 */
                    /* catch() { ... } // from try @ 05a4b328 with catch @ 05a4b4fc */
                    /* catch() { ... } // from try @ 05a4b274 with catch @ 05a4b500 */
                    /* catch() { ... } // from try @ 05a4b218 with catch @ 05a4b504 */
                    /* catch() { ... } // from try @ 05a4b4e8 with catch @ 05a4b508 */
                    /* catch() { ... } // from try @ 05a4b4e4 with catch @ 05a4b50c */
                    /* catch() { ... } // from try @ 05a4b4e0 with catch @ 05a4b510 */
        uVar4 = FUN_0444eba4(*plVar8,uVar3,
                             *(undefined8 *)
                              Method_UnityEngine_XR_Interaction_Toolkit_Inputs_Readers_XRInputDeviceValueReader<bool>_ReadBoolValue__
                            );
                    /* catch() { ... } // from try @ 05a4b18c with catch @ 05a4b514 */
        if ((uVar4 & 1) == 0) {
                    /* catch() { ... } // from try @ 05a4b4dc with catch @ 05a4b518 */
                    /* catch() { ... } // from try @ 05a4b4d8 with catch @ 05a4b51c */
          if (*plVar8 == 0) break;
                    /* catch() { ... } // from try @ 05a4b4d4 with catch @ 05a4b520 */
                    /* catch() { ... } // from try @ 05a4b4d0 with catch @ 05a4b524 */
                    /* catch() { ... } // from try @ 05a4b360 with catch @ 05a4b528 */
                    /* catch() { ... } // from try @ 05a4b1b4 with catch @ 05a4b52c */
                    /* catch() { ... } // from try @ 05a4b1f0 with catch @ 05a4b530 */
                    /* catch() { ... } // from try @ 05a4b154 with catch @ 05a4b534 */
          FUN_0444e9b8(*plVar8,uVar3,iVar10,*(undefined8 *)Pico_Platform_Models_SpeechError_TypeInfo
                      );
        }
                    /* catch() { ... } // from try @ 05a4b4c8 with catch @ 05a4b538 */
                    /* catch() { ... } // from try @ 05a4b4c4 with catch @ 05a4b53c */
                    /* catch() { ... } // from try @ 05a4b4bc with catch @ 05a4b540 */
                    /* catch() { ... } // from try @ 05a4b4a8 with catch @ 05a4b544 */
                    /* catch() { ... } // from try @ 05a4b2bc with catch @ 05a4b548
                       catch() { ... } // from try @ 05a4b300 with catch @ 05a4b548
                       catch() { ... } // from try @ 05a4b4f0 with catch @ 05a4b548 */
                    /* catch() { ... } // from try @ 05a4b260 with catch @ 05a4b54c
                       catch() { ... } // from try @ 05a4b2dc with catch @ 05a4b54c
                       catch() { ... } // from try @ 05a4b4ec with catch @ 05a4b54c */
        if ((*(long *)(unaff_x19 + 0xb0) == 0) ||
           (lVar7 = FUN_037a6268(*(long *)(unaff_x19 + 0xb0),iVar10,*unaff_x27), lVar7 == 0)) break;
                    /* catch() { ... } // from try @ 05a4b12c with catch @ 05a4b550
                       catch() { ... } // from try @ 05a4b4c0 with catch @ 05a4b550 */
        iVar1 = *(int *)(lVar7 + 0x14);
                    /* catch() { ... } // from try @ 05a4b10c with catch @ 05a4b554
                       catch() { ... } // from try @ 05a4b4b8 with catch @ 05a4b554 */
                    /* catch() { ... } // from try @ 05a4b0d0 with catch @ 05a4b558
                       catch() { ... } // from try @ 05a4b4b4 with catch @ 05a4b558 */
        if (iVar1 != 0xfffe) {
                    /* catch() { ... } // from try @ 05a4b1ec with catch @ 05a4b55c
                       catch() { ... } // from try @ 05a4b344 with catch @ 05a4b55c
                       catch() { ... } // from try @ 05a4b3d8 with catch @ 05a4b55c
                       catch() { ... } // from try @ 05a4b4cc with catch @ 05a4b55c */
          if (*plVar9 == 0) break;
          uVar4 = FUN_045e12ac(*plVar9,iVar1,
                               *(undefined8 *)
                                Method_Meta_XR_ImmersiveDebugger_Utils_ConsoleLogsCache_EnqueueLogEntry__
                              );
          if ((uVar4 & 1) == 0) {
            if (*plVar9 == 0) break;
            FUN_045e10b8(*plVar9,iVar1,lVar5,
                         *(undefined8 *)
                          Method_Meta_XR_ImmersiveDebugger_UserInterface_Console_RegisterControl__);
          }
        }
      }
    }
    lVar5 = *(long *)(unaff_x19 + 0xb0);
    iVar10 = iVar10 + 1;
  } while (lVar5 != 0);
LAB_05a4b5a8:
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


