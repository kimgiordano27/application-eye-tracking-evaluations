/*
FUNCTION_NAME: Meta.XR.EnvironmentRaycastManager$$ValidateComponents
ENTRY_POINT: 0146542c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 107
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;data_collection_or_telemetry
MODULES: eye_source;validity_gate;ray_interaction;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_6;ray_or_cast_sink_hits_2;telemetry_or_network_hits_1;functionality_gaze_retrieval_or_extraction;functionality_data_collection_or_telemetry_hits_1
*/


undefined8
Meta_XR_EnvironmentRaycastManager__ValidateComponents(undefined8 *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long *unaff_x19;
  int iVar9;
  long unaff_x23;
  long unaff_x25;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000028;
  long in_stack_00000030;
  int iStack000000000000003c;
  int in_stack_00000040;
  undefined4 uStack0000000000000044;
  long in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  long in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  
  FUN_012c2b7c(param_2,*param_1);
  puVar2 = UnityEngine_Rendering_Universal_DebugHandler_DebugRenderPassEnumerable_TypeInfo;
  if (unaff_x25 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00dbe778();
  }
  if ((unaff_x23 == 0) ||
     (lVar4 = FUN_012998a8(),
     puVar3 = Method_UnityEngine_Networking_UnityWebRequest_InternalSetUrl__,
     puVar1 = PTR_DAT_033f4398, lVar4 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  FUN_01311764(lVar4,&stack0x00000048,*(undefined8 *)puVar2);
  iVar9 = 0;
  in_stack_000000b8 = in_stack_00000050;
  in_stack_000000b0 = in_stack_00000048;
  in_stack_000000c0 = in_stack_00000058;
  do {
    while( true ) {
      uVar5 = FUN_012c2b80(&stack0x000000b0,*(undefined8 *)StringLiteral_6131);
      if ((uVar5 & 1) == 0) {
        FUN_012c2b7c(&stack0x000000b0,*(undefined8 *)MB_MultiMaterial_TypeInfo);
        uStack0000000000000044 =
             GreenerGames_SecondaryKeyDictionary<__Il2CppFullySharedGenericType,___Il2CppFullySharedGenericType,___Il2CppFullySharedGenericType>__ContainsSecondaryKey
                       ();
        puVar2 = Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__;
        uVar6 = thunk_FUN_00d61fa0(*(undefined8 *)
                                    Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__
                                   ,&stack0x00000044);
        in_stack_00000040 = iVar9;
        uVar7 = thunk_FUN_00d61fa0(*(undefined8 *)puVar2,&stack0x00000040);
        iStack000000000000003c =
             GreenerGames_SecondaryKeyDictionary<__Il2CppFullySharedGenericType,___Il2CppFullySharedGenericType,___Il2CppFullySharedGenericType>__ContainsSecondaryKey
                       ();
        iStack000000000000003c = iStack000000000000003c - iVar9;
        uVar8 = thunk_FUN_00d61fa0(*(undefined8 *)puVar2,&stack0x0000003c);
        uVar6 = FUN_01600ba0(*(undefined8 *)puVar3,uVar6,uVar7,uVar8,0);
        if (*(int *)(*unaff_x19 + 0xe0) == 0) {
          thunk_FUN_00d32864(*unaff_x19);
        }
        FUN_02660dac(uVar6,0);
        return in_stack_00000028;
      }
      uVar6 = FUN_00bc1490(&stack0x000000b0,*(undefined8 *)StringLiteral_9910);
      uVar7 = FUN_01299bc0();
      if (in_stack_00000048 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      if (*(int *)(in_stack_00000048 + 0x18) < 2) break;
LAB_014652d0:
      uVar6 = FUN_014658c0(uVar7,in_stack_00000030,in_stack_00000018,uVar6);
      FUN_00bc16a0(in_stack_00000028,uVar6,*(undefined8 *)puVar1);
    }
    if (*(long *)(in_stack_00000030 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    if (*(char *)(*(long *)(in_stack_00000030 + 0x30) + 0x41) != '\0') goto LAB_014652d0;
    iVar9 = iVar9 + 1;
  } while( true );
}


