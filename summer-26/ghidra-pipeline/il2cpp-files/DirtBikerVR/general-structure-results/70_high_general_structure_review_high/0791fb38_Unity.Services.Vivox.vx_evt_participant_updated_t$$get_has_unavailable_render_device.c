/*
FUNCTION_NAME: Unity.Services.Vivox.vx_evt_participant_updated_t$$get_has_unavailable_render_device
ENTRY_POINT: 0791fb38
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ray_interaction;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_1;ray_or_cast_sink_hits_1;telemetry_or_network_hits_1;frame_or_lifecycle_behavior
*/


void Unity_Services_Vivox_vx_evt_participant_updated_t__get_has_unavailable_render_device(void)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined4 *unaff_x19;
  long *unaff_x26;
  undefined8 in_stack_00000018;
  
  puVar2 = (undefined8 *)FUN_03ac43c4();
  lVar3 = (*(code *)*puVar2)();
  if (lVar3 != 0) {
    in_stack_00000018 =
         FUN_058b71ec(lVar3,*(undefined8 *)
                             Unity_Multiplayer_Tools_NetStats_EventMetric<ServerLogEvent>___TypeInfo
                     );
    uVar4 = FUN_0587c6c4(&stack0x00000018,
                         *(undefined8 *)
                          System_Collections_Generic_Dictionary<string,_StyleComplexSelector>___TypeInfo
                        );
    if ((uVar4 & 1) == 0) {
      *unaff_x19 = 0;
      *(undefined8 *)(unaff_x19 + 0x10) = in_stack_00000018;
      thunk_FUN_03afed3c(unaff_x19 + 0x10,0);
      if (*(int *)(*unaff_x26 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      FUN_03fe5f28(unaff_x19 + 2,&stack0x00000018);
    }
    else {
      uVar5 = FUN_0587c704(&stack0x00000018,
                           *(undefined8 *)System_Xml_Linq_XHashtable<XName>_TypeInfo);
      uVar6 = FUN_0471a034(uVar5,*(undefined8 *)(unaff_x19 + 0xe),
                           *(undefined8 *)Cinemachine_CinemachineVirtualCameraBase___TypeInfo);
      uVar7 = thunk_FUN_03ac74bc(*(undefined8 *)UnityEngine_Color___TypeInfo);
      FUN_05750b0c(uVar7,uVar5,uVar6,*(undefined8 *)UnityEngine_Collider___TypeInfo);
      puVar1 = Gley_UrbanSystem_Internal_CellData___TypeInfo;
      *unaff_x19 = 0xfffffffe;
      *(undefined8 *)(unaff_x19 + 0xe) = 0;
      thunk_FUN_03afed3c(unaff_x19 + 0xe,0);
      if (*(int *)(*unaff_x26 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      FUN_05338ae8(unaff_x19 + 2,uVar7,*(undefined8 *)puVar1);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


