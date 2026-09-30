/*
FUNCTION_NAME: FUN_055eb484
ENTRY_POINT: 055eb484
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_6;telemetry_or_network_hits_4;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


long * FUN_055eb484(long param_1,long *param_2,long *param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  if ((DAT_06b7f486 & 1) == 0) {
    FUN_02d6084c(PTR_DAT_06762e08);
    FUN_02d6084c(System_Func<Recursion>_TypeInfo);
    FUN_02d6084c(System_Collections_Generic_IEnumerator<Vector2>_TypeInfo);
    FUN_02d6084c(System_Collections_Generic_IEnumerator<Vector3>_TypeInfo);
    FUN_02d6084c(System_Collections_Generic_IEnumerator<Vector4>_TypeInfo);
    FUN_02d6084c(
                System_Collections_Generic_IEnumerator<VisualEffectPlayableSerializedEvent>_TypeInfo
                );
    FUN_02d6084c(System_Collections_Generic_IEnumerator<VisualElement>_TypeInfo);
    FUN_02d6084c(System_Collections_Generic_IEnumerator<VolumeParameter>_TypeInfo);
    FUN_02d6084c(System_Collections_Generic_IEnumerator<VolumeProfile>_TypeInfo);
    FUN_02d6084c(System_Collections_Generic_IEnumerator<X509Extension>_TypeInfo);
    FUN_02d6084c(System_Collections_Generic_IEnumerator<XAttribute>_TypeInfo);
    FUN_02d6084c(System_Collections_Generic_IEnumerator<XNode>_TypeInfo);
    FUN_02d6084c(System_Collections_Generic_IEnumerator<XRGrabInteractable>_TypeInfo);
    FUN_02d6084c(System_Collections_Generic_IEnumerator<XmlAttribute>_TypeInfo);
    FUN_02d6084c(System_Collections_Generic_IEnumerator<XmlNode>_TypeInfo);
    FUN_02d6084c(System_Collections_Generic_IEnumerator<DebugUI_Panel>_TypeInfo);
    FUN_02d6084c(System_Collections_Generic_IEnumerator<DebugUI_Widget>_TypeInfo);
    FUN_02d6084c(System_Collections_Generic_IEnumerator<InputActionTrace_ActionEventPtr>_TypeInfo);
    FUN_02d6084c(
                System_Collections_Generic_IEnumerator<InputBindingCompositeContext_PartBinding>_TypeInfo
                );
    FUN_02d6084c(System_Collections_Generic_IEnumerator<OVRPermissionsRequester_Permission>_TypeInfo
                );
    FUN_02d6084c(System_Collections_Generic_IEnumerator<OVRSemanticLabels_Classification>_TypeInfo);
    FUN_02d6084c(
                System_Collections_Generic_IEnumerator<OpenXRInteractionFeature_ActionConfig>_TypeInfo
                );
    FUN_02d6084c(
                System_Collections_Generic_IEnumerator<PlayerEditorConnectionEvents_MessageTypeSubscribers>_TypeInfo
                );
    FUN_02d6084c(System_Collections_Generic_IEnumerator<DebugUI_Table_Row>_TypeInfo);
    FUN_02d6084c(System_Collections_Generic_IEqualityComparer<string>_TypeInfo);
    DAT_06b7f486 = 1;
  }
  puVar3 = System_Func<Recursion>_TypeInfo;
  if (param_2 != (long *)0x0) {
    uVar4 = thunk_FUN_02d709fc(param_2,0);
    lVar8 = *(long *)puVar3;
    if (*(int *)(lVar8 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4(lVar8);
      lVar8 = *(long *)puVar3;
    }
    puVar1 = PTR_DAT_0675e258;
    uVar10 = *(undefined8 *)(*(long *)(lVar8 + 0xb8) + 0x58);
    if (*(int *)(*(long *)(PTR_DAT_0675e258 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    puVar2 = PTR_DAT_06762e08;
    uVar5 = FUN_0501ed54(param_3,uVar10,0);
    if ((uVar5 & 1) != 0) {
      param_3 = *(long **)(param_1 + 0x20);
    }
    lVar8 = thunk_FUN_02d9d438(param_2,*(undefined8 *)puVar2);
    if ((lVar8 == 0) || (uVar5 = FUN_055efc48(lVar8,param_3), (uVar5 & 1) == 0)) {
LAB_055ec230:
      uVar4 = FUN_055efdcc(param_1,uVar4,param_3);
      uVar10 = thunk_FUN_02dc61f4(Unity_Hierarchy_IHierarchyProperty<int>_TypeInfo);
                    /* WARNING: Subroutine does not return */
      FUN_02d609b4(uVar4,uVar10);
    }
    lVar8 = *(long *)puVar3;
    if (*(int *)(lVar8 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar8 = *(long *)puVar3;
    }
    uVar10 = *(undefined8 *)(*(long *)(lVar8 + 0xb8) + 0x48);
    if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02dbd7b4(*(long *)(puVar1 + 0xe0));
    }
    uVar5 = FUN_0501ed54(param_3,uVar10,0);
    lVar8 = *(long *)puVar3;
    if (*(int *)(lVar8 + 0xe4) == 0) {
                    /* try { // try from 055eb6cc to 056eb763 has its CatchHandler @ 055eb6cc
                       catch() { ... } // from try @ 055eb6cc with catch @ 055eb6cc
                       catch() { ... } // from try @ 055eb8dc with catch @ 055eb6cc
                       catch() { ... } // from try @ 055eb954 with catch @ 055eb6cc
                       catch() { ... } // from try @ 055eb9d4 with catch @ 055eb6cc
                       catch() { ... } // from try @ 055eba00 with catch @ 055eb6cc */
      thunk_FUN_02dbd7b4(lVar8);
      lVar8 = *(long *)puVar3;
    }
    uVar10 = *(undefined8 *)(*(long *)(lVar8 + 0xb8) + 0x48);
    if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    uVar6 = FUN_0501ed54(uVar4,uVar10,0);
    if ((uVar5 & 1) != 0) {
      if ((uVar6 & 1) != 0) {
        return param_2;
      }
      uVar4 = *(undefined8 *)puVar2;
      lVar8 = thunk_FUN_02d9d438(param_2,uVar4);
      if (lVar8 != 0) {
        plVar7 = (long *)FUN_055f0058(param_1,lVar8,param_4);
        return plVar7;
      }
                    /* WARNING: Subroutine does not return */
      FUN_02d60e88(param_2,uVar4);
    }
    if ((uVar6 & 1) != 0) {
      if (*param_2 != *(long *)(puVar1 + 0x90)) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60e88(param_2);
      }
      param_2 = (long *)FUN_055f0410(uVar6,param_2);
    }
    if (param_3 != (long *)0x0) {
      uVar5 = FUN_050207cc(param_3,0);
      if ((uVar5 & 1) == 0) {
        uVar10 = *(undefined8 *)(param_1 + 0x20);
                    /* try { // try from 055eb834 to 056eb847 has its CatchHandler @ 055eb90c */
        if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        uVar5 = FUN_0501ed54(uVar4,uVar10,0);
        if ((uVar5 & 1) != 0) {
          lVar8 = *(long *)puVar3;
                    /* try { // try from 055eb858 to 056eb85f has its CatchHandler @ 055eb908 */
          if (*(int *)(lVar8 + 0xe4) == 0) {
            thunk_FUN_02dbd7b4();
            lVar8 = *(long *)puVar3;
          }
                    /* try { // try from 055eb870 to 056eb877 has its CatchHandler @ 055eb904 */
          uVar10 = *(undefined8 *)(*(long *)(lVar8 + 0xb8) + 0x18);
          if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
                    /* try { // try from 055eb878 to 056eb87b has its CatchHandler @ 055eb900 */
            thunk_FUN_02dbd7b4(*(long *)(puVar1 + 0xe0));
          }
                    /* try { // try from 055eb884 to 056eb8b7 has its CatchHandler @ 055eb920 */
          uVar5 = FUN_0501fa14(uVar4,uVar10,0);
          if ((uVar5 & 1) != 0) {
            return param_2;
          }
        }
        plVar7 = (long *)FUN_055f04b8(param_1,param_2,param_4);
        return plVar7;
      }
                    /* try { // try from 055eb764 to 056eb783 has its CatchHandler @ 055eb91c */
      uVar10 = (**(code **)(*param_3 + 0x428))(param_3,*(undefined8 *)(*param_3 + 0x430));
      lVar8 = *(long *)puVar3;
      if (*(int *)(lVar8 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4(lVar8);
        lVar8 = *(long *)puVar3;
      }
      uVar11 = *(undefined8 *)(*(long *)(lVar8 + 0xb8) + 0x58);
      if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
                    /* try { // try from 055eb7a0 to 056eb7a7 has its CatchHandler @ 055eb918 */
        thunk_FUN_02dbd7b4();
      }
      uVar5 = FUN_0501ed54(uVar10,uVar11,0);
      puVar9 = (undefined8 *)System_Collections_Generic_IEnumerator<XRGrabInteractable>_TypeInfo;
      if ((uVar5 & 1) == 0) {
        if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
                    /* try { // try from 055eb8c8 to 056eb8db has its CatchHandler @ 055eb8fc */
          thunk_FUN_02dbd7b4();
        }
        uVar5 = FUN_0501ed54(uVar4,param_3,0);
                    /* try { // try from 055eb8dc to 056eb93b has its CatchHandler @ 055eb6cc */
        if ((uVar5 & 1) != 0) {
          return param_2;
        }
        lVar8 = *(long *)puVar3;
        if (*(int *)(lVar8 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
          lVar8 = *(long *)puVar3;
        }
                    /* catch() { ... } // from try @ 055eb8c8 with catch @ 055eb8fc */
                    /* catch() { ... } // from try @ 055eb878 with catch @ 055eb900 */
        uVar11 = *(undefined8 *)(*(long *)(lVar8 + 0xb8) + 0xb8);
                    /* catch() { ... } // from try @ 055eb870 with catch @ 055eb904 */
        if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
                    /* catch() { ... } // from try @ 055eb858 with catch @ 055eb908 */
                    /* catch() { ... } // from try @ 055eb834 with catch @ 055eb90c */
          thunk_FUN_02dbd7b4(*(long *)(puVar1 + 0xe0));
        }
                    /* catch() { ... } // from try @ 055eb7c0 with catch @ 055eb910 */
                    /* catch() { ... } // from try @ 055eb7b8 with catch @ 055eb914 */
                    /* catch() { ... } // from try @ 055eb7a0 with catch @ 055eb918 */
                    /* catch() { ... } // from try @ 055eb764 with catch @ 055eb91c */
        uVar5 = FUN_0501ed54(uVar10,uVar11,0);
                    /* catch() { ... } // from try @ 055eb884 with catch @ 055eb920 */
        if ((uVar5 & 1) != 0) {
                    /* catch() { ... } // from try @ 055eb7d4 with catch @ 055eb924 */
                    /* try { // try from 055eb93c to 056eb953 has its CatchHandler @ 055eb9f8 */
                    /* try { // try from 055eb954 to 056eb9bb has its CatchHandler @ 055eb6cc */
          plVar7 = (long *)FUN_035f4040(param_1,param_2,param_4,
                                        *(undefined8 *)
                                         System_Collections_Generic_IEnumerator<Vector2>_TypeInfo);
          return plVar7;
        }
        lVar8 = *(long *)puVar3;
        if (*(int *)(lVar8 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
          lVar8 = *(long *)puVar3;
        }
        uVar11 = *(undefined8 *)(*(long *)(lVar8 + 0xb8) + 0x60);
        if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
          thunk_FUN_02dbd7b4(*(long *)(puVar1 + 0xe0));
        }
        uVar5 = FUN_0501ed54(uVar10,uVar11,0);
        if ((uVar5 & 1) != 0) {
                    /* try { // try from 055eb9bc to 056eb9d3 has its CatchHandler @ 055eb9f8 */
          plVar7 = (long *)FUN_035f474c(param_1,param_2,param_4,
                                        *(undefined8 *)
                                         System_Collections_Generic_IEnumerator<Vector4>_TypeInfo);
          return plVar7;
        }
        lVar8 = *(long *)puVar3;
                    /* try { // try from 055eb9d4 to 056eb9e7 has its CatchHandler @ 055eb6cc */
        if (*(int *)(lVar8 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
          lVar8 = *(long *)puVar3;
        }
                    /* try { // try from 055eb9e8 to 056eb9f7 has its CatchHandler @ 055eb9f8 */
        uVar11 = *(undefined8 *)(*(long *)(lVar8 + 0xb8) + 0xc0);
        if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
                    /* catch() { ... } // from try @ 055eb93c with catch @ 055eb9f8
                       catch() { ... } // from try @ 055eb9bc with catch @ 055eb9f8
                       catch() { ... } // from try @ 055eb9e8 with catch @ 055eb9f8 */
                    /* try { // try from 055eb9fc to 056eb9ff has its CatchHandler @ 055eba08 */
          thunk_FUN_02dbd7b4(*(long *)(puVar1 + 0xe0));
        }
                    /* try { // try from 055eba00 to 056eba0b has its CatchHandler @ 055eb6cc */
                    /* catch() { ... } // from try @ 055eb9fc with catch @ 055eba08 */
        uVar5 = FUN_0501ed54(uVar10,uVar11,0);
        puVar9 = (undefined8 *)System_Collections_Generic_IEnumerator<Vector3>_TypeInfo;
        if ((uVar5 & 1) == 0) {
          lVar8 = *(long *)puVar3;
          if (*(int *)(lVar8 + 0xe4) == 0) {
            thunk_FUN_02dbd7b4();
            lVar8 = *(long *)puVar3;
          }
          uVar11 = *(undefined8 *)(*(long *)(lVar8 + 0xb8) + 0xa8);
          if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
            thunk_FUN_02dbd7b4(*(long *)(puVar1 + 0xe0));
          }
          uVar5 = FUN_0501ed54(uVar10,uVar11,0);
          if ((uVar5 & 1) != 0) {
            plVar7 = (long *)FUN_035f7b80(param_1,param_2,param_4,
                                          *(undefined8 *)
                                           System_Collections_Generic_IEnumerator<VisualElement>_TypeInfo
                                         );
            return plVar7;
          }
          lVar8 = *(long *)puVar3;
          if (*(int *)(lVar8 + 0xe4) == 0) {
            thunk_FUN_02dbd7b4();
            lVar8 = *(long *)puVar3;
          }
          uVar11 = *(undefined8 *)(*(long *)(lVar8 + 0xb8) + 0xb0);
          if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
            thunk_FUN_02dbd7b4(*(long *)(puVar1 + 0xe0));
          }
          uVar5 = FUN_0501ed54(uVar10,uVar11,0);
          if ((uVar5 & 1) != 0) {
            plVar7 = (long *)FUN_035f8284(param_1,param_2,param_4,
                                          *(undefined8 *)
                                           System_Collections_Generic_IEnumerator<VisualEffectPlayableSerializedEvent>_TypeInfo
                                         );
            return plVar7;
          }
          lVar8 = *(long *)puVar3;
          if (*(int *)(lVar8 + 0xe4) == 0) {
            thunk_FUN_02dbd7b4();
            lVar8 = *(long *)puVar3;
          }
          uVar11 = *(undefined8 *)(*(long *)(lVar8 + 0xb8) + 0x30);
          if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
            thunk_FUN_02dbd7b4(*(long *)(puVar1 + 0xe0));
          }
          uVar5 = FUN_0501ed54(uVar10,uVar11,0);
          if ((uVar5 & 1) != 0) {
            plVar7 = (long *)FUN_035f8988(param_1,param_2,param_4,
                                          *(undefined8 *)
                                           System_Collections_Generic_IEnumerator<VolumeParameter>_TypeInfo
                                         );
            return plVar7;
          }
          lVar8 = *(long *)puVar3;
          if (*(int *)(lVar8 + 0xe4) == 0) {
            thunk_FUN_02dbd7b4();
            lVar8 = *(long *)puVar3;
          }
          uVar11 = *(undefined8 *)(*(long *)(lVar8 + 0xb8) + 0x98);
          if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
            thunk_FUN_02dbd7b4(*(long *)(puVar1 + 0xe0));
          }
          uVar5 = FUN_0501ed54(uVar10,uVar11,0);
          if ((uVar5 & 1) != 0) {
            plVar7 = (long *)FUN_035f908c(param_1,param_2,param_4,
                                          *(undefined8 *)
                                           System_Collections_Generic_IEnumerator<VolumeProfile>_TypeInfo
                                         );
            return plVar7;
          }
          lVar8 = *(long *)puVar3;
          if (*(int *)(lVar8 + 0xe4) == 0) {
            thunk_FUN_02dbd7b4();
            lVar8 = *(long *)puVar3;
          }
          uVar11 = *(undefined8 *)(*(long *)(lVar8 + 0xb8) + 0x68);
          if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
            thunk_FUN_02dbd7b4(*(long *)(puVar1 + 0xe0));
          }
          uVar5 = FUN_0501ed54(uVar10,uVar11,0);
          if ((uVar5 & 1) != 0) {
            plVar7 = (long *)FUN_035f9790(param_1,param_2,param_4,
                                          *(undefined8 *)
                                           System_Collections_Generic_IEnumerator<X509Extension>_TypeInfo
                                         );
            return plVar7;
          }
          lVar8 = *(long *)puVar3;
          if (*(int *)(lVar8 + 0xe4) == 0) {
            thunk_FUN_02dbd7b4();
            lVar8 = *(long *)puVar3;
          }
          uVar11 = *(undefined8 *)(*(long *)(lVar8 + 0xb8) + 0x38);
          if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
            thunk_FUN_02dbd7b4(*(long *)(puVar1 + 0xe0));
          }
          uVar5 = FUN_0501ed54(uVar10,uVar11,0);
          if ((uVar5 & 1) != 0) {
            plVar7 = (long *)FUN_035f9e94(param_1,param_2,param_4,
                                          *(undefined8 *)
                                           System_Collections_Generic_IEnumerator<XAttribute>_TypeInfo
                                         );
            return plVar7;
          }
          lVar8 = *(long *)puVar3;
          if (*(int *)(lVar8 + 0xe4) == 0) {
            thunk_FUN_02dbd7b4();
            lVar8 = *(long *)puVar3;
          }
          uVar11 = *(undefined8 *)(*(long *)(lVar8 + 0xb8) + 0x40);
          if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
            thunk_FUN_02dbd7b4(*(long *)(puVar1 + 0xe0));
          }
          uVar5 = FUN_0501ed54(uVar10,uVar11,0);
          if ((uVar5 & 1) != 0) {
            plVar7 = (long *)FUN_035fa598(param_1,param_2,param_4,
                                          *(undefined8 *)
                                           System_Collections_Generic_IEnumerator<XNode>_TypeInfo);
            return plVar7;
          }
          lVar8 = *(long *)puVar3;
          if (*(int *)(lVar8 + 0xe4) == 0) {
            thunk_FUN_02dbd7b4();
            lVar8 = *(long *)puVar3;
          }
          uVar11 = *(undefined8 *)(*(long *)(lVar8 + 0xb8) + 0x70);
          if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
            thunk_FUN_02dbd7b4(*(long *)(puVar1 + 0xe0));
          }
          uVar5 = FUN_0501ed54(uVar10,uVar11,0);
          if ((uVar5 & 1) != 0) {
            plVar7 = (long *)FUN_035fb3a8(param_1,param_2,param_4,
                                          *(undefined8 *)
                                           System_Collections_Generic_IEnumerator<XmlAttribute>_TypeInfo
                                         );
            return plVar7;
          }
          lVar8 = *(long *)puVar3;
          if (*(int *)(lVar8 + 0xe4) == 0) {
            thunk_FUN_02dbd7b4();
            lVar8 = *(long *)puVar3;
          }
          uVar11 = *(undefined8 *)(*(long *)(lVar8 + 0xb8) + 0xa0);
          if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
            thunk_FUN_02dbd7b4(*(long *)(puVar1 + 0xe0));
          }
          uVar5 = FUN_0501ed54(uVar10,uVar11,0);
          if ((uVar5 & 1) != 0) {
            plVar7 = (long *)FUN_035fbaac(param_1,param_2,param_4,
                                          *(undefined8 *)
                                           System_Collections_Generic_IEnumerator<XmlNode>_TypeInfo)
            ;
            return plVar7;
          }
          lVar8 = *(long *)puVar3;
          if (*(int *)(lVar8 + 0xe4) == 0) {
            thunk_FUN_02dbd7b4();
            lVar8 = *(long *)puVar3;
          }
          uVar11 = *(undefined8 *)(*(long *)(lVar8 + 0xb8) + 0x48);
          if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
            thunk_FUN_02dbd7b4(*(long *)(puVar1 + 0xe0));
          }
          uVar5 = FUN_0501ed54(uVar10,uVar11,0);
          puVar9 = (undefined8 *)System_Collections_Generic_IEnumerator<DebugUI_Panel>_TypeInfo;
          if ((uVar5 & 1) == 0) {
            lVar8 = *(long *)puVar3;
            if (*(int *)(lVar8 + 0xe4) == 0) {
              thunk_FUN_02dbd7b4();
              lVar8 = *(long *)puVar3;
            }
            uVar11 = *(undefined8 *)(*(long *)(lVar8 + 0xb8) + 0xd8);
            if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
              thunk_FUN_02dbd7b4(*(long *)(puVar1 + 0xe0));
            }
            uVar5 = FUN_0501ed54(uVar10,uVar11,0);
            if ((uVar5 & 1) != 0) {
              plVar7 = (long *)FUN_035fc1b0(param_1,param_2,param_4,
                                            *(undefined8 *)
                                             System_Collections_Generic_IEnumerator<DebugUI_Widget>_TypeInfo
                                           );
              return plVar7;
            }
            lVar8 = *(long *)puVar3;
            if (*(int *)(lVar8 + 0xe4) == 0) {
              thunk_FUN_02dbd7b4();
              lVar8 = *(long *)puVar3;
            }
            uVar11 = *(undefined8 *)(*(long *)(lVar8 + 0xb8) + 0x78);
            if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
              thunk_FUN_02dbd7b4(*(long *)(puVar1 + 0xe0));
            }
            uVar5 = FUN_0501ed54(uVar10,uVar11,0);
            if ((uVar5 & 1) != 0) {
              plVar7 = (long *)FUN_035fc8b4(param_1,param_2,param_4,
                                            *(undefined8 *)
                                             System_Collections_Generic_IEnumerator<InputActionTrace_ActionEventPtr>_TypeInfo
                                           );
              return plVar7;
            }
            lVar8 = *(long *)puVar3;
            if (*(int *)(lVar8 + 0xe4) == 0) {
              thunk_FUN_02dbd7b4();
              lVar8 = *(long *)puVar3;
            }
            uVar11 = *(undefined8 *)(*(long *)(lVar8 + 0xb8) + 0x80);
            if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
              thunk_FUN_02dbd7b4(*(long *)(puVar1 + 0xe0));
            }
            uVar5 = FUN_0501ed54(uVar10,uVar11,0);
            if ((uVar5 & 1) != 0) {
              plVar7 = (long *)FUN_035fcfb8(param_1,param_2,param_4,
                                            *(undefined8 *)
                                             System_Collections_Generic_IEnumerator<InputBindingCompositeContext_PartBinding>_TypeInfo
                                           );
              return plVar7;
            }
            lVar8 = *(long *)puVar3;
            if (*(int *)(lVar8 + 0xe4) == 0) {
              thunk_FUN_02dbd7b4();
              lVar8 = *(long *)puVar3;
            }
            uVar11 = *(undefined8 *)(*(long *)(lVar8 + 0xb8) + 0x88);
            if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
              thunk_FUN_02dbd7b4(*(long *)(puVar1 + 0xe0));
            }
            uVar5 = FUN_0501ed54(uVar10,uVar11,0);
            if ((uVar5 & 1) != 0) {
              plVar7 = (long *)FUN_035fd6bc(param_1,param_2,param_4,
                                            *(undefined8 *)
                                             System_Collections_Generic_IEnumerator<OVRPermissionsRequester_Permission>_TypeInfo
                                           );
              return plVar7;
            }
            lVar8 = *(long *)puVar3;
            if (*(int *)(lVar8 + 0xe4) == 0) {
              thunk_FUN_02dbd7b4();
              lVar8 = *(long *)puVar3;
            }
            uVar11 = *(undefined8 *)(*(long *)(lVar8 + 0xb8) + 0xd0);
            if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
              thunk_FUN_02dbd7b4(*(long *)(puVar1 + 0xe0));
            }
            uVar5 = FUN_0501ed54(uVar10,uVar11,0);
            puVar9 = (undefined8 *)
                     System_Collections_Generic_IEnumerator<OVRSemanticLabels_Classification>_TypeInfo
            ;
            if ((uVar5 & 1) == 0) {
              lVar8 = *(long *)puVar3;
              if (*(int *)(lVar8 + 0xe4) == 0) {
                thunk_FUN_02dbd7b4();
                lVar8 = *(long *)puVar3;
              }
              uVar11 = *(undefined8 *)(*(long *)(lVar8 + 0xb8) + 0x50);
              if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
                thunk_FUN_02dbd7b4(*(long *)(puVar1 + 0xe0));
              }
              uVar5 = FUN_0501ed54(uVar10,uVar11,0);
              puVar9 = (undefined8 *)
                       System_Collections_Generic_IEnumerator<DebugUI_Table_Row>_TypeInfo;
              if ((uVar5 & 1) == 0) {
                lVar8 = *(long *)puVar3;
                if (*(int *)(lVar8 + 0xe4) == 0) {
                  thunk_FUN_02dbd7b4();
                  lVar8 = *(long *)puVar3;
                }
                uVar11 = *(undefined8 *)(*(long *)(lVar8 + 0xb8) + 200);
                if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
                  thunk_FUN_02dbd7b4(*(long *)(puVar1 + 0xe0));
                }
                uVar5 = FUN_0501ed54(uVar10,uVar11,0);
                puVar9 = (undefined8 *)System_Collections_Generic_IEqualityComparer<string>_TypeInfo
                ;
                if ((uVar5 & 1) == 0) {
                  lVar8 = *(long *)puVar3;
                  if (*(int *)(lVar8 + 0xe4) == 0) {
                    thunk_FUN_02dbd7b4();
                    lVar8 = *(long *)puVar3;
                  }
                  uVar11 = *(undefined8 *)(*(long *)(lVar8 + 0xb8) + 0x90);
                  if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
                    thunk_FUN_02dbd7b4(*(long *)(puVar1 + 0xe0));
                  }
                  uVar5 = FUN_0501ed54(uVar10,uVar11,0);
                  puVar9 = (undefined8 *)
                           System_Collections_Generic_IEnumerator<OpenXRInteractionFeature_ActionConfig>_TypeInfo
                  ;
                  if ((uVar5 & 1) == 0) {
                    lVar8 = *(long *)puVar3;
                    if (*(int *)(lVar8 + 0xe4) == 0) {
                      thunk_FUN_02dbd7b4();
                      lVar8 = *(long *)puVar3;
                    }
                    uVar11 = *(undefined8 *)(*(long *)(lVar8 + 0xb8) + 0xe0);
                    if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
                      thunk_FUN_02dbd7b4(*(long *)(puVar1 + 0xe0));
                    }
                    uVar5 = FUN_0501ed54(uVar10,uVar11,0);
                    puVar9 = (undefined8 *)
                             System_Collections_Generic_IEnumerator<PlayerEditorConnectionEvents_MessageTypeSubscribers>_TypeInfo
                    ;
                    if ((uVar5 & 1) == 0) goto LAB_055ec230;
                  }
                }
              }
            }
          }
        }
      }
                    /* try { // try from 055eb7c0 to 056eb7c3 has its CatchHandler @ 055eb910 */
                    /* try { // try from 055eb7d4 to 056eb827 has its CatchHandler @ 055eb924 */
      plVar7 = (long *)FUN_035fac9c(param_1,param_2,param_4,*puVar9);
      return plVar7;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


