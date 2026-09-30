/*
FUNCTION_NAME: OVRPlugin.OVRP_1_15_0$$ovrp_EnqueueSetupLayer
ENTRY_POINT: 03399948
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


undefined8 OVRPlugin_OVRP_1_15_0__ovrp_EnqueueSetupLayer(void)

{
  char in_NG;
  char in_OV;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long *unaff_x19;
  long unaff_x20;
  long *plVar8;
  long *unaff_x21;
  long *unaff_x24;
  
  if (in_NG != in_OV) {
    return 1;
  }
  plVar8 = *(long **)(unaff_x20 + 0x28);
  uVar1 = (**(code **)(*unaff_x19 + 0x1c8))();
  if (*(int *)(*(long *)PTR_DAT_042305b0 + 0xe0) == 0) {
    thunk_FUN_01c1d1e8(*(long *)PTR_DAT_042305b0);
  }
  uVar2 = FUN_03295500(0);
  if (*unaff_x24 != 0) {
    thunk_FUN_01c5d21c(*unaff_x24,0);
    uVar2 = FUN_033704d4(*(undefined8 *)
                          Method_System_Collections_Generic_HashSet<Face>_GetEnumerator__,uVar2);
    if (*(int *)(*(long *)
                  Method_System_Collections_Generic_List_Enumerator<ScriptableRendererFeature>_MoveNext__
                + 0xe0) == 0) {
      thunk_FUN_01c1d1e8(*(long *)
                          Method_System_Collections_Generic_List_Enumerator<ScriptableRendererFeature>_MoveNext__
                        );
    }
    uVar3 = thunk_FUN_01c495e4();
    uVar1 = FUN_03358c64(uVar3,uVar1,uVar2,0);
    if (plVar8 != (long *)0x0) {
      lVar5 = *plVar8;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *unaff_x21) {
            puVar4 = (undefined8 *)(lVar5 + (long)(*piVar7 + 1) * 0x10 + 0x138);
            goto LAB_03399a60;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar4 = (undefined8 *)FUN_01c72498(plVar8,*unaff_x21,1);
LAB_03399a60:
      (*(code *)*puVar4)(plVar8,3,uVar1,0,puVar4[1]);
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4a4();
}


