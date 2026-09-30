/*
FUNCTION_NAME: __gather_info
ENTRY_POINT: 02dc4e0c
PROGRAM: Waifu-libil2cpp.so
SCORE: 79
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;paired_state_refs
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_4
*/


/* std::__ndk1::__money_put<char>::__gather_info(bool, bool, std::__ndk1::locale const&,
   std::__ndk1::money_base::pattern&, char&, char&, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >&, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >&, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >&, int&) */

void std::__ndk1::__money_put<char>::__gather_info
               (bool param_1,bool param_2,locale *param_3,pattern *param_4,char *param_5,
               char *param_6,basic_string *param_7,basic_string *param_8,basic_string *param_9,
               int *param_10)

{
  long lVar1;
  ulong *puVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  code *pcVar8;
  long lVar9;
  long *plVar10;
  ulong *local_90;
  undefined *puStack_88;
  undefined8 local_80;
  ulong ***local_78;
  ulong **local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  lVar9 = *(long *)param_3;
  if (param_1) {
    lVar6 = *(long *)
             Method_System_Collections_Generic_List<OVRPlugin_Qpl_Annotation_Builder_Entry>_GetEnumerator__
    ;
    puVar2 = (ulong *)
             Method_System_Collections_Generic_List<OVRPlugin_Qpl_Annotation_Builder_Entry>_GetEnumerator__
    ;
  }
  else {
    lVar6 = *(long *)
             Method_System_Collections_Generic_List<OVRPlugin_Qpl_Annotation_Builder_Entry>_get_Count__
    ;
    puVar2 = (ulong *)
             Method_System_Collections_Generic_List<OVRPlugin_Qpl_Annotation_Builder_Entry>_get_Count__
    ;
  }
  puStack_88 = 
  Method_System_Collections_Generic_List<OVRHaptics_OVRHapticsOutput_ClipPlaybackTracker>__ctor__;
  local_80 = 0;
  local_90 = puVar2;
  if (lVar6 != -1) {
    local_70 = &local_90;
    local_78 = &local_70;
    local_80 = 0;
    __call_once(puVar2,&local_78,FUN_02ddcf8c);
  }
  lVar6 = *(long *)(lVar9 + 0x10);
  uVar7 = (long)(int)puVar2[1] - 1;
  if (((ulong)(*(long *)(lVar9 + 0x18) - lVar6 >> 3) <= uVar7) ||
     (plVar10 = *(long **)(lVar6 + uVar7 * 8), plVar10 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_033b8bb0();
  }
  if (param_2) {
    uVar4 = (**(code **)(*plVar10 + 0x58))(plVar10);
    *(undefined4 *)param_4 = uVar4;
    pcVar8 = *(code **)(*plVar10 + 0x40);
  }
  else {
    uVar4 = (**(code **)(*plVar10 + 0x50))(plVar10);
    *(undefined4 *)param_4 = uVar4;
    pcVar8 = *(code **)(*plVar10 + 0x38);
  }
  (*pcVar8)(&local_90,plVar10);
  if (((byte)*param_9 & 1) != 0) {
    operator_delete(*(void **)(param_9 + 0x10));
  }
  *(undefined8 *)(param_9 + 0x10) = local_80;
  *(undefined **)(param_9 + 8) = puStack_88;
  *(ulong **)param_9 = local_90;
  cVar3 = (**(code **)(*plVar10 + 0x18))(plVar10);
  *param_5 = cVar3;
  cVar3 = (**(code **)(*plVar10 + 0x20))(plVar10);
  *param_6 = cVar3;
  (**(code **)(*plVar10 + 0x28))(&local_90,plVar10);
  if (((byte)*param_7 & 1) != 0) {
    operator_delete(*(void **)(param_7 + 0x10));
  }
  *(undefined8 *)(param_7 + 0x10) = local_80;
  *(undefined **)(param_7 + 8) = puStack_88;
  *(ulong **)param_7 = local_90;
  (**(code **)(*plVar10 + 0x30))(&local_90,plVar10);
  if (((byte)*param_8 & 1) != 0) {
    operator_delete(*(void **)(param_8 + 0x10));
  }
  *(undefined8 *)(param_8 + 0x10) = local_80;
  *(undefined **)(param_8 + 8) = puStack_88;
  *(ulong **)param_8 = local_90;
  iVar5 = (**(code **)(*plVar10 + 0x48))(plVar10);
  *param_10 = iVar5;
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


