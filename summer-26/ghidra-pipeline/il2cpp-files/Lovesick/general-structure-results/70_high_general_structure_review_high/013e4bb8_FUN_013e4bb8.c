/*
FUNCTION_NAME: FUN_013e4bb8
ENTRY_POINT: 013e4bb8
PROGRAM: Lovesick-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_21;ray_or_cast_sink_hits_4;telemetry_or_network_hits_6;frame_or_lifecycle_behavior
*/


void FUN_013e4bb8(long param_1)

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
  ulong uVar17;
  long *plVar18;
  undefined4 uVar19;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined4 local_6c;
  long local_68;
  
  if ((DAT_03776844 & 1) == 0) {
    thunk_FUN_00d48444(StringLiteral_302);
    thunk_FUN_00d48444(PTR_DAT_033ee2d8);
    thunk_FUN_00d48444(System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo);
    thunk_FUN_00d48444(System_Nullable<short>_TypeInfo);
    thunk_FUN_00d48444(PTR_DAT_033ea8a0);
    thunk_FUN_00d48444(SpaceShipCommunicationModule_<ScrambleHint>d__14_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_14250);
    thunk_FUN_00d48444(Method_MedleyBossPushPhase_StartPhase__);
    thunk_FUN_00d48444(Mono_Security_Interface_TlsProtocols_TypeInfo);
    thunk_FUN_00d48444(
                      Sirenix_OdinInspector_SelfValidationResultItemExtensions_<>c__DisplayClass6_0_TypeInfo
                      );
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<Camera>__ctor__);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_Dictionary<int,_ListLayoutEase_ListElementEase>_Add__
                      );
    thunk_FUN_00d48444(Method_FullSerializer_fsBaseConverter_SerializeMember<RectOffset>__);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<Edge>_ToArray__);
    thunk_FUN_00d48444(StringLiteral_12992);
    thunk_FUN_00d48444(UnityEngine_EventSystems_OVRPhysicsRaycaster_<>c_TypeInfo);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_List_Enumerator<GUILayoutEntry>_get_Current__
                      );
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<Variant>_get_Count__);
    DAT_03776844 = 1;
  }
  local_6c = 0;
  local_98 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  uStack_88 = 0;
  local_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  local_b8 = 0;
  if (*(char *)(param_1 + 0x36) == '\0') {
    return;
  }
  lVar7 = thunk_FUN_00d62348(*(undefined8 *)System_Nullable<short>_TypeInfo);
  if (lVar7 != 0) {
    FUN_02040640(lVar7,0);
    FUN_02040900(lVar7,0);
    uVar5 = FUN_013e5518(*(undefined4 *)(param_1 + 0x10));
    puVar4 = Method_System_Collections_Generic_List<Variant>_get_Count__;
    puVar3 = Method_System_Collections_Generic_List<Edge>_ToArray__;
    puVar2 = Method_System_Collections_Generic_List<Camera>__ctor__;
    puVar1 = PTR_DAT_033ee2d8;
    lVar16 = *(long *)(param_1 + 0x38);
    if (lVar16 != 0) {
      uVar17 = 0;
      plVar18 = (long *)0x0;
      while ((long)uVar17 < (long)*(int *)(lVar16 + 0x18)) {
        if (((*(long *)(param_1 + 0x40) == 0) ||
            (FUN_0132138c(*(long *)(param_1 + 0x40),uVar17 & 0xffffffff,&local_68,
                          *(undefined8 *)puVar1), local_68 == 0)) ||
           (lVar16 = *(long *)(local_68 + 0x10), lVar16 == 0)) goto LAB_013e5504;
        if (*(uint *)(lVar16 + 0x18) <= *(uint *)(param_1 + 0x48)) goto LAB_013e5508;
        lVar16 = *(long *)(lVar16 + (long)(int)*(uint *)(param_1 + 0x48) * 8 + 0x20);
        if (lVar16 == 0) goto LAB_013e5504;
        plVar8 = (long *)FUN_01443ffc(lVar16,0);
        if (4 < *(int *)(param_1 + 0x10)) {
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
            local_6c = (**(code **)(*plVar8 + 0x188))(plVar8,*(undefined8 *)(*plVar8 + 400));
            lVar11 = FUN_0176eb1c(&local_6c,0);
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
            local_6c = (**(code **)(*plVar8 + 0x1a8))(plVar8,*(undefined8 *)(*plVar8 + 0x1b0));
            lVar11 = FUN_0176eb1c(&local_6c,0);
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
            uStack_88 = *(undefined8 *)(lVar16 + 0x48);
            uVar14 = *(undefined8 *)(lVar16 + 0x40);
            uStack_78 = *(undefined8 *)(lVar16 + 0x58);
            uStack_80 = *(undefined8 *)(lVar16 + 0x50);
            local_90 = uVar14;
            uVar19 = FUN_01431600(&local_90,0);
            local_98 = CONCAT44((int)uVar14,uVar19);
            lVar11 = FUN_0269109c(&local_98,0);
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
            uStack_88 = *(undefined8 *)(lVar16 + 0x48);
            uVar14 = *(undefined8 *)(lVar16 + 0x40);
            uStack_78 = *(undefined8 *)(lVar16 + 0x58);
            uStack_80 = *(undefined8 *)(lVar16 + 0x50);
            local_90 = uVar14;
            uVar19 = FUN_01431624(&local_90,0);
            local_98 = CONCAT44((int)uVar14,uVar19);
            lVar11 = FUN_0269109c(&local_98,0);
            if ((lVar11 != 0) &&
               (lVar12 = thunk_FUN_00d6225c(lVar11,*(undefined8 *)(*plVar10 + 0x40)), lVar12 == 0))
            goto LAB_013e550c;
            uVar15 = *(uint *)(plVar10 + 3);
            if (uVar15 < 10) goto LAB_013e5508;
            plVar10[0xd] = lVar11;
            lVar11 = *(long *)puVar4;
            if (lVar11 != 0) {
              lVar11 = thunk_FUN_00d6225c(lVar11,*(undefined8 *)(*plVar10 + 0x40));
              if (lVar11 == 0) goto LAB_013e550c;
              uVar15 = *(uint *)(plVar10 + 3);
            }
            if (uVar15 < 0xb) goto LAB_013e5508;
            plVar10[0xe] = *(long *)puVar4;
            lVar11 = *(long *)(param_1 + 0x38);
            if (lVar11 == 0) goto LAB_013e5504;
            if (*(uint *)(lVar11 + 0x18) <= uVar17) goto LAB_013e5508;
            lVar11 = lVar11 + uVar17 * 0x10;
            uStack_a8 = *(undefined8 *)(lVar11 + 0x28);
            local_b0 = *(undefined8 *)(lVar11 + 0x20);
            lVar11 = FUN_02688894(&local_b0,0);
            if ((lVar11 != 0) &&
               (lVar12 = thunk_FUN_00d6225c(lVar11,*(undefined8 *)(*plVar10 + 0x40)), lVar12 == 0))
            goto LAB_013e550c;
            uVar15 = *(uint *)(plVar10 + 3);
            if (uVar15 < 0xc) goto LAB_013e5508;
            plVar10[0xf] = lVar11;
            lVar11 = *(long *)puVar3;
            if (lVar11 != 0) {
              lVar11 = thunk_FUN_00d6225c(lVar11,*(undefined8 *)(*plVar10 + 0x40));
              if (lVar11 == 0) goto LAB_013e550c;
              uVar15 = *(uint *)(plVar10 + 3);
            }
            if (uVar15 < 0xd) goto LAB_013e5508;
            plVar10[0x10] = *(long *)puVar3;
            lVar11 = FUN_0176eb1c(param_1 + 0x30,0);
            if ((lVar11 != 0) &&
               (lVar12 = thunk_FUN_00d6225c(lVar11,*(undefined8 *)(*plVar10 + 0x40)), lVar12 == 0))
            goto LAB_013e550c;
            if (*(uint *)(plVar10 + 3) < 0xe) goto LAB_013e5508;
            plVar10[0x11] = lVar11;
            uVar14 = FUN_01600844(plVar10,0);
            if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
              thunk_FUN_00d32864(*(long *)StringLiteral_302);
            }
            FUN_02660dac(uVar14,0);
            plVar18 = plVar8;
          }
        }
        if (*(long *)(param_1 + 0x40) == 0) goto LAB_013e5504;
        FUN_0132138c(*(long *)(param_1 + 0x40),uVar17 & 0xffffffff,&local_68,*(undefined8 *)puVar1);
        lVar11 = local_68;
        if ((((*(long *)(param_1 + 0x40) == 0) ||
             (FUN_0132138c(*(long *)(param_1 + 0x40),uVar17 & 0xffffffff,&local_68,
                           *(undefined8 *)puVar1), local_68 == 0)) ||
            (*(long *)(param_1 + 0x40) == 0)) ||
           ((FUN_0132138c(*(long *)(param_1 + 0x40),uVar17 & 0xffffffff,&local_68,
                          *(undefined8 *)puVar1), local_68 == 0 || (*(long *)(param_1 + 0x38) == 0))
           )) goto LAB_013e5504;
        if (*(uint *)(*(long *)(param_1 + 0x38) + 0x18) <= uVar17) {
LAB_013e5508:
                    /* WARNING: Subroutine does not return */
          FUN_00da5194();
        }
        Meta_WitAi_Requests_VRequest__remove_OnDownloadProgress
                  (param_1,lVar11,lVar16,*(undefined8 *)(param_1 + 0x50),
                   *(undefined8 *)(param_1 + 0x58),0);
        lVar16 = *(long *)(param_1 + 0x38);
        uVar17 = uVar17 + 1;
        if (lVar16 == 0) goto LAB_013e5504;
      }
      FUN_02040968(lVar7,0);
      FUN_02040900(lVar7,0);
      if (3 < *(int *)(param_1 + 0x10)) {
        local_b8 = FUN_020407b0(lVar7,0);
        uVar14 = FUN_01770034(&local_b8,*(undefined8 *)StringLiteral_12992,0);
        uVar14 = FUN_015f5b28(*(undefined8 *)
                               Method_System_Collections_Generic_List_Enumerator<GUILayoutEntry>_get_Current__
                              ,uVar14,0);
        if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
          thunk_FUN_00d32864(*(long *)StringLiteral_302);
        }
        FUN_02660dac(uVar14,0);
        if (3 < *(int *)(param_1 + 0x10)) {
          plVar18 = *(long **)(param_1 + 0x20);
          if (plVar18 == (long *)0x0) goto LAB_013e5504;
          local_6c = (**(code **)(*plVar18 + 0x188))(plVar18,*(undefined8 *)(*plVar18 + 400));
          uVar14 = FUN_0176eb1c(&local_6c,0);
          plVar18 = *(long **)(param_1 + 0x20);
          if (plVar18 == (long *)0x0) goto LAB_013e5504;
          local_6c = (**(code **)(*plVar18 + 0x1a8))(plVar18,*(undefined8 *)(*plVar18 + 0x1b0));
          uVar13 = FUN_0176eb1c(&local_6c,0);
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
      plVar18 = *(long **)(param_1 + 0x20);
      if (plVar18 != (long *)0x0) {
        uVar19 = (**(code **)(*plVar18 + 0x188))(plVar18,*(undefined8 *)(*plVar18 + 400));
        plVar18 = *(long **)(param_1 + 0x20);
        if (plVar18 != (long *)0x0) {
          uVar6 = (**(code **)(*plVar18 + 0x1a8))(plVar18,*(undefined8 *)(*plVar18 + 0x1b0));
          lVar16 = thunk_FUN_00d62348(*(undefined8 *)
                                       SpaceShipCommunicationModule_<ScrambleHint>d__14_TypeInfo);
          if (lVar16 != 0) {
            FUN_02671b60(lVar16,uVar19,uVar6,5,1,0,0);
            FUN_013e663c(*(undefined8 *)(param_1 + 0x20),uVar5 & 1,0,*(undefined4 *)(param_1 + 0x10)
                         ,lVar16);
            if (*(long *)(param_1 + 0x28) != 0) {
              FUN_02684a90(*(long *)(param_1 + 0x28),0,0);
              *(long *)(param_1 + 0x60) = lVar16;
              if (*(int *)(param_1 + 0x10) < 4) {
                return;
              }
              local_b8 = FUN_020407b0(lVar7,0);
              uVar14 = FUN_01770034(&local_b8,*(undefined8 *)StringLiteral_12992,0);
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


