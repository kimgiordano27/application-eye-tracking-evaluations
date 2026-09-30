/*
FUNCTION_NAME: OVRPlugin.ControllerState5$$.ctor
ENTRY_POINT: 0339103c
PROGRAM: gunraiders-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_5
*/


void OVRPlugin_ControllerState5___ctor(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  long unaff_x19;
  undefined8 uVar7;
  long *unaff_x22;
  long unaff_x23;
  undefined8 unaff_x24;
  long *unaff_x25;
  undefined8 *unaff_x26;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  
  if (param_1 == 0) {
    uVar3 = thunk_FUN_01c58458();
                    /* WARNING: Subroutine does not return */
    FUN_01c5d37c(uVar3,0);
  }
  if (*(uint *)(unaff_x23 + 0x18) < 2) {
                    /* WARNING: Subroutine does not return */
    FUN_01c5d4ac();
  }
  *(undefined8 *)(unaff_x23 + 0x28) = unaff_x24;
  if (unaff_x22 != (long *)0x0) {
    (**(code **)(*unaff_x22 + 0x8f8))();
    uVar3 = FUN_0336db0c();
    *(undefined8 *)(unaff_x19 + 0x108) = uVar3;
    uVar4 = FUN_03390838();
    if ((uVar4 & 1) == 0) {
      plVar5 = *(long **)(unaff_x19 + 0x18);
      if (plVar5 == (long *)0x0) goto OVRPlugin_Sizei__GetHashCode;
      uVar3 = (**(code **)(*plVar5 + 0x1b8))(plVar5,*(undefined8 *)(*plVar5 + 0x1c0));
      uVar4 = thunk_FUN_03152714(uVar3,*(undefined8 *)
                                        Method_UnityEngine_UIElements_EventBase<ContextualMenuPopulateEvent>_SetCreateFunction__
                                 ,0);
      if ((uVar4 & 1) != 0) {
        uVar3 = FUN_0337a7dc(*(undefined8 *)(unaff_x19 + 0x18),0);
        puVar2 = 
        Method_System_Collections_Generic_Dictionary_Enumerator<int,_SortedList<int,_ValueTuple<ComputeBuffer,_int>>>_get_Current__
        ;
        if (*(int *)(*(long *)
                      Method_System_Collections_Generic_Dictionary_Enumerator<int,_SortedList<int,_ValueTuple<ComputeBuffer,_int>>>_get_Current__
                    + 0xe0) == 0) {
          thunk_FUN_01c1d1e8(*(long *)
                              Method_System_Collections_Generic_Dictionary_Enumerator<int,_SortedList<int,_ValueTuple<ComputeBuffer,_int>>>_get_Current__
                            );
        }
        FUN_03379e44(uVar3,0);
        if (DAT_045336f7 == '\0') {
          FUN_01c5d288(
                      Method_System_Collections_Generic_Dictionary_Enumerator<int,_SortedList<int,_ValueTuple<ComputeBuffer,_int>>>_get_Current__
                      );
          DAT_045336f7 = '\x01';
        }
        lVar6 = *(long *)puVar2;
        if (*(int *)(lVar6 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8();
          lVar6 = *(long *)puVar2;
        }
        lVar6 = *(long *)(*(long *)(lVar6 + 0xb8) + 8);
        if (lVar6 == 0) goto OVRPlugin_Sizei__GetHashCode;
        uVar3 = FUN_0337a0b0(lVar6,in_stack_00000018,in_stack_00000010,0);
        *(undefined8 *)(unaff_x19 + 0x118) = uVar3;
      }
    }
    uVar3 = *unaff_x26;
    if (*(int *)(*unaff_x25 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    plVar5 = (long *)FUN_032e04b8(uVar3,0);
    if (plVar5 != (long *)0x0) {
      uVar4 = (**(code **)(*plVar5 + 0x298))
                        (plVar5,*(undefined8 *)(unaff_x19 + 0x58),*(undefined8 *)(*plVar5 + 0x2a0));
      uVar3 = in_stack_00000018;
      if ((uVar4 & 1) == 0) {
        *(undefined1 *)(unaff_x19 + 0x100) = 1;
      }
      *(undefined8 *)(unaff_x19 + 200) = in_stack_00000018;
      *(undefined8 *)(unaff_x19 + 0xd0) = in_stack_00000010;
      if (*(int *)(*unaff_x25 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      uVar4 = FUN_032ea0d4(uVar3,0,0);
      if ((uVar4 & 1) != 0) {
        uVar3 = *(undefined8 *)(unaff_x19 + 0xd0);
        if (*(int *)(*unaff_x25 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8();
        }
        uVar4 = FUN_032ea0d4(uVar3,0,0);
        if ((uVar4 & 1) != 0) {
          uVar7 = *(undefined8 *)(unaff_x19 + 0x18);
          uVar3 = *(undefined8 *)(unaff_x19 + 200);
          uVar1 = *(undefined8 *)(unaff_x19 + 0xd0);
          if (*(int *)(*(long *)
                        Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator<int,_Player>_MoveNext__
                      + 0xe0) == 0) {
            thunk_FUN_01c1d1e8();
          }
          uVar4 = FUN_0337a7fc(uVar7,uVar3,uVar1,&stack0x00000008);
          if ((uVar4 & 1) != 0) {
            FUN_0338ebf4();
            *(undefined1 *)(unaff_x19 + 0x28) = 1;
            *(undefined8 *)(unaff_x19 + 0x118) = in_stack_00000000;
          }
        }
      }
      return;
    }
  }
OVRPlugin_Sizei__GetHashCode:
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4a4();
}


