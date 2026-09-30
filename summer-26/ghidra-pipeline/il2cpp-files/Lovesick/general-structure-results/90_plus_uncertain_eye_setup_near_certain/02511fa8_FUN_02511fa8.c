/*
FUNCTION_NAME: FUN_02511fa8
ENTRY_POINT: 02511fa8
PROGRAM: Lovesick-libil2cpp.so
SCORE: 103
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_5;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_4
*/


void FUN_02511fa8(long *param_1)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  if ((DAT_03782975 & 1) == 0) {
    thunk_FUN_00d48444(StringLiteral_5581);
    thunk_FUN_00d48444(
                      Method_OVRManager_Observable<OVRManager_PassthroughInitializationState>__ctor__
                      );
    thunk_FUN_00d48444(PTR_DAT_033eb838);
    thunk_FUN_00d48444(
                      System_Func<object,_<>f__AnonymousType0<Assembly,_RegisterDictionaryKeyPathProviderAttribute>>_TypeInfo
                      );
    thunk_FUN_00d48444(StringLiteral_8455);
    thunk_FUN_00d48444(StringLiteral_8817);
    thunk_FUN_00d48444(OVRMeshRenderer_TypeInfo);
    thunk_FUN_00d48444(
                      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<HttpWebResponse>_Create__
                      );
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_List<ValueTuple<MRUKAnchor,_MRUKAnchor>>_get_Item__
                      );
    thunk_FUN_00d48444(StringLiteral_780);
    thunk_FUN_00d48444(System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo);
    DAT_03782975 = 1;
  }
  uStack_78 = 0;
  local_70 = 0;
  local_80 = 0;
  if ((char)param_1[2] == '\0') {
    return;
  }
  if (*param_1 != 0) {
    uVar1 = *(undefined4 *)(*param_1 + 0x18);
    lVar9 = thunk_FUN_00d62348(*(undefined8 *)StringLiteral_780);
    if (lVar9 != 0) {
      FUN_01320ebc(lVar9,uVar1,
                   *(undefined8 *)
                    Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<HttpWebResponse>_Create__
                  );
      param_1[1] = lVar9;
      *(undefined1 *)((long)param_1 + 0x11) = 0;
      puVar8 = StringLiteral_8817;
      puVar7 = StringLiteral_8455;
      puVar6 = StringLiteral_5581;
      puVar5 = Method_OVRManager_Observable<OVRManager_PassthroughInitializationState>__ctor__;
      puVar4 = System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
      puVar3 = 
      System_Func<object,_<>f__AnonymousType0<Assembly,_RegisterDictionaryKeyPathProviderAttribute>>_TypeInfo
      ;
      puVar2 = PTR_DAT_033eb838;
      if (*param_1 != 0) {
        FUN_01323390(*param_1,&local_98,*(undefined8 *)OVRMeshRenderer_TypeInfo);
        uStack_78 = uStack_90;
        local_80 = local_98;
        local_70 = local_88;
        while( true ) {
          do {
            uVar10 = FUN_012b894c(&local_80,*(undefined8 *)puVar5);
            if ((uVar10 & 1) == 0) {
              FUN_012b8948(&local_80,*(undefined8 *)puVar6);
              *(undefined1 *)(param_1 + 2) = 0;
              return;
            }
            uVar11 = FUN_00cb97ec(&local_80,*(undefined8 *)puVar2);
            if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            uVar10 = FUN_02681b9c(uVar11,0,0);
          } while ((uVar10 & 1) == 0);
          lVar9 = param_1[1];
          if (lVar9 == 0) break;
          uVar12 = thunk_FUN_00d6225c(uVar11,*(undefined8 *)puVar3);
          FUN_00cba184(lVar9,uVar12,*(undefined8 *)puVar8);
          lVar9 = thunk_FUN_00d6225c(uVar11,*(undefined8 *)puVar7);
          if (lVar9 != 0) {
            *(undefined1 *)((long)param_1 + 0x11) = 1;
          }
        }
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


