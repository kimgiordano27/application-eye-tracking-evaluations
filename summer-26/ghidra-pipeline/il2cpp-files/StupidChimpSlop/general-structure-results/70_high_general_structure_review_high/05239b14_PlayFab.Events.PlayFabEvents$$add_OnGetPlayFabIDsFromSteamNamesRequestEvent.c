/*
FUNCTION_NAME: PlayFab.Events.PlayFabEvents$$add_OnGetPlayFabIDsFromSteamNamesRequestEvent
ENTRY_POINT: 05239b14
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 80
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: validity_gate;pose_vector;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_10;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;functionality_data_collection_or_telemetry_hits_2
*/


undefined8 PlayFab_Events_PlayFabEvents__add_OnGetPlayFabIDsFromSteamNamesRequestEvent(long param_1)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  uint uVar7;
  long unaff_x22;
  long *plVar8;
  undefined8 in_stack_00000008;
  undefined8 *in_stack_00000010;
  long *in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  long *in_stack_00000030;
  long in_stack_00000048;
  
  FUN_02d4dc40(*(undefined8 *)(param_1 + 0x3a0));
  FUN_02d4dc40(System_Collections_Generic_Dictionary<Binding,_int>_TypeInfo);
  FUN_02d4dc40(UnityEngine_UIElements_EventCallback<ChangeEvent<Vector3>>_TypeInfo);
  *(undefined1 *)(unaff_x22 + 0x20d) = 1;
  in_stack_00000048 = 0;
  in_stack_00000020 = 0;
  in_stack_00000028 = 0;
  in_stack_00000030 = (long *)0x0;
  *unaff_x19 = 0;
  thunk_FUN_02dc1ef0();
  if (unaff_x20 == 0) {
    return 0;
  }
  lVar2 = FUN_05239250();
  if (lVar2 == 0) {
    return 0;
  }
  if (*(long *)(unaff_x21 + 0x38) != 0) {
    uVar3 = FUN_0479bf18(*(long *)(unaff_x21 + 0x38),*(undefined1 *)(lVar2 + 0x18),&stack0x00000048,
                         *(undefined8 *)
                          UnityEngine_UIElements_EventBase<TransitionStartEvent>_TypeInfo);
    if ((uVar3 & 1) == 0) {
      return 0;
    }
    if (in_stack_00000048 != 0) {
      uVar3 = FUN_04caaeb4();
      if ((uVar3 & 1) == 0) {
        plVar4 = (long *)FUN_02d4dd2c(*(undefined8 *)PTR_DAT_066463a0,2);
        if (plVar4 == (long *)0x0) goto LAB_05239d7c;
        lVar5 = thunk_FUN_02d8a53c();
        if (lVar5 == 0) {
LAB_05239d80:
          uVar6 = thunk_FUN_02d980e0();
                    /* WARNING: Subroutine does not return */
          FUN_02d4ddac(uVar6,0);
        }
        if ((int)plVar4[3] == 0) {
LAB_05239d8c:
                    /* WARNING: Subroutine does not return */
          FUN_02d4def0();
        }
        plVar4[4] = unaff_x20;
        thunk_FUN_02dc1ef0();
        lVar5 = thunk_FUN_02d8a53c(lVar2,*(undefined8 *)(*plVar4 + 0x40));
        if (lVar5 == 0) goto LAB_05239d80;
        if ((*(uint *)(plVar4 + 3) & 0xfffffffe) == 0) goto LAB_05239d8c;
        plVar4[5] = lVar2;
        thunk_FUN_02dc1ef0(plVar4 + 5,lVar2);
        if (*(int *)(*(long *)PTR_DAT_06646730 + 0xe4) == 0) {
          thunk_FUN_02dabd98();
        }
        FUN_05ea3014(*(undefined8 *)
                      UnityEngine_UIElements_EventCallback<ChangeEvent<Vector3>>_TypeInfo,plVar4,0);
        FUN_052388a4();
      }
      if (in_stack_00000048 != 0) {
        uVar6 = FUN_02d4dd2c(*(undefined8 *)
                              System_Collections_Generic_Dictionary<Binding,_int>_TypeInfo,
                             *(int *)(in_stack_00000048 + 0x20) + -1);
        *unaff_x19 = uVar6;
        thunk_FUN_02dc1ef0();
        if (in_stack_00000048 != 0) {
          FUN_04cab328(&stack0x00000008,in_stack_00000048,
                       *(undefined8 *)
                        UnityEngine_UIElements_EventCallback<ChangeEvent<float>>_TypeInfo);
          puVar1 = UnityEngine_UIElements_EventBase<WheelEvent>_TypeInfo;
          uVar7 = 0;
          in_stack_00000028 = in_stack_00000010;
          in_stack_00000020 = in_stack_00000008;
          in_stack_00000030 = in_stack_00000018;
          in_stack_00000008 = 0;
          in_stack_00000010 = &stack0x00000020;
          while( true ) {
            do {
              uVar3 = FUN_049c6178(&stack0x00000020,*(undefined8 *)puVar1);
              plVar4 = in_stack_00000030;
              if ((uVar3 & 1) == 0) {
                FUN_049c6174(&stack0x00000020,
                             *(undefined8 *)
                              UnityEngine_UIElements_EventBase<ValidateCommandEvent>_TypeInfo);
                return 1;
              }
              if (in_stack_00000030 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_02d4dee8();
              }
              uVar3 = (**(code **)(*in_stack_00000030 + 0x138))(in_stack_00000030);
            } while ((uVar3 & 1) != 0);
            plVar8 = (long *)*unaff_x19;
            if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d4dee8();
            }
            lVar2 = thunk_FUN_02d8a53c(plVar4,*(undefined8 *)(*plVar8 + 0x40));
            if (lVar2 == 0) break;
            if (*(uint *)(plVar8 + 3) <= uVar7) {
                    /* WARNING: Subroutine does not return */
              FUN_02d4def0();
            }
            plVar8[(long)(int)uVar7 + 4] = (long)plVar4;
            thunk_FUN_02dc1ef0(plVar8 + (long)(int)uVar7 + 4,plVar4);
            uVar7 = uVar7 + 1;
          }
          uVar6 = thunk_FUN_02d980e0();
                    /* WARNING: Subroutine does not return */
          FUN_02d4ddac(uVar6,0);
        }
      }
    }
  }
LAB_05239d7c:
                    /* WARNING: Subroutine does not return */
  FUN_02d4dee8();
}


