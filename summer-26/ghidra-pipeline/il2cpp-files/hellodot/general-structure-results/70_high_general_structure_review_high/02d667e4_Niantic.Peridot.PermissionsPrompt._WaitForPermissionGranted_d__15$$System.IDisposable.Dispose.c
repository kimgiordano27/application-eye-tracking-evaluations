/*
FUNCTION_NAME: Niantic.Peridot.PermissionsPrompt.<WaitForPermissionGranted>d__15$$System.IDisposable.Dispose
ENTRY_POINT: 02d667e4
PROGRAM: hellodot-libil2cpp.so
SCORE: 85
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure
*/


long Niantic_Peridot_PermissionsPrompt_<WaitForPermissionGranted>d__15__System_IDisposable_Dispose
               (undefined8 param_1,byte *param_2,long *param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  long lVar4;
  logic_error *plVar5;
  byte in_w9;
  wchar_t *in_x10;
  int unaff_w20;
  long unaff_x23;
  long unaff_x29;
  byte bStack0000000000000000;
  undefined4 uStack0000000000000001;
  undefined1 uStack0000000000000005;
  void *in_stack_00000010;
  wchar_t *pwStack0000000000000018;
  
  *(undefined8 *)(unaff_x29 + -8) = param_1;
  uStack0000000000000001 = 0x6c6f7473;
  uStack0000000000000005 = 0;
  pwStack0000000000000018 = (wchar_t *)0x0;
  if ((*param_2 & 1) != 0) {
    in_x10 = *(wchar_t **)(param_2 + 0x10);
  }
  bStack0000000000000000 = in_w9;
  piVar3 = (int *)__errno();
  iVar1 = *piVar3;
  *piVar3 = 0;
  lVar4 = wcstol(in_x10,&stack0x00000018,unaff_w20);
  iVar2 = *piVar3;
  *piVar3 = iVar1;
  if (iVar2 == 0x22) {
    FUN_02cb2fc0(&stack0x00000020);
    plVar5 = (logic_error *)__cxa_allocate_exception(0x10);
    std::logic_error::logic_error(plVar5,(basic_string *)&stack0x00000020);
    *(undefined **)plVar5 =
         UnityEngine_UIElements_VisualElement_TimerStateScheduledItem_TypeInfo + 0x10;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(plVar5,UnityEngine_UIElements_VisualElement_RenderTargetMode_TypeInfo,
                UnityEngine_UIElements_VisualElement_SimpleScheduledItem_TypeInfo);
  }
  if ((long)pwStack0000000000000018 - (long)in_x10 == 0) {
    FUN_02cb2fc0(&stack0x00000020);
    plVar5 = (logic_error *)__cxa_allocate_exception(0x10);
    std::logic_error::logic_error(plVar5,(basic_string *)&stack0x00000020);
    *(undefined **)plVar5 = UnityEngine_UIElements_VisualElement_TypeData_TypeInfo + 0x10;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(plVar5,UnityEngine_UIElements_VisualElement_UxmlFactory_TypeInfo,
                UnityEngine_UIElements_VisualElementFocusChangeTarget_<>c_TypeInfo);
  }
  if (param_3 != (long *)0x0) {
    *param_3 = (long)pwStack0000000000000018 - (long)in_x10 >> 2;
  }
  if ((bStack0000000000000000 & 1) != 0) {
    operator_delete(in_stack_00000010);
  }
  if (*(long *)(unaff_x23 + 0x28) == *(long *)(unaff_x29 + -8)) {
    return lVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


