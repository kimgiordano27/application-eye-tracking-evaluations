/*
FUNCTION_NAME: Meta.WitAi.Requests.TextStreamHandler$$GetText
ENTRY_POINT: 013e4d1c
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


void Meta_WitAi_Requests_TextStreamHandler__GetText(uint param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  long *plVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  uint uVar14;
  long lVar15;
  long unaff_x19;
  ulong uVar16;
  long *plVar17;
  uint uStack000000000000000c;
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
  
  puVar4 = Method_System_Collections_Generic_List<Variant>_get_Count__;
  puVar3 = Method_System_Collections_Generic_List<Edge>_ToArray__;
  puVar2 = Method_System_Collections_Generic_List<Camera>__ctor__;
  puVar1 = PTR_DAT_033ee2d8;
  lVar15 = *(long *)(unaff_x19 + 0x38);
  uStack000000000000000c = param_1;
  if (lVar15 == 0) goto LAB_013e5504;
  uVar16 = 0;
  plVar17 = (long *)0x0;
  while ((long)uVar16 < (long)*(int *)(lVar15 + 0x18)) {
    if (((*(long *)(unaff_x19 + 0x40) == 0) ||
        (FUN_0132138c(*(long *)(unaff_x19 + 0x40),uVar16 & 0xffffffff,&stack0x00000068,
                      *(undefined8 *)puVar1), in_stack_00000068 == 0)) ||
       (lVar15 = *(long *)(in_stack_00000068 + 0x10), lVar15 == 0)) goto LAB_013e5504;
    if (*(uint *)(lVar15 + 0x18) <= *(uint *)(unaff_x19 + 0x48)) goto LAB_013e5508;
    lVar15 = *(long *)(lVar15 + (long)(int)*(uint *)(unaff_x19 + 0x48) * 8 + 0x20);
    if (lVar15 == 0) goto LAB_013e5504;
    plVar7 = (long *)FUN_01443ffc(lVar15,0);
    if (4 < *(int *)(unaff_x19 + 0x10)) {
      if (*(int *)(*(long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo +
                  0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar8 = FUN_02681b9c(plVar7,0,0);
      if ((uVar8 & 1) != 0) {
        plVar9 = (long *)FUN_00da4fb8(*(undefined8 *)PTR_DAT_033ea8a0,0xe);
        if (plVar9 == (long *)0x0) goto LAB_013e5504;
        if ((*(long *)Mono_Security_Interface_TlsProtocols_TypeInfo != 0) &&
           (lVar10 = thunk_FUN_00d6225c(*(long *)Mono_Security_Interface_TlsProtocols_TypeInfo,
                                        *(undefined8 *)(*plVar9 + 0x40)), lVar10 == 0)) {
LAB_013e550c:
          uVar13 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
          FUN_00da5038(uVar13,0);
        }
        if ((int)plVar9[3] == 0) goto LAB_013e5508;
        if (plVar7 != (long *)0x0) {
          plVar17 = plVar7;
        }
        plVar9[4] = *(long *)Mono_Security_Interface_TlsProtocols_TypeInfo;
        if (plVar7 == (long *)0x0) {
          lVar10 = 0;
        }
        else {
          if (plVar17 == (long *)0x0) goto LAB_013e5504;
          lVar10 = (**(code **)(*plVar17 + 0x168))(plVar17,*(undefined8 *)(*plVar17 + 0x170));
          if ((lVar10 != 0) &&
             (lVar11 = thunk_FUN_00d6225c(lVar10,*(undefined8 *)(*plVar9 + 0x40)), lVar11 == 0))
          goto LAB_013e550c;
        }
        uVar14 = *(uint *)(plVar9 + 3);
        if (uVar14 < 2) goto LAB_013e5508;
        plVar9[5] = lVar10;
        if (*(long *)StringLiteral_14250 != 0) {
          lVar10 = thunk_FUN_00d6225c(*(long *)StringLiteral_14250,*(undefined8 *)(*plVar9 + 0x40));
          if (lVar10 == 0) goto LAB_013e550c;
          uVar14 = *(uint *)(plVar9 + 3);
        }
        if (uVar14 < 3) goto LAB_013e5508;
        plVar9[6] = *(long *)StringLiteral_14250;
        if (plVar7 == (long *)0x0) goto LAB_013e5504;
        in_stack_00000060._4_4_ =
             (**(code **)(*plVar7 + 0x188))(plVar7,*(undefined8 *)(*plVar7 + 400));
        lVar10 = FUN_0176eb1c((long)&stack0x00000060 + 4,0);
        if ((lVar10 != 0) &&
           (lVar11 = thunk_FUN_00d6225c(lVar10,*(undefined8 *)(*plVar9 + 0x40)), lVar11 == 0))
        goto LAB_013e550c;
        uVar14 = *(uint *)(plVar9 + 3);
        if (uVar14 < 4) goto LAB_013e5508;
        plVar9[7] = lVar10;
        if (*(long *)Method_MedleyBossPushPhase_StartPhase__ != 0) {
          lVar10 = thunk_FUN_00d6225c(*(long *)Method_MedleyBossPushPhase_StartPhase__,
                                      *(undefined8 *)(*plVar9 + 0x40));
          if (lVar10 == 0) goto LAB_013e550c;
          uVar14 = *(uint *)(plVar9 + 3);
        }
        if (uVar14 < 5) goto LAB_013e5508;
        plVar9[8] = *(long *)Method_MedleyBossPushPhase_StartPhase__;
        in_stack_00000060._4_4_ =
             (**(code **)(*plVar7 + 0x1a8))(plVar7,*(undefined8 *)(*plVar7 + 0x1b0));
        lVar10 = FUN_0176eb1c((long)&stack0x00000060 + 4,0);
        if ((lVar10 != 0) &&
           (lVar11 = thunk_FUN_00d6225c(lVar10,*(undefined8 *)(*plVar9 + 0x40)), lVar11 == 0))
        goto LAB_013e550c;
        uVar14 = *(uint *)(plVar9 + 3);
        if (uVar14 < 6) goto LAB_013e5508;
        plVar9[9] = lVar10;
        if (*(long *)
             Method_System_Collections_Generic_Dictionary<int,_ListLayoutEase_ListElementEase>_Add__
            != 0) {
          lVar10 = thunk_FUN_00d6225c(*(long *)
                                       Method_System_Collections_Generic_Dictionary<int,_ListLayoutEase_ListElementEase>_Add__
                                      ,*(undefined8 *)(*plVar9 + 0x40));
          if (lVar10 == 0) goto LAB_013e550c;
          uVar14 = *(uint *)(plVar9 + 3);
        }
        if (uVar14 < 7) goto LAB_013e5508;
        plVar9[10] = *(long *)
                      Method_System_Collections_Generic_Dictionary<int,_ListLayoutEase_ListElementEase>_Add__
        ;
        in_stack_00000048 = *(undefined8 *)(lVar15 + 0x48);
        uVar13 = *(undefined8 *)(lVar15 + 0x40);
        in_stack_00000058 = *(undefined8 *)(lVar15 + 0x58);
        in_stack_00000050 = *(undefined8 *)(lVar15 + 0x50);
        in_stack_00000040 = uVar13;
        uStack0000000000000038 = FUN_01431600(&stack0x00000040,0);
        uStack000000000000003c = (undefined4)uVar13;
        lVar10 = FUN_0269109c(&stack0x00000038,0);
        if ((lVar10 != 0) &&
           (lVar11 = thunk_FUN_00d6225c(lVar10,*(undefined8 *)(*plVar9 + 0x40)), lVar11 == 0))
        goto LAB_013e550c;
        uVar14 = *(uint *)(plVar9 + 3);
        if (uVar14 < 8) goto LAB_013e5508;
        plVar9[0xb] = lVar10;
        lVar10 = *(long *)puVar2;
        if (lVar10 != 0) {
          lVar10 = thunk_FUN_00d6225c(lVar10,*(undefined8 *)(*plVar9 + 0x40));
          if (lVar10 == 0) goto LAB_013e550c;
          uVar14 = *(uint *)(plVar9 + 3);
        }
        if (uVar14 < 9) goto LAB_013e5508;
        plVar9[0xc] = *(long *)puVar2;
        in_stack_00000048 = *(undefined8 *)(lVar15 + 0x48);
        uVar13 = *(undefined8 *)(lVar15 + 0x40);
        in_stack_00000058 = *(undefined8 *)(lVar15 + 0x58);
        in_stack_00000050 = *(undefined8 *)(lVar15 + 0x50);
        in_stack_00000040 = uVar13;
        uStack0000000000000038 = FUN_01431624(&stack0x00000040,0);
        uStack000000000000003c = (undefined4)uVar13;
        lVar15 = FUN_0269109c(&stack0x00000038,0);
        if ((lVar15 != 0) &&
           (lVar10 = thunk_FUN_00d6225c(lVar15,*(undefined8 *)(*plVar9 + 0x40)), lVar10 == 0))
        goto LAB_013e550c;
        uVar14 = *(uint *)(plVar9 + 3);
        if (uVar14 < 10) goto LAB_013e5508;
        plVar9[0xd] = lVar15;
        lVar15 = *(long *)puVar4;
        if (lVar15 != 0) {
          lVar15 = thunk_FUN_00d6225c(lVar15,*(undefined8 *)(*plVar9 + 0x40));
          if (lVar15 == 0) goto LAB_013e550c;
          uVar14 = *(uint *)(plVar9 + 3);
        }
        if (uVar14 < 0xb) goto LAB_013e5508;
        plVar9[0xe] = *(long *)puVar4;
        lVar15 = *(long *)(unaff_x19 + 0x38);
        if (lVar15 == 0) goto LAB_013e5504;
        if (*(uint *)(lVar15 + 0x18) <= uVar16) goto LAB_013e5508;
        lVar15 = lVar15 + uVar16 * 0x10;
        in_stack_00000028 = *(undefined8 *)(lVar15 + 0x28);
        in_stack_00000020 = *(undefined8 *)(lVar15 + 0x20);
        lVar15 = FUN_02688894(&stack0x00000020,0);
        if ((lVar15 != 0) &&
           (lVar10 = thunk_FUN_00d6225c(lVar15,*(undefined8 *)(*plVar9 + 0x40)), lVar10 == 0))
        goto LAB_013e550c;
        uVar14 = *(uint *)(plVar9 + 3);
        if (uVar14 < 0xc) goto LAB_013e5508;
        plVar9[0xf] = lVar15;
        lVar15 = *(long *)puVar3;
        if (lVar15 != 0) {
          lVar15 = thunk_FUN_00d6225c(lVar15,*(undefined8 *)(*plVar9 + 0x40));
          if (lVar15 == 0) goto LAB_013e550c;
          uVar14 = *(uint *)(plVar9 + 3);
        }
        if (uVar14 < 0xd) goto LAB_013e5508;
        plVar9[0x10] = *(long *)puVar3;
        lVar15 = FUN_0176eb1c(unaff_x19 + 0x30,0);
        if ((lVar15 != 0) &&
           (lVar10 = thunk_FUN_00d6225c(lVar15,*(undefined8 *)(*plVar9 + 0x40)), lVar10 == 0))
        goto LAB_013e550c;
        if (*(uint *)(plVar9 + 3) < 0xe) goto LAB_013e5508;
        plVar9[0x11] = lVar15;
        uVar13 = FUN_01600844(plVar9,0);
        if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
          thunk_FUN_00d32864(*(long *)StringLiteral_302);
        }
        FUN_02660dac(uVar13,0);
        plVar17 = plVar7;
      }
    }
    if (*(long *)(unaff_x19 + 0x40) == 0) goto LAB_013e5504;
    FUN_0132138c(*(long *)(unaff_x19 + 0x40),uVar16 & 0xffffffff,&stack0x00000068,
                 *(undefined8 *)puVar1);
    if ((((*(long *)(unaff_x19 + 0x40) == 0) ||
         (FUN_0132138c(*(long *)(unaff_x19 + 0x40),uVar16 & 0xffffffff,&stack0x00000068,
                       *(undefined8 *)puVar1), in_stack_00000068 == 0)) ||
        (*(long *)(unaff_x19 + 0x40) == 0)) ||
       ((FUN_0132138c(*(long *)(unaff_x19 + 0x40),uVar16 & 0xffffffff,&stack0x00000068,
                      *(undefined8 *)puVar1), in_stack_00000068 == 0 ||
        (*(long *)(unaff_x19 + 0x38) == 0)))) goto LAB_013e5504;
    if (*(uint *)(*(long *)(unaff_x19 + 0x38) + 0x18) <= uVar16) {
LAB_013e5508:
                    /* WARNING: Subroutine does not return */
      FUN_00da5194();
    }
    Meta_WitAi_Requests_VRequest__remove_OnDownloadProgress();
    lVar15 = *(long *)(unaff_x19 + 0x38);
    uVar16 = uVar16 + 1;
    if (lVar15 == 0) goto LAB_013e5504;
  }
  FUN_02040968(in_stack_00000010,0);
  FUN_02040900(in_stack_00000010,0);
  if (3 < *(int *)(unaff_x19 + 0x10)) {
    in_stack_00000018 = FUN_020407b0(in_stack_00000010,0);
    uVar13 = FUN_01770034(&stack0x00000018,*(undefined8 *)StringLiteral_12992,0);
    uVar13 = FUN_015f5b28(*(undefined8 *)
                           Method_System_Collections_Generic_List_Enumerator<GUILayoutEntry>_get_Current__
                          ,uVar13,0);
    if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
      thunk_FUN_00d32864(*(long *)StringLiteral_302);
    }
    FUN_02660dac(uVar13,0);
    if (3 < *(int *)(unaff_x19 + 0x10)) {
      plVar17 = *(long **)(unaff_x19 + 0x20);
      if (plVar17 == (long *)0x0) goto LAB_013e5504;
      in_stack_00000060._4_4_ =
           (**(code **)(*plVar17 + 0x188))(plVar17,*(undefined8 *)(*plVar17 + 400));
      uVar13 = FUN_0176eb1c((long)&stack0x00000060 + 4,0);
      plVar17 = *(long **)(unaff_x19 + 0x20);
      if (plVar17 == (long *)0x0) goto LAB_013e5504;
      in_stack_00000060._4_4_ =
           (**(code **)(*plVar17 + 0x1a8))(plVar17,*(undefined8 *)(*plVar17 + 0x1b0));
      uVar12 = FUN_0176eb1c((long)&stack0x00000060 + 4,0);
      uVar13 = FUN_0160073c(*(undefined8 *)
                             Method_FullSerializer_fsBaseConverter_SerializeMember<RectOffset>__,
                            uVar13,*(undefined8 *)
                                    Sirenix_OdinInspector_SelfValidationResultItemExtensions_<>c__DisplayClass6_0_TypeInfo
                            ,uVar12,0);
      if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
        thunk_FUN_00d32864(*(long *)StringLiteral_302);
      }
      FUN_02660dac(uVar13,0);
    }
  }
  plVar17 = *(long **)(unaff_x19 + 0x20);
  if (plVar17 != (long *)0x0) {
    uVar5 = (**(code **)(*plVar17 + 0x188))(plVar17,*(undefined8 *)(*plVar17 + 400));
    plVar17 = *(long **)(unaff_x19 + 0x20);
    if (plVar17 != (long *)0x0) {
      uVar6 = (**(code **)(*plVar17 + 0x1a8))(plVar17,*(undefined8 *)(*plVar17 + 0x1b0));
      lVar15 = thunk_FUN_00d62348(*(undefined8 *)
                                   SpaceShipCommunicationModule_<ScrambleHint>d__14_TypeInfo);
      if (lVar15 != 0) {
        FUN_02671b60(lVar15,uVar5,uVar6,5,1,0,0);
        FUN_013e663c(*(undefined8 *)(unaff_x19 + 0x20),uStack000000000000000c & 1,0,
                     *(undefined4 *)(unaff_x19 + 0x10),lVar15);
        if (*(long *)(unaff_x19 + 0x28) != 0) {
          FUN_02684a90(*(long *)(unaff_x19 + 0x28),0,0);
          *(long *)(unaff_x19 + 0x60) = lVar15;
          if (3 < *(int *)(unaff_x19 + 0x10)) {
            in_stack_00000018 = FUN_020407b0(in_stack_00000010,0);
            uVar13 = FUN_01770034(&stack0x00000018,*(undefined8 *)StringLiteral_12992,0);
            uVar13 = FUN_015f5b28(*(undefined8 *)
                                   UnityEngine_EventSystems_OVRPhysicsRaycaster_<>c_TypeInfo,uVar13,
                                  0);
            if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
              thunk_FUN_00d32864(*(long *)StringLiteral_302);
            }
            FUN_02660dac(uVar13,0);
          }
          return;
        }
      }
    }
  }
LAB_013e5504:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


