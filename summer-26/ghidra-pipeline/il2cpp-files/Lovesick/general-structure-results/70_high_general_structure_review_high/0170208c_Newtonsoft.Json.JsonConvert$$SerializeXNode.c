/*
FUNCTION_NAME: Newtonsoft.Json.JsonConvert$$SerializeXNode
ENTRY_POINT: 0170208c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_5;ray_or_cast_sink_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_3;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


undefined8 Newtonsoft_Json_JsonConvert__SerializeXNode(void)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int unaff_w19;
  uint unaff_w20;
  int unaff_w21;
  uint unaff_w22;
  long unaff_x23;
  long unaff_x24;
  undefined *puVar6;
  
  puVar6 = Method_Unity_Burst_Intrinsics_Arm_Neon_vpmaxqd_f64__;
  if (unaff_w19 < 0) {
    thunk_FUN_00d48444(StringLiteral_8570);
    uVar3 = thunk_FUN_00d62348();
    FUN_00ac2be8();
    uVar4 = thunk_FUN_00d48444(Method_System_Nullable<DefaultValueHandling>_GetValueOrDefault__);
    puVar6 = StringLiteral_7315;
  }
  else {
    if (unaff_w21 < 0) {
      thunk_FUN_00d48444(StringLiteral_8570);
      uVar3 = thunk_FUN_00d62348();
      FUN_00ac2be8();
      puVar6 = Method_System_Net_Sockets_Socket_<>c_<ReceiveAsyncApm>b__15_0__;
    }
    else {
      if (-1 < (int)unaff_w22) {
        if (1 < unaff_w20) {
          uVar3 = thunk_FUN_00d48444(
                                    Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__
                                    );
          uVar3 = thunk_FUN_00d61fa0(uVar3,&stack0x0000000c);
          uVar4 = thunk_FUN_00d48444(Method_System_Text_ASCIIEncoding_GetChars__);
          uVar3 = FUN_015f6780(uVar4,uVar3,0);
          thunk_FUN_00d48444(Method_OVRLocatable_TrackingSpacePose_ComputeWorldRotation__);
          uVar4 = thunk_FUN_00d62348();
          FUN_00ac2be8();
          uVar5 = thunk_FUN_00d48444(
                                    Method_Polenter_Serialization_Advanced_XmlPropertySerializer__ctor__
                                    );
          FUN_016ec624(uVar4,uVar3,uVar5);
          uVar3 = thunk_FUN_00d48444(
                                    Method_System_Collections_Generic_List_Enumerator<VelocityTimePair>_get_Current__
                                    );
                    /* WARNING: Subroutine does not return */
          FUN_00da5038(uVar4,uVar3);
        }
        if (*(int *)(unaff_x24 + 0x18) - unaff_w19 < unaff_w21) {
          thunk_FUN_00d48444(StringLiteral_8570);
          uVar3 = thunk_FUN_00d62348();
          FUN_00ac2be8();
          uVar4 = thunk_FUN_00d48444(Method_System_Net_Sockets_Socket_<>c_<ReceiveAsyncApm>b__15_0__
                                    );
          puVar6 = Method_System_Nullable<RaycastResult>__ctor__;
        }
        else {
          if (*(int *)(unaff_x24 + 0x18) == 0) {
            return 0;
          }
          iVar1 = *(int *)(unaff_x23 + 0x18);
          if (*(int *)(*(long *)Method_Unity_Burst_Intrinsics_Arm_Neon_vpmaxqd_f64__ + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          iVar2 = FUN_01701cb4(unaff_w19,unaff_w20 == 1);
          if ((int)unaff_w22 <= iVar1 - iVar2) {
            if ((unaff_w22 < *(uint *)(unaff_x23 + 0x18)) && (*(int *)(unaff_x24 + 0x18) != 0)) {
              if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
                thunk_FUN_00d32864();
              }
              uVar3 = FUN_01701d6c(unaff_x23 + (long)(int)unaff_w22 * 2 + 0x20,unaff_x24 + 0x20,
                                   unaff_w21,unaff_w19,unaff_w20 == 1);
              return uVar3;
            }
                    /* WARNING: Subroutine does not return */
            FUN_00da5194();
          }
          thunk_FUN_00d48444(StringLiteral_8570);
          uVar3 = thunk_FUN_00d62348();
          FUN_00ac2be8();
          uVar4 = thunk_FUN_00d48444(
                                    Method_System_Collections_Generic_Dictionary<int,_RTHandle[]>_TryGetValue__
                                    );
          puVar6 = Method_System_Runtime_CompilerServices_AsyncTaskCache_CreateCacheableTask<int>__;
        }
        goto LAB_01702338;
      }
      thunk_FUN_00d48444(StringLiteral_8570);
      uVar3 = thunk_FUN_00d62348();
      FUN_00ac2be8();
      puVar6 = Method_System_Collections_Generic_Dictionary<int,_RTHandle[]>_TryGetValue__;
    }
    uVar4 = thunk_FUN_00d48444(puVar6);
    puVar6 = StringLiteral_9047;
  }
LAB_01702338:
  uVar5 = thunk_FUN_00d48444(puVar6);
  FUN_016efd4c(uVar3,uVar4,uVar5);
  uVar4 = thunk_FUN_00d48444(
                            Method_System_Collections_Generic_List_Enumerator<VelocityTimePair>_get_Current__
                            );
                    /* WARNING: Subroutine does not return */
  FUN_00da5038(uVar3,uVar4);
}


