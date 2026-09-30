/*
FUNCTION_NAME: UnityEngine.XR.Interaction.Toolkit.Filtering.XRPokeLogic.CalculatePokeParams_00000FC5$PostfixBurstDelegate$$Invoke
ENTRY_POINT: 05e482a4
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 93
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_9;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_data_collection_or_telemetry_hits_2
*/


void UnityEngine_XR_Interaction_Toolkit_Filtering_XRPokeLogic_CalculatePokeParams_00000FC5_PostfixBurstDelegate__Invoke
               (void)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  
                    /* try { // try from 05e482a8 to 05f482b3 has its CatchHandler @ 05e485dc */
  lVar2 = thunk_FUN_02d9d438();
  puVar1 = PTR_DAT_06767708;
  if (lVar2 != 0) {
                    /* try { // try from 05e482b4 to 05f482bf has its CatchHandler @ 05e48688 */
    if ((int)unaff_x19[3] != 0) {
      unaff_x19[4] = unaff_x21;
      thunk_FUN_02dd37b4();
      in_stack_00000020 = *(undefined8 *)(unaff_x20 + 4);
      lVar2 = thunk_FUN_02d9d164(*(undefined8 *)puVar1,&stack0x00000020);
      if ((lVar2 != 0) &&
         (lVar3 = thunk_FUN_02d9d438(lVar2,*(undefined8 *)(*unaff_x19 + 0x40)), lVar3 == 0))
      goto LAB_05e4843c;
      if (1 < *(uint *)(unaff_x19 + 3)) {
        unaff_x19[5] = lVar2;
        thunk_FUN_02dd37b4(unaff_x19 + 5,lVar2);
        in_stack_00000018._4_4_ = *(undefined4 *)(unaff_x20 + 0xc);
        lVar2 = thunk_FUN_02d9d164(*(undefined8 *)(unaff_x22 + 0x48),(long)&stack0x00000018 + 4);
        if ((lVar2 != 0) &&
           (lVar3 = thunk_FUN_02d9d438(lVar2,*(undefined8 *)(*unaff_x19 + 0x40)), lVar3 == 0))
        goto LAB_05e4843c;
        if (2 < *(uint *)(unaff_x19 + 3)) {
          unaff_x19[6] = lVar2;
          thunk_FUN_02dd37b4(unaff_x19 + 6,lVar2);
          in_stack_00000010 = *(undefined8 *)(unaff_x20 + 0x10);
          lVar2 = thunk_FUN_02d9d164(*(undefined8 *)(unaff_x22 + 0x80),&stack0x00000010);
          if ((lVar2 != 0) &&
             (lVar3 = thunk_FUN_02d9d438(lVar2,*(undefined8 *)(*unaff_x19 + 0x40)), lVar3 == 0))
          goto LAB_05e4843c;
          puVar1 = Method_System_Array_Resize<int>__;
          if (3 < *(uint *)(unaff_x19 + 3)) {
            unaff_x19[7] = lVar2;
            thunk_FUN_02dd37b4(unaff_x19 + 7,lVar2);
            in_stack_00000008._4_4_ = *(undefined4 *)(unaff_x20 + 0x18);
            lVar2 = thunk_FUN_02d9d164(*(undefined8 *)puVar1,(long)&stack0x00000008 + 4);
            if ((lVar2 != 0) &&
               (lVar3 = thunk_FUN_02d9d438(lVar2,*(undefined8 *)(*unaff_x19 + 0x40)), lVar3 == 0))
            goto LAB_05e4843c;
            puVar1 = Method_System_Array_Resize<OVRPlugin_SpaceComponentType>__;
            if (4 < *(uint *)(unaff_x19 + 3)) {
              unaff_x19[8] = lVar2;
              thunk_FUN_02dd37b4(unaff_x19 + 8,lVar2);
              FUN_04e8e72c(*(undefined8 *)puVar1);
              return;
            }
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_02d60af0();
  }
LAB_05e4843c:
  uVar4 = thunk_FUN_02daa0c0();
                    /* WARNING: Subroutine does not return */
  FUN_02d609b4(uVar4,0);
}


