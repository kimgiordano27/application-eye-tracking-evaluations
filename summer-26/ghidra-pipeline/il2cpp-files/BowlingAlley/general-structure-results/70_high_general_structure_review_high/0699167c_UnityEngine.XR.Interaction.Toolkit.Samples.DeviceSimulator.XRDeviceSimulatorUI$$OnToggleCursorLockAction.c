/*
FUNCTION_NAME: UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorUI$$OnToggleCursorLockAction
ENTRY_POINT: 0699167c
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_16;strong_pose_or_ray_construction_hits_1;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_9;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


/* WARNING: Removing unreachable block (ram,0x06991798) */
/* WARNING: Removing unreachable block (ram,0x06991924) */

void UnityEngine_XR_Interaction_Toolkit_Samples_DeviceSimulator_XRDeviceSimulatorUI__OnToggleCursorLockAction
               (long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long unaff_x19;
  undefined8 *unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  long *plVar9;
  long *unaff_x23;
  uint unaff_w27;
  undefined8 *unaff_x28;
  long *unaff_x29;
  long *in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  
  do {
    if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_032d5ee8();
    }
    uVar5 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_07281cf0);
    Meta_WitAi_Json_WitResponseArray_<get_Childs>d__13__System_IDisposable_Dispose
              (uVar5,unaff_x22,*unaff_x20,0);
    lVar6 = FUN_069c1d68();
    if (*unaff_x23 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_032d5ee8();
    }
    uVar7 = FUN_068c2ce4(*unaff_x23,0);
    if ((uVar7 & 1) != 0) {
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_032d5ee8();
      }
      FUN_069c0af0(lVar6,0);
    }
    if (*in_stack_00000000 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_032d5ee8();
    }
    FUN_050f8b10(*in_stack_00000000,lVar6,*unaff_x23,*unaff_x28);
    if (*unaff_x23 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_032d5ee8();
    }
    uVar3 = FUN_068c24ac(*unaff_x23,0);
    unaff_w27 = unaff_w27 | uVar3;
    lVar6 = *unaff_x21;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *unaff_x29) {
          puVar4 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_069915b4;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined8 *)FUN_032937ac();
LAB_069915b4:
    uVar7 = (*(code *)*puVar4)();
    if ((uVar7 & 1) == 0) {
      if (unaff_x21 == (long *)0x0) goto LAB_0699178c;
      lVar6 = *unaff_x21;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 == 0) goto LAB_06991764;
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      break;
    }
    unaff_x22 = thunk_FUN_032a56a0(*(undefined8 *)
                                    Method_Meta_Voice_NLPRequest<VoiceServiceRequestEvent,_WitRequestOptions,_VoiceServiceRequestEvents,_VoiceServiceRequestResults>__ctor__
                                  );
    FUN_059660a0(unaff_x22,0);
    if (unaff_x22 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_032d5ee8();
    }
    *(long *)(unaff_x22 + 0x18) = unaff_x19;
    thunk_FUN_0333a630();
    lVar6 = *unaff_x21;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) ==
            *(long *)
             Method_Meta_Voice_NLPAudioRequestEvents<VoiceServiceRequestEvent>_get_OnFullResponse__)
        {
          puVar4 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_06991648;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined8 *)FUN_032937ac();
LAB_06991648:
    lVar6 = (*(code *)*puVar4)();
    unaff_x23 = (long *)(unaff_x22 + 0x10);
    *unaff_x23 = lVar6;
    thunk_FUN_0333a630(unaff_x23);
    if (*unaff_x23 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_032d5ee8();
    }
    FUN_068c1ba4(*unaff_x23,0);
    param_1 = *unaff_x23;
  } while( true );
  while( true ) {
    uVar7 = uVar7 - 1;
    piVar8 = piVar8 + 4;
    if (uVar7 == 0) break;
    if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_07279f60) {
      puVar4 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
      goto LAB_06991780;
    }
  }
LAB_06991764:
  puVar4 = (undefined8 *)FUN_032937ac();
LAB_06991780:
  (*(code *)*puVar4)();
LAB_0699178c:
  if ((unaff_w27 & 1) == 0) {
    return;
  }
  lVar6 = FUN_069c1b70();
  if (lVar6 != 0) {
    lVar6 = FUN_069a7858(lVar6,0);
    plVar9 = (long *)(unaff_x19 + 0xa0);
    *plVar9 = lVar6;
    thunk_FUN_0333a630(plVar9,lVar6);
    lVar6 = *plVar9;
    uVar5 = *(undefined8 *)(unaff_x19 + 0x90);
    if (*(int *)(*(long *)PTR_DAT_07280330 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
    }
    uVar5 = FUN_06951e18(uVar5,0);
    if (lVar6 != 0) {
      FUN_069bef74(lVar6,uVar5,0);
      if ((*in_stack_00000000 != 0) &&
         (lVar6 = FUN_050f87f0(*in_stack_00000000,
                               *(undefined8 *)
                                Method_Unity_VisualScripting_MultiInputUnit<IDictionary>_get_multiInputs__
                              ), lVar6 != 0)) {
        FUN_03f962e0(&stack0x00000008,lVar6,
                     *(undefined8 *)
                      Method_Meta_Voice_NLPAudioRequestEvents<VoiceServiceRequestEvent>_get_OnPartialResponse__
                    );
        puVar2 = Method_Unity_VisualScripting_MultiInputUnit<object>_InputsAllowNull__;
        puVar1 = Method_Unity_VisualScripting_MultiInputUnit<IDictionary>_Definition__;
        in_stack_00000028 = in_stack_00000010;
        in_stack_00000020 = in_stack_00000008;
        in_stack_00000030 = in_stack_00000018;
        while( true ) {
          uVar7 = FUN_05391e8c(&stack0x00000020,*(undefined8 *)puVar2);
          if ((uVar7 & 1) == 0) {
            FUN_05391e88(&stack0x00000020,
                         *(undefined8 *)
                          Method_Unity_VisualScripting_MultiInputUnit<object>_Definition__);
            return;
          }
          if (*in_stack_00000000 == 0) break;
          lVar6 = FUN_050f8a90(*in_stack_00000000,in_stack_00000030,*(undefined8 *)puVar1);
          if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_032d5ee8();
          }
          uVar7 = FUN_068c24ac(lVar6,0);
          if ((uVar7 & 1) != 0) {
            thunk_FUN_069c69a4();
          }
        }
                    /* WARNING: Subroutine does not return */
        FUN_032d5ee8();
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


