/*
FUNCTION_NAME: OVRPlugin.OVRP_1_49_0$$ovrp_Media_GetCameraMinMaxDistance
ENTRY_POINT: 0339cfa8
PROGRAM: gunraiders-libil2cpp.so
SCORE: 90
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;weak_pose_support;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;weak_vector_component_hits_1;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_49_0__ovrp_Media_GetCameraMinMaxDistance(void)

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
  long unaff_x21;
  long *unaff_x22;
  long *plVar10;
  
  puVar1 = Method_System_Collections_Generic_HashSet_Enumerator<Vector3Int>_MoveNext__;
  plVar10 = *(long **)(unaff_x21 + 0x28);
  if (plVar10 != (long *)0x0) {
    lVar7 = *plVar10;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) ==
            *(long *)Method_System_Collections_Generic_HashSet_Enumerator<Vector3Int>_MoveNext__) {
          puVar3 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_0339d004;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar3 = (undefined8 *)
             FUN_01c72498(plVar10,*(long *)
                                   Method_System_Collections_Generic_HashSet_Enumerator<Vector3Int>_MoveNext__
                          ,0);
LAB_0339d004:
    iVar2 = (*(code *)*puVar3)(plVar10,puVar3[1]);
    if (2 < iVar2) {
      if (unaff_x22 == (long *)0x0) goto LAB_0339d15c;
      plVar10 = *(long **)(unaff_x21 + 0x28);
      uVar4 = (**(code **)(*unaff_x22 + 0x1c8))();
      if (*(int *)(*(long *)PTR_DAT_042305b0 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8(*(long *)PTR_DAT_042305b0);
      }
      uVar5 = FUN_03295500(0);
      if (unaff_x20 == 0) goto LAB_0339d15c;
      uVar5 = FUN_0336f2b8(*(undefined8 *)
                            Method_System_Collections_Generic_HashSet<InteractableTool>_Remove__,
                           uVar5,*(undefined8 *)(unaff_x20 + 0x60),0);
      if (*(int *)(*(long *)
                    Method_System_Collections_Generic_List_Enumerator<ScriptableRendererFeature>_MoveNext__
                  + 0xe0) == 0) {
        thunk_FUN_01c1d1e8(*(long *)
                            Method_System_Collections_Generic_List_Enumerator<ScriptableRendererFeature>_MoveNext__
                          );
      }
      uVar6 = thunk_FUN_01c495e4();
      uVar4 = FUN_03358c64(uVar6,uVar4,uVar5,0);
      if (plVar10 == (long *)0x0) goto LAB_0339d15c;
      lVar7 = *plVar10;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *(long *)puVar1) {
            puVar3 = (undefined8 *)(lVar7 + (long)(*piVar9 + 1) * 0x10 + 0x138);
            goto LAB_0339d114;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar3 = (undefined8 *)FUN_01c72498(plVar10,*(long *)puVar1,1);
LAB_0339d114:
      (*(code *)*puVar3)(plVar10,3,uVar4,0,puVar3[1]);
    }
  }
  if ((*(long *)(unaff_x21 + 0x20) != 0) && (unaff_x20 != 0)) {
    FUN_033900d8();
    return;
  }
LAB_0339d15c:
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4a4();
}


