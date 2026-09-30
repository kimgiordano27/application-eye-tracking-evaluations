/*
FUNCTION_NAME: Unity.Mathematics.math$$mul
ENTRY_POINT: 031c480c
PROGRAM: vrlegs-libil2cpp.so
SCORE: 79
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_5;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Unity_Mathematics_math__mul(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  long *plVar8;
  undefined8 uVar9;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar10;
  long *unaff_x23;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  long in_stack_00000040;
  long in_stack_00000048;
  
  uVar7 = FUN_02218bd8();
  if ((uVar7 & 1) == 0) {
    thunk_FUN_01a6ca08(PTR_DAT_03cbdfd0);
    uVar10 = thunk_FUN_01a89e68();
    uVar9 = thunk_FUN_01a6ca08(OVRTask<OVRSpatialAnchor_OperationResult>_TypeInfo);
    FUN_026b274c(uVar10,uVar9,0);
    uVar9 = thunk_FUN_01a6ca08(Newtonsoft_Json_Serialization_ObjectConstructor<object>_TypeInfo);
                    /* WARNING: Subroutine does not return */
    FUN_01ab6b14(uVar10,uVar9);
  }
  if (*(int *)(*unaff_x23 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  FUN_031c4ae8(unaff_x20 + 0x28);
  puVar6 = OVRTask<ValueTuple<OVRSceneManager_LoadSceneModelResult,_int>>_TypeInfo;
  puVar5 = System_Collections_Generic_List<MemberSpec>_TypeInfo;
  puVar4 = System_Func<GameObject,_string>_TypeInfo;
  puVar3 = System_Func<GameObject,_bool>_TypeInfo;
  puVar2 = System_Func<GUIContent,_string>_TypeInfo;
  puVar1 = PTR_DAT_03cbe5e8;
  if (unaff_x19 != 0) {
    plVar8 = (long *)thunk_FUN_01a5dd74();
    do {
      uVar10 = *(undefined8 *)puVar5;
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar10 = FUN_0277b678(uVar10,0);
      uVar7 = FUN_02787b20(plVar8,uVar10,0);
      if ((uVar7 & 1) == 0) {
        return;
      }
      if (*(long *)(unaff_x20 + 0x10) == 0) break;
      uVar7 = FUN_0219f8b8(*(long *)(unaff_x20 + 0x10),plVar8,&stack0x00000040,*(undefined8 *)puVar6
                          );
      if (((uVar7 & 1) != 0) && (in_stack_00000040 == unaff_x19)) {
        if (*(long *)(unaff_x20 + 0x10) == 0) break;
        FUN_0219eaf8(*(long *)(unaff_x20 + 0x10),plVar8,
                     *(undefined8 *)OVRTask<OVRPlugin_Result>_TypeInfo);
        if (*(long *)(unaff_x20 + 0x18) == 0) break;
        Animancer_FadeGroup__get_TargetWeight
                  (*(long *)(unaff_x20 + 0x18),&stack0x00000008,*(undefined8 *)puVar4);
        in_stack_00000028 = in_stack_00000010;
        in_stack_00000020 = in_stack_00000008;
        in_stack_00000030 = in_stack_00000018;
        do {
          do {
            uVar7 = FUN_021b51c8(&stack0x00000020,*(undefined8 *)puVar2);
            if ((uVar7 & 1) == 0) goto LAB_031c49ac;
            FUN_01b7a454(&stack0x00000020,&stack0x00000048,*(undefined8 *)puVar3);
            if (in_stack_00000048 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01ab6c3c();
            }
            uVar10 = thunk_FUN_01a5dd74(in_stack_00000048,0);
            if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            uVar7 = FUN_02787b20(plVar8,uVar10,0);
          } while ((uVar7 & 1) == 0);
          if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c3c();
          }
          uVar7 = (**(code **)(*plVar8 + 0x388))(plVar8,uVar10,*(undefined8 *)(*plVar8 + 0x390));
        } while ((uVar7 & 1) == 0);
        FUN_031c4464();
LAB_031c49ac:
        FUN_021b51c4(&stack0x00000020,*(undefined8 *)System_Func<FieldInfo,_string>_TypeInfo);
      }
      if (plVar8 == (long *)0x0) break;
      plVar8 = (long *)(**(code **)(*plVar8 + 0xb18))(plVar8,*(undefined8 *)(*plVar8 + 0xb20));
    } while( true );
  }
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


