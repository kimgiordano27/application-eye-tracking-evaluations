/*
FUNCTION_NAME: OVRPlugin.Media$$UseMrcDebugCamera
ENTRY_POINT: 01a3fd6c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 75
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_data_collection_or_telemetry_hits_1
*/


void OVRPlugin_Media__UseMrcDebugCamera(undefined8 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar8;
  undefined8 uVar9;
  long *unaff_x23;
  undefined8 in_stack_00000020;
  undefined4 uStack0000000000000028;
  undefined4 uStack000000000000002c;
  undefined4 uStack0000000000000030;
  undefined4 uStack0000000000000034;
  undefined4 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined4 in_stack_00000048;
  undefined4 uStack000000000000004c;
  undefined4 in_stack_00000050;
  undefined8 uStack0000000000000054;
  undefined8 uStack0000000000000060;
  undefined4 uStack0000000000000068;
  undefined4 uStack000000000000006c;
  undefined4 uStack0000000000000070;
  undefined4 uStack0000000000000074;
  undefined4 uStack0000000000000078;
  
  *(undefined4 *)(unaff_x20 + 0x334) = 0;
  uStack0000000000000068 = 0;
  uStack000000000000006c = 0;
  uStack0000000000000070 = 0;
  uStack0000000000000074 = 0;
  uStack0000000000000060 = 0;
  uStack0000000000000078 = 0;
  FUN_02666aac(param_1,0);
  uStack0000000000000054 = CONCAT44(uStack0000000000000078,uStack0000000000000074);
  in_stack_00000050 = uStack0000000000000070;
  in_stack_00000048 = uStack0000000000000068;
  uStack000000000000004c = uStack000000000000006c;
  in_stack_00000040 = uStack0000000000000060;
  if (0x16 < *(uint *)(unaff_x20 + 0x18)) {
    *(undefined4 *)(unaff_x20 + 0x338) = 0xe;
    *(undefined8 *)(unaff_x20 + 0x350) = uStack0000000000000054;
    *(ulong *)(unaff_x20 + 0x348) = CONCAT44(uStack0000000000000070,uStack000000000000006c);
    *(ulong *)(unaff_x20 + 0x344) = CONCAT44(uStack000000000000006c,uStack0000000000000068);
    *(undefined8 *)(unaff_x20 + 0x33c) = uStack0000000000000060;
    uVar3 = DAT_029462f4;
    uVar2 = DAT_029462f0;
    uVar1 = DAT_029462ec;
    *(undefined4 *)(unaff_x20 + 0x358) = 0;
    uStack0000000000000028 = 0;
    uStack000000000000002c = 0;
    uStack0000000000000030 = 0;
    uStack0000000000000034 = 0;
    in_stack_00000020 = 0;
    in_stack_00000038 = 0;
    FUN_02666aac(uVar1,uVar2,uVar3,0,0,0,0xbf800000,&stack0x00000020,0);
    if (0x17 < *(uint *)(unaff_x20 + 0x18)) {
      *(undefined4 *)(unaff_x20 + 0x35c) = 0x12;
      *(ulong *)(unaff_x20 + 0x374) = CONCAT44(in_stack_00000038,uStack0000000000000034);
      *(ulong *)(unaff_x20 + 0x36c) = CONCAT44(uStack0000000000000030,uStack000000000000002c);
      *(ulong *)(unaff_x20 + 0x368) = CONCAT44(uStack000000000000002c,uStack0000000000000028);
      *(undefined8 *)(unaff_x20 + 0x360) = in_stack_00000020;
      *(undefined4 *)(unaff_x20 + 0x37c) = 0;
      *(long *)(unaff_x19 + 0x10) = unaff_x20;
      **(long **)(*unaff_x23 + 0xb8) = unaff_x19;
      lVar6 = thunk_FUN_00d62348(*unaff_x23);
      if (lVar6 != 0) {
        FUN_01a3f050();
        puVar5 = StringLiteral_2439;
        puVar4 = System_Runtime_Serialization_Formatters_Binary_MemberPrimitiveTyped_TypeInfo;
        if (**(long **)(*unaff_x23 + 0xb8) != 0) {
          uVar8 = *(undefined8 *)(**(long **)(*unaff_x23 + 0xb8) + 0x10);
          lVar7 = *(long *)StringLiteral_2439;
          if (*(int *)(lVar7 + 0xe0) == 0) {
            thunk_FUN_00d32864();
            lVar7 = *(long *)puVar5;
          }
          uVar9 = **(undefined8 **)(lVar7 + 0xb8);
          lVar7 = thunk_FUN_00d62348(*(undefined8 *)puVar4);
          puVar5 = Method_UnityEngine_UIElements_UIR_UIRenderDevice_OnFlushPendingResources__;
          puVar4 = Method_System_Collections_Generic_List_Enumerator<SubtitleData>_MoveNext__;
          if (lVar7 != 0) {
            FUN_012d239c(lVar7,uVar9,
                         *(undefined8 *)
                          Method_System_Net_Sockets_Socket_TaskSocketAsyncEventArgs<int>_GetCompletionResponsibility__
                         ,0);
            uVar8 = FUN_010dcdb8(uVar8,lVar7,*(undefined8 *)puVar5);
            uVar8 = FUN_010df6b8(uVar8,*(undefined8 *)puVar4);
            *(undefined8 *)(lVar6 + 0x10) = uVar8;
            *(long *)(*(long *)(*unaff_x23 + 0xb8) + 8) = lVar6;
            return;
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da5194();
}


