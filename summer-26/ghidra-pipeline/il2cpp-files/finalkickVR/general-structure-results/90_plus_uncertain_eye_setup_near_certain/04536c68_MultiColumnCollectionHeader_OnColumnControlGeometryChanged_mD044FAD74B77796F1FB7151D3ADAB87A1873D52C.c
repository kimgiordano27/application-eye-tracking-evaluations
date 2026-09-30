/*
FUNCTION_NAME: MultiColumnCollectionHeader_OnColumnControlGeometryChanged_mD044FAD74B77796F1FB7151D3ADAB87A1873D52C
ENTRY_POINT: 04536c68
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 91
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_3;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_3;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void MultiColumnCollectionHeader_OnColumnControlGeometryChanged_mD044FAD74B77796F1FB7151D3ADAB87A1873D52C
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined4 param_4,
               MultiColumnCollectionHeader_t0B041BD57A14950E8C33DCD854F3A3C2C3DA706D *param_5,
               GeometryChangedEvent_tB4A621001850F337A676F8CC27F172B8ADB22A9A *param_6,
               undefined8 param_7)

{
  MultiColumnHeaderColumn_t6F44266EE1B6EEB83465A7FE3BA6A6C7CBF8F9B4 *pMVar1;
  GeometryChangedEvent_tB4A621001850F337A676F8CC27F172B8ADB22A9A *pGVar2;
  Il2CppObject *pIVar3;
  Dictionary_2_t1C6F670EE6B3EEEEFF2CBA243476B8AC9C173D11 *pDVar4;
  Column_tD686764EBBB4AFE8473E2464D0039885E3A2EC6A *pCVar5;
  ColumnData_t0AB07CB43923527FF3700146C0F98D09B673492A *pCVar6;
  void *pvVar7;
  undefined8 uVar8;
  undefined4 uVar9;
  float fVar10;
  float fVar11;
  undefined1 auVar12 [12];
  undefined4 uStack_134;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined1 local_49;
  ColumnData_t0AB07CB43923527FF3700146C0F98D09B673492A *local_48;
  MultiColumnHeaderColumn_t6F44266EE1B6EEB83465A7FE3BA6A6C7CBF8F9B4 *local_40;
  undefined8 local_38;
  GeometryChangedEvent_tB4A621001850F337A676F8CC27F172B8ADB22A9A *local_30;
  MultiColumnCollectionHeader_t0B041BD57A14950E8C33DCD854F3A3C2C3DA706D *local_28;
  
  local_38 = param_7;
  local_30 = param_6;
  local_28 = param_5;
  if ((MultiColumnCollectionHeader_OnColumnControlGeometryChanged_mD044FAD74B77796F1FB7151D3ADAB87A1873D52C
       ::s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               PTR_Dictionary_2_get_Item_mAB9F125933475A1528EA7EC5B574A2691AE65CD8_RuntimeMethod_var_048dbff0
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Nullable<InputUserAccountHandle>_get_HasValue__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_Dictionary<int,_ReflectionProbeManager_CachedProbe>_GetEnumerator__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               PTR_MultiColumnHeaderColumn_t6F44266EE1B6EEB83465A7FE3BA6A6C7CBF8F9B4_il2cpp_TypeInfo_var_048dbd98
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector3f>__ctor__);
    MultiColumnCollectionHeader_OnColumnControlGeometryChanged_mD044FAD74B77796F1FB7151D3ADAB87A1873D52C
    ::s_Il2CppMethodInitialized = 1;
  }
  pGVar2 = local_30;
  local_40 = (MultiColumnHeaderColumn_t6F44266EE1B6EEB83465A7FE3BA6A6C7CBF8F9B4 *)0x0;
  local_48 = (ColumnData_t0AB07CB43923527FF3700146C0F98D09B673492A *)0x0;
  local_49 = 0;
  local_60 = 0;
  uStack_58 = 0;
  NullCheck(local_30);
  pIVar3 = (Il2CppObject *)EventBase_get_target_m9E5CB6AC9A51E9F61D9540D279BFA53C04AD010E(pGVar2,0);
  local_40 = (MultiColumnHeaderColumn_t6F44266EE1B6EEB83465A7FE3BA6A6C7CBF8F9B4 *)
             IsInstClass(pIVar3,*(Il2CppClass **)
                                 PTR_MultiColumnHeaderColumn_t6F44266EE1B6EEB83465A7FE3BA6A6C7CBF8F9B4_il2cpp_TypeInfo_var_048dbd98
                        );
  local_49 = local_40 == (MultiColumnHeaderColumn_t6F44266EE1B6EEB83465A7FE3BA6A6C7CBF8F9B4 *)0x0;
  if (!(bool)local_49) {
    pDVar4 = (Dictionary_2_t1C6F670EE6B3EEEEFF2CBA243476B8AC9C173D11 *)
             MultiColumnCollectionHeader_get_columnDataMap_mA525250831644003B806C2732E14BDA37BC1A862_inline
                       (local_28,(MethodInfo *)0x0);
    pMVar1 = local_40;
    NullCheck(local_40);
    pCVar5 = (Column_tD686764EBBB4AFE8473E2464D0039885E3A2EC6A *)
             MultiColumnHeaderColumn_get_column_mC2830961D571CC5AD223379819A2FC6A02DD7519_inline
                       (pMVar1,(MethodInfo *)0x0);
    NullCheck(pDVar4);
    pCVar6 = (ColumnData_t0AB07CB43923527FF3700146C0F98D09B673492A *)
             Dictionary_2_get_Item_mAB9F125933475A1528EA7EC5B574A2691AE65CD8
                       (pDVar4,pCVar5,
                        *(MethodInfo **)
                         PTR_Dictionary_2_get_Item_mAB9F125933475A1528EA7EC5B574A2691AE65CD8_RuntimeMethod_var_048dbff0
                       );
    local_48 = pCVar6;
    NullCheck(pCVar6);
    pvVar7 = (void *)ColumnData_get_resizeHandle_m3635E5A74654B97F64519A2C71655E27E70F2DEB_inline
                               (pCVar6,(MethodInfo *)0x0);
    NullCheck(pvVar7);
                    /* try { // try from 04536e44 to 04636e7b has its CatchHandler @ 04536e44
                       catch() { ... } // from try @ 04536e44 with catch @ 04536e44
                       catch() { ... } // from try @ 04536e84 with catch @ 04536e44
                       catch() { ... } // from try @ 04536ec8 with catch @ 04536e44
                       catch() { ... } // from try @ 04536f1c with catch @ 04536e44 */
    pvVar7 = (void *)VisualElement_get_style_mDCFF8D835BE0AFE412905E108F48B32A83734224(pvVar7,0);
    pMVar1 = local_40;
    NullCheck(local_40);
    uVar9 = VisualElement_get_layout_m71851CB694EE1348CDCA83353FFF3C1FB2F69C1A(pMVar1,0);
    uStack_58 = CONCAT44(param_4,param_3);
                    /* try { // try from 04536e7c to 04636e83 has its CatchHandler @ 04536e90 */
                    /* try { // try from 04536e84 to 04636ebb has its CatchHandler @ 04536e44 */
                    /* catch(type#1 @ 0474a728) { ... } // from try @ 04536e7c with catch @ 04536e90
                        */
    local_60 = CONCAT44(param_2,uVar9);
    uVar9 = Rect_get_xMax_m2339C7D2FCDA98A9B007F815F6E2059BA6BE425F_inline
                      ((Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D *)&local_60,(MethodInfo *)0x0
                      );
    auVar12 = StyleLength_op_Implicit_mA1ED6E9AD696C34231A35B83084B1298A700B019(uVar9,0);
                    /* try { // try from 04536ebc to 04636ec3 has its CatchHandler @ 04536eec */
                    /* try { // try from 04536ec4 to 04636ec7 has its CatchHandler @ 04536f04 */
                    /* try { // try from 04536ec8 to 04636efb has its CatchHandler @ 04536e44 */
                    /* catch() { ... } // from try @ 04536ebc with catch @ 04536eec */
    NullCheck(pvVar7);
                    /* try { // try from 04536efc to 04636f1b has its CatchHandler @ 04536f24 */
                    /* catch() { ... } // from try @ 04536ec4 with catch @ 04536f04 */
                    /* try { // try from 04536f1c to 04636f27 has its CatchHandler @ 04536e44 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 04536efc with catch @ 04536f24
                        */
    InterfaceActionInvoker1<StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8>::Invoke
              ((InterfaceActionInvoker1<StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8> *)
               0x19,*(undefined8 *)Method_System_Nullable<InputUserAccountHandle>_get_HasValue__,
               pvVar7,auVar12._0_8_,CONCAT44(uStack_134,auVar12._8_4_));
    pGVar2 = local_30;
    NullCheck(local_30);
    uVar9 = GeometryChangedEvent_get_newRect_mF2297BA96DD0F80412FF5FA99654FA176E8ACD15_inline
                      (pGVar2,(MethodInfo *)0x0);
    uStack_58 = CONCAT44(param_4,param_3);
    local_60 = CONCAT44(param_2,uVar9);
    fVar10 = (float)Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9_inline
                              ((Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D *)&local_60,
                               (MethodInfo *)0x0);
    pGVar2 = local_30;
    NullCheck(local_30);
    uVar9 = GeometryChangedEvent_get_oldRect_m9961ACE622E851C4770B205C57664F90F3E0E9A7_inline
                      (pGVar2,(MethodInfo *)0x0);
    uStack_58 = CONCAT44(param_4,param_3);
    local_60 = CONCAT44(param_2,uVar9);
    fVar11 = (float)Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9_inline
                              ((Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D *)&local_60,
                               (MethodInfo *)0x0);
    il2cpp_codegen_runtime_class_init_inline
              (*(Il2CppClass **)
                Method_System_Collections_Generic_Dictionary<int,_ReflectionProbeManager_CachedProbe>_GetEnumerator__
              );
    fVar10 = (float)il2cpp_codegen_subtract<float,float>(fVar10,fVar11);
    if (1.4013e-45 <= ABS(fVar10)) {
      pvVar7 = (void *)MultiColumnCollectionHeader_get_columnContainer_m33E41CBB68DF0781F002B266F332F8B8CF4BF179_inline
                                 (local_28,(MethodInfo *)0x0);
      pGVar2 = local_30;
      NullCheck(local_30);
      pIVar3 = (Il2CppObject *)
               EventBase_get_target_m9E5CB6AC9A51E9F61D9540D279BFA53C04AD010E(pGVar2,0);
      NullCheck(pvVar7);
      uVar8 = IsInstClass(pIVar3,*(Il2CppClass **)
                                  Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector3f>__ctor__);
      uVar9 = VisualElement_IndexOf_m1CC000F2192D5D561AE87B2EC3AB312BD0D714AE(pvVar7,uVar8,0);
      MultiColumnCollectionHeader_RaiseColumnResized_mE261E54FB14D2F9CD56857494329A72D79DFCE91
                (local_28,uVar9,0);
    }
  }
  return;
}


