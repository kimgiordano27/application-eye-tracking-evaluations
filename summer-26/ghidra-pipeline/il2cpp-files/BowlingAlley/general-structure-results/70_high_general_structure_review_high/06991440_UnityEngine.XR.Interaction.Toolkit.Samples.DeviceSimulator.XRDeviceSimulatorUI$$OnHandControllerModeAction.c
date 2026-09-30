/*
FUNCTION_NAME: UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorUI$$OnHandControllerModeAction
ENTRY_POINT: 06991440
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 77
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_3;validity_or_gating_hits_18;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_structure_only;telemetry_or_network_hits_18;source_validity_pose_sink_structure;negative_framework_namespace_without_eye_use_flow
*/


/* WARNING: Removing unreachable block (ram,0x06991798) */
/* WARNING: Removing unreachable block (ram,0x06991924) */

void UnityEngine_XR_Interaction_Toolkit_Samples_DeviceSimulator_XRDeviceSimulatorUI__OnHandControllerModeAction
               (undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  long *plVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  long unaff_x19;
  long lVar10;
  undefined8 uVar11;
  long *plVar12;
  long *unaff_x24;
  uint uVar13;
  long *in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  
  lVar7 = *unaff_x24;
  if (*(int *)(lVar7 + 0xe0) == 0) {
    thunk_FUN_032cd7c0(lVar7);
    lVar7 = *unaff_x24;
  }
  puVar1 = Method_Unity_VisualScripting_MultiInputUnit<IEnumerable>_get_multiInputs__;
  lVar10 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x20);
  if (lVar10 == 0) {
    if (*(int *)(lVar7 + 0xe0) == 0) {
      thunk_FUN_032cd7c0(lVar7);
      lVar7 = *unaff_x24;
    }
    uVar11 = **(undefined8 **)(lVar7 + 0xb8);
    lVar10 = thunk_FUN_032a56a0(*(undefined8 *)
                                 Method_Unity_VisualScripting_Multiply<Vector2>__ctor__);
    FUN_055d3620(lVar10,uVar11,
                 *(undefined8 *)
                  Method_Meta_Voice_NLPAudioRequest<VoiceServiceRequestEvent,_WitRequestOptions,_VoiceServiceRequestEvents,_VoiceServiceRequestResults>_get_ResponseData__
                 ,0);
    plVar5 = (long *)(*(long *)(*unaff_x24 + 0xb8) + 0x20);
    *plVar5 = lVar10;
    thunk_FUN_0333a630(plVar5,lVar10);
  }
  plVar5 = (long *)FUN_039a3c74(param_1,lVar10,*(undefined8 *)puVar1);
  if (plVar5 != (long *)0x0) {
    lVar7 = *plVar5;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) ==
            *(long *)Method_Unity_VisualScripting_Multiply<Vector4>__ctor__) {
          puVar6 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_06991538;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar6 = (undefined8 *)
             FUN_032937ac(plVar5,*(long *)Method_Unity_VisualScripting_Multiply<Vector4>__ctor__,0);
LAB_06991538:
    plVar5 = (long *)(*(code *)*puVar6)(plVar5,puVar6[1]);
    puVar3 = Method_Meta_Voice_NLPRequestEvents<VoiceServiceRequestEvent>__ctor__;
    puVar2 = Method_Unity_VisualScripting_MultiInputUnit<IDictionary>__ctor__;
    puVar1 = PTR_DAT_0727a180;
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_032d5ee8();
    }
    uVar13 = 0;
    do {
      lVar7 = *plVar5;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *(long *)puVar1) {
            puVar6 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_069915b4;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar6 = (undefined8 *)FUN_032937ac(plVar5,*(long *)puVar1,0);
LAB_069915b4:
      uVar8 = (*(code *)*puVar6)(plVar5,puVar6[1]);
      if ((uVar8 & 1) == 0) {
        if (plVar5 == (long *)0x0) goto LAB_0699178c;
        lVar7 = *plVar5;
        uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar8 == 0) goto LAB_06991764;
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        goto LAB_0699174c;
      }
      lVar7 = thunk_FUN_032a56a0(*(undefined8 *)
                                  Method_Meta_Voice_NLPRequest<VoiceServiceRequestEvent,_WitRequestOptions,_VoiceServiceRequestEvents,_VoiceServiceRequestResults>__ctor__
                                );
      FUN_059660a0(lVar7,0);
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_032d5ee8();
      }
      *(long *)(lVar7 + 0x18) = unaff_x19;
      thunk_FUN_0333a630();
      lVar10 = *plVar5;
      uVar8 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) ==
              *(long *)
               Method_Meta_Voice_NLPAudioRequestEvents<VoiceServiceRequestEvent>_get_OnFullResponse__
             ) {
            puVar6 = (undefined8 *)(lVar10 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_06991648;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar6 = (undefined8 *)
               FUN_032937ac(plVar5,*(long *)
                                    Method_Meta_Voice_NLPAudioRequestEvents<VoiceServiceRequestEvent>_get_OnFullResponse__
                            ,0);
LAB_06991648:
      lVar10 = (*(code *)*puVar6)(plVar5,puVar6[1]);
      plVar12 = (long *)(lVar7 + 0x10);
      *plVar12 = lVar10;
      thunk_FUN_0333a630(plVar12);
      if (*plVar12 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_032d5ee8();
      }
      FUN_068c1ba4(*plVar12,0);
      if (*plVar12 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_032d5ee8();
      }
      uVar11 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_07281cf0);
      Meta_WitAi_Json_WitResponseArray_<get_Childs>d__13__System_IDisposable_Dispose
                (uVar11,lVar7,*(undefined8 *)puVar3,0);
      lVar7 = FUN_069c1d68();
      if (*plVar12 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_032d5ee8();
      }
      uVar8 = FUN_068c2ce4(*plVar12,0);
      if ((uVar8 & 1) != 0) {
        if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_032d5ee8();
        }
        FUN_069c0af0(lVar7,0);
      }
      if (*in_stack_00000000 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_032d5ee8();
      }
      FUN_050f8b10(*in_stack_00000000,lVar7,*plVar12,*(undefined8 *)puVar2);
      if (*plVar12 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_032d5ee8();
      }
      uVar4 = FUN_068c24ac(*plVar12,0);
      uVar13 = uVar13 | uVar4;
    } while( true );
  }
  goto LAB_0699191c;
  while( true ) {
    uVar8 = uVar8 - 1;
    piVar9 = piVar9 + 4;
    if (uVar8 == 0) break;
LAB_0699174c:
    if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_07279f60) {
      puVar6 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
      goto LAB_06991780;
    }
  }
