/*
FUNCTION_NAME: FUN_037be198
ENTRY_POINT: 037be198
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure
*/


void FUN_037be198(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  if ((DAT_048375ee & 1) == 0) {
    thunk_FUN_01efb3a4(
                      Method_Unity_VisualScripting_StaticFunctionInvoker<Bounds,_Bounds,_bool>__ctor__
                      );
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LivestreamingStatus>_get_Data__);
    DAT_048375ee = 1;
  }
  uVar2 = FUN_037a9814(param_1,0);
  if ((uVar2 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Unity_VisualScripting_MoveTowards<float>__ctor__);
    uVar4 = thunk_FUN_01f117cc();
    uVar3 = thunk_FUN_01efb3a4(StringLiteral_850);
    FUN_0356adc8(uVar4,uVar3,0);
  }
  else {
    if (*(int *)(*(long *)Method_Oculus_Platform_Message<LivestreamingStatus>_get_Data__ + 0xe0) ==
        0) {
      thunk_FUN_01ee6d7c();
    }
    uVar2 = UnityEngine_UIElements_UIR_Implementation_UIRStylePainter__BuildEntryFromNativeMesh
                      (param_2,0,0);
    if ((uVar2 & 1) == 0) {
      if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      local_40 = *(undefined8 *)(param_2 + 0x40);
      uVar2 = FUN_037a9814(&local_40,0);
      if ((uVar2 & 1) == 0) {
        uVar3 = param_1[1];
        uVar4 = param_1[2];
        if (*(long *)(param_2 + 0x28) == 0) {
          if (*(int *)(*(long *)
                        Method_Unity_VisualScripting_StaticFunctionInvoker<Bounds,_Bounds,_bool>__ctor__
                      + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          FUN_037b8d88(uVar3,uVar4);
          FUN_037b8eb0(param_2,*param_1,param_1[1],param_1[2]);
          return;
        }
        local_40 = uVar3;
        uStack_38 = uVar4;
        uVar3 = thunk_FUN_01efb3a4(
                                  Method_UnityEngine_Experimental_Rendering_RenderGraphModule_RenderGraphResourcePool<ComputeBuffer>_UnregisterFrameAllocation__
                                  );
        uVar3 = thunk_FUN_01f113fc(uVar3,&local_40);
        uVar4 = thunk_FUN_01efb3a4(StringLiteral_854);
        puVar7 = StringLiteral_851;
        uVar5 = thunk_FUN_01efb3a4(StringLiteral_851);
        uVar6 = thunk_FUN_01efb3a4(puVar7);
        uVar3 = FUN_0340f334(uVar4,uVar3,uVar5,uVar6,0);
      }
      else {
        uVar3 = thunk_FUN_01efb3a4(
                                  Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                                  );
        uVar3 = FUN_01f08890(uVar3,4);
        puVar1 = 
        Method_UnityEngine_Experimental_Rendering_RenderGraphModule_RenderGraphResourcePool<ComputeBuffer>_UnregisterFrameAllocation__
        ;
        local_40 = param_1[1];
        uStack_38 = param_1[2];
        uVar4 = thunk_FUN_01efb3a4(
                                  Method_UnityEngine_Experimental_Rendering_RenderGraphModule_RenderGraphResourcePool<ComputeBuffer>_UnregisterFrameAllocation__
                                  );
        uVar4 = thunk_FUN_01f113fc(uVar4,&local_40);
        FUN_01bc50c0(uVar3);
        FUN_01bc56ec(uVar3,uVar4);
        FUN_01bc5408(uVar3,0,uVar4);
        FUN_01bc50c0(uVar3);
        puVar7 = StringLiteral_851;
        uVar4 = thunk_FUN_01efb3a4(StringLiteral_851);
        FUN_01bc56ec(uVar3,uVar4);
        uVar4 = thunk_FUN_01efb3a4(puVar7);
        FUN_01bc5408(uVar3,1,uVar4);
        FUN_01bc50c0(uVar3);
        uVar4 = thunk_FUN_01efb3a4(puVar7);
        FUN_01bc56ec(uVar3,uVar4);
        uVar4 = thunk_FUN_01efb3a4(puVar7);
        FUN_01bc5408(uVar3,2,uVar4);
        FUN_01bc50c0(param_2);
        local_50 = *(undefined8 *)(param_2 + 0x48);
        uStack_48 = *(undefined8 *)(param_2 + 0x50);
        uVar4 = thunk_FUN_01efb3a4(puVar1);
        uVar4 = thunk_FUN_01f113fc(uVar4,&local_50);
        FUN_01bc50c0(uVar3);
        FUN_01bc56ec(uVar3,uVar4);
        FUN_01bc5408(uVar3,3,uVar4);
        uVar4 = thunk_FUN_01efb3a4(StringLiteral_853);
        uVar3 = FUN_0340f378(uVar4,uVar3,0);
      }
      thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<NetSyncConnection>_get_Data__);
      uVar4 = thunk_FUN_01f117cc();
      uVar5 = thunk_FUN_01efb3a4(puVar7);
      FUN_034efd98(uVar4,uVar3,uVar5,0);
      uVar3 = thunk_FUN_01efb3a4(StringLiteral_852);
                    /* WARNING: Subroutine does not return */
      FUN_01f08910(uVar4,uVar3);
    }
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LivestreamingVideoStats>_get_Data__);
    uVar4 = thunk_FUN_01f117cc();
    uVar3 = thunk_FUN_01efb3a4(StringLiteral_851);
    FUN_034efd20(uVar4,uVar3,0);
  }
  uVar3 = thunk_FUN_01efb3a4(StringLiteral_852);
                    /* WARNING: Subroutine does not return */
  FUN_01f08910(uVar4,uVar3);
}


