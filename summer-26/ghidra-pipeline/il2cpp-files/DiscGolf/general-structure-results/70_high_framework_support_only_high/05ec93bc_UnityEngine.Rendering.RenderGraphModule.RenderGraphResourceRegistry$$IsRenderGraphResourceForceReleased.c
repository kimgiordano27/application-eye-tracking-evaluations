/*
FUNCTION_NAME: UnityEngine.Rendering.RenderGraphModule.RenderGraphResourceRegistry$$IsRenderGraphResourceForceReleased
ENTRY_POINT: 05ec93bc
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 81
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_7;weak_xr_or_state_hits_7;validity_or_gating_hits_14;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_7
*/


void UnityEngine_Rendering_RenderGraphModule_RenderGraphResourceRegistry__IsRenderGraphResourceForceReleased
               (long param_1,undefined8 param_2)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long unaff_x19;
  long unaff_x20;
  ulong unaff_x21;
  long unaff_x22;
  long unaff_x24;
  undefined8 *puVar10;
  long lVar11;
  byte bVar12;
  undefined8 in_stack_00000008;
  long in_stack_00000018;
  
  puVar3 = Method_System_Nullable<OVRPlugin_Posef>_get_HasValue__;
  puVar2 = 
  Method_System_Collections_Generic_List<ClassDataContract_ClassDataContractCriticalHelper_Member>__ctor__
  ;
  puVar10 = *(undefined8 **)(unaff_x24 + 0xea0);
  uVar4 = FUN_04fff7e0(param_2,*(undefined8 *)(unaff_x19 + 0x80),**(undefined8 **)(param_1 + 0xfa8))
  ;
  lVar5 = *(long *)(unaff_x22 + 0x38);
  if ((uVar4 & 1) == 0) {
    if (lVar5 == 0) goto LAB_05ec96c4;
    FUN_04fff5ec(lVar5,*(undefined8 *)(unaff_x19 + 0x80));
LAB_05ec948c:
    bVar12 = 1;
    lVar5 = unaff_x20;
  }
  else {
    if (lVar5 == 0) goto LAB_05ec96c4;
    lVar5 = FUN_04fff54c(lVar5,*(undefined8 *)(unaff_x19 + 0x80),
                         *(undefined8 *)Method_System_Nullable<OVRPlugin_Posef>_get_Value__);
    if ((unaff_x21 & 1) == 0) {
      if (*(long *)(unaff_x22 + 0x50) == 0) goto LAB_05ec96c4;
      if ((lVar5 == unaff_x20) && (*(char *)(*(long *)(unaff_x22 + 0x50) + 0x30) != '\0')) {
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
    if (lVar5 == unaff_x20) goto LAB_05ec948c;
    if (*(long *)(unaff_x22 + 0x30) == 0) goto LAB_05ec96c4;
    uVar4 = FUN_04ff1c80(*(long *)(unaff_x22 + 0x30),lVar5,*puVar10);
    if ((uVar4 & 1) != 0) {
      if ((*(long *)(unaff_x22 + 0x30) == 0) ||
         (lVar11 = FUN_04ff19ec(*(long *)(unaff_x22 + 0x30),lVar5,*(undefined8 *)puVar3),
         lVar11 == 0)) goto LAB_05ec96c4;
      uVar4 = FUN_04ff1c80(lVar11,*(undefined8 *)(unaff_x19 + 0x80),*(undefined8 *)puVar2);
      if ((uVar4 & 1) == 0) {
        in_stack_00000018 = lVar5;
        uVar6 = thunk_FUN_02dd2d7c(*(undefined8 *)(PTR_DAT_069fb9c0 + 0x70),&stack0x00000018);
        uVar7 = thunk_FUN_02dfd288(Method_System_Nullable<OVRPlugin_Result>_get_HasValue__);
        uVar8 = thunk_FUN_02dfd288(Method_System_Nullable<OVRPlugin_Result>_get_Value__);
        uVar9 = thunk_FUN_02dfd288(Method_System_Nullable<OVRPlugin_XrApi>__ctor__);
        uVar6 = FUN_0536e120(uVar7,uVar6,uVar8,uVar9,0);
        thunk_FUN_02dfd288(PTR_DAT_069fcb10);
        uVar7 = thunk_FUN_02dd3144();
        Oculus_Avatar2_OvrAvatarDefaultStateListener_AnimationStateChangeDelegate__EndInvoke
                  (uVar7,uVar6,0);
        uVar6 = thunk_FUN_02dfd288(Method_System_Nullable<OVRPlugin_XrApi>_get_HasValue__);
                    /* WARNING: Subroutine does not return */
        FUN_02d96724(uVar7,uVar6);
      }
      if ((*(long *)(unaff_x22 + 0x30) == 0) ||
         (lVar11 = FUN_04ff19ec(*(long *)(unaff_x22 + 0x30),lVar5,*(undefined8 *)puVar3),
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
    uVar4 = FUN_04ff1c80();
    if ((uVar4 & 1) == 0) {
      lVar11 = *(long *)(unaff_x22 + 0x30);
      uVar6 = thunk_FUN_02dd3144(*(undefined8 *)
                                  Method_System_Collections_Generic_List<RenderGraph_DebugData_ResourceData>_Add__
                                );
      FUN_04ff0cf0(uVar6,*(undefined8 *)
                          Method_System_Collections_Generic_List<RenderGraph_DebugData_ResourceData>_Clear__
                  );
      if (lVar11 == 0) goto LAB_05ec96c4;
      FUN_04ff1a8c(lVar11);
    }
    if ((*(long *)(unaff_x22 + 0x30) != 0) && (lVar11 = FUN_04ff19ec(), lVar11 != 0)) {
      uVar4 = FUN_04ff1c80(lVar11,*(undefined8 *)(unaff_x19 + 0x80),*(undefined8 *)puVar2);
      puVar2 = PTR_DAT_069fb9c0;
      if ((uVar4 & 1) == 0) {
        if ((*(long *)(unaff_x22 + 0x30) != 0) && (lVar5 = FUN_04ff19ec(), lVar5 != 0)) {
          FUN_04ff1a8c(lVar5,*(undefined8 *)(unaff_x19 + 0x80));
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
            in_stack_00000018 = lVar5;
            uVar6 = thunk_FUN_02dd2d7c(*(undefined8 *)(PTR_DAT_069fb9c0 + 0x70),&stack0x00000018);
            in_stack_00000008 = *(undefined8 *)(unaff_x19 + 0x80);
            uVar7 = thunk_FUN_02dd2d7c(*(undefined8 *)(puVar2 + 0x70),&stack0x00000008);
            uVar6 = FUN_0536e0dc(*(undefined8 *)Method_System_Nullable<OVRPlugin_Result>__ctor__,
                                 uVar6,uVar7,0);
            FUN_05e70210(uVar6,0);
          }
          return;
        }
      }
      else if ((*(long *)(unaff_x22 + 0x30) != 0) &&
              (lVar5 = FUN_04ff19ec(*(long *)(unaff_x22 + 0x30),lVar5,*(undefined8 *)puVar3),
              lVar5 != 0)) {
        FUN_04ff2f1c(lVar5,*(undefined8 *)(unaff_x19 + 0x80),
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


