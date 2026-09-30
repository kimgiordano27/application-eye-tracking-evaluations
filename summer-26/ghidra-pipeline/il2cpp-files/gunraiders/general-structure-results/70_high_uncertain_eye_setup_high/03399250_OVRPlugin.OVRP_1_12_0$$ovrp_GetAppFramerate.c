/*
FUNCTION_NAME: OVRPlugin.OVRP_1_12_0$$ovrp_GetAppFramerate
ENTRY_POINT: 03399250
PROGRAM: gunraiders-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin_OVRP_1_12_0__ovrp_GetAppFramerate(long param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long *unaff_x20;
  long *unaff_x22;
  long *unaff_x23;
  
  (**(code **)(param_1 + 0x1c8))();
  if (*(int *)(*(long *)PTR_DAT_042305b0 + 0xe0) == 0) {
    thunk_FUN_01c1d1e8(*(long *)PTR_DAT_042305b0);
  }
  uVar1 = FUN_03295500(0);
  if (*unaff_x22 != 0) {
    thunk_FUN_01c5d21c(*unaff_x22,0);
    FUN_033704d4(*(undefined8 *)Method_System_Collections_Generic_HashSet<Face>_GetEnumerator__,
                 uVar1);
    if (*(int *)(*(long *)
                  Method_System_Collections_Generic_List_Enumerator<ScriptableRendererFeature>_MoveNext__
                + 0xe0) == 0) {
      thunk_FUN_01c1d1e8(*(long *)
                          Method_System_Collections_Generic_List_Enumerator<ScriptableRendererFeature>_MoveNext__
                        );
    }
    FUN_03358c64();
    if (unaff_x20 != (long *)0x0) {
      lVar3 = *unaff_x20;
      uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar4 != 0) {
        piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == *unaff_x23) {
            puVar2 = (undefined8 *)(lVar3 + (long)(*piVar5 + 1) * 0x10 + 0x138);
            goto LAB_0339934c;
          }
          uVar4 = uVar4 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar4 != 0);
      }
      puVar2 = (undefined8 *)FUN_01c72498();
LAB_0339934c:
      (*(code *)*puVar2)();
      FUN_0335c934();
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4a4();
}


