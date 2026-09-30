/*
FUNCTION_NAME: FUN_0596b03c
ENTRY_POINT: 0596b03c
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 76
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_16;ui_or_gameplay_sink_hits_14;telemetry_or_network_hits_12
*/


void FUN_0596b03c(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_68;
  
  puVar2 = Method_System_Collections_Generic_List<UIDocument>_Insert__;
  if ((DAT_06bc192a & 1) == 0) {
    FUN_02f08768(Method_System_Collections_Generic_List<UIDocument>_Insert__);
    FUN_02f08768(Method_System_Collections_Generic_List<DataBindingManager_BindingData>__ctor__);
    FUN_02f08768(Method_System_Collections_Generic_List<DataBindingManager_BindingData>__ctor__);
    FUN_02f08768(Method_System_Collections_Generic_List<DataBindingManager_BindingData>_Add__);
    FUN_02f08768(Method_System_Collections_Generic_List<DataBindingManager_BindingData>_AddRange__);
    FUN_02f08768(
                Method_System_Collections_Generic_List<DataBindingManager_BindingData>_GetEnumerator__
                );
    FUN_02f08768(Method_System_Collections_Generic_List<DataBindingManager_BindingData>_Remove__);
    FUN_02f08768(Method_System_Collections_Generic_List<DataBindingManager_BindingData>_RemoveAt__);
    FUN_02f08768(Method_System_Collections_Generic_List<DataBindingManager_BindingData>_get_Count__)
    ;
    FUN_02f08768(Method_System_Collections_Generic_List<DataBindingManager_BindingData>_get_Item__);
    FUN_02f08768(Method_System_Collections_Generic_List<DataBindingManager_BindingRequest>__ctor__);
    FUN_02f08768(Method_System_Collections_Generic_List<DataBindingManager_BindingRequest>_Add__);
    FUN_02f08768(Method_System_Collections_Generic_List<DataBindingManager_BindingRequest>_Clear__);
    FUN_02f08768(
                Method_System_Collections_Generic_List<DataBindingManager_BindingRequest>_get_Count__
                );
    FUN_02f08768(
                Method_System_Collections_Generic_List<DataBindingManager_BindingRequest>_get_Item__
                );
    FUN_02f08768(
                Method_System_Collections_Generic_List<DataBindingManager_BindingRequest>_set_Item__
                );
    FUN_02f08768(Method_System_Collections_Generic_List<DataBindingManager_ChangesFromUI>__ctor__);
    FUN_02f08768(Method_System_Collections_Generic_List<DataBindingManager_ChangesFromUI>_Add__);
    FUN_02f08768(Method_System_Collections_Generic_List<DataBindingManager_ChangesFromUI>_Clear__);
    FUN_02f08768(Method_System_Collections_Generic_List<Value>_Clear__);
    FUN_02f08768(PTR_DAT_067c9cb8);
    FUN_02f08768(Method_System_Collections_Generic_List<BsonReader_ContainerContext>_get_Count__);
    FUN_02f08768(Method_System_Collections_Generic_List<BsonReader_ContainerContext>_get_Item__);
    FUN_02f08768(PTR_DAT_067daf50);
    FUN_02f08768(Method_System_Collections_Generic_List<ClickDetector_ButtonClickStatus>__ctor__);
    FUN_02f08768(Method_System_Collections_Generic_List<HandJointId>__ctor__);
    FUN_02f08768(
                Method_System_Collections_Generic_List<ClickDetector_ButtonClickStatus>_GetEnumerator__
                );
    FUN_02f08768(Method_System_Collections_Generic_List<ClickDetector_ButtonClickStatus>_get_Item__)
    ;
    FUN_02f08768(Method_System_Collections_Generic_List<ColorPicker_SliderMode>__ctor__);
    FUN_02f08768(PTR_DAT_067d6b88);
    FUN_02f08768(Method_System_Collections_Generic_Dictionary<int,_GraphicsFence>_set_Item__);
    FUN_02f08768(PTR_DAT_067d6b90);
    FUN_02f08768(Method_System_Collections_Generic_List<ColorPicker_SliderMode>_Add__);
    FUN_02f08768(Method_System_Collections_Generic_List<CompositionLayerManager_LayerInfo>__ctor__);
    FUN_02f08768(Method_System_Collections_Generic_List<CompositionLayerManager_LayerInfo>_Add__);
    DAT_06bc192a = 1;
  }
  puVar4 = Method_System_Collections_Generic_List<ColorPicker_SliderMode>__ctor__;
  puVar1 = PTR_DAT_067c9cb8;
  local_68 = 0;
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  FUN_059531d0(param_1);
  FUN_0624193c(param_1,*(undefined8 *)puVar4,0);
  lVar7 = thunk_FUN_02f45270(*(undefined8 *)puVar1);
  FUN_0623f858(lVar7,0);
  puVar2 = Method_System_Collections_Generic_List<DataBindingManager_ChangesFromUI>__ctor__;
  if (lVar7 != 0) {
    FUN_0623f468(lVar7,1,0);
    lVar8 = thunk_FUN_02f45270(*(undefined8 *)puVar2);
    FUN_059a0670(lVar8,0);
    puVar6 = Method_System_Collections_Generic_List<DataBindingManager_ChangesFromUI>_Clear__;
    puVar3 = Method_System_Collections_Generic_List<ClickDetector_ButtonClickStatus>__ctor__;
    puVar4 = PTR_DAT_067d6b90;
    if (lVar8 != 0) {
      FUN_0623f514(lVar8,*(undefined8 *)
                          Method_System_Collections_Generic_List<ClickDetector_ButtonClickStatus>__ctor__
                   ,0);
      FUN_03e2ef28(lVar8,*(undefined8 *)puVar4,*(undefined8 *)puVar6);
      uVar16 = *(undefined8 *)puVar3;
      *(long *)(param_1 + 0x2f8) = lVar8;
      FUN_0624193c(lVar7,uVar16,0);
      FUN_06247510(lVar7,*(undefined8 *)(param_1 + 0x2f8),0);
      lVar8 = thunk_FUN_02f45270(*(undefined8 *)puVar1);
      FUN_0623f858(lVar8,0);
      if (lVar8 != 0) {
        FUN_0623f468(lVar8,1,0);
        lVar9 = thunk_FUN_02f45270(*(undefined8 *)puVar2);
        FUN_059a0670(lVar9,0);
        puVar5 = Method_System_Collections_Generic_List<CompositionLayerManager_LayerInfo>__ctor__;
        puVar3 = PTR_DAT_067d6b88;
        if (lVar9 != 0) {
          FUN_0623f514(lVar9,*(undefined8 *)
                              Method_System_Collections_Generic_List<CompositionLayerManager_LayerInfo>__ctor__
                       ,0);
          FUN_03e2ef28(lVar9,*(undefined8 *)puVar3,*(undefined8 *)puVar6);
          uVar16 = *(undefined8 *)puVar5;
          *(long *)(param_1 + 0x300) = lVar9;
          FUN_0624193c(lVar8,uVar16,0);
          FUN_06247510(lVar8,*(undefined8 *)(param_1 + 0x300),0);
          lVar9 = thunk_FUN_02f45270(*(undefined8 *)puVar1);
          FUN_0623f858(lVar9,0);
          if (lVar9 != 0) {
            FUN_0623f468(lVar9,1,0);
            lVar10 = thunk_FUN_02f45270(*(undefined8 *)puVar2);
            FUN_059a0670(lVar10,0);
            puVar5 = 
            Method_System_Collections_Generic_List<ClickDetector_ButtonClickStatus>_get_Item__;
            puVar3 = PTR_DAT_067daf50;
            if (lVar10 != 0) {
              FUN_0623f514(lVar10,*(undefined8 *)
                                   Method_System_Collections_Generic_List<ClickDetector_ButtonClickStatus>_get_Item__
                           ,0);
              FUN_03e2ef28(lVar10,*(undefined8 *)puVar3,*(undefined8 *)puVar6);
              uVar16 = *(undefined8 *)puVar5;
              *(long *)(param_1 + 0x308) = lVar10;
              FUN_0624193c(lVar9,uVar16,0);
              FUN_06247510(lVar9,*(undefined8 *)(param_1 + 0x308),0);
              lVar10 = thunk_FUN_02f45270(*(undefined8 *)puVar1);
              FUN_0623f858(lVar10,0);
              if (lVar10 != 0) {
                FUN_0623f468(lVar10,1,0);
                lVar11 = thunk_FUN_02f45270(*(undefined8 *)puVar2);
                FUN_059a0670(lVar11,0);
                puVar3 = 
                Method_System_Collections_Generic_List<CompositionLayerManager_LayerInfo>_Add__;
                if (lVar11 != 0) {
                  FUN_0623f514(lVar11,*(undefined8 *)
                                       Method_System_Collections_Generic_List<CompositionLayerManager_LayerInfo>_Add__
                               ,0);
                  FUN_03e2ef28(lVar11,*(undefined8 *)puVar4,
                               *(undefined8 *)
                                Method_System_Collections_Generic_List<DataBindingManager_ChangesFromUI>_Clear__
                              );
                  uVar16 = *(undefined8 *)puVar3;
                  *(long *)(param_1 + 0x310) = lVar11;
                  FUN_0624193c(lVar10,uVar16,0);
                  FUN_06247510(lVar10,*(undefined8 *)(param_1 + 0x310),0);
                  lVar11 = thunk_FUN_02f45270(*(undefined8 *)puVar1);
                  FUN_0623f858(lVar11,0);
                  if (lVar11 != 0) {
                    FUN_0623f468(lVar11,1,0);
                    lVar12 = thunk_FUN_02f45270(*(undefined8 *)puVar2);
                    FUN_059a0670(lVar12,0);
                    puVar4 = Method_System_Collections_Generic_List<ColorPicker_SliderMode>_Add__;
                    if (lVar12 != 0) {
                      FUN_0623f514(lVar12,*(undefined8 *)
                                           Method_System_Collections_Generic_List<ColorPicker_SliderMode>_Add__
                                   ,0);
                      FUN_03e2ef28(lVar12,*(undefined8 *)PTR_DAT_067d6b88,
                                   *(undefined8 *)
                                    Method_System_Collections_Generic_List<DataBindingManager_ChangesFromUI>_Clear__
                                  );
                      uVar16 = *(undefined8 *)puVar4;
                      *(long *)(param_1 + 0x318) = lVar12;
                      FUN_0624193c(lVar11,uVar16,0);
                      FUN_06247510(lVar11,*(undefined8 *)(param_1 + 0x318),0);
                      lVar12 = thunk_FUN_02f45270(*(undefined8 *)puVar1);
                      FUN_0623f858(lVar12,0);
                      if (lVar12 != 0) {
                        FUN_0623f468(lVar12,1,0);
                        lVar13 = thunk_FUN_02f45270(*(undefined8 *)puVar2);
                        FUN_059a0670(lVar13,0);
                        puVar4 = 
                        Method_System_Collections_Generic_List<ClickDetector_ButtonClickStatus>_GetEnumerator__
                        ;
                        puVar1 = Method_System_Collections_Generic_List<Value>_Clear__;
                        puVar2 = Method_System_Collections_Generic_List<HandJointId>__ctor__;
                        if (lVar13 != 0) {
                          FUN_0623f514(lVar13,*(undefined8 *)
                                               Method_System_Collections_Generic_List<ClickDetector_ButtonClickStatus>_GetEnumerator__
                                       ,0);
                          FUN_03e2ef28(lVar13,*(undefined8 *)PTR_DAT_067daf50,
                                       *(undefined8 *)
                                        Method_System_Collections_Generic_List<DataBindingManager_ChangesFromUI>_Clear__
                                      );
                          uVar16 = *(undefined8 *)puVar4;
                          *(long *)(param_1 + 800) = lVar13;
                          FUN_0624193c(lVar12,uVar16,0);
                          FUN_06247510(lVar12,*(undefined8 *)(param_1 + 800),0);
                          lVar13 = thunk_FUN_02f45270(*(undefined8 *)puVar1);
                          FUN_059be2f4(lVar13,*(undefined8 *)puVar2,0);
                          puVar4 = 
                          Method_System_Collections_Generic_List<BsonReader_ContainerContext>_get_Count__
                          ;
                          puVar2 = 
                          Method_System_Collections_Generic_Dictionary<int,_GraphicsFence>_set_Item__
                          ;
                          if (lVar13 != 0) {
                            FUN_059be3bc(lVar13,2,0);
                            FUN_0623f468(lVar13,1,0);
                            FUN_0624193c(lVar13,*(undefined8 *)puVar4,0);
                            lVar14 = thunk_FUN_02f45270(*(undefined8 *)puVar1);
                            FUN_059be2f4(lVar14,*(undefined8 *)puVar2,0);
                            if (lVar14 != 0) {
                              FUN_059be3bc(lVar14,2,0);
                              FUN_0623f468(lVar14,1,0);
                              FUN_0624193c(lVar14,*(undefined8 *)puVar4,0);
                              puVar2 = PTR_DAT_067c9cb8;
                              lVar15 = thunk_FUN_02f45270(*(undefined8 *)PTR_DAT_067c9cb8);
                              FUN_0623f858(lVar15,0);
                              puVar1 = 
                              Method_System_Collections_Generic_List<BsonReader_ContainerContext>_get_Item__
                              ;
                              if (lVar15 != 0) {
                                FUN_0623f514(lVar15,*(undefined8 *)
                                                                                                          
                                                  Method_System_Collections_Generic_List<BsonReader_ContainerContext>_get_Item__
                                             ,0);
                                FUN_0623f468(lVar15,1,0);
                                FUN_0624193c(lVar15,*(undefined8 *)puVar1,0);
                                FUN_06247510(lVar15,lVar13,0);
                                FUN_06247510(lVar15,lVar7,0);
                                FUN_06247510(lVar15,lVar8,0);
                                FUN_06247510(lVar15,lVar9,0);
                                lVar7 = thunk_FUN_02f45270(*(undefined8 *)puVar2);
                                FUN_0623f858(lVar7,0);
                                puVar3 = 
                                Method_System_Collections_Generic_List<DataBindingManager_BindingRequest>_set_Item__
                                ;
                                puVar4 = 
                                Method_System_Collections_Generic_List<DataBindingManager_BindingRequest>_get_Item__
                                ;
                                puVar2 = 
                                Method_System_Collections_Generic_List<DataBindingManager_BindingRequest>_get_Count__
                                ;
                                if (lVar7 != 0) {
                                  FUN_0623f514(lVar7,*(undefined8 *)puVar1,0);
                                  FUN_0623f468(lVar7,1,0);
                                  FUN_0624193c(lVar7,*(undefined8 *)puVar1,0);
                                  FUN_06247510(lVar7,lVar14,0);
                                  FUN_06247510(lVar7,lVar10,0);
                                  FUN_06247510(lVar7,lVar11,0);
                                  FUN_06247510(lVar7,lVar12,0);
                                  local_68 = *(undefined8 *)(param_1 + 0x260);
                                  FUN_0624b7dc(&local_68,lVar15,0);
                                  local_68 = *(undefined8 *)(param_1 + 0x260);
                                  FUN_0624b7dc(&local_68,lVar7,0);
                                  FUN_0596bb04(param_1,2);
                                  local_80 = 0;
                                  uStack_78 = 0;
                                  local_70 = 0;
                                  FUN_0596bc64(param_1,&local_80);
                                  uVar17 = *(undefined8 *)(param_1 + 0x2f8);
                                  uVar16 = thunk_FUN_02f45270(*(undefined8 *)puVar2);
                                  FUN_04d8cf5c(uVar16,param_1,
                                               *(undefined8 *)
                                                Method_System_Collections_Generic_List<DataBindingManager_BindingData>__ctor__
                                               ,0);
                                  FUN_034367bc(uVar17,uVar16,*(undefined8 *)puVar3);
                                  uVar17 = *(undefined8 *)(param_1 + 0x300);
                                  uVar16 = thunk_FUN_02f45270(*(undefined8 *)puVar2);
                                  FUN_04d8cf5c(uVar16,param_1,
                                               *(undefined8 *)
                                                Method_System_Collections_Generic_List<DataBindingManager_BindingData>_Add__
                                               ,0);
                                  FUN_034367bc(uVar17,uVar16,*(undefined8 *)puVar3);
                                  uVar17 = *(undefined8 *)(param_1 + 0x308);
                                  uVar16 = thunk_FUN_02f45270(*(undefined8 *)puVar2);
                                  FUN_04d8cf5c(uVar16,param_1,
                                               *(undefined8 *)
                                                Method_System_Collections_Generic_List<DataBindingManager_BindingData>_GetEnumerator__
                                               ,0);
                                  FUN_034367bc(uVar17,uVar16,*(undefined8 *)puVar3);
                                  uVar17 = *(undefined8 *)(param_1 + 0x310);
                                  uVar16 = thunk_FUN_02f45270(*(undefined8 *)puVar2);
                                  FUN_04d8cf5c(uVar16,param_1,
                                               *(undefined8 *)
                                                Method_System_Collections_Generic_List<DataBindingManager_BindingData>_RemoveAt__
                                               ,0);
                                  FUN_034367bc(uVar17,uVar16,*(undefined8 *)puVar3);
                                  uVar17 = *(undefined8 *)(param_1 + 0x318);
                                  uVar16 = thunk_FUN_02f45270(*(undefined8 *)puVar2);
                                  FUN_04d8cf5c(uVar16,param_1,
                                               *(undefined8 *)
                                                Method_System_Collections_Generic_List<DataBindingManager_BindingData>_get_Item__
                                               ,0);
                                  FUN_034367bc(uVar17,uVar16,*(undefined8 *)puVar3);
                                  uVar17 = *(undefined8 *)(param_1 + 800);
                                  uVar16 = thunk_FUN_02f45270(*(undefined8 *)puVar2);
                                  FUN_04d8cf5c(uVar16,param_1,
                                               *(undefined8 *)
                                                Method_System_Collections_Generic_List<DataBindingManager_BindingRequest>_Add__
                                               ,0);
                                  FUN_034367bc(uVar17,uVar16,*(undefined8 *)puVar3);
                                  uVar17 = *(undefined8 *)(param_1 + 0x2f8);
                                  uVar16 = thunk_FUN_02f45270(*(undefined8 *)puVar4);
                                  FUN_04d8cf5c(uVar16,param_1,
                                               *(undefined8 *)
                                                Method_System_Collections_Generic_List<DataBindingManager_BindingData>__ctor__
                                               ,0);
                                  puVar2 = 
                                  Method_System_Collections_Generic_List<DataBindingManager_ChangesFromUI>_Add__
                                  ;
                                  FUN_03487ec4(uVar17,uVar16,
                                               *(undefined8 *)
                                                Method_System_Collections_Generic_List<DataBindingManager_ChangesFromUI>_Add__
                                              );
                                  uVar17 = *(undefined8 *)(param_1 + 0x300);
                                  uVar16 = thunk_FUN_02f45270(*(undefined8 *)puVar4);
                                  FUN_04d8cf5c(uVar16,param_1,
                                               *(undefined8 *)
                                                Method_System_Collections_Generic_List<DataBindingManager_BindingData>_AddRange__
                                               ,0);
                                  FUN_03487ec4(uVar17,uVar16,*(undefined8 *)puVar2);
                                  uVar17 = *(undefined8 *)(param_1 + 0x308);
                                  uVar16 = thunk_FUN_02f45270(*(undefined8 *)puVar4);
                                  FUN_04d8cf5c(uVar16,param_1,
                                               *(undefined8 *)
                                                Method_System_Collections_Generic_List<DataBindingManager_BindingData>_Remove__
                                               ,0);
                                  FUN_03487ec4(uVar17,uVar16,*(undefined8 *)puVar2);
                                  uVar17 = *(undefined8 *)(param_1 + 0x310);
                                  uVar16 = thunk_FUN_02f45270(*(undefined8 *)puVar4);
                                  FUN_04d8cf5c(uVar16,param_1,
                                               *(undefined8 *)
                                                Method_System_Collections_Generic_List<DataBindingManager_BindingData>_get_Count__
                                               ,0);
                                  FUN_03487ec4(uVar17,uVar16,*(undefined8 *)puVar2);
                                  uVar17 = *(undefined8 *)(param_1 + 0x318);
                                  uVar16 = thunk_FUN_02f45270(*(undefined8 *)puVar4);
                                  FUN_04d8cf5c(uVar16,param_1,
                                               *(undefined8 *)
                                                Method_System_Collections_Generic_List<DataBindingManager_BindingRequest>__ctor__
                                               ,0);
                                  FUN_03487ec4(uVar17,uVar16,*(undefined8 *)puVar2);
                                  uVar17 = *(undefined8 *)(param_1 + 800);
                                  uVar16 = thunk_FUN_02f45270(*(undefined8 *)puVar4);
                                  FUN_04d8cf5c(uVar16,param_1,
                                               *(undefined8 *)
                                                Method_System_Collections_Generic_List<DataBindingManager_BindingRequest>_Clear__
                                               ,0);
                                  FUN_03487ec4(uVar17,uVar16,*(undefined8 *)puVar2);
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
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


