/*
FUNCTION_NAME: FUN_06990f94
ENTRY_POINT: 06990f94
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_9;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_15;paired_field_refs_with_structure_only;telemetry_or_network_hits_21;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


/* WARNING: Removing unreachable block (ram,0x06991798) */
/* WARNING: Removing unreachable block (ram,0x06991924) */

void FUN_06990f94(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  uint uVar6;
  long lVar7;
  undefined8 uVar8;
  long *plVar9;
  undefined8 *puVar10;
  ulong uVar11;
  int *piVar12;
  long *plVar13;
  long lVar14;
  undefined8 uVar15;
  long *plVar16;
  undefined8 uVar17;
  uint uVar18;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  puVar2 = Method_Unity_VisualScripting_MoveTowards<Vector4>__ctor__;
  puVar1 = Method_Unity_VisualScripting_MoveTowards<Vector3>__ctor__;
  if ((DAT_076e1d88 & 1) == 0) {
    thunk_FUN_032e1da0(Method_Unity_VisualScripting_MultiInputUnit<IDictionary>__ctor__);
    thunk_FUN_032e1da0(Method_Unity_VisualScripting_MoveTowards<Vector4>__ctor__);
    thunk_FUN_032e1da0(Method_Unity_VisualScripting_MultiInputUnit<IDictionary>_Definition__);
    thunk_FUN_032e1da0(Method_Unity_VisualScripting_MultiInputUnit<IDictionary>_get_multiInputs__);
    thunk_FUN_032e1da0(Method_Unity_VisualScripting_MoveTowards<Vector3>__ctor__);
    thunk_FUN_032e1da0(Method_Unity_VisualScripting_MultiInputUnit<IEnumerable>__ctor__);
    thunk_FUN_032e1da0(Method_Unity_VisualScripting_MultiInputUnit<IEnumerable>_Definition__);
    thunk_FUN_032e1da0(Method_Unity_VisualScripting_MultiInputUnit<IEnumerable>_get_multiInputs__);
    thunk_FUN_032e1da0(PTR_DAT_0729ef58);
    thunk_FUN_032e1da0(Method_Unity_VisualScripting_MultiInputUnit<object>__ctor__);
    thunk_FUN_032e1da0(Method_Unity_VisualScripting_MultiInputUnit<object>_Definition__);
    thunk_FUN_032e1da0(Method_Unity_VisualScripting_MultiInputUnit<object>_InputsAllowNull__);
    thunk_FUN_032e1da0(Method_Unity_VisualScripting_MultiInputUnit<object>_get_inputCount__);
    thunk_FUN_032e1da0(Method_Unity_VisualScripting_MultiInputUnit<object>_get_multiInputs__);
    thunk_FUN_032e1da0(Method_Unity_VisualScripting_MultiInputUnit<object>_set_inputCount__);
    thunk_FUN_032e1da0(Method_Unity_VisualScripting_Multiply<object>__ctor__);
    thunk_FUN_032e1da0(PTR_DAT_0728ca60);
    thunk_FUN_032e1da0(Method_Unity_VisualScripting_Multiply<float>__ctor__);
    thunk_FUN_032e1da0(Method_Unity_VisualScripting_Multiply<Vector2>__ctor__);
    thunk_FUN_032e1da0(PTR_DAT_07281cf0);
    thunk_FUN_032e1da0(Method_Unity_VisualScripting_Multiply<Vector3>__ctor__);
    thunk_FUN_032e1da0(PTR_DAT_07279f60);
    thunk_FUN_032e1da0(Method_Unity_VisualScripting_Multiply<Vector4>__ctor__);
    thunk_FUN_032e1da0(
                      Method_Meta_Voice_NLPAudioRequestEvents<VoiceServiceRequestEvent>_get_OnFullResponse__
                      );
    thunk_FUN_032e1da0(PTR_DAT_0727a180);
    thunk_FUN_032e1da0(
                      Method_Meta_Voice_NLPAudioRequestEvents<VoiceServiceRequestEvent>_get_OnPartialResponse__
                      );
    thunk_FUN_032e1da0(
                      Method_Meta_Voice_NLPAudioRequest<VoiceServiceRequestEvent,_WitRequestOptions,_VoiceServiceRequestEvents,_VoiceServiceRequestResults>_HandleFinalNlpResponse__
                      );
    thunk_FUN_032e1da0(PTR_DAT_07280330);
    thunk_FUN_032e1da0(
                      Method_Meta_Voice_NLPAudioRequest<VoiceServiceRequestEvent,_WitRequestOptions,_VoiceServiceRequestEvents,_VoiceServiceRequestResults>_OnFullResponse__
                      );
    thunk_FUN_032e1da0(
                      Method_Meta_Voice_NLPAudioRequest<VoiceServiceRequestEvent,_WitRequestOptions,_VoiceServiceRequestEvents,_VoiceServiceRequestResults>_OnInit__
                      );
    thunk_FUN_032e1da0(
                      Method_Meta_Voice_NLPAudioRequest<VoiceServiceRequestEvent,_WitRequestOptions,_VoiceServiceRequestEvents,_VoiceServiceRequestResults>_OnPartialResponse__
                      );
    thunk_FUN_032e1da0(
                      Method_Meta_Voice_NLPAudioRequest<VoiceServiceRequestEvent,_WitRequestOptions,_VoiceServiceRequestEvents,_VoiceServiceRequestResults>_get_ResponseData__
                      );
    thunk_FUN_032e1da0(Method_Meta_Voice_NLPRequestEvents<VoiceServiceRequestEvent>__ctor__);
    thunk_FUN_032e1da0(
                      Method_Meta_Voice_NLPRequest<VoiceServiceRequestEvent,_WitRequestOptions,_VoiceServiceRequestEvents,_VoiceServiceRequestResults>__ctor__
                      );
    thunk_FUN_032e1da0(
                      Method_Meta_Voice_NLPRequest<VoiceServiceRequestEvent,_WitRequestOptions,_VoiceServiceRequestEvents,_VoiceServiceRequestResults>_GetSendError__
                      );
    thunk_FUN_032e1da0(PTR_DAT_07282688);
    DAT_076e1d88 = 1;
  }
  local_80 = 0;
  uStack_78 = 0;
  local_70 = 0;
  lVar7 = thunk_FUN_032a56a0(*(undefined8 *)puVar1);
  FUN_050f8160(lVar7,*(undefined8 *)puVar2);
  plVar13 = (long *)(param_1 + 0xa8);
  *plVar13 = lVar7;
  thunk_FUN_0333a630(plVar13,lVar7);
  puVar1 = 
  Method_Meta_Voice_NLPRequest<VoiceServiceRequestEvent,_WitRequestOptions,_VoiceServiceRequestEvents,_VoiceServiceRequestResults>_GetSendError__
  ;
  if (*(long *)(param_1 + 0x90) != 0) {
    uVar8 = FUN_0593db18(*(long *)(param_1 + 0x90),0);
    lVar7 = *(long *)puVar1;
    if (*(int *)(lVar7 + 0xe0) == 0) {
      thunk_FUN_032cd7c0(lVar7);
      lVar7 = *(long *)puVar1;
    }
    puVar5 = Method_Unity_VisualScripting_Multiply<object>__ctor__;
    puVar4 = Method_Unity_VisualScripting_MultiInputUnit<object>_set_inputCount__;
    puVar3 = Method_Unity_VisualScripting_MultiInputUnit<IEnumerable>_Definition__;
    puVar2 = PTR_DAT_0729ef58;
    lVar14 = *(long *)(*(long *)(lVar7 + 0xb8) + 8);
    if (lVar14 == 0) {
      if (*(int *)(lVar7 + 0xe0) == 0) {
        thunk_FUN_032cd7c0(lVar7);
        lVar7 = *(long *)puVar1;
      }
      uVar15 = **(undefined8 **)(lVar7 + 0xb8);
      lVar14 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_0728ca60);
      FUN_055d2e5c(lVar14,uVar15,
                   *(undefined8 *)
                    Method_Meta_Voice_NLPAudioRequest<VoiceServiceRequestEvent,_WitRequestOptions,_VoiceServiceRequestEvents,_VoiceServiceRequestResults>_OnFullResponse__
                   ,0);
      plVar9 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 8);
      *plVar9 = lVar14;
      thunk_FUN_0333a630(plVar9,lVar14);
    }
    uVar8 = FUN_039a8198(uVar8,lVar14,*(undefined8 *)puVar2);
    uVar15 = thunk_FUN_032a56a0(*(undefined8 *)puVar5);
    Meta_WitAi_Json_WitResponseArray_<get_Childs>d__13__System_IDisposable_Dispose
              (uVar15,param_1,*(undefined8 *)puVar4,0);
    uVar8 = FUN_0399a7bc(uVar8,uVar15,*(undefined8 *)puVar3);
    lVar7 = *(long *)puVar1;
    if (*(int *)(lVar7 + 0xe0) == 0) {
      thunk_FUN_032cd7c0(lVar7);
      lVar7 = *(long *)puVar1;
    }
    puVar5 = 
    Method_Meta_Voice_NLPAudioRequest<VoiceServiceRequestEvent,_WitRequestOptions,_VoiceServiceRequestEvents,_VoiceServiceRequestResults>_HandleFinalNlpResponse__
    ;
    puVar4 = Method_Unity_VisualScripting_Multiply<float>__ctor__;
    puVar3 = Method_Unity_VisualScripting_MultiInputUnit<object>_get_multiInputs__;
    puVar2 = Method_Unity_VisualScripting_MultiInputUnit<object>__ctor__;
    lVar14 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x10);
    if (lVar14 == 0) {
      if (*(int *)(lVar7 + 0xe0) == 0) {
        thunk_FUN_032cd7c0(lVar7);
        lVar7 = *(long *)puVar1;
      }
      uVar15 = **(undefined8 **)(lVar7 + 0xb8);
      lVar14 = thunk_FUN_032a56a0(*(undefined8 *)
                                   Method_Unity_VisualScripting_Multiply<Vector3>__ctor__);
      Meta_WitAi_Json_WitResponseArray_<get_Childs>d__13__System_IDisposable_Dispose
                (lVar14,uVar15,
                 *(undefined8 *)
                  Method_Meta_Voice_NLPAudioRequest<VoiceServiceRequestEvent,_WitRequestOptions,_VoiceServiceRequestEvents,_VoiceServiceRequestResults>_OnInit__
                 ,0);
      plVar9 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x10);
      *plVar9 = lVar14;
      thunk_FUN_0333a630(plVar9,lVar14);
    }
    uVar8 = FUN_03a8f2bc(uVar8,lVar14,*(undefined8 *)puVar5);
    uVar15 = thunk_FUN_032a56a0(*(undefined8 *)puVar4);
    FUN_055d2e5c(uVar15,param_1,*(undefined8 *)puVar3,0);
    uVar8 = FUN_039a8198(uVar8,uVar15,*(undefined8 *)puVar2);
    lVar7 = *(long *)puVar1;
    if (*(int *)(lVar7 + 0xe0) == 0) {
      thunk_FUN_032cd7c0(lVar7);
      lVar7 = *(long *)puVar1;
    }
    puVar2 = Method_Unity_VisualScripting_MultiInputUnit<IEnumerable>__ctor__;
    lVar14 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x18);
    if (lVar14 == 0) {
      if (*(int *)(lVar7 + 0xe0) == 0) {
        thunk_FUN_032cd7c0(lVar7);
        lVar7 = *(long *)puVar1;
      }
      uVar15 = **(undefined8 **)(lVar7 + 0xb8);
      lVar14 = thunk_FUN_032a56a0(*(undefined8 *)
                                   Method_Unity_VisualScripting_Multiply<Vector2>__ctor__);
      FUN_055d3620(lVar14,uVar15,
                   *(undefined8 *)
                    Method_Meta_Voice_NLPAudioRequest<VoiceServiceRequestEvent,_WitRequestOptions,_VoiceServiceRequestEvents,_VoiceServiceRequestResults>_OnPartialResponse__
                   ,0);
      plVar9 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x18);
      *plVar9 = lVar14;
      thunk_FUN_0333a630(plVar9,lVar14);
    }
    uVar8 = FUN_0399592c(uVar8,lVar14,*(undefined8 *)puVar2);
    lVar7 = *(long *)puVar1;
    if (*(int *)(lVar7 + 0xe0) == 0) {
      thunk_FUN_032cd7c0(lVar7);
      lVar7 = *(long *)puVar1;
    }
    puVar2 = Method_Unity_VisualScripting_MultiInputUnit<IEnumerable>_get_multiInputs__;
    lVar14 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x20);
    if (lVar14 == 0) {
      if (*(int *)(lVar7 + 0xe0) == 0) {
        thunk_FUN_032cd7c0(lVar7);
        lVar7 = *(long *)puVar1;
      }
      uVar15 = **(undefined8 **)(lVar7 + 0xb8);
      lVar14 = thunk_FUN_032a56a0(*(undefined8 *)
                                   Method_Unity_VisualScripting_Multiply<Vector2>__ctor__);
      FUN_055d3620(lVar14,uVar15,
                   *(undefined8 *)
                    Method_Meta_Voice_NLPAudioRequest<VoiceServiceRequestEvent,_WitRequestOptions,_VoiceServiceRequestEvents,_VoiceServiceRequestResults>_get_ResponseData__
                   ,0);
      plVar9 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x20);
      *plVar9 = lVar14;
      thunk_FUN_0333a630(plVar9,lVar14);
    }
    plVar9 = (long *)FUN_039a3c74(uVar8,lVar14,*(undefined8 *)puVar2);
    if (plVar9 != (long *)0x0) {
      lVar7 = *plVar9;
      uVar11 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) ==
              *(long *)Method_Unity_VisualScripting_Multiply<Vector4>__ctor__) {
            puVar10 = (undefined8 *)(lVar7 + (long)*piVar12 * 0x10 + 0x138);
            goto LAB_06991538;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar10 = (undefined8 *)
                FUN_032937ac(plVar9,*(long *)Method_Unity_VisualScripting_Multiply<Vector4>__ctor__,
                             0);
LAB_06991538:
      plVar9 = (long *)(*(code *)*puVar10)(plVar9,puVar10[1]);
      puVar3 = Method_Meta_Voice_NLPRequestEvents<VoiceServiceRequestEvent>__ctor__;
      puVar2 = Method_Unity_VisualScripting_MultiInputUnit<IDictionary>__ctor__;
      puVar1 = PTR_DAT_0727a180;
      if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_032d5ee8();
      }
      uVar18 = 0;
      do {
        lVar7 = *plVar9;
        uVar11 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == *(long *)puVar1) {
              puVar10 = (undefined8 *)(lVar7 + (long)*piVar12 * 0x10 + 0x138);
              goto LAB_069915b4;
            }
            uVar11 = uVar11 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar11 != 0);
        }
        puVar10 = (undefined8 *)FUN_032937ac(plVar9,*(long *)puVar1,0);
