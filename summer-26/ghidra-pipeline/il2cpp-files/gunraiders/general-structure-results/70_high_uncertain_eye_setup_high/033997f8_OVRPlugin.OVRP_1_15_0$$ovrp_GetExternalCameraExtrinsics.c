/*
FUNCTION_NAME: OVRPlugin.OVRP_1_15_0$$ovrp_GetExternalCameraExtrinsics
ENTRY_POINT: 033997f8
PROGRAM: gunraiders-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin_OVRP_1_15_0__ovrp_GetExternalCameraExtrinsics(long param_1)

{
  undefined *puVar1;
  int iVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  long *unaff_x19;
  long unaff_x20;
  long *unaff_x24;
  
  if ((param_1 == 0) || (plVar3 = (long *)FUN_0335fda8(param_1,0), plVar3 == (long *)0x0)) {
LAB_03399a80:
                    /* WARNING: Subroutine does not return */
    FUN_01c5d4a4();
  }
  lVar8 = *plVar3;
  uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
  if (uVar9 != 0) {
    piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
    do {
      if (*(long *)(piVar10 + -2) == *(long *)Method_System_Collections_Generic_HashSet<Face>_Add__)
      {
        puVar4 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
        goto LAB_033998c4;
      }
      uVar9 = uVar9 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar9 != 0);
  }
  puVar4 = (undefined8 *)
           FUN_01c72498(plVar3,*(long *)Method_System_Collections_Generic_HashSet<Face>_Add__,0);
LAB_033998c4:
  lVar8 = (*(code *)*puVar4)(plVar3);
  *unaff_x24 = lVar8;
  puVar1 = Method_System_Collections_Generic_HashSet_Enumerator<Vector3Int>_MoveNext__;
  plVar3 = *(long **)(unaff_x20 + 0x28);
  if (plVar3 != (long *)0x0) {
    lVar8 = *plVar3;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) ==
            *(long *)Method_System_Collections_Generic_HashSet_Enumerator<Vector3Int>_MoveNext__) {
          puVar4 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_03399938;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar4 = (undefined8 *)
             FUN_01c72498(plVar3,*(long *)
                                  Method_System_Collections_Generic_HashSet_Enumerator<Vector3Int>_MoveNext__
                          ,0);
LAB_03399938:
    iVar2 = (*(code *)*puVar4)(plVar3,puVar4[1]);
    if (2 < iVar2) {
      plVar3 = *(long **)(unaff_x20 + 0x28);
      uVar5 = (**(code **)(*unaff_x19 + 0x1c8))();
      if (*(int *)(*(long *)PTR_DAT_042305b0 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8(*(long *)PTR_DAT_042305b0);
      }
      uVar6 = FUN_03295500(0);
      if (*unaff_x24 != 0) {
        thunk_FUN_01c5d21c(*unaff_x24,0);
        uVar6 = FUN_033704d4(*(undefined8 *)
                              Method_System_Collections_Generic_HashSet<Face>_GetEnumerator__,uVar6)
        ;
        if (*(int *)(*(long *)
                      Method_System_Collections_Generic_List_Enumerator<ScriptableRendererFeature>_MoveNext__
                    + 0xe0) == 0) {
          thunk_FUN_01c1d1e8(*(long *)
                              Method_System_Collections_Generic_List_Enumerator<ScriptableRendererFeature>_MoveNext__
                            );
        }
        uVar7 = thunk_FUN_01c495e4();
        uVar5 = FUN_03358c64(uVar7,uVar5,uVar6,0);
        if (plVar3 != (long *)0x0) {
          lVar8 = *plVar3;
          uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
          if (uVar9 != 0) {
            piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(long *)(piVar10 + -2) == *(long *)puVar1) {
                puVar4 = (undefined8 *)(lVar8 + (long)(*piVar10 + 1) * 0x10 + 0x138);
                goto LAB_03399a60;
              }
              uVar9 = uVar9 - 1;
              piVar10 = piVar10 + 4;
            } while (uVar9 != 0);
          }
          puVar4 = (undefined8 *)FUN_01c72498(plVar3,*(long *)puVar1,1);
LAB_03399a60:
          (*(code *)*puVar4)(plVar3,3,uVar5,0,puVar4[1]);
          return 1;
        }
      }
      goto LAB_03399a80;
    }
  }
  return 1;
}


