/*
FUNCTION_NAME: OVRPlugin.OVRP_1_78_0$$ovrp_GetEyeGazesState
ENTRY_POINT: 033a0588
PROGRAM: gunraiders-libil2cpp.so
SCORE: 117
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction;attempted_use
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_4;validity_or_gating_hits_4;ui_or_gameplay_sink_hits_2;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


void OVRPlugin_OVRP_1_78_0__ovrp_GetEyeGazesState(void)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  long *unaff_x19;
  long unaff_x21;
  long unaff_x22;
  long *plVar11;
  
  uVar3 = FUN_033a4710();
  puVar1 = Method_System_Collections_Generic_HashSet_Enumerator<Vector3Int>_MoveNext__;
  plVar11 = *(long **)(unaff_x22 + 0x28);
  if (plVar11 != (long *)0x0) {
    lVar8 = *plVar11;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) ==
            *(long *)Method_System_Collections_Generic_HashSet_Enumerator<Vector3Int>_MoveNext__) {
          puVar4 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_033a05f8;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar4 = (undefined8 *)
             FUN_01c72498(plVar11,*(long *)
                                   Method_System_Collections_Generic_HashSet_Enumerator<Vector3Int>_MoveNext__
                          ,0);
LAB_033a05f8:
    iVar2 = (*(code *)*puVar4)(plVar11,puVar4[1]);
    if (2 < iVar2) {
      if (unaff_x19 == (long *)0x0) goto LAB_033a0794;
      plVar11 = *(long **)(unaff_x22 + 0x28);
      uVar5 = FUN_03368ed8();
      if (*(int *)(*(long *)PTR_DAT_042305b0 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8(*(long *)PTR_DAT_042305b0);
      }
      uVar6 = FUN_03295500(0);
      if (unaff_x21 == 0) goto LAB_033a0794;
      uVar7 = thunk_FUN_01c5d21c();
      uVar3 = FUN_033704d4(*(undefined8 *)
                            Method_System_Collections_Generic_HashSet<RTHandle>_Remove__,uVar6,uVar3
                           ,uVar7,0);
      if (*(int *)(*(long *)
                    Method_System_Collections_Generic_List_Enumerator<ScriptableRendererFeature>_MoveNext__
                  + 0xe0) == 0) {
        thunk_FUN_01c1d1e8(*(long *)
                            Method_System_Collections_Generic_List_Enumerator<ScriptableRendererFeature>_MoveNext__
                          );
      }
      uVar3 = FUN_03358c64(0,uVar5,uVar3,0);
      if (plVar11 == (long *)0x0) goto LAB_033a0794;
      lVar8 = *plVar11;
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)puVar1) {
            puVar4 = (undefined8 *)(lVar8 + (long)(*piVar10 + 1) * 0x10 + 0x138);
            goto LAB_033a070c;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar4 = (undefined8 *)FUN_01c72498(plVar11,*(long *)puVar1,1);
LAB_033a070c:
      (*(code *)*puVar4)(plVar11,3,uVar3,0,puVar4[1]);
    }
  }
  if (unaff_x19 != (long *)0x0) {
    (**(code **)(*unaff_x19 + 0x1a8))();
    (**(code **)(*unaff_x19 + 0x218))();
    (**(code **)(*unaff_x19 + 0x2c8))();
                    /* WARNING: Could not recover jumptable at 0x033a0790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*unaff_x19 + 0x1b8))();
    return;
  }
LAB_033a0794:
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4a4();
}


