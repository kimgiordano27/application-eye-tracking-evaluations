/*
FUNCTION_NAME: UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorUI$$OnToggleManipulateLeftAction
ENTRY_POINT: 06991244
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

void UnityEngine_XR_Interaction_Toolkit_Samples_DeviceSimulator_XRDeviceSimulatorUI__OnToggleManipulateLeftAction
               (void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long *plVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  long unaff_x19;
  undefined8 *unaff_x20;
  long lVar12;
  long *plVar13;
  long *unaff_x24;
  undefined8 *unaff_x26;
  uint uVar14;
  long *in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  
  uVar5 = thunk_FUN_032a56a0();
  FUN_055d2e5c();
  puVar6 = (undefined8 *)(*(long *)(*unaff_x24 + 0xb8) + 8);
  *puVar6 = uVar5;
  thunk_FUN_0333a630(puVar6,uVar5);
  uVar5 = FUN_039a8198();
  uVar7 = thunk_FUN_032a56a0(*unaff_x26);
  Meta_WitAi_Json_WitResponseArray_<get_Childs>d__13__System_IDisposable_Dispose();
  uVar5 = FUN_0399a7bc(uVar5,uVar7,*unaff_x20);
  lVar9 = *unaff_x24;
  if (*(int *)(lVar9 + 0xe0) == 0) {
    thunk_FUN_032cd7c0(lVar9);
    lVar9 = *unaff_x24;
  }
  puVar3 = 
  Method_Meta_Voice_NLPAudioRequest<VoiceServiceRequestEvent,_WitRequestOptions,_VoiceServiceRequestEvents,_VoiceServiceRequestResults>_HandleFinalNlpResponse__
  ;
  puVar2 = Method_Unity_VisualScripting_Multiply<float>__ctor__;
  puVar1 = Method_Unity_VisualScripting_MultiInputUnit<object>__ctor__;
  lVar12 = *(long *)(*(long *)(lVar9 + 0xb8) + 0x10);
  if (lVar12 == 0) {
    if (*(int *)(lVar9 + 0xe0) == 0) {
      thunk_FUN_032cd7c0(lVar9);
      lVar9 = *unaff_x24;
    }
    uVar7 = **(undefined8 **)(lVar9 + 0xb8);
    lVar12 = thunk_FUN_032a56a0(*(undefined8 *)
                                 Method_Unity_VisualScripting_Multiply<Vector3>__ctor__);
    Meta_WitAi_Json_WitResponseArray_<get_Childs>d__13__System_IDisposable_Dispose
              (lVar12,uVar7,
               *(undefined8 *)
                Method_Meta_Voice_NLPAudioRequest<VoiceServiceRequestEvent,_WitRequestOptions,_VoiceServiceRequestEvents,_VoiceServiceRequestResults>_OnInit__
               ,0);
    plVar8 = (long *)(*(long *)(*unaff_x24 + 0xb8) + 0x10);
    *plVar8 = lVar12;
    thunk_FUN_0333a630(plVar8,lVar12);
  }
  uVar5 = FUN_03a8f2bc(uVar5,lVar12,*(undefined8 *)puVar3);
  uVar7 = thunk_FUN_032a56a0(*(undefined8 *)puVar2);
  FUN_055d2e5c();
  uVar5 = FUN_039a8198(uVar5,uVar7,*(undefined8 *)puVar1);
  lVar9 = *unaff_x24;
  if (*(int *)(lVar9 + 0xe0) == 0) {
    thunk_FUN_032cd7c0(lVar9);
    lVar9 = *unaff_x24;
  }
  puVar1 = Method_Unity_VisualScripting_MultiInputUnit<IEnumerable>__ctor__;
  lVar12 = *(long *)(*(long *)(lVar9 + 0xb8) + 0x18);
  if (lVar12 == 0) {
    if (*(int *)(lVar9 + 0xe0) == 0) {
      thunk_FUN_032cd7c0(lVar9);
      lVar9 = *unaff_x24;
    }
    uVar7 = **(undefined8 **)(lVar9 + 0xb8);
    lVar12 = thunk_FUN_032a56a0(*(undefined8 *)
                                 Method_Unity_VisualScripting_Multiply<Vector2>__ctor__);
    FUN_055d3620(lVar12,uVar7,
                 *(undefined8 *)
                  Method_Meta_Voice_NLPAudioRequest<VoiceServiceRequestEvent,_WitRequestOptions,_VoiceServiceRequestEvents,_VoiceServiceRequestResults>_OnPartialResponse__
                 ,0);
    plVar8 = (long *)(*(long *)(*unaff_x24 + 0xb8) + 0x18);
    *plVar8 = lVar12;
    thunk_FUN_0333a630(plVar8,lVar12);
  }
  uVar5 = FUN_0399592c(uVar5,lVar12,*(undefined8 *)puVar1);
  lVar9 = *unaff_x24;
  if (*(int *)(lVar9 + 0xe0) == 0) {
    thunk_FUN_032cd7c0(lVar9);
    lVar9 = *unaff_x24;
  }
  puVar1 = Method_Unity_VisualScripting_MultiInputUnit<IEnumerable>_get_multiInputs__;
  lVar12 = *(long *)(*(long *)(lVar9 + 0xb8) + 0x20);
  if (lVar12 == 0) {
    if (*(int *)(lVar9 + 0xe0) == 0) {
      thunk_FUN_032cd7c0(lVar9);
      lVar9 = *unaff_x24;
    }
    uVar7 = **(undefined8 **)(lVar9 + 0xb8);
    lVar12 = thunk_FUN_032a56a0(*(undefined8 *)
                                 Method_Unity_VisualScripting_Multiply<Vector2>__ctor__);
    FUN_055d3620(lVar12,uVar7,
                 *(undefined8 *)
                  Method_Meta_Voice_NLPAudioRequest<VoiceServiceRequestEvent,_WitRequestOptions,_VoiceServiceRequestEvents,_VoiceServiceRequestResults>_get_ResponseData__
                 ,0);
    plVar8 = (long *)(*(long *)(*unaff_x24 + 0xb8) + 0x20);
    *plVar8 = lVar12;
    thunk_FUN_0333a630(plVar8,lVar12);
  }
  plVar8 = (long *)FUN_039a3c74(uVar5,lVar12,*(undefined8 *)puVar1);
  if (plVar8 != (long *)0x0) {
    lVar9 = *plVar8;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) ==
            *(long *)Method_Unity_VisualScripting_Multiply<Vector4>__ctor__) {
          puVar6 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_06991538;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar6 = (undefined8 *)
             FUN_032937ac(plVar8,*(long *)Method_Unity_VisualScripting_Multiply<Vector4>__ctor__,0);
LAB_06991538:
    plVar8 = (long *)(*(code *)*puVar6)(plVar8,puVar6[1]);
    puVar3 = Method_Meta_Voice_NLPRequestEvents<VoiceServiceRequestEvent>__ctor__;
    puVar2 = Method_Unity_VisualScripting_MultiInputUnit<IDictionary>__ctor__;
    puVar1 = PTR_DAT_0727a180;
    if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_032d5ee8();
    }
    uVar14 = 0;
    do {
      lVar9 = *plVar8;
      uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *(long *)puVar1) {
            puVar6 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_069915b4;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar6 = (undefined8 *)FUN_032937ac(plVar8,*(long *)puVar1,0);
LAB_069915b4:
      uVar10 = (*(code *)*puVar6)(plVar8,puVar6[1]);
      if ((uVar10 & 1) == 0) {
        if (plVar8 == (long *)0x0) goto LAB_0699178c;
        lVar9 = *plVar8;
        uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar10 == 0) goto LAB_06991764;
        piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        goto LAB_0699174c;
      }
      lVar9 = thunk_FUN_032a56a0(*(undefined8 *)
                                  Method_Meta_Voice_NLPRequest<VoiceServiceRequestEvent,_WitRequestOptions,_VoiceServiceRequestEvents,_VoiceServiceRequestResults>__ctor__
                                );
      FUN_059660a0(lVar9,0);
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_032d5ee8();
      }
      *(long *)(lVar9 + 0x18) = unaff_x19;
      thunk_FUN_0333a630();
      lVar12 = *plVar8;
      uVar10 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) ==
              *(long *)
               Method_Meta_Voice_NLPAudioRequestEvents<VoiceServiceRequestEvent>_get_OnFullResponse__
             ) {
            puVar6 = (undefined8 *)(lVar12 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_06991648;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar6 = (undefined8 *)
               FUN_032937ac(plVar8,*(long *)
                                    Method_Meta_Voice_NLPAudioRequestEvents<VoiceServiceRequestEvent>_get_OnFullResponse__
                            ,0);
LAB_06991648:
      lVar12 = (*(code *)*puVar6)(plVar8,puVar6[1]);
      plVar13 = (long *)(lVar9 + 0x10);
      *plVar13 = lVar12;
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
                (uVar5,lVar9,*(undefined8 *)puVar3,0);
      lVar9 = FUN_069c1d68();
      if (*plVar13 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_032d5ee8();
      }
      uVar10 = FUN_068c2ce4(*plVar13,0);
      if ((uVar10 & 1) != 0) {
        if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_032d5ee8();
        }
        FUN_069c0af0(lVar9,0);
      }
      if (*in_stack_00000000 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_032d5ee8();
      }
      FUN_050f8b10(*in_stack_00000000,lVar9,*plVar13,*(undefined8 *)puVar2);
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
    uVar10 = uVar10 - 1;
    piVar11 = piVar11 + 4;
    if (uVar10 == 0) break;
LAB_0699174c:
    if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_07279f60) {
      puVar6 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
      goto LAB_06991780;
    }
  }
LAB_06991764:
  puVar6 = (undefined8 *)FUN_032937ac(plVar8,*(long *)PTR_DAT_07279f60,0);
LAB_06991780:
  (*(code *)*puVar6)(plVar8,puVar6[1]);
LAB_0699178c:
  if ((uVar14 & 1) == 0) {
    return;
  }
  lVar9 = FUN_069c1b70();
  if (lVar9 != 0) {
    lVar9 = FUN_069a7858(lVar9,0);
    plVar8 = (long *)(unaff_x19 + 0xa0);
    *plVar8 = lVar9;
    thunk_FUN_0333a630(plVar8,lVar9);
    lVar9 = *plVar8;
    uVar5 = *(undefined8 *)(unaff_x19 + 0x90);
    if (*(int *)(*(long *)PTR_DAT_07280330 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
    }
    uVar5 = FUN_06951e18(uVar5,0);
    if (lVar9 != 0) {
      FUN_069bef74(lVar9,uVar5,0);
      if ((*in_stack_00000000 != 0) &&
         (lVar9 = FUN_050f87f0(*in_stack_00000000,
                               *(undefined8 *)
                                Method_Unity_VisualScripting_MultiInputUnit<IDictionary>_get_multiInputs__
                              ), lVar9 != 0)) {
        FUN_03f962e0(&stack0x00000008,lVar9,
                     *(undefined8 *)
                      Method_Meta_Voice_NLPAudioRequestEvents<VoiceServiceRequestEvent>_get_OnPartialResponse__
                    );
        puVar2 = Method_Unity_VisualScripting_MultiInputUnit<object>_InputsAllowNull__;
        puVar1 = Method_Unity_VisualScripting_MultiInputUnit<IDictionary>_Definition__;
        in_stack_00000028 = in_stack_00000010;
        in_stack_00000020 = in_stack_00000008;
        in_stack_00000030 = in_stack_00000018;
        while( true ) {
          uVar10 = FUN_05391e8c(&stack0x00000020,*(undefined8 *)puVar2);
          if ((uVar10 & 1) == 0) {
            FUN_05391e88(&stack0x00000020,
                         *(undefined8 *)
                          Method_Unity_VisualScripting_MultiInputUnit<object>_Definition__);
            return;
          }
          if (*in_stack_00000000 == 0) break;
          lVar9 = FUN_050f8a90(*in_stack_00000000,in_stack_00000030,*(undefined8 *)puVar1);
          if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_032d5ee8();
          }
          uVar10 = FUN_068c24ac(lVar9,0);
          if ((uVar10 & 1) != 0) {
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


