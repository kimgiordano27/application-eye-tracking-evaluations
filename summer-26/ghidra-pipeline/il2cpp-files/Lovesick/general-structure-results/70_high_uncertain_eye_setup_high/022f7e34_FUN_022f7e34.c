/*
FUNCTION_NAME: FUN_022f7e34
ENTRY_POINT: 022f7e34
PROGRAM: Lovesick-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_022f7e34(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_28;
  undefined4 local_24;
  
  puVar2 = StringLiteral_3033;
  puVar1 = Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__;
  if ((DAT_03781b2f & 1) == 0) {
    thunk_FUN_00d48444(Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__);
    thunk_FUN_00d48444(StringLiteral_3033);
    thunk_FUN_00d48444(Method_OVRPlugin_<>c_<_cctor>b__796_134__);
    DAT_03781b2f = 1;
  }
  plVar3 = (long *)FUN_00da4fb8(*(undefined8 *)puVar2,4);
  local_24 = (undefined4)param_1[1];
  lVar4 = thunk_FUN_00d61fa0(*(undefined8 *)puVar1,&local_24);
  if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  if ((lVar4 != 0) &&
     (lVar5 = thunk_FUN_00d6225c(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0)) {
LAB_022f7fd0:
    uVar6 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
    FUN_00da5038(uVar6,0);
  }
  if ((int)plVar3[3] != 0) {
    plVar3[4] = lVar4;
    local_28 = *(undefined4 *)((long)param_1 + 0xc);
    lVar4 = thunk_FUN_00d61fa0(*(undefined8 *)puVar1,&local_28);
    if ((lVar4 != 0) &&
       (lVar5 = thunk_FUN_00d6225c(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0))
    goto LAB_022f7fd0;
    if (1 < *(uint *)(plVar3 + 3)) {
      plVar3[5] = lVar4;
      local_34 = (undefined4)*param_1;
      lVar4 = thunk_FUN_00d61fa0(*(undefined8 *)puVar1,&local_34);
      if ((lVar4 != 0) &&
         (lVar5 = thunk_FUN_00d6225c(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0))
      goto LAB_022f7fd0;
      if (2 < *(uint *)(plVar3 + 3)) {
        plVar3[6] = lVar4;
        local_38 = *(undefined4 *)((long)param_1 + 4);
        lVar4 = thunk_FUN_00d61fa0(*(undefined8 *)puVar1,&local_38);
        if ((lVar4 != 0) &&
           (lVar5 = thunk_FUN_00d6225c(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0))
        goto LAB_022f7fd0;
        puVar1 = Method_OVRPlugin_<>c_<_cctor>b__796_134__;
        if (3 < *(uint *)(plVar3 + 3)) {
          plVar3[7] = lVar4;
          FUN_01600be4(*(undefined8 *)puVar1,plVar3,0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da5194();
}


