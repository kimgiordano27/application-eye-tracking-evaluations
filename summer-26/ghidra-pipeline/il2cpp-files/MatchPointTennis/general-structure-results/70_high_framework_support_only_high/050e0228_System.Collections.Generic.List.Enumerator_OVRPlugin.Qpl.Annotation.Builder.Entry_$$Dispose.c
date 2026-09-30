/*
FUNCTION_NAME: System.Collections.Generic.List.Enumerator<OVRPlugin.Qpl.Annotation.Builder.Entry>$$Dispose
ENTRY_POINT: 050e0228
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 72
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Collections_Generic_List_Enumerator<OVRPlugin_Qpl_Annotation_Builder_Entry>__Dispose
               (undefined8 param_1,long *param_2,undefined8 param_3,long param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long *plVar5;
  ulong uVar6;
  ulong __n;
  undefined1 *__dest;
  undefined1 *__s;
  undefined1 *__s_00;
  long unaff_x24;
  undefined1 *__src;
  long unaff_x27;
  long lVar7;
  void *unaff_x28;
  long unaff_x29;
  
  *(undefined8 *)(unaff_x29 + -8) = param_1;
  plVar5 = *(long **)(param_4 + 0x38);
  if (plVar5 == (long *)0x0) {
    FUN_04482014();
    plVar5 = *(long **)(unaff_x24 + 0x38);
  }
  __n = (ulong)*(uint *)(*plVar5 + 0xfc);
  uVar6 = __n + 0xf & 0x1fffffff0;
  __dest = &stack0x00000000 + -uVar6;
  __src = __dest + -uVar6;
  __s = __src + -uVar6;
  memset(__s,0,__n);
  __s_00 = __s + -uVar6;
  memset(__s_00,0,__n);
  memset(__s,0,__n);
  if (*param_2 != 0) {
    *(void **)(unaff_x29 + -0x48) = unaff_x28;
    *(long *)(unaff_x29 + -0x40) = unaff_x27;
    uVar3 = FUN_089bbcf4(param_2,0);
    uVar6 = FUN_08a561f0(uVar3,0);
    lVar7 = *param_2;
    uVar1 = FUN_089bbc58(param_2,0);
    if ((uVar6 & 1) == 0) {
      memcpy(__dest,__s,__n);
      if (lVar7 == 0) goto LAB_050e0400;
      puVar4 = *(undefined8 **)(*(long *)(unaff_x24 + 0x38) + 8);
      uVar3 = *puVar4;
      *(undefined4 *)(unaff_x29 + -0xc) = uVar1;
      *(long *)(unaff_x29 + -0x38) = unaff_x29 + -0xc;
      *(undefined1 **)(unaff_x29 + -0x30) = __dest;
      *(undefined8 *)(unaff_x29 + -0x28) = 0;
      *(undefined1 **)(unaff_x29 + -0x20) = __src;
      (*(code *)puVar4[2])(uVar3,puVar4,lVar7,unaff_x29 + -0x38,__src);
    }
    else {
      uVar2 = FUN_089bbc8c(param_2,0);
      if (lVar7 == 0) {
LAB_050e0400:
                    /* WARNING: Subroutine does not return */
        FUN_04447e44();
      }
      puVar4 = *(undefined8 **)(*(long *)(unaff_x24 + 0x38) + 0x18);
      uVar3 = *puVar4;
      *(undefined4 *)(unaff_x29 + -0x10) = uVar2;
      *(undefined4 *)(unaff_x29 + -0xc) = uVar1;
      *(undefined1 *)(unaff_x29 + -0x14) = 0;
      *(long *)(unaff_x29 + -0x38) = unaff_x29 + -0xc;
      *(long *)(unaff_x29 + -0x30) = unaff_x29 + -0x10;
      *(long *)(unaff_x29 + -0x28) = unaff_x29 + -0x14;
      *(undefined1 **)(unaff_x29 + -0x20) = __dest;
      (*(code *)puVar4[2])(uVar3,puVar4,lVar7,unaff_x29 + -0x38,__dest);
      __src = __dest;
    }
    memcpy(__s_00,__src,__n);
    memcpy(__s,__s_00,__n);
    unaff_x28 = *(void **)(unaff_x29 + -0x48);
    unaff_x27 = *(long *)(unaff_x29 + -0x40);
  }
  memcpy(__dest,__s,__n);
  memcpy(unaff_x28,__dest,__n);
  if (*(long *)(unaff_x27 + 0x28) == *(long *)(unaff_x29 + -8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


