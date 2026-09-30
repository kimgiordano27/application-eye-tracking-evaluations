/*
FUNCTION_NAME: System.Collections.Generic.Dictionary<object,-InputSystemUIInputModule.InputActionReferenceState>$$System.Collections.IEnumerable.GetEnumerator
ENTRY_POINT: 02aa4720
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 77
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8
System_Collections_Generic_Dictionary<object,_InputSystemUIInputModule_InputActionReferenceState>__System_Collections_IEnumerable_GetEnumerator
          (void)

{
  bool in_ZR;
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long unaff_x19;
  long *plVar7;
  long in_stack_00000020;
  long in_stack_00000028;
  
  if (!in_ZR) {
    plVar7 = *(long **)(unaff_x19 + 0x40);
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar3 = *plVar7;
    uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__) {
          puVar1 = (undefined8 *)(lVar3 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_02aa47b8;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar1 = (undefined8 *)
             FUN_01ecb238(plVar7,*(long *)
                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__
                          ,0);
LAB_02aa47b8:
    uVar5 = (*(code *)*puVar1)(plVar7,puVar1[1]);
    unaff_x19 = in_stack_00000028;
    if ((uVar5 & 1) != 0) {
      plVar7 = *(long **)(in_stack_00000028 + 0x40);
      if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar3 = *(long *)(*(long *)(*(long *)(in_stack_00000020 + 0x20) + 0xc0) + 0x20);
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_01ecaf44(lVar3);
      }
      lVar4 = *plVar7;
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == lVar3) {
            puVar1 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
            goto LAB_02aa4860;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar1 = (undefined8 *)FUN_01ecb238(plVar7,lVar3,0);
LAB_02aa4860:
      uVar2 = (*(code *)*puVar1)(plVar7,puVar1[1]);
      *(undefined8 *)(in_stack_00000028 + 0x18) = uVar2;
      thunk_FUN_01f51358();
      *(undefined4 *)(in_stack_00000028 + 0x10) = 1;
      return 1;
    }
  }
  FUN_02aa4920(unaff_x19);
  *(undefined8 *)(in_stack_00000028 + 0x40) = 0;
  thunk_FUN_01f51358((undefined8 *)(in_stack_00000028 + 0x40),0);
  return 0;
}


