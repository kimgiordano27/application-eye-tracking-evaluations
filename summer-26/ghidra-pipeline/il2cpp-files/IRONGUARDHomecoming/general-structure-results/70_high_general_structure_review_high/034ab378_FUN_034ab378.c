/*
FUNCTION_NAME: FUN_034ab378
ENTRY_POINT: 034ab378
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;data_collection
EVIDENCE: validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_10;strong_file_logging_hits_3
*/


undefined8 FUN_034ab378(long param_1,int param_2)

{
  uint uVar1;
  long *plVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 local_48;
  undefined8 uStack_40;
  uint local_38;
  
                    /* try { // try from 034ab37c to 035ab383 has its CatchHandler @ 034ab384 */
                    /* catch() { ... } // from try @ 034ab278 with catch @ 034ab384
                       catch() { ... } // from try @ 034ab308 with catch @ 034ab384
                       catch() { ... } // from try @ 034ab37c with catch @ 034ab384 */
  if ((DAT_04832c0a & 1) == 0) {
    thunk_FUN_01efb3a4(
                      Method_Oculus_Platform_Callback_SetNotificationCallback<LaunchInvitePanelFlowResult>__
                      );
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__);
    DAT_04832c0a = 1;
  }
  plVar2 = *(long **)(param_1 + 0x10);
  if ((plVar2 != (long *)0x0) &&
     (plVar2 = (long *)(**(code **)(*plVar2 + 0x188))(plVar2,*(undefined8 *)(*plVar2 + 400)),
     plVar2 != (long *)0x0)) {
    (**(code **)(*plVar2 + 0x308))
              (plVar2,*(long *)(param_1 + 0x28) + (long)param_2,0,*(undefined8 *)(*plVar2 + 0x310));
    if (*(long *)(param_1 + 0x10) != 0) {
      uVar1 = FUN_034dc5dc(*(long *)(param_1 + 0x10),0);
      if (*(int *)(param_1 + 0x78) == 1) {
        if (uVar1 == 0xffffffff) {
          return 0;
        }
        uVar3 = FUN_034ae0c0(param_1,uVar1);
        uVar5 = *(undefined8 *)
                 Method_Oculus_Platform_Callback_SetNotificationCallback<LaunchInvitePanelFlowResult>__
        ;
        if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__ + 0xe0) == 0
           ) {
          thunk_FUN_01ee6d7c(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__);
        }
        uVar5 = FUN_03579868(uVar5,0);
        uVar4 = FUN_03583338(uVar3,uVar5,0);
        if ((uVar4 & 1) != 0) {
          uVar3 = thunk_FUN_01efb3a4(
                                    Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                                    );
          uVar5 = FUN_01f08890(uVar3,1);
          plVar2 = (long *)FUN_034ae0c0(param_1,uVar1);
          FUN_01bc50c0();
          uVar3 = (**(code **)(*plVar2 + 0x2e8))(plVar2,*(undefined8 *)(*plVar2 + 0x2f0));
          FUN_01bc50c0(uVar5);
          FUN_01bc56ec(uVar5,uVar3);
          FUN_01bc5408(uVar5,0,uVar3);
          uVar3 = thunk_FUN_01efb3a4(Method_System_IO_TextWriter_Synchronized__);
LAB_034ab5dc:
          uVar3 = FUN_035ae81c(uVar3,uVar5,0);
          thunk_FUN_01efb3a4(Method_Unity_VisualScripting_MoveTowards<float>__ctor__);
          uVar5 = thunk_FUN_01f117cc();
          FUN_0356adc8(uVar5,uVar3,0);
          uVar3 = thunk_FUN_01efb3a4(Method_UnityEngine_Texture_set_dimension__);
                    /* WARNING: Subroutine does not return */
          FUN_01f08910(uVar5,uVar3);
        }
      }
      else {
        if (1 < uVar1) {
          if ((int)uVar1 < 0x40) {
            local_48 = thunk_FUN_01efb3a4(Method_System_IO_TextWriter_Write__);
            uStack_40 = 0xffffffffffffffff;
            local_38 = uVar1;
            uVar3 = FUN_0359ff90(&local_48,0);
          }
          else {
            plVar2 = (long *)FUN_034ae0c0(param_1,uVar1 - 0x40);
            if (plVar2 == (long *)0x0) goto LAB_034ab554;
            uVar3 = (**(code **)(*plVar2 + 0x2e8))(plVar2,*(undefined8 *)(*plVar2 + 0x2f0));
          }
          uVar5 = thunk_FUN_01efb3a4(
                                    Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                                    );
          uVar5 = FUN_01f08890(uVar5,1);
          FUN_01bc50c0();
          FUN_01bc56ec(uVar5,uVar3);
          FUN_01bc5408(uVar5,0,uVar3);
          uVar3 = thunk_FUN_01efb3a4(Method_System_IO_TextWriter_Synchronized__);
          goto LAB_034ab5dc;
        }
        if (uVar1 != 1) {
          return 0;
        }
      }
      plVar2 = *(long **)(param_1 + 0x10);
      if (plVar2 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x034ab520. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar3 = (**(code **)(*plVar2 + 0x298))(plVar2,*(undefined8 *)(*plVar2 + 0x2a0));
        return uVar3;
      }
    }
  }
LAB_034ab554:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


