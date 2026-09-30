/*
FUNCTION_NAME: FUN_0167c968
ENTRY_POINT: 0167c968
PROGRAM: Lovesick-libil2cpp.so
SCORE: 102
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_6;telemetry_or_network_hits_1;frame_or_lifecycle_behavior;functionality_data_collection_or_telemetry_hits_1
*/


long FUN_0167c968(long param_1,long param_2,long param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  long *plVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined4 local_54;
  
  if ((DAT_0377846a & 1) == 0) {
    thunk_FUN_00d48444(System_Runtime_Remoting_Channels_CrossAppDomainSink_TypeInfo);
    DAT_0377846a = 1;
  }
  puVar4 = System_Runtime_Remoting_Channels_CrossAppDomainSink_TypeInfo;
  if (param_1 == 0) {
    thunk_FUN_00d48444(PTR_DAT_033f37c8);
    uVar7 = thunk_FUN_00d62348();
    FUN_00ac2be8();
    puVar4 = 
    Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Append<InputRemoting_RemoteInputDevice>__;
  }
  else if (param_2 == 0) {
    thunk_FUN_00d48444(PTR_DAT_033f37c8);
    uVar7 = thunk_FUN_00d62348();
    FUN_00ac2be8();
    puVar4 = StringLiteral_11130;
  }
  else {
    if (param_3 != 0) {
      iVar1 = (int)*(ulong *)(param_2 + 0x18);
      if (iVar1 != *(int *)(param_3 + 0x18)) {
        uVar7 = thunk_FUN_00d48444(
                                  Method_System_Collections_Generic_Dictionary<Guid,_Exception>_ContainsKey__
                                  );
        uVar3 = Newtonsoft_Json_Linq_JToken__op_Explicit(uVar7,0);
        thunk_FUN_00d48444(Method_OVRLocatable_TrackingSpacePose_ComputeWorldRotation__);
        uVar7 = thunk_FUN_00d62348();
        FUN_00ac2be8();
        FUN_016f2f28(uVar7,uVar3,0);
LAB_0167cb8c:
        uVar3 = thunk_FUN_00d48444(
                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<SpatialAnchorCoreBuildingBlock_<WaitForInit>d__22>__
                                  );
                    /* WARNING: Subroutine does not return */
        FUN_00da5038(uVar7,uVar3);
      }
      if (0 < iVar1) {
        uVar8 = 0;
        uVar5 = *(ulong *)(param_2 + 0x18) & 0xffffffff;
        do {
          if (uVar5 <= uVar8) {
LAB_0167ca98:
                    /* WARNING: Subroutine does not return */
            FUN_00da5194();
          }
          plVar6 = *(long **)(param_2 + 0x20 + uVar8 * 8);
          uVar5 = FUN_0169aa20(plVar6,0,0);
          if ((uVar5 & 1) != 0) {
            uVar7 = thunk_FUN_00d48444(StringLiteral_3033);
            uVar7 = FUN_00da4fb8(uVar7,1);
            local_54 = (undefined4)uVar8;
            uVar3 = thunk_FUN_00d48444(
                                      Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__
                                      );
            uVar3 = thunk_FUN_00d61fa0(uVar3,&local_54);
            FUN_00ac2be8(uVar7);
            FUN_00acb0b4(uVar7,uVar3);
            FUN_00adb25c(uVar7,0,uVar3);
            uVar3 = thunk_FUN_00d48444(OVRPlugin_OVRP_0_5_0_TypeInfo);
            uVar3 = FUN_017b63dc(uVar3,uVar7,0);
            thunk_FUN_00d48444(PTR_DAT_033f37c8);
            uVar7 = thunk_FUN_00d62348();
            FUN_00ac2be8();
            uVar2 = thunk_FUN_00d48444(StringLiteral_11130);
            FUN_016f4460(uVar7,uVar2,uVar3,0);
            goto LAB_0167cb8c;
          }
          if (*(uint *)(param_3 + 0x18) <= uVar8) goto LAB_0167ca98;
          if (*(long *)(param_3 + 0x20 + uVar8 * 8) != 0) {
            if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_00da518c();
            }
            iVar1 = (**(code **)(*plVar6 + 0x1a8))(plVar6,*(undefined8 *)(*plVar6 + 0x1b0));
            if (iVar1 != 4) {
              uVar7 = thunk_FUN_00d48444(PTR_DAT_033f7150);
              uVar3 = Newtonsoft_Json_Linq_JToken__op_Explicit(uVar7,0);
              thunk_FUN_00d48444(
                                UnityEngine_XR_Interaction_Toolkit_Inputs_XRTransformStabilizer_CalculateRotationParams_00000D70_PostfixBurstDelegate_var
                                );
              uVar7 = thunk_FUN_00d62348();
              FUN_00ac2be8();
              FUN_01679968(uVar7,uVar3);
              goto LAB_0167cb8c;
            }
            if (*(uint *)(param_3 + 0x18) <= uVar8) goto LAB_0167ca98;
            uVar7 = *(undefined8 *)(param_3 + 0x20 + uVar8 * 8);
            if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            FUN_0167c6d4(plVar6,param_1,uVar7);
          }
          uVar5 = (ulong)*(uint *)(param_2 + 0x18);
          uVar8 = uVar8 + 1;
        } while ((long)uVar8 < (long)(int)*(uint *)(param_2 + 0x18));
      }
      return param_1;
    }
    thunk_FUN_00d48444(PTR_DAT_033f37c8);
    uVar7 = thunk_FUN_00d62348();
    FUN_00ac2be8();
    puVar4 = StringLiteral_2902;
  }
  uVar3 = thunk_FUN_00d48444(puVar4);
  FUN_016ec5b8(uVar7,uVar3,0);
  uVar3 = thunk_FUN_00d48444(
                            Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<SpatialAnchorCoreBuildingBlock_<WaitForInit>d__22>__
                            );
                    /* WARNING: Subroutine does not return */
  FUN_00da5038(uVar7,uVar3);
}


