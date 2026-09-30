/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.DebugInspectorManager.GizmoManagerFromInspector.<>c__DisplayClass1_0$$<RegisterSpecialisedWidget>g__GetState|1
ENTRY_POINT: 0143a730
PROGRAM: Lovesick-libil2cpp.so
SCORE: 122
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_3;validity_or_gating_hits_21;paired_field_refs_with_eye_source;telemetry_or_network_hits_1;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


long Meta_XR_ImmersiveDebugger_DebugInspectorManager_GizmoManagerFromInspector_<>c__DisplayClass1_0__<RegisterSpecialisedWidget>g__GetState_1
               (void)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  float fVar9;
  long lVar10;
  ulong uVar11;
  undefined8 uVar12;
  long *plVar13;
  uint uVar14;
  long unaff_x19;
  undefined8 *puVar15;
  long lVar16;
  long unaff_x20;
  long lVar17;
  long unaff_x25;
  long unaff_x27;
  int iVar18;
  int iVar19;
  float fVar20;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000078;
  int iStack0000000000000088;
  undefined4 uStack000000000000008c;
  undefined4 uStack0000000000000090;
  undefined4 uStack0000000000000094;
  uint uStack00000000000000b0;
  float fStack00000000000000b4;
  undefined4 uStack00000000000000b8;
  undefined4 uStack00000000000000bc;
  undefined4 uStack00000000000000c0;
  undefined4 uStack00000000000000c4;
  undefined8 in_stack_000000c8;
  undefined4 in_stack_000000d0;
  float fStack00000000000000d8;
  float fStack00000000000000dc;
  int iStack00000000000000e0;
  int iStack00000000000000e4;
  
  puVar15 = *(undefined8 **)(unaff_x19 + 0x7b0);
  FUN_01436c38();
  lVar10 = thunk_FUN_00d62348(*puVar15);
  if (lVar10 != 0) {
    FUN_017b46ec(lVar10,0);
    FUN_01324f34();
    lVar10 = *(long *)(unaff_x20 + 0x18);
    if ((lVar10 != 0) && (unaff_x25 != 0)) {
      iVar19 = *(int *)(lVar10 + 0x10);
      iVar18 = *(int *)(lVar10 + 0x14);
      FUN_0132138c();
      uVar11 = FUN_01435f44((float)iVar19,(float)iVar18);
      puVar6 = Method_OVRTaskBuilder<OVRPlugin_Result>_SetStateMachine__;
      puVar5 = System_Runtime_Remoting_Messaging_ServerContextTerminatorSink_TypeInfo;
      if ((in_stack_00000060._4_4_ < 0xb) && ((uVar11 & 1) != 0)) {
        if (3 < *(int *)(unaff_x20 + 0x10)) {
          if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          FUN_02660dac(*(undefined8 *)puVar5,0);
        }
        lVar10 = FUN_014394d4();
      }
      else {
        uVar12 = FUN_01325140();
        lVar10 = thunk_FUN_00d62348(*(undefined8 *)puVar6);
        puVar6 = Method_Unity_Burst_Intrinsics_Arm_Neon_vmaxnmv_f32__;
        puVar5 = Method_Obi_ObiNativeList<TriangleMeshHeader>__ctor__;
        if (lVar10 == 0) goto LAB_0143af6c;
        FUN_017b46ec(lVar10,0);
        *(undefined8 *)(lVar10 + 0x28) = uVar12;
        uVar12 = FUN_00da4fb8(*(undefined8 *)puVar5,*(undefined4 *)(unaff_x27 + 0x18));
        *(undefined8 *)(lVar10 + 0x20) = uVar12;
        uVar12 = FUN_00da4fb8(*(undefined8 *)puVar6,*(undefined4 *)(unaff_x27 + 0x18));
        fVar9 = fStack00000000000000d8;
        *(undefined8 *)(lVar10 + 0x30) = uVar12;
        *(int *)(lVar10 + 0x10) = iStack00000000000000e4;
        *(undefined8 *)(lVar10 + 0x18) = 0xffffffffffffffff;
        *(int *)(lVar10 + 0x14) = iStack00000000000000e0;
        puVar8 = StringLiteral_9909;
        puVar7 = Method_System_Runtime_Serialization_Formatters_Binary_BinaryFormatter_Serialize__;
        puVar6 = Method_System_Collections_Generic_List<Edge>_ToArray__;
        puVar5 = System_Xml_Serialization_XmlCustomFormatter_TypeInfo;
        in_stack_000000c8._4_4_ = 0;
        if (0 < *(int *)(unaff_x27 + 0x18)) {
          fVar20 = fStack00000000000000d8 + fStack00000000000000d8;
          do {
            FUN_0132138c();
            uVar14 = in_stack_000000c8._4_4_;
            uVar11 = _iStack0000000000000088;
            if (_iStack0000000000000088 == 0) goto LAB_0143af6c;
            piVar1 = (int *)(_iStack0000000000000088 + 0x1c);
            piVar3 = (int *)(_iStack0000000000000088 + 0x20);
            piVar2 = (int *)(_iStack0000000000000088 + 0x14);
            piVar4 = (int *)(_iStack0000000000000088 + 0x18);
            lVar16 = *(long *)(lVar10 + 0x20);
            lVar17 = (long)(int)in_stack_000000c8._4_4_;
            _iStack0000000000000088 = 0;
            _uStack0000000000000090 = 0;
            FUN_0268834c(fStack00000000000000dc + (float)*piVar1 / (float)iStack00000000000000e4,
                         fVar9 + (float)*piVar3 / (float)iStack00000000000000e0,
                         (float)*piVar2 / (float)iStack00000000000000e4 -
                         (fStack00000000000000dc + fStack00000000000000dc),
                         (float)*piVar4 / (float)iStack00000000000000e0 - fVar20,&stack0x00000088,0)
            ;
            if (lVar16 == 0) goto LAB_0143af6c;
            if (*(uint *)(lVar16 + 0x18) <= uVar14) {
LAB_0143af70:
                    /* WARNING: Subroutine does not return */
              FUN_00da5194();
            }
            lVar16 = lVar16 + lVar17 * 0x10;
            *(int *)(lVar16 + 0x20) = iStack0000000000000088;
            *(undefined4 *)(lVar16 + 0x24) = uStack000000000000008c;
            *(undefined4 *)(lVar16 + 0x28) = uStack0000000000000090;
            *(undefined4 *)(lVar16 + 0x2c) = uStack0000000000000094;
            uStack00000000000000b8 = iStack0000000000000088;
            uStack00000000000000bc = uStack000000000000008c;
            uStack00000000000000c0 = uStack0000000000000090;
            uStack00000000000000c4 = uStack0000000000000094;
            lVar16 = *(long *)(lVar10 + 0x30);
            if (lVar16 == 0) goto LAB_0143af6c;
            if (*(uint *)(lVar16 + 0x18) <= in_stack_000000c8._4_4_) goto LAB_0143af70;
            *(undefined4 *)(lVar16 + (long)(int)in_stack_000000c8._4_4_ * 4 + 0x20) =
                 *(undefined4 *)(uVar11 + 0x10);
            if (3 < *(int *)(unaff_x20 + 0x10)) {
              plVar13 = (long *)FUN_00da4fb8(*(undefined8 *)PTR_DAT_033ea8a0,0x10);
              if (plVar13 == (long *)0x0) goto LAB_0143af6c;
              if ((*(long *)Method_UnityEngine_Component_GetComponent<NavMeshSurface>__ != 0) &&
                 (lVar16 = thunk_FUN_00d6225c(*(long *)
                                               Method_UnityEngine_Component_GetComponent<NavMeshSurface>__
                                              ,*(undefined8 *)(*plVar13 + 0x40)), lVar16 == 0)) {
LAB_0143af74:
                uVar12 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
                FUN_00da5038(uVar12,0);
              }
              if ((int)plVar13[3] == 0) goto LAB_0143af70;
              plVar13[4] = *(long *)Method_UnityEngine_Component_GetComponent<NavMeshSurface>__;
              lVar16 = FUN_0176eb1c((long)&stack0x000000c8 + 4,0);
              if ((lVar16 != 0) &&
                 (lVar17 = thunk_FUN_00d6225c(lVar16,*(undefined8 *)(*plVar13 + 0x40)), lVar17 == 0)
                 ) goto LAB_0143af74;
              uVar14 = *(uint *)(plVar13 + 3);
              if (uVar14 < 2) goto LAB_0143af70;
              plVar13[5] = lVar16;
              if (*(long *)System_Collections_Generic_List<Link>_TypeInfo != 0) {
                lVar16 = thunk_FUN_00d6225c(*(long *)System_Collections_Generic_List<Link>_TypeInfo,
                                            *(undefined8 *)(*plVar13 + 0x40));
                if (lVar16 == 0) goto LAB_0143af74;
                uVar14 = *(uint *)(plVar13 + 3);
              }
              if (uVar14 < 3) goto LAB_0143af70;
              plVar13[6] = *(long *)System_Collections_Generic_List<Link>_TypeInfo;
              lVar16 = FUN_0176eb1c((undefined4 *)(uVar11 + 0x10),0);
              if ((lVar16 != 0) &&
                 (lVar17 = thunk_FUN_00d6225c(lVar16,*(undefined8 *)(*plVar13 + 0x40)), lVar17 == 0)
                 ) goto LAB_0143af74;
              uVar14 = *(uint *)(plVar13 + 3);
              if (uVar14 < 4) goto LAB_0143af70;
              plVar13[7] = lVar16;
              lVar16 = *(long *)puVar5;
              if (lVar16 != 0) {
                lVar16 = thunk_FUN_00d6225c(lVar16,*(undefined8 *)(*plVar13 + 0x40));
                if (lVar16 == 0) goto LAB_0143af74;
                uVar14 = *(uint *)(plVar13 + 3);
              }
              if (uVar14 < 5) goto LAB_0143af70;
              plVar13[8] = *(long *)puVar5;
              fStack00000000000000b4 = (float)FUN_02688390(&stack0x000000b8,0);
              fStack00000000000000b4 = fStack00000000000000b4 * (float)iStack00000000000000e4;
              lVar16 = FUN_017840ac((long)&stack0x000000b0 + 4,0);
              if ((lVar16 != 0) &&
                 (lVar17 = thunk_FUN_00d6225c(lVar16,*(undefined8 *)(*plVar13 + 0x40)), lVar17 == 0)
                 ) goto LAB_0143af74;
              uVar14 = *(uint *)(plVar13 + 3);
              if (uVar14 < 6) goto LAB_0143af70;
              plVar13[9] = lVar16;
              lVar16 = *(long *)puVar8;
              if (lVar16 != 0) {
                lVar16 = thunk_FUN_00d6225c(lVar16,*(undefined8 *)(*plVar13 + 0x40));
                if (lVar16 == 0) goto LAB_0143af74;
                uVar14 = *(uint *)(plVar13 + 3);
              }
              if (uVar14 < 7) goto LAB_0143af70;
              plVar13[10] = *(long *)puVar8;
              fStack00000000000000b4 = (float)FUN_026883a0(&stack0x000000b8,0);
              fStack00000000000000b4 = fStack00000000000000b4 * (float)iStack00000000000000e0;
              lVar16 = FUN_017840ac((long)&stack0x000000b0 + 4,0);
              if ((lVar16 != 0) &&
                 (lVar17 = thunk_FUN_00d6225c(lVar16,*(undefined8 *)(*plVar13 + 0x40)), lVar17 == 0)
                 ) goto LAB_0143af74;
              uVar14 = *(uint *)(plVar13 + 3);
              if (uVar14 < 8) goto LAB_0143af70;
              plVar13[0xb] = lVar16;
              if (*(long *)PTR_DAT_033f5960 != 0) {
                lVar16 = thunk_FUN_00d6225c(*(long *)PTR_DAT_033f5960,
                                            *(undefined8 *)(*plVar13 + 0x40));
                if (lVar16 == 0) goto LAB_0143af74;
                uVar14 = *(uint *)(plVar13 + 3);
              }
              if (uVar14 < 9) goto LAB_0143af70;
              plVar13[0xc] = *(long *)PTR_DAT_033f5960;
              fStack00000000000000b4 = (float)FUN_026884c4(&stack0x000000b8,0);
              fStack00000000000000b4 = fStack00000000000000b4 * (float)iStack00000000000000e4;
              lVar16 = FUN_017840ac((long)&stack0x000000b0 + 4,0);
              if ((lVar16 != 0) &&
                 (lVar17 = thunk_FUN_00d6225c(lVar16,*(undefined8 *)(*plVar13 + 0x40)), lVar17 == 0)
                 ) goto LAB_0143af74;
              uVar14 = *(uint *)(plVar13 + 3);
              if (uVar14 < 10) goto LAB_0143af70;
              plVar13[0xd] = lVar16;
              if (*(long *)Method_MedleyBossPushPhase_StartPhase__ != 0) {
                lVar16 = thunk_FUN_00d6225c(*(long *)Method_MedleyBossPushPhase_StartPhase__,
                                            *(undefined8 *)(*plVar13 + 0x40));
                if (lVar16 == 0) goto LAB_0143af74;
                uVar14 = *(uint *)(plVar13 + 3);
              }
              if (uVar14 < 0xb) goto LAB_0143af70;
              plVar13[0xe] = *(long *)Method_MedleyBossPushPhase_StartPhase__;
              fStack00000000000000b4 = (float)FUN_026884d4(&stack0x000000b8,0);
              fStack00000000000000b4 = fStack00000000000000b4 * (float)iStack00000000000000e0;
              lVar16 = FUN_017840ac((long)&stack0x000000b0 + 4,0);
              if ((lVar16 != 0) &&
                 (lVar17 = thunk_FUN_00d6225c(lVar16,*(undefined8 *)(*plVar13 + 0x40)), lVar17 == 0)
                 ) goto LAB_0143af74;
              uVar14 = *(uint *)(plVar13 + 3);
              if (uVar14 < 0xc) goto LAB_0143af70;
              plVar13[0xf] = lVar16;
              lVar16 = *(long *)puVar6;
              if (lVar16 != 0) {
                lVar16 = thunk_FUN_00d6225c(lVar16,*(undefined8 *)(*plVar13 + 0x40));
                if (lVar16 == 0) goto LAB_0143af74;
                uVar14 = *(uint *)(plVar13 + 3);
              }
              if (uVar14 < 0xd) goto LAB_0143af70;
              plVar13[0x10] = *(long *)puVar6;
              FUN_0132138c(in_stack_00000078,in_stack_000000c8._4_4_,&stack0x00000088,
                           *(undefined8 *)StringLiteral_4419);
              uStack00000000000000b0 = (uint)(_iStack0000000000000088 >> 0x1f) & 0xfffffffe;
              lVar16 = FUN_0176eb1c(&stack0x000000b0,0);
              if ((lVar16 != 0) &&
                 (lVar17 = thunk_FUN_00d6225c(lVar16,*(undefined8 *)(*plVar13 + 0x40)), lVar17 == 0)
                 ) goto LAB_0143af74;
              uVar14 = *(uint *)(plVar13 + 3);
              if (uVar14 < 0xe) goto LAB_0143af70;
              plVar13[0x11] = lVar16;
              lVar16 = *(long *)puVar7;
              if (lVar16 != 0) {
                lVar16 = thunk_FUN_00d6225c(lVar16,*(undefined8 *)(*plVar13 + 0x40));
                if (lVar16 == 0) goto LAB_0143af74;
                uVar14 = *(uint *)(plVar13 + 3);
              }
              if (uVar14 < 0xf) goto LAB_0143af70;
              plVar13[0x12] = *(long *)puVar7;
              FUN_0132138c(in_stack_00000078,in_stack_000000c8._4_4_,&stack0x00000088,
                           *(undefined8 *)StringLiteral_4419);
              uStack00000000000000b0 = iStack0000000000000088 << 1;
              lVar16 = FUN_0176eb1c(&stack0x000000b0,0);
              if ((lVar16 != 0) &&
                 (lVar17 = thunk_FUN_00d6225c(lVar16,*(undefined8 *)(*plVar13 + 0x40)), lVar17 == 0)
                 ) goto LAB_0143af74;
              if (*(uint *)(plVar13 + 3) < 0x10) goto LAB_0143af70;
              plVar13[0x13] = lVar16;
              uVar12 = FUN_01600844(plVar13,0);
              lVar17 = *(long *)Method_System_Data_SqlTypes_SqlMoney_op_UnaryNegation__;
              lVar16 = *(long *)(lVar17 + 0x38);
              if (lVar16 == 0) {
                FUN_00d59478(lVar17);
                lVar16 = *(long *)(lVar17 + 0x38);
              }
              lVar16 = *(long *)(lVar16 + 0x10);
              if ((*(byte *)(lVar16 + 0x132) & 1) == 0) {
                lVar16 = FUN_00d5941c();
              }
              if (*(int *)(lVar16 + 0xe0) == 0) {
                thunk_FUN_00d32864();
              }
              lVar16 = *(long *)(*(long *)(lVar17 + 0x38) + 0x10);
              if ((*(byte *)(lVar16 + 0x132) & 1) == 0) {
                lVar16 = FUN_00d5941c();
              }
              FUN_013f38b0(uVar12,**(undefined8 **)(lVar16 + 0xb8),0);
            }
            in_stack_000000c8._4_4_ = in_stack_000000c8._4_4_ + 1;
          } while ((int)in_stack_000000c8._4_4_ < *(int *)(unaff_x27 + 0x18));
        }
        FUN_014359a0(lVar10);
      }
      return lVar10;
    }
  }
LAB_0143af6c:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