LAB_069915b4:
        uVar11 = (*(code *)*puVar10)(plVar9,puVar10[1]);
        if ((uVar11 & 1) == 0) {
          if (plVar9 == (long *)0x0) goto LAB_0699178c;
          lVar7 = *plVar9;
          uVar11 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar11 == 0) goto LAB_06991764;
          piVar12 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
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
        *(long *)(lVar7 + 0x18) = param_1;
        thunk_FUN_0333a630((long *)(lVar7 + 0x18),param_1);
        lVar14 = *plVar9;
        uVar11 = (ulong)*(ushort *)(lVar14 + 0x12e);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) ==
                *(long *)
                 Method_Meta_Voice_NLPAudioRequestEvents<VoiceServiceRequestEvent>_get_OnFullResponse__
               ) {
              puVar10 = (undefined8 *)(lVar14 + (long)*piVar12 * 0x10 + 0x138);
              goto LAB_06991648;
            }
            uVar11 = uVar11 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar11 != 0);
        }
        puVar10 = (undefined8 *)
                  FUN_032937ac(plVar9,*(long *)
                                       Method_Meta_Voice_NLPAudioRequestEvents<VoiceServiceRequestEvent>_get_OnFullResponse__
                               ,0);
LAB_06991648:
        lVar14 = (*(code *)*puVar10)(plVar9,puVar10[1]);
        plVar16 = (long *)(lVar7 + 0x10);
        *plVar16 = lVar14;
        thunk_FUN_0333a630(plVar16);
        if (*plVar16 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_032d5ee8();
        }
        uVar8 = FUN_068c1ba4(*plVar16,0);
        if (*plVar16 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_032d5ee8();
        }
        uVar17 = *(undefined8 *)(*plVar16 + 0x10);
        uVar15 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_07281cf0);
        Meta_WitAi_Json_WitResponseArray_<get_Childs>d__13__System_IDisposable_Dispose
                  (uVar15,lVar7,*(undefined8 *)puVar3,0);
        lVar7 = FUN_069c1d68(param_1,uVar8,uVar17,uVar15,0);
        if (*plVar16 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_032d5ee8();
        }
        uVar11 = FUN_068c2ce4(*plVar16,0);
        if ((uVar11 & 1) != 0) {
          if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_032d5ee8();
          }
          FUN_069c0af0(lVar7,0);
        }
        if (*plVar13 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_032d5ee8();
        }
        FUN_050f8b10(*plVar13,lVar7,*plVar16,*(undefined8 *)puVar2);
        if (*plVar16 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_032d5ee8();
        }
        uVar6 = FUN_068c24ac(*plVar16,0);
        uVar18 = uVar18 | uVar6;
      } while( true );
    }
  }
  goto LAB_0699191c;
  while( true ) {
    uVar11 = uVar11 - 1;
    piVar12 = piVar12 + 4;
    if (uVar11 == 0) break;
LAB_0699174c:
    if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_07279f60) {
      puVar10 = (undefined8 *)(lVar7 + (long)*piVar12 * 0x10 + 0x138);
      goto LAB_06991780;
    }
  }
