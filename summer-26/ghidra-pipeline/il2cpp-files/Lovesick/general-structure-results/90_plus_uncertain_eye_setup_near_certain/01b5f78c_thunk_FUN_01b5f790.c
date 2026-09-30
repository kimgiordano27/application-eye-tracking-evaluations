/*
FUNCTION_NAME: thunk_FUN_01b5f790
ENTRY_POINT: 01b5f78c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 97
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void thunk_FUN_01b5f790(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_38;
  
  puVar1 = 
  Method_System_Collections_Generic_CollectionExtensions_GetValueOrDefault<string,_LocalDataStoreSlot>__
  ;
  if ((DAT_0377e441 & 1) == 0) {
    thunk_FUN_00d48444(
                      Method_OVRPlugin_<>c__DisplayClass526_0_<GetVirtualKeyboardModelAnimationStates>b__0__
                      );
    thunk_FUN_00d48444(StringLiteral_11909);
    thunk_FUN_00d48444(System_Data_DataViewSetting_TypeInfo);
    thunk_FUN_00d48444(Method_System_Collections_Generic_Dictionary<GameObject,_MRUKAnchor>__ctor__)
    ;
    thunk_FUN_00d48444(PTR_DAT_033f55f8);
    thunk_FUN_00d48444(System_Func<STMDelayData,_string>_TypeInfo);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_CollectionExtensions_GetValueOrDefault<string,_LocalDataStoreSlot>__
                      );
    thunk_FUN_00d48444(
                      Method_Unity_Collections_NativeSlice<MB3_MeshCombinerSingle_MB_MeshCombinerSingle_MeshNativeArrayHelper_SIZER_144>_SliceWithStride<Vector3>__
                      );
    DAT_0377e441 = 1;
  }
  lVar6 = *(long *)puVar1;
  uStack_58 = 0;
  uStack_50 = 0;
  lStack_68 = 0;
  uStack_60 = 0;
  lStack_38 = 0;
  if (*(int *)(lVar6 + 0xe0) == 0) {
    thunk_FUN_00d32864();
    lVar6 = *(long *)puVar1;
  }
  lVar6 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x18);
  if ((lVar6 == 0) ||
     (lVar6 = FUN_01299a34(lVar6,*(undefined8 *)System_Data_DataViewSetting_TypeInfo),
     puVar5 = StringLiteral_11909,
     puVar4 = Method_OVRPlugin_<>c__DisplayClass526_0_<GetVirtualKeyboardModelAnimationStates>b__0__
     , puVar3 = Method_System_Collections_Generic_Dictionary<GameObject,_MRUKAnchor>__ctor__,
     puVar2 = System_Func<STMDelayData,_string>_TypeInfo, puVar1 = PTR_DAT_033f55f8, lVar6 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  FUN_011dcc00(lVar6,&uStack_80,
               *(undefined8 *)
                Method_Unity_Collections_NativeSlice<MB3_MeshCombinerSingle_MB_MeshCombinerSingle_MeshNativeArrayHelper_SIZER_144>_SliceWithStride<Vector3>__
              );
  uStack_58 = uStack_78;
  uStack_60 = uStack_80;
  uStack_50 = uStack_70;
  do {
    uVar7 = FUN_012c3588(&uStack_60,*(undefined8 *)puVar1);
    if ((uVar7 & 1) == 0) {
      FUN_012c3584(&uStack_60,*(undefined8 *)puVar3);
      return;
    }
    lVar6 = FUN_00c34380(&uStack_60,*(undefined8 *)puVar2);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    FUN_01b59d5c(lVar6,1,0);
    uVar7 = FUN_010c3738(lVar6,&lStack_38,*(undefined8 *)puVar4);
    if ((uVar7 & 1) != 0) {
      if (lStack_38 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      FUN_01b5fb3c();
      if (lStack_38 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      FUN_01b5fcbc();
    }
    uVar7 = FUN_010c3738(lVar6,&lStack_68,*(undefined8 *)puVar5);
    if ((uVar7 & 1) != 0) {
      if (lStack_68 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      FUN_01b5fcec();
    }
  } while( true );
}


