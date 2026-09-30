/*
FUNCTION_NAME: Meta.WitAi.Requests.TextStreamHandler$$HandlePartial
ENTRY_POINT: 013e4ca4
PROGRAM: Lovesick-libil2cpp.so
SCORE: 85
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_21;ray_or_cast_sink_hits_2;telemetry_or_network_hits_6;frame_or_lifecycle_behavior
*/


void Meta_WitAi_Requests_TextStreamHandler__HandlePartial(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint uVar5;
  undefined4 uVar6;
  long lVar7;
  long *plVar8;
  ulong uVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  uint uVar15;
  long lVar16;
  long unaff_x19;
  long unaff_x20;
  ulong uVar17;
  long *plVar18;
  undefined4 uVar19;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined4 uStack0000000000000064;
  long in_stack_00000068;
  
  thunk_FUN_00d48444(Method_System_Collections_Generic_List_Enumerator<GUILayoutEntry>_get_Current__
                    );
  thunk_FUN_00d48444(Method_System_Collections_Generic_List<Variant>_get_Count__);
  *(undefined1 *)(unaff_x20 + 0x844) = 1;
  uStack0000000000000064 = 0;
  in_stack_00000038 = 0;
  in_stack_00000020 = 0;
  in_stack_00000028 = 0;
  in_stack_00000048 = 0;
  in_stack_00000040 = 0;
  in_stack_00000058 = 0;
  in_stack_00000050 = 0;
  in_stack_00000018 = 0;
  if (*(char *)(unaff_x19 + 0x36) == '\0') {
    return;
  }
  lVar7 = thunk_FUN_00d62348(*(undefined8 *)System_Nullable<short>_TypeInfo);
  if (lVar7 != 0) {
    FUN_02040640(lVar7,0);
    FUN_02040900(lVar7,0);
    uVar5 = FUN_013e5518(*(undefined4 *)(unaff_x19 + 0x10));
    puVar4 = Method_System_Collections_Generic_List<Variant>_get_Count__;
    puVar3 = Method_System_Collections_Generic_List<Edge>_ToArray__;
    puVar2 = Method_System_Collections_Generic_List<Camera>__ctor__;
    puVar1 = PTR_DAT_033ee2d8;
    lVar16 = *(long *)(unaff_x19 + 0x38);
    if (lVar16 != 0) {
      uVar17 = 0;
      plVar18 = (long *)0x0;
      while ((long)uVar17 < (long)*(int *)(lVar16 + 0x18)) {
        if (((*(long *)(unaff_x19 + 0x40) == 0) ||
            (FUN_0132138c(*(long *)(unaff_x19 + 0x40),uVar17 & 0xffffffff,&stack0x00000068,
                          *(undefined8 *)puVar1), in_stack_00000068 == 0)) ||
           (lVar16 = *(long *)(in_stack_00000068 + 0x10), lVar16 == 0)) goto LAB_013e5504;
        if (*(uint *)(lVar16 + 0x18) <= *(uint *)(unaff_x19 + 0x48)) goto LAB_013e5508;
        lVar16 = *(long *)(lVar16 + (long)(int)*(uint *)(unaff_x19 + 0x48) * 8 + 0x20);
        if (lVar16 == 0) goto LAB_013e5504;
        plVar8 = (long *)FUN_01443ffc(lVar16,0);
        if (4 < *(int *)(unaff_x19 + 0x10)) {
          if (*(int *)(*(long *)
                        System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo +
                      0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar9 = FUN_02681b9c(plVar8,0,0);
          if ((uVar9 & 1) != 0) {
            plVar10 = (long *)FUN_00da4fb8(*(undefined8 *)PTR_DAT_033ea8a0,0xe);
            if (plVar10 == (long *)0x0) goto LAB_013e5504;
            if ((*(long *)Mono_Security_Interface_TlsProtocols_TypeInfo != 0) &&
               (lVar11 = thunk_FUN_00d6225c(*(long *)Mono_Security_Interface_TlsProtocols_TypeInfo,
                                            *(undefined8 *)(*plVar10 + 0x40)), lVar11 == 0)) {
LAB_013e550c:
              uVar14 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
              FUN_00da5038(uVar14,0);
            }
            if ((int)plVar10[3] == 0) goto LAB_013e5508;
            if (plVar8 != (long *)0x0) {
              plVar18 = plVar8;
            }
            plVar10[4] = *(long *)Mono_Security_Interface_TlsProtocols_TypeInfo;
            if (plVar8 == (long *)0x0) {
              lVar11 = 0;
            }
            else {
              if (plVar18 == (long *)0x0) goto LAB_013e5504;
              lVar11 = (**(code **)(*plVar18 + 0x168))(plVar18,*(undefined8 *)(*plVar18 + 0x170));
              if ((lVar11 != 0) &&
                 (lVar12 = thunk_FUN_00d6225c(lVar11,*(undefined8 *)(*plVar10 + 0x40)), lVar12 == 0)
                 ) goto LAB_013e550c;
            }
            uVar15 = *(uint *)(plVar10 + 3);
            if (uVar15 < 2) goto LAB_013e5508;
            plVar10[5] = lVar11;
            if (*(long *)StringLiteral_14250 != 0) {
              lVar11 = thunk_FUN_00d6225c(*(long *)StringLiteral_14250,
                                          *(undefined8 *)(*plVar10 + 0x40));
              if (lVar11 == 0) goto LAB_013e550c;
              uVar15 = *(uint *)(plVar10 + 3);
            }
            if (uVar15 < 3) goto LAB_013e5508;
            plVar10[6] = *(long *)StringLiteral_14250;
            if (plVar8 == (long *)0x0) goto LAB_013e5504;
            uStack0000000000000064 =
                 (**(code **)(*plVar8 + 0x188))(plVar8,*(undefined8 *)(*plVar8 + 400));
            lVar11 = FUN_0176eb1c(&stack0x00000064,0);
            if ((lVar11 != 0) &&
               (lVar12 = thunk_FUN_00d6225c(lVar11,*(undefined8 *)(*plVar10 + 0x40)), lVar12 == 0))
            goto LAB_013e550c;
            uVar15 = *(uint *)(plVar10 + 3);
            if (uVar15 < 4) goto LAB_013e5508;
            plVar10[7] = lVar11;
            if (*(long *)Method_MedleyBossPushPhase_StartPhase__ != 0) {
              lVar11 = thunk_FUN_00d6225c(*(long *)Method_MedleyBossPushPhase_StartPhase__,
                                          *(undefined8 *)(*plVar10 + 0x40));
              if (lVar11 == 0) goto LAB_013e550c;
              uVar15 = *(uint *)(plVar10 + 3);
            }
            if (uVar15 < 5) goto LAB_013e5508;
            plVar10[8] = *(long *)Method_MedleyBossPushPhase_StartPhase__;
            uStack0000000000000064 =
                 (**(code **)(*plVar8 + 0x1a8))(plVar8,*(undefined8 *)(*plVar8 + 0x1b0));
            lVar11 = FUN_0176eb1c(&stack0x00000064,0);
            if ((lVar11 != 0) &&
               (lVar12 = thunk_FUN_00d6225c(lVar11,*(undefined8 *)(*plVar10 + 0x40)), lVar12 == 0))
            goto LAB_013e550c;
            uVar15 = *(uint *)(plVar10 + 3);
            if (uVar15 < 6) goto LAB_013e5508;
            plVar10[9] = lVar11;
            if (*(long *)
                 Method_System_Collections_Generic_Dictionary<int,_ListLayoutEase_ListElementEase>_Add__
                != 0) {
              lVar11 = thunk_FUN_00d6225c(*(long *)
                                           Method_System_Collections_Generic_Dictionary<int,_ListLayoutEase_ListElementEase>_Add__
                                          ,*(undefined8 *)(*plVar10 + 0x40));
              if (lVar11 == 0) goto LAB_013e550c;
              uVar15 = *(uint *)(plVar10 + 3);
            }
            if (uVar15 < 7) goto LAB_013e5508;
            plVar10[10] = *(long *)
                           Method_System_Collections_Generic_Dictionary<int,_ListLayoutEase_ListElementEase>_Add__
            ;
            in_stack_00000048 = *(undefined8 *)(lVar16 + 0x48);
            uVar14 = *(undefined8 *)(lVar16 + 0x40);
            in_stack_00000058 = *(undefined8 *)(lVar16 + 0x58);
            in_stack_00000050 = *(undefined8 *)(lVar16 + 0x50);
            in_stack_00000040 = uVar14;
            uVar19 = FUN_01431600(&stack0x00000040,0);
            in_stack_00000038 = CONCAT44((int)uVar14,uVar19);
            lVar11 = FUN_0269109c(&stack0x00000038,0);
            if ((lVar11 != 0) &&
               (lVar12 = thunk_FUN_00d6225c(lVar11,*(undefined8 *)(*plVar10 + 0x40)), lVar12 == 0))
            goto LAB_013e550c;
            uVar15 = *(uint *)(plVar10 + 3);
            if (uVar15 < 8) goto LAB_013e5508;
            plVar10[0xb] = lVar11;
            lVar11 = *(long *)puVar2;
            if (lVar11 != 0) {
              lVar11 = thunk_FUN_00d6225c(lVar11,*(undefined8 *)(*plVar10 + 0x40));
              if (lVar11 == 0) goto LAB_013e550c;
              uVar15 = *(uint *)(plVar10 + 3);
            }
            if (uVar15 < 9) goto LAB_013e5508;
            plVar10[0xc] = *(long *)puVar2;
            in_stack_00000048 = *(undefined8 *)(lVar16 + 0x48);
            uVar14 = *(undefined8 *)(lVar16 + 0x40);
            in_stack_00000058 = *(undefined8 *)(lVar16 + 0x58);
            in_stack_00000050 = *(undefined8 *)(lVar16 + 0x50);
            in_stack_00000040 = uVar14;
            uVar19 = FUN_01431624(&stack0x00000040,0);
            in_stack_00000038 = CONCAT44((int)uVar14,uVar19);
            lVar16 = FUN_0269109c(&stack0x00000038,0);
            if ((lVar16 != 0) &&
               (lVar11 = thunk_FUN_00d6225c(lVar16,*(undefined8 *)(*plVar10 + 0x40)), lVar11 == 0))
            goto LAB_013e550c;
            uVar15 = *(uint *)(plVar10 + 3);
            if (uVar15 < 10) goto LAB_013e5508;
            plVar10[0xd] = lVar16;
            lVar16 = *(long *)puVar4;
            if (lVar16 != 0) {
              lVar16 = thunk_FUN_00d6225c(lVar16,*(undefined8 *)(*plVar10 + 0x40));
              if (lVar16 == 0) goto LAB_013e550c;
              uVar15 = *(uint *)(plVar10 + 3);
            }
            if (uVar15 < 0xb) goto LAB_013e5508;
            plVar10[0xe] = *(long *)puVar4;
            lVar16 = *(long *)(unaff_x19 + 0x38);
            if (lVar16 == 0) goto LAB_013e5504;
            if (*(uint *)(lVar16 + 0x18) <= uVar17) goto LAB_013e5508;
            lVar16 = lVar16 + uVar17 * 0x10;
            in_stack_00000028 = *(undefined8 *)(lVar16 + 0x28);
            in_stack_00000020 = *(undefined8 *)(lVar16 + 0x20);
            lVar16 = FUN_02688894(&stack0x00000020,0);
            if ((lVar16 != 0) &&
               (lVar11 = thunk_FUN_00d6225c(lVar16,*(undefined8 *)(*plVar10 + 0x40)), lVar11 == 0))
            goto LAB_013e550c;
            uVar15 = *(uint *)(plVar10 + 3);
            if (uVar15 < 0xc) goto LAB_013e5508;
            plVar10[0xf] = lVar16;
            lVar16 = *(long *)puVar3;
            if (lVar16 != 0) {
              lVar16 = thunk_FUN_00d6225c(lVar16,*(undefined8 *)(*plVar10 + 0x40));
              if (lVar16 == 0) goto LAB_013e550c;
              uVar15 = *(uint *)(plVar10 + 3);
            }
            if (uVar15 < 0xd) goto LAB_013e5508;
            plVar10[0x10] = *(long *)puVar3;
            lVar16 = FUN_0176eb1c(unaff_x19 + 0x30,0);
            if ((lVar16 != 0) &&
               (lVar11 = thunk_FUN_00d6225c(lVar16,*(undefined8 *)(*plVar10 + 0x40)), lVar11 == 0))
            goto LAB_013e550c;
            if (*(uint *)(plVar10 + 3) < 0xe) goto LAB_013e5508;
            plVar10[0x11] = lVar16;
            uVar14 = FUN_01600844(plVar10,0);
            if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
              thunk_FUN_00d32864(*(long *)StringLiteral_302);
            }
            FUN_02660dac(uVar14,0);
            plVar18 = plVar8;
          }
        }
        if (*(long *)(unaff_x19 + 0x40) == 0) goto LAB_013e5504;
        FUN_0132138c(*(long *)(unaff_x19 + 0x40),uVar17 & 0xffffffff,&stack0x00000068,
                     *(undefined8 *)puVar1);
        if ((((*(long *)(unaff_x19 + 0x40) == 0) ||
             (FUN_0132138c(*(long *)(unaff_x19 + 0x40),uVar17 & 0xffffffff,&stack0x00000068,
                           *(undefined8 *)puVar1), in_stack_00000068 == 0)) ||
            (*(long *)(unaff_x19 + 0x40) == 0)) ||
           ((FUN_0132138c(*(long *)(unaff_x19 + 0x40),uVar17 & 0xffffffff,&stack0x00000068,
                          *(undefined8 *)puVar1), in_stack_00000068 == 0 ||
            (*(long *)(unaff_x19 + 0x38) == 0)))) goto LAB_013e5504;
        if (*(uint *)(*(long *)(unaff_x19 + 0x38) + 0x18) <= uVar17) {
LAB_013e5508:
                    /* WARNING: Subroutine does not return */
          FUN_00da5194();
        }
        Meta_WitAi_Requests_VRequest__remove_OnDownloadProgress();
        lVar16 = *(long *)(unaff_x19 + 0x38);
        uVar17 = uVar17 + 1;
        if (lVar16 == 0) goto LAB_013e5504;
      }
      FUN_02040968(lVar7,0);
      FUN_02040900(lVar7,0);
      if (3 < *(int *)(unaff_x19 + 0x10)) {
        in_stack_00000018 = FUN_020407b0(lVar7,0);
        uVar14 = FUN_01770034(&stack0x00000018,*(undefined8 *)StringLiteral_12992,0);
        uVar14 = FUN_015f5b28(*(undefined8 *)
                               Method_System_Collections_Generic_List_Enumerator<GUILayoutEntry>_get_Current__
                              ,uVar14,0);
        if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
          thunk_FUN_00d32864(*(long *)StringLiteral_302);
        }
        FUN_02660dac(uVar14,0);
        if (3 < *(int *)(unaff_x19 + 0x10)) {
          plVar18 = *(long **)(unaff_x19 + 0x20);
          if (plVar18 == (long *)0x0) goto LAB_013e5504;
          uStack0000000000000064 =
               (**(code **)(*plVar18 + 0x188))(plVar18,*(undefined8 *)(*plVar18 + 400));
          uVar14 = FUN_0176eb1c(&stack0x00000064,0);
          plVar18 = *(long **)(unaff_x19 + 0x20);
          if (plVar18 == (long *)0x0) goto LAB_013e5504;
          uStack0000000000000064 =
               (**(code **)(*plVar18 + 0x1a8))(plVar18,*(undefined8 *)(*plVar18 + 0x1b0));
          uVar13 = FUN_0176eb1c(&stack0x00000064,0);
          uVar14 = FUN_0160073c(*(undefined8 *)
                                 Method_FullSerializer_fsBaseConverter_SerializeMember<RectOffset>__
                                ,uVar14,*(undefined8 *)
                                         Sirenix_OdinInspector_SelfValidationResultItemExtensions_<>c__DisplayClass6_0_TypeInfo
                                ,uVar13,0);
          if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
            thunk_FUN_00d32864(*(long *)StringLiteral_302);
          }
          FUN_02660dac(uVar14,0);
        }
      }
      plVar18 = *(long **)(unaff_x19 + 0x20);
      if (plVar18 != (long *)0x0) {
        uVar19 = (**(code **)(*plVar18 + 0x188))(plVar18,*(undefined8 *)(*plVar18 + 400));
        plVar18 = *(long **)(unaff_x19 + 0x20);
        if (plVar18 != (long *)0x0) {
          uVar6 = (**(code **)(*plVar18 + 0x1a8))(plVar18,*(undefined8 *)(*plVar18 + 0x1b0));
          lVar16 = thunk_FUN_00d62348(*(undefined8 *)
                                       SpaceShipCommunicationModule_<ScrambleHint>d__14_TypeInfo);
          if (lVar16 != 0) {
            FUN_02671b60(lVar16,uVar19,uVar6,5,1,0,0);
            FUN_013e663c(*(undefined8 *)(unaff_x19 + 0x20),uVar5 & 1,0,
                         *(undefined4 *)(unaff_x19 + 0x10),lVar16);
            if (*(long *)(unaff_x19 + 0x28) != 0) {
              FUN_02684a90(*(long *)(unaff_x19 + 0x28),0,0);
              *(long *)(unaff_x19 + 0x60) = lVar16;
              if (*(int *)(unaff_x19 + 0x10) < 4) {
                return;
              }
              in_stack_00000018 = FUN_020407b0(lVar7,0);
              uVar14 = FUN_01770034(&stack0x00000018,*(undefined8 *)StringLiteral_12992,0);
              uVar14 = FUN_015f5b28(*(undefined8 *)
                                     UnityEngine_EventSystems_OVRPhysicsRaycaster_<>c_TypeInfo,
                                    uVar14,0);
              if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
                thunk_FUN_00d32864(*(long *)StringLiteral_302);
              }
              FUN_02660dac(uVar14,0);
              return;
            }
          }
        }
      }
    }
  }
LAB_013e5504:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


