/*
FUNCTION_NAME: OVRPlugin.OVRP_1_46_0$$.cctor
ENTRY_POINT: 0339c764
PROGRAM: gunraiders-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin_OVRP_1_46_0___cctor(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  long unaff_x19;
  long *unaff_x21;
  long *unaff_x23;
  
  FUN_033704d4(**(undefined8 **)(param_1 + 0x248),param_2,*(undefined8 *)(unaff_x19 + 0x30),
               *(undefined8 *)(unaff_x19 + 0x50),0);
  if (*(int *)(*(long *)
                Method_System_Collections_Generic_List_Enumerator<ScriptableRendererFeature>_MoveNext__
              + 0xe0) == 0) {
    thunk_FUN_01c1d1e8(*(long *)
                        Method_System_Collections_Generic_List_Enumerator<ScriptableRendererFeature>_MoveNext__
                      );
  }
  thunk_FUN_01c495e4();
  FUN_03358c64();
  if (unaff_x21 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01c5d4a4();
  }
  lVar2 = *unaff_x21;
  uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
    do {
      if (*(long *)(piVar4 + -2) == *unaff_x23) {
        puVar1 = (undefined8 *)(lVar2 + (long)(*piVar4 + 1) * 0x10 + 0x138);
        goto LAB_0339c3b4;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 4;
    } while (uVar3 != 0);
  }
  puVar1 = (undefined8 *)FUN_01c72498();
LAB_0339c3b4:
  (*(code *)*puVar1)();
  return 1;
}


