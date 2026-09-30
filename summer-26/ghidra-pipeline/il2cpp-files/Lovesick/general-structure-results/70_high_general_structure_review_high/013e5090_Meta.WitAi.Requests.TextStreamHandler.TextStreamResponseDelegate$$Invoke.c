/*
FUNCTION_NAME: Meta.WitAi.Requests.TextStreamHandler.TextStreamResponseDelegate$$Invoke
ENTRY_POINT: 013e5090
PROGRAM: Lovesick-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;ui_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_21;ray_or_cast_sink_hits_2;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_6;frame_or_lifecycle_behavior;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void Meta_WitAi_Requests_TextStreamHandler_TextStreamResponseDelegate__Invoke(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long *plVar8;
  undefined8 uVar9;
  uint uVar10;
  long unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  ulong unaff_x22;
  long *unaff_x24;
  long *unaff_x26;
  long unaff_x27;
  long *unaff_x28;
  undefined8 *unaff_x29;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined4 uStack0000000000000038;
  undefined4 uStack000000000000003c;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  long in_stack_00000068;
  
  while (lVar5 = thunk_FUN_00d6225c(unaff_x27,*(undefined8 *)(*unaff_x26 + 0x40)),
        plVar8 = unaff_x24, lVar5 != 0) {
    do {
      uVar10 = *(uint *)(unaff_x26 + 3);
      if (uVar10 < 10) {
LAB_013e5508:
                    /* WARNING: Subroutine does not return */
        FUN_00da5194();
      }
      unaff_x26[0xd] = unaff_x27;
      if (*unaff_x21 != 0) {
        lVar5 = thunk_FUN_00d6225c(*unaff_x21,*(undefined8 *)(*unaff_x26 + 0x40));
        if (lVar5 == 0) goto LAB_013e550c;
        uVar10 = *(uint *)(unaff_x26 + 3);
      }
      if (uVar10 < 0xb) goto LAB_013e5508;
      unaff_x26[0xe] = *unaff_x21;
      lVar5 = *(long *)(unaff_x19 + 0x38);
      if (lVar5 == 0) goto LAB_013e5504;
      if (*(uint *)(lVar5 + 0x18) <= unaff_x22) goto LAB_013e5508;
      lVar5 = lVar5 + unaff_x22 * 0x10;
      in_stack_00000028 = *(undefined8 *)(lVar5 + 0x28);
      in_stack_00000020 = *(undefined8 *)(lVar5 + 0x20);
      lVar5 = FUN_02688894(&stack0x00000020,0);
      if ((lVar5 != 0) &&
         (lVar6 = thunk_FUN_00d6225c(lVar5,*(undefined8 *)(*unaff_x26 + 0x40)), lVar6 == 0))
      goto LAB_013e550c;
      uVar10 = *(uint *)(unaff_x26 + 3);
      if (uVar10 < 0xc) goto LAB_013e5508;
      unaff_x26[0xf] = lVar5;
      if (*unaff_x28 != 0) {
        lVar5 = thunk_FUN_00d6225c(*unaff_x28,*(undefined8 *)(*unaff_x26 + 0x40));
        if (lVar5 == 0) goto LAB_013e550c;
        uVar10 = *(uint *)(unaff_x26 + 3);
      }
      if (uVar10 < 0xd) goto LAB_013e5508;
      unaff_x26[0x10] = *unaff_x28;
      lVar5 = FUN_0176eb1c();
      if ((lVar5 != 0) &&
         (lVar6 = thunk_FUN_00d6225c(lVar5,*(undefined8 *)(*unaff_x26 + 0x40)), lVar6 == 0))
      goto LAB_013e550c;
      if (*(uint *)(unaff_x26 + 3) < 0xe) goto LAB_013e5508;
      unaff_x26[0x11] = lVar5;
      uVar7 = FUN_01600844(unaff_x26,0);
      if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
        thunk_FUN_00d32864(*(long *)StringLiteral_302);
      }
      FUN_02660dac(uVar7,0);
      do {
        do {
          if (*(long *)(unaff_x19 + 0x40) == 0) goto LAB_013e5504;
          FUN_0132138c(*(long *)(unaff_x19 + 0x40),unaff_x22 & 0xffffffff,&stack0x00000068,
                       *unaff_x29);
          if ((((*(long *)(unaff_x19 + 0x40) == 0) ||
               (FUN_0132138c(*(long *)(unaff_x19 + 0x40),unaff_x22 & 0xffffffff,&stack0x00000068,
                             *unaff_x29), in_stack_00000068 == 0)) ||
              (*(long *)(unaff_x19 + 0x40) == 0)) ||
             ((FUN_0132138c(*(long *)(unaff_x19 + 0x40),unaff_x22 & 0xffffffff,&stack0x00000068,
                            *unaff_x29), in_stack_00000068 == 0 ||
              (*(long *)(unaff_x19 + 0x38) == 0)))) goto LAB_013e5504;
          if (*(uint *)(*(long *)(unaff_x19 + 0x38) + 0x18) <= unaff_x22) goto LAB_013e5508;
          Meta_WitAi_Requests_VRequest__remove_OnDownloadProgress();
          unaff_x22 = unaff_x22 + 1;
          if (*(long *)(unaff_x19 + 0x38) == 0) goto LAB_013e5504;
          if ((long)*(int *)(*(long *)(unaff_x19 + 0x38) + 0x18) <= (long)unaff_x22) {
            FUN_02040968(in_stack_00000010,0);
            FUN_02040900(in_stack_00000010,0);
            if (3 < *(int *)(unaff_x19 + 0x10)) {
              in_stack_00000018 = FUN_020407b0(in_stack_00000010,0);
              uVar7 = FUN_01770034(&stack0x00000018,*(undefined8 *)StringLiteral_12992,0);
              uVar7 = FUN_015f5b28(*(undefined8 *)
                                    Method_System_Collections_Generic_List_Enumerator<GUILayoutEntry>_get_Current__
                                   ,uVar7,0);
              if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
                thunk_FUN_00d32864(*(long *)StringLiteral_302);
              }
              FUN_02660dac(uVar7,0);
              if (3 < *(int *)(unaff_x19 + 0x10)) {
                plVar8 = *(long **)(unaff_x19 + 0x20);
                if (plVar8 == (long *)0x0) goto LAB_013e5504;
                in_stack_00000060._4_4_ =
                     (**(code **)(*plVar8 + 0x188))(plVar8,*(undefined8 *)(*plVar8 + 400));
                uVar7 = FUN_0176eb1c((long)&stack0x00000060 + 4,0);
                plVar8 = *(long **)(unaff_x19 + 0x20);
                if (plVar8 == (long *)0x0) goto LAB_013e5504;
                in_stack_00000060._4_4_ =
                     (**(code **)(*plVar8 + 0x1a8))(plVar8,*(undefined8 *)(*plVar8 + 0x1b0));
                uVar9 = FUN_0176eb1c((long)&stack0x00000060 + 4,0);
                uVar7 = FUN_0160073c(*(undefined8 *)
                                      Method_FullSerializer_fsBaseConverter_SerializeMember<RectOffset>__
                                     ,uVar7,*(undefined8 *)
                                             Sirenix_OdinInspector_SelfValidationResultItemExtensions_<>c__DisplayClass6_0_TypeInfo
                                     ,uVar9,0);
                if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
                  thunk_FUN_00d32864(*(long *)StringLiteral_302);
                }
                FUN_02660dac(uVar7,0);
              }
            }
            plVar8 = *(long **)(unaff_x19 + 0x20);
            if (plVar8 != (long *)0x0) {
              uVar1 = (**(code **)(*plVar8 + 0x188))(plVar8,*(undefined8 *)(*plVar8 + 400));
              plVar8 = *(long **)(unaff_x19 + 0x20);
              if (plVar8 != (long *)0x0) {
                uVar2 = (**(code **)(*plVar8 + 0x1a8))(plVar8,*(undefined8 *)(*plVar8 + 0x1b0));
                lVar5 = thunk_FUN_00d62348(*(undefined8 *)
                                            SpaceShipCommunicationModule_<ScrambleHint>d__14_TypeInfo
                                          );
                if (lVar5 != 0) {
                  FUN_02671b60(lVar5,uVar1,uVar2,5,1,0,0);
                  FUN_013e663c(*(undefined8 *)(unaff_x19 + 0x20),in_stack_00000008._4_4_ & 1,0,
                               *(undefined4 *)(unaff_x19 + 0x10),lVar5);
                  if (*(long *)(unaff_x19 + 0x28) != 0) {
                    FUN_02684a90(*(long *)(unaff_x19 + 0x28),0,0);
                    *(long *)(unaff_x19 + 0x60) = lVar5;
                    if (3 < *(int *)(unaff_x19 + 0x10)) {
                      in_stack_00000018 = FUN_020407b0(in_stack_00000010,0);
                      uVar7 = FUN_01770034(&stack0x00000018,*(undefined8 *)StringLiteral_12992,0);
                      uVar7 = FUN_015f5b28(*(undefined8 *)
                                            UnityEngine_EventSystems_OVRPhysicsRaycaster_<>c_TypeInfo
                                           ,uVar7,0);
                      if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
                        thunk_FUN_00d32864(*(long *)StringLiteral_302);
                      }
                      FUN_02660dac(uVar7,0);
                    }
                    return;
                  }
                }
              }
            }
            goto LAB_013e5504;
          }
          if (((*(long *)(unaff_x19 + 0x40) == 0) ||
              (FUN_0132138c(*(long *)(unaff_x19 + 0x40),unaff_x22 & 0xffffffff,&stack0x00000068,
                            *unaff_x29), in_stack_00000068 == 0)) ||
             (lVar5 = *(long *)(in_stack_00000068 + 0x10), lVar5 == 0)) goto LAB_013e5504;
          if (*(uint *)(lVar5 + 0x18) <= *(uint *)(unaff_x19 + 0x48)) goto LAB_013e5508;
          lVar5 = *(long *)(lVar5 + (long)(int)*(uint *)(unaff_x19 + 0x48) * 8 + 0x20);
          if (lVar5 == 0) goto LAB_013e5504;
          unaff_x24 = (long *)FUN_01443ffc(lVar5,0);
        } while (*(int *)(unaff_x19 + 0x10) < 5);
        if (*(int *)(*(long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                    + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar3 = FUN_02681b9c(unaff_x24,0,0);
      } while ((uVar3 & 1) == 0);
      unaff_x26 = (long *)FUN_00da4fb8(*(undefined8 *)PTR_DAT_033ea8a0,0xe);
      if (unaff_x26 == (long *)0x0) {
LAB_013e5504:
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      if ((*(long *)Mono_Security_Interface_TlsProtocols_TypeInfo != 0) &&
         (lVar6 = thunk_FUN_00d6225c(*(long *)Mono_Security_Interface_TlsProtocols_TypeInfo,
                                     *(undefined8 *)(*unaff_x26 + 0x40)), lVar6 == 0))
      goto LAB_013e550c;
      if ((int)unaff_x26[3] == 0) goto LAB_013e5508;
      if (unaff_x24 != (long *)0x0) {
        plVar8 = unaff_x24;
      }
      unaff_x26[4] = *(long *)Mono_Security_Interface_TlsProtocols_TypeInfo;
      if (unaff_x24 == (long *)0x0) {
        lVar6 = 0;
      }
      else {
        if (plVar8 == (long *)0x0) goto LAB_013e5504;
        lVar6 = (**(code **)(*plVar8 + 0x168))(plVar8,*(undefined8 *)(*plVar8 + 0x170));
        if ((lVar6 != 0) &&
           (lVar4 = thunk_FUN_00d6225c(lVar6,*(undefined8 *)(*unaff_x26 + 0x40)), lVar4 == 0))
        goto LAB_013e550c;
      }
      uVar10 = *(uint *)(unaff_x26 + 3);
      if (uVar10 < 2) goto LAB_013e5508;
      unaff_x26[5] = lVar6;
      if (*(long *)StringLiteral_14250 != 0) {
        lVar6 = thunk_FUN_00d6225c(*(long *)StringLiteral_14250,*(undefined8 *)(*unaff_x26 + 0x40));
        if (lVar6 == 0) goto LAB_013e550c;
        uVar10 = *(uint *)(unaff_x26 + 3);
      }
      if (uVar10 < 3) goto LAB_013e5508;
      unaff_x26[6] = *(long *)StringLiteral_14250;
      if (unaff_x24 == (long *)0x0) goto LAB_013e5504;
      in_stack_00000060._4_4_ =
           (**(code **)(*unaff_x24 + 0x188))(unaff_x24,*(undefined8 *)(*unaff_x24 + 400));
      lVar6 = FUN_0176eb1c((long)&stack0x00000060 + 4,0);
      if ((lVar6 != 0) &&
         (lVar4 = thunk_FUN_00d6225c(lVar6,*(undefined8 *)(*unaff_x26 + 0x40)), lVar4 == 0))
      goto LAB_013e550c;
      uVar10 = *(uint *)(unaff_x26 + 3);
      if (uVar10 < 4) goto LAB_013e5508;
      unaff_x26[7] = lVar6;
      if (*(long *)Method_MedleyBossPushPhase_StartPhase__ != 0) {
        lVar6 = thunk_FUN_00d6225c(*(long *)Method_MedleyBossPushPhase_StartPhase__,
                                   *(undefined8 *)(*unaff_x26 + 0x40));
        if (lVar6 == 0) goto LAB_013e550c;
        uVar10 = *(uint *)(unaff_x26 + 3);
      }
      if (uVar10 < 5) goto LAB_013e5508;
      unaff_x26[8] = *(long *)Method_MedleyBossPushPhase_StartPhase__;
      in_stack_00000060._4_4_ =
           (**(code **)(*unaff_x24 + 0x1a8))(unaff_x24,*(undefined8 *)(*unaff_x24 + 0x1b0));
      lVar6 = FUN_0176eb1c((long)&stack0x00000060 + 4,0);
      if ((lVar6 != 0) &&
         (lVar4 = thunk_FUN_00d6225c(lVar6,*(undefined8 *)(*unaff_x26 + 0x40)), lVar4 == 0))
      goto LAB_013e550c;
      uVar10 = *(uint *)(unaff_x26 + 3);
      if (uVar10 < 6) goto LAB_013e5508;
      unaff_x26[9] = lVar6;
      if (*(long *)
           Method_System_Collections_Generic_Dictionary<int,_ListLayoutEase_ListElementEase>_Add__
          != 0) {
        lVar6 = thunk_FUN_00d6225c(*(long *)
                                    Method_System_Collections_Generic_Dictionary<int,_ListLayoutEase_ListElementEase>_Add__
                                   ,*(undefined8 *)(*unaff_x26 + 0x40));
        if (lVar6 == 0) goto LAB_013e550c;
        uVar10 = *(uint *)(unaff_x26 + 3);
      }
      if (uVar10 < 7) goto LAB_013e5508;
      unaff_x26[10] =
           *(long *)
            Method_System_Collections_Generic_Dictionary<int,_ListLayoutEase_ListElementEase>_Add__;
      in_stack_00000048 = *(undefined8 *)(lVar5 + 0x48);
      uVar7 = *(undefined8 *)(lVar5 + 0x40);
      in_stack_00000058 = *(undefined8 *)(lVar5 + 0x58);
      in_stack_00000050 = *(undefined8 *)(lVar5 + 0x50);
      in_stack_00000040 = uVar7;
      uStack0000000000000038 = FUN_01431600(&stack0x00000040,0);
      uStack000000000000003c = (undefined4)uVar7;
      lVar6 = FUN_0269109c(&stack0x00000038,0);
      if ((lVar6 != 0) &&
         (lVar4 = thunk_FUN_00d6225c(lVar6,*(undefined8 *)(*unaff_x26 + 0x40)), lVar4 == 0))
      goto LAB_013e550c;
      uVar10 = *(uint *)(unaff_x26 + 3);
      if (uVar10 < 8) goto LAB_013e5508;
      unaff_x26[0xb] = lVar6;
      if (*unaff_x20 != 0) {
        lVar6 = thunk_FUN_00d6225c(*unaff_x20,*(undefined8 *)(*unaff_x26 + 0x40));
        if (lVar6 == 0) goto LAB_013e550c;
        uVar10 = *(uint *)(unaff_x26 + 3);
      }
      if (uVar10 < 9) goto LAB_013e5508;
      unaff_x26[0xc] = *unaff_x20;
      in_stack_00000048 = *(undefined8 *)(lVar5 + 0x48);
      uVar7 = *(undefined8 *)(lVar5 + 0x40);
      in_stack_00000058 = *(undefined8 *)(lVar5 + 0x58);
      in_stack_00000050 = *(undefined8 *)(lVar5 + 0x50);
      in_stack_00000040 = uVar7;
      uStack0000000000000038 = FUN_01431624(&stack0x00000040,0);
      uStack000000000000003c = (undefined4)uVar7;
      unaff_x27 = FUN_0269109c(&stack0x00000038,0);
      plVar8 = unaff_x24;
    } while (unaff_x27 == 0);
  }
LAB_013e550c:
  uVar7 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
  FUN_00da5038(uVar7,0);
}


