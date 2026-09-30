/*
FUNCTION_NAME: Oculus.Interaction.HandGrab.Visuals.HandGhost$$SetPose
ENTRY_POINT: 035bbb94
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_6;telemetry_or_network_hits_1;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


long * Oculus_Interaction_HandGrab_Visuals_HandGhost__SetPose(void)

{
  byte bVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 in_w8;
  uint unaff_w19;
  long unaff_x20;
  uint unaff_w21;
  long *plVar7;
  ulong unaff_x23;
  long unaff_x24;
  
  *(undefined1 *)(unaff_x24 + 0x5cb) = in_w8;
  if (unaff_x20 == 0) {
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LivestreamingVideoStats>_get_Data__);
    uVar4 = thunk_FUN_01f117cc();
    uVar5 = thunk_FUN_01efb3a4(
                              Method_UnityEngine_TextCore_Text_TextGeneratorUtilities_ResizeInternalArray<TextProcessingElement>__
                              );
    FUN_034efd20(uVar4,uVar5,0);
LAB_035bbda4:
    uVar5 = thunk_FUN_01efb3a4(
                              Method_Unity_VisualScripting_ConversionUtility_<>c__DisplayClass11_0_<FindUserDefinedConversionMethods>b__2__
                              );
                    /* WARNING: Subroutine does not return */
    FUN_01f08910(uVar4,uVar5);
  }
  uVar3 = thunk_FUN_0340e318();
  if ((uVar3 & 1) == 0) {
    if ((unaff_x23 & 1) == 0) {
      plVar7 = (long *)FUN_01f0e6cc();
      if ((unaff_w19 & 1) != 0) {
        if (*(int *)(*(long *)Method_Unity_Burst_BurstRuntime_GetUTF8LiteralPointer__ + 0xe0) == 0)
        {
          thunk_FUN_01ee6d7c();
        }
        uVar3 = FUN_03594020(plVar7,0,0);
        if ((uVar3 & 1) != 0) {
          uVar5 = thunk_FUN_01efb3a4(
                                    Method_Unity_VisualScripting_ConversionUtility_<>c__DisplayClass13_0_<GetUserDefinedConversionType>b__0__
                                    );
          thunk_FUN_01efb3a4(
                            Method_Oculus_Platform_Callback_SetNotificationCallback<NetSyncSessionsChangedNotification>__
                            );
          uVar5 = FUN_0340ebc0(uVar5);
          thunk_FUN_01efb3a4(
                            Method_UnityEngine_SubsystemsImplementation_SubsystemDescriptorStore_RegisterDescriptor<SubsystemDescriptor,_SubsystemDescriptor>__
                            );
          uVar4 = thunk_FUN_01f117cc();
          FUN_035ad268(uVar4,uVar5);
          uVar5 = thunk_FUN_01efb3a4(
                                    Method_Unity_VisualScripting_ConversionUtility_<>c__DisplayClass11_0_<FindUserDefinedConversionMethods>b__2__
                                    );
                    /* WARNING: Subroutine does not return */
          FUN_01f08910(uVar4,uVar5);
        }
      }
    }
    else {
      iVar2 = FUN_03412f70();
      if ((iVar2 < 1) || (iVar2 == *(int *)(unaff_x20 + 0x10) + -1)) {
        thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<NetSyncConnection>_get_Data__);
        uVar4 = thunk_FUN_01f117cc();
        uVar5 = thunk_FUN_01efb3a4(
                                  Method_Unity_VisualScripting_ConversionUtility_<>c_<FindUserDefinedConversionMethods>b__11_1__
                                  );
        uVar6 = thunk_FUN_01efb3a4(
                                  Method_UnityEngine_TextCore_Text_TextGeneratorUtilities_ResizeInternalArray<TextProcessingElement>__
                                  );
        FUN_034efd98(uVar4,uVar5,uVar6,0);
        goto LAB_035bbda4;
      }
      uVar5 = FUN_0341265c();
      plVar7 = (long *)FUN_034ba554(uVar5,0);
      uVar5 = FUN_03410500();
      if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      plVar7 = (long *)(**(code **)(*plVar7 + 0x288))
                                 (plVar7,uVar5,unaff_w19 & 1,unaff_w21 & 1,
                                  *(undefined8 *)(*plVar7 + 0x290));
      if (plVar7 != (long *)0x0) {
        bVar1 = *(byte *)(*(long *)Method_Unity_Burst_BurstRuntime_GetUTF8LiteralPointer__ + 0x130);
        if ((*(byte *)(*plVar7 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*plVar7 + 200) + (ulong)bVar1 * 8 + -8) !=
            *(long *)Method_Unity_Burst_BurstRuntime_GetUTF8LiteralPointer__)) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08cfc(plVar7);
        }
      }
    }
  }
  else {
    if ((unaff_w19 & 1) != 0) {
      thunk_FUN_01efb3a4(
                        Method_UnityEngine_SubsystemsImplementation_SubsystemDescriptorStore_RegisterDescriptor<SubsystemDescriptor,_SubsystemDescriptor>__
                        );
      uVar4 = thunk_FUN_01f117cc();
      uVar5 = thunk_FUN_01efb3a4(
                                Method_Unity_VisualScripting_ConversionUtility_<>c_<FindUserDefinedConversionMethods>b__11_0__
                                );
      FUN_035ad268(uVar4,uVar5);
      goto LAB_035bbda4;
    }
    plVar7 = (long *)0x0;
  }
  return plVar7;
}


