/*
FUNCTION_NAME: FUN_0234caf8
ENTRY_POINT: 0234caf8
PROGRAM: Lovesick-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


long FUN_0234caf8(long param_1)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  int iVar10;
  undefined8 local_68;
  
  if ((DAT_03781d20 & 1) == 0) {
    thunk_FUN_00d48444(StringLiteral_3715);
    thunk_FUN_00d48444(Method_Autohand_Demo_HandEventDebugger_<OnDisable>b__3_4__);
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vmaxnmv_f32__);
    thunk_FUN_00d48444(Method_TMPro_TMP_Dropdown_SetAlpha__);
    thunk_FUN_00d48444(OVRManager_XrApi_TypeInfo);
    thunk_FUN_00d48444(PTR_DAT_033ee588);
    thunk_FUN_00d48444(StringLiteral_11214);
    thunk_FUN_00d48444(PTR_DAT_033ef0a8);
    thunk_FUN_00d48444(
                      Method_Oculus_Interaction_InteractableRegistry_InteractableSet<GrabInteractor,_GrabInteractable>_GetEnumerator__
                      );
    thunk_FUN_00d48444(Meta_XR_MRUtilityKit_SerializationHelpers_TypeInfo);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_Dictionary<GameObject,_MB3_MeshCombinerSingle_MB_DynamicGameObject>_Clear__
                      );
    DAT_03781d20 = 1;
  }
  puVar3 = 
  Method_System_Collections_Generic_Dictionary<GameObject,_MB3_MeshCombinerSingle_MB_DynamicGameObject>_Clear__
  ;
  if (param_1 != 0) {
    iVar2 = *(int *)(param_1 + 0x18);
    uVar5 = FUN_0233b110(param_1,0,0);
    lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
    if (lVar6 != 0) {
      FUN_01320e50(lVar6,*(undefined8 *)StringLiteral_11214);
      puVar4 = 
      Method_Oculus_Interaction_InteractableRegistry_InteractableSet<GrabInteractor,_GrabInteractable>_GetEnumerator__
      ;
      puVar3 = OVRManager_XrApi_TypeInfo;
      if (0 < iVar2) {
        iVar10 = 1;
        do {
          lVar7 = thunk_FUN_00d62348(*(undefined8 *)
                                      Meta_XR_MRUtilityKit_SerializationHelpers_TypeInfo);
          if (lVar7 == 0) goto LAB_0234cd78;
          FUN_01320e50(lVar7,*(undefined8 *)PTR_DAT_033ee588);
          FUN_0132138c(param_1,iVar10 + -1,&local_68,*(undefined8 *)puVar4);
          FUN_00ca0af8(lVar7,local_68,*(undefined8 *)puVar3);
          FUN_00ca0af8(lVar7,uVar5,*(undefined8 *)puVar3);
          iVar1 = 0;
          if (iVar10 != iVar2) {
            iVar1 = iVar10;
          }
          FUN_0132138c(param_1,iVar1,&local_68,*(undefined8 *)puVar4);
          FUN_00ca0af8(lVar7,local_68,*(undefined8 *)puVar3);
          lVar8 = thunk_FUN_00d62348(*(undefined8 *)StringLiteral_3715);
          if (lVar8 == 0) goto LAB_0234cd78;
          FUN_022fb2d8(lVar8,0);
          *(long *)(lVar8 + 0x18) = lVar7;
          lVar7 = FUN_00da4fb8(*(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vmaxnmv_f32__,3
                              );
          if (lVar7 == 0) goto LAB_0234cd78;
          if (*(uint *)(lVar7 + 0x18) < 2) {
LAB_0234cd7c:
                    /* WARNING: Subroutine does not return */
            FUN_00da5194();
          }
          *(undefined4 *)(lVar7 + 0x24) = 1;
          if (*(uint *)(lVar7 + 0x18) == 2) goto LAB_0234cd7c;
          *(undefined4 *)(lVar7 + 0x28) = 2;
          lVar9 = thunk_FUN_00d62348(*(undefined8 *)
                                      Method_Autohand_Demo_HandEventDebugger_<OnDisable>b__3_4__);
          if (lVar9 == 0) goto LAB_0234cd78;
          FUN_022f9708(lVar9,lVar7,0);
          *(long *)(lVar8 + 0x10) = lVar9;
          FUN_00ca11d0(lVar6,lVar8,*(undefined8 *)Method_TMPro_TMP_Dropdown_SetAlpha__);
          iVar10 = iVar10 + 1;
        } while (iVar10 - iVar2 != 1);
      }
      return lVar6;
    }
  }
LAB_0234cd78:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


