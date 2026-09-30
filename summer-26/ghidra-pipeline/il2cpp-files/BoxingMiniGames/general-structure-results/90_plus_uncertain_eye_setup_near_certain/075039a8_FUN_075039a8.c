/*
FUNCTION_NAME: FUN_075039a8
ENTRY_POINT: 075039a8
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 92
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_3;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_4
*/


long * FUN_075039a8(long param_1,long param_2)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  
  if ((DAT_07ef4a92 & 1) == 0) {
    FUN_03642964(Method_OVRResult<ulong,_OVRPlugin_Result>_get_Value__);
    FUN_03642964(PTR_DAT_07a21b38);
    FUN_03642964(PTR_DAT_079f4558);
    FUN_03642964(PTR_DAT_079f4e28);
    FUN_03642964(Method_OVRResult<ulong,_OVRPlugin_Result>_op_Implicit__);
    FUN_03642964(PTR_DAT_079fd4b0);
    FUN_03642964(
                Method_OVRTaskBuilder<OVRResult<List<OVRAnchor>,_OVRAnchor_FetchResult>>_Start<OVRAnchor_<FetchSharedAnchorsAsync>d__10>__
                );
    FUN_03642964(Method_OVRTaskBuilder<OVRResult<OVRAnchor_ShareResult>>_SetException__);
    DAT_07ef4a92 = 1;
  }
  puVar3 = Method_OVRTaskBuilder<OVRResult<OVRAnchor_ShareResult>>_SetException__;
  puVar2 = Method_OVRResult<ulong,_OVRPlugin_Result>_op_Implicit__;
  if (param_2 != 0) {
    uVar9 = *(undefined8 *)(param_2 + 0x20);
    if (*(int *)(*(long *)PTR_DAT_079fd4b0 + 0xe4) == 0) {
      thunk_FUN_036a1978();
    }
    uVar4 = FUN_03f55ad8(uVar9,*(undefined8 *)puVar2);
    FUN_074ef380(uVar4 & 1,*(undefined8 *)puVar3);
    FUN_074eeee0(*(undefined8 *)(param_2 + 0x30));
    puVar2 = PTR_DAT_079f4e28;
    plVar5 = *(long **)(param_2 + 0x30);
    if (plVar5 != (long *)0x0) {
      bVar1 = *(byte *)(*(long *)PTR_DAT_07a21b38 + 0x130);
      if ((*(byte *)(*plVar5 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*plVar5 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_07a21b38))
      {
                    /* WARNING: Subroutine does not return */
        FUN_03643084();
      }
      lVar6 = FUN_071bd270(plVar5,*(undefined8 *)(param_1 + 0x10),0);
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_036a1978(*(long *)puVar2);
      }
      uVar7 = FUN_071c24dc(lVar6,0,0);
      if ((uVar7 & 1) == 0) {
        plVar5 = (long *)FUN_03642a4c(*(undefined8 *)PTR_DAT_079f4558,1);
        if (plVar5 == (long *)0x0) goto LAB_07503bd8;
        if ((lVar6 != 0) &&
           (lVar8 = thunk_FUN_0367fd24(lVar6,*(undefined8 *)(*plVar5 + 0x40)), lVar8 == 0)) {
          uVar9 = thunk_FUN_0368dc04();
                    /* WARNING: Subroutine does not return */
          FUN_03642acc(uVar9,0);
        }
        if ((int)plVar5[3] == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03642c20();
        }
        plVar5[4] = lVar6;
        thunk_FUN_036b7ad0(plVar5 + 4,lVar6);
      }
      else {
        FUN_074ef3c8(*(undefined1 *)(param_2 + 0x40),
                     *(undefined8 *)
                      Method_OVRTaskBuilder<OVRResult<List<OVRAnchor>,_OVRAnchor_FetchResult>>_Start<OVRAnchor_<FetchSharedAnchorsAsync>d__10>__
                     ,*(undefined8 *)(param_1 + 0x10));
        lVar8 = *(long *)Method_OVRResult<ulong,_OVRPlugin_Result>_get_Value__;
        lVar6 = *(long *)(lVar8 + 0x38);
        if (lVar6 == 0) {
          FUN_0367ca58(lVar8);
          lVar6 = *(long *)(lVar8 + 0x38);
        }
        lVar6 = *(long *)(lVar6 + 0x10);
        if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
          lVar6 = FUN_0367c9fc();
        }
        if (*(int *)(lVar6 + 0xe4) == 0) {
          thunk_FUN_036a1978();
        }
        lVar6 = *(long *)(*(long *)(lVar8 + 0x38) + 0x10);
        if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
          lVar6 = FUN_0367c9fc();
        }
        plVar5 = (long *)**(long **)(lVar6 + 0xb8);
      }
      return plVar5;
    }
  }
LAB_07503bd8:
                    /* WARNING: Subroutine does not return */
  FUN_03642c18();
}


