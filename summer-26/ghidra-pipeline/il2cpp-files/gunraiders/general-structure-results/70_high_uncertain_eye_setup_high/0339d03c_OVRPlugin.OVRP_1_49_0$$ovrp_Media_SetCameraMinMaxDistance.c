/*
FUNCTION_NAME: OVRPlugin.OVRP_1_49_0$$ovrp_Media_SetCameraMinMaxDistance
ENTRY_POINT: 0339d03c
PROGRAM: gunraiders-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;weak_pose_support;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;weak_vector_component_hits_1;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_49_0__ovrp_Media_SetCameraMinMaxDistance(long *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long unaff_x20;
  long unaff_x21;
  long *unaff_x23;
  long *unaff_x26;
  
  if (*(int *)(*param_1 + 0xe0) == 0) {
    thunk_FUN_01c1d1e8(*param_1);
  }
  uVar1 = FUN_03295500(0);
  if (unaff_x20 != 0) {
    FUN_0336f2b8(*(undefined8 *)Method_System_Collections_Generic_HashSet<InteractableTool>_Remove__
                 ,uVar1,*(undefined8 *)(unaff_x20 + 0x60),0);
    if (*(int *)(*(long *)
                  Method_System_Collections_Generic_List_Enumerator<ScriptableRendererFeature>_MoveNext__
                + 0xe0) == 0) {
      thunk_FUN_01c1d1e8(*(long *)
                          Method_System_Collections_Generic_List_Enumerator<ScriptableRendererFeature>_MoveNext__
                        );
    }
    thunk_FUN_01c495e4();
    FUN_03358c64();
    if (unaff_x23 != (long *)0x0) {
      lVar3 = *unaff_x23;
      uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar4 != 0) {
        piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == *unaff_x26) {
            puVar2 = (undefined8 *)(lVar3 + (long)(*piVar5 + 1) * 0x10 + 0x138);
            goto LAB_0339d114;
          }
          uVar4 = uVar4 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar4 != 0);
      }
      puVar2 = (undefined8 *)FUN_01c72498();
LAB_0339d114:
      (*(code *)*puVar2)();
      if ((*(long *)(unaff_x21 + 0x20) != 0) && (unaff_x20 != 0)) {
        FUN_033900d8();
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4a4();
}


