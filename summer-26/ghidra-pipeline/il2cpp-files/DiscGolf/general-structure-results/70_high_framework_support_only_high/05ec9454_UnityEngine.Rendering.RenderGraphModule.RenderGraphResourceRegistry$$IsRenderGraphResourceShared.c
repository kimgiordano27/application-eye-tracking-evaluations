/*
FUNCTION_NAME: UnityEngine.Rendering.RenderGraphModule.RenderGraphResourceRegistry$$IsRenderGraphResourceShared
ENTRY_POINT: 05ec9454
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 81
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_10;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_5
*/


void UnityEngine_Rendering_RenderGraphModule_RenderGraphResourceRegistry__IsRenderGraphResourceShared
               (long param_1)

{
  bool bVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long unaff_x19;
  long unaff_x20;
  ulong unaff_x21;
  long unaff_x22;
  long unaff_x23;
  long lVar8;
  undefined8 *unaff_x26;
  undefined8 *unaff_x27;
  byte bVar9;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000018;
  
  if ((unaff_x23 == unaff_x20) && (*(char *)(param_1 + 0x30) != '\0')) {
    return;
  }
  if (*(long *)(unaff_x22 + 0x38) == 0) goto LAB_05ec96c4;
  FUN_04fff5d8(*(long *)(unaff_x22 + 0x38),*(undefined8 *)(unaff_x19 + 0x80));
  if (unaff_x23 == unaff_x20) {
    bVar9 = 1;
    unaff_x23 = unaff_x20;
  }
  else {
    if (*(long *)(unaff_x22 + 0x30) == 0) goto LAB_05ec96c4;
    uVar3 = FUN_04ff1c80();
    if ((uVar3 & 1) != 0) {
      if ((*(long *)(unaff_x22 + 0x30) == 0) || (lVar8 = FUN_04ff19ec(), lVar8 == 0))
      goto LAB_05ec96c4;
      uVar3 = FUN_04ff1c80(lVar8,*(undefined8 *)(unaff_x19 + 0x80),*unaff_x27);
      if ((uVar3 & 1) == 0) {
        uVar4 = thunk_FUN_02dd2d7c(*(undefined8 *)(PTR_DAT_069fb9c0 + 0x70),&stack0x00000018);
        uVar5 = thunk_FUN_02dfd288(Method_System_Nullable<OVRPlugin_Result>_get_HasValue__);
        uVar6 = thunk_FUN_02dfd288(Method_System_Nullable<OVRPlugin_Result>_get_Value__);
        uVar7 = thunk_FUN_02dfd288(Method_System_Nullable<OVRPlugin_XrApi>__ctor__);
        uVar4 = FUN_0536e120(uVar5,uVar4,uVar6,uVar7,0);
        thunk_FUN_02dfd288(PTR_DAT_069fcb10);
        uVar5 = thunk_FUN_02dd3144();
        Oculus_Avatar2_OvrAvatarDefaultStateListener_AnimationStateChangeDelegate__EndInvoke
                  (uVar5,uVar4,0);
        uVar4 = thunk_FUN_02dfd288(Method_System_Nullable<OVRPlugin_XrApi>_get_HasValue__);
                    /* WARNING: Subroutine does not return */
        FUN_02d96724(uVar5,uVar4);
      }
      if ((*(long *)(unaff_x22 + 0x30) == 0) || (lVar8 = FUN_04ff19ec(), lVar8 == 0))
      goto LAB_05ec96c4;
      FUN_04ff2f1c(lVar8,*(undefined8 *)(unaff_x19 + 0x80),
                   *(undefined8 *)
                    Method_System_Collections_Generic_List<ClassDataContract_ClassDataContractCriticalHelper_Member>_Add__
                  );
      if ((unaff_x21 & 1) != 0) {
        return;
      }
    }
    bVar9 = 0;
  }
  if (*(long *)(unaff_x22 + 0x30) != 0) {
    uVar3 = FUN_04ff1c80();
    if ((uVar3 & 1) == 0) {
      lVar8 = *(long *)(unaff_x22 + 0x30);
      uVar4 = thunk_FUN_02dd3144(*(undefined8 *)
                                  Method_System_Collections_Generic_List<RenderGraph_DebugData_ResourceData>_Add__
                                );
      FUN_04ff0cf0(uVar4,*(undefined8 *)
                          Method_System_Collections_Generic_List<RenderGraph_DebugData_ResourceData>_Clear__
                  );
      if (lVar8 == 0) goto LAB_05ec96c4;
      FUN_04ff1a8c(lVar8);
    }
    if ((*(long *)(unaff_x22 + 0x30) != 0) && (lVar8 = FUN_04ff19ec(), lVar8 != 0)) {
      uVar3 = FUN_04ff1c80(lVar8,*(undefined8 *)(unaff_x19 + 0x80),*unaff_x27);
      puVar2 = PTR_DAT_069fb9c0;
      if ((uVar3 & 1) == 0) {
        if ((*(long *)(unaff_x22 + 0x30) != 0) && (lVar8 = FUN_04ff19ec(), lVar8 != 0)) {
          FUN_04ff1a8c(lVar8,*(undefined8 *)(unaff_x19 + 0x80));
          return;
        }
      }
      else if ((unaff_x21 & 1) == 0) {
        if (*(long *)(unaff_x22 + 0x50) != 0) {
          bVar1 = (bool)(bVar9 ^ 1);
          if (*(int *)(*(long *)(unaff_x22 + 0x50) + 0x9c) != 0) {
            bVar1 = true;
          }
          if (bVar1) {
            return;
          }
          uVar4 = thunk_FUN_02dd2d7c(*(undefined8 *)(PTR_DAT_069fb9c0 + 0x70),&stack0x00000018);
          in_stack_00000008 = *(undefined8 *)(unaff_x19 + 0x80);
          uVar5 = thunk_FUN_02dd2d7c(*(undefined8 *)(puVar2 + 0x70),&stack0x00000008);
          uVar4 = FUN_0536e0dc(*(undefined8 *)Method_System_Nullable<OVRPlugin_Result>__ctor__,uVar4
                               ,uVar5,0);
          FUN_05e70210(uVar4,0);
          return;
        }
      }
      else if ((*(long *)(unaff_x22 + 0x30) != 0) &&
              (lVar8 = FUN_04ff19ec(*(long *)(unaff_x22 + 0x30),unaff_x23,*unaff_x26), lVar8 != 0))
      {
        FUN_04ff2f1c(lVar8,*(undefined8 *)(unaff_x19 + 0x80),
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


