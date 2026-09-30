/*
FUNCTION_NAME: OVRPlugin$$StopEyeTracking
ENTRY_POINT: 0338c578
PROGRAM: gunraiders-libil2cpp.so
SCORE: 95
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;attempted_use
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;validity_or_gating_hits_2;attempted_eye_tracking_permission_or_feature_enable;functionality_permission_setup
*/


undefined8 OVRPlugin__StopEyeTracking(long param_1)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long *unaff_x19;
  long *plVar6;
  long *plVar7;
  undefined8 uVar8;
  long *unaff_x23;
  long *in_stack_00000008;
  
  if (param_1 != 0) {
    if (*(int *)(param_1 + 0x18) == 0) {
LAB_0338c6f0:
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4ac();
    }
    if (in_stack_00000008 != (long *)0x0) {
      plVar7 = *(long **)(param_1 + 0x20);
      lVar1 = (**(code **)(*in_stack_00000008 + 0x458))
                        (in_stack_00000008,*(undefined8 *)(*in_stack_00000008 + 0x460));
      if (lVar1 != 0) {
        if (*(uint *)(lVar1 + 0x18) < 2) goto LAB_0338c6f0;
        plVar6 = *(long **)(lVar1 + 0x28);
        uVar8 = *(undefined8 *)PTR_DAT_0422fbe0;
        if (*(int *)(*unaff_x23 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8(*unaff_x23);
        }
        uVar8 = FUN_032e04b8(uVar8,0);
        if (plVar7 != (long *)0x0) {
          uVar2 = (**(code **)(*plVar7 + 0x298))(plVar7,uVar8,*(undefined8 *)(*plVar7 + 0x2a0));
          if ((uVar2 & 1) != 0) {
            uVar8 = *(undefined8 *)
                     Method_UnityEngine_UIElements_EventBase<MouseCaptureEvent>_SetCreateFunction__;
            if (*(int *)(*unaff_x23 + 0xe0) == 0) {
              thunk_FUN_01c1d1e8();
            }
            uVar8 = FUN_032e04b8(uVar8,0);
            if (plVar6 == (long *)0x0) goto LAB_0338c66c;
            uVar2 = (**(code **)(*plVar6 + 0x298))(plVar6,uVar8,*(undefined8 *)(*plVar6 + 0x2a0));
            if ((uVar2 & 1) != 0) {
              return 1;
            }
          }
          thunk_FUN_01c273e8(PTR_DAT_042305b0);
          FUN_019b5f60();
          uVar8 = FUN_03295500(0);
          FUN_019b2708();
          uVar3 = (**(code **)(*unaff_x19 + 0x1c8))();
          thunk_FUN_01c273e8(
                            Method_System_Collections_Generic_List_Enumerator<TranslationJob>_MoveNext__
                            );
          FUN_019b5f60();
          uVar3 = FUN_0338b00c(uVar3,0);
          FUN_019b2708();
          uVar4 = (**(code **)(*unaff_x19 + 0x1b8))();
          uVar5 = thunk_FUN_01c273e8(
                                    Method_UnityEngine_UIElements_EventBase<PointerMoveEvent>_SetCreateFunction__
                                    );
          uVar8 = FUN_033704d4(uVar5,uVar8,uVar3,uVar4,0);
          thunk_FUN_01c273e8(
                            Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<XmlQualifiedName,_SchemaAttDef>_Dispose__
                            );
          uVar3 = thunk_FUN_01c496e0();
          FUN_033584bc(uVar3,uVar8,0);
          uVar8 = thunk_FUN_01c273e8(
                                    Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<XmlQualifiedName,_SchemaElementDecl>_MoveNext__
                                    );
                    /* WARNING: Subroutine does not return */
          FUN_01c5d37c(uVar3,uVar8);
        }
      }
    }
  }
LAB_0338c66c:
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4a4();
}


