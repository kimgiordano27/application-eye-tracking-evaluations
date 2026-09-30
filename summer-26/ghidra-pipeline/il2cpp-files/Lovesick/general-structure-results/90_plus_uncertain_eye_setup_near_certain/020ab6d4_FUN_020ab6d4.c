/*
FUNCTION_NAME: FUN_020ab6d4
ENTRY_POINT: 020ab6d4
PROGRAM: Lovesick-libil2cpp.so
SCORE: 95
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 FUN_020ab6d4(long param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined4 uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  ulong uVar12;
  long *plVar13;
  long lVar14;
  undefined8 uVar15;
  undefined1 auVar16 [16];
  undefined8 local_90;
  ulong local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  puVar6 = Method_UnityEngine_GameObject_AddComponent<Button>__;
  puVar2 = System_ComponentModel_ExtenderProvidedPropertyAttribute_var;
  local_80 = param_2;
  uStack_78 = param_3;
  if ((DAT_03780de9 & 1) == 0) {
    thunk_FUN_00d48444(OVRPlugin_OVRP_1_95_0_TypeInfo);
    thunk_FUN_00d48444(PTR_DAT_033f3600);
    thunk_FUN_00d48444(Method_Sirenix_Serialization_JsonDataReader_<_ctor>b__7_8__);
    thunk_FUN_00d48444(StringLiteral_11793);
    thunk_FUN_00d48444(PTR_DAT_033f5cc8);
    thunk_FUN_00d48444(StringLiteral_7550);
    thunk_FUN_00d48444(
                      Method_Oculus_Interaction_PointerInteractable<GrabInteractor,_GrabInteractable>_Start__
                      );
    thunk_FUN_00d48444(System_ComponentModel_ExtenderProvidedPropertyAttribute_var);
    thunk_FUN_00d48444(StringLiteral_991);
    thunk_FUN_00d48444(Method_UnityEngine_GameObject_AddComponent<Button>__);
    thunk_FUN_00d48444(OVR_OpenVR_NotificationBitmap_t_TypeInfo);
    thunk_FUN_00d48444(
                      Method_UnityEngine_XR_Interaction_Toolkit_Utilities_Pooling_LinkedPool<Transform>_Get__
                      );
    thunk_FUN_00d48444(PTR_DAT_033f59d8);
    thunk_FUN_00d48444(
                      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<FixedSizeReadStream_<ProcessReadAsync>d__5>__
                      );
    thunk_FUN_00d48444(PTR_DAT_033f0700);
    thunk_FUN_00d48444(StringLiteral_10203);
    thunk_FUN_00d48444(Method_System_Nullable<Bounds>_get_Value__);
    DAT_03780de9 = 1;
  }
  puVar5 = Method_Oculus_Interaction_PointerInteractable<GrabInteractor,_GrabInteractable>_Start__;
  puVar4 = Method_System_Nullable<Bounds>_get_Value__;
  puVar3 = OVR_OpenVR_NotificationBitmap_t_TypeInfo;
  puVar1 = PTR_DAT_033f59d8;
  local_90 = 0;
  local_88 = 0;
  auVar16 = FUN_0132ce28(param_2,param_3,*(undefined8 *)puVar6);
  uVar8 = FUN_011204c8(auVar16._0_8_,auVar16._8_8_,&local_90,*(undefined8 *)puVar2);
  puVar2 = OVRPlugin_OVRP_1_95_0_TypeInfo;
  if ((uVar8 & 1) == 0) {
    if (*(int *)(*(long *)PTR_DAT_033f3600 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    lVar9 = *(long *)puVar2;
    lVar10 = *(long *)(lVar9 + 0x20);
    if ((*(byte *)(lVar10 + 0x132) & 1) == 0) {
      lVar10 = FUN_00d5941c();
    }
    lVar10 = *(long *)(*(long *)(lVar10 + 0xc0) + 8);
    if ((*(byte *)(lVar10 + 0x132) & 1) == 0) {
      lVar10 = FUN_00d5941c();
    }
    if (*(int *)(lVar10 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    lVar10 = *(long *)(lVar9 + 0x20);
    if ((*(byte *)(lVar10 + 0x132) & 1) == 0) {
      lVar10 = FUN_00d5941c();
    }
    puVar2 = StringLiteral_991;
    lVar10 = *(long *)(*(long *)(lVar10 + 0xc0) + 8);
    if ((*(byte *)(lVar10 + 0x132) & 1) == 0) {
      lVar10 = FUN_00d5941c();
    }
    plVar13 = (long *)**(undefined8 **)(lVar10 + 0xb8);
    uVar7 = FUN_0132ce38(&local_80,*(undefined8 *)puVar2);
    if (plVar13 != (long *)0x0) {
      uVar11 = (**(code **)(*plVar13 + 0x178))(plVar13,uVar7,*(undefined8 *)(*plVar13 + 0x180));
      lVar10 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
      if (lVar10 != 0) {
        FUN_013ba4d0(lVar10,param_1,*(undefined8 *)puVar3);
        uVar8 = FUN_0132ce38(&local_80,*(undefined8 *)puVar2);
        lVar9 = *(long *)puVar4;
        if (*(int *)(lVar9 + 0xe0) == 0) {
          thunk_FUN_00d32864(lVar9);
          lVar9 = *(long *)puVar4;
        }
        lVar14 = *(long *)(*(long *)(lVar9 + 0xb8) + 0x28);
        if (lVar14 == 0) {
          if (*(int *)(lVar9 + 0xe0) == 0) {
            thunk_FUN_00d32864(lVar9);
            lVar9 = *(long *)puVar4;
          }
          uVar15 = **(undefined8 **)(lVar9 + 0xb8);
          lVar14 = thunk_FUN_00d62348(*(undefined8 *)puVar5);
          if (lVar14 == 0) goto LAB_020abac4;
          FUN_016f4a88(lVar14,uVar15,*(undefined8 *)StringLiteral_10203,0);
          *(long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x28) = lVar14;
        }
        local_70 = local_80;
        uStack_68 = uStack_78;
        lVar9 = FUN_0114c02c(lVar10,&local_70,uVar11,
                             *(undefined8 *)
                              Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<FixedSizeReadStream_<ProcessReadAsync>d__5>__
                            );
        if (param_1 != 0) {
          uVar12 = 0;
          goto LAB_020aba9c;
        }
      }
    }
  }
  else {
    lVar9 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
    puVar2 = StringLiteral_7550;
    if (lVar9 != 0) {
      FUN_013ba4d0(lVar9,param_1,*(undefined8 *)puVar3);
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar12 = local_88;
      uVar11 = local_90;
      lVar10 = *(long *)puVar4;
      uVar8 = local_88 >> 0x20;
      if (*(int *)(lVar10 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar10 = *(long *)puVar4;
      }
      lVar14 = *(long *)(*(long *)(lVar10 + 0xb8) + 0x20);
      if (lVar14 == 0) {
        if (*(int *)(lVar10 + 0xe0) == 0) {
          thunk_FUN_00d32864();
          lVar10 = *(long *)puVar4;
        }
        uVar15 = **(undefined8 **)(lVar10 + 0xb8);
        lVar14 = thunk_FUN_00d62348(*(undefined8 *)puVar5);
        if (lVar14 == 0) goto LAB_020abac4;
        FUN_016f4a88(lVar14,uVar15,*(undefined8 *)PTR_DAT_033f0700,0);
        *(long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x20) = lVar14;
      }
      if (param_1 != 0) {
        uVar12 = uVar12 & 0xffffffff;
        lVar10 = lVar9;
LAB_020aba9c:
        FUN_020a9544(param_1,uVar11,uVar12,uVar8 & 0xffffffff,param_4,lVar14,lVar9);
        return *(undefined8 *)(lVar10 + 0x10);
      }
    }
  }
LAB_020abac4:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


