/*
FUNCTION_NAME: PlayFab.Events.PlayFabEvents$$remove_OnGetPlayFabIDsFromSteamNamesRequestEvent
ENTRY_POINT: 05239bc4
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


undefined8
PlayFab_Events_PlayFabEvents__remove_OnGetPlayFabIDsFromSteamNamesRequestEvent(long param_1)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 *unaff_x19;
  undefined8 unaff_x20;
  uint uVar6;
  undefined8 unaff_x22;
  long *plVar7;
  undefined8 in_stack_00000008;
  undefined8 *in_stack_00000010;
  long *in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  long *in_stack_00000030;
  long in_stack_00000048;
  
  if (param_1 == 0) {
LAB_05239d7c:
                    /* WARNING: Subroutine does not return */
    FUN_02d4dee8();
  }
  lVar3 = thunk_FUN_02d8a53c();
  if (lVar3 != 0) {
    if (*(int *)(param_1 + 0x18) != 0) {
      *(undefined8 *)(param_1 + 0x20) = unaff_x20;
      thunk_FUN_02dc1ef0();
      lVar3 = thunk_FUN_02d8a53c();
      if (lVar3 == 0) goto LAB_05239d80;
      if ((*(uint *)(param_1 + 0x18) & 0xfffffffe) != 0) {
        *(undefined8 *)(param_1 + 0x28) = unaff_x22;
        thunk_FUN_02dc1ef0();
        if (*(int *)(*(long *)PTR_DAT_06646730 + 0xe4) == 0) {
          thunk_FUN_02dabd98();
        }
        FUN_05ea3014(*(undefined8 *)
                      UnityEngine_UIElements_EventCallback<ChangeEvent<Vector3>>_TypeInfo,param_1,0)
        ;
        FUN_052388a4();
        if (in_stack_00000048 != 0) {
          uVar4 = FUN_02d4dd2c(*(undefined8 *)
                                System_Collections_Generic_Dictionary<Binding,_int>_TypeInfo,
                               *(int *)(in_stack_00000048 + 0x20) + -1);
          *unaff_x19 = uVar4;
          thunk_FUN_02dc1ef0();
          if (in_stack_00000048 != 0) {
            FUN_04cab328(&stack0x00000008,in_stack_00000048,
                         *(undefined8 *)
                          UnityEngine_UIElements_EventCallback<ChangeEvent<float>>_TypeInfo);
            puVar1 = UnityEngine_UIElements_EventBase<WheelEvent>_TypeInfo;
            uVar6 = 0;
            in_stack_00000028 = in_stack_00000010;
            in_stack_00000020 = in_stack_00000008;
            in_stack_00000030 = in_stack_00000018;
            in_stack_00000008 = 0;
            in_stack_00000010 = &stack0x00000020;
            while( true ) {
              do {
                uVar5 = FUN_049c6178(&stack0x00000020,*(undefined8 *)puVar1);
                plVar2 = in_stack_00000030;
                if ((uVar5 & 1) == 0) {
                  FUN_049c6174(&stack0x00000020,
                               *(undefined8 *)
                                UnityEngine_UIElements_EventBase<ValidateCommandEvent>_TypeInfo);
                  return 1;
                }
                if (in_stack_00000030 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_02d4dee8();
                }
                uVar5 = (**(code **)(*in_stack_00000030 + 0x138))(in_stack_00000030);
              } while ((uVar5 & 1) != 0);
              plVar7 = (long *)*unaff_x19;
              if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_02d4dee8();
              }
              lVar3 = thunk_FUN_02d8a53c(plVar2,*(undefined8 *)(*plVar7 + 0x40));
              if (lVar3 == 0) break;
              if (*(uint *)(plVar7 + 3) <= uVar6) {
                    /* WARNING: Subroutine does not return */
                FUN_02d4def0();
              }
              plVar7[(long)(int)uVar6 + 4] = (long)plVar2;
              thunk_FUN_02dc1ef0(plVar7 + (long)(int)uVar6 + 4,plVar2);
              uVar6 = uVar6 + 1;
            }
            uVar4 = thunk_FUN_02d980e0();
                    /* WARNING: Subroutine does not return */
            FUN_02d4ddac(uVar4,0);
          }
        }
        goto LAB_05239d7c;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_02d4def0();
  }
LAB_05239d80:
  uVar4 = thunk_FUN_02d980e0();
                    /* WARNING: Subroutine does not return */
  FUN_02d4ddac(uVar4,0);
}


