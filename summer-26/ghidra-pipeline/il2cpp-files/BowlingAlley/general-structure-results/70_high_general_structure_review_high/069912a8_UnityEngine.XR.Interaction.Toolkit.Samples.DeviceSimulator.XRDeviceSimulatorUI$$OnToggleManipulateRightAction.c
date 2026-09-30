/*
FUNCTION_NAME: UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorUI$$OnToggleManipulateRightAction
ENTRY_POINT: 069912a8
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 77
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_3;validity_or_gating_hits_20;strong_pose_or_ray_construction_hits_8;paired_field_refs_with_structure_only;telemetry_or_network_hits_21;source_validity_pose_sink_structure;negative_framework_namespace_without_eye_use_flow
*/


/* WARNING: Removing unreachable block (ram,0x06991798) */
/* WARNING: Removing unreachable block (ram,0x06991924) */

void UnityEngine_XR_Interaction_Toolkit_Samples_DeviceSimulator_XRDeviceSimulatorUI__OnToggleManipulateRightAction
               (void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined8 *puVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  long unaff_x19;
  long lVar11;
  undefined8 uVar12;
  long *plVar13;
  long *unaff_x24;
  uint uVar14;
  long *in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  
  Meta_WitAi_Json_WitResponseArray_<get_Childs>d__13__System_IDisposable_Dispose();
  uVar5 = FUN_0399a7bc();
  lVar8 = *unaff_x24;
  if (*(int *)(lVar8 + 0xe0) == 0) {
    thunk_FUN_032cd7c0(lVar8);
    lVar8 = *unaff_x24;
  }
  puVar3 = 
  Method_Meta_Voice_NLPAudioRequest<VoiceServiceRequestEvent,_WitRequestOptions,_VoiceServiceRequestEvents,_VoiceServiceRequestResults>_HandleFinalNlpResponse__
  ;
  puVar2 = Method_Unity_VisualScripting_Multiply<float>__ctor__;
  puVar1 = Method_Unity_VisualScripting_MultiInputUnit<object>__ctor__;
  lVar11 = *(long *)(*(long *)(lVar8 + 0xb8) + 0x10);
  if (lVar11 == 0) {
    if (*(int *)(lVar8 + 0xe0) == 0) {
      thunk_FUN_032cd7c0(lVar8);
      lVar8 = *unaff_x24;
    }
    uVar12 = **(undefined8 **)(lVar8 + 0xb8);
    lVar11 = thunk_FUN_032a56a0(*(undefined8 *)
                                 Method_Unity_VisualScripting_Multiply<Vector3>__ctor__);
    Meta_WitAi_Json_WitResponseArray_<get_Childs>d__13__System_IDisposable_Dispose
              (lVar11,uVar12,
               *(undefined8 *)
                Method_Meta_Voice_NLPAudioRequest<VoiceServiceRequestEvent,_WitRequestOptions,_VoiceServiceRequestEvents,_VoiceServiceRequestResults>_OnInit__
               ,0);
    plVar6 = (long *)(*(long *)(*unaff_x24 + 0xb8) + 0x10);
    *plVar6 = lVar11;
    thunk_FUN_0333a630(plVar6,lVar11);
  }
  uVar5 = FUN_03a8f2bc(uVar5,lVar11,*(undefined8 *)puVar3);
  uVar12 = thunk_FUN_032a56a0(*(undefined8 *)puVar2);
  FUN_055d2e5c();
  uVar5 = FUN_039a8198(uVar5,uVar12,*(undefined8 *)puVar1);
  lVar8 = *unaff_x24;
  if (*(int *)(lVar8 + 0xe0) == 0) {
    thunk_FUN_032cd7c0(lVar8);
    lVar8 = *unaff_x24;
  }
  puVar1 = Method_Unity_VisualScripting_MultiInputUnit<IEnumerable>__ctor__;
  lVar11 = *(long *)(*(long *)(lVar8 + 0xb8) + 0x18);
  if (lVar11 == 0) {
    if (*(int *)(lVar8 + 0xe0) == 0) {
      thunk_FUN_032cd7c0(lVar8);
      lVar8 = *unaff_x24;
    }
    uVar12 = **(undefined8 **)(lVar8 + 0xb8);
    lVar11 = thunk_FUN_032a56a0(*(undefined8 *)
                                 Method_Unity_VisualScripting_Multiply<Vector2>__ctor__);
    FUN_055d3620(lVar11,uVar12,
                 *(undefined8 *)
                  Method_Meta_Voice_NLPAudioRequest<VoiceServiceRequestEvent,_WitRequestOptions,_VoiceServiceRequestEvents,_VoiceServiceRequestResults>_OnPartialResponse__
                 ,0);
    plVar6 = (long *)(*(long *)(*unaff_x24 + 0xb8) + 0x18);
    *plVar6 = lVar11;
    thunk_FUN_0333a630(plVar6,lVar11);
  }
  uVar5 = FUN_0399592c(uVar5,lVar11,*(undefined8 *)puVar1);
  lVar8 = *unaff_x24;
  if (*(int *)(lVar8 + 0xe0) == 0) {
    thunk_FUN_032cd7c0(lVar8);
    lVar8 = *unaff_x24;
  }
  puVar1 = Method_Unity_VisualScripting_MultiInputUnit<IEnumerable>_get_multiInputs__;
  lVar11 = *(long *)(*(long *)(lVar8 + 0xb8) + 0x20);
  if (lVar11 == 0) {
    if (*(int *)(lVar8 + 0xe0) == 0) {
      thunk_FUN_032cd7c0(lVar8);
      lVar8 = *unaff_x24;
    }
    uVar12 = **(undefined8 **)(lVar8 + 0xb8);
    lVar11 = thunk_FUN_032a56a0(*(undefined8 *)
                                 Method_Unity_VisualScripting_Multiply<Vector2>__ctor__);
    FUN_055d3620(lVar11,uVar12,
                 *(undefined8 *)
                  Method_Meta_Voice_NLPAudioRequest<VoiceServiceRequestEvent,_WitRequestOptions,_VoiceServiceRequestEvents,_VoiceServiceRequestResults>_get_ResponseData__
                 ,0);
    plVar6 = (long *)(*(long *)(*unaff_x24 + 0xb8) + 0x20);
    *plVar6 = lVar11;
    thunk_FUN_0333a630(plVar6,lVar11);
  }
  plVar6 = (long *)FUN_039a3c74(uVar5,lVar11,*(undefined8 *)puVar1);
  if (plVar6 != (long *)0x0) {
    lVar8 = *plVar6;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) ==
            *(long *)Method_Unity_VisualScripting_Multiply<Vector4>__ctor__) {
          puVar7 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_06991538;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar7 = (undefined8 *)
             FUN_032937ac(plVar6,*(long *)Method_Unity_VisualScripting_Multiply<Vector4>__ctor__,0);
LAB_06991538:
    plVar6 = (long *)(*(code *)*puVar7)(plVar6,puVar7[1]);
    puVar3 = Method_Meta_Voice_NLPRequestEvents<VoiceServiceRequestEvent>__ctor__;
    puVar2 = Method_Unity_VisualScripting_MultiInputUnit<IDictionary>__ctor__;
    puVar1 = PTR_DAT_0727a180;
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_032d5ee8();
    }
    uVar14 = 0;
    do {
      lVar8 = *plVar6;
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)puVar1) {
            puVar7 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_069915b4;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar7 = (undefined8 *)FUN_032937ac(plVar6,*(long *)puVar1,0);
LAB_069915b4:
      uVar9 = (*(code *)*puVar7)(plVar6,puVar7[1]);
      if ((uVar9 & 1) == 0) {
        if (plVar6 == (long *)0x0) goto LAB_0699178c;
        lVar8 = *plVar6;
        uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar9 == 0) goto LAB_06991764;
        piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        goto LAB_0699174c;
      }
      lVar8 = thunk_FUN_032a56a0(*(undefined8 *)
                                  Method_Meta_Voice_NLPRequest<VoiceServiceRequestEvent,_WitRequestOptions,_VoiceServiceRequestEvents,_VoiceServiceRequestResults>__ctor__
                                );
      FUN_059660a0(lVar8,0);
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_032d5ee8();
      }
      *(long *)(lVar8 + 0x18) = unaff_x19;
      thunk_FUN_0333a630();
      lVar11 = *plVar6;
      uVar9 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) ==
              *(long *)
               Method_Meta_Voice_NLPAudioRequestEvents<VoiceServiceRequestEvent>_get_OnFullResponse__
             ) {
            puVar7 = (undefined8 *)(lVar11 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_06991648;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar7 = (undefined8 *)
               FUN_032937ac(plVar6,*(long *)
                                    Method_Meta_Voice_NLPAudioRequestEvents<VoiceServiceRequestEvent>_get_OnFullResponse__
                            ,0);
LAB_06991648:
      lVar11 = (*(code *)*puVar7)(plVar6,puVar7[1]);
      plVar13 = (long *)(lVar8 + 0x10);
      *plVar13 = lVar11;
      thunk_FUN_0333a630(plVar13);
      if (*plVar13 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_032d5ee8();
      }
      FUN_068c1ba4(*plVar13,0);
      if (*plVar13 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_032d5ee8();
      }
      uVar5 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_07281cf0);
      Meta_WitAi_Json_WitResponseArray_<get_Childs>d__13__System_IDisposable_Dispose
                (uVar5,lVar8,*(undefined8 *)puVar3,0);
      lVar8 = FUN_069c1d68();
      if (*plVar13 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_032d5ee8();
      }
      uVar9 = FUN_068c2ce4(*plVar13,0);
      if ((uVar9 & 1) != 0) {
        if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_032d5ee8();
        }
        FUN_069c0af0(lVar8,0);
      }
      if (*in_stack_00000000 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_032d5ee8();
      }
      FUN_050f8b10(*in_stack_00000000,lVar8,*plVar13,*(undefined8 *)puVar2);
      if (*plVar13 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_032d5ee8();
      }
      uVar4 = FUN_068c24ac(*plVar13,0);
      uVar14 = uVar14 | uVar4;
    } while( true );
  }
  goto LAB_0699191c;
  while( true ) {
    uVar9 = uVar9 - 1;
    piVar10 = piVar10 + 4;
    if (uVar9 == 0) break;
LAB_0699174c:
    if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_07279f60) {
      puVar7 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
      goto LAB_06991780;
    }
  }
