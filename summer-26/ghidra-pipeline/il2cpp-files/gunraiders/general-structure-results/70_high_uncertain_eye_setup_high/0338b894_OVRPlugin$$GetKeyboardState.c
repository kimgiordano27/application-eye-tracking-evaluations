/*
FUNCTION_NAME: OVRPlugin$$GetKeyboardState
ENTRY_POINT: 0338b894
PROGRAM: gunraiders-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_1;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin__GetKeyboardState(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  ulong uVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  long unaff_x19;
  undefined8 uVar6;
  
  plVar1 = (long *)FUN_032eb9dc(param_2,param_3,**(undefined8 **)(param_1 + 0xb8));
  uVar2 = FUN_0321094c(plVar1,0,0);
  if ((uVar2 & 1) != 0) {
    return 0;
  }
  if (plVar1 != (long *)0x0) {
    uVar3 = (**(code **)(*plVar1 + 0x3b8))(plVar1,*(undefined8 *)(*plVar1 + 0x3c0));
    uVar6 = *(undefined8 *)PTR_DAT_0422fb38;
    if (*(int *)(*(long *)PTR_DAT_0422fb28 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8(*(long *)PTR_DAT_0422fb28);
    }
    uVar6 = FUN_032e04b8(uVar6,0);
    uVar2 = FUN_032ea0d4(uVar3,uVar6,0);
    if ((uVar2 & 1) != 0) {
      return 0;
    }
    if (*(int *)(*(long *)UnityEngine_Splines_InterpolatorUtility_TypeInfo + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    plVar4 = (long *)FUN_033a78fc(0);
    if (plVar4 != (long *)0x0) {
      lVar5 = thunk_FUN_01bedf90(*(undefined8 *)
                                  (*plVar4 + (ulong)*(ushort *)
                                                     (*(long *)
                                                  Method_System_Collections_Generic_List_Enumerator<UIRenderDevice_AllocToUpdate>_MoveNext__
                                                  + 0x50) * 0x10 + 0x140));
      uVar3 = (**(code **)(lVar5 + 8))(plVar4,plVar1,lVar5);
      if (unaff_x19 != 0) {
        *(undefined8 *)(unaff_x19 + 0x10) = uVar3;
        uVar3 = thunk_FUN_01c496e0(*(undefined8 *)
                                    Method_System_Collections_Generic_List_Enumerator<Pet>_get_Current__
                                  );
        FUN_02f898a4();
        return uVar3;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4a4();
}


