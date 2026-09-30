/*
FUNCTION_NAME: UnityEngine.UI.LayoutRebuilder$$PerformLayoutControl
ENTRY_POINT: 038188bc
PROGRAM: vrlegs-libil2cpp.so
SCORE: 118
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;telemetry
EVIDENCE: strong_eye_source_hits_11;weak_xr_or_state_hits_11;validity_or_gating_hits_21;paired_field_refs_with_eye_source;telemetry_or_network_hits_5;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_data_collection_or_telemetry_hits_5
*/


void UnityEngine_UI_LayoutRebuilder__PerformLayoutControl
               (ulong param_1,ulong param_2,ulong param_3,ulong param_4,long param_5,long param_6,
               long *param_7)

{
  int iVar1;
  int iVar2;
  undefined1 auVar3 [16];
  undefined *puVar4;
  float fVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint uVar8;
  undefined8 uVar9;
  ulong uVar10;
  long lVar11;
  undefined8 uVar12;
  ulong extraout_x1;
  ulong uVar13;
  undefined1 auVar14 [16];
  undefined1 uStack0000000000000048;
  uint uStack000000000000004c;
  undefined1 auStack_260 [64];
  ulong uStack_220;
  ulong uStack_218;
  ulong uStack_210;
  undefined8 uStack_208;
  ulong uStack_200;
  undefined8 uStack_1f8;
  ulong uStack_1f0;
  undefined8 uStack_1e8;
  ulong uStack_1e0;
  ulong uStack_1d8;
  ulong uStack_1d0;
  undefined8 uStack_1c8;
  ulong uStack_1c0;
  undefined8 uStack_1b8;
  ulong uStack_1b0;
  undefined8 uStack_1a8;
  ulong uStack_1a0;
  ulong uStack_198;
  ulong uStack_190;
  undefined8 uStack_188;
  ulong uStack_180;
  undefined8 uStack_178;
  ulong uStack_170;
  undefined8 uStack_168;
  undefined1 auStack_160 [64];
  ulong uStack_120;
  ulong uStack_118;
  ulong uStack_110;
  undefined8 uStack_108;
  ulong uStack_100;
  undefined8 uStack_f8;
  ulong uStack_f0;
  undefined8 uStack_e8;
  ulong uStack_e0;
  ulong uStack_d8;
  ulong uStack_d0;
  undefined8 uStack_c8;
  ulong uStack_c0;
  undefined8 uStack_b8;
  ulong uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  ulong uStack_90;
  undefined8 uStack_88;
  ulong uStack_80;
  undefined8 uStack_78;
  ulong uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_58;
  ulong uStack_50;
  ulong uStack_48;
  ulong uStack_40;
  undefined8 uStack_38;
  ulong uStack_30;
  undefined8 uStack_28;
  ulong uStack_20;
  undefined8 uStack_18;
  undefined1 auStack_10 [16];
  
  if ((DAT_04137d97 & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03cbe438);
    FUN_01ab69ac(Method_System_Collections_Generic_Dictionary<ulong,_OVRSpatialAnchor>_Clear__);
    FUN_01ab69ac(
                Method_System_Collections_Generic_Dictionary<ConversionRegistry_ConverterKey,_Delegate>_TryGetValue__
                );
    FUN_01ab69ac(
                Method_System_Collections_Generic_Dictionary<OVRAnchor_DeferredKey,_List<OVRAnchor_DeferredValue>>__ctor__
                );
    FUN_01ab69ac(
                Method_System_Collections_Generic_Dictionary<OVRAnchor_DeferredKey,_List<OVRAnchor_DeferredValue>>_Add__
                );
    FUN_01ab69ac(
                Method_System_Collections_Generic_Dictionary<OVRAnchor_DeferredKey,_List<OVRAnchor_DeferredValue>>_Clear__
                );
    FUN_01ab69ac(PTR_DAT_03cbdf88);
    FUN_01ab69ac(
                Method_System_Collections_Generic_Dictionary<Type,_OVRPlugin_SpaceComponentType>_TryGetValue__
                );
    FUN_01ab69ac(
                Method_System_Collections_Generic_Dictionary<OVRAnchor_DeferredKey,_List<OVRAnchor_DeferredValue>>_Remove__
                );
    FUN_01ab69ac(
                Method_System_Collections_Generic_Dictionary<OVRAnchor_DeferredKey,_List<OVRAnchor_DeferredValue>>_TryGetValue__
                );
    FUN_01ab69ac(
                Method_System_Collections_Generic_Dictionary<OVRPassthroughLayer_ColorMapEditorType,_OVRPlugin_InsightPassthroughColorMapType>__ctor__
                );
    FUN_01ab69ac(
                Method_System_Collections_Generic_Dictionary<OVRPassthroughLayer_ColorMapEditorType,_OVRPlugin_InsightPassthroughColorMapType>_Add__
                );
    FUN_01ab69ac(
                Method_System_Collections_Generic_Dictionary<Message_MessageType,_Callback_RequestCallback>_Clear__
                );
    FUN_01ab69ac(
                Method_System_Collections_Generic_Dictionary<Message_MessageType,_Callback_RequestCallback>_TryGetValue__
                );
    FUN_01ab69ac(
                Method_System_Collections_Generic_Dictionary<OVRPassthroughLayer_ColorMapEditorType,_OVRPlugin_InsightPassthroughColorMapType>_get_Item__
                );
    FUN_01ab69ac(PTR_DAT_03cd92a8);
    FUN_01ab69ac(
                Method_System_Collections_Generic_Dictionary<OVRSkeleton_BoneId,_Tuple<OVRSkeleton_BoneId,_OVRSkeleton_BoneId>>__ctor__
                );
    FUN_01ab69ac(
                Method_System_Collections_Generic_Dictionary<OVRSkeleton_BoneId,_Tuple<OVRSkeleton_BoneId,_OVRSkeleton_BoneId>>_Add__
                );
    DAT_04137d97 = 1;
  }
  puVar4 = 
  Method_System_Collections_Generic_Dictionary<OVRAnchor_DeferredKey,_List<OVRAnchor_DeferredValue>>_Clear__
  ;
  auStack_10._8_8_ = 0;
  auStack_10._0_8_ = 0;
  auVar14 = ZEXT816(0);
  uStack0000000000000048 = 0;
  uStack_28 = 0;
  uStack_30 = 0;
  uStack_18 = 0;
  uStack_20 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_58 = 0;
  switch(*(undefined4 *)(param_5 + 0x34)) {
  case 1:
    if (*(long *)(param_5 + 0x18) == 0) goto LAB_03819294;
    uVar12 = FUN_038d7ea0(*(long *)(param_5 + 0x18),0);
    if (*(int *)(*(long *)
                  Method_System_Collections_Generic_Dictionary<Type,_OVRPlugin_SpaceComponentType>_TryGetValue__
                + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    auStack_10 = FUN_0381a6f8(uVar12,param_2,param_3,param_4,param_1);
    if (*(int *)(*(long *)PTR_DAT_03cd92a8 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    auVar14 = FUN_03804de4(0);
    uVar13 = FUN_036899e4(auStack_10,auVar14._0_8_,auVar14._8_8_,0);
    auVar14 = auStack_10;
    if ((uVar13 & 1) == 0) {
      return;
    }
  case 2:
    puVar4 = PTR_DAT_03cd92a8;
    if (*param_7 != 0) {
      return;
    }
    auStack_10 = auVar14;
    if (*(int *)(*(long *)PTR_DAT_03cd92a8 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    FUN_03804f30(&uStack_a0,0);
    uStack_48 = uStack_98;
    uStack_50 = uStack_a0;
    uStack_38 = uStack_88;
    uStack_40 = uStack_90;
    uStack_28 = uStack_78;
    uStack_30 = uStack_80;
    uStack_18 = uStack_68;
    uStack_20 = uStack_70;
    uVar12 = UnityEngine_TerrainUtils_TerrainUtility_<>c__DisplayClass2_0___ctor(0);
    uVar9 = FUN_036b4c4c(0);
    auVar14 = auStack_10;
    if ((param_6 == 0) || (*(long *)(param_6 + 0x18) == 0)) goto LAB_03819294;
    iVar1 = *(int *)(*(long *)(param_6 + 0x18) + 0x18);
    if (1 < iVar1) {
      if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_03804bc8(0);
    }
    auVar14 = auStack_10;
    if (*(long *)(param_5 + 0x18) == 0) goto LAB_03819294;
    FUN_038d8004(&uStack_e0,*(long *)(param_5 + 0x18),0);
    uStack_98 = uStack_d8;
    uStack_a0 = uStack_e0;
    uStack_88 = uStack_c8;
    uStack_90 = uStack_d0;
    uStack_78 = uStack_b8;
    uStack_80 = uStack_c0;
    uStack_68 = uStack_a8;
    uStack_70 = uStack_b0;
    auVar14 = auStack_10;
    if (*(long *)(param_5 + 0x18) == 0) goto LAB_03819294;
    FUN_038d8768(*(long *)(param_5 + 0x18),0);
    uStack_118 = uStack_98;
    uStack_120 = uStack_a0;
    uStack_108 = uStack_88;
    uStack_110 = uStack_90;
    uStack_f8 = uStack_78;
    uStack_100 = uStack_80;
    uStack_e8 = uStack_68;
    uStack_f0 = uStack_70;
    FUN_03719fa8(&stack0x00000048,&uStack_120,0);
    lVar11 = *(long *)(param_5 + 0x60);
    if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    (**(code **)(lVar11 + 0x18))(*(undefined8 *)(lVar11 + 0x40),*(undefined8 *)(lVar11 + 0x28));
    FUN_03719ffc(&stack0x00000048,0);
    FUN_036774b4(uVar12,0);
    FUN_036b4c74(uVar9,0);
    auVar14 = auStack_10;
    if (*(long *)(param_6 + 0x10) == 0) goto LAB_03819294;
    FUN_02093028(*(long *)(param_6 + 0x10),auStack_160,
                 *(undefined8 *)
                  Method_System_Collections_Generic_Dictionary<OVRAnchor_DeferredKey,_List<OVRAnchor_DeferredValue>>_Remove__
                );
    FUN_0368a4cc(auStack_160,0);
    uStack_198 = uStack_48;
    uStack_1a0 = uStack_50;
    uStack_188 = uStack_38;
    uStack_190 = uStack_40;
    uStack_178 = uStack_28;
    uStack_180 = uStack_30;
    uStack_168 = uStack_18;
    uStack_170 = uStack_20;
    FUN_0368a590(&uStack_1a0,0);
    if (iVar1 < 2) {
      return;
    }
    auVar14 = auStack_10;
    if (*(long *)(param_6 + 0x18) == 0) goto LAB_03819294;
    FUN_02093028(*(long *)(param_6 + 0x18),&uStack_a0,
                 *(undefined8 *)
                  Method_System_Collections_Generic_Dictionary<OVRAnchor_DeferredKey,_List<OVRAnchor_DeferredValue>>_TryGetValue__
                );
    uVar10 = uStack_a0 & 0xffffffff;
    uVar6 = uStack_a0._4_4_;
    uVar13 = uStack_98 & 0xffffffff;
    uVar7 = uStack_98._4_4_;
    if (*(int *)(*(long *)
                  Method_System_Collections_Generic_Dictionary<Type,_OVRPlugin_SpaceComponentType>_TryGetValue__
                + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    auVar14 = FUN_0381a6f8(uVar10,uVar6,uVar13,uVar7,param_1);
    lVar11 = *(long *)puVar4;
    goto LAB_03819248;
  case 3:
    if ((param_6 == 0) || (*(long *)(param_5 + 0x18) == 0)) goto LAB_03819294;
    lVar11 = *(long *)(param_6 + 0x10);
    FUN_038d8004(&uStack_e0,*(long *)(param_5 + 0x18),0);
    auVar14._8_8_ = auStack_10._8_8_;
    auVar14._0_8_ = auStack_10._0_8_;
    uStack_98 = uStack_d8;
    uStack_a0 = uStack_e0;
    uStack_88 = uStack_c8;
    uStack_90 = uStack_d0;
    uStack_78 = uStack_b8;
    uStack_80 = uStack_c0;
    uStack_68 = uStack_a8;
    uStack_70 = uStack_b0;
    if (lVar11 == 0) goto LAB_03819294;
    uStack_1d8 = uStack_d8;
    uStack_1e0 = uStack_e0;
    uStack_1c8 = uStack_c8;
    uStack_1d0 = uStack_d0;
    uStack_1b8 = uStack_b8;
    uStack_1c0 = uStack_c0;
    uStack_1a8 = uStack_a8;
    uStack_1b0 = uStack_b0;
    FUN_02093610(lVar11,&uStack_1e0,
                 *(undefined8 *)
                  Method_System_Collections_Generic_Dictionary<Message_MessageType,_Callback_RequestCallback>_Clear__
                );
    auVar14._8_8_ = auStack_10._8_8_;
    auVar14._0_8_ = auStack_10._0_8_;
    if (*(long *)(param_5 + 0x18) == 0) goto LAB_03819294;
    FUN_038d8004(&uStack_e0,*(long *)(param_5 + 0x18),0);
    uStack_218 = uStack_d8;
    uStack_220 = uStack_e0;
    uStack_208 = uStack_c8;
    uStack_210 = uStack_d0;
    uStack_1f8 = uStack_b8;
    uStack_200 = uStack_c0;
    uStack_1e8 = uStack_a8;
    uStack_1f0 = uStack_b0;
    FUN_0368a4cc(&uStack_220,0);
    auVar14._8_8_ = auStack_10._8_8_;
    auVar14._0_8_ = auStack_10._0_8_;
    if (*(long *)(param_5 + 0x18) == 0) goto LAB_03819294;
    uStack_58 = *(undefined8 *)(*(long *)(param_5 + 0x18) + 0x378);
    lVar11 = FUN_038e31ac(&uStack_58,0);
    puVar4 = Method_System_Collections_Generic_Dictionary<ulong,_OVRSpatialAnchor>_Clear__;
    if (lVar11 == 0) {
      lVar11 = *(long *)
                Method_System_Collections_Generic_Dictionary<ulong,_OVRSpatialAnchor>_Clear__;
      if (*(int *)(lVar11 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar11 = *(long *)puVar4;
      }
      lVar11 = *(long *)(lVar11 + 0xb8);
      uVar13 = (ulong)*(uint *)(lVar11 + 0x10);
      param_2 = (ulong)*(uint *)(lVar11 + 0x14);
      param_3 = (ulong)*(uint *)(lVar11 + 0x18);
      param_4 = (ulong)*(uint *)(lVar11 + 0x1c);
    }
    else {
      uVar13 = FUN_038d8768(lVar11,0);
      param_2 = uStack_d0;
      param_3 = uStack_c0;
      param_4 = uStack_b0;
    }
    auVar14._8_8_ = auStack_10._8_8_;
    auVar14._0_8_ = auStack_10._0_8_;
    if (*(long *)(param_6 + 0x18) == 0) goto LAB_03819294;
    uStack_a0 = CONCAT44((int)param_2,(int)uVar13);
    uStack_98 = CONCAT44((int)param_4,(int)param_3);
    FUN_02093610(*(long *)(param_6 + 0x18),&uStack_a0,
                 *(undefined8 *)
                  Method_System_Collections_Generic_Dictionary<Message_MessageType,_Callback_RequestCallback>_TryGetValue__
                );
    if (*(int *)(*(long *)
                  Method_System_Collections_Generic_Dictionary<Type,_OVRPlugin_SpaceComponentType>_TryGetValue__
                + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    break;
  case 4:
    if ((param_6 == 0) || (*(long *)(param_6 + 0x10) == 0)) goto LAB_03819294;
    FUN_02093204(*(long *)(param_6 + 0x10),&uStack_a0,
                 *(undefined8 *)
                  Method_System_Collections_Generic_Dictionary<OVRPassthroughLayer_ColorMapEditorType,_OVRPlugin_InsightPassthroughColorMapType>__ctor__
                );
    auVar14._8_8_ = auStack_10._8_8_;
    auVar14._0_8_ = auStack_10._0_8_;
    if (*(long *)(param_6 + 0x10) == 0) goto LAB_03819294;
    FUN_02093028(*(long *)(param_6 + 0x10),auStack_260,
                 *(undefined8 *)
                  Method_System_Collections_Generic_Dictionary<OVRAnchor_DeferredKey,_List<OVRAnchor_DeferredValue>>_Remove__
                );
    FUN_0368a4cc(auStack_260,0);
    goto LAB_03818f84;
  case 5:
    if (*(long *)(param_5 + 0x18) == 0) goto LAB_03819294;
    uVar12 = FUN_038d8768(*(long *)(param_5 + 0x18),0);
    auVar3._8_8_ = auStack_10._8_8_;
    auVar3._0_8_ = auStack_10._0_8_;
    auVar14._8_8_ = auStack_10._8_8_;
    auVar14._0_8_ = auStack_10._0_8_;
    if (param_6 == 0) goto LAB_03819294;
    uStack000000000000004c = (uint)param_1;
    auVar14 = auVar3;
    if (*(long *)(param_6 + 0x18) == 0) goto LAB_03819294;
    FUN_02093028(*(long *)(param_6 + 0x18),&uStack_a0,
                 *(undefined8 *)
                  Method_System_Collections_Generic_Dictionary<OVRAnchor_DeferredKey,_List<OVRAnchor_DeferredValue>>_TryGetValue__
                );
    if (*(int *)(*(long *)
                  Method_System_Collections_Generic_Dictionary<Type,_OVRPlugin_SpaceComponentType>_TryGetValue__
                + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar13 = FUN_0381aa60(uVar12);
    auVar14._8_8_ = auStack_10._8_8_;
    auVar14._0_8_ = auStack_10._0_8_;
    if (*(long *)(param_6 + 0x18) == 0) goto LAB_03819294;
    uStack_a0 = CONCAT44((int)param_2,(int)uVar13);
    uStack_98 = CONCAT44((int)param_4,(int)param_3);
    FUN_02093610(*(long *)(param_6 + 0x18),&uStack_a0,
                 *(undefined8 *)
                  Method_System_Collections_Generic_Dictionary<Message_MessageType,_Callback_RequestCallback>_TryGetValue__
                );
    param_1 = (ulong)uStack000000000000004c;
    break;
  case 6:
    if (param_6 == 0) goto LAB_03819294;
LAB_03818f84:
    auVar14._8_8_ = auStack_10._8_8_;
    auVar14._0_8_ = auStack_10._0_8_;
    if (*(long *)(param_6 + 0x18) == 0) goto LAB_03819294;
    FUN_02093204(*(long *)(param_6 + 0x18),&uStack_a0,
                 *(undefined8 *)
                  Method_System_Collections_Generic_Dictionary<OVRPassthroughLayer_ColorMapEditorType,_OVRPlugin_InsightPassthroughColorMapType>_Add__
                );
    auVar14._8_8_ = auStack_10._8_8_;
    auVar14._0_8_ = auStack_10._0_8_;
    if (*(long *)(param_6 + 0x18) == 0) goto LAB_03819294;
    FUN_02093028(*(long *)(param_6 + 0x18),&uStack_a0,
                 *(undefined8 *)
                  Method_System_Collections_Generic_Dictionary<OVRAnchor_DeferredKey,_List<OVRAnchor_DeferredValue>>_TryGetValue__
                );
    puVar4 = Method_System_Collections_Generic_Dictionary<ulong,_OVRSpatialAnchor>_Clear__;
    fVar5 = (float)uStack_a0;
    uVar13 = uStack_a0 & 0xffffffff;
    param_2 = uStack_a0 >> 0x20;
    param_3 = uStack_98 & 0xffffffff;
    lVar11 = *(long *)Method_System_Collections_Generic_Dictionary<ulong,_OVRSpatialAnchor>_Clear__;
    param_4 = uStack_98 >> 0x20;
    if (*(int *)(lVar11 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      lVar11 = *(long *)puVar4;
    }
    if (fVar5 == **(float **)(lVar11 + 0xb8)) {
      if (*(int *)(*(long *)PTR_DAT_03cd92a8 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_03804bc8(0);
      return;
    }
    if (*(int *)(*(long *)
                  Method_System_Collections_Generic_Dictionary<Type,_OVRPlugin_SpaceComponentType>_TryGetValue__
                + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    break;
  case 7:
    if (*(int *)(*(long *)PTR_DAT_03cd92a8 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    FUN_03804de4(0);
    uVar12 = FUN_036b6e54(extraout_x1,extraout_x1 >> 0x20,0x18,2,0);
    FUN_036b4c74(uVar12,0);
    FUN_0368a8bc(0,0,0,0,DAT_00d38944,1,1,0);
    auVar14._8_8_ = auStack_10._8_8_;
    auVar14._0_8_ = auStack_10._0_8_;
    if (param_6 != 0) {
      lVar11 = *(long *)(param_6 + 0x20);
      uVar12 = FUN_036b4c4c(0);
      auVar14._8_8_ = auStack_10._8_8_;
      auVar14._0_8_ = auStack_10._0_8_;
      if (lVar11 != 0) {
        FUN_01b5f01c(lVar11,uVar12,
                     *(undefined8 *)
                      Method_System_Collections_Generic_Dictionary<ConversionRegistry_ConverterKey,_Delegate>_TryGetValue__
                    );
        return;
      }
    }
    goto LAB_03819294;
  case 8:
    if ((param_6 != 0) && (*(long *)(param_6 + 0x20) != 0)) {
      iVar1 = *(int *)(*(long *)(param_6 + 0x20) + 0x18);
      iVar2 = iVar1 + -1;
      if (*(int *)(*(long *)PTR_DAT_03cbe438 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_0367b7bc(0 < iVar2,0);
      puVar4 = 
      Method_System_Collections_Generic_Dictionary<OVRAnchor_DeferredKey,_List<OVRAnchor_DeferredValue>>_Clear__
      ;
      auVar14._8_8_ = auStack_10._8_8_;
      auVar14._0_8_ = auStack_10._0_8_;
      if (*(long *)(param_6 + 0x20) != 0) {
        FUN_02215a88(*(long *)(param_6 + 0x20),iVar1 + -2,&uStack_a0,
                     *(undefined8 *)
                      Method_System_Collections_Generic_Dictionary<OVRAnchor_DeferredKey,_List<OVRAnchor_DeferredValue>>_Clear__
                    );
        uVar13 = uStack_a0;
        uVar12 = FUN_036b4c4c(0);
        if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
          thunk_FUN_01a58e78(*(long *)PTR_DAT_03cbdf88);
        }
        uVar8 = FUN_036d35a8(uVar13,uVar12,0);
        FUN_0367bb40(uVar8 & 1,
                     *(undefined8 *)
                      Method_System_Collections_Generic_Dictionary<OVRSkeleton_BoneId,_Tuple<OVRSkeleton_BoneId,_OVRSkeleton_BoneId>>__ctor__
                     ,0);
        auVar14._8_8_ = auStack_10._8_8_;
        auVar14._0_8_ = auStack_10._0_8_;
        if (*(long *)(param_6 + 0x20) != 0) {
          FUN_02215a88(*(long *)(param_6 + 0x20),iVar2,&uStack_a0,*(undefined8 *)puVar4);
          uVar13 = uStack_a0;
          uVar10 = FUN_036cee6c(uStack_a0,0,0);
          if ((uVar10 & 1) != 0) {
            FUN_036b5408(uVar13,0);
          }
          auVar14._8_8_ = auStack_10._8_8_;
          auVar14._0_8_ = auStack_10._0_8_;
          if (*(long *)(param_6 + 0x20) != 0) {
            FUN_022190f4(*(long *)(param_6 + 0x20),iVar2,
                         *(undefined8 *)
                          Method_System_Collections_Generic_Dictionary<OVRAnchor_DeferredKey,_List<OVRAnchor_DeferredValue>>__ctor__
                        );
            return;
          }
        }
      }
    }
    goto LAB_03819294;
  case 9:
    if ((param_6 != 0) && (lVar11 = *(long *)(param_6 + 0x20), lVar11 != 0)) {
      FUN_02215a88(lVar11,*(int *)(lVar11 + 0x18) + -1,&uStack_a0,
                   *(undefined8 *)
                    Method_System_Collections_Generic_Dictionary<OVRAnchor_DeferredKey,_List<OVRAnchor_DeferredValue>>_Clear__
                  );
      uVar13 = uStack_a0;
      auVar14._8_8_ = auStack_10._8_8_;
      auVar14._0_8_ = auStack_10._0_8_;
      lVar11 = *(long *)(param_6 + 0x20);
      if (lVar11 != 0) {
        FUN_02215a88(lVar11,*(int *)(lVar11 + 0x18) + -2,&uStack_a0,*(undefined8 *)puVar4);
        uVar12 = FUN_036b4c4c(0);
        if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
          thunk_FUN_01a58e78(*(long *)PTR_DAT_03cbdf88);
        }
        uVar8 = FUN_036d35a8(uVar13,uVar12,0);
        if (*(int *)(*(long *)PTR_DAT_03cbe438 + 0xe0) == 0) {
          thunk_FUN_01a58e78(*(long *)PTR_DAT_03cbe438);
        }
        FUN_0367bb40(uVar8 & 1,
                     *(undefined8 *)
                      Method_System_Collections_Generic_Dictionary<OVRSkeleton_BoneId,_Tuple<OVRSkeleton_BoneId,_OVRSkeleton_BoneId>>_Add__
                     ,0);
        FUN_0381ab68(0,param_5,uVar13,uStack_a0);
        return;
      }
    }
LAB_03819294:
    auStack_10 = auVar14;
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  default:
    goto switchD_03818a18_default;
  }
  auVar14 = FUN_0381a6f8(uVar13,param_2,param_3,param_4,param_1);
  lVar11 = *(long *)PTR_DAT_03cd92a8;
LAB_03819248:
  if (*(int *)(lVar11 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  FUN_03804b0c(auVar14._0_8_,auVar14._8_8_,0);
switchD_03818a18_default:
  return;
}


