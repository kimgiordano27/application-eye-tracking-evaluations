/*
FUNCTION_NAME: Shapes.Draw$$Arc
ENTRY_POINT: 03750de8
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_1
*/


void Shapes_Draw__Arc(long param_1)

{
  long *plVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 *unaff_x19;
  long *unaff_x21;
  long unaff_x22;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined4 uStack0000000000000070;
  undefined4 uStack0000000000000074;
  undefined8 in_stack_00000078;
  
  plVar1 = (long *)(**(code **)(param_1 + 0x1a8))();
  if (plVar1 != (long *)0x0) {
    uVar2 = (**(code **)(*plVar1 + 0x1c8))(plVar1,*(undefined8 *)(*plVar1 + 0x1d0));
    uVar3 = thunk_FUN_0340e318(uVar2,*(undefined8 *)
                                      Field_<PrivateImplementationDetails>_957406FF263425423B0A3671FE61C53CC3BA4414A3BB642EFF8E69272BF94282
                               ,0);
    if ((uVar3 & 1) == 0) {
      uVar3 = thunk_FUN_0340e318(uVar2,*(undefined8 *)
                                        Field_<PrivateImplementationDetails>_D9404EABEEE336649CF27C1CC9364BCED80D07D587204821F9356F42482E4A91
                                 ,0);
      if ((uVar3 & 1) == 0) {
        plVar1 = (long *)(**(code **)(*unaff_x21 + 0x1a8))();
        if (plVar1 == (long *)0x0) goto LAB_03750f8c;
        uVar2 = (**(code **)(*plVar1 + 0x1c8))(plVar1,*(undefined8 *)(*plVar1 + 0x1d0));
        uVar2 = FUN_0340ebc0(*(undefined8 *)
                              Field_<PrivateImplementationDetails>_FE78C65211DD0B56A97024FB61111E686EF1FE054AA132BA58E2891AC496F1EE
                             ,uVar2,*(undefined8 *)
                                     Method_Oculus_Platform_Callback_SetNotificationCallback<NetSyncSessionsChangedNotification>__
                             ,0);
        if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<byte>_ToArray__ + 0xe0) == 0) {
          thunk_FUN_01ee6d7c(*(long *)Method_Unity_Collections_NativeArray<byte>_ToArray__);
        }
        FUN_0403f2cc(uVar2,0);
      }
      else {
        if (unaff_x22 == 0) goto LAB_03750f8c;
        in_stack_00000060 = FUN_0374ae3c();
        thunk_FUN_01f51358(&stack0x00000060,in_stack_00000060);
        uStack0000000000000070 = 2;
      }
LAB_03750f6c:
      unaff_x19[1] = in_stack_00000068;
      *unaff_x19 = in_stack_00000060;
      unaff_x19[3] = in_stack_00000078;
      unaff_x19[2] = CONCAT44(uStack0000000000000074,uStack0000000000000070);
      return;
    }
    if (unaff_x22 != 0) {
      in_stack_00000060 = FUN_0374ae3c();
      thunk_FUN_01f51358(&stack0x00000060,in_stack_00000060);
      uStack0000000000000070 = 1;
      goto LAB_03750f6c;
    }
  }
LAB_03750f8c:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


