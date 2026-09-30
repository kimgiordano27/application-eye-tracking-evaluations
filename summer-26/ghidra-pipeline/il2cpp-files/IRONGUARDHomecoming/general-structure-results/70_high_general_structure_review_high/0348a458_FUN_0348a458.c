/*
FUNCTION_NAME: FUN_0348a458
ENTRY_POINT: 0348a458
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;data_collection;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;strong_file_logging_hits_3;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_0348a458(long param_1,long *param_2,long param_3,byte param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined *puVar8;
  
  if ((DAT_04832adb & 1) == 0) {
    thunk_FUN_01efb3a4(Method_System_IO_StreamReader_get_EndOfStream__);
    thunk_FUN_01efb3a4(Method_System_IO_StreamWriter__ctor__);
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                      );
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_UIElements_PointerEventBase<PointerUpEvent>_get_localPosition__
                      );
    thunk_FUN_01efb3a4(
                      Method_Unity_VisualScripting_ComponentHolderProtocol_GetComponentsInChildren__
                      );
    DAT_04832adb = 1;
  }
  FUN_035ac8e8(param_1,0);
  if (param_2 == (long *)0x0) {
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LivestreamingVideoStats>_get_Data__);
    uVar5 = thunk_FUN_01f117cc();
    puVar8 = Method_System_DateTime_FromBinary__;
  }
  else {
    if (param_3 != 0) {
      *(long *)(param_1 + 0x50) = (long)param_2;
      thunk_FUN_01f51358((long *)(param_1 + 0x50),param_2);
      uVar5 = (**(code **)(*param_2 + 0x2e8))(param_2,*(undefined8 *)(*param_2 + 0x2f0));
      *(undefined8 *)(param_1 + 0x40) = uVar5;
      thunk_FUN_01f51358();
      plVar6 = (long *)(**(code **)(*param_2 + 0x308))(param_2,*(undefined8 *)(*param_2 + 0x310));
      if (plVar6 != (long *)0x0) {
        plVar6 = (long *)(**(code **)(*plVar6 + 0x1a8))(plVar6,*(undefined8 *)(*plVar6 + 0x1b0));
        puVar4 = Method_System_IO_StreamWriter__ctor__;
        puVar3 = Method_System_IO_StreamReader_get_EndOfStream__;
        puVar2 = Method_Unity_VisualScripting_ComponentHolderProtocol_GetComponentsInChildren__;
        puVar1 = Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__;
        puVar8 = Method_UnityEngine_UIElements_PointerEventBase<PointerUpEvent>_get_localPosition__;
        if (plVar6 != (long *)0x0) {
          uVar5 = (**(code **)(*plVar6 + 0x1b8))(plVar6,*(undefined8 *)(*plVar6 + 0x1c0));
          *(undefined8 *)(param_1 + 0x48) = uVar5;
          thunk_FUN_01f51358();
          uVar5 = FUN_01f08890(*(undefined8 *)puVar8,4);
          *(undefined8 *)(param_1 + 0x10) = uVar5;
          thunk_FUN_01f51358();
          uVar5 = FUN_01f08890(*(undefined8 *)puVar1,4);
          *(undefined8 *)(param_1 + 0x18) = uVar5;
          thunk_FUN_01f51358();
          uVar5 = FUN_01f08890(*(undefined8 *)puVar2,4);
          *(undefined8 *)(param_1 + 0x20) = uVar5;
          thunk_FUN_01f51358();
          uVar5 = thunk_FUN_01f117cc(*(undefined8 *)puVar4);
          FUN_02b61d14(uVar5,*(undefined8 *)puVar3);
          *(undefined8 *)(param_1 + 0x28) = uVar5;
          thunk_FUN_01f51358((undefined8 *)(param_1 + 0x28),uVar5);
          *(long *)(param_1 + 0x38) = param_3;
          thunk_FUN_01f51358((long *)(param_1 + 0x38),param_3);
          *(byte *)(param_1 + 0x5a) = param_4 & 1;
          return;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LivestreamingVideoStats>_get_Data__);
    uVar5 = thunk_FUN_01f117cc();
    puVar8 = Method_System_Runtime_Remoting_ConfigHandler_ParseTime__;
  }
  uVar7 = thunk_FUN_01efb3a4(puVar8);
  FUN_034efd20(uVar5,uVar7,0);
  uVar7 = thunk_FUN_01efb3a4(Method_System_IO_StreamWriter__ctor__);
                    /* WARNING: Subroutine does not return */
  FUN_01f08910(uVar5,uVar7);
}


