/*
FUNCTION_NAME: FUN_0142cc5c
ENTRY_POINT: 0142cc5c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint FUN_0142cc5c(long param_1,uint param_2,uint param_3,uint param_4,uint param_5,uint param_6,
                 uint param_7,uint param_8,byte param_9)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  long lVar4;
  long *plVar5;
  undefined8 *puVar6;
  ulong uVar7;
  int *piVar8;
  int iVar9;
  uint uVar10;
  byte in_stack_00000028;
  byte in_stack_00000030;
  byte in_stack_00000038;
  undefined8 in_stack_00000040;
  long local_68;
  
  if ((DAT_037769c0 & 1) == 0) {
    thunk_FUN_00d48444(StringLiteral_302);
    thunk_FUN_00d48444(Method_OVRPlugin_<>c_<_cctor>b__796_0__);
    thunk_FUN_00d48444(OVR_OpenVR_IVRResources__GetResourceFullPath_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_13354);
    thunk_FUN_00d48444(Method_System_Text_RegularExpressions_RegexParser_ScanCharEscape__);
    thunk_FUN_00d48444(Method_System_Text_EncodingNLS_GetByteCount__);
    DAT_037769c0 = 1;
  }
  puVar2 = StringLiteral_13354;
  puVar1 = Method_System_Text_EncodingNLS_GetByteCount__;
  if (*(int *)(param_1 + 0x10) != 1) {
    if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    FUN_026610e4(*(undefined8 *)puVar1,0);
    return 0;
  }
  lVar4 = *(long *)(param_1 + 0x98);
  if (lVar4 != 0) {
    iVar9 = 0;
    uVar10 = 1;
    while (iVar9 < *(int *)(lVar4 + 0x18)) {
      FUN_0132138c(lVar4,iVar9,&local_68,*(undefined8 *)puVar2);
      if (local_68 == 0) goto LAB_0142cf30;
      if (*(char *)(local_68 + 0x40) != '\0') {
        if (((*(long *)(param_1 + 0x98) == 0) ||
            (FUN_0132138c(*(long *)(param_1 + 0x98),iVar9,&local_68,*(undefined8 *)puVar2),
            local_68 == 0)) || (plVar5 = *(long **)(local_68 + 0x10), plVar5 == (long *)0x0))
        goto LAB_0142cf30;
        uVar3 = (**(code **)(*plVar5 + 0x888))
                          (plVar5,param_2 & 1,param_3 & 1,param_4 & 1,param_5 & 1,param_6 & 1,
                           param_7 & 1,param_8 & 1,param_9 & 1,in_stack_00000028 & 1,
                           in_stack_00000030 & 1,in_stack_00000038 & 1,in_stack_00000040,
                           *(undefined8 *)(*plVar5 + 0x890));
        if ((*(long *)(param_1 + 0x98) == 0) ||
           (FUN_0132138c(*(long *)(param_1 + 0x98),iVar9,&local_68,*(undefined8 *)puVar2),
           local_68 == 0)) goto LAB_0142cf30;
        uVar10 = uVar10 & uVar3;
        *(undefined1 *)(local_68 + 0x40) = 0;
      }
      lVar4 = *(long *)(param_1 + 0x98);
      iVar9 = iVar9 + 1;
      if (lVar4 == 0) goto LAB_0142cf30;
    }
    plVar5 = (long *)FUN_013eae18(param_1,0);
    if (plVar5 != (long *)0x0) {
      lVar4 = *plVar5;
      uVar7 = (ulong)*(ushort *)(lVar4 + 0x12a);
      if (uVar7 == 0) goto LAB_0142cec0;
      piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      goto LAB_0142cea8;
    }
  }
LAB_0142cf30:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
  while( true ) {
    uVar7 = uVar7 - 1;
    piVar8 = piVar8 + 4;
    if (uVar7 == 0) break;
LAB_0142cea8:
    if (*(long *)(piVar8 + -2) ==
        *(long *)Method_System_Text_RegularExpressions_RegexParser_ScanCharEscape__) {
      puVar6 = (undefined8 *)(lVar4 + (long)(*piVar8 + 0x22) * 0x10 + 0x138);
      goto LAB_0142cee0;
    }
  }
LAB_0142cec0:
  puVar6 = (undefined8 *)
           FUN_00d59724(plVar5,*(long *)
                                Method_System_Text_RegularExpressions_RegexParser_ScanCharEscape__,
                        0x22);
LAB_0142cee0:
  uVar7 = (*(code *)*puVar6)(plVar5,puVar6[1]);
  if ((uVar7 & 1) != 0) {
    if (*(long *)(param_1 + 0x90) == 0) goto LAB_0142cf30;
    FUN_0129a9f4(*(long *)(param_1 + 0x90),*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__796_0__);
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  return uVar10;
}