LAB_06991764:
  puVar6 = (undefined8 *)FUN_032937ac(plVar5,*(long *)PTR_DAT_07279f60,0);
LAB_06991780:
  (*(code *)*puVar6)(plVar5,puVar6[1]);
LAB_0699178c:
  if ((uVar13 & 1) == 0) {
    return;
  }
  lVar7 = FUN_069c1b70();
  if (lVar7 != 0) {
    lVar7 = FUN_069a7858(lVar7,0);
    plVar5 = (long *)(unaff_x19 + 0xa0);
    *plVar5 = lVar7;
    thunk_FUN_0333a630(plVar5,lVar7);
    lVar7 = *plVar5;
    uVar11 = *(undefined8 *)(unaff_x19 + 0x90);
    if (*(int *)(*(long *)PTR_DAT_07280330 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
    }
    uVar11 = FUN_06951e18(uVar11,0);
    if (lVar7 != 0) {
      FUN_069bef74(lVar7,uVar11,0);
      if ((*in_stack_00000000 != 0) &&
         (lVar7 = FUN_050f87f0(*in_stack_00000000,
                               *(undefined8 *)
                                Method_Unity_VisualScripting_MultiInputUnit<IDictionary>_get_multiInputs__
                              ), lVar7 != 0)) {
        FUN_03f962e0(&stack0x00000008,lVar7,
                     *(undefined8 *)
                      Method_Meta_Voice_NLPAudioRequestEvents<VoiceServiceRequestEvent>_get_OnPartialResponse__
                    );
        puVar2 = Method_Unity_VisualScripting_MultiInputUnit<object>_InputsAllowNull__;
        puVar1 = Method_Unity_VisualScripting_MultiInputUnit<IDictionary>_Definition__;
        in_stack_00000028 = in_stack_00000010;
        in_stack_00000020 = in_stack_00000008;
        in_stack_00000030 = in_stack_00000018;
        while( true ) {
          uVar8 = FUN_05391e8c(&stack0x00000020,*(undefined8 *)puVar2);
          if ((uVar8 & 1) == 0) {
            FUN_05391e88(&stack0x00000020,
                         *(undefined8 *)
                          Method_Unity_VisualScripting_MultiInputUnit<object>_Definition__);
            return;
          }
          if (*in_stack_00000000 == 0) break;
          lVar7 = FUN_050f8a90(*in_stack_00000000,in_stack_00000030,*(undefined8 *)puVar1);
          if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_032d5ee8();
          }
          uVar8 = FUN_068c24ac(lVar7,0);
          if ((uVar8 & 1) != 0) {
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