LAB_06991764:
  puVar10 = (undefined8 *)FUN_032937ac(plVar9,*(long *)PTR_DAT_07279f60,0);
LAB_06991780:
  (*(code *)*puVar10)(plVar9,puVar10[1]);
LAB_0699178c:
  if ((uVar18 & 1) == 0) {
    return;
  }
  lVar7 = FUN_069c1b70(param_1,*(undefined8 *)(param_1 + 0x90),*(undefined8 *)PTR_DAT_07282688,0);
  if (lVar7 != 0) {
    lVar7 = FUN_069a7858(lVar7,0);
    plVar9 = (long *)(param_1 + 0xa0);
    *plVar9 = lVar7;
    thunk_FUN_0333a630(plVar9,lVar7);
    lVar7 = *plVar9;
    uVar8 = *(undefined8 *)(param_1 + 0x90);
    if (*(int *)(*(long *)PTR_DAT_07280330 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
    }
    uVar8 = FUN_06951e18(uVar8,0);
    if (lVar7 != 0) {
      FUN_069bef74(lVar7,uVar8,0);
      if ((*plVar13 != 0) &&
         (lVar7 = FUN_050f87f0(*plVar13,*(undefined8 *)
                                         Method_Unity_VisualScripting_MultiInputUnit<IDictionary>_get_multiInputs__
                              ), lVar7 != 0)) {
        FUN_03f962e0(&local_98,lVar7,
                     *(undefined8 *)
                      Method_Meta_Voice_NLPAudioRequestEvents<VoiceServiceRequestEvent>_get_OnPartialResponse__
                    );
        puVar2 = Method_Unity_VisualScripting_MultiInputUnit<object>_InputsAllowNull__;
        puVar1 = Method_Unity_VisualScripting_MultiInputUnit<IDictionary>_Definition__;
        uStack_78 = uStack_90;
        local_80 = local_98;
        local_70 = local_88;
        while( true ) {
          uVar11 = FUN_05391e8c(&local_80,*(undefined8 *)puVar2);
          uVar8 = local_70;
          if ((uVar11 & 1) == 0) {
            FUN_05391e88(&local_80,
                         *(undefined8 *)
                          Method_Unity_VisualScripting_MultiInputUnit<object>_Definition__);
            return;
          }
          if (*plVar13 == 0) break;
          lVar7 = FUN_050f8a90(*plVar13,local_70,*(undefined8 *)puVar1);
          if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_032d5ee8();
          }
          uVar11 = FUN_068c24ac(lVar7,0);
          if ((uVar11 & 1) != 0) {
            thunk_FUN_069c69a4(param_1,*(undefined8 *)(param_1 + 0xa0),uVar8,0);
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


