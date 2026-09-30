/*
FUNCTION_NAME: OVRPlugin.OVRP_1_0_0$$ovrp_SetTrackingOriginType
ENTRY_POINT: 033964e4
PROGRAM: gunraiders-libil2cpp.so
SCORE: 91
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_3;ui_or_gameplay_sink_hits_3;functionality_gaze_retrieval_or_extraction
*/


undefined8 OVRPlugin_OVRP_1_0_0__ovrp_SetTrackingOriginType(void)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  code *in_x9;
  ulong uVar8;
  int *piVar9;
  long *unaff_x19;
  long unaff_x22;
  long *plVar10;
  long *unaff_x27;
  
  uVar2 = (*in_x9)();
  plVar10 = *(long **)(unaff_x22 + 0x28);
  if (plVar10 != (long *)0x0) {
    lVar7 = *plVar10;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *unaff_x27) {
          puVar3 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_03396550;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar3 = (undefined8 *)FUN_01c72498(plVar10,*unaff_x27,0);
LAB_03396550:
    iVar1 = (*(code *)*puVar3)(plVar10,puVar3[1]);
    if (2 < iVar1) {
      if (unaff_x19 != (long *)0x0) {
        plVar10 = *(long **)(unaff_x22 + 0x28);
        uVar4 = (**(code **)(*unaff_x19 + 0x1c8))();
        if (*(int *)(*(long *)PTR_DAT_042305b0 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8(*(long *)PTR_DAT_042305b0);
        }
        uVar5 = FUN_03295500(0);
        thunk_FUN_01c5d21c();
        uVar5 = FUN_033704d4(*(undefined8 *)Method_GenericPooler<FriendButton>_PoolInstantiate__,
                             uVar5);
        if (*(int *)(*(long *)
                      Method_System_Collections_Generic_List_Enumerator<ScriptableRendererFeature>_MoveNext__
                    + 0xe0) == 0) {
          thunk_FUN_01c1d1e8(*(long *)
                              Method_System_Collections_Generic_List_Enumerator<ScriptableRendererFeature>_MoveNext__
                            );
        }
        uVar6 = thunk_FUN_01c495e4();
        uVar4 = FUN_03358c64(uVar6,uVar4,uVar5,0);
        if (plVar10 != (long *)0x0) {
          lVar7 = *plVar10;
          uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar8 != 0) {
            piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(long *)(piVar9 + -2) == *unaff_x27) {
                puVar3 = (undefined8 *)(lVar7 + (long)(*piVar9 + 1) * 0x10 + 0x138);
                goto LAB_03396678;
              }
              uVar8 = uVar8 - 1;
              piVar9 = piVar9 + 4;
            } while (uVar8 != 0);
          }
          puVar3 = (undefined8 *)FUN_01c72498(plVar10,*unaff_x27,1);
LAB_03396678:
          (*(code *)*puVar3)(plVar10,3,uVar4,0,puVar3[1]);
          return uVar2;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4a4();
    }
  }
  return uVar2;
}


