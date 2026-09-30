/*
FUNCTION_NAME: FUN_078107fc
ENTRY_POINT: 078107fc
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 96
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;telemetry_or_network_hits_6;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_078107fc(long param_1,long *param_2,undefined8 param_3,undefined8 *param_4)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  long *plVar7;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  
  if ((DAT_08272314 & 1) == 0) {
    FUN_0373b518(Method_System_Collections_Generic_List_Enumerator<ClipperLib_OutRec>_MoveNext__);
    FUN_0373b518(
                Method_System_Collections_Generic_HashSet_Enumerator<OVRManager_EventListener>_get_Current__
                );
    FUN_0373b518(
                Method_System_Collections_Generic_List_Enumerator<OVRPassthroughLayer_SerializedSurfaceGeometry>_Dispose__
                );
    FUN_0373b518(
                Method_System_Collections_Generic_List_Enumerator<OVRPassthroughLayer_SerializedSurfaceGeometry>_MoveNext__
                );
    FUN_0373b518(
                Method_System_Collections_Generic_List_Enumerator<OVRPassthroughLayer_SerializedSurfaceGeometry>_get_Current__
                );
    FUN_0373b518(
                Method_Unity_Collections_NativeParallelHashSet_Enumerator<NetworkPipelineProcessor_UpdatePipeline>_get_Current__
                );
    DAT_08272314 = 1;
  }
  if (param_2 != (long *)0x0) {
    bVar1 = *(byte *)(*(long *)
                       Method_Unity_Collections_NativeParallelHashSet_Enumerator<NetworkPipelineProcessor_UpdatePipeline>_get_Current__
                     + 0x130);
    if ((*(byte *)(*param_2 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar1 * 8 + -8) !=
        *(long *)
         Method_Unity_Collections_NativeParallelHashSet_Enumerator<NetworkPipelineProcessor_UpdatePipeline>_get_Current__
       )) {
                    /* WARNING: Subroutine does not return */
      FUN_0373bb54(param_2);
    }
  }
  plVar7 = *(long **)(param_1 + 0xa0);
  if (plVar7 != (long *)0x0) {
    local_80 = *param_4;
    uStack_78 = param_4[1];
    uStack_70 = param_4[2];
    uStack_68 = param_4[3];
    local_60 = param_4[4];
    uStack_58 = param_4[5];
    local_50 = param_4[6];
    uVar4 = (**(code **)(*plVar7 + 0x178))
                      (plVar7,param_3,&local_80,*(undefined8 *)(*plVar7 + 0x180));
    if (param_2 != (long *)0x0) {
      System_Span<BatchMeshID>___ctor
                (param_2,uVar4,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List_Enumerator<OVRPassthroughLayer_SerializedSurfaceGeometry>_get_Current__
                );
      puVar2 = 
      Method_System_Collections_Generic_List_Enumerator<OVRPassthroughLayer_SerializedSurfaceGeometry>_Dispose__
      ;
      plVar7 = *(long **)(param_1 + 0xa8);
      if (plVar7 != (long *)0x0) {
        local_80 = *param_4;
        uStack_78 = param_4[1];
        uStack_70 = param_4[2];
        uStack_68 = param_4[3];
        local_60 = param_4[4];
        uStack_58 = param_4[5];
        local_50 = param_4[6];
        uVar4 = (**(code **)(*plVar7 + 0x178))
                          (plVar7,param_3,&local_80,*(undefined8 *)(*plVar7 + 0x180));
        FUN_05203e54(param_2,uVar4,*(undefined8 *)puVar2);
        puVar2 = 
        Method_System_Collections_Generic_HashSet_Enumerator<OVRManager_EventListener>_get_Current__
        ;
        plVar7 = *(long **)(param_1 + 0xc0);
        if (plVar7 != (long *)0x0) {
          local_80 = *param_4;
          uStack_78 = param_4[1];
          uStack_70 = param_4[2];
          uStack_68 = param_4[3];
          local_60 = param_4[4];
          uStack_58 = param_4[5];
          local_50 = param_4[6];
          uVar4 = (**(code **)(*plVar7 + 0x178))
                            (plVar7,param_3,&local_80,*(undefined8 *)(*plVar7 + 0x180));
          FUN_052043d0(param_2,uVar4,*(undefined8 *)puVar2);
          plVar7 = *(long **)(param_1 + 0xb0);
          if (plVar7 != (long *)0x0) {
            local_80 = *param_4;
            uStack_78 = param_4[1];
            uStack_70 = param_4[2];
            uStack_68 = param_4[3];
            local_60 = param_4[4];
            uStack_58 = param_4[5];
            local_50 = param_4[6];
            iVar5 = (**(code **)(*plVar7 + 0x178))
                              (plVar7,param_3,&local_80,*(undefined8 *)(*plVar7 + 0x180));
            (**(code **)(*param_2 + 0xb38))((float)iVar5,param_2,*(undefined8 *)(*param_2 + 0xb40));
            plVar7 = *(long **)(param_1 + 0xb8);
            if (plVar7 != (long *)0x0) {
              local_80 = *param_4;
              uStack_78 = param_4[1];
              uStack_70 = param_4[2];
              uStack_68 = param_4[3];
              local_60 = param_4[4];
              uStack_58 = param_4[5];
              local_50 = param_4[6];
              uVar6 = (**(code **)(*plVar7 + 0x178))
                                (plVar7,param_3,&local_80,*(undefined8 *)(*plVar7 + 0x180));
              (**(code **)(*param_2 + 0xb58))(param_2,uVar6 & 1,*(undefined8 *)(*param_2 + 0xb60));
              puVar3 = 
              Method_System_Collections_Generic_List_Enumerator<OVRPassthroughLayer_SerializedSurfaceGeometry>_MoveNext__
              ;
              puVar2 = 
              Method_System_Collections_Generic_List_Enumerator<ClipperLib_OutRec>_MoveNext__;
              plVar7 = *(long **)(param_1 + 200);
              if (plVar7 != (long *)0x0) {
                local_80 = *param_4;
                uStack_78 = param_4[1];
                uStack_70 = param_4[2];
                uStack_68 = param_4[3];
                local_60 = param_4[4];
                uStack_58 = param_4[5];
                local_50 = param_4[6];
                uVar6 = (**(code **)(*plVar7 + 0x178))
                                  (plVar7,param_3,&local_80,*(undefined8 *)(*plVar7 + 0x180));
                FUN_05204524(param_2,uVar6 & 1,*(undefined8 *)puVar3);
                uStack_68 = param_4[3];
                uStack_70 = param_4[2];
                uStack_58 = param_4[5];
                local_60 = param_4[4];
                uStack_78 = param_4[1];
                local_80 = *param_4;
                local_50 = param_4[6];
                FUN_04f6593c(param_1,param_2,param_3,&local_80,*(undefined8 *)puVar2);
                return;
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}


