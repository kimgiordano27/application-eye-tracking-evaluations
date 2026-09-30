/*
FUNCTION_NAME: FUN_057dfb94
ENTRY_POINT: 057dfb94
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_057dfb94(long param_1,long *param_2,long param_3,byte param_4)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  puVar3 = Method_System_Runtime_CompilerServices_CallSite<Func<CallSite,_object,_object>>_Create__;
  if ((DAT_06bc0cbb & 1) == 0) {
    FUN_02f08768(Method_System_Collections_Generic_Dictionary<OVRGLTFInputNode,_int>_Add__);
    FUN_02f08768(
                Method_System_Collections_Generic_List_Enumerator<XRDeviceSimulator_SimulatedHandExpression>_get_Current__
                );
    FUN_02f08768(
                Method_System_Collections_Generic_List_Enumerator<XRInteractionGroup_GroupMemberAndOverridesPair>_Dispose__
                );
    FUN_02f08768(
                Method_System_Collections_Generic_Dictionary<Transform,_HashSetList<object>>_set_Item__
                );
    FUN_02f08768(
                Method_System_Runtime_CompilerServices_CallSite<Func<CallSite,_object,_object>>_Create__
                );
    FUN_02f08768(
                Method_System_Collections_Generic_List_Enumerator<XRInteractionGroup_GroupMemberAndOverridesPair>_MoveNext__
                );
    FUN_02f08768(Method_System_Collections_Generic_Dictionary<string,_PropertyDescriptor>_Add__);
    FUN_02f08768(
                UnityEngine_XR_Interaction_Toolkit_Interactables_XRGrabInteractable_StepSmoothingBurst_00000FD6_BurstDirectCall_TypeInfo
                );
    FUN_02f08768(
                Method_System_Collections_Generic_List_Enumerator<XRInteractionGroup_GroupMemberAndOverridesPair>_get_Current__
                );
    DAT_06bc0cbb = 1;
  }
  lVar4 = *(long *)puVar3;
  *(undefined4 *)(param_1 + 0x44) = 1;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  FUN_057d3a7c(param_1,0);
  if (param_2 == (long *)0x0) {
    *(long *)(param_1 + 0x60) = param_1;
    *(undefined8 *)(param_1 + 0x10) = 0;
LAB_057dfe88:
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  else {
    bVar1 = *(byte *)(*(long *)
                       Method_System_Collections_Generic_Dictionary<Transform,_HashSetList<object>>_set_Item__
                     + 0x130);
    if ((*(byte *)(*param_2 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar1 * 8 + -8) !=
        *(long *)
         Method_System_Collections_Generic_Dictionary<Transform,_HashSetList<object>>_set_Item__)) {
      *(long *)(param_1 + 0x60) = param_1;
      *(long **)(param_1 + 0x10) = param_2;
    }
    else {
      param_2 = (long *)param_2[2];
      *(long *)(param_1 + 0x60) = param_1;
      *(long **)(param_1 + 0x10) = param_2;
      if (param_2 == (long *)0x0) goto LAB_057dfe88;
    }
    puVar2 = 
    UnityEngine_XR_Interaction_Toolkit_Interactables_XRGrabInteractable_StepSmoothingBurst_00000FD6_BurstDirectCall_TypeInfo
    ;
    bVar1 = *(byte *)(*(long *)
                       Method_System_Collections_Generic_Dictionary<string,_PropertyDescriptor>_Add__
                     + 0x130);
    if ((bVar1 <= *(byte *)(*param_2 + 0x130)) &&
       (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar1 * 8 + -8) ==
        *(long *)Method_System_Collections_Generic_Dictionary<string,_PropertyDescriptor>_Add__)) {
      *(long **)(param_1 + 0x18) = param_2;
      plVar5 = param_2;
LAB_057dfd1c:
      puVar2 = Method_System_Collections_Generic_Dictionary<OVRGLTFInputNode,_int>_Add__;
      FUN_057ce3a8(plVar5,1,0);
      uVar6 = thunk_FUN_02f45174(param_2,*(undefined8 *)puVar2);
      uVar8 = *(undefined8 *)puVar2;
      *(undefined8 *)(param_1 + 0x20) = uVar6;
      thunk_FUN_02f45174(param_2,uVar8);
      plVar5 = *(long **)(param_1 + 0x10);
      *(byte *)(param_1 + 0x40) = param_4 & 1;
      puVar2 = 
      Method_System_Collections_Generic_List_Enumerator<XRInteractionGroup_GroupMemberAndOverridesPair>_MoveNext__
      ;
      if (plVar5 != (long *)0x0) {
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          thunk_FUN_02f6670c();
        }
        uVar6 = (**(code **)(*plVar5 + 0x4a8))(plVar5,*(undefined8 *)(*plVar5 + 0x4b0));
        lVar4 = thunk_FUN_02f45270(*(undefined8 *)puVar2);
        FUN_0576ca90(lVar4,uVar6,0);
        *(long *)(param_1 + 0x38) = lVar4;
        uVar6 = FUN_057dfef0(param_1);
        puVar3 = 
        Method_System_Collections_Generic_List_Enumerator<XRInteractionGroup_GroupMemberAndOverridesPair>_Dispose__
        ;
        if (lVar4 != 0) {
          *(undefined8 *)(lVar4 + 0x40) = uVar6;
          lVar4 = thunk_FUN_02f45270(*(undefined8 *)puVar3);
          FUN_05116b38(lVar4,0);
          *(long *)(lVar4 + 0x10) = param_1;
          *(long *)(param_1 + 0x48) = lVar4;
          if (param_3 != 0) {
            FUN_057dffec(lVar4,param_3);
          }
          puVar3 = 
          Method_System_Collections_Generic_List_Enumerator<XRInteractionGroup_GroupMemberAndOverridesPair>_get_Current__
          ;
          lVar4 = *(long *)(param_1 + 0x18);
          if (lVar4 != 0) {
            uVar6 = *(undefined8 *)
                     Method_System_Collections_Generic_List_Enumerator<XRDeviceSimulator_SimulatedHandExpression>_get_Current__
            ;
            *(undefined8 *)(lVar4 + 0x1d0) = *(undefined8 *)(param_1 + 0x48);
            uVar6 = thunk_FUN_02f45270(uVar6);
            FUN_057d71d4(uVar6,param_1,*(undefined8 *)puVar3,0);
            *(undefined8 *)(lVar4 + 0x1d8) = uVar6;
            *(undefined4 *)(param_1 + 0x28) = 2;
            FUN_057e006c(param_1,2);
            return;
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    *(long *)(param_1 + 0x18) = 0;
    bVar1 = *(byte *)(*(long *)puVar2 + 0x130);
    if ((bVar1 <= *(byte *)(*param_2 + 0x130)) &&
       (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)puVar2)) {
      plVar5 = (long *)param_2[2];
      *(long *)(param_1 + 0x18) = (long)plVar5;
      if (plVar5 != (long *)0x0) goto LAB_057dfd1c;
    }
  }
  uVar6 = thunk_FUN_02f6ef30(
                            Method_System_Collections_Generic_List_Enumerator<OVRPlugin_Qpl_Annotation_Builder_Entry>_Dispose__
                            );
  uVar6 = FUN_0581abc0(uVar6,0);
  thunk_FUN_02f6ef30(PTR_DAT_067c99e8);
  uVar8 = thunk_FUN_02f45270();
  uVar7 = thunk_FUN_02f6ef30(PTR_DAT_067de368);
  FUN_0504ee88(uVar8,uVar6,uVar7,0);
  uVar6 = thunk_FUN_02f6ef30(
                            Method_System_Collections_Generic_List_Enumerator<OVRPlugin_Qpl_Annotation_Builder_Entry>_MoveNext__
                            );
                    /* WARNING: Subroutine does not return */
  FUN_02f0888c(uVar8,uVar6);
}


