/*
FUNCTION_NAME: OVRPlugin.OVRP_1_44_0$$ovrp_GetMesh
ENTRY_POINT: 0339c0b8
PROGRAM: gunraiders-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin_OVRP_1_44_0__ovrp_GetMesh(undefined8 *param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  long unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  long *plVar10;
  undefined8 in_stack_00000030;
  
  (*(code *)*param_1)();
  puVar1 = Method_System_Collections_Generic_HashSet_Enumerator<Vector3Int>_MoveNext__;
  if (*(long *)(unaff_x20 + 200) != 0) {
    plVar10 = *(long **)(unaff_x22 + 0x28);
    if (plVar10 != (long *)0x0) {
      lVar7 = *plVar10;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) ==
              *(long *)Method_System_Collections_Generic_HashSet_Enumerator<Vector3Int>_MoveNext__)
          {
            puVar3 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_0339c140;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar3 = (undefined8 *)
               FUN_01c72498(plVar10,*(long *)
                                     Method_System_Collections_Generic_HashSet_Enumerator<Vector3Int>_MoveNext__
                            ,0);
LAB_0339c140:
      iVar2 = (*(code *)*puVar3)(plVar10,puVar3[1]);
      if (3 < iVar2) {
        if (unaff_x21 == (long *)0x0) goto LAB_0339c2cc;
        plVar10 = *(long **)(unaff_x22 + 0x28);
        uVar4 = (**(code **)(*unaff_x21 + 0x1c8))();
        if (*(int *)(*(long *)PTR_DAT_042305b0 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8(*(long *)PTR_DAT_042305b0);
        }
        uVar5 = FUN_03295500(0);
        uVar5 = FUN_033704d4(*(undefined8 *)
                              Method_System_Collections_Generic_HashSet<int>_UnionWith__,uVar5,
                             *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x50),0);
        if (*(int *)(*(long *)
                      Method_System_Collections_Generic_List_Enumerator<ScriptableRendererFeature>_MoveNext__
                    + 0xe0) == 0) {
          thunk_FUN_01c1d1e8(*(long *)
                              Method_System_Collections_Generic_List_Enumerator<ScriptableRendererFeature>_MoveNext__
                            );
        }
        uVar6 = thunk_FUN_01c495e4();
        uVar4 = FUN_03358c64(uVar6,uVar4,uVar5,0);
        if (plVar10 == (long *)0x0) goto LAB_0339c2cc;
        lVar7 = *plVar10;
        uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == *(long *)puVar1) {
              puVar3 = (undefined8 *)(lVar7 + (long)(*piVar9 + 1) * 0x10 + 0x138);
              goto LAB_0339c254;
            }
            uVar8 = uVar8 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar8 != 0);
        }
        puVar3 = (undefined8 *)FUN_01c72498(plVar10,*(long *)puVar1,1);
LAB_0339c254:
        (*(code *)*puVar3)(plVar10,4,uVar4,0,puVar3[1]);
      }
    }
    lVar7 = *(long *)(unaff_x20 + 200);
    in_stack_00000030._4_1_ = 1;
    thunk_FUN_01c49334(*(undefined8 *)PTR_DAT_0422fa08,(long)&stack0x00000030 + 4);
    if (lVar7 == 0) {
LAB_0339c2cc:
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4a4();
    }
    (**(code **)(lVar7 + 0x18))(*(undefined8 *)(lVar7 + 0x40));
  }
  return 1;
}


