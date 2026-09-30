/*
FUNCTION_NAME: OVRManager$$ReturnToLauncher
ENTRY_POINT: 0565cea8
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 86
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__ReturnToLauncher(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long unaff_x19;
  long unaff_x20;
  long *plVar7;
  undefined4 uVar8;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  long in_stack_00000028;
  
  FUN_02d965b8();
  *(undefined1 *)(unaff_x20 + 0x5a0) = 1;
  plVar7 = *(long **)(unaff_x19 + 0x28);
  in_stack_00000018 = 0;
  in_stack_00000020 = 0;
  in_stack_00000028 = 0;
  if (plVar7 != (long *)0x0) {
    lVar4 = *plVar7;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) ==
            *(long *)
             System_Collections_Generic_Dictionary<Type,_List<ValueTuple<MemberInfo,_GizmoRendererManager>>>_TypeInfo
           ) {
          puVar3 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_0565cf20;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar3 = (undefined8 *)
             FUN_02dd004c(plVar7,*(long *)
                                  System_Collections_Generic_Dictionary<Type,_List<ValueTuple<MemberInfo,_GizmoRendererManager>>>_TypeInfo
                          ,0);
LAB_0565cf20:
    uVar8 = (*(code *)*puVar3)(plVar7,puVar3[1]);
    lVar4 = FUN_050e3a74();
    puVar2 = System_Collections_Generic_List<List<IDeserializable>>_TypeInfo;
    puVar1 = System_Collections_Generic_List<List<IDeserializable>>_TypeInfo;
    if (lVar4 != 0) {
      FUN_049bc914(&stack0x00000018,lVar4,
                   *(undefined8 *)System_Collections_Generic_List<List<IDeserializable>>_TypeInfo);
      while( true ) {
        uVar5 = FUN_05219f18(&stack0x00000018,*(undefined8 *)puVar2);
        if ((uVar5 & 1) == 0) {
          FUN_05219f14(&stack0x00000018,*(undefined8 *)puVar1);
          return;
        }
        if (in_stack_00000028 == 0) break;
        FUN_0565cc58(uVar8);
      }
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


