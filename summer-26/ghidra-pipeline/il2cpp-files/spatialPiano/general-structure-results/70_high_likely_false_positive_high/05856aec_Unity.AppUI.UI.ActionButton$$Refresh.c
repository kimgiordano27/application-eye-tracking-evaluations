/*
FUNCTION_NAME: Unity.AppUI.UI.ActionButton$$Refresh
ENTRY_POINT: 05856aec
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 89
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void Unity_AppUI_UI_ActionButton__Refresh(void)

{
  byte bVar1;
  byte bVar2;
  long *plVar3;
  long *plVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  long *unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  long unaff_x22;
  long unaff_x23;
  
  FUN_02f08768();
  FUN_02f08768(
              Method_Unity_Burst_FunctionPointer<XRFingerShapeMath_CalculateFullCurl_00000185_PostfixBurstDelegate>_get_Value__
              );
  FUN_02f08768(Method_System_Collections_Generic_List_Enumerator<IXRActivateInteractable>_MoveNext__
              );
  FUN_02f08768(
              Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<string,_SchemaNotation>_MoveNext__
              );
  FUN_02f08768(
              Method_System_Collections_Generic_List_Enumerator<IXRActivateInteractable>_get_Current__
              );
  FUN_02f08768(Method_System_Collections_Generic_List_Enumerator<IXRGrabTransformer>_Dispose__);
  FUN_02f08768(
              Method_UnityEngine_Rendering_DynamicArray<RenderGraphCompilationCache_HashEntry<RenderGraph_CompiledGraph>>_get_size__
              );
  FUN_02f08768(Method_System_Collections_Generic_List_Enumerator<IXRGrabTransformer>_MoveNext__);
  FUN_02f08768(
              Method_Unity_Burst_FunctionPointer<XRFingerShapeMath_CalculatePinch_00000189_PostfixBurstDelegate>_get_Value__
              );
  *(undefined1 *)(unaff_x23 + 0x10) = 1;
  if ((unaff_x20 != (long *)0x0) && (unaff_x20[2] != 0)) {
    if (*(int *)(unaff_x20[2] + 0x10) != 0) {
      if (unaff_x22 == 0) goto LAB_05856ecc;
      plVar3 = (long *)FUN_05772298();
      if (plVar3 == (long *)0x0) {
        FUN_05771d30();
        return;
      }
      if (plVar3 != unaff_x19) {
        if (unaff_x19 != (long *)0x0) {
          lVar7 = *unaff_x19;
          bVar1 = *(byte *)(lVar7 + 0x130);
          bVar2 = *(byte *)(*(long *)
                             Method_UnityEngine_UIElements_BaseField<RectInt>_get_visualInput__ +
                           0x130);
          if ((bVar1 < bVar2) ||
             (*(long *)(*(long *)(lVar7 + 200) + (ulong)bVar2 * 8 + -8) !=
              *(long *)Method_UnityEngine_UIElements_BaseField<RectInt>_get_visualInput__)) {
                    /* try { // try from 05856bd4 to 05956bdf has its CatchHandler @ 05856c3c */
                    /* try { // try from 05856be0 to 05956c53 has its CatchHandler @ 05856928 */
            bVar2 = *(byte *)(*(long *)
                               Method_UnityEngine_UIElements_BaseField<float>_add_viewDataRestored__
                             + 0x130);
            if ((bVar1 < bVar2) ||
               (*(long *)(*(long *)(lVar7 + 200) + (ulong)bVar2 * 8 + -8) !=
                *(long *)Method_UnityEngine_UIElements_BaseField<float>_add_viewDataRestored__)) {
              bVar2 = *(byte *)(*(long *)
                                 Method_UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_Receiver_BaseAffordanceStateReceiver<Color>_GetCurrentValueForCapture__
                               + 0x130);
              if ((bVar1 < bVar2) ||
                 (*(long *)(*(long *)(lVar7 + 200) + (ulong)bVar2 * 8 + -8) !=
                  *(long *)
                   Method_UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_Receiver_BaseAffordanceStateReceiver<Color>_GetCurrentValueForCapture__
                 )) {
                bVar2 = *(byte *)(*(long *)
                                   System_Linq_Expressions_Interpreter_CastInstruction_CastInstructionNoT_Ref_TypeInfo
                                 + 0x130);
                    /* catch(type#1 @ 06402238) { ... } // from try @ 05856bd4 with catch @ 05856c3c
                        */
                    /* try { // try from 05856c54 to 05956c6b has its CatchHandler @ 05856cf4 */
                if ((bVar1 < bVar2) ||
                   (*(long *)(*(long *)(lVar7 + 200) + (ulong)bVar2 * 8 + -8) !=
                    *(long *)
                     System_Linq_Expressions_Interpreter_CastInstruction_CastInstructionNoT_Ref_TypeInfo
                   )) {
                  bVar2 = *(byte *)(*(long *)
                                     Method_System_Collections_Generic_Dictionary<OVRAnchor_DeferredKey,_List<OVRAnchor_DeferredValue>>_Add__
                                   + 0x130);
                  if ((bVar1 < bVar2) ||
                     (*(long *)(*(long *)(lVar7 + 200) + (ulong)bVar2 * 8 + -8) !=
                      *(long *)
                       Method_System_Collections_Generic_Dictionary<OVRAnchor_DeferredKey,_List<OVRAnchor_DeferredValue>>_Add__
                     )) goto LAB_05856e98;
                  uVar6 = FUN_05857128(plVar3,plVar3);
                }
                else {
                  uVar6 = FUN_05856ffc(plVar3,plVar3);
                }
              }
              else {
                uVar6 = FUN_05856ffc(plVar3,plVar3);
              }
              if ((uVar6 & 1) != 0) {
                return;
              }
            }
            else {
              plVar4 = *(long **)(unaff_x21 + 0x10);
              if (plVar4 == (long *)0x0) goto LAB_05856ecc;
              uVar5 = (**(code **)(*plVar4 + 0x1a8))
                                (plVar4,unaff_x20[3],*(undefined8 *)(*plVar4 + 0x1b0));
              uVar6 = FUN_0580db00(uVar5,*(undefined8 *)(unaff_x21 + 0x38),0);
              if ((uVar6 & 1) != 0) {
                lVar7 = FUN_05725294(0);
                if ((lVar7 == 0) || (lVar7 = FUN_05769f38(lVar7,0), lVar7 == 0)) goto LAB_05856ecc;
                plVar4 = (long *)FUN_05772298();
                if (plVar3 == plVar4) goto LAB_05856e68;
                if (plVar4 == unaff_x19) {
                  return;
                }
              }
            }
          }
          else {
            plVar4 = *(long **)(unaff_x21 + 0x10);
            if (plVar4 == (long *)0x0) goto LAB_05856ecc;
            uVar5 = (**(code **)(*plVar4 + 0x1a8))
                              (plVar4,unaff_x20[3],*(undefined8 *)(*plVar4 + 0x1b0));
            uVar6 = FUN_0580db00(uVar5,*(undefined8 *)(unaff_x21 + 0x38),0);
            if ((uVar6 & 1) == 0) {
              uVar6 = FUN_05856ed0(uVar6,plVar3);
              if ((uVar6 & 1) != 0) {
                return;
              }
            }
            else {
              lVar7 = FUN_05725294(0);
              if ((lVar7 == 0) || (lVar7 = FUN_05769f9c(lVar7,0), lVar7 == 0)) goto LAB_05856ecc;
              plVar4 = (long *)FUN_05772298();
              if (plVar3 == plVar4) {
LAB_05856e68:
                FUN_05771e1c();
                return;
              }
              if (plVar4 == unaff_x19) {
                return;
              }
            }
          }
        }
LAB_05856e98:
        (**(code **)(*unaff_x20 + 0x168))();
        FUN_05857240();
        return;
      }
    }
    return;
  }
LAB_05856ecc:
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


