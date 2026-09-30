/*
FUNCTION_NAME: FUN_06114b44
ENTRY_POINT: 06114b44
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_06114b44(int *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  undefined8 local_38;
  
  if ((DAT_06dc6609 & 1) == 0) {
    FUN_02d965b8(
                Method_System_Collections_Generic_Dictionary<Type,_MonoCustomAttrs_AttributeInfo>_Add__
                );
    FUN_02d965b8(Method_UnityEngine_GameObject_AddComponent<OVRGridCube>__);
    FUN_02d965b8(PTR_DAT_069fe788);
    FUN_02d965b8(PTR_DAT_069fd9c8);
    FUN_02d965b8(Method_UnityEngine_GameObject_AddComponent<OVRMRAudioFilter>__);
    FUN_02d965b8(Method_UnityEngine_GameObject_AddComponent<OVRManager>__);
    FUN_02d965b8(Method_UnityEngine_GameObject_AddComponent<CanvasRenderer>__);
    DAT_06dc6609 = 1;
  }
  puVar2 = PTR_DAT_069fe788;
  local_38 = 0;
  if (*param_1 == 0) {
    local_38 = *(undefined8 *)(param_1 + 10);
    param_1[10] = 0;
    param_1[0xb] = 0;
    *param_1 = -1;
  }
  else {
    lVar9 = *(long *)(param_1 + 8);
    lVar3 = thunk_FUN_02dd3144(*(undefined8 *)
                                Method_UnityEngine_GameObject_AddComponent<OVRManager>__);
    FUN_0552aca4(lVar3,0);
    lVar4 = FUN_06111744();
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    if (*(char *)(lVar4 + 0x30) != '\0') goto LAB_06114db4;
    lVar4 = thunk_FUN_02dd3144(*(undefined8 *)
                                Method_UnityEngine_GameObject_AddComponent<CanvasRenderer>__);
    FUN_060f1104(lVar4,0);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    plVar8 = (long *)(lVar3 + 0x10);
    *plVar8 = lVar4;
    LeanTween__value(plVar8,lVar4);
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    if (*plVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    FUN_060f1098(*plVar8,*(undefined8 *)(lVar9 + 0x18),0);
    *(undefined8 *)(lVar9 + 0x40) = 0;
    LeanTween__value((undefined8 *)(lVar9 + 0x40),0);
    puVar1 = PTR_DAT_069fd9c8;
    if (*(int *)(*(long *)PTR_DAT_069fd9c8 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    if (DAT_06db59d4 == '\0') {
      FUN_02d965b8(PTR_DAT_069fd9c8);
      DAT_06db59d4 = '\x01';
    }
    lVar4 = *(long *)puVar1;
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_02df485c();
      lVar4 = *(long *)puVar1;
    }
    lVar9 = *(long *)(*(long *)(lVar4 + 0xb8) + 0x28);
    lVar4 = FUN_06111744();
    uVar5 = FUN_060f0fe8(*plVar8,0);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860(uVar5,uVar5);
    }
    uVar5 = FUN_06114340(lVar4,uVar5,0);
    uVar6 = thunk_FUN_02dd3144(*(undefined8 *)
                                Method_System_Collections_Generic_Dictionary<Type,_MonoCustomAttrs_AttributeInfo>_Add__
                              );
    FUN_04be213c(uVar6,lVar3,
                 *(undefined8 *)Method_UnityEngine_GameObject_AddComponent<OVRMRAudioFilter>__,0);
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    lVar3 = FUN_05567df8(lVar9,uVar5,uVar6,0);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    local_38 = FUN_0555c32c(lVar3,0);
    uVar7 = FUN_0540fae0(&local_38,0);
    if ((uVar7 & 1) == 0) {
      *param_1 = 0;
      *(undefined8 *)(param_1 + 10) = local_38;
      LeanTween__value(param_1 + 10,0);
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      FUN_03539804(param_1 + 2,&local_38,param_1,
                   *(undefined8 *)Method_UnityEngine_GameObject_AddComponent<OVRGridCube>__);
      return;
    }
  }
  FUN_0540fba8(&local_38,0);
LAB_06114db4:
  lVar3 = *(long *)puVar2;
  *param_1 = -2;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  FUN_05410914(param_1 + 2,0);
  return;
}


