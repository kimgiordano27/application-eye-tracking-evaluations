/*
FUNCTION_NAME: FUN_02373bfc
ENTRY_POINT: 02373bfc
PROGRAM: Lovesick-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_10;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


long FUN_02373bfc(long param_1,long param_2,long param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined4 *puVar9;
  long lVar10;
  uint uVar11;
  undefined4 *puVar12;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 local_64;
  
  if ((DAT_03781daa & 1) == 0) {
    thunk_FUN_00d48444(Meta_WitAi_Configuration_WitEndpointConfig_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_3715);
    thunk_FUN_00d48444(Method_Autohand_Demo_HandEventDebugger_<OnDisable>b__3_4__);
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vmaxnmv_f32__);
    thunk_FUN_00d48444(StringLiteral_4747);
    thunk_FUN_00d48444(Method_TMPro_TMP_Dropdown_SetAlpha__);
    thunk_FUN_00d48444(OVRManager_XrApi_TypeInfo);
    thunk_FUN_00d48444(PTR_DAT_033f6e48);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_Dictionary<IGroupBoxOption,_IGroupManager>_set_Item__
                      );
    thunk_FUN_00d48444(PTR_DAT_033ee588);
    thunk_FUN_00d48444(
                      Method_Oculus_Interaction_InteractableRegistry_InteractableSet<GrabInteractor,_GrabInteractable>_GetEnumerator__
                      );
    thunk_FUN_00d48444(UnityEngine_InputSystem_UI_MultiplayerEventSystem_TypeInfo);
    thunk_FUN_00d48444(Meta_XR_MRUtilityKit_SerializationHelpers_TypeInfo);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_Dictionary<GameObject,_MB3_MeshCombinerSingle_MB_DynamicGameObject>_Clear__
                      );
    DAT_03781daa = 1;
  }
  if ((param_1 != 0) && (lVar10 = *(long *)(param_1 + 0x10), lVar10 != 0)) {
    iVar2 = *(int *)(lVar10 + 0x18);
    lVar5 = thunk_FUN_00d62348(*(undefined8 *)
                                Method_System_Collections_Generic_Dictionary<GameObject,_MB3_MeshCombinerSingle_MB_DynamicGameObject>_Clear__
                              );
    if (lVar5 != 0) {
      FUN_01320ebc(lVar5,iVar2 / 3,
                   *(undefined8 *)
                    Method_System_Collections_Generic_Dictionary<IGroupBoxOption,_IGroupManager>_set_Item__
                  );
      if (0 < iVar2) {
        uVar11 = 0;
        do {
          puVar4 = 
          Method_Oculus_Interaction_InteractableRegistry_InteractableSet<GrabInteractor,_GrabInteractable>_GetEnumerator__
          ;
          puVar3 = OVRManager_XrApi_TypeInfo;
          lVar6 = thunk_FUN_00d62348(*(undefined8 *)StringLiteral_3715);
          if (lVar6 == 0) goto LAB_02374038;
          FUN_022fb2d8(lVar6,0);
          lVar7 = thunk_FUN_00d62348(*(undefined8 *)
                                      Method_Autohand_Demo_HandEventDebugger_<OnDisable>b__3_4__);
          if (lVar7 == 0) goto LAB_02374038;
          FUN_022f9928(lVar7,param_1,0);
          *(long *)(lVar6 + 0x10) = lVar7;
          lVar8 = FUN_00da4fb8(*(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vmaxnmv_f32__,3
                              );
          if (lVar8 == 0) goto LAB_02374038;
          if (*(uint *)(lVar8 + 0x18) < 2) {
LAB_0237403c:
                    /* WARNING: Subroutine does not return */
            FUN_00da5194();
          }
          *(undefined4 *)(lVar8 + 0x24) = 1;
          if (*(uint *)(lVar8 + 0x18) == 2) goto LAB_0237403c;
          *(undefined4 *)(lVar8 + 0x28) = 2;
          FUN_022f8ff8(lVar7,lVar8,0);
          lVar7 = thunk_FUN_00d62348(*(undefined8 *)
                                      Meta_XR_MRUtilityKit_SerializationHelpers_TypeInfo);
          if (lVar7 == 0) goto LAB_02374038;
          FUN_01320e50(lVar7,*(undefined8 *)PTR_DAT_033ee588);
          if (*(uint *)(lVar10 + 0x18) <= uVar11) goto LAB_0237403c;
          if (param_2 == 0) goto LAB_02374038;
          puVar1 = (undefined4 *)(lVar10 + (long)(int)uVar11 * 4 + 0x20);
          FUN_0132138c(param_2,*puVar1,&local_70,*(undefined8 *)puVar4);
          FUN_00ca0af8(lVar7,CONCAT44(uStack_6c,local_70),*(undefined8 *)puVar3);
          if (*(uint *)(lVar10 + 0x18) <= uVar11 + 1) goto LAB_0237403c;
          puVar9 = (undefined4 *)(lVar10 + (long)(int)(uVar11 + 1) * 4 + 0x20);
          FUN_0132138c(param_2,*puVar9,&local_70,*(undefined8 *)puVar4);
          FUN_00ca0af8(lVar7,CONCAT44(uStack_6c,local_70),*(undefined8 *)puVar3);
          if (*(uint *)(lVar10 + 0x18) <= uVar11 + 2) goto LAB_0237403c;
          puVar12 = (undefined4 *)(lVar10 + (long)(int)(uVar11 + 2) * 4 + 0x20);
          FUN_0132138c(param_2,*puVar12,&local_70,*(undefined8 *)puVar4);
          FUN_00ca0af8(lVar7,CONCAT44(uStack_6c,local_70),*(undefined8 *)puVar3);
          *(long *)(lVar6 + 0x18) = lVar7;
          lVar7 = thunk_FUN_00d62348(*(undefined8 *)
                                      UnityEngine_InputSystem_UI_MultiplayerEventSystem_TypeInfo);
          if (lVar7 == 0) goto LAB_02374038;
          FUN_01320e50(lVar7,*(undefined8 *)PTR_DAT_033f6e48);
          puVar3 = Meta_WitAi_Configuration_WitEndpointConfig_TypeInfo;
          if (*(uint *)(lVar10 + 0x18) <= uVar11) goto LAB_0237403c;
          if (param_3 == 0) goto LAB_02374038;
          local_70 = *puVar1;
          FUN_01299bc0(param_3,&local_70,&local_64,
                       *(undefined8 *)Meta_WitAi_Configuration_WitEndpointConfig_TypeInfo);
          puVar4 = StringLiteral_4747;
          FUN_00ac20f0(lVar7,local_64,*(undefined8 *)StringLiteral_4747);
          if (*(uint *)(lVar10 + 0x18) <= uVar11 + 1) goto LAB_0237403c;
          local_70 = *puVar9;
          FUN_01299bc0(param_3,&local_70,&local_64,*(undefined8 *)puVar3);
          FUN_00ac20f0(lVar7,local_64,*(undefined8 *)puVar4);
          if (*(uint *)(lVar10 + 0x18) <= uVar11 + 2) goto LAB_0237403c;
          local_70 = *puVar12;
          FUN_01299bc0(param_3,&local_70,&local_64,*(undefined8 *)puVar3);
          FUN_00ac20f0(lVar7,local_64,*(undefined8 *)puVar4);
          *(long *)(lVar6 + 0x20) = lVar7;
          FUN_00ca11d0(lVar5,lVar6,*(undefined8 *)Method_TMPro_TMP_Dropdown_SetAlpha__);
          uVar11 = uVar11 + 3;
        } while ((int)uVar11 < iVar2);
      }
      return lVar5;
    }
  }
LAB_02374038:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


