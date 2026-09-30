/*
FUNCTION_NAME: FUN_022f4f7c
ENTRY_POINT: 022f4f7c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 91
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_10;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_022f4f7c(long param_1,long param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long *plVar12;
  ulong uVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  long lVar7;
  
  puVar4 = Oculus_Interaction_Input_HandJointCache_TypeInfo;
  puVar3 = System_Collections_Generic_List<GetAvailableProfilerStats_StatInfo>_TypeInfo;
  if ((DAT_03781b06 & 1) == 0) {
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<Anchor>_GetEnumerator__);
    thunk_FUN_00d48444(Method_System_Reflection_Emit_EnumBuilder_GetMembers__);
    thunk_FUN_00d48444(Oculus_Interaction_Input_HandJointCache_TypeInfo);
    thunk_FUN_00d48444(Method_OVRPlugin_<>c_<_cctor>b__796_105__);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_Dictionary<TerrainData,_ObiHeightFieldHandle>_get_Count__
                      );
    thunk_FUN_00d48444(System_Collections_Generic_List<GetAvailableProfilerStats_StatInfo>_TypeInfo)
    ;
    thunk_FUN_00d48444(
                      Oculus_Interaction_OneGrabTranslateTransformer_OneGrabTranslateConstraints_TypeInfo
                      );
    thunk_FUN_00d48444(TMPro_TMP_InputField_SubmitEvent_TypeInfo);
    DAT_03781b06 = 1;
  }
  FUN_017b46ec(param_1,0);
  uVar10 = **(undefined8 **)(*(long *)puVar3 + 0xb8);
  auVar14 = thunk_FUN_00d62348(*(undefined8 *)puVar4);
  lVar7 = auVar14._0_8_;
  auVar15._8_8_ = 0;
  auVar15._0_8_ = auVar14._8_8_;
  auVar15 = auVar15 << 0x40;
  if (lVar7 != 0) {
    auVar15 = FUN_01320e50(lVar7,*(undefined8 *)
                                  Method_System_Reflection_Emit_EnumBuilder_GetMembers__);
    *(long *)(param_1 + 0x10) = lVar7;
    if (param_2 != 0) {
      auVar15 = FUN_01602744(param_2,10,0,0);
      puVar6 = Method_OVRPlugin_<>c_<_cctor>b__796_105__;
      puVar5 = Method_System_Collections_Generic_List<Anchor>_GetEnumerator__;
      puVar4 = 
      Method_System_Collections_Generic_Dictionary<TerrainData,_ObiHeightFieldHandle>_get_Count__;
      puVar3 = Oculus_Interaction_OneGrabTranslateTransformer_OneGrabTranslateConstraints_TypeInfo;
      lVar7 = auVar15._0_8_;
      if (lVar7 != 0) {
        plVar12 = (long *)0x0;
        if (0 < (int)*(ulong *)(lVar7 + 0x18)) {
          uVar13 = 0;
          uVar9 = *(ulong *)(lVar7 + 0x18) & 0xffffffff;
          do {
            if (uVar9 <= uVar13) {
                    /* WARNING: Subroutine does not return */
              FUN_00da5194();
            }
            uVar11 = *(undefined8 *)(lVar7 + 0x20 + uVar13 * 8);
            if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            auVar16 = FUN_0202015c(uVar11,*(undefined8 *)puVar3,0);
            auVar14._8_8_ = 0;
            auVar14._0_8_ = auVar16._8_8_;
            auVar15 = auVar14 << 0x40;
            if (auVar16._0_8_ == 0) goto LAB_022f51f4;
            auVar15 = FUN_0201bf00(auVar16._0_8_,0);
            uVar9 = auVar15._0_8_;
            if ((uVar9 & 1) == 0) {
              if (plVar12 != (long *)0x0) {
                auVar15 = FUN_0160c8e8(plVar12,uVar11,0);
              }
            }
            else {
              if (plVar12 == (long *)0x0) {
                uVar8 = *(ulong *)TMPro_TMP_InputField_SubmitEvent_TypeInfo;
              }
              else {
                uVar9 = (**(code **)(*plVar12 + 0x168))(plVar12,*(undefined8 *)(*plVar12 + 0x170));
                uVar8 = uVar9;
              }
              uVar9 = FUN_022f51fc(uVar9,uVar10,uVar8);
              if (uVar9 != 0) {
                auVar16._8_8_ = 0;
                auVar16._0_8_ = uVar9;
                auVar15 = auVar16 << 0x40;
                if (*(long *)(param_1 + 0x10) == 0) goto LAB_022f51f4;
                FUN_00c9dc68(*(long *)(param_1 + 0x10),uVar9,*(undefined8 *)puVar5);
              }
              auVar15 = thunk_FUN_00d62348(*(undefined8 *)puVar4);
              plVar12 = auVar15._0_8_;
              auVar1._8_8_ = 0;
              auVar1._0_8_ = auVar15._8_8_;
              auVar15 = auVar1 << 0x40;
              if (plVar12 == (long *)0x0) goto LAB_022f51f4;
              auVar15 = FUN_0160aa4c(plVar12,0);
              uVar10 = uVar11;
            }
            uVar9 = (ulong)*(uint *)(lVar7 + 0x18);
            uVar13 = uVar13 + 1;
          } while ((long)uVar13 < (long)(int)*(uint *)(lVar7 + 0x18));
        }
        if (plVar12 != (long *)0x0) {
          uVar11 = (**(code **)(*plVar12 + 0x168))(plVar12,*(undefined8 *)(*plVar12 + 0x170));
          uVar13 = FUN_022f51fc(uVar11,uVar10,uVar11);
          if (uVar13 == 0) {
            return;
          }
          auVar2._8_8_ = 0;
          auVar2._0_8_ = uVar13;
          auVar15 = auVar2 << 0x40;
          if (*(long *)(param_1 + 0x10) != 0) {
            FUN_00c9dc68(*(long *)(param_1 + 0x10),uVar13,*(undefined8 *)puVar5);
            return;
          }
        }
      }
    }
  }
LAB_022f51f4:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c(auVar15._0_8_,auVar15._8_8_);
}


