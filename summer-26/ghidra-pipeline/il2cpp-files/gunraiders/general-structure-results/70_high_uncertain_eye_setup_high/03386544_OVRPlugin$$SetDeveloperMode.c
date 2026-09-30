/*
FUNCTION_NAME: OVRPlugin$$SetDeveloperMode
ENTRY_POINT: 03386544
PROGRAM: gunraiders-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__SetDeveloperMode(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  byte bVar4;
  long lVar5;
  ulong uVar6;
  undefined2 uVar7;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  undefined8 uVar8;
  undefined8 in_stack_00000008;
  
  FUN_01c5d288(*(undefined8 *)(param_1 + 0x6a0));
  FUN_01c5d288(Method_System_Collections_Generic_Dictionary_Enumerator<uint,_uint>_MoveNext__);
  FUN_01c5d288(UnityEngine_Splines_InterpolatorUtility_TypeInfo);
  FUN_01c5d288(PTR_DAT_04231370);
  FUN_01c5d288(System_Runtime_Remoting_InternalRemotingServices_TypeInfo);
  *(undefined1 *)(unaff_x21 + 0x63d) = 1;
  puVar3 = Method_System_Collections_Generic_Dictionary_Enumerator<uint,_uint>_MoveNext__;
  puVar1 = UnityEngine_Splines_InterpolatorUtility_TypeInfo;
  if (unaff_x19 == 0) goto LAB_0338674c;
  uVar8 = *(undefined8 *)(unaff_x19 + 0x18);
  if (*(int *)(*(long *)UnityEngine_Splines_InterpolatorUtility_TypeInfo + 0xe0) == 0) {
    thunk_FUN_01c1d1e8();
  }
  puVar2 = Method_System_Collections_Generic_List_Enumerator<TranslationJob>_MoveNext__;
  lVar5 = FUN_0236e9d4(uVar8,*(undefined8 *)puVar3);
  if (lVar5 == 0) {
    uVar8 = *(undefined8 *)(unaff_x19 + 0x18);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    lVar5 = FUN_033a6f30(uVar8,0);
    if ((lVar5 != 0) && (*(char *)(lVar5 + 0x10) != '\0')) {
      in_stack_00000008._4_2_ = 0;
      System_Collections_ObjectModel_ReadOnlyCollection<FrameTimeSample>__System_Collections_IList_set_Item
                ((long)&stack0x00000008 + 4,1,*(undefined8 *)PTR_DAT_04231370);
      uVar7 = in_stack_00000008._4_2_;
      goto LAB_033865c8;
    }
  }
  else {
    uVar7 = *(undefined2 *)(lVar5 + 0x28);
LAB_033865c8:
    *(undefined2 *)(unaff_x19 + 0x68) = uVar7;
  }
  uVar8 = (**(code **)(*unaff_x20 + 0x1d8))();
  *(undefined8 *)(unaff_x19 + 0x70) = uVar8;
  lVar5 = *(long *)puVar2;
  if (*(int *)(lVar5 + 0xe0) == 0) {
    thunk_FUN_01c1d1e8();
    lVar5 = *(long *)puVar2;
  }
  uVar8 = FUN_0335fe14(*(undefined8 *)(*(long *)(lVar5 + 0xb8) + 0x10),
                       *(undefined8 *)(unaff_x19 + 0x18),0);
  *(undefined8 *)(unaff_x19 + 0x78) = uVar8;
  puVar1 = System_Runtime_Remoting_InternalRemotingServices_TypeInfo;
  if (*(char *)(unaff_x19 + 0x2a) != '\0') {
    uVar8 = *(undefined8 *)(unaff_x19 + 0x58);
    if (*(int *)(*(long *)System_Runtime_Remoting_InternalRemotingServices_TypeInfo + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    uVar6 = FUN_0337ef60(uVar8,1);
    if ((uVar6 & 1) == 0) {
      if (*(long *)(unaff_x19 + 0x58) == 0) goto LAB_0338674c;
      uVar6 = FUN_032eb44c(*(long *)(unaff_x19 + 0x58),0);
      if ((uVar6 & 1) == 0) goto LAB_03386728;
    }
    uVar8 = FUN_033886a8(uVar6,*(undefined8 *)(unaff_x19 + 0x58));
    *(undefined8 *)(unaff_x19 + 0x80) = uVar8;
    if (*(long *)(unaff_x19 + 0x58) == 0) {
LAB_0338674c:
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4a4();
    }
    uVar6 = FUN_032eb44c(*(long *)(unaff_x19 + 0x58),0);
    if ((uVar6 & 1) == 0) {
      uVar8 = *(undefined8 *)(unaff_x19 + 0x58);
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      uVar8 = FUN_0337fe8c(uVar8);
      if (*(int *)(*(long *)System_Linq_Expressions_InvocationExpressionN_TypeInfo + 0xe0) == 0) {
        thunk_FUN_01c1d1e8(*(long *)System_Linq_Expressions_InvocationExpressionN_TypeInfo);
      }
      bVar4 = FUN_0320e6d0(uVar8,0,0);
    }
    else {
      bVar4 = 0;
    }
    *(byte *)(unaff_x19 + 0x88) = bVar4 & 1;
  }
LAB_03386728:
  FUN_03388748();
  return;
}


