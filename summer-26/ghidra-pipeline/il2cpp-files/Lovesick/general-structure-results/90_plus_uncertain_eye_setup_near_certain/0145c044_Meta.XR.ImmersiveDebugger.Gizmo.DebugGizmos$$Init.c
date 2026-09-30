/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Gizmo.DebugGizmos$$Init
ENTRY_POINT: 0145c044
PROGRAM: Lovesick-libil2cpp.so
SCORE: 116
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ray_interaction;ui_interaction
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_3;validity_or_gating_hits_21;paired_field_refs_with_eye_source;ray_or_cast_sink_hits_1;ui_or_gameplay_sink_hits_4;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8 Meta_XR_ImmersiveDebugger_Gizmo_DebugGizmos__Init(long param_1,undefined8 param_2)

{
  undefined1 uVar1;
  char cVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  long lVar13;
  long *plVar14;
  ulong uVar15;
  undefined8 *puVar16;
  long *plVar17;
  undefined8 uVar18;
  char cVar19;
  uint uVar20;
  long lVar21;
  ulong *puVar22;
  long lVar23;
  int *piVar24;
  long unaff_x20;
  long unaff_x21;
  ulong unaff_x22;
  long lVar25;
  long *unaff_x24;
  long unaff_x25;
  undefined8 *unaff_x27;
  ulong unaff_x28;
  long *unaff_x29;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  float fVar29;
  ulong uVar30;
  float unaff_s14;
  float unaff_s15;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  long *in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000040;
  long in_stack_00000048;
  long in_stack_00000058;
  long *in_stack_00000060;
  undefined8 in_stack_00000068;
  long *in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000098;
  ulong in_stack_000000a0;
  ulong in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000c8;
  long in_stack_000000d0;
  undefined1 uStack00000000000000d8;
  undefined7 uStack00000000000000d9;
  
code_r0x0145c044:
  if ((((param_1 == 0) || (*(long *)(param_1 + 0x10) == 0)) ||
      (lVar13 = *(long *)(*(long *)(param_1 + 0x10) + 0x70), lVar13 == 0)) ||
     (FUN_0132138c(lVar13,unaff_x22 & 0xffffffff,&stack0x00000070,*unaff_x27),
     in_stack_00000070 == (long *)0x0)) goto LAB_0145d050;
  lVar13 = in_stack_00000070[2];
  if (*(int *)(*(long *)Method_System_Collections_Generic_List<Material>_Add__ + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  plVar14 = (long *)FUN_014578b8(param_2,unaff_x25,lVar13);
  if (*(int *)(*(long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo +
              0xe0) == 0) {
    thunk_FUN_00d32864(*(long *)
                        System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo);
  }
  uVar15 = FUN_02681b9c(plVar14,0,0);
  if ((uVar15 & 1) == 0) {
    uVar9 = 0;
    plVar14 = (long *)0x0;
  }
  else {
    if ((plVar14 == (long *)0x0) ||
       (*plVar14 != *(long *)SpaceShipCommunicationModule_<ScrambleHint>d__14_TypeInfo)) {
      if (in_stack_00000060 != (long *)0x0) {
        uVar18 = FUN_0268b6ac(in_stack_00000060,0);
        uVar18 = FUN_01600424(*(undefined8 *)UnityEngine_UIElements_VisualElement_TypeData_TypeInfo,
                              uVar18,*(undefined8 *)
                                      Method_System_Diagnostics_Contracts_Contract_ForAll<Type>__,0)
        ;
        if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
          thunk_FUN_00d32864(*(long *)StringLiteral_302);
        }
        FUN_026610e4(uVar18,0);
        lVar13 = *(long *)(in_stack_00000058 + 0x38);
        goto joined_r0x0145c834;
      }
      goto LAB_0145d050;
    }
    uVar10 = FUN_026709f8(plVar14,0);
    uVar15 = FUN_0269e56c(0);
    if ((uVar15 & 1) == 0) {
      plVar17 = *(long **)(in_stack_00000058 + 0x40);
      if (plVar17 == (long *)0x0) {
        uVar15 = 0;
        uVar9 = 0;
      }
      else {
        if (*plVar14 != *(long *)SpaceShipCommunicationModule_<ScrambleHint>d__14_TypeInfo)
        goto Meta_XR_ImmersiveDebugger_Gizmo_DebugGizmos__DrawPoint;
        lVar13 = *plVar17;
        uVar15 = (ulong)*(ushort *)(lVar13 + 0x12a);
        if (uVar15 != 0) {
          piVar24 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
          do {
            if (*(long *)(piVar24 + -2) == *(long *)StringLiteral_2590) {
              puVar16 = (undefined8 *)(lVar13 + (long)(*piVar24 + 7) * 0x10 + 0x138);
              goto LAB_0145c1b8;
            }
            uVar15 = uVar15 - 1;
            piVar24 = piVar24 + 4;
          } while (uVar15 != 0);
        }
        puVar16 = (undefined8 *)FUN_00d59724(plVar17,*(long *)StringLiteral_2590,7);
LAB_0145c1b8:
        uVar15 = (*(code *)*puVar16)(plVar17,plVar14,puVar16[1]);
        uVar9 = 1;
        if ((uVar15 & 1) != 0) {
          uVar9 = 0xffffffff;
        }
      }
    }
    else {
      uVar15 = 0;
      uVar9 = 0;
    }
    if (((uVar15 & 1) != 0) || ((uVar10 | 2) != 3 && (uVar10 != 0xe && (uVar10 | 1) != 5))) {
      uVar15 = FUN_0269e56c(0);
      lVar13 = *(long *)(unaff_x21 + 0x18);
      if ((uVar15 & 1) == 0) {
        if (lVar13 == 0) goto LAB_0145d050;
      }
      else {
        if ((lVar13 == 0) || (lVar23 = *(long *)(lVar13 + 0x10), lVar23 == 0)) goto LAB_0145d050;
        if ((*(int *)(lVar23 + 0x88) == 0) &&
           ((*(int *)(lVar23 + 0x30) != 2 && (*(int *)(lVar23 + 0x30) != 5)))) {
          plVar17 = (long *)FUN_00da4fb8(*(undefined8 *)PTR_DAT_033ea8a0,7);
          puVar3 = StringLiteral_302;
          if (plVar17 != (long *)0x0) {
            if ((*(long *)StringLiteral_3316 != 0) &&
               (lVar13 = thunk_FUN_00d6225c(*(long *)StringLiteral_3316,
                                            *(undefined8 *)(*plVar17 + 0x40)), lVar13 == 0))
            goto LAB_0145d058;
            if ((int)plVar17[3] == 0) goto LAB_0145d054;
            plVar17[4] = *(long *)StringLiteral_3316;
            if (in_stack_00000060 != (long *)0x0) {
              lVar13 = FUN_0268b6ac(in_stack_00000060,0);
              if ((lVar13 != 0) &&
                 (lVar23 = thunk_FUN_00d6225c(lVar13,*(undefined8 *)(*plVar17 + 0x40)), lVar23 == 0)
                 ) goto LAB_0145d058;
              uVar20 = *(uint *)(plVar17 + 3);
              if (uVar20 < 2) goto LAB_0145d054;
              plVar17[5] = lVar13;
              puVar4 = Method_Unity_Burst_Intrinsics_Arm_Neon_vaddl_u32__;
              if (*(long *)Method_Unity_Burst_Intrinsics_Arm_Neon_vaddl_u32__ != 0) {
                lVar13 = thunk_FUN_00d6225c(*(long *)
                                             Method_Unity_Burst_Intrinsics_Arm_Neon_vaddl_u32__,
                                            *(undefined8 *)(*plVar17 + 0x40));
                if (lVar13 == 0) goto LAB_0145d058;
                uVar20 = *(uint *)(plVar17 + 3);
              }
              if (uVar20 < 3) goto LAB_0145d054;
              plVar17[6] = *(long *)puVar4;
              lVar13 = FUN_0268b6ac(plVar14,0);
              if ((lVar13 != 0) &&
                 (lVar23 = thunk_FUN_00d6225c(lVar13,*(undefined8 *)(*plVar17 + 0x40)), lVar23 == 0)
                 ) goto LAB_0145d058;
              uVar20 = *(uint *)(plVar17 + 3);
              if (uVar20 < 4) goto LAB_0145d054;
              plVar17[7] = lVar13;
              puVar4 = System_TimeZoneInfo_AdjustmentRule___var;
              if (*(long *)System_TimeZoneInfo_AdjustmentRule___var != 0) {
                lVar13 = thunk_FUN_00d6225c(*(long *)System_TimeZoneInfo_AdjustmentRule___var,
                                            *(undefined8 *)(*plVar17 + 0x40));
                if (lVar13 == 0) goto LAB_0145d058;
                uVar20 = *(uint *)(plVar17 + 3);
              }
              if (uVar20 < 5) goto LAB_0145d054;
              plVar17[8] = *(long *)puVar4;
              in_stack_00000080 = CONCAT44(in_stack_00000080._4_4_,uVar10);
              in_stack_00000070 =
                   *(long **)Method_System_Collections_Generic_HashSet<IXRInteractor>_Add__;
              in_stack_00000078 = 0xffffffffffffffff;
              lVar13 = FUN_017a7f78(&stack0x00000070,0);
              if ((lVar13 != 0) &&
                 (lVar23 = thunk_FUN_00d6225c(lVar13,*(undefined8 *)(*plVar17 + 0x40)), lVar23 == 0)
                 ) goto LAB_0145d058;
              uVar10 = *(uint *)(plVar17 + 3);
              if (uVar10 < 6) goto LAB_0145d054;
              plVar17[9] = lVar13;
              puVar4 = System_Func<double>_TypeInfo;
              if (*(long *)System_Func<double>_TypeInfo != 0) {
                lVar13 = thunk_FUN_00d6225c(*(long *)System_Func<double>_TypeInfo,
                                            *(undefined8 *)(*plVar17 + 0x40));
                if (lVar13 == 0) goto LAB_0145d058;
                uVar10 = *(uint *)(plVar17 + 3);
              }
              if (uVar10 < 7) goto LAB_0145d054;
              plVar17[10] = *(long *)puVar4;
              uVar18 = FUN_01600844(plVar17,0);
              if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
                thunk_FUN_00d32864(*(long *)puVar3);
              }
              FUN_026610e4(uVar18,0);
              lVar13 = *(long *)(in_stack_00000058 + 0x38);
              goto joined_r0x0145c834;
            }
          }
          goto LAB_0145d050;
        }
      }
      if (((*(long *)(lVar13 + 0x10) == 0) ||
          (lVar13 = *(long *)(*(long *)(lVar13 + 0x10) + 0x70), lVar13 == 0)) ||
         (FUN_0132138c(lVar13,unaff_x22 & 0xffffffff,&stack0x00000070,*unaff_x27),
         in_stack_00000070 == (long *)0x0)) goto LAB_0145d050;
      plVar14 = (long *)FUN_0267dbbc(unaff_x25,in_stack_00000070[2],0);
      if ((plVar14 != (long *)0x0) &&
         (*plVar14 != *(long *)SpaceShipCommunicationModule_<ScrambleHint>d__14_TypeInfo)) {
Meta_XR_ImmersiveDebugger_Gizmo_DebugGizmos__DrawPoint:
                    /* WARNING: Subroutine does not return */
        FUN_00da544c(plVar14);
      }
    }
  }
  if (*(int *)(*(long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo +
              0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  uVar15 = FUN_02681b9c(plVar14,0,0);
  fVar29 = 0.0;
  if ((uVar15 & 1) != 0) {
    if ((*(long *)(unaff_x21 + 0x18) == 0) ||
       (lVar13 = *(long *)(*(long *)(unaff_x21 + 0x18) + 0x10), lVar13 == 0)) goto LAB_0145d050;
    if (*(char *)(lVar13 + 0x48) != '\0') {
      if (in_stack_000000d0 == 0) goto LAB_0145d050;
      if (*(uint *)(in_stack_000000d0 + 0x18) <= unaff_x22) goto LAB_0145d054;
      if (*(float *)(in_stack_000000d0 + unaff_x22 * 0x18 + 0x34) != 0.0) {
        if (plVar14 == (long *)0x0) goto LAB_0145d050;
        iVar11 = (**(code **)(*plVar14 + 0x188))(plVar14,*(undefined8 *)(*plVar14 + 400));
        iVar12 = (**(code **)(*plVar14 + 0x1a8))(plVar14,*(undefined8 *)(*plVar14 + 0x1b0));
        if (in_stack_000000d0 == 0) goto LAB_0145d050;
        if (*(uint *)(in_stack_000000d0 + 0x18) <= unaff_x22) goto LAB_0145d054;
        fVar29 = (float)(iVar12 * iVar11) / *(float *)(in_stack_000000d0 + unaff_x22 * 0x18 + 0x34);
      }
    }
  }
  if ((((*(long *)(unaff_x21 + 0x18) != 0) &&
       (lVar13 = *(long *)(*(long *)(unaff_x21 + 0x18) + 0x10), lVar13 != 0)) &&
      (lVar13 = *(long *)(lVar13 + 0x70), lVar13 != 0)) &&
     (FUN_0132138c(lVar13,unaff_x22 & 0xffffffff,&stack0x00000070,*unaff_x27),
     in_stack_00000070 != (long *)0x0)) {
    lVar13 = in_stack_00000070[2];
    if (*(int *)(*(long *)Method_System_Collections_Generic_List<Material>_Add__ + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    FUN_01459f0c(unaff_x25,lVar13,&stack0x000000a0,&stack0x000000a8);
    do {
      uVar15 = in_stack_000000a0 & 0xffffffff;
      uVar7 = in_stack_000000a0._4_4_;
      uVar30 = in_stack_000000a8 & 0xffffffff;
      uVar8 = in_stack_000000a8._4_4_;
      lVar13 = thunk_FUN_00d62348(*(undefined8 *)StringLiteral_2762);
      if ((lVar13 == 0) ||
         (FUN_01443e40(uVar15,uVar7,uVar30,uVar8,fVar29,lVar13,plVar14,uVar9,0),
         unaff_x24 == (long *)0x0)) break;
      lVar23 = thunk_FUN_00d6225c(lVar13,*(undefined8 *)(*unaff_x24 + 0x40));
      if (lVar23 == 0) goto LAB_0145d058;
      if (*(uint *)(unaff_x24 + 3) <= unaff_x22) goto LAB_0145d054;
      unaff_x24[unaff_x22 + 4] = lVar13;
      lVar13 = *(long *)(unaff_x21 + 0x18);
      unaff_x22 = unaff_x22 + 1;
      if (lVar13 == 0) break;
      while( true ) {
        lVar13 = *(long *)(lVar13 + 0x10);
        if ((lVar13 == 0) || (*(long *)(lVar13 + 0x70) == 0)) goto LAB_0145d050;
        if ((long)unaff_x22 < (long)*(int *)(*(long *)(lVar13 + 0x70) + 0x18)) break;
        if ((*(long *)(lVar13 + 0x50) == 0) ||
           (FUN_01449654(*(long *)(lVar13 + 0x50),*(undefined8 *)(lVar13 + 0x90),unaff_x25,0),
           in_stack_000000d0 == 0)) goto LAB_0145d050;
        if (*(uint *)(in_stack_000000d0 + 0x18) <= unaff_x28) goto LAB_0145d054;
        uVar18 = FUN_026884c4(in_stack_000000d0 + unaff_x28 * 0x18 + 0x20,0);
        if (in_stack_000000d0 == 0) goto LAB_0145d050;
        if (*(uint *)(in_stack_000000d0 + 0x18) <= unaff_x28) goto LAB_0145d054;
        uVar26 = FUN_026884d4(in_stack_000000d0 + unaff_x28 * 0x18 + 0x20,0);
        if (in_stack_000000d0 == 0) goto LAB_0145d050;
        if (*(uint *)(in_stack_000000d0 + 0x18) <= unaff_x28) goto LAB_0145d054;
        uVar27 = FUN_02688390(in_stack_000000d0 + unaff_x28 * 0x18 + 0x20,0);
        if (in_stack_000000d0 == 0) goto LAB_0145d050;
        if (*(uint *)(in_stack_000000d0 + 0x18) <= unaff_x28) goto LAB_0145d054;
        uVar28 = FUN_026883a0(in_stack_000000d0 + unaff_x28 * 0x18 + 0x20,0);
        if ((*(long *)(unaff_x21 + 0x18) == 0) ||
           (lVar13 = *(long *)(*(long *)(unaff_x21 + 0x18) + 0x10), lVar13 == 0)) goto LAB_0145d050;
        uVar1 = *(undefined1 *)(lVar13 + 0x27);
        lVar13 = thunk_FUN_00d62348(*(undefined8 *)StringLiteral_13654);
        if (lVar13 == 0) goto LAB_0145d050;
        FUN_01444820(uVar27,uVar28,uVar18,uVar26,lVar13,unaff_x24,uVar1,0);
        *(long *)(unaff_x21 + 0x10) = lVar13;
        in_stack_00000078 = 0;
        in_stack_00000070 = (long *)0x0;
        in_stack_00000088 = 0;
        in_stack_00000080 = 0;
        FUN_01431554(uVar27,uVar28,uVar18,uVar26,&stack0x00000070,0);
        if ((*(long *)(unaff_x21 + 0x18) == 0) ||
           (lVar13 = *(long *)(*(long *)(unaff_x21 + 0x18) + 0x10), lVar13 == 0)) goto LAB_0145d050;
        cVar19 = *(char *)(lVar13 + 0x27);
        lVar13 = thunk_FUN_00d62348(*(undefined8 *)
                                     Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<object>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<bool>,_JsonTextReader_<ReadNumberValueAsync>d__38>__
                                   );
        if (lVar13 == 0) goto LAB_0145d050;
        FUN_01444454(in_stack_00000070,in_stack_00000078,in_stack_00000080,in_stack_00000088,lVar13,
                     cVar19 != '\0',unaff_x25,0);
        if (((*(long *)(unaff_x21 + 0x10) == 0) ||
            (lVar23 = *(long *)(*(long *)(unaff_x21 + 0x10) + 0x18), lVar23 == 0)) ||
           (lVar23 = *(long *)(lVar23 + 0x10), lVar23 == 0)) goto LAB_0145d050;
        FUN_00bc03b0(lVar23,lVar13,*(undefined8 *)PTR_DAT_033eb210);
        if ((*(long *)(unaff_x21 + 0x18) == 0) ||
           (lVar23 = *(long *)(*(long *)(unaff_x21 + 0x18) + 0x10), lVar23 == 0)) goto LAB_0145d050;
        lVar25 = *(long *)(lVar23 + 0x58);
        lVar23 = thunk_FUN_00d62348(*(undefined8 *)
                                     Method_Newtonsoft_Json_Utilities_CollectionUtils_IsNullOrEmpty<JsonConverter>__
                                   );
        if ((lVar23 == 0) ||
           (FUN_0136b58c(lVar23,unaff_x21,
                         *(undefined8 *)Method_PhoneDialtoneController_MuteDialtone__,0),
           lVar25 == 0)) goto LAB_0145d050;
        FUN_01322b20(lVar25,lVar23,&stack0x000000d8,
                     *(undefined8 *)Method_ShowPromptWhenTeleportPadsUsed_TeleportPointEntered__);
        lVar23 = CONCAT71(uStack00000000000000d9,uStack00000000000000d8);
        if (lVar23 == 0) {
          if (((*(long *)(unaff_x21 + 0x18) == 0) ||
              (lVar23 = *(long *)(*(long *)(unaff_x21 + 0x18) + 0x10), lVar23 == 0)) ||
             (lVar23 = *(long *)(lVar23 + 0x58), lVar23 == 0)) goto LAB_0145d050;
          FUN_00bc0938(lVar23,*(undefined8 *)(unaff_x21 + 0x10),
                       *(undefined8 *)
                        Method_System_Collections_Generic_Dictionary<MeshId,_MeshInfo>_TryGetValue__
                      );
          lVar23 = *(long *)(unaff_x21 + 0x10);
          if (lVar23 == 0) goto LAB_0145d050;
        }
        else {
          *(long *)(unaff_x21 + 0x10) = lVar23;
        }
        if ((*(long *)(lVar23 + 0x18) == 0) ||
           (lVar23 = *(long *)(*(long *)(lVar23 + 0x18) + 0x10), lVar23 == 0)) goto LAB_0145d050;
        uVar15 = FUN_01322618(lVar23,lVar13,
                              *(undefined8 *)
                               Method_Meta_WitAi_Json_WitResponseNode_SaveToCompressedStream__);
        if ((uVar15 & 1) == 0) {
          if (((*(long *)(unaff_x21 + 0x10) == 0) ||
              (lVar23 = *(long *)(*(long *)(unaff_x21 + 0x10) + 0x18), lVar23 == 0)) ||
             (lVar23 = *(long *)(lVar23 + 0x10), lVar23 == 0)) goto LAB_0145d050;
          FUN_00bc03b0(lVar23,lVar13,*(undefined8 *)PTR_DAT_033eb210);
        }
        if (((*(long *)(unaff_x21 + 0x10) == 0) ||
            (lVar13 = *(long *)(*(long *)(unaff_x21 + 0x10) + 0x18), lVar13 == 0)) ||
           (lVar13 = *(long *)(lVar13 + 0x18), lVar13 == 0)) goto LAB_0145d050;
        uVar15 = FUN_01322618(lVar13,in_stack_00000060,
                              *(undefined8 *)
                               Method_UnityEngine_ProBuilder_ProBuilderMesh_<SetSelectedFaces>b__246_1__
                             );
        if ((uVar15 & 1) == 0) {
          if (((*(long *)(unaff_x21 + 0x10) == 0) ||
              (lVar13 = *(long *)(*(long *)(unaff_x21 + 0x10) + 0x18), lVar13 == 0)) ||
             (lVar13 = *(long *)(lVar13 + 0x18), lVar13 == 0)) goto LAB_0145d050;
          FUN_00ac8520(lVar13,in_stack_00000060,*(undefined8 *)StringLiteral_1415);
          if (*(long *)(in_stack_00000058 + 0x48) == 0) goto LAB_0145d050;
          uVar15 = FUN_01322618(*(long *)(in_stack_00000058 + 0x48),in_stack_00000060,
                                *(undefined8 *)
                                 Method_UnityEngine_ProBuilder_ProBuilderMesh_<SetSelectedFaces>b__246_1__
                               );
          if ((uVar15 & 1) == 0) {
            if (*(long *)(in_stack_00000058 + 0x48) == 0) goto LAB_0145d050;
            FUN_00ac8520(*(long *)(in_stack_00000058 + 0x48),in_stack_00000060,
                         *(undefined8 *)StringLiteral_1415);
          }
        }
        do {
          unaff_x28 = unaff_x28 + 1;
          if ((long)*(int *)(in_stack_00000048 + 0x18) <= (long)unaff_x28) {
            do {
              puVar6 = StringLiteral_7763;
              puVar4 = StringLiteral_302;
              puVar3 = PTR_DAT_033ee2d8;
              lVar13 = *(long *)(unaff_x20 + 0x10);
              in_stack_00000028._4_4_ = in_stack_00000028._4_4_ + 1;
              if ((lVar13 == 0) || (lVar23 = *(long *)(lVar13 + 0x60), lVar23 == 0))
              goto LAB_0145d050;
              if (*(int *)(lVar23 + 0x18) <= in_stack_00000028._4_4_) {
                if (3 < *(int *)(in_stack_00000058 + 0x30)) {
                  if (*(long *)(lVar13 + 0x58) == 0) goto LAB_0145d050;
                  in_stack_00000070 =
                       (long *)CONCAT44(in_stack_00000070._4_4_,
                                        *(undefined4 *)(*(long *)(lVar13 + 0x58) + 0x18));
                  uVar18 = thunk_FUN_00d61fa0(*(undefined8 *)
                                               Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__
                                              ,&stack0x00000070);
                  puVar5 = StringLiteral_9958;
                  if (*(long *)(unaff_x20 + 0x10) == 0) goto LAB_0145d050;
                  uStack00000000000000d8 = *(undefined1 *)(*(long *)(unaff_x20 + 0x10) + 0x27);
                  uVar26 = thunk_FUN_00d61fa0(*(undefined8 *)StringLiteral_9958,&stack0x000000d8);
                  if (*(long *)(unaff_x20 + 0x10) == 0) goto LAB_0145d050;
                  in_stack_00000068._4_1_ = *(undefined1 *)(*(long *)(unaff_x20 + 0x10) + 0x49);
                  uVar27 = thunk_FUN_00d61fa0(*(undefined8 *)puVar5,(long)&stack0x00000068 + 4);
                  uVar18 = FUN_01600ba0(*(undefined8 *)Method_System_Threading_Tasks_Task_Run<int>__
                                        ,uVar18,uVar26,uVar27,0);
                  if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
                    thunk_FUN_00d32864(*(long *)puVar4);
                  }
                  FUN_02660dac(uVar18,0);
                  lVar13 = *(long *)(unaff_x20 + 0x10);
                  if (lVar13 == 0) goto LAB_0145d050;
                }
                if (*(long *)(lVar13 + 0x58) == 0) goto LAB_0145d050;
                if (*(int *)(*(long *)(lVar13 + 0x58) + 0x18) == 0) {
                  if ((*(long *)(lVar13 + 0x68) == 0) ||
                     (plVar14 = (long *)FUN_00da4fb8(*(undefined8 *)PTR_DAT_033ea8a0,
                                                     *(undefined4 *)
                                                      (*(long *)(lVar13 + 0x68) + 0x18)),
                     puVar5 = 
                     Method_UnityEngine_Rendering_Universal_DebugDisplaySettingsRendering_WidgetFactory_<>c__DisplayClass3_0_<CreateWireframeNotSupportedWarning>b__0__
                     , puVar3 = UnityEngine_XR_InputTrackingState_TypeInfo, plVar14 == (long *)0x0))
                  goto LAB_0145d050;
                  if ((int)plVar14[3] < 1) goto LAB_0145cee8;
                  uVar15 = 0;
                  goto LAB_0145ce80;
                }
                cVar19 = *(char *)(lVar13 + 0x49);
                uVar18 = *(undefined8 *)(lVar13 + 0x50);
                cVar2 = *(char *)(lVar13 + 0x27);
                uVar9 = *(undefined4 *)(in_stack_00000058 + 0x30);
                lVar13 = thunk_FUN_00d62348(*(undefined8 *)PTR_DAT_033f0098);
                if (lVar13 == 0) goto LAB_0145d050;
                FUN_014467b4(lVar13,cVar19 != '\0',uVar18,cVar2 != '\0',uVar9,0);
                if (*(long *)(unaff_x20 + 0x10) == 0) goto LAB_0145d050;
                FUN_0144680c(lVar13,*(undefined8 *)(*(long *)(unaff_x20 + 0x10) + 0x58),0);
                lVar23 = *(long *)(unaff_x20 + 0x10);
                if (lVar23 == 0) goto LAB_0145d050;
                if (*(char *)(lVar23 + 0x4a) != '\0') {
                  iVar11 = *(int *)(lVar23 + 0x20);
                  if (*(int *)(lVar23 + 0x20) <= *(int *)(lVar23 + 0x1c)) {
                    iVar11 = *(int *)(lVar23 + 0x1c);
                  }
                  FUN_01448250(lVar13,*(undefined8 *)(lVar23 + 0x58),iVar11,0);
                  lVar23 = *(long *)(unaff_x20 + 0x10);
                  if (lVar23 == 0) goto LAB_0145d050;
                }
                uVar15 = 0;
                goto LAB_0145cd00;
              }
              FUN_0132138c(lVar23,in_stack_00000028._4_4_,&stack0x00000070,
                           *(undefined8 *)
                            Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Contains<int>__);
              plVar14 = in_stack_00000070;
              lVar13 = *(long *)(in_stack_00000058 + 0x28);
              unaff_s15 = (float)in_stack_00000028._4_4_;
              in_stack_00000060 = in_stack_00000070;
              if (lVar13 != 0) {
                uVar18 = *(undefined8 *)
                          Method_System_Collections_Generic_Dictionary<InternedString,_InputControlLayout_Collection_PrecompiledLayout>_TryGetValue__
                ;
                if (in_stack_00000070 == (long *)0x0) {
                  uVar26 = 0;
                }
                else {
                  if (in_stack_00000070 == (long *)0x0) goto LAB_0145d050;
                  uVar26 = (**(code **)(*in_stack_00000070 + 0x168))
                                     (in_stack_00000070,*(undefined8 *)(*in_stack_00000070 + 0x170))
                  ;
                }
                uVar18 = FUN_015f5b28(uVar18,uVar26,0);
                if ((*(long *)(unaff_x20 + 0x10) == 0) ||
                   (lVar23 = *(long *)(*(long *)(unaff_x20 + 0x10) + 0x60), lVar23 == 0))
                goto LAB_0145d050;
                (**(code **)(lVar13 + 0x18))
                          ((unaff_s15 / (float)*(int *)(lVar23 + 0x18)) * unaff_s14,
                           *(undefined8 *)(lVar13 + 0x40),uVar18,*(undefined8 *)(lVar13 + 0x28));
              }
              if (3 < *(int *)(in_stack_00000058 + 0x30)) {
                uVar18 = *(undefined8 *)PTR_DAT_033f4f00;
                if (plVar14 == (long *)0x0) {
                  uVar26 = 0;
                }
                else {
                  if (plVar14 == (long *)0x0) goto LAB_0145d050;
                  uVar26 = (**(code **)(*plVar14 + 0x168))
                                     (plVar14,*(undefined8 *)(*plVar14 + 0x170));
                }
                uVar18 = FUN_015f5b28(uVar18,uVar26,0);
                if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
                  thunk_FUN_00d32864(*(long *)puVar4);
                }
                FUN_02660dac(uVar18,0);
              }
              if (*(int *)(*(long *)
                            System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo +
                          0xe0) == 0) {
                thunk_FUN_00d32864();
              }
              uVar15 = FUN_0268b4e0(plVar14,0,0);
              if ((uVar15 & 1) != 0) {
                if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
                  thunk_FUN_00d32864();
                }
                uVar18 = *(undefined8 *)StringLiteral_14312;
                goto LAB_0145c940;
              }
              lVar13 = FUN_0142fbb8(plVar14,0);
              if (*(int *)(*(long *)
                            System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo +
                          0xe0) == 0) {
                thunk_FUN_00d32864(*(long *)
                                    System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                                  );
              }
              uVar15 = FUN_0268b4e0(lVar13,0,0);
              if ((uVar15 & 1) != 0) {
                if (plVar14 == (long *)0x0) goto LAB_0145d050;
                uVar18 = FUN_0268b6ac(plVar14,0);
                uVar26 = *(undefined8 *)StringLiteral_3316;
                puVar16 = (undefined8 *)
                          Method_System_Runtime_CompilerServices_ReadOnlyCollectionBuilder<Expression>__ctor__
                ;
LAB_0145c910:
                uVar18 = FUN_01600424(uVar26,uVar18,*puVar16,0);
                lVar13 = *(long *)puVar4;
                goto LAB_0145c928;
              }
              in_stack_00000048 = FUN_01433b54(plVar14,0);
              if (in_stack_00000048 == 0) goto LAB_0145d050;
              if (*(long *)(in_stack_00000048 + 0x18) == 0) {
                if (plVar14 != (long *)0x0) {
                  uVar18 = FUN_0268b6ac(plVar14,0);
                  uVar26 = *(undefined8 *)StringLiteral_3316;
                  puVar16 = (undefined8 *)
                            Method_System_Security_Cryptography_X509Certificates_X509Certificate_System_Runtime_Serialization_ISerializable_GetObjectData__
                  ;
                  goto LAB_0145c910;
                }
                goto LAB_0145d050;
              }
              if (lVar13 == 0) goto LAB_0145d050;
              uVar9 = FUN_02681c0c(lVar13,0);
              in_stack_00000070 = (long *)CONCAT44(in_stack_00000070._4_4_,uVar9);
              uVar15 = FUN_0129eff4(in_stack_00000018,&stack0x00000070,&stack0x000000d0,
                                    *(undefined8 *)
                                     System_Collections_Generic_ICollection<Vertex>_TypeInfo);
              if ((uVar15 & 1) == 0) {
                uVar9 = FUN_02666048(lVar13,0);
                in_stack_000000d0 =
                     FUN_00da4fb8(*(undefined8 *)
                                   Method_System_Collections_Generic_List<VolumeComponent>_Add__,
                                  uVar9);
                iVar11 = FUN_02666048(lVar13,0);
                if (0 < iVar11) {
                  lVar23 = 0;
                  uVar15 = 0;
                  do {
                    if (in_stack_000000d0 == 0) goto LAB_0145d050;
                    if (*(uint *)(in_stack_000000d0 + 0x18) <= uVar15) goto LAB_0145d054;
                    FUN_014344d8(lVar13,in_stack_000000d0 + lVar23 + 0x20,uVar15 & 0xffffffff,0,0);
                    lVar25 = in_stack_000000d0;
                    lVar21 = *(long *)(unaff_x20 + 0x10);
                    if (lVar21 == 0) goto LAB_0145d050;
                    if (*(char *)(lVar21 + 0x48) != '\0') {
                      if (in_stack_000000d0 == 0) goto LAB_0145d050;
                      if (*(int *)(*(long *)Method_System_Collections_Generic_List<Material>_Add__ +
                                  0xe0) == 0) {
                        thunk_FUN_00d32864();
                      }
                      uVar9 = Meta_XR_ImmersiveDebugger_Manager_WatchUtils__RegisterTexture
                                        (lVar13,uVar15 & 0xffffffff);
                      if (*(uint *)(lVar25 + 0x18) <= uVar15) goto LAB_0145d054;
                      *(undefined4 *)(lVar25 + lVar23 + 0x34) = uVar9;
                      lVar21 = *(long *)(unaff_x20 + 0x10);
                      if (lVar21 == 0) goto LAB_0145d050;
                    }
                    lVar25 = in_stack_000000d0;
                    if (*(char *)(lVar21 + 0x27) != '\0') {
                      if (in_stack_000000d0 == 0) goto LAB_0145d050;
                      if (*(uint *)(in_stack_000000d0 + 0x18) <= uVar15) goto LAB_0145d054;
                      if (*(char *)(in_stack_000000d0 + lVar23 + 0x32) == '\0') {
                        in_stack_00000070 = (long *)0x0;
                        in_stack_00000078 = 0;
                        FUN_0268834c(0,0,&stack0x00000070,0);
                        if (*(uint *)(lVar25 + 0x18) <= uVar15) goto LAB_0145d054;
                        lVar25 = lVar25 + lVar23;
                        *(undefined8 *)(lVar25 + 0x28) = in_stack_00000078;
                        *(long **)(lVar25 + 0x20) = in_stack_00000070;
                        uVar18 = *(undefined8 *)System_Linq_Expressions_IArgumentProvider_TypeInfo;
                        if (plVar14 == (long *)0x0) {
                          uVar26 = 0;
                        }
                        else {
                          if (plVar14 == (long *)0x0) goto LAB_0145d050;
                          uVar26 = (**(code **)(*plVar14 + 0x168))
                                             (plVar14,*(undefined8 *)(*plVar14 + 0x170));
                        }
                        uVar18 = FUN_01600424(uVar18,uVar26,
                                              *(undefined8 *)
                                               Method_System_Collections_Generic_List<SerializationFieldInfo>_Add__
                                              ,0);
                        if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
                          thunk_FUN_00d32864(*(long *)puVar4);
                        }
                        FUN_02661754(uVar18,0);
                      }
                    }
                    uVar15 = uVar15 + 1;
                    iVar11 = FUN_02666048(lVar13,0);
                    lVar23 = lVar23 + 0x18;
                  } while ((long)uVar15 < (long)iVar11);
                }
                uVar9 = FUN_02681c0c(lVar13,0);
                in_stack_00000070 = (long *)CONCAT44(in_stack_00000070._4_4_,uVar9);
                FUN_0129a054(in_stack_00000018,&stack0x00000070,in_stack_000000d0,
                             *(undefined8 *)StringLiteral_5001);
              }
              if (*(long *)(unaff_x20 + 0x10) == 0) goto LAB_0145d050;
              if ((*(char *)(*(long *)(unaff_x20 + 0x10) + 0x27) != '\0') &&
                 (4 < *(int *)(in_stack_00000058 + 0x30))) {
                plVar17 = (long *)FUN_00da4fb8(*(undefined8 *)PTR_DAT_033ea8a0,8);
                if (plVar17 == (long *)0x0) goto LAB_0145d050;
                if ((*(long *)PTR_DAT_033f6398 != 0) &&
                   (lVar13 = thunk_FUN_00d6225c(*(long *)PTR_DAT_033f6398,
                                                *(undefined8 *)(*plVar17 + 0x40)), lVar13 == 0))
                goto LAB_0145d058;
                if ((int)plVar17[3] == 0) goto LAB_0145d054;
                if (plVar14 != (long *)0x0) {
                  in_stack_00000020 = plVar14;
                }
                plVar17[4] = *(long *)PTR_DAT_033f6398;
                lVar13 = 0;
                if (plVar14 != (long *)0x0) {
                  if (in_stack_00000020 == (long *)0x0) goto LAB_0145d050;
                  lVar13 = (**(code **)(*in_stack_00000020 + 0x168))
                                     (in_stack_00000020,*(undefined8 *)(*in_stack_00000020 + 0x170))
                  ;
                  if ((lVar13 != 0) &&
                     (lVar23 = thunk_FUN_00d6225c(lVar13,*(undefined8 *)(*plVar17 + 0x40)),
                     lVar23 == 0)) goto LAB_0145d058;
                }
                uVar10 = *(uint *)(plVar17 + 3);
                if (uVar10 < 2) goto LAB_0145d054;
                plVar17[5] = lVar13;
                if (*(long *)
                     Method_UnityEngine_XR_Interaction_Toolkit_Utilities_BurstMathUtility_OrthogonalUpVector__
                    != 0) {
                  lVar13 = thunk_FUN_00d6225c(*(long *)
                                               Method_UnityEngine_XR_Interaction_Toolkit_Utilities_BurstMathUtility_OrthogonalUpVector__
                                              ,*(undefined8 *)(*plVar17 + 0x40));
                  if (lVar13 == 0) goto LAB_0145d058;
                  uVar10 = *(uint *)(plVar17 + 3);
                }
                if (uVar10 < 3) goto LAB_0145d054;
                plVar17[6] = *(long *)
                              Method_UnityEngine_XR_Interaction_Toolkit_Utilities_BurstMathUtility_OrthogonalUpVector__
                ;
                if (in_stack_000000d0 == 0) goto LAB_0145d050;
                in_stack_000000c8._4_4_ = (undefined4)*(undefined8 *)(in_stack_000000d0 + 0x18);
                lVar13 = FUN_0176eb1c((long)&stack0x000000c8 + 4,0);
                if ((lVar13 != 0) &&
                   (lVar23 = thunk_FUN_00d6225c(lVar13,*(undefined8 *)(*plVar17 + 0x40)),
                   lVar23 == 0)) goto LAB_0145d058;
                uVar10 = *(uint *)(plVar17 + 3);
                if (uVar10 < 4) goto LAB_0145d054;
                plVar17[7] = lVar13;
                if (*(long *)Method_UnityEngine_InputSystem_InputActionMap_IsUsableWithDevice__ != 0
                   ) {
                  lVar13 = thunk_FUN_00d6225c(*(long *)
                                               Method_UnityEngine_InputSystem_InputActionMap_IsUsableWithDevice__
                                              ,*(undefined8 *)(*plVar17 + 0x40));
                  if (lVar13 == 0) goto LAB_0145d058;
                  uVar10 = *(uint *)(plVar17 + 3);
                }
                if (uVar10 < 5) goto LAB_0145d054;
                plVar17[8] = *(long *)
                              Method_UnityEngine_InputSystem_InputActionMap_IsUsableWithDevice__;
                if (in_stack_000000d0 == 0) goto LAB_0145d050;
                if (*(int *)(in_stack_000000d0 + 0x18) == 0) goto LAB_0145d054;
                lVar13 = in_stack_000000d0 + 0x30;
                if (*(int *)(*(long *)StringLiteral_9958 + 0xe0) == 0) {
                  thunk_FUN_00d32864();
                }
                lVar13 = FUN_016f5f58(lVar13,0);
                if ((lVar13 != 0) &&
                   (lVar23 = thunk_FUN_00d6225c(lVar13,*(undefined8 *)(*plVar17 + 0x40)),
                   lVar23 == 0)) goto LAB_0145d058;
                uVar10 = *(uint *)(plVar17 + 3);
                if (uVar10 < 6) goto LAB_0145d054;
                plVar17[9] = lVar13;
                if (*(long *)Method_System_Threading_WaitHandle_ThrowAbandonedMutexException__ != 0)
                {
                  lVar13 = thunk_FUN_00d6225c(*(long *)
                                               Method_System_Threading_WaitHandle_ThrowAbandonedMutexException__
                                              ,*(undefined8 *)(*plVar17 + 0x40));
                  if (lVar13 == 0) goto LAB_0145d058;
                  uVar10 = *(uint *)(plVar17 + 3);
                }
                if (uVar10 < 7) goto LAB_0145d054;
                plVar17[10] = *(long *)
                               Method_System_Threading_WaitHandle_ThrowAbandonedMutexException__;
                if (in_stack_000000d0 == 0) goto LAB_0145d050;
                if (*(int *)(in_stack_000000d0 + 0x18) == 0) goto LAB_0145d054;
                in_stack_000000b8 = *(undefined8 *)(in_stack_000000d0 + 0x28);
                in_stack_000000b0 = *(undefined8 *)(in_stack_000000d0 + 0x20);
                lVar13 = FUN_02688894(&stack0x000000b0,0);
                if ((lVar13 != 0) &&
                   (lVar23 = thunk_FUN_00d6225c(lVar13,*(undefined8 *)(*plVar17 + 0x40)),
                   lVar23 == 0)) goto LAB_0145d058;
                if (*(uint *)(plVar17 + 3) < 8) goto LAB_0145d054;
                plVar17[0xb] = lVar13;
                uVar18 = FUN_01600844(plVar17,0);
                if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
                  thunk_FUN_00d32864(*(long *)puVar4);
                }
                FUN_02660dac(uVar18,0);
              }
            } while (*(int *)(in_stack_00000048 + 0x18) < 1);
            unaff_x28 = 0;
          }
          unaff_x21 = thunk_FUN_00d62348(*(undefined8 *)
                                          Method_Obi_ObiConstraints<ObiAerodynamicConstraintsBatch>_GetBatchCount__
                                        );
          if (unaff_x21 == 0) goto LAB_0145d050;
          FUN_017b46ec(unaff_x21,0);
          *(long *)(unaff_x21 + 0x18) = unaff_x20;
          lVar13 = *(long *)(in_stack_00000058 + 0x28);
          if (lVar13 != 0) {
            in_stack_00000070 = (long *)CONCAT44(in_stack_00000070._4_4_,(int)unaff_x28);
            uVar18 = thunk_FUN_00d61fa0(*(undefined8 *)
                                         Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__
                                        ,&stack0x00000070);
            uVar18 = FUN_01600b5c(*(undefined8 *)System_Collections_Generic_IList<string>_TypeInfo,
                                  in_stack_00000060,uVar18,0);
            if (((*(long *)(unaff_x21 + 0x18) == 0) ||
                (lVar23 = *(long *)(*(long *)(unaff_x21 + 0x18) + 0x10), lVar23 == 0)) ||
               (lVar23 = *(long *)(lVar23 + 0x60), lVar23 == 0)) goto LAB_0145d050;
            (**(code **)(lVar13 + 0x18))
                      ((unaff_s15 / (float)*(int *)(lVar23 + 0x18)) * unaff_s14,
                       *(undefined8 *)(lVar13 + 0x40),uVar18,*(undefined8 *)(lVar13 + 0x28));
          }
          if (*(uint *)(in_stack_00000048 + 0x18) <= unaff_x28) goto LAB_0145d054;
          if ((*(long *)(unaff_x21 + 0x18) == 0) ||
             (lVar13 = *(long *)(*(long *)(unaff_x21 + 0x18) + 0x10), lVar13 == 0))
          goto LAB_0145d050;
          lVar13 = *(long *)(lVar13 + 0x68);
          unaff_x25 = *(long *)(in_stack_00000048 + unaff_x28 * 8 + 0x20);
        } while ((lVar13 != 0) &&
                (uVar15 = FUN_01322618(lVar13,unaff_x25,
                                       *(undefined8 *)
                                        System_Collections_Generic_IEnumerable<KeyValuePair<int,_int>>_TypeInfo
                                      ), (uVar15 & 1) == 0));
        if ((in_stack_00000040._4_1_ & 1) == 0) {
          if (in_stack_000000d0 == 0) goto LAB_0145d050;
          if (*(uint *)(in_stack_000000d0 + 0x18) <= unaff_x28) goto LAB_0145d054;
          cVar19 = *(char *)(in_stack_000000d0 + unaff_x28 * 0x18 + 0x30);
        }
        else {
          cVar19 = '\x01';
        }
        in_stack_00000040._4_1_ = cVar19 != '\0';
        if ((unaff_x25 == 0) || (lVar13 = FUN_0268b6ac(unaff_x25,0), lVar13 == 0))
        goto LAB_0145d050;
        uVar15 = FUN_0160472c(lVar13,*(undefined8 *)
                                      Method_TMPro_TMP_TextProcessingStack<MaterialReference>__ctor__
                              ,0);
        if ((uVar15 & 1) != 0) {
          if (in_stack_00000060 == (long *)0x0) goto LAB_0145d050;
          uVar18 = FUN_0268b6ac(in_stack_00000060,0);
          uVar18 = FUN_01600424(*(undefined8 *)
                                 Method_DG_Tweening_DOTweenModulePhysics_<>c__DisplayClass8_0_<DOLocalPath>b__0__
                                ,uVar18,*(undefined8 *)
                                         Method_Oculus_Platform_Message<CowatchingState>_get_Data__,
                                0);
          lVar13 = *(long *)StringLiteral_302;
LAB_0145c928:
          iVar11 = *(int *)(lVar13 + 0xe0);
          goto joined_r0x0145d048;
        }
        if ((*(long *)(unaff_x21 + 0x18) == 0) ||
           (lVar13 = *(long *)(*(long *)(unaff_x21 + 0x18) + 0x10), lVar13 == 0)) goto LAB_0145d050;
        if ((*(char *)(lVar13 + 0x27) != '\0') &&
           ((uVar15 = FUN_01434ca8(in_stack_00000048,0), (uVar15 & 1) == 0 &&
            (1 < *(int *)(in_stack_00000058 + 0x30))))) {
          if (in_stack_00000060 == (long *)0x0) goto LAB_0145d050;
          uVar18 = FUN_0268b6ac(in_stack_00000060,0);
          uVar18 = FUN_01600424(*(undefined8 *)StringLiteral_3316,uVar18,
                                *(undefined8 *)
                                 Method_Unity_Burst_Intrinsics_Arm_Neon_vmulq_laneq_f32__,0);
          if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
            thunk_FUN_00d32864(*(long *)StringLiteral_302);
          }
          FUN_02661754(uVar18,0);
        }
        if (((*(long *)(unaff_x21 + 0x18) == 0) ||
            (lVar13 = *(long *)(*(long *)(unaff_x21 + 0x18) + 0x10), lVar13 == 0)) ||
           (lVar13 = *(long *)(lVar13 + 0x70), lVar13 == 0)) goto LAB_0145d050;
        unaff_x24 = (long *)FUN_00da4fb8(*(undefined8 *)
                                          Method_UnityEngine_XR_ARSubsystems_XRCpuImage_ValidateConversionParamsAndThrow__
                                         ,*(undefined4 *)(lVar13 + 0x18));
        lVar13 = *(long *)(unaff_x21 + 0x18);
        if (lVar13 == 0) goto LAB_0145d050;
        unaff_x22 = 0;
      }
      if (DAT_03774e1e == '\0') {
        thunk_FUN_00d48444();
        DAT_03774e1e = '\x01';
      }
      puVar22 = *(ulong **)(*unaff_x29 + 0xb8);
      in_stack_000000a8 = puVar22[1];
      if (DAT_03774d77 == '\0') {
        thunk_FUN_00d48444();
        DAT_03774d77 = '\x01';
        puVar22 = *(ulong **)(*unaff_x29 + 0xb8);
      }
      in_stack_000000a0 = *puVar22;
      if ((((*(long *)(unaff_x21 + 0x18) == 0) ||
           (lVar13 = *(long *)(*(long *)(unaff_x21 + 0x18) + 0x10), lVar13 == 0)) ||
          (lVar13 = *(long *)(lVar13 + 0x70), lVar13 == 0)) ||
         (FUN_0132138c(lVar13,unaff_x22 & 0xffffffff,&stack0x00000070,*unaff_x27),
         in_stack_00000070 == (long *)0x0)) break;
      uVar15 = FUN_0267e21c(unaff_x25,in_stack_00000070[2],0);
      if ((uVar15 & 1) != 0) goto code_r0x0145c014;
      uVar9 = 0;
      plVar14 = (long *)0x0;
      fVar29 = 0.0;
    } while( true );
  }
  goto LAB_0145d050;
code_r0x0145c014:
  if (((*(long *)(unaff_x21 + 0x18) == 0) ||
      (lVar13 = *(long *)(*(long *)(unaff_x21 + 0x18) + 0x10), lVar13 == 0)) ||
     ((lVar13 = *(long *)(lVar13 + 0x90), lVar13 == 0 ||
      (lVar13 = FUN_02666a34(lVar13,0), lVar13 == 0)))) goto LAB_0145d050;
  param_2 = FUN_0268b6ac(lVar13,0);
  param_1 = *(long *)(unaff_x21 + 0x18);
  goto code_r0x0145c044;
  while( true ) {
    lVar13 = FUN_0268b6ac(in_stack_00000070,0);
    if ((lVar13 != 0) &&
       (lVar23 = thunk_FUN_00d6225c(lVar13,*(undefined8 *)(*plVar14 + 0x40)), lVar23 == 0))
    goto LAB_0145d058;
    uVar10 = *(uint *)(plVar14 + 3);
    if (uVar10 <= uVar15) goto LAB_0145d054;
    plVar14[uVar15 + 4] = lVar13;
    uVar15 = uVar15 + 1;
    if ((long)(int)uVar10 <= (long)uVar15) break;
LAB_0145ce80:
    if (((*(long *)(unaff_x20 + 0x10) == 0) ||
        (lVar13 = *(long *)(*(long *)(unaff_x20 + 0x10) + 0x68), lVar13 == 0)) ||
       (FUN_0132138c(lVar13,uVar15 & 0xffffffff,&stack0x00000070,*(undefined8 *)puVar6),
       in_stack_00000070 == (long *)0x0)) goto LAB_0145d050;
  }
LAB_0145cee8:
  lVar13 = FUN_01600f98(*(undefined8 *)PTR_DAT_033f38b8,plVar14,0);
  plVar14 = (long *)FUN_00da4fb8(*(undefined8 *)PTR_DAT_033ea8a0,5);
  if (plVar14 != (long *)0x0) {
    lVar23 = *(long *)puVar3;
    if ((lVar23 != 0) &&
       (lVar23 = thunk_FUN_00d6225c(lVar23,*(undefined8 *)(*plVar14 + 0x40)), lVar23 == 0)) {
LAB_0145d058:
      uVar18 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
      FUN_00da5038(uVar18,0);
    }
    if ((int)plVar14[3] != 0) {
      plVar14[4] = *(long *)puVar3;
      if (*(long *)(unaff_x20 + 0x10) == 0) goto LAB_0145d050;
      plVar17 = *(long **)(*(long *)(unaff_x20 + 0x10) + 0x90);
      if (plVar17 == (long *)0x0) {
        lVar23 = 0;
      }
      else {
        lVar23 = (**(code **)(*plVar17 + 0x168))(plVar17,*(undefined8 *)(*plVar17 + 0x170));
        if ((lVar23 != 0) &&
           (lVar25 = thunk_FUN_00d6225c(lVar23,*(undefined8 *)(*plVar14 + 0x40)), lVar25 == 0))
        goto LAB_0145d058;
      }
      uVar10 = *(uint *)(plVar14 + 3);
      if (1 < uVar10) {
        plVar14[5] = lVar23;
        lVar23 = *(long *)puVar5;
        if (lVar23 != 0) {
          lVar23 = thunk_FUN_00d6225c(lVar23,*(undefined8 *)(*plVar14 + 0x40));
          if (lVar23 == 0) goto LAB_0145d058;
          uVar10 = *(uint *)(plVar14 + 3);
        }
        puVar3 = Method_UnityEngine_Playables_ScriptPlayable<ParticleControlPlayable>_GetBehaviour__
        ;
        if (2 < uVar10) {
          plVar14[6] = *(long *)puVar5;
          if (lVar13 != 0) {
            lVar23 = thunk_FUN_00d6225c(lVar13,*(undefined8 *)(*plVar14 + 0x40));
            if (lVar23 == 0) goto LAB_0145d058;
            uVar10 = *(uint *)(plVar14 + 3);
          }
          if (3 < uVar10) {
            plVar14[7] = lVar13;
            lVar13 = *(long *)puVar3;
            if (lVar13 != 0) {
              lVar13 = thunk_FUN_00d6225c(lVar13,*(undefined8 *)(*plVar14 + 0x40));
              if (lVar13 == 0) goto LAB_0145d058;
              uVar10 = *(uint *)(plVar14 + 3);
            }
            if (4 < uVar10) {
              plVar14[8] = *(long *)puVar3;
              uVar18 = FUN_01600844(plVar14,0);
              lVar13 = *(long *)puVar4;
              iVar11 = *(int *)(lVar13 + 0xe0);
joined_r0x0145d048:
              if (iVar11 == 0) {
                thunk_FUN_00d32864(lVar13);
              }
LAB_0145c940:
              FUN_026610e4(uVar18,0);
              lVar13 = *(long *)(in_stack_00000058 + 0x38);
joined_r0x0145c834:
              if (lVar13 != 0) {
                *(undefined1 *)(lVar13 + 0x10) = 0;
                return 0;
              }
              goto LAB_0145d050;
            }
          }
        }
      }
    }
LAB_0145d054:
                    /* WARNING: Subroutine does not return */
    FUN_00da5194();
  }
  goto LAB_0145d050;
  while( true ) {
    if ((long)*(int *)(lVar13 + 0x18) <= (long)uVar15) {
      if (*(int *)(in_stack_00000058 + 0x30) < 4) {
        return 0;
      }
      in_stack_00000098 = FUN_020407b0(in_stack_00000010,0);
      uVar18 = FUN_01770034(&stack0x00000098,*(undefined8 *)StringLiteral_12992,0);
      uVar18 = FUN_015f5b28(*(undefined8 *)
                             Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<PointerCaptureOutEvent>__
                            ,uVar18,0);
      if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
        thunk_FUN_00d32864(*(long *)puVar4);
      }
      FUN_02660dac(uVar18,0);
      return 0;
    }
    FUN_0132138c(lVar13,uVar15 & 0xffffffff,&stack0x00000070,*unaff_x27);
    plVar14 = in_stack_00000070;
    if (in_stack_00000070 == (long *)0x0) break;
    lVar23 = *(long *)(unaff_x20 + 0x10);
    if (*(char *)((long)in_stack_00000070 + 0x19) != '\0') {
      if (lVar23 == 0) break;
      iVar12 = 0;
      iVar11 = 0;
      while( true ) {
        lVar13 = *(long *)(lVar23 + 0x58);
        if (lVar13 == 0) goto LAB_0145d050;
        if (*(int *)(lVar13 + 0x18) <= iVar11) break;
        FUN_0132138c(lVar13,iVar11,&stack0x00000070,*(undefined8 *)puVar3);
        if ((in_stack_00000070 == (long *)0x0) || (lVar13 = in_stack_00000070[2], lVar13 == 0))
        goto LAB_0145d050;
        if (*(uint *)(lVar13 + 0x18) <= uVar15) goto LAB_0145d054;
        lVar13 = *(long *)(lVar13 + uVar15 * 8 + 0x20);
        if (lVar13 == 0) goto LAB_0145d050;
        lVar23 = *(long *)(unaff_x20 + 0x10);
        iVar11 = iVar11 + 1;
        iVar12 = *(int *)(lVar13 + 0x60) + iVar12;
        if (lVar23 == 0) goto LAB_0145d050;
      }
      *(byte *)(plVar14 + 3) = (byte)((uint)iVar12 >> 0x1f);
      *(undefined1 *)((long)plVar14 + 0x19) = 0;
    }
    uVar15 = uVar15 + 1;
    if (lVar23 == 0) break;
LAB_0145cd00:
    lVar13 = *(long *)(lVar23 + 0x70);
    if (lVar13 == 0) break;
  }
LAB_0145d050:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


