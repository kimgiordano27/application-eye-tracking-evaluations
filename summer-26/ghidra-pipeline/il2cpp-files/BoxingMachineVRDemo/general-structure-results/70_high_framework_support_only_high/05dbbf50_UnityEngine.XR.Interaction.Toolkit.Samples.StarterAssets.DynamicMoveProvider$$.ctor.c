/*
FUNCTION_NAME: UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.DynamicMoveProvider$$.ctor
ENTRY_POINT: 05dbbf50
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 73
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;paired_field_refs_with_eye_source;frame_or_lifecycle_behavior;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint UnityEngine_XR_Interaction_Toolkit_Samples_StarterAssets_DynamicMoveProvider___ctor(void)

{
  undefined *puVar1;
  uint uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long *plVar9;
  undefined8 *unaff_x22;
  long *plVar10;
  long lVar11;
  undefined8 uVar12;
  
  FUN_02d6084c(
              Method_System_Collections_Generic_SortedList<int,_ValueTuple<RTHandle,_int>>_get_Values__
              );
  FUN_02d6084c(
              Method_System_Collections_Generic_SortedList<int,_ValueTuple<RTHandle,_int>>_RemoveAt__
              );
  FUN_02d6084c(
              Method_System_Collections_Generic_SortedList<int,_ValueTuple<RTHandle,_int>>_GetEnumerator__
              );
  FUN_02d6084c(Method_OVRManager_Observable<OVRManager_PassthroughInitializationState>_set_Value__);
  *(undefined1 *)(unaff_x20 + 0x41) = 1;
  lVar3 = thunk_FUN_02d9d534(*unaff_x22);
  FUN_0504920c(lVar3,0);
  if (lVar3 != 0) {
    plVar10 = (long *)(lVar3 + 0x10);
    *plVar10 = unaff_x21;
    thunk_FUN_02dd37b4(plVar10);
    puVar1 = PTR_DAT_0676b288;
    plVar9 = *(long **)(unaff_x19 + 0x10);
    if (plVar9 != (long *)0x0) {
      lVar6 = *plVar9;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_0676b288) {
            puVar4 = (undefined8 *)(lVar6 + (long)(*piVar8 + 0x1b) * 0x10 + 0x138);
            goto LAB_05dbc014;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar4 = (undefined8 *)FUN_02d9a5d4(plVar9,*(long *)PTR_DAT_0676b288,0x1b);
LAB_05dbc014:
      uVar7 = (*(code *)*puVar4)(plVar9,puVar4[1]);
      if ((uVar7 & 1) == 0) {
        if ((*plVar10 == 0) || (uVar7 = FUN_04143750(), (uVar7 & 1) != 0)) {
          plVar9 = *(long **)(unaff_x19 + 0x10);
          if (plVar9 != (long *)0x0) {
            lVar6 = *plVar9;
            uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
            if (uVar7 != 0) {
              piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
              do {
                if (*(long *)(piVar8 + -2) == *(long *)puVar1) {
                  puVar4 = (undefined8 *)(lVar6 + (long)(*piVar8 + 0x19) * 0x10 + 0x138);
                  goto LAB_05dbc0ac;
                }
                uVar7 = uVar7 - 1;
                piVar8 = piVar8 + 4;
              } while (uVar7 != 0);
            }
            puVar4 = (undefined8 *)FUN_02d9a5d4(plVar9,*(long *)puVar1,0x19);
LAB_05dbc0ac:
            plVar9 = (long *)(*(code *)*puVar4)(plVar9,puVar4[1]);
            if (plVar9 != (long *)0x0) {
              lVar6 = *plVar9;
              uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
              if (uVar7 != 0) {
                piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_0676b318) {
                    puVar4 = (undefined8 *)(lVar6 + (long)(*piVar8 + 3) * 0x10 + 0x138);
                    goto LAB_05dbc118;
                  }
                  uVar7 = uVar7 - 1;
                  piVar8 = piVar8 + 4;
                } while (uVar7 != 0);
              }
              puVar4 = (undefined8 *)FUN_02d9a5d4(plVar9,*(long *)PTR_DAT_0676b318,3);
LAB_05dbc118:
              uVar5 = (*(code *)*puVar4)(plVar9);
              puVar1 = 
              Method_System_Collections_Generic_SortedList<int,_ValueTuple<RTHandle,_int>>_GetEnumerator__
              ;
              lVar6 = *(long *)
                       Method_System_Collections_Generic_SortedList<int,_ValueTuple<RTHandle,_int>>_GetEnumerator__
              ;
              if (*(int *)(lVar6 + 0xe4) == 0) {
                thunk_FUN_02dbd7b4(lVar6);
                lVar6 = *(long *)puVar1;
              }
              lVar11 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x18);
              if (lVar11 == 0) {
                if (*(int *)(lVar6 + 0xe4) == 0) {
                  thunk_FUN_02dbd7b4(lVar6);
                  lVar6 = *(long *)puVar1;
                }
                uVar12 = **(undefined8 **)(lVar6 + 0xb8);
                lVar11 = thunk_FUN_02d9d534(*(undefined8 *)
                                             Method_Unity_Collections_SortJob<int,_NativeSortExtension_DefaultComparer<int>>_Schedule__
                                           );
                FUN_04d61e54(lVar11,uVar12,
                             *(undefined8 *)
                              Method_System_Collections_Generic_SortedList<int,_ValueTuple<RTHandle,_int>>_get_Keys__
                             ,0);
                plVar9 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x18);
                *plVar9 = lVar11;
                thunk_FUN_02dd37b4(plVar9,lVar11);
              }
              uVar5 = FUN_033b8e98(uVar5,lVar11,
                                   *(undefined8 *)
                                    Method_UnityEngine_XR_Interaction_Toolkit_Utilities_SmallRegistrationList<IXRSelectFilter>_set_bufferChanges__
                                  );
              uVar12 = thunk_FUN_02d9d534(*(undefined8 *)
                                           Method_Unity_Collections_SortJob<int,_NativeSortExtension_DefaultComparer<int>>_Schedule__
                                         );
              FUN_04d61e54(uVar12,lVar3,
                           *(undefined8 *)
                            Method_System_Collections_Generic_SortedList<int,_ValueTuple<RTHandle,_int>>_get_Values__
                           ,0);
              uVar2 = FUN_03393ae4(uVar5,uVar12,
                                   *(undefined8 *)
                                    Method_System_Collections_Generic_SortedList<int,_ValueTuple<RTHandle,_int>>_get_Count__
                                  );
              if (*(long *)(lVar3 + 0x10) == 0) {
                uVar2 = uVar2 & 1;
              }
              else {
                FUN_041438ac();
              }
              goto LAB_05dbc248;
            }
          }
          goto LAB_05dbc260;
        }
        uVar2 = 0;
      }
      else {
        uVar2 = 1;
      }
LAB_05dbc248:
      return uVar2 & 1;
    }
  }
LAB_05dbc260:
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


