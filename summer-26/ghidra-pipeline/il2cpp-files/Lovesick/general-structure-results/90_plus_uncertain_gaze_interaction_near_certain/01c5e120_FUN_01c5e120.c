/*
FUNCTION_NAME: FUN_01c5e120
ENTRY_POINT: 01c5e120
PROGRAM: Lovesick-libil2cpp.so
SCORE: 216
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ray_interaction;ui_interaction;frame_behavior;structure_combo;ordered_structure
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_12;strong_pose_or_ray_construction_hits_4;ray_or_cast_sink_hits_2;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;ordered_eye_source_validity_pose_interaction_sink;functionality_gaze_retrieval_or_extraction;functionality_gaze_interaction_hits_4
*/


undefined8 FUN_01c5e120(long *param_1,int param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  undefined8 uVar11;
  
  if ((DAT_0377eb50 & 1) == 0) {
    thunk_FUN_00d48444(System_Xml_XmlDeclaration_TypeInfo);
    thunk_FUN_00d48444(
                      Method_UnityEngine_Playables_PlayableExtensions_IsValid<ScriptPlayable<ActivationControlPlayable>>__
                      );
    thunk_FUN_00d48444(System_Runtime_Remoting_Channels_CrossAppDomainSink_TypeInfo);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<TimeZoneInfo_AdjustmentRule>_Add__);
    thunk_FUN_00d48444(
                      Method_UnityEngine_UIElements_StylePropertyAnimationSystem_GetOrCreate<StylePropertyAnimationSystem_ValuesTranslate>__
                      );
    thunk_FUN_00d48444(
                      Method_UnityEngine_InputSystem_Utilities_InlinedArray<InputAction>_AppendWithCapacity__
                      );
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<Collider>_Clear__);
    thunk_FUN_00d48444(Method_TMPro_TMP_TextProcessingStack<float>__ctor__);
    thunk_FUN_00d48444(Method_UnityEngine_UIElements_EventBase<ValidateCommandEvent>_TypeId__);
                    /* try { // try from 01c5e1b8 to 01d5e1bb has its CatchHandler @ 01c5e284 */
    thunk_FUN_00d48444(Method_UnityEngine_InputSystem_UI_VirtualMouseInput_OnAfterInputUpdate__);
    thunk_FUN_00d48444(StringLiteral_11827);
                    /* try { // try from 01c5e1d0 to 01d5e1d3 has its CatchHandler @ 01c5e280 */
                    /* try { // try from 01c5e1d4 to 01d5e1e7 has its CatchHandler @ 01c5e288 */
    thunk_FUN_00d48444(Method_OVRPlugin_<>c_<_cctor>b__796_69__);
    thunk_FUN_00d48444(TMPro_TMP_InputField_SubmitEvent_TypeInfo);
                    /* try { // try from 01c5e1e8 to 01d5e21f has its CatchHandler @ 01c5e01c */
    DAT_0377eb50 = 1;
  }
  puVar3 = Method_UnityEngine_InputSystem_UI_VirtualMouseInput_OnAfterInputUpdate__;
  if (5 < param_2) {
    return 0;
  }
  if (*(int *)(*(long *)Method_UnityEngine_InputSystem_UI_VirtualMouseInput_OnAfterInputUpdate__ +
              0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  uVar5 = FUN_01c55270(param_1);
  puVar2 = Method_TMPro_TMP_TextProcessingStack<float>__ctor__;
  if ((uVar5 & 1) == 0) {
    if (param_1 == (long *)0x0) goto LAB_01c5e704;
                    /* catch(type#1 @ 03274860) { ... } // from try @ 01c5e258 with catch @ 01c5e270
                        */
                    /* catch(type#1 @ 03274860) { ... } // from try @ 01c5e244 with catch @ 01c5e274
                        */
                    /* catch(type#1 @ 03274860) { ... } // from try @ 01c5e23c with catch @ 01c5e278
                        */
    uVar5 = FUN_0178be4c(param_1,0);
                    /* catch(type#1 @ 03274860) { ... } // from try @ 01c5e220 with catch @ 01c5e27c
                        */
                    /* catch(type#1 @ 03274860) { ... } // from try @ 01c5e1d0 with catch @ 01c5e280
                        */
    if ((uVar5 & 1) == 0) {
      return 0;
    }
    goto LAB_01c5e284;
  }
                    /* try { // try from 01c5e220 to 01d5e227 has its CatchHandler @ 01c5e27c */
  uVar11 = *(undefined8 *)
            Method_UnityEngine_InputSystem_Utilities_InlinedArray<InputAction>_AppendWithCapacity__;
  if (*(int *)(*(long *)Method_TMPro_TMP_TextProcessingStack<float>__ctor__ + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
                    /* try { // try from 01c5e23c to 01d5e243 has its CatchHandler @ 01c5e278 */
                    /* try { // try from 01c5e244 to 01d5e24b has its CatchHandler @ 01c5e274 */
  uVar11 = FUN_01780344(uVar11,0);
  uVar5 = FUN_01789ac0(param_1,uVar11,0);
                    /* try { // try from 01c5e258 to 01d5e25f has its CatchHandler @ 01c5e270 */
  if ((uVar5 & 1) != 0) {
                    /* try { // try from 01c5e260 to 01d5e29f has its CatchHandler @ 01c5e01c */
    return *(undefined8 *)TMPro_TMP_InputField_SubmitEvent_TypeInfo;
  }
                    /* try { // try from 01c5e2a4 to 01d5e2f7 has its CatchHandler @ 01c5e01c */
  if (param_1 == (long *)0x0) goto LAB_01c5e704;
  uVar5 = (**(code **)(*param_1 + 0x5c8))(param_1,*(undefined8 *)(*param_1 + 0x5d0));
  puVar1 = 
  Method_UnityEngine_Playables_PlayableExtensions_IsValid<ScriptPlayable<ActivationControlPlayable>>__
  ;
  if ((uVar5 & 1) != 0) {
    if (*(int *)(*(long *)
                  Method_UnityEngine_Playables_PlayableExtensions_IsValid<ScriptPlayable<ActivationControlPlayable>>__
                + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    lVar6 = FUN_017a65c0(param_1,0);
    if (lVar6 != 0) {
                    /* catch() { ... } // from try @ 01c5e2a0 with catch @ 01c5e2f0 */
      iVar4 = FUN_0178a528(lVar6,0);
                    /* try { // try from 01c5e2f8 to 01d5e2ff has its CatchHandler @ 01c5e314 */
      if (iVar4 < 1) {
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar11 = FUN_017a6820(param_1,0,0);
        return uVar11;
      }
                    /* try { // try from 01c5e300 to 01d5e30b has its CatchHandler @ 01c5e01c */
                    /* try { // try from 01c5e30c to 01d5e313 has its CatchHandler @ 01c5e314 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 01c5e2f8 with catch @ 01c5e314
                       catch(type#2 @ 00000000) { ... } // from try @ 01c5e30c with catch @ 01c5e314
                        */
      uVar11 = FUN_0178a588(lVar6,0,0);
      return uVar11;
    }
    goto LAB_01c5e704;
  }
  uVar5 = FUN_0178c0dc(param_1,0);
  if ((uVar5 & 1) != 0) goto LAB_01c5e284;
  uVar5 = FUN_0178b958(param_1,0);
  puVar1 = Method_System_Collections_Generic_List<Collider>_Clear__;
  if ((uVar5 & 1) != 0) {
    uVar11 = (**(code **)(*param_1 + 0x448))(param_1,*(undefined8 *)(*param_1 + 0x450));
    uVar11 = FUN_017986cc(uVar11,0,0);
    return uVar11;
  }
  uVar11 = *(undefined8 *)Method_System_Collections_Generic_List<TimeZoneInfo_AdjustmentRule>_Add__;
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  uVar11 = FUN_01780344(uVar11,0);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_00d32864(*(long *)puVar1);
  }
  uVar5 = FUN_01c55fec(param_1,uVar11);
  if ((uVar5 & 1) != 0) {
LAB_01c5e444:
    uVar11 = FUN_0179c590(param_1,0);
    return uVar11;
  }
  uVar11 = *(undefined8 *)Method_UnityEngine_UIElements_EventBase<ValidateCommandEvent>_TypeId__;
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  plVar7 = (long *)FUN_01780344(uVar11,0);
  if (plVar7 == (long *)0x0) goto LAB_01c5e704;
  uVar5 = (**(code **)(*plVar7 + 0x2c8))(plVar7,param_1,*(undefined8 *)(*plVar7 + 0x2d0));
  if ((uVar5 & 1) != 0) goto LAB_01c5e444;
  uVar11 = *(undefined8 *)
            Method_UnityEngine_UIElements_StylePropertyAnimationSystem_GetOrCreate<StylePropertyAnimationSystem_ValuesTranslate>__
  ;
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  plVar7 = (long *)FUN_01780344(uVar11,0);
  if (plVar7 == (long *)0x0) goto LAB_01c5e704;
  uVar5 = (**(code **)(*plVar7 + 0x2c8))(plVar7,param_1,*(undefined8 *)(*plVar7 + 0x2d0));
  if ((uVar5 & 1) != 0) {
    return 0;
  }
  plVar7 = (long *)(**(code **)(*param_1 + 0x318))(param_1,*(undefined8 *)(*param_1 + 800));
  if (((plVar7 == (long *)0x0) ||
      (lVar6 = (**(code **)(*plVar7 + 0x278))(plVar7,*(undefined8 *)(*plVar7 + 0x280)),
      puVar1 = System_Xml_XmlDeclaration_TypeInfo, lVar6 == 0)) || (*(long *)(lVar6 + 0x10) == 0))
  goto LAB_01c5e704;
  uVar5 = FUN_015fe854(*(long *)(lVar6 + 0x10),
                       *(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__796_69__,0);
  if ((uVar5 & 1) == 0) {
    plVar7 = (long *)(**(code **)(*param_1 + 0x318))(param_1,*(undefined8 *)(*param_1 + 800));
    if (((plVar7 == (long *)0x0) ||
        (lVar6 = (**(code **)(*plVar7 + 0x278))(plVar7,*(undefined8 *)(*plVar7 + 0x280)), lVar6 == 0
        )) || (*(long *)(lVar6 + 0x10) == 0)) goto LAB_01c5e704;
    uVar5 = FUN_015fe854(*(long *)(lVar6 + 0x10),*(undefined8 *)StringLiteral_11827,0);
    if ((uVar5 & 1) != 0) goto LAB_01c5e55c;
  }
  else {
LAB_01c5e55c:
    lVar6 = *(long *)puVar2;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      lVar6 = *(long *)puVar2;
    }
    uVar11 = FUN_0178c180(param_1,*(undefined8 *)(*(long *)(lVar6 + 0xb8) + 0x10),0);
    lVar6 = *(long *)puVar1;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_00d32864(lVar6);
    }
    uVar5 = FUN_016aa83c(uVar11,0,0);
    if ((uVar5 & 1) != 0) {
      uVar11 = FUN_0179c590(param_1,0);
      return uVar11;
    }
  }
  lVar6 = *(long *)puVar2;
  if (*(int *)(lVar6 + 0xe0) == 0) {
    thunk_FUN_00d32864();
    lVar6 = *(long *)puVar2;
  }
  uVar11 = FUN_0178c180(param_1,*(undefined8 *)(*(long *)(lVar6 + 0xb8) + 0x10),0);
  lVar6 = *(long *)puVar1;
  if (*(int *)(lVar6 + 0xe0) == 0) {
    thunk_FUN_00d32864(lVar6);
  }
  uVar5 = FUN_016aa83c(uVar11,0,0);
  if ((uVar5 & 1) == 0) {
    if (*(int *)(*(long *)System_Runtime_Remoting_Channels_CrossAppDomainSink_TypeInfo + 0xe0) == 0)
    {
      thunk_FUN_00d32864();
    }
    uVar11 = FUN_0167c14c(param_1,0);
    lVar6 = (**(code **)(*param_1 + 0x6f8))(param_1,0x34,*(undefined8 *)(*param_1 + 0x700));
    if (lVar6 != 0) {
      if ((int)*(ulong *)(lVar6 + 0x18) < 1) {
        return uVar11;
      }
      uVar5 = 0;
      uVar9 = *(ulong *)(lVar6 + 0x18) & 0xffffffff;
      do {
        if (uVar9 <= uVar5) {
                    /* WARNING: Subroutine does not return */
          FUN_00da5194();
        }
        plVar7 = *(long **)(lVar6 + 0x20 + uVar5 * 8);
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar9 = FUN_01c54d10(plVar7);
        if ((uVar9 & 1) != 0) {
          if (plVar7 == (long *)0x0) break;
          uVar8 = (**(code **)(*plVar7 + 0x268))(plVar7,*(undefined8 *)(*plVar7 + 0x270));
          lVar10 = *(long *)puVar3;
          if (*(int *)(lVar10 + 0xe0) == 0) {
            thunk_FUN_00d32864(lVar10);
          }
          uVar8 = FUN_01c5e120(uVar8,param_2 + 1);
          FUN_016aafe0(plVar7,uVar11,uVar8,0);
        }
        uVar9 = (ulong)*(uint *)(lVar6 + 0x18);
        uVar5 = uVar5 + 1;
        if ((long)(int)*(uint *)(lVar6 + 0x18) <= (long)uVar5) {
          return uVar11;
        }
      } while( true );
    }
LAB_01c5e704:
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
LAB_01c5e284:
                    /* catch(type#1 @ 03274860) { ... } // from try @ 01c5e1b8 with catch @ 01c5e284
                        */
                    /* catch(type#1 @ 03274860) { ... } // from try @ 01c5e1d4 with catch @ 01c5e288
                        */
                    /* try { // try from 01c5e2a0 to 01d5e2a3 has its CatchHandler @ 01c5e2f0 */
  uVar11 = FUN_0179c590(param_1,0);
  return uVar11;
}


