/*
FUNCTION_NAME: FUN_05188704
ENTRY_POINT: 05188704
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_3
*/


void FUN_05188704(int *param_1)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  undefined1 auVar5 [16];
  undefined1 local_30 [16];
  
  if ((DAT_06bba2fd & 1) == 0) {
    FUN_02f08768(System_Collections_Generic_Dictionary<Type,_OVRPlugin_SpaceComponentType>_TypeInfo)
    ;
    FUN_02f08768(PTR_DAT_067cb870);
    DAT_06bba2fd = 1;
  }
  puVar1 = PTR_DAT_067cb870;
  plVar4 = *(long **)(param_1 + 10);
  local_30._0_8_ = 0;
  local_30._8_8_ = 0;
  if (*param_1 == 0) {
    local_30 = *(undefined1 (*) [16])(param_1 + 0x10);
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    *param_1 = -1;
  }
  else {
    if (*param_1 == 1) {
      local_30 = *(undefined1 (*) [16])(param_1 + 0x10);
      param_1[0x10] = 0;
      param_1[0x11] = 0;
      param_1[0x12] = 0;
      param_1[0x13] = 0;
      *param_1 = -1;
      goto LAB_05188804;
    }
    if (*(long *)(param_1 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    local_30 = FUN_05146c14(*(long *)(param_1 + 8),0,0);
    uVar2 = FUN_05008098(local_30,0);
    if ((uVar2 & 1) == 0) {
      lVar3 = *(long *)puVar1;
      *param_1 = 0;
      *(undefined1 (*) [16])(param_1 + 0x10) = local_30;
      if (*(int *)(lVar3 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      FUN_032f8454(param_1 + 2,local_30,param_1,
                   *(undefined8 *)
                    System_Collections_Generic_Dictionary<Type,_OVRPlugin_SpaceComponentType>_TypeInfo
                  );
      return;
    }
  }
  FUN_050080b0(local_30,0);
  if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  lVar3 = (**(code **)(*plVar4 + 0x1e8))
                    (plVar4,*(undefined8 *)(param_1 + 0xc),*(undefined8 *)(param_1 + 0xe),
                     *(undefined8 *)(*plVar4 + 0x1f0));
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  auVar5 = FUN_05146c14(lVar3,0,0);
  local_30 = auVar5;
  uVar2 = FUN_05008098(local_30,0);
  if ((uVar2 & 1) == 0) {
    lVar3 = *(long *)puVar1;
    *param_1 = 1;
    *(undefined1 (*) [16])(param_1 + 0x10) = local_30;
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    FUN_032f8454(param_1 + 2,local_30,param_1,
                 *(undefined8 *)
                  System_Collections_Generic_Dictionary<Type,_OVRPlugin_SpaceComponentType>_TypeInfo
                );
    return;
  }
LAB_05188804:
  FUN_050080b0(local_30,0);
  lVar3 = *(long *)puVar1;
  *param_1 = -2;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  FUN_050087ec(param_1 + 2,0);
  return;
}


