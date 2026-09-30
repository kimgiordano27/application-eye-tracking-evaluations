/*
FUNCTION_NAME: OVRPlugin.OVRP_1_49_0$$ovrp_SetClientColorDesc
ENTRY_POINT: 0339c984
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


void OVRPlugin_OVRP_1_49_0__ovrp_SetClientColorDesc(long param_1)

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
  long *unaff_x19;
  long unaff_x21;
  long unaff_x22;
  long unaff_x23;
  long *plVar10;
  
  FUN_01c5d288(*(undefined8 *)(param_1 + 1000));
  FUN_01c5d288(Method_System_Collections_Generic_HashSet<Face>_Add__);
  FUN_01c5d288(Method_System_Collections_Generic_HashSet_Enumerator<Vector3Int>_MoveNext__);
  FUN_01c5d288(
              Method_System_Collections_Generic_List_Enumerator<ScriptableRendererFeature>_MoveNext__
              );
  FUN_01c5d288(Method_System_Collections_Generic_HashSet<Interactable>_Remove__);
  *(undefined1 *)(unaff_x23 + 0x6bf) = 1;
  puVar1 = Method_System_Collections_Generic_HashSet_Enumerator<Vector3Int>_MoveNext__;
  plVar10 = *(long **)(unaff_x22 + 0x28);
  if (plVar10 != (long *)0x0) {
    lVar7 = *plVar10;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) ==
            *(long *)Method_System_Collections_Generic_HashSet_Enumerator<Vector3Int>_MoveNext__) {
          puVar3 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_0339ca20;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar3 = (undefined8 *)
             FUN_01c72498(plVar10,*(long *)
                                   Method_System_Collections_Generic_HashSet_Enumerator<Vector3Int>_MoveNext__
                          ,0);
LAB_0339ca20:
    iVar2 = (*(code *)*puVar3)(plVar10,puVar3[1]);
    if (3 < iVar2) {
      if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4a4();
      }
      plVar10 = *(long **)(unaff_x22 + 0x28);
      uVar4 = (**(code **)(*unaff_x19 + 0x1c8))();
      if (*(int *)(*(long *)PTR_DAT_042305b0 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      uVar5 = FUN_03295500(0);
      if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4a4();
      }
      thunk_FUN_01c5d21c();
      uVar5 = FUN_033704d4(*(undefined8 *)
                            Method_System_Collections_Generic_HashSet<Interactable>_Remove__,uVar5);
      if (*(int *)(*(long *)
                    Method_System_Collections_Generic_List_Enumerator<ScriptableRendererFeature>_MoveNext__
                  + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      uVar6 = thunk_FUN_01c495e4();
      uVar4 = FUN_03358c64(uVar6,uVar4,uVar5,0);
      if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4a4();
      }
      lVar7 = *plVar10;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *(long *)puVar1) {
            puVar3 = (undefined8 *)(lVar7 + (long)(*piVar9 + 1) * 0x10 + 0x138);
            goto LAB_0339cb3c;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar3 = (undefined8 *)FUN_01c72498(plVar10,*(long *)puVar1,1);
LAB_0339cb3c:
      (*(code *)*puVar3)(plVar10,4,uVar4,0,puVar3[1]);
    }
  }
  if (*(long *)(unaff_x22 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01c5d4a4();
  }
  plVar10 = (long *)FUN_0335fda8(*(long *)(unaff_x22 + 0x20),0);
  if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01c5d4a4();
  }
  lVar7 = *plVar10;
  uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar8 != 0) {
    piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == *(long *)Method_System_Collections_Generic_HashSet<Face>_Add__)
      {
        puVar3 = (undefined8 *)(lVar7 + (long)(*piVar9 + 3) * 0x10 + 0x138);
        goto LAB_0339cbc4;
      }
      uVar8 = uVar8 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar8 != 0);
  }
  puVar3 = (undefined8 *)
           FUN_01c72498(plVar10,*(long *)Method_System_Collections_Generic_HashSet<Face>_Add__,3);
LAB_0339cbc4:
  (*(code *)*puVar3)(plVar10);
  return;
}


