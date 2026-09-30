/*
FUNCTION_NAME: FUN_025dfcb4
ENTRY_POINT: 025dfcb4
PROGRAM: Lovesick-libil2cpp.so
SCORE: 89
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;ui_interaction;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_18;strong_pose_or_ray_construction_hits_8;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_025dfcb4(long param_1,ulong param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  byte bVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined8 local_78;
  undefined8 local_70;
  long local_68;
  undefined8 local_60;
  long local_58;
  
  if ((DAT_03783258 & 1) == 0) {
    thunk_FUN_00d48444(Method_Sirenix_Serialization_FormatterUtilities_GetContainedType__);
    thunk_FUN_00d48444(Method_RCG_IO_QuestFileSystemController_Load<PlayerPreferences>__);
    thunk_FUN_00d48444(Method_OVRRuntimeAssetsBase_LoadAsset<OVROverlayCanvasSettings>__);
    thunk_FUN_00d48444(Method_Sirenix_Serialization_MinimalBaseFormatter<Vector3>__ctor__);
    thunk_FUN_00d48444(
                      Method_OVRDeserialize_ByteArrayToStructure<OVRDeserialize_SpaceQueryResultsData>__
                      );
    thunk_FUN_00d48444(StringLiteral_302);
    thunk_FUN_00d48444(System_Func<Vector4,_int,_float>_TypeInfo);
    thunk_FUN_00d48444(Method_Unity_Collections_NativeArray<XRTextureDescriptor>_get_IsCreated__);
    thunk_FUN_00d48444(System_Runtime_Remoting_Messaging_ConstructionCallDictionary_TypeInfo);
    thunk_FUN_00d48444(System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<RenderChain>_Add__);
    thunk_FUN_00d48444(StringLiteral_9927);
    DAT_03783258 = 1;
  }
  local_68 = 0;
  local_60 = 0;
  local_78 = 0;
  local_70 = 0;
  lVar6 = *(long *)(param_1 + 0x10);
  if (lVar6 != 0) {
    if ((*(char *)(lVar6 + 0x18) == '\0') && ((param_2 & 1) == 0)) {
      return;
    }
    *(undefined1 *)(lVar6 + 0x18) = 0;
    lVar6 = FUN_0268fd10(lVar6,0);
    puVar1 = System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
    if (lVar6 == 0) goto LAB_025e0190;
    lVar7 = FUN_0269fe30(lVar6,0);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_00d32864(*(long *)puVar1);
    }
    uVar8 = FUN_02681b9c(lVar7,0,0);
    if ((uVar8 & 1) == 0) {
      lVar13 = 0;
    }
    else {
      if (lVar7 == 0) goto LAB_025e0190;
      FUN_010c31a0(lVar7,&local_58,
                   *(undefined8 *)Method_Sirenix_Serialization_FormatterUtilities_GetContainedType__
                  );
      lVar13 = local_58;
    }
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    bVar5 = FUN_02681b9c(lVar13,0,0);
    *(byte *)(param_1 + 0x31) = bVar5 & 1;
    if ((bVar5 & 1) != 0) {
      if (*(char *)(param_1 + 0x30) != '\x01' || (param_2 & 1) != 0) {
        uVar8 = FUN_010c3738(lVar6,&local_60,
                             *(undefined8 *)
                              Method_RCG_IO_QuestFileSystemController_Load<PlayerPreferences>__);
        puVar2 = Method_Sirenix_Serialization_MinimalBaseFormatter<Vector3>__ctor__;
        lVar11 = *(long *)(param_1 + 0x20);
        if (lVar11 == 0) goto LAB_025e0190;
        if ((uVar8 & 1) == 0) {
          *(undefined1 *)(lVar11 + 0x10) = 0;
        }
        else {
          *(undefined1 *)(lVar11 + 0x10) = 1;
          UnityEngine_GUISkin__set_horizontalSliderThumb(lVar11,local_60);
          uVar9 = local_60;
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          FUN_0268c114(uVar9,0);
        }
        uVar8 = FUN_010c3738(lVar6,&local_68,*(undefined8 *)puVar2);
        lVar11 = local_68;
        lVar12 = *(long *)(param_1 + 0x28);
        if (lVar12 == 0) goto LAB_025e0190;
        if ((uVar8 & 1) == 0) {
          *(undefined1 *)(lVar12 + 0x10) = 0;
        }
        else {
          *(undefined1 *)(lVar12 + 0x10) = 1;
          if (local_68 == 0) goto LAB_025e0190;
          *(undefined4 *)(lVar12 + 0x14) = *(undefined4 *)(local_68 + 0x28);
          *(undefined4 *)(lVar12 + 0x18) = *(undefined4 *)(local_68 + 0x24);
          *(undefined1 *)(lVar12 + 0x1c) = *(undefined1 *)(local_68 + 0x20);
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          FUN_0268c114(lVar11,0);
        }
        uVar8 = FUN_010c3738(lVar6,&local_70,
                             *(undefined8 *)
                              Method_OVRRuntimeAssetsBase_LoadAsset<OVROverlayCanvasSettings>__);
        puVar2 = Method_OVRDeserialize_ByteArrayToStructure<OVRDeserialize_SpaceQueryResultsData>__;
        lVar11 = *(long *)(param_1 + 0x18);
        if (lVar11 == 0) goto LAB_025e0190;
        if ((uVar8 & 1) == 0) {
          *(undefined1 *)(lVar11 + 0x10) = 0;
        }
        else {
          *(undefined1 *)(lVar11 + 0x10) = 1;
          UnityEngine_GUISkin__set_horizontalScrollbarLeftButton(lVar11,local_70);
          uVar9 = local_70;
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          FUN_0268c114(uVar9,0);
        }
        uVar8 = FUN_010c3738(lVar6,(long *)(param_1 + 0x48),*(undefined8 *)puVar2);
        if ((uVar8 & 1) != 0) {
          if (lVar13 == 0) goto LAB_025e0190;
          uVar8 = FUN_010c3738(lVar13,&local_78,*(undefined8 *)puVar2);
          puVar4 = StringLiteral_9927;
          puVar3 = StringLiteral_302;
          puVar2 = Method_System_Collections_Generic_List<RenderChain>_Add__;
          if ((uVar8 & 1) == 0) {
            if (lVar7 == 0) goto LAB_025e0190;
            uVar9 = FUN_0268b6ac(lVar7,0);
            uVar10 = FUN_0268b6ac(lVar6,0);
            uVar9 = FUN_0160073c(*(undefined8 *)puVar2,uVar9,*(undefined8 *)puVar4,uVar10,0);
            if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
              thunk_FUN_00d32864(*(long *)puVar3);
            }
            FUN_0266185c(uVar9,lVar6,0);
          }
          lVar7 = *(long *)(param_1 + 0x48);
          if (lVar7 == 0) goto LAB_025e0190;
          FUN_02689f9c(lVar7,0,0);
        }
      }
      if (*(char *)(param_1 + 0x31) != '\0') goto LAB_025e016c;
    }
    if ((param_2 & 1) == 0 && *(char *)(param_1 + 0x30) == '\0') {
LAB_025e016c:
      *(undefined1 *)(param_1 + 0x30) = *(undefined1 *)(param_1 + 0x31);
      return;
    }
    if (*(long *)(param_1 + 0x18) != 0) {
      if (*(char *)(*(long *)(param_1 + 0x18) + 0x10) == '\0') goto LAB_025e016c;
      lVar6 = FUN_0268fd4c(lVar6,0);
      if (lVar6 != 0) {
        uVar9 = FUN_010e5800(lVar6,*(undefined8 *)
                                    Method_Unity_Collections_NativeArray<XRTextureDescriptor>_get_IsCreated__
                            );
        *(undefined8 *)(param_1 + 0x38) = uVar9;
        if (*(long *)(param_1 + 0x18) != 0) {
          FUN_025e06a0(*(long *)(param_1 + 0x18),uVar9);
          if (*(long *)(param_1 + 0x20) != 0) {
            if (*(char *)(*(long *)(param_1 + 0x20) + 0x10) != '\0') {
              uVar9 = FUN_010e5800(lVar6,*(undefined8 *)System_Func<Vector4,_int,_float>_TypeInfo);
              if (*(long *)(param_1 + 0x20) == 0) goto LAB_025e0190;
              FUN_025e0780(*(long *)(param_1 + 0x20),uVar9);
            }
            if (*(long *)(param_1 + 0x28) != 0) {
              if (*(char *)(*(long *)(param_1 + 0x28) + 0x10) != '\0') {
                lVar6 = FUN_010e5800(lVar6,*(undefined8 *)
                                            System_Runtime_Remoting_Messaging_ConstructionCallDictionary_TypeInfo
                                    );
                lVar7 = *(long *)(param_1 + 0x28);
                *(long *)(param_1 + 0x40) = lVar6;
                if ((lVar7 == 0) || (lVar6 == 0)) goto LAB_025e0190;
                *(undefined4 *)(lVar6 + 0x28) = *(undefined4 *)(lVar7 + 0x14);
                *(undefined4 *)(lVar6 + 0x24) = *(undefined4 *)(lVar7 + 0x18);
                *(undefined1 *)(lVar6 + 0x20) = *(undefined1 *)(lVar7 + 0x1c);
              }
              uVar9 = *(undefined8 *)(param_1 + 0x48);
              if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                thunk_FUN_00d32864();
              }
              uVar8 = FUN_02681b9c(uVar9,0,0);
              if ((uVar8 & 1) != 0) {
                if (*(long *)(param_1 + 0x48) == 0) goto LAB_025e0190;
                FUN_02689f9c(*(long *)(param_1 + 0x48),1,0);
              }
              goto LAB_025e016c;
            }
          }
        }
      }
    }
  }
LAB_025e0190:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


