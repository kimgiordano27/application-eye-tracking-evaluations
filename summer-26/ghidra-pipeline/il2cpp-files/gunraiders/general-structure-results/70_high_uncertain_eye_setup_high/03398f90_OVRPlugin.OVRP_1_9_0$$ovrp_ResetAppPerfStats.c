/*
FUNCTION_NAME: OVRPlugin.OVRP_1_9_0$$ovrp_ResetAppPerfStats
ENTRY_POINT: 03398f90
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


undefined8 OVRPlugin_OVRP_1_9_0__ovrp_ResetAppPerfStats(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  int iVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  long in_x10;
  int *piVar7;
  long *unaff_x19;
  long unaff_x20;
  long *plVar8;
  long *unaff_x22;
  
  uVar6 = (ulong)*(ushort *)(param_1 + 0x12e);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == **(long **)(in_x10 + 0xe0)) {
        puVar3 = (undefined8 *)(param_1 + (long)*piVar7 * 0x10 + 0x138);
        goto LAB_033991c0;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  puVar3 = (undefined8 *)FUN_01c72498(param_2,**(long **)(in_x10 + 0xe0),0);
LAB_033991c0:
  lVar4 = (*(code *)*puVar3)(param_2);
  *unaff_x22 = lVar4;
  puVar1 = Method_System_Collections_Generic_HashSet_Enumerator<Vector3Int>_MoveNext__;
  plVar8 = *(long **)(unaff_x20 + 0x28);
  if (plVar8 != (long *)0x0) {
    lVar4 = *plVar8;
    uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) ==
            *(long *)Method_System_Collections_Generic_HashSet_Enumerator<Vector3Int>_MoveNext__) {
          puVar3 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_03399234;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)
             FUN_01c72498(plVar8,*(long *)
                                  Method_System_Collections_Generic_HashSet_Enumerator<Vector3Int>_MoveNext__
                          ,0);
LAB_03399234:
    iVar2 = (*(code *)*puVar3)(plVar8,puVar3[1]);
    if (2 < iVar2) {
      plVar8 = *(long **)(unaff_x20 + 0x28);
      (**(code **)(*unaff_x19 + 0x1c8))();
      if (*(int *)(*(long *)PTR_DAT_042305b0 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8(*(long *)PTR_DAT_042305b0);
      }
      uVar5 = FUN_03295500(0);
      if (*unaff_x22 != 0) {
        thunk_FUN_01c5d21c(*unaff_x22,0);
        FUN_033704d4(*(undefined8 *)Method_System_Collections_Generic_HashSet<Face>_GetEnumerator__,
                     uVar5);
        if (*(int *)(*(long *)
                      Method_System_Collections_Generic_List_Enumerator<ScriptableRendererFeature>_MoveNext__
                    + 0xe0) == 0) {
          thunk_FUN_01c1d1e8(*(long *)
                              Method_System_Collections_Generic_List_Enumerator<ScriptableRendererFeature>_MoveNext__
                            );
        }
        uVar5 = FUN_03358c64();
        if (plVar8 != (long *)0x0) {
          lVar4 = *plVar8;
          uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
          if (uVar6 != 0) {
            piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
            do {
              if (*(long *)(piVar7 + -2) == *(long *)puVar1) {
                puVar3 = (undefined8 *)(lVar4 + (long)(*piVar7 + 1) * 0x10 + 0x138);
                goto LAB_0339934c;
              }
              uVar6 = uVar6 - 1;
              piVar7 = piVar7 + 4;
            } while (uVar6 != 0);
          }
          puVar3 = (undefined8 *)FUN_01c72498(plVar8,*(long *)puVar1,1);
LAB_0339934c:
          (*(code *)*puVar3)(plVar8,3,uVar5,0,puVar3[1]);
          goto LAB_03399364;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4a4();
    }
  }
LAB_03399364:
  FUN_0335c934();
  return 1;
}


