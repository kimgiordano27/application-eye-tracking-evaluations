/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.ActionManager.<>c$$.cctor
ENTRY_POINT: 01455e70
PROGRAM: Lovesick-libil2cpp.so
SCORE: 196
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;gaze_interaction;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;ui_interaction;telemetry;structure_combo
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_3;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_1;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_7;telemetry_or_network_hits_8;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_gaze_retrieval_or_extraction;functionality_gaze_interaction_hits_1;functionality_data_collection_or_telemetry_hits_1
*/


undefined8
Meta_XR_ImmersiveDebugger_Manager_ActionManager_<>c___cctor
          (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  uint uVar10;
  long lVar11;
  ulong uVar12;
  int *piVar13;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  undefined8 *unaff_x22;
  long unaff_x23;
  long lVar14;
  long *plVar15;
  long unaff_x24;
  long *plVar16;
  long *unaff_x27;
  long *unaff_x28;
  double unaff_d11;
  undefined4 uStack0000000000000000;
  undefined4 uStack0000000000000004;
  undefined8 in_stack_00000008;
  double in_stack_00000010;
  int iStack0000000000000018;
  int iStack000000000000001c;
  undefined4 uStack0000000000000020;
  uint uStack0000000000000024;
  long in_stack_00000028;
  
  do {
    uVar8 = FUN_015f5b28(param_1,param_2,param_3);
    (**(code **)(unaff_x23 + 0x18))
              (*(undefined8 *)(unaff_x23 + 0x40),uVar8,*(undefined8 *)(unaff_x23 + 0x28));
    lVar14 = *(long *)(unaff_x19 + 0x38);
    uVar8 = extraout_x1_00;
    do {
      if (uStack0000000000000024 == 0) {
        if (lVar14 != 0) {
          if (*(int *)(*(long *)System_Threading_Timer_TimerComparer_TypeInfo + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          in_stack_00000010 = unaff_d11;
          uVar8 = FUN_017562ec(&stack0x00000010,*(undefined8 *)StringLiteral_9134,0);
          uVar8 = FUN_015f5b28(*(undefined8 *)Method_Obi_ObiNativeList<float>_CopyReplicate__,uVar8,
                               0);
          (**(code **)(lVar14 + 0x18))
                    (*(undefined8 *)(lVar14 + 0x40),uVar8,*(undefined8 *)(lVar14 + 0x28));
        }
        if (2 < *(int *)(unaff_x19 + 0x28)) {
          if (*(int *)(*(long *)System_Threading_Timer_TimerComparer_TypeInfo + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          in_stack_00000010 = unaff_d11;
          uVar8 = FUN_017562ec(&stack0x00000010,*(undefined8 *)StringLiteral_9134,0);
          uVar8 = FUN_015f5b28(*(undefined8 *)
                                Method_UnityEngine_SubsystemsImplementation_SubsystemWithProvider<XRPlaneSubsystem,_XRPlaneSubsystemDescriptor,_XRPlaneSubsystem_Provider>_get_provider__
                               ,uVar8,0);
          if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
            thunk_FUN_00d32864(*(long *)StringLiteral_302);
          }
          FUN_02660dac(uVar8,0);
        }
        if (*(long *)(unaff_x19 + 0x20) == 0) goto LAB_0145640c;
        in_stack_00000008 =
             FUN_026714b4(unaff_x28,unaff_x27,*(undefined4 *)(*(long *)(unaff_x19 + 0x20) + 0x18),
                          0x2000,0,0);
        if (2 < *(int *)(unaff_x19 + 0x28)) {
          plVar15 = (long *)FUN_00da4fb8(*(undefined8 *)PTR_DAT_033ea8a0,6);
          if (plVar15 == (long *)0x0) goto LAB_0145640c;
          if ((*(long *)Method_System_Runtime_Remoting_RemotingServices_IsTransparentProxy__ != 0)
             && (lVar14 = thunk_FUN_00d6225c(*(long *)
                                              Method_System_Runtime_Remoting_RemotingServices_IsTransparentProxy__
                                             ,*(undefined8 *)(*plVar15 + 0x40)), lVar14 == 0)) {
LAB_01456414:
            uVar8 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
            FUN_00da5038(uVar8,0);
          }
          if ((int)plVar15[3] == 0) goto LAB_01456410;
          plVar15[4] = *(long *)Method_System_Runtime_Remoting_RemotingServices_IsTransparentProxy__
          ;
          if (unaff_x27 == (long *)0x0) goto LAB_0145640c;
          uStack0000000000000020 = (undefined4)unaff_x27[3];
          lVar14 = FUN_0176eb1c(&stack0x00000020,0);
          if ((lVar14 != 0) &&
             (lVar9 = thunk_FUN_00d6225c(lVar14,*(undefined8 *)(*plVar15 + 0x40)), lVar9 == 0))
          goto LAB_01456414;
          puVar2 = Method_System_Collections_Hashtable_OnDeserialization__;
          uVar10 = *(uint *)(plVar15 + 3);
          if (uVar10 < 2) {
LAB_01456410:
                    /* WARNING: Subroutine does not return */
            FUN_00da5194();
          }
          plVar15[5] = lVar14;
          lVar14 = *(long *)puVar2;
          if (lVar14 != 0) {
            lVar14 = thunk_FUN_00d6225c(lVar14,*(undefined8 *)(*plVar15 + 0x40));
            if (lVar14 == 0) goto LAB_01456414;
            uVar10 = *(uint *)(plVar15 + 3);
          }
          if (uVar10 < 3) goto LAB_01456410;
          plVar15[6] = *(long *)puVar2;
          uStack0000000000000020 =
               (**(code **)(*unaff_x28 + 0x188))(unaff_x28,*(undefined8 *)(*unaff_x28 + 400));
          lVar14 = FUN_0176eb1c(&stack0x00000020,0);
          if ((lVar14 != 0) &&
             (lVar9 = thunk_FUN_00d6225c(lVar14,*(undefined8 *)(*plVar15 + 0x40)), lVar9 == 0))
          goto LAB_01456414;
          uVar10 = *(uint *)(plVar15 + 3);
          if (uVar10 < 4) goto LAB_01456410;
          plVar15[7] = lVar14;
          if (*(long *)StringLiteral_3287 != 0) {
            lVar14 = thunk_FUN_00d6225c(*(long *)StringLiteral_3287,*(undefined8 *)(*plVar15 + 0x40)
                                       );
            if (lVar14 == 0) goto LAB_01456414;
            uVar10 = *(uint *)(plVar15 + 3);
          }
          if (uVar10 < 5) goto LAB_01456410;
          plVar15[8] = *(long *)StringLiteral_3287;
          uStack0000000000000020 =
               (**(code **)(*unaff_x28 + 0x1a8))(unaff_x28,*(undefined8 *)(*unaff_x28 + 0x1b0));
          lVar14 = FUN_0176eb1c(&stack0x00000020,0);
          if ((lVar14 != 0) &&
             (lVar9 = thunk_FUN_00d6225c(lVar14,*(undefined8 *)(*plVar15 + 0x40)), lVar9 == 0))
          goto LAB_01456414;
          if (*(uint *)(plVar15 + 3) < 6) goto LAB_01456410;
          plVar15[9] = lVar14;
          uVar8 = FUN_01600844(plVar15,0);
          if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
            thunk_FUN_00d32864(*(long *)StringLiteral_302);
          }
          FUN_02660dac(uVar8,0);
        }
        uStack0000000000000004 =
             (**(code **)(*unaff_x28 + 0x188))(unaff_x28,*(undefined8 *)(*unaff_x28 + 400));
        uStack0000000000000000 =
             (**(code **)(*unaff_x28 + 0x1a8))(unaff_x28,*(undefined8 *)(*unaff_x28 + 0x1b0));
        FUN_026723f8(unaff_x28,0);
        puVar7 = (undefined8 *)StringLiteral_11624;
      }
      else {
        if (lVar14 != 0) {
          if (unaff_x24 == 0) goto LAB_0145640c;
          uVar8 = FUN_015f5b28(*(undefined8 *)
                                Method_UnityEngine_XR_InputDevice_CheckValidAndSetDefault<HapticCapabilities>__
                               ,*(undefined8 *)(unaff_x24 + 0x10),0);
          (**(code **)(lVar14 + 0x18))
                    (*(undefined8 *)(lVar14 + 0x40),uVar8,*(undefined8 *)(lVar14 + 0x28));
          uVar8 = extraout_x1_01;
        }
        if (*(long *)(unaff_x19 + 0x20) == 0) goto LAB_0145640c;
        unaff_x28 = (long *)FUN_014549d4(unaff_x27,uVar8,in_stack_00000008,uStack0000000000000004,
                                         uStack0000000000000000);
        puVar7 = (undefined8 *)StringLiteral_11624;
      }
      while( true ) {
        uVar10 = uStack0000000000000024;
        plVar15 = *(long **)(unaff_x19 + 0x48);
        if (plVar15 == (long *)0x0) goto LAB_0145640c;
        lVar14 = (long)(int)uStack0000000000000024;
        if ((unaff_x28 != (long *)0x0) &&
           (lVar9 = thunk_FUN_00d6225c(unaff_x28,*(undefined8 *)(*plVar15 + 0x40)), lVar9 == 0))
        goto LAB_01456414;
        if (*(uint *)(plVar15 + 3) <= uVar10) goto LAB_01456410;
        plVar15[lVar14 + 4] = (long)unaff_x28;
        puVar2 = Method_DG_Tweening_DOTweenModuleUI_<>c__DisplayClass4_0_<DOFade>b__1__;
        lVar14 = *(long *)(unaff_x19 + 0x20);
        if (lVar14 == 0) goto LAB_0145640c;
        if ((*(char *)(lVar14 + 0x2c) != '\0') && (lVar9 = *(long *)(unaff_x19 + 0x40), lVar9 != 0))
        {
          lVar11 = *(long *)(unaff_x19 + 0x48);
          if (lVar11 == 0) goto LAB_0145640c;
          if (*(uint *)(lVar11 + 0x18) <= uStack0000000000000024) goto LAB_01456410;
          if (*(long *)(lVar14 + 0x70) == 0) goto LAB_0145640c;
          uVar8 = *(undefined8 *)(lVar11 + (long)(int)uStack0000000000000024 * 8 + 0x20);
          FUN_0132138c(*(long *)(lVar14 + 0x70),(long)(int)uStack0000000000000024,&stack0x00000028,
                       *puVar7);
          FUN_0143dae4(lVar14,lVar9,uVar8,in_stack_00000028,uStack0000000000000024,0);
          lVar14 = *(long *)(unaff_x19 + 0x20);
          if (lVar14 == 0) goto LAB_0145640c;
        }
        if (unaff_x24 == 0) goto LAB_0145640c;
        lVar14 = *(long *)(lVar14 + 0x90);
        uVar8 = *(undefined8 *)(unaff_x24 + 0x10);
        if (DAT_03774d77 == '\0') {
          thunk_FUN_00d48444(puVar2);
          DAT_03774d77 = '\x01';
        }
        if (lVar14 == 0) goto LAB_0145640c;
        FUN_0267df80(**(undefined4 **)(*(long *)puVar2 + 0xb8),
                     (*(undefined4 **)(*(long *)puVar2 + 0xb8))[1],lVar14,uVar8,0);
        if (*(long *)(unaff_x19 + 0x20) == 0) goto LAB_0145640c;
        lVar14 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0x90);
        uVar8 = *(undefined8 *)(unaff_x24 + 0x10);
        if (DAT_03774e1e == '\0') {
          thunk_FUN_00d48444(puVar2);
          DAT_03774e1e = '\x01';
        }
        if (lVar14 == 0) goto LAB_0145640c;
        FUN_0267e174(*(undefined4 *)(*(long *)(*(long *)puVar2 + 0xb8) + 8),
                     *(undefined4 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0xc),lVar14,uVar8,0);
        if (*(long *)(unaff_x19 + 0x30) == 0) goto LAB_0145640c;
        FUN_0143f660(*(long *)(unaff_x19 + 0x30),*(undefined8 *)(unaff_x24 + 0x10),0);
        if (*(int *)(*(long *)GoogleSheetsToUnity_GSTU_Cell_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        FUN_017aa9b4(0);
        uVar10 = uStack0000000000000024 + 1;
        uStack0000000000000024 = uVar10;
        if (*(long *)(unaff_x19 + 0x20) == 0) goto LAB_0145640c;
        iVar3 = FUN_01459960(*(long *)(unaff_x19 + 0x20),0);
        if (iVar3 <= (int)uVar10) {
          if (*(long *)(unaff_x19 + 0x50) != 0) {
            *(undefined8 *)(*(long *)(unaff_x19 + 0x50) + 0x20) = in_stack_00000008;
            return 0;
          }
          goto LAB_0145640c;
        }
        if ((*(long *)(unaff_x19 + 0x20) == 0) ||
           (lVar14 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0x70), lVar14 == 0)) goto LAB_0145640c;
        FUN_0132138c(lVar14,uStack0000000000000024,&stack0x00000028,*puVar7);
        unaff_x24 = in_stack_00000028;
        uVar10 = uStack0000000000000024;
        lVar14 = *(long *)(unaff_x19 + 0x20);
        if (lVar14 == 0) goto LAB_0145640c;
        cVar1 = *(char *)(lVar14 + 0x49);
        uVar8 = *(undefined8 *)(lVar14 + 0x80);
        if (*(int *)(*(long *)Method_System_Collections_Generic_List<Material>_Add__ + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar5 = FUN_01457470(uVar10,cVar1 != '\0',uVar8,0);
        if ((uVar5 & 1) != 0) break;
        unaff_x28 = (long *)0x0;
      }
      if (3 < *(int *)(unaff_x19 + 0x28)) {
        uVar8 = FUN_0176eb1c((long)&stack0x00000020 + 4,0);
        if (*(long *)(unaff_x19 + 0x30) == 0) goto LAB_0145640c;
        uStack0000000000000020 = FUN_0143ef40(*(long *)(unaff_x19 + 0x30),0);
        uVar6 = FUN_0176eb1c(&stack0x00000020,0);
        uVar8 = FUN_0160073c(*(undefined8 *)PTR_DAT_033f01e8,uVar8,
                             *(undefined8 *)
                              Method_System_Collections_Generic_List_Enumerator<StyleSheet>_get_Current__
                             ,uVar6,0);
        if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
          thunk_FUN_00d32864(*(long *)StringLiteral_302);
        }
        FUN_02661754(uVar8,0);
      }
      lVar14 = *(long *)(unaff_x19 + 0x20);
      if (lVar14 == 0) goto LAB_0145640c;
      Meta_XR_ImmersiveDebugger_Utils_AssemblyParser__GetImmersiveDebuggerEnabled
                (*(undefined8 *)(lVar14 + 0x58),*(undefined8 *)(unaff_x19 + 0x30),
                 uStack0000000000000024,lVar14,0);
      if ((*(long *)(unaff_x19 + 0x20) == 0) ||
         (lVar14 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0x58), lVar14 == 0)) goto LAB_0145640c;
      unaff_x27 = (long *)FUN_00da4fb8(*(undefined8 *)Oculus_Platform_LogEventName_TypeInfo,
                                       *(undefined4 *)(lVar14 + 0x18));
      lVar14 = *(long *)(unaff_x19 + 0x20);
      if (lVar14 == 0) goto LAB_0145640c;
      uVar5 = 0;
      while( true ) {
        lVar14 = *(long *)(lVar14 + 0x58);
        if (lVar14 == 0) goto LAB_0145640c;
        if ((long)*(int *)(lVar14 + 0x18) <= (long)uVar5) break;
        FUN_0132138c(lVar14,uVar5 & 0xffffffff,&stack0x00000028,*unaff_x22);
        lVar14 = in_stack_00000028;
        if (in_stack_00000028 == 0) goto LAB_0145640c;
        iStack000000000000001c = *(int *)(in_stack_00000028 + 0x38);
        iStack0000000000000018 = *(int *)(in_stack_00000028 + 0x3c);
        lVar9 = *(long *)(in_stack_00000028 + 0x10);
        if (lVar9 == 0) goto LAB_0145640c;
        if (*(uint *)(lVar9 + 0x18) <= uStack0000000000000024) goto LAB_01456410;
        if (*(long *)(lVar9 + (long)(int)uStack0000000000000024 * 8 + 0x20) == 0) goto LAB_0145640c;
        plVar15 = (long *)FUN_01443ffc();
        lVar9 = *(long *)(unaff_x19 + 0x38);
        if (lVar9 != 0) {
          if (plVar15 != (long *)0x0) {
            unaff_x21 = plVar15;
          }
          uVar8 = *(undefined8 *)Method_CharacterManager_ZoneExited__;
          if (plVar15 == (long *)0x0) {
            uVar6 = 0;
          }
          else {
            if (unaff_x21 == (long *)0x0) goto LAB_0145640c;
            uVar6 = (**(code **)(*unaff_x21 + 0x168))(unaff_x21,*(undefined8 *)(*unaff_x21 + 0x170))
            ;
          }
          uVar8 = FUN_015f5b28(uVar8,uVar6,0);
          (**(code **)(lVar9 + 0x18))
                    (*(undefined8 *)(lVar9 + 0x40),uVar8,*(undefined8 *)(lVar9 + 0x28));
        }
        plVar16 = *(long **)(unaff_x19 + 0x40);
        if (plVar16 != (long *)0x0) {
          lVar9 = *plVar16;
          uVar12 = (ulong)*(ushort *)(lVar9 + 0x12a);
          if (uVar12 != 0) {
            piVar13 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
            do {
              if (*(long *)(piVar13 + -2) == *(long *)StringLiteral_2590) {
                puVar7 = (undefined8 *)(lVar9 + (long)(*piVar13 + 2) * 0x10 + 0x138);
                goto LAB_01455850;
              }
              uVar12 = uVar12 - 1;
              piVar13 = piVar13 + 4;
            } while (uVar12 != 0);
          }
          puVar7 = (undefined8 *)FUN_00d59724(plVar16,*(long *)StringLiteral_2590,2);
LAB_01455850:
          (*(code *)*puVar7)(plVar16,plVar15,1,1,puVar7[1]);
        }
        lVar9 = *(long *)(lVar14 + 0x10);
        if (lVar9 == 0) goto LAB_0145640c;
        if (*(uint *)(lVar9 + 0x18) <= uStack0000000000000024) goto LAB_01456410;
        plVar15 = (long *)FUN_01454ee8(*(undefined4 *)(lVar14 + 0x28),*(undefined4 *)(lVar14 + 0x2c)
                                       ,*(undefined4 *)(lVar14 + 0x30),
                                       *(undefined4 *)(lVar14 + 0x34),unaff_x24,
                                       *(undefined8 *)
                                        (lVar9 + (long)(int)uStack0000000000000024 * 8 + 0x20),
                                       *(undefined8 *)(unaff_x19 + 0x20),
                                       *(undefined8 *)(unaff_x19 + 0x30),
                                       *(undefined4 *)(unaff_x19 + 0x28));
        if (plVar15 == (long *)0x0) goto LAB_0145640c;
        iVar3 = (**(code **)(*plVar15 + 0x188))(plVar15,*(undefined8 *)(*plVar15 + 400));
        if ((iVar3 != iStack000000000000001c) ||
           (iVar3 = (**(code **)(*plVar15 + 0x1a8))(plVar15,*(undefined8 *)(*plVar15 + 0x1b0)),
           iVar3 != iStack0000000000000018)) {
          lVar14 = *(long *)(unaff_x19 + 0x38);
          if (lVar14 != 0) {
            uVar6 = *(undefined8 *)
                     Method_UnityEngine_Rendering_Universal_LightCookieManager_WorkSlice<Vector4>__ctor__
            ;
            uVar8 = (**(code **)(*plVar15 + 0x168))(plVar15,*(undefined8 *)(*plVar15 + 0x170));
            uVar8 = FUN_01600424(uVar6,uVar8,
                                 *(undefined8 *)
                                  Method_UnityEngine_XR_Interaction_Toolkit_AR_GestureRecognizer<DragGesture>__ctor__
                                 ,0);
            (**(code **)(lVar14 + 0x18))
                      (*(undefined8 *)(lVar14 + 0x40),uVar8,*(undefined8 *)(lVar14 + 0x28));
          }
          if (*(int *)(unaff_x19 + 0x28) < 4) {
            if (unaff_x24 == 0) goto LAB_0145640c;
          }
          else {
            plVar16 = (long *)FUN_00da4fb8(*(undefined8 *)PTR_DAT_033ea8a0,10);
            if (plVar16 == (long *)0x0) goto LAB_0145640c;
            if ((*(long *)Method_System_Collections_Generic_List<TabGroupAttribute>_get_Count__ != 0
                ) && (lVar14 = thunk_FUN_00d6225c(*(long *)
                                                  Method_System_Collections_Generic_List<TabGroupAttribute>_get_Count__
                                                  ,*(undefined8 *)(*plVar16 + 0x40)), lVar14 == 0))
            goto LAB_01456414;
            uVar10 = *(uint *)(plVar16 + 3);
            if (uVar10 == 0) goto LAB_01456410;
            plVar16[4] = *(long *)
                          Method_System_Collections_Generic_List<TabGroupAttribute>_get_Count__;
            if (unaff_x24 == 0) goto LAB_0145640c;
            lVar14 = *(long *)(unaff_x24 + 0x10);
            if (lVar14 != 0) {
              lVar9 = thunk_FUN_00d6225c(lVar14,*(undefined8 *)(*plVar16 + 0x40));
              if (lVar9 == 0) goto LAB_01456414;
              uVar10 = *(uint *)(plVar16 + 3);
            }
            if (uVar10 < 2) goto LAB_01456410;
            plVar16[5] = lVar14;
            if (*(long *)Method_System_Array_CreateInstance__ != 0) {
              lVar14 = thunk_FUN_00d6225c(*(long *)Method_System_Array_CreateInstance__,
                                          *(undefined8 *)(*plVar16 + 0x40));
              if (lVar14 == 0) goto LAB_01456414;
              uVar10 = *(uint *)(plVar16 + 3);
            }
            if (uVar10 < 3) goto LAB_01456410;
            plVar16[6] = *(long *)Method_System_Array_CreateInstance__;
            uStack0000000000000020 =
                 (**(code **)(*plVar15 + 0x188))(plVar15,*(undefined8 *)(*plVar15 + 400));
            lVar14 = FUN_0176eb1c(&stack0x00000020,0);
            if ((lVar14 != 0) &&
               (lVar9 = thunk_FUN_00d6225c(lVar14,*(undefined8 *)(*plVar16 + 0x40)), lVar9 == 0))
            goto LAB_01456414;
            uVar10 = *(uint *)(plVar16 + 3);
            if (uVar10 < 4) goto LAB_01456410;
            plVar16[7] = lVar14;
            if (*(long *)
                 Method_System_Runtime_Serialization_Formatters_Binary_BinaryFormatter_Serialize__
                != 0) {
              lVar14 = thunk_FUN_00d6225c(*(long *)
                                           Method_System_Runtime_Serialization_Formatters_Binary_BinaryFormatter_Serialize__
                                          ,*(undefined8 *)(*plVar16 + 0x40));
              if (lVar14 == 0) goto LAB_01456414;
              uVar10 = *(uint *)(plVar16 + 3);
            }
            if (uVar10 < 5) goto LAB_01456410;
            plVar16[8] = *(long *)
                          Method_System_Runtime_Serialization_Formatters_Binary_BinaryFormatter_Serialize__
            ;
            uStack0000000000000020 =
                 (**(code **)(*plVar15 + 0x1a8))(plVar15,*(undefined8 *)(*plVar15 + 0x1b0));
            lVar14 = FUN_0176eb1c(&stack0x00000020,0);
            if ((lVar14 != 0) &&
               (lVar9 = thunk_FUN_00d6225c(lVar14,*(undefined8 *)(*plVar16 + 0x40)), lVar9 == 0))
            goto LAB_01456414;
            uVar10 = *(uint *)(plVar16 + 3);
            if (uVar10 < 6) goto LAB_01456410;
            plVar16[9] = lVar14;
            if (*(long *)StringLiteral_347 != 0) {
              lVar14 = thunk_FUN_00d6225c(*(long *)StringLiteral_347,
                                          *(undefined8 *)(*plVar16 + 0x40));
              if (lVar14 == 0) goto LAB_01456414;
              uVar10 = *(uint *)(plVar16 + 3);
            }
            if (uVar10 < 7) goto LAB_01456410;
            plVar16[10] = *(long *)StringLiteral_347;
            lVar14 = FUN_0176eb1c((long)&stack0x00000018 + 4,0);
            if ((lVar14 != 0) &&
               (lVar9 = thunk_FUN_00d6225c(lVar14,*(undefined8 *)(*plVar16 + 0x40)), lVar9 == 0))
            goto LAB_01456414;
            uVar10 = *(uint *)(plVar16 + 3);
            if (uVar10 < 8) goto LAB_01456410;
            plVar16[0xb] = lVar14;
            if (*(long *)
                 Method_System_Runtime_Serialization_Formatters_Binary_BinaryFormatter_Serialize__
                != 0) {
              lVar14 = thunk_FUN_00d6225c(*(long *)
                                           Method_System_Runtime_Serialization_Formatters_Binary_BinaryFormatter_Serialize__
                                          ,*(undefined8 *)(*plVar16 + 0x40));
              if (lVar14 == 0) goto LAB_01456414;
              uVar10 = *(uint *)(plVar16 + 3);
            }
            if (uVar10 < 9) goto LAB_01456410;
            plVar16[0xc] = *(long *)
                            Method_System_Runtime_Serialization_Formatters_Binary_BinaryFormatter_Serialize__
            ;
            lVar14 = FUN_0176eb1c(&stack0x00000018,0);
            if ((lVar14 != 0) &&
               (lVar9 = thunk_FUN_00d6225c(lVar14,*(undefined8 *)(*plVar16 + 0x40)), lVar9 == 0))
            goto LAB_01456414;
            if (*(uint *)(plVar16 + 3) < 10) goto LAB_01456410;
            plVar16[0xd] = lVar14;
            uVar8 = FUN_01600844(plVar16,0);
            if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
              thunk_FUN_00d32864(*(long *)StringLiteral_302);
            }
            FUN_02661754(uVar8,0);
          }
          if ((*(long *)(unaff_x19 + 0x30) == 0) ||
             (plVar15 = (long *)FUN_0143f338(*(long *)(unaff_x19 + 0x30),
                                             *(undefined8 *)(unaff_x24 + 0x10),plVar15,
                                             iStack000000000000001c,iStack0000000000000018,0),
             plVar15 == (long *)0x0)) goto LAB_0145640c;
        }
        iVar3 = (**(code **)(*plVar15 + 0x188))(plVar15,*(undefined8 *)(*plVar15 + 400));
        iVar4 = (**(code **)(*plVar15 + 0x1a8))(plVar15,*(undefined8 *)(*plVar15 + 0x1b0));
        if (*(long *)(unaff_x19 + 0x20) == 0) goto LAB_0145640c;
        if (*(char *)(*(long *)(unaff_x19 + 0x20) + 0x49) != '\0') {
          if ((unaff_x24 == 0) || (*(long *)(unaff_x19 + 0x30) == 0)) goto LAB_0145640c;
          plVar15 = (long *)FUN_0143f1a4(*(long *)(unaff_x19 + 0x30),
                                         *(undefined8 *)(unaff_x24 + 0x10),plVar15,0);
          lVar14 = *(long *)(unaff_x19 + 0x20);
          if ((lVar14 == 0) || (*(long *)(lVar14 + 0x58) == 0)) goto LAB_0145640c;
          lVar9 = *(long *)(lVar14 + 0x50);
          FUN_0132138c(*(long *)(lVar14 + 0x58),uVar5 & 0xffffffff,&stack0x00000028,*unaff_x22);
          if (lVar9 == 0) goto LAB_0145640c;
          FUN_0144a1a0(lVar9,plVar15,in_stack_00000028,unaff_x24);
        }
        if (unaff_x27 == (long *)0x0) goto LAB_0145640c;
        if ((plVar15 != (long *)0x0) &&
           (lVar14 = thunk_FUN_00d6225c(plVar15,*(undefined8 *)(*unaff_x27 + 0x40)), lVar14 == 0))
        goto LAB_01456414;
        if (*(uint *)(unaff_x27 + 3) <= uVar5) goto LAB_01456410;
        unaff_x27[uVar5 + 4] = (long)plVar15;
        lVar14 = *(long *)(unaff_x19 + 0x20);
        unaff_x20 = unaff_x20 + iVar4 * iVar3;
        uVar5 = uVar5 + 1;
        if (lVar14 == 0) goto LAB_0145640c;
      }
      plVar15 = *(long **)(unaff_x19 + 0x40);
      if (plVar15 != (long *)0x0) {
        lVar14 = *plVar15;
        uVar5 = (ulong)*(ushort *)(lVar14 + 0x12a);
        if (uVar5 != 0) {
          piVar13 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == *(long *)StringLiteral_2590) {
              puVar7 = (undefined8 *)(lVar14 + (long)(*piVar13 + 0xb) * 0x10 + 0x138);
              goto LAB_01455d6c;
            }
            uVar5 = uVar5 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar5 != 0);
        }
        puVar7 = (undefined8 *)FUN_00d59724(plVar15,*(long *)StringLiteral_2590,0xb);
LAB_01455d6c:
        (*(code *)*puVar7)(plVar15,unaff_x20,puVar7[1]);
      }
      if (*(int *)(*(long *)System_Threading_Timer_TimerComparer_TypeInfo + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      unaff_d11 = SQRT((double)unaff_x20);
      if ((6144.0 < unaff_d11) && (1 < *(int *)(unaff_x19 + 0x28))) {
        uStack0000000000000020 = 0x2000;
        uVar8 = FUN_0176eb1c(&stack0x00000020,0);
        uVar8 = FUN_01600424(*(undefined8 *)
                              Sirenix_Serialization_IOverridesSerializationPolicy_TypeInfo,uVar8,
                             *(undefined8 *)
                              System_Linq_Expressions_Interpreter_EqualInstruction_EqualByteLiftedToNull_TypeInfo
                             ,0);
        if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
          thunk_FUN_00d32864(*(long *)StringLiteral_302);
        }
        FUN_02661754(uVar8,0);
      }
      unaff_x28 = (long *)thunk_FUN_00d62348(*(undefined8 *)
                                              SpaceShipCommunicationModule_<ScrambleHint>d__14_TypeInfo
                                            );
      if (unaff_x28 == (long *)0x0) goto LAB_0145640c;
      FUN_02671bf8(unaff_x28,1,1,5,1,0);
      unaff_x23 = *(long *)(unaff_x19 + 0x38);
      lVar14 = 0;
      uVar8 = extraout_x1;
    } while (unaff_x23 == 0);
    if (unaff_x24 == 0) {
LAB_0145640c:
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    param_2 = *(undefined8 *)(unaff_x24 + 0x10);
    param_3 = 0;
    param_1 = *(undefined8 *)StringLiteral_8635;
  } while( true );
}


