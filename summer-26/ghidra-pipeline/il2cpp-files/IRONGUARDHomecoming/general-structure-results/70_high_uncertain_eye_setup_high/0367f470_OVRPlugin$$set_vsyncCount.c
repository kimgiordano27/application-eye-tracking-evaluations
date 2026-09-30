/*
FUNCTION_NAME: OVRPlugin$$set_vsyncCount
ENTRY_POINT: 0367f470
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin__set_vsyncCount(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  int *unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x21;
  undefined8 *unaff_x22;
  undefined8 *unaff_x23;
  undefined8 in_stack_00000008;
  
  thunk_FUN_01efb3a4(Method_Unity_VisualScripting_ModuloHandler_<>c_<_ctor>b__0_62__);
  thunk_FUN_01efb3a4(Method_Unity_VisualScripting_ModuloHandler_<>c_<_ctor>b__0_63__);
  thunk_FUN_01efb3a4(Method_System_Nullable<InputControlScheme_MatchResult>_get_HasValue__);
  thunk_FUN_01efb3a4(Method_Unity_VisualScripting_XHashSetPool_ToHashSetPooled<GraphReference>__);
  thunk_FUN_01efb3a4(Method_Unity_VisualScripting_XListPool_Free<GraphReference>__);
  *(undefined1 *)(unaff_x20 + 0xe3b) = 1;
  plVar3 = (long *)FUN_01f08890(*unaff_x22,2);
  uVar4 = FUN_035683d0();
  lVar5 = thunk_FUN_01f117cc(*unaff_x23);
  FUN_03673e24(lVar5,uVar4,*unaff_x21,0);
  if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  if ((lVar5 != 0) &&
     (lVar6 = thunk_FUN_01f116d0(lVar5,*(undefined8 *)(*plVar3 + 0x40)), lVar6 == 0)) {
LAB_0367f604:
    uVar4 = PrefabSceneManager__LoadSceneAsync();
                    /* WARNING: Subroutine does not return */
    FUN_01f08910(uVar4,0);
  }
  puVar1 = Method_Unity_VisualScripting_XHashSetPool_ToHashSetPooled<GraphReference>__;
  if ((int)plVar3[3] != 0) {
    plVar3[4] = lVar5;
    thunk_FUN_01f51358(plVar3 + 4,lVar5);
    in_stack_00000008._4_4_ = *unaff_x19 + 2;
    uVar4 = FUN_035683d0((long)&stack0x00000008 + 4,0);
    lVar5 = thunk_FUN_01f117cc(*unaff_x23);
    FUN_03673e24(lVar5,uVar4,*(undefined8 *)puVar1,0);
    if ((lVar5 != 0) &&
       (lVar6 = thunk_FUN_01f116d0(lVar5,*(undefined8 *)(*plVar3 + 0x40)), lVar6 == 0))
    goto LAB_0367f604;
    puVar2 = Method_Unity_VisualScripting_ModuloHandler_<>c_<_ctor>b__0_68__;
    puVar1 = Method_System_Nullable<InputControlScheme_MatchResult>_get_HasValue__;
    if (1 < *(uint *)(plVar3 + 3)) {
      plVar3[5] = lVar5;
      thunk_FUN_01f51358(plVar3 + 5,lVar5);
      uVar4 = thunk_FUN_01f117cc(*(undefined8 *)puVar2);
      FUN_03673e78(0,0x43340000,uVar4,*(undefined8 *)puVar1,*(undefined8 *)puVar1,plVar3,0);
      *unaff_x19 = *unaff_x19 + 3;
      return uVar4;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a44();
}


