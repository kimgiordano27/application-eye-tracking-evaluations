/*
FUNCTION_NAME: FUN_05ec92c0
ENTRY_POINT: 05ec92c0
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 101
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_14;weak_xr_or_state_hits_14;validity_or_gating_hits_16;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_14
*/


void FUN_05ec92c0(long param_1,long param_2,long param_3,ulong param_4)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  byte bVar12;
  undefined8 local_68;
  long local_58;
  
  if ((DAT_06dc3e90 & 1) == 0) {
    FUN_02d965b8(Method_System_Nullable<OVRInput_Controller>_get_HasValue__);
    FUN_02d965b8(Method_System_Nullable<OVRPlugin_BodyState>__ctor__);
    FUN_02d965b8(
                Method_System_Collections_Generic_List<XmlSchemaObjectTable_XmlSchemaObjectEntry>_set_Item__
                );
    FUN_02d965b8(
                Method_System_Collections_Generic_List<RemoteLoopbackManagerBase_PacketData>_Remove__
                );
    FUN_02d965b8(
                Method_System_Collections_Generic_List<ClassDataContract_ClassDataContractCriticalHelper_Member>__ctor__
                );
    FUN_02d965b8(Method_System_Nullable<OVRPlugin_Posef>__ctor__);
    FUN_02d965b8(
                Method_System_Collections_Generic_List<ClassDataContract_ClassDataContractCriticalHelper_Member>_Add__
                );
    FUN_02d965b8(
                Method_System_Collections_Generic_List<RemoteLoopbackManagerBase_PacketData>_RemoveAt__
                );
    FUN_02d965b8(Method_System_Collections_Generic_List<RenderGraph_DebugData_ResourceData>_Clear__)
    ;
    FUN_02d965b8(Method_System_Nullable<OVRPlugin_Posef>_get_HasValue__);
    FUN_02d965b8(Method_System_Nullable<OVRPlugin_Posef>_get_Value__);
    FUN_02d965b8(
                Method_System_Collections_Generic_List<RemoteLoopbackManagerBase_PacketData>_get_Count__
                );
    FUN_02d965b8(Method_System_Collections_Generic_List<RenderGraph_DebugData_ResourceData>_Add__);
    FUN_02d965b8(Method_System_Nullable<OVRPlugin_Result>__ctor__);
    DAT_06dc3e90 = 1;
  }
  puVar4 = Method_System_Nullable<OVRPlugin_Posef>_get_HasValue__;
  puVar3 = Method_System_Nullable<OVRPlugin_Posef>__ctor__;
  puVar2 = 
  Method_System_Collections_Generic_List<ClassDataContract_ClassDataContractCriticalHelper_Member>__ctor__
  ;
  if ((param_2 == 0) || (*(long *)(param_1 + 0x38) == 0)) goto LAB_05ec96c4;
  uVar5 = FUN_04fff7e0(*(long *)(param_1 + 0x38),*(undefined8 *)(param_2 + 0x80),
                       *(undefined8 *)
                        Method_System_Collections_Generic_List<RemoteLoopbackManagerBase_PacketData>_Remove__
                      );
  lVar6 = *(long *)(param_1 + 0x38);
  if ((uVar5 & 1) == 0) {
    if (lVar6 == 0) goto LAB_05ec96c4;
    FUN_04fff5ec(lVar6,*(undefined8 *)(param_2 + 0x80),param_3,
                 *(undefined8 *)Method_System_Nullable<OVRPlugin_BodyState>__ctor__);
LAB_05ec948c:
    bVar12 = 1;
    lVar6 = param_3;
  }
  else {
    if (lVar6 == 0) goto LAB_05ec96c4;
    lVar6 = FUN_04fff54c(lVar6,*(undefined8 *)(param_2 + 0x80),
                         *(undefined8 *)Method_System_Nullable<OVRPlugin_Posef>_get_Value__);
    if ((param_4 & 1) == 0) {
      if (*(long *)(param_1 + 0x50) == 0) goto LAB_05ec96c4;
      if ((lVar6 == param_3) && (*(char *)(*(long *)(param_1 + 0x50) + 0x30) != '\0')) {
        return;
      }
      if (*(long *)(param_1 + 0x38) == 0) goto LAB_05ec96c4;
      FUN_04fff5d8(*(long *)(param_1 + 0x38),*(undefined8 *)(param_2 + 0x80),param_3,
                   *(undefined8 *)
                    Method_System_Collections_Generic_List<RemoteLoopbackManagerBase_PacketData>_get_Count__
                  );
    }
    else {
      if (*(long *)(param_1 + 0x38) == 0) goto LAB_05ec96c4;
      FUN_05000a10(*(long *)(param_1 + 0x38),*(undefined8 *)(param_2 + 0x80),
                   *(undefined8 *)
                    Method_System_Collections_Generic_List<RemoteLoopbackManagerBase_PacketData>_RemoveAt__
                  );
    }
    if (lVar6 == param_3) goto LAB_05ec948c;
    if (*(long *)(param_1 + 0x30) == 0) goto LAB_05ec96c4;
    uVar5 = FUN_04ff1c80(*(long *)(param_1 + 0x30),lVar6,*(undefined8 *)puVar3);
    if ((uVar5 & 1) != 0) {
      if ((*(long *)(param_1 + 0x30) == 0) ||
         (lVar11 = FUN_04ff19ec(*(long *)(param_1 + 0x30),lVar6,*(undefined8 *)puVar4), lVar11 == 0)
         ) goto LAB_05ec96c4;
      uVar5 = FUN_04ff1c80(lVar11,*(undefined8 *)(param_2 + 0x80),*(undefined8 *)puVar2);
      if ((uVar5 & 1) == 0) {
        local_58 = lVar6;
        uVar7 = thunk_FUN_02dd2d7c(*(undefined8 *)(PTR_DAT_069fb9c0 + 0x70),&local_58);
        uVar8 = thunk_FUN_02dfd288(Method_System_Nullable<OVRPlugin_Result>_get_HasValue__);
        uVar9 = thunk_FUN_02dfd288(Method_System_Nullable<OVRPlugin_Result>_get_Value__);
        uVar10 = thunk_FUN_02dfd288(Method_System_Nullable<OVRPlugin_XrApi>__ctor__);
        uVar7 = FUN_0536e120(uVar8,uVar7,uVar9,uVar10,0);
        thunk_FUN_02dfd288(PTR_DAT_069fcb10);
        uVar8 = thunk_FUN_02dd3144();
        Oculus_Avatar2_OvrAvatarDefaultStateListener_AnimationStateChangeDelegate__EndInvoke
                  (uVar8,uVar7,0);
        uVar7 = thunk_FUN_02dfd288(Method_System_Nullable<OVRPlugin_XrApi>_get_HasValue__);
                    /* WARNING: Subroutine does not return */
        FUN_02d96724(uVar8,uVar7);
      }
      if ((*(long *)(param_1 + 0x30) == 0) ||
         (lVar11 = FUN_04ff19ec(*(long *)(param_1 + 0x30),lVar6,*(undefined8 *)puVar4), lVar11 == 0)
         ) goto LAB_05ec96c4;
      FUN_04ff2f1c(lVar11,*(undefined8 *)(param_2 + 0x80),
                   *(undefined8 *)
                    Method_System_Collections_Generic_List<ClassDataContract_ClassDataContractCriticalHelper_Member>_Add__
                  );
      if ((param_4 & 1) != 0) {
        return;
      }
    }
    bVar12 = 0;
  }
  if (*(long *)(param_1 + 0x30) != 0) {
    uVar5 = FUN_04ff1c80(*(long *)(param_1 + 0x30),param_3,*(undefined8 *)puVar3);
    if ((uVar5 & 1) == 0) {
      lVar11 = *(long *)(param_1 + 0x30);
      uVar7 = thunk_FUN_02dd3144(*(undefined8 *)
                                  Method_System_Collections_Generic_List<RenderGraph_DebugData_ResourceData>_Add__
                                );
      FUN_04ff0cf0(uVar7,*(undefined8 *)
                          Method_System_Collections_Generic_List<RenderGraph_DebugData_ResourceData>_Clear__
                  );
      if (lVar11 == 0) goto LAB_05ec96c4;
      FUN_04ff1a8c(lVar11,param_3,uVar7,
                   *(undefined8 *)Method_System_Nullable<OVRInput_Controller>_get_HasValue__);
    }
    if ((*(long *)(param_1 + 0x30) != 0) &&
       (lVar11 = FUN_04ff19ec(*(long *)(param_1 + 0x30),param_3,*(undefined8 *)puVar4), lVar11 != 0)
       ) {
      uVar5 = FUN_04ff1c80(lVar11,*(undefined8 *)(param_2 + 0x80),*(undefined8 *)puVar2);
      puVar2 = PTR_DAT_069fb9c0;
      if ((uVar5 & 1) == 0) {
        if ((*(long *)(param_1 + 0x30) != 0) &&
           (lVar6 = FUN_04ff19ec(*(long *)(param_1 + 0x30),param_3,*(undefined8 *)puVar4),
           lVar6 != 0)) {
          FUN_04ff1a8c(lVar6,*(undefined8 *)(param_2 + 0x80),param_2,
                       *(undefined8 *)
                        Method_System_Collections_Generic_List<XmlSchemaObjectTable_XmlSchemaObjectEntry>_set_Item__
                      );
          return;
        }
      }
      else if ((param_4 & 1) == 0) {
        if (*(long *)(param_1 + 0x50) != 0) {
          bVar1 = (bool)(bVar12 ^ 1);
          if (*(int *)(*(long *)(param_1 + 0x50) + 0x9c) != 0) {
            bVar1 = true;
          }
          if (!bVar1) {
            local_58 = lVar6;
            uVar7 = thunk_FUN_02dd2d7c(*(undefined8 *)(PTR_DAT_069fb9c0 + 0x70),&local_58);
            local_68 = *(undefined8 *)(param_2 + 0x80);
            uVar8 = thunk_FUN_02dd2d7c(*(undefined8 *)(puVar2 + 0x70),&local_68);
            uVar7 = FUN_0536e0dc(*(undefined8 *)Method_System_Nullable<OVRPlugin_Result>__ctor__,
                                 uVar7,uVar8,0);
            FUN_05e70210(uVar7,0);
          }
          return;
        }
      }
      else if ((*(long *)(param_1 + 0x30) != 0) &&
              (lVar6 = FUN_04ff19ec(*(long *)(param_1 + 0x30),lVar6,*(undefined8 *)puVar4),
              lVar6 != 0)) {
        FUN_04ff2f1c(lVar6,*(undefined8 *)(param_2 + 0x80),
                     *(undefined8 *)
                      Method_System_Collections_Generic_List<ClassDataContract_ClassDataContractCriticalHelper_Member>_Add__
                    );
        return;
      }
    }
  }
LAB_05ec96c4:
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


