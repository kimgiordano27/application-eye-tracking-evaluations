/*
FUNCTION_NAME: FUN_016971b4
ENTRY_POINT: 016971b4
PROGRAM: Lovesick-libil2cpp.so
SCORE: 72
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_21;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_1
*/


void FUN_016971b4(long param_1,int param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  long lVar7;
  long lVar8;
  undefined4 local_38;
  undefined4 local_34;
  
                    /* try { // try from 016971b4 to 017971b7 has its CatchHandler @ 01697244 */
                    /* try { // try from 016971bc to 017971bf has its CatchHandler @ 01697240 */
                    /* try { // try from 016971c4 to 017971c7 has its CatchHandler @ 0169723c */
                    /* try { // try from 016971cc to 017971cf has its CatchHandler @ 01697238 */
                    /* try { // try from 016971d4 to 017971d7 has its CatchHandler @ 01697234 */
  if ((DAT_0377853a & 1) == 0) {
                    /* try { // try from 016971dc to 017971df has its CatchHandler @ 01697230 */
    thunk_FUN_00d48444(
                      Method_Oculus_Interaction_InteractableUnityEventWrapper_HandleInteractorViewAdded__
                      );
                    /* try { // try from 016971e4 to 017971e7 has its CatchHandler @ 0169722c */
                    /* try { // try from 016971ec to 017971ef has its CatchHandler @ 01697228 */
    thunk_FUN_00d48444(StringLiteral_2009);
                    /* try { // try from 016971f4 to 017971f7 has its CatchHandler @ 01697224 */
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_List<ProbeVolumeSceneData_SerializablePVBakeSettings>_Add__
                      );
                    /* try { // try from 016971fc to 01797203 has its CatchHandler @ 01697220 */
    thunk_FUN_00d48444(
                      Method_UnityEngine_UIElements_ObjectPool<VisualElementFocusChangeTarget>_Release__
                      );
                    /* try { // try from 01697208 to 0179720b has its CatchHandler @ 0169721c */
                    /* try { // try from 01697210 to 01797213 has its CatchHandler @ 01697218 */
    thunk_FUN_00d48444(System_Collections_Generic_List<GetAvailableProfilerStats_StatInfo>_TypeInfo)
    ;
                    /* try { // try from 01697214 to 0179734f has its CatchHandler @ 016963ac */
                    /* catch() { ... } // from try @ 01697210 with catch @ 01697218 */
                    /* catch() { ... } // from try @ 01697208 with catch @ 0169721c */
    thunk_FUN_00d48444(OVR_OpenVR_IVRSpatialAnchors_TypeInfo);
                    /* catch() { ... } // from try @ 016971fc with catch @ 01697220 */
                    /* catch() { ... } // from try @ 016971f4 with catch @ 01697224 */
    DAT_0377853a = 1;
  }
                    /* catch() { ... } // from try @ 016971ec with catch @ 01697228 */
  lVar8 = *(long *)(param_1 + 0x90);
                    /* catch() { ... } // from try @ 016971e4 with catch @ 0169722c */
  if (lVar8 == 0) {
                    /* catch() { ... } // from try @ 016971dc with catch @ 01697230 */
                    /* catch() { ... } // from try @ 016971d4 with catch @ 01697234 */
                    /* catch() { ... } // from try @ 016971cc with catch @ 01697238 */
                    /* catch() { ... } // from try @ 016971c4 with catch @ 0169723c */
    lVar8 = thunk_FUN_00d62348(*(undefined8 *)StringLiteral_2009);
                    /* catch() { ... } // from try @ 016971bc with catch @ 01697240 */
    if (lVar8 == 0) goto LAB_01697548;
                    /* catch() { ... } // from try @ 016971b4 with catch @ 01697244 */
                    /* catch() { ... } // from try @ 016970f0 with catch @ 0169724c */
    FUN_017b46ec(lVar8,0);
    *(long *)(param_1 + 0x90) = lVar8;
  }
                    /* catch() { ... } // from try @ 01696fd4 with catch @ 01697258 */
  if (param_2 == 6) {
                    /* catch() { ... } // from try @ 01696ff0 with catch @ 0169725c */
                    /* catch() { ... } // from try @ 01696fe0 with catch @ 01697260 */
                    /* catch() { ... } // from try @ 01696f34 with catch @ 01697264 */
                    /* catch() { ... } // from try @ 0169695c with catch @ 01697268 */
                    /* catch() { ... } // from try @ 016969c0 with catch @ 0169726c */
                    /* catch() { ... } // from try @ 01696a04 with catch @ 01697270 */
    if ((lVar8 == 0) || (FUN_01688390(lVar8,param_1), *(long *)(param_1 + 0x90) == 0))
    goto LAB_01697548;
  }
  else {
                    /* catch() { ... } // from try @ 01696f5c with catch @ 01697278 */
    lVar8 = *(long *)(param_1 + 0x98);
                    /* catch() { ... } // from try @ 01696f4c with catch @ 0169727c */
    if (lVar8 == 0) {
                    /* catch() { ... } // from try @ 01696d44 with catch @ 01697280 */
                    /* catch() { ... } // from try @ 01696ecc with catch @ 01697284 */
                    /* catch() { ... } // from try @ 01696e88 with catch @ 01697288 */
                    /* catch() { ... } // from try @ 01696c04 with catch @ 0169728c */
      lVar8 = thunk_FUN_00d62348(*(undefined8 *)
                                  Method_Oculus_Interaction_InteractableUnityEventWrapper_HandleInteractorViewAdded__
                                );
                    /* catch() { ... } // from try @ 01696bd0 with catch @ 01697290 */
      if (lVar8 == 0) goto LAB_01697548;
                    /* catch() { ... } // from try @ 01696c90 with catch @ 01697294 */
                    /* catch() { ... } // from try @ 01696d20 with catch @ 01697298 */
                    /* catch() { ... } // from try @ 01696928 with catch @ 0169729c */
      FUN_017b46ec(lVar8,0);
                    /* catch() { ... } // from try @ 0169698c with catch @ 016972a0 */
      *(long *)(param_1 + 0x98) = lVar8;
    }
                    /* catch() { ... } // from try @ 01696a3c with catch @ 016972a8 */
                    /* catch() { ... } // from try @ 01696f38 with catch @ 016972ac */
    FUN_016883f8(lVar8,param_1);
                    /* catch() { ... } // from try @ 01696a14 with catch @ 016972b0 */
                    /* catch() { ... } // from try @ 01696e00 with catch @ 016972b4 */
                    /* catch() { ... } // from try @ 01696da8 with catch @ 016972b8 */
                    /* catch() { ... } // from try @ 01696ddc with catch @ 016972bc */
    if ((*(long *)(param_1 + 0x98) == 0) || (*(long *)(param_1 + 0x10) == 0)) goto LAB_01697548;
                    /* catch() { ... } // from try @ 01696e1c with catch @ 016972c0 */
                    /* catch() { ... } // from try @ 01696b30 with catch @ 016972c4 */
    lVar8 = *(long *)(param_1 + 0x90);
                    /* catch() { ... } // from try @ 01696b44 with catch @ 016972c8 */
    plVar4 = (long *)FUN_01691dc0(*(long *)(param_1 + 0x10),
                                  *(undefined4 *)(*(long *)(param_1 + 0x98) + 0x14));
                    /* catch() { ... } // from try @ 01696b64 with catch @ 016972cc */
    if (lVar8 == 0) goto LAB_01697548;
                    /* catch() { ... } // from try @ 01696b78 with catch @ 016972d0 */
    if (plVar4 == (long *)0x0) {
      plVar4 = (long *)0x0;
    }
    else {
                    /* catch() { ... } // from try @ 01696c6c with catch @ 016972d4 */
                    /* catch() { ... } // from try @ 01696f08 with catch @ 016972d8 */
                    /* catch() { ... } // from try @ 016970c4 with catch @ 016972dc */
                    /* catch() { ... } // from try @ 01696a4c with catch @ 016972e0 */
                    /* catch() { ... } // from try @ 01696acc with catch @ 016972e4 */
      if (*plVar4 !=
          *(long *)System_Collections_Generic_List<GetAvailableProfilerStats_StatInfo>_TypeInfo) {
        plVar4 = (long *)0x0;
      }
    }
    *(long **)(lVar8 + 0x18) = plVar4;
    lVar8 = *(long *)(param_1 + 0x90);
    if (lVar8 == 0) goto LAB_01697548;
    if (*(long *)(lVar8 + 0x18) == 0) {
      uVar3 = thunk_FUN_00d48444(StringLiteral_3033);
      uVar3 = FUN_00da4fb8(uVar3,2);
      FUN_00ac2be8();
      puVar1 = Method_BarCrowd_<ResetLineCoroutine>d__10_System_Collections_IEnumerator_Reset__;
      uVar5 = thunk_FUN_00d48444(
                                Method_BarCrowd_<ResetLineCoroutine>d__10_System_Collections_IEnumerator_Reset__
                                );
      FUN_00acb0b4(uVar3,uVar5);
      uVar5 = thunk_FUN_00d48444(puVar1);
      FUN_00adb25c(uVar3,0,uVar5);
      lVar8 = *(long *)(param_1 + 0x98);
      FUN_00ac2be8(lVar8);
      local_34 = *(undefined4 *)(lVar8 + 0x14);
      uVar5 = thunk_FUN_00d48444(
                                Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__
                                );
      uVar5 = thunk_FUN_00d61fa0(uVar5,&local_34);
      FUN_00ac2be8(uVar3);
      FUN_00acb0b4(uVar3,uVar5);
      FUN_00adb25c(uVar3,1,uVar5);
      uVar5 = thunk_FUN_00d48444(StringLiteral_12627);
      goto LAB_01697684;
    }
    if (*(long *)(param_1 + 0x98) == 0) goto LAB_01697548;
    *(undefined4 *)(lVar8 + 0x10) = *(undefined4 *)(*(long *)(param_1 + 0x98) + 0x10);
  }
  lVar8 = FUN_01696818(param_1);
  if (lVar8 != 0) {
    FUN_01699724(lVar8,0);
    lVar8 = FUN_01696818(param_1);
    if (lVar8 != 0) {
      *(undefined4 *)(lVar8 + 0x10) = 2;
      lVar8 = FUN_01696818(param_1);
      if (((*(long *)(param_1 + 0x90) != 0) && (*(long *)(param_1 + 0x10) != 0)) &&
         (uVar3 = FUN_01693db8(*(long *)(param_1 + 0x10),
                               (long)*(int *)(*(long *)(param_1 + 0x90) + 0x10)), lVar8 != 0)) {
        *(undefined8 *)(lVar8 + 0x58) = uVar3;
        lVar8 = FUN_01696818(param_1);
        if (lVar8 != 0) {
          if (*(long *)(lVar8 + 0x58) == *(long *)(param_1 + 0x20)) {
            lVar8 = FUN_01696818(param_1);
            if (lVar8 == 0) goto LAB_01697548;
            *(undefined4 *)(lVar8 + 0x24) = 1;
          }
          lVar8 = FUN_01696818(param_1);
          if (lVar8 != 0) {
            *(undefined4 *)(lVar8 + 0x14) = 1;
            if (*(long *)(param_1 + 0x40) != 0) {
              plVar4 = (long *)FUN_016999c0(*(long *)(param_1 + 0x40),0);
              if ((plVar4 != (long *)0x0) &&
                 (*plVar4 !=
                  *(long *)
                   Method_UnityEngine_UIElements_ObjectPool<VisualElementFocusChangeTarget>_Release__
                 )) {
                    /* WARNING: Subroutine does not return */
                FUN_00da544c(plVar4);
              }
              lVar8 = FUN_01696818(param_1);
              if ((*(long *)(param_1 + 0x90) != 0) && (lVar8 != 0)) {
                *(undefined8 *)(lVar8 + 0x30) = *(undefined8 *)(*(long *)(param_1 + 0x90) + 0x18);
                lVar8 = FUN_01696818(param_1);
                puVar2 = 
                Method_System_Collections_Generic_List<ProbeVolumeSceneData_SerializablePVBakeSettings>_Add__
                ;
                puVar1 = OVR_OpenVR_IVRSpatialAnchors_TypeInfo;
                if (lVar8 != 0) {
                  *(undefined8 *)(lVar8 + 0x40) =
                       *(undefined8 *)OVR_OpenVR_IVRSpatialAnchors_TypeInfo;
                  lVar8 = FUN_01696818(param_1);
                  lVar7 = *(long *)puVar2;
                  if (*(int *)(lVar7 + 0xe0) == 0) {
                    thunk_FUN_00d32864(lVar7);
                  }
                  if (lVar8 != 0) {
                    *(undefined8 *)(lVar8 + 0x48) =
                         *(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x38);
                    lVar8 = FUN_01696818(param_1);
                    if (lVar8 != 0) {
                      *(undefined4 *)(lVar8 + 0x50) = 0;
                      lVar8 = FUN_01696818(param_1);
                      if ((*(long *)(param_1 + 0x90) != 0) && (lVar8 != 0)) {
                        *(undefined8 *)(lVar8 + 0x38) =
                             *(undefined8 *)(*(long *)(param_1 + 0x90) + 0x18);
                        lVar8 = FUN_01696818(param_1);
                        if (lVar8 != 0) {
                          if (plVar4 == (long *)0x0) {
                            *(undefined4 *)(lVar8 + 0x10) = 2;
                            lVar8 = FUN_01696818(param_1);
                            if (lVar8 == 0) goto LAB_01697548;
                            *(undefined8 *)(lVar8 + 0x28) = *(undefined8 *)puVar1;
                          }
                          else {
                            *(undefined4 *)(lVar8 + 0x10) = 3;
                            lVar8 = FUN_01696818(param_1);
                            if (lVar8 == 0) goto LAB_01697548;
                            *(undefined4 *)(lVar8 + 0x20) = 1;
                            if ((int)plVar4[6] == 2) {
                              lVar8 = FUN_01696818(param_1);
                              if (lVar8 == 0) goto LAB_01697548;
                              uVar6 = 3;
                            }
                            else {
                              if ((int)plVar4[6] != 1) {
                                uVar3 = thunk_FUN_00d48444(StringLiteral_3033);
                                uVar3 = FUN_00da4fb8(uVar3,1);
                                FUN_00ac2be8(plVar4);
                                local_38 = (undefined4)plVar4[6];
                                uVar5 = thunk_FUN_00d48444(
                                                  Method_TMPro_TMP_TextProcessingStack<Color32>_SetDefault__
                                                  );
                                uVar5 = thunk_FUN_00d61fa0(uVar5,&local_38);
                                uVar5 = FUN_017a7f78(uVar5,0);
                                FUN_00ac2be8(uVar3);
                                FUN_00acb0b4(uVar3,uVar5);
                                FUN_00adb25c(uVar3,0,uVar5);
                                uVar5 = thunk_FUN_00d48444(PTR_DAT_033ee728);
LAB_01697684:
                                uVar3 = FUN_017b63dc(uVar5,uVar3,0);
                                thunk_FUN_00d48444(
                                                  UnityEngine_XR_Interaction_Toolkit_Inputs_XRTransformStabilizer_CalculateRotationParams_00000D70_PostfixBurstDelegate_var
                                                  );
                                uVar5 = thunk_FUN_00d62348();
                                FUN_00ac2be8();
                                FUN_01679968(uVar5,uVar3,0);
                                uVar3 = thunk_FUN_00d48444(
                                                  UnityEngine_XR_Interaction_Toolkit_Utilities_Curves_CurveUtility_SampleQuadraticBezierPoint_000009FC_BurstDirectCall_TypeInfo
                                                  );
                    /* WARNING: Subroutine does not return */
                                FUN_00da5038(uVar5,uVar3);
                              }
                              lVar8 = FUN_01696818(param_1);
                              if (lVar8 == 0) goto LAB_01697548;
                              *(long *)(lVar8 + 0x28) = plVar4[5];
                              lVar8 = FUN_01696818(param_1);
                              if (lVar8 == 0) goto LAB_01697548;
                              uVar6 = 2;
                            }
                            *(undefined4 *)(lVar8 + 0x1c) = uVar6;
                          }
                          lVar8 = *(long *)(param_1 + 0x10);
                          uVar3 = FUN_01696818(param_1);
                          if (lVar8 != 0) {
                            FUN_01691df0(lVar8,uVar3);
                            return;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_01697548:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


