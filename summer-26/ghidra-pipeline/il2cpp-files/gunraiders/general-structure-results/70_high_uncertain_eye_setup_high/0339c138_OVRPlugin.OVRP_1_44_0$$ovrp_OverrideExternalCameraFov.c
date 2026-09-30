/*
FUNCTION_NAME: OVRPlugin.OVRP_1_44_0$$ovrp_OverrideExternalCameraFov
ENTRY_POINT: 0339c138
PROGRAM: gunraiders-libil2cpp.so
SCORE: 86
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin_OVRP_1_44_0__ovrp_OverrideExternalCameraFov(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long lVar6;
  long in_x9;
  ulong uVar7;
  int *piVar8;
  long unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  long *plVar9;
  long *unaff_x25;
  undefined8 in_stack_00000030;
  
  iVar1 = (**(code **)(param_1 + in_x9 * 0x10 + 0x138))();
  if (3 < iVar1) {
    if (unaff_x21 == (long *)0x0) goto LAB_0339c2cc;
    plVar9 = *(long **)(unaff_x22 + 0x28);
    uVar2 = (**(code **)(*unaff_x21 + 0x1c8))();
    if (*(int *)(*(long *)PTR_DAT_042305b0 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8(*(long *)PTR_DAT_042305b0);
    }
    uVar3 = FUN_03295500(0);
    uVar3 = FUN_033704d4(*(undefined8 *)Method_System_Collections_Generic_HashSet<int>_UnionWith__,
                         uVar3,*(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x50),0
                        );
    if (*(int *)(*(long *)
                  Method_System_Collections_Generic_List_Enumerator<ScriptableRendererFeature>_MoveNext__
                + 0xe0) == 0) {
      thunk_FUN_01c1d1e8(*(long *)
                          Method_System_Collections_Generic_List_Enumerator<ScriptableRendererFeature>_MoveNext__
                        );
    }
    uVar4 = thunk_FUN_01c495e4();
    uVar2 = FUN_03358c64(uVar4,uVar2,uVar3,0);
    if (plVar9 == (long *)0x0) goto LAB_0339c2cc;
    lVar6 = *plVar9;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *unaff_x25) {
          puVar5 = (undefined8 *)(lVar6 + (long)(*piVar8 + 1) * 0x10 + 0x138);
          goto LAB_0339c254;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar5 = (undefined8 *)FUN_01c72498(plVar9,*unaff_x25,1);
LAB_0339c254:
    (*(code *)*puVar5)(plVar9,4,uVar2,0,puVar5[1]);
  }
  lVar6 = *(long *)(unaff_x20 + 200);
  in_stack_00000030._4_1_ = 1;
  thunk_FUN_01c49334(*(undefined8 *)PTR_DAT_0422fa08,(long)&stack0x00000030 + 4);
  if (lVar6 != 0) {
    (**(code **)(lVar6 + 0x18))(*(undefined8 *)(lVar6 + 0x40));
    return 1;
  }
LAB_0339c2cc:
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4a4();
}


