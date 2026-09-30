/*
FUNCTION_NAME: FUN_06ac4908
ENTRY_POINT: 06ac4908
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_2;ui_or_gameplay_sink_hits_5;telemetry_or_network_hits_4
*/


long * FUN_06ac4908(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  int *piVar8;
  long *plVar9;
  undefined8 local_68;
  undefined8 uStack_60;
  long *local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  long *local_40;
  
                    /* catch() { ... } // from try @ 06ac4870 with catch @ 06ac4908 */
                    /* catch() { ... } // from try @ 06ac4304 with catch @ 06ac490c */
                    /* catch() { ... } // from try @ 06ac3d00 with catch @ 06ac4910 */
                    /* catch() { ... } // from try @ 06ac3d6c with catch @ 06ac4914 */
                    /* catch() { ... } // from try @ 06ac4848 with catch @ 06ac4918 */
                    /* catch() { ... } // from try @ 06ac3cac with catch @ 06ac491c */
                    /* catch() { ... } // from try @ 06ac3c58 with catch @ 06ac4920 */
                    /* catch() { ... } // from try @ 06ac423c with catch @ 06ac4924 */
  if ((DAT_076e318a & 1) == 0) {
    thunk_FUN_032e1da0(Method_UnityEngine_Events_UnityEvent<SelectExitEventArgs>_AddListener__);
    thunk_FUN_032e1da0(Method_UnityEngine_Events_UnityEvent<SelectExitEventArgs>_Invoke__);
    thunk_FUN_032e1da0(Method_UnityEngine_Events_UnityEvent<float>__ctor__);
    thunk_FUN_032e1da0(Method_UnityEngine_Events_UnityEvent<float>_Invoke__);
    thunk_FUN_032e1da0(
                      Method_Meta_Voice_TranscriptionRequestEvents<VoiceServiceRequestEvent>_get_OnAudioActivation__
                      );
    thunk_FUN_032e1da0(Method_UnityEngine_Events_UnityEvent<string>_Invoke__);
    DAT_076e318a = 1;
  }
  puVar3 = Method_UnityEngine_Events_UnityEvent<float>__ctor__;
  puVar2 = Method_UnityEngine_Events_UnityEvent<SelectExitEventArgs>_Invoke__;
  puVar1 = 
  Method_Meta_Voice_TranscriptionRequestEvents<VoiceServiceRequestEvent>_get_OnAudioActivation__;
  local_50 = 0;
  uStack_48 = 0;
  local_40 = (long *)0x0;
  if ((*(long *)(param_1 + 0xa0) == 0) ||
     (lVar4 = *(long *)(*(long *)(param_1 + 0xa0) + 0x10), lVar4 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_032d5ee8();
  }
  FUN_041e3694(&local_68,lVar4,*(undefined8 *)Method_UnityEngine_Events_UnityEvent<string>_Invoke__)
  ;
  uStack_48 = uStack_60;
  local_50 = local_68;
  local_40 = local_58;
  do {
    uVar5 = FUN_052d44b4(&local_50,*(undefined8 *)puVar3);
    plVar9 = local_40;
    if ((uVar5 & 1) == 0) {
      plVar9 = (long *)0x0;
      break;
    }
    if (local_40 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_032d5ee8();
    }
    lVar4 = *local_40;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)puVar1) {
          puVar6 = (undefined8 *)(lVar4 + (long)(*piVar8 + 4) * 0x10 + 0x138);
          goto LAB_06ac4a38;
        }
        uVar5 = uVar5 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar5 != 0);
    }
    puVar6 = (undefined8 *)FUN_032937ac(local_40,*(long *)puVar1,4);
LAB_06ac4a38:
    uVar7 = (*(code *)*puVar6)(plVar9,puVar6[1]);
    uVar5 = thunk_FUN_057aa644(uVar7,param_2,0);
  } while ((uVar5 & 1) == 0);
  FUN_052d44b0(&local_50,*(undefined8 *)puVar2);
  return plVar9;
}


