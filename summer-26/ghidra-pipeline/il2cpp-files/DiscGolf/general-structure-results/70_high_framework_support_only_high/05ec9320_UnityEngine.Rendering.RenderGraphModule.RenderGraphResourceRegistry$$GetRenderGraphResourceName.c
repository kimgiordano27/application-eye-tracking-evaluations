/*
FUNCTION_NAME: UnityEngine.Rendering.RenderGraphModule.RenderGraphResourceRegistry$$GetRenderGraphResourceName
ENTRY_POINT: 05ec9320
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 81
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_12;weak_xr_or_state_hits_12;validity_or_gating_hits_16;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_12
*/


void UnityEngine_Rendering_RenderGraphModule_RenderGraphResourceRegistry__GetRenderGraphResourceName
               (long param_1)

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
  long unaff_x19;
  long unaff_x20;
  ulong unaff_x21;
  long unaff_x22;
  long unaff_x23;
  long lVar11;
  byte bVar12;
  undefined8 in_stack_00000008;
  long in_stack_00000018;
  
  FUN_02d965b8(*(undefined8 *)(param_1 + 0xfa8));
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
  FUN_02d965b8(Method_System_Collections_Generic_List<RenderGraph_DebugData_ResourceData>_Clear__);
  FUN_02d965b8(Method_System_Nullable<OVRPlugin_Posef>_get_HasValue__);
  FUN_02d965b8(Method_System_Nullable<OVRPlugin_Posef>_get_Value__);
  FUN_02d965b8(
              Method_System_Collections_Generic_List<RemoteLoopbackManagerBase_PacketData>_get_Count__
              );
  FUN_02d965b8(Method_System_Collections_Generic_List<RenderGraph_DebugData_ResourceData>_Add__);
  FUN_02d965b8(Method_System_Nullable<OVRPlugin_Result>__ctor__);
  *(undefined1 *)(unaff_x23 + 0xe90) = 1;
  puVar4 = Method_System_Nullable<OVRPlugin_Posef>_get_HasValue__;
  puVar3 = Method_System_Nullable<OVRPlugin_Posef>__ctor__;
  puVar2 = 
  Method_System_Collections_Generic_List<ClassDataContract_ClassDataContractCriticalHelper_Member>__ctor__
  ;
  if ((unaff_x19 == 0) || (*(long *)(unaff_x22 + 0x38) == 0)) goto LAB_05ec96c4;
  uVar5 = FUN_04fff7e0(*(long *)(unaff_x22 + 0x38),*(undefined8 *)(unaff_x19 + 0x80),
                       *(undefined8 *)
                        Method_System_Collections_Generic_List<RemoteLoopbackManagerBase_PacketData>_Remove__
                      );
  lVar6 = *(long *)(unaff_x22 + 0x38);
  if ((uVar5 & 1) == 0) {
    if (lVar6 == 0) goto LAB_05ec96c4;
    FUN_04fff5ec(lVar6,*(undefined8 *)(unaff_x19 + 0x80));
LAB_05ec948c:
    bVar12 = 1;
    lVar6 = unaff_x20;
  }
  else {
    if (lVar6 == 0) goto LAB_05ec96c4;
    lVar6 = FUN_04fff54c(lVar6,*(undefined8 *)(unaff_x19 + 0x80),
                         *(undefined8 *)Method_System_Nullable<OVRPlugin_Posef>_get_Value__);
    if ((unaff_x21 & 1) == 0) {
      if (*(long *)(unaff_x22 + 0x50) == 0) goto LAB_05ec96c4;
      if ((lVar6 == unaff_x20) && (*(char *)(*(long *)(unaff_x22 + 0x50) + 0x30) != '\0')) {
        return;
      }
      if (*(long *)(unaff_x22 + 0x38) == 0) goto LAB_05ec96c4;
      FUN_04fff5d8(*(long *)(unaff_x22 + 0x38),*(undefined8 *)(unaff_x19 + 0x80));
    }
    else {
      if (*(long *)(unaff_x22 + 0x38) == 0) goto LAB_05ec96c4;
      FUN_05000a10(*(long *)(unaff_x22 + 0x38),*(undefined8 *)(unaff_x19 + 0x80),
                   *(undefined8 *)
                    Method_System_Collections_Generic_List<RemoteLoopbackManagerBase_PacketData>_RemoveAt__
                  );
    }
    if (lVar6 == unaff_x20) goto LAB_05ec948c;
    if (*(long *)(unaff_x22 + 0x30) == 0) goto LAB_05ec96c4;
    uVar5 = FUN_04ff1c80(*(long *)(unaff_x22 + 0x30),lVar6,*(undefined8 *)puVar3);
    if ((uVar5 & 1) != 0) {
      if ((*(long *)(unaff_x22 + 0x30) == 0) ||
         (lVar11 = FUN_04ff19ec(*(long *)(unaff_x22 + 0x30),lVar6,*(undefined8 *)puVar4),
         lVar11 == 0)) goto LAB_05ec96c4;
      uVar5 = FUN_04ff1c80(lVar11,*(undefined8 *)(unaff_x19 + 0x80),*(undefined8 *)puVar2);
      if ((uVar5 & 1) == 0) {
        in_stack_00000018 = lVar6;
        uVar7 = thunk_FUN_02dd2d7c(*(undefined8 *)(PTR_DAT_069fb9c0 + 0x70),&stack0x00000018);
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
      if ((*(long *)(unaff_x22 + 0x30) == 0) ||
         (lVar11 = FUN_04ff19ec(*(long *)(unaff_x22 + 0x30),lVar6,*(undefined8 *)puVar4),
         lVar11 == 0)) goto LAB_05ec96c4;
      FUN_04ff2f1c(lVar11,*(undefined8 *)(unaff_x19 + 0x80),
                   *(undefined8 *)
                    Method_System_Collections_Generic_List<ClassDataContract_ClassDataContractCriticalHelper_Member>_Add__
                  );
      if ((unaff_x21 & 1) != 0) {
        return;
      }
    }
    bVar12 = 0;
  }
  if (*(long *)(unaff_x22 + 0x30) != 0) {
    uVar5 = FUN_04ff1c80();
    if ((uVar5 & 1) == 0) {
      lVar11 = *(long *)(unaff_x22 + 0x30);
      uVar7 = thunk_FUN_02dd3144(*(undefined8 *)
                                  Method_System_Collections_Generic_List<RenderGraph_DebugData_ResourceData>_Add__
                                );
      FUN_04ff0cf0(uVar7,*(undefined8 *)
                          Method_System_Collections_Generic_List<RenderGraph_DebugData_ResourceData>_Clear__
                  );
      if (lVar11 == 0) goto LAB_05ec96c4;
      FUN_04ff1a8c(lVar11);
    }
    if ((*(long *)(unaff_x22 + 0x30) != 0) && (lVar11 = FUN_04ff19ec(), lVar11 != 0)) {
      uVar5 = FUN_04ff1c80(lVar11,*(undefined8 *)(unaff_x19 + 0x80),*(undefined8 *)puVar2);
      puVar2 = PTR_DAT_069fb9c0;
      if ((uVar5 & 1) == 0) {
        if ((*(long *)(unaff_x22 + 0x30) != 0) && (lVar6 = FUN_04ff19ec(), lVar6 != 0)) {
          FUN_04ff1a8c(lVar6,*(undefined8 *)(unaff_x19 + 0x80));
          return;
        }
      }
      else if ((unaff_x21 & 1) == 0) {
        if (*(long *)(unaff_x22 + 0x50) != 0) {
          bVar1 = (bool)(bVar12 ^ 1);
          if (*(int *)(*(long *)(unaff_x22 + 0x50) + 0x9c) != 0) {
            bVar1 = true;
          }
          if (!bVar1) {
            in_stack_00000018 = lVar6;
            uVar7 = thunk_FUN_02dd2d7c(*(undefined8 *)(PTR_DAT_069fb9c0 + 0x70),&stack0x00000018);
            in_stack_00000008 = *(undefined8 *)(unaff_x19 + 0x80);
            uVar8 = thunk_FUN_02dd2d7c(*(undefined8 *)(puVar2 + 0x70),&stack0x00000008);
            uVar7 = FUN_0536e0dc(*(undefined8 *)Method_System_Nullable<OVRPlugin_Result>__ctor__,
                                 uVar7,uVar8,0);
            FUN_05e70210(uVar7,0);
          }
          return;
        }
      }
      else if ((*(long *)(unaff_x22 + 0x30) != 0) &&
              (lVar6 = FUN_04ff19ec(*(long *)(unaff_x22 + 0x30),lVar6,*(undefined8 *)puVar4),
              lVar6 != 0)) {
        FUN_04ff2f1c(lVar6,*(undefined8 *)(unaff_x19 + 0x80),
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