LAB_06991764:
  puVar7 = (undefined8 *)FUN_032937ac(plVar6,*(long *)PTR_DAT_07279f60,0);
LAB_06991780:
  (*(code *)*puVar7)(plVar6,puVar7[1]);
LAB_0699178c:
  if ((uVar14 & 1) == 0) {
    return;
  }
  lVar8 = FUN_069c1b70();
  if (lVar8 != 0) {
    lVar8 = FUN_069a7858(lVar8,0);
    plVar6 = (long *)(unaff_x19 + 0xa0);
    *plVar6 = lVar8;
    thunk_FUN_0333a630(plVar6,lVar8);
    lVar8 = *plVar6;
    uVar5 = *(undefined8 *)(unaff_x19 + 0x90);
    if (*(int *)(*(long *)PTR_DAT_07280330 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
    }
    uVar5 = FUN_06951e18(uVar5,0);
    if (lVar8 != 0) {
      FUN_069bef74(lVar8,uVar5,0);
      if ((*in_stack_00000000 != 0) &&
         (lVar8 = FUN_050f87f0(*in_stack_00000000,
                               *(undefined8 *)
                                Method_Unity_VisualScripting_MultiInputUnit<IDictionary>_get_multiInputs__
                              ), lVar8 != 0)) {
        FUN_03f962e0(&stack0x00000008,lVar8,
                     *(undefined8 *)
                      Method_Meta_Voice_NLPAudioRequestEvents<VoiceServiceRequestEvent>_get_OnPartialResponse__
                    );
        puVar2 = Method_Unity_VisualScripting_MultiInputUnit<object>_InputsAllowNull__;
        puVar1 = Method_Unity_VisualScripting_MultiInputUnit<IDictionary>_Definition__;
        in_stack_00000028 = in_stack_00000010;
        in_stack_00000020 = in_stack_00000008;
        in_stack_00000030 = in_stack_00000018;
        while( true ) {
          uVar9 = FUN_05391e8c(&stack0x00000020,*(undefined8 *)puVar2);
          if ((uVar9 & 1) == 0) {
            FUN_05391e88(&stack0x00000020,
                         *(undefined8 *)
                          Method_Unity_VisualScripting_MultiInputUnit<object>_Definition__);
            return;
          }
          if (*in_stack_00000000 == 0) break;
          lVar8 = FUN_050f8a90(*in_stack_00000000,in_stack_00000030,*(undefined8 *)puVar1);
          if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_032d5ee8();
          }
          uVar9 = FUN_068c24ac(lVar8,0);
          if ((uVar9 & 1) != 0) {
            thunk_FUN_069c69a4();
          }
        }
                    /* WARNING: Subroutine does not return */
        FUN_032d5ee8();
      }
    }
  }
LAB_0699191c:
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


