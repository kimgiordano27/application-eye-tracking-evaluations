/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.DebugManager$$set_Instance
ENTRY_POINT: 0145620c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 261
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;gaze_interaction;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;ui_interaction;telemetry;structure_combo;ordered_structure
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_3;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_1;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_7;telemetry_or_network_hits_8;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;ordered_eye_source_validity_pose_collection_sink;ordered_eye_source_validity_pose_interaction_sink;functionality_gaze_retrieval_or_extraction;functionality_gaze_interaction_hits_1;functionality_data_collection_or_telemetry_hits_1
*/


undefined8 Meta_XR_ImmersiveDebugger_Manager_DebugManager__set_Instance(undefined4 param_1)

{
  char cVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  ulong uVar6;
  undefined8 uVar7;
  long *plVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  uint uVar11;
  long lVar12;
  ulong uVar13;
  int *piVar14;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  undefined8 *unaff_x22;
  long *plVar15;
  long unaff_x24;
  long *plVar16;
  long lVar17;
  undefined8 uVar18;
  long *unaff_x28;
  double dVar19;
  undefined4 uStack0000000000000004;
  undefined8 in_stack_00000008;
  double in_stack_00000010;
  int iStack0000000000000018;
  int iStack000000000000001c;
  undefined4 uStack0000000000000020;
  uint uStack0000000000000024;
  long in_stack_00000028;
  
  uStack0000000000000004 = param_1;
code_r0x0145620c:
  uVar5 = (**(code **)(*unaff_x28 + 0x1a8))(unaff_x28,*(undefined8 *)(*unaff_x28 + 0x1b0));
                    /* try { // try from 01456220 to 01556223 has its CatchHandler @ 0145622c */
                    /* try { // try from 01456224 to 0155624f has its CatchHandler @ 01456060 */
                    /* catch(type#1 @ 03274860) { ... } // from try @ 01456220 with catch @ 0145622c
                        */
  FUN_026723f8(unaff_x28,0);
  puVar9 = (undefined8 *)StringLiteral_11624;
  do {
    while( true ) {
      uVar11 = uStack0000000000000024;
                    /* catch(type#1 @ 03274860) { ... } // from try @ 014561b0 with catch @ 01456238
                        */
      plVar15 = *(long **)(unaff_x19 + 0x48);
      if (plVar15 == (long *)0x0) goto LAB_0145640c;
      lVar17 = (long)(int)uStack0000000000000024;
                    /* try { // try from 01456250 to 01556253 has its CatchHandler @ 01456260 */
      if ((unaff_x28 != (long *)0x0) &&
         (lVar10 = thunk_FUN_00d6225c(unaff_x28,*(undefined8 *)(*plVar15 + 0x40)), lVar10 == 0))
      goto LAB_01456414;
      if (*(uint *)(plVar15 + 3) <= uVar11) goto LAB_01456410;
      plVar15[lVar17 + 4] = (long)unaff_x28;
      puVar2 = Method_DG_Tweening_DOTweenModuleUI_<>c__DisplayClass4_0_<DOFade>b__1__;
      lVar17 = *(long *)(unaff_x19 + 0x20);
      if (lVar17 == 0) goto LAB_0145640c;
      if ((*(char *)(lVar17 + 0x2c) != '\0') && (lVar10 = *(long *)(unaff_x19 + 0x40), lVar10 != 0))
      {
        lVar12 = *(long *)(unaff_x19 + 0x48);
        if (lVar12 == 0) goto LAB_0145640c;
        if (*(uint *)(lVar12 + 0x18) <= uStack0000000000000024) goto LAB_01456410;
        if (*(long *)(lVar17 + 0x70) == 0) goto LAB_0145640c;
        uVar18 = *(undefined8 *)(lVar12 + (long)(int)uStack0000000000000024 * 8 + 0x20);
        FUN_0132138c(*(long *)(lVar17 + 0x70),(long)(int)uStack0000000000000024,&stack0x00000028,
                     *puVar9);
        FUN_0143dae4(lVar17,lVar10,uVar18,in_stack_00000028,uStack0000000000000024,0);
        lVar17 = *(long *)(unaff_x19 + 0x20);
        if (lVar17 == 0) goto LAB_0145640c;
      }
      if (unaff_x24 == 0) goto LAB_0145640c;
      lVar17 = *(long *)(lVar17 + 0x90);
      uVar18 = *(undefined8 *)(unaff_x24 + 0x10);
      if (DAT_03774d77 == '\0') {
        thunk_FUN_00d48444(puVar2);
        DAT_03774d77 = '\x01';
      }
      if (lVar17 == 0) goto LAB_0145640c;
      FUN_0267df80(**(undefined4 **)(*(long *)puVar2 + 0xb8),
                   (*(undefined4 **)(*(long *)puVar2 + 0xb8))[1],lVar17,uVar18,0);
      if (*(long *)(unaff_x19 + 0x20) == 0) goto LAB_0145640c;
      lVar17 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0x90);
      uVar18 = *(undefined8 *)(unaff_x24 + 0x10);
      if (DAT_03774e1e == '\0') {
        thunk_FUN_00d48444(puVar2);
        DAT_03774e1e = '\x01';
      }
      if (lVar17 == 0) goto LAB_0145640c;
      FUN_0267e174(*(undefined4 *)(*(long *)(*(long *)puVar2 + 0xb8) + 8),
                   *(undefined4 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0xc),lVar17,uVar18,0);
      if (*(long *)(unaff_x19 + 0x30) == 0) goto LAB_0145640c;
      FUN_0143f660(*(long *)(unaff_x19 + 0x30),*(undefined8 *)(unaff_x24 + 0x10),0);
      if (*(int *)(*(long *)GoogleSheetsToUnity_GSTU_Cell_TypeInfo + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      FUN_017aa9b4(0);
      uVar11 = uStack0000000000000024 + 1;
      uStack0000000000000024 = uVar11;
      if (*(long *)(unaff_x19 + 0x20) == 0) goto LAB_0145640c;
      iVar3 = FUN_01459960(*(long *)(unaff_x19 + 0x20),0);
      if (iVar3 <= (int)uVar11) {
        if (*(long *)(unaff_x19 + 0x50) != 0) {
          *(undefined8 *)(*(long *)(unaff_x19 + 0x50) + 0x20) = in_stack_00000008;
          return 0;
        }
        goto LAB_0145640c;
      }
      if ((*(long *)(unaff_x19 + 0x20) == 0) ||
         (lVar17 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0x70), lVar17 == 0)) goto LAB_0145640c;
      FUN_0132138c(lVar17,uStack0000000000000024,&stack0x00000028,*puVar9);
      unaff_x24 = in_stack_00000028;
      uVar11 = uStack0000000000000024;
      lVar17 = *(long *)(unaff_x19 + 0x20);
      if (lVar17 == 0) goto LAB_0145640c;
      cVar1 = *(char *)(lVar17 + 0x49);
      uVar18 = *(undefined8 *)(lVar17 + 0x80);
      if (*(int *)(*(long *)Method_System_Collections_Generic_List<Material>_Add__ + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar6 = FUN_01457470(uVar11,cVar1 != '\0',uVar18,0);
      if ((uVar6 & 1) != 0) break;
      unaff_x28 = (long *)0x0;
    }
    if (3 < *(int *)(unaff_x19 + 0x28)) {
      uVar18 = FUN_0176eb1c((long)&stack0x00000020 + 4,0);
      if (*(long *)(unaff_x19 + 0x30) == 0) goto LAB_0145640c;
      uStack0000000000000020 = FUN_0143ef40(*(long *)(unaff_x19 + 0x30),0);
      uVar7 = FUN_0176eb1c(&stack0x00000020,0);
      uVar18 = FUN_0160073c(*(undefined8 *)PTR_DAT_033f01e8,uVar18,
                            *(undefined8 *)
                             Method_System_Collections_Generic_List_Enumerator<StyleSheet>_get_Current__
                            ,uVar7,0);
      if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
        thunk_FUN_00d32864(*(long *)StringLiteral_302);
      }
      FUN_02661754(uVar18,0);
    }
    lVar17 = *(long *)(unaff_x19 + 0x20);
    if (lVar17 == 0) goto LAB_0145640c;
    Meta_XR_ImmersiveDebugger_Utils_AssemblyParser__GetImmersiveDebuggerEnabled
              (*(undefined8 *)(lVar17 + 0x58),*(undefined8 *)(unaff_x19 + 0x30),
               uStack0000000000000024,lVar17,0);
    if ((*(long *)(unaff_x19 + 0x20) == 0) ||
       (lVar17 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0x58), lVar17 == 0)) goto LAB_0145640c;
    plVar15 = (long *)FUN_00da4fb8(*(undefined8 *)Oculus_Platform_LogEventName_TypeInfo,
                                   *(undefined4 *)(lVar17 + 0x18));
    lVar17 = *(long *)(unaff_x19 + 0x20);
    if (lVar17 == 0) goto LAB_0145640c;
    uVar6 = 0;
    while( true ) {
      lVar17 = *(long *)(lVar17 + 0x58);
      if (lVar17 == 0) goto LAB_0145640c;
      if ((long)*(int *)(lVar17 + 0x18) <= (long)uVar6) break;
      FUN_0132138c(lVar17,uVar6 & 0xffffffff,&stack0x00000028,*unaff_x22);
      lVar17 = in_stack_00000028;
      if (in_stack_00000028 == 0) goto LAB_0145640c;
      iStack000000000000001c = *(int *)(in_stack_00000028 + 0x38);
      iStack0000000000000018 = *(int *)(in_stack_00000028 + 0x3c);
      lVar10 = *(long *)(in_stack_00000028 + 0x10);
      if (lVar10 == 0) goto LAB_0145640c;
      if (*(uint *)(lVar10 + 0x18) <= uStack0000000000000024) goto LAB_01456410;
      if (*(long *)(lVar10 + (long)(int)uStack0000000000000024 * 8 + 0x20) == 0) goto LAB_0145640c;
      plVar8 = (long *)FUN_01443ffc();
      lVar10 = *(long *)(unaff_x19 + 0x38);
      if (lVar10 != 0) {
        if (plVar8 != (long *)0x0) {
          unaff_x21 = plVar8;
        }
        uVar18 = *(undefined8 *)Method_CharacterManager_ZoneExited__;
        if (plVar8 == (long *)0x0) {
          uVar7 = 0;
        }
        else {
          if (unaff_x21 == (long *)0x0) goto LAB_0145640c;
          uVar7 = (**(code **)(*unaff_x21 + 0x168))(unaff_x21,*(undefined8 *)(*unaff_x21 + 0x170));
        }
        uVar18 = FUN_015f5b28(uVar18,uVar7,0);
        (**(code **)(lVar10 + 0x18))
                  (*(undefined8 *)(lVar10 + 0x40),uVar18,*(undefined8 *)(lVar10 + 0x28));
      }
      plVar16 = *(long **)(unaff_x19 + 0x40);
      if (plVar16 != (long *)0x0) {
        lVar10 = *plVar16;
        uVar13 = (ulong)*(ushort *)(lVar10 + 0x12a);
        if (uVar13 != 0) {
          piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == *(long *)StringLiteral_2590) {
              puVar9 = (undefined8 *)(lVar10 + (long)(*piVar14 + 2) * 0x10 + 0x138);
              goto LAB_01455850;
            }
            uVar13 = uVar13 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar13 != 0);
        }
        puVar9 = (undefined8 *)FUN_00d59724(plVar16,*(long *)StringLiteral_2590,2);
LAB_01455850:
        (*(code *)*puVar9)(plVar16,plVar8,1,1,puVar9[1]);
      }
      lVar10 = *(long *)(lVar17 + 0x10);
      if (lVar10 == 0) goto LAB_0145640c;
      if (*(uint *)(lVar10 + 0x18) <= uStack0000000000000024) goto LAB_01456410;
      plVar8 = (long *)FUN_01454ee8(*(undefined4 *)(lVar17 + 0x28),*(undefined4 *)(lVar17 + 0x2c),
                                    *(undefined4 *)(lVar17 + 0x30),*(undefined4 *)(lVar17 + 0x34),
                                    unaff_x24,
                                    *(undefined8 *)
                                     (lVar10 + (long)(int)uStack0000000000000024 * 8 + 0x20),
                                    *(undefined8 *)(unaff_x19 + 0x20),
                                    *(undefined8 *)(unaff_x19 + 0x30),
                                    *(undefined4 *)(unaff_x19 + 0x28));
      if (plVar8 == (long *)0x0) goto LAB_0145640c;
      iVar3 = (**(code **)(*plVar8 + 0x188))(plVar8,*(undefined8 *)(*plVar8 + 400));
      if ((iVar3 != iStack000000000000001c) ||
         (iVar3 = (**(code **)(*plVar8 + 0x1a8))(plVar8,*(undefined8 *)(*plVar8 + 0x1b0)),
         iVar3 != iStack0000000000000018)) {
        lVar17 = *(long *)(unaff_x19 + 0x38);
        if (lVar17 != 0) {
          uVar7 = *(undefined8 *)
                   Method_UnityEngine_Rendering_Universal_LightCookieManager_WorkSlice<Vector4>__ctor__
          ;
          uVar18 = (**(code **)(*plVar8 + 0x168))(plVar8,*(undefined8 *)(*plVar8 + 0x170));
          uVar18 = FUN_01600424(uVar7,uVar18,
                                *(undefined8 *)
                                 Method_UnityEngine_XR_Interaction_Toolkit_AR_GestureRecognizer<DragGesture>__ctor__
                                ,0);
          (**(code **)(lVar17 + 0x18))
                    (*(undefined8 *)(lVar17 + 0x40),uVar18,*(undefined8 *)(lVar17 + 0x28));
        }
        if (*(int *)(unaff_x19 + 0x28) < 4) {
          if (unaff_x24 == 0) goto LAB_0145640c;
        }
        else {
          plVar16 = (long *)FUN_00da4fb8(*(undefined8 *)PTR_DAT_033ea8a0,10);
          if (plVar16 == (long *)0x0) goto LAB_0145640c;
          if ((*(long *)Method_System_Collections_Generic_List<TabGroupAttribute>_get_Count__ != 0)
             && (lVar17 = thunk_FUN_00d6225c(*(long *)
                                              Method_System_Collections_Generic_List<TabGroupAttribute>_get_Count__
                                             ,*(undefined8 *)(*plVar16 + 0x40)), lVar17 == 0))
          goto LAB_01456414;
          uVar11 = *(uint *)(plVar16 + 3);
          if (uVar11 == 0) goto LAB_01456410;
          plVar16[4] = *(long *)
                        Method_System_Collections_Generic_List<TabGroupAttribute>_get_Count__;
          if (unaff_x24 == 0) goto LAB_0145640c;
          lVar17 = *(long *)(unaff_x24 + 0x10);
          if (lVar17 != 0) {
            lVar10 = thunk_FUN_00d6225c(lVar17,*(undefined8 *)(*plVar16 + 0x40));
            if (lVar10 == 0) goto LAB_01456414;
            uVar11 = *(uint *)(plVar16 + 3);
          }
          if (uVar11 < 2) goto LAB_01456410;
          plVar16[5] = lVar17;
          if (*(long *)Method_System_Array_CreateInstance__ != 0) {
            lVar17 = thunk_FUN_00d6225c(*(long *)Method_System_Array_CreateInstance__,
                                        *(undefined8 *)(*plVar16 + 0x40));
            if (lVar17 == 0) goto LAB_01456414;
            uVar11 = *(uint *)(plVar16 + 3);
          }
          if (uVar11 < 3) goto LAB_01456410;
          plVar16[6] = *(long *)Method_System_Array_CreateInstance__;
          uStack0000000000000020 =
               (**(code **)(*plVar8 + 0x188))(plVar8,*(undefined8 *)(*plVar8 + 400));
          lVar17 = FUN_0176eb1c(&stack0x00000020,0);
          if ((lVar17 != 0) &&
             (lVar10 = thunk_FUN_00d6225c(lVar17,*(undefined8 *)(*plVar16 + 0x40)), lVar10 == 0))
          goto LAB_01456414;
          uVar11 = *(uint *)(plVar16 + 3);
          if (uVar11 < 4) goto LAB_01456410;
          plVar16[7] = lVar17;
          if (*(long *)
               Method_System_Runtime_Serialization_Formatters_Binary_BinaryFormatter_Serialize__ !=
              0) {
            lVar17 = thunk_FUN_00d6225c(*(long *)
                                         Method_System_Runtime_Serialization_Formatters_Binary_BinaryFormatter_Serialize__
                                        ,*(undefined8 *)(*plVar16 + 0x40));
            if (lVar17 == 0) goto LAB_01456414;
            uVar11 = *(uint *)(plVar16 + 3);
          }
          if (uVar11 < 5) goto LAB_01456410;
          plVar16[8] = *(long *)
                        Method_System_Runtime_Serialization_Formatters_Binary_BinaryFormatter_Serialize__
          ;
          uStack0000000000000020 =
               (**(code **)(*plVar8 + 0x1a8))(plVar8,*(undefined8 *)(*plVar8 + 0x1b0));
          lVar17 = FUN_0176eb1c(&stack0x00000020,0);
          if ((lVar17 != 0) &&
             (lVar10 = thunk_FUN_00d6225c(lVar17,*(undefined8 *)(*plVar16 + 0x40)), lVar10 == 0))
          goto LAB_01456414;
          uVar11 = *(uint *)(plVar16 + 3);
          if (uVar11 < 6) goto LAB_01456410;
          plVar16[9] = lVar17;
          if (*(long *)StringLiteral_347 != 0) {
            lVar17 = thunk_FUN_00d6225c(*(long *)StringLiteral_347,*(undefined8 *)(*plVar16 + 0x40))
            ;
            if (lVar17 == 0) goto LAB_01456414;
            uVar11 = *(uint *)(plVar16 + 3);
          }
          if (uVar11 < 7) goto LAB_01456410;
          plVar16[10] = *(long *)StringLiteral_347;
          lVar17 = FUN_0176eb1c((long)&stack0x00000018 + 4,0);
          if ((lVar17 != 0) &&
             (lVar10 = thunk_FUN_00d6225c(lVar17,*(undefined8 *)(*plVar16 + 0x40)), lVar10 == 0))
          goto LAB_01456414;
          uVar11 = *(uint *)(plVar16 + 3);
          if (uVar11 < 8) goto LAB_01456410;
          plVar16[0xb] = lVar17;
          if (*(long *)
               Method_System_Runtime_Serialization_Formatters_Binary_BinaryFormatter_Serialize__ !=
              0) {
            lVar17 = thunk_FUN_00d6225c(*(long *)
                                         Method_System_Runtime_Serialization_Formatters_Binary_BinaryFormatter_Serialize__
                                        ,*(undefined8 *)(*plVar16 + 0x40));
            if (lVar17 == 0) goto LAB_01456414;
            uVar11 = *(uint *)(plVar16 + 3);
          }
          if (uVar11 < 9) goto LAB_01456410;
          plVar16[0xc] = *(long *)
                          Method_System_Runtime_Serialization_Formatters_Binary_BinaryFormatter_Serialize__
          ;
          lVar17 = FUN_0176eb1c(&stack0x00000018,0);
          if ((lVar17 != 0) &&
             (lVar10 = thunk_FUN_00d6225c(lVar17,*(undefined8 *)(*plVar16 + 0x40)), lVar10 == 0))
          goto LAB_01456414;
          if (*(uint *)(plVar16 + 3) < 10) goto LAB_01456410;
          plVar16[0xd] = lVar17;
          uVar18 = FUN_01600844(plVar16,0);
          if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
            thunk_FUN_00d32864(*(long *)StringLiteral_302);
          }
          FUN_02661754(uVar18,0);
        }
        if ((*(long *)(unaff_x19 + 0x30) == 0) ||
           (plVar8 = (long *)FUN_0143f338(*(long *)(unaff_x19 + 0x30),
                                          *(undefined8 *)(unaff_x24 + 0x10),plVar8,
                                          iStack000000000000001c,iStack0000000000000018,0),
           plVar8 == (long *)0x0)) goto LAB_0145640c;
      }
      iVar3 = (**(code **)(*plVar8 + 0x188))(plVar8,*(undefined8 *)(*plVar8 + 400));
      iVar4 = (**(code **)(*plVar8 + 0x1a8))(plVar8,*(undefined8 *)(*plVar8 + 0x1b0));
      if (*(long *)(unaff_x19 + 0x20) == 0) goto LAB_0145640c;
      if (*(char *)(*(long *)(unaff_x19 + 0x20) + 0x49) != '\0') {
        if ((unaff_x24 == 0) || (*(long *)(unaff_x19 + 0x30) == 0)) goto LAB_0145640c;
        plVar8 = (long *)FUN_0143f1a4(*(long *)(unaff_x19 + 0x30),*(undefined8 *)(unaff_x24 + 0x10),
                                      plVar8,0);
        lVar17 = *(long *)(unaff_x19 + 0x20);
        if ((lVar17 == 0) || (*(long *)(lVar17 + 0x58) == 0)) goto LAB_0145640c;
        lVar10 = *(long *)(lVar17 + 0x50);
        FUN_0132138c(*(long *)(lVar17 + 0x58),uVar6 & 0xffffffff,&stack0x00000028,*unaff_x22);
        if (lVar10 == 0) goto LAB_0145640c;
        FUN_0144a1a0(lVar10,plVar8,in_stack_00000028,unaff_x24);
      }
      if (plVar15 == (long *)0x0) goto LAB_0145640c;
      if ((plVar8 != (long *)0x0) &&
         (lVar17 = thunk_FUN_00d6225c(plVar8,*(undefined8 *)(*plVar15 + 0x40)), lVar17 == 0))
      goto LAB_01456414;
      if (*(uint *)(plVar15 + 3) <= uVar6) goto LAB_01456410;
      plVar15[uVar6 + 4] = (long)plVar8;
      lVar17 = *(long *)(unaff_x19 + 0x20);
      unaff_x20 = unaff_x20 + iVar4 * iVar3;
      uVar6 = uVar6 + 1;
      if (lVar17 == 0) goto LAB_0145640c;
    }
    plVar8 = *(long **)(unaff_x19 + 0x40);
    if (plVar8 != (long *)0x0) {
      lVar17 = *plVar8;
      uVar6 = (ulong)*(ushort *)(lVar17 + 0x12a);
      if (uVar6 != 0) {
        piVar14 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == *(long *)StringLiteral_2590) {
            puVar9 = (undefined8 *)(lVar17 + (long)(*piVar14 + 0xb) * 0x10 + 0x138);
            goto LAB_01455d6c;
          }
          uVar6 = uVar6 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar6 != 0);
      }
      puVar9 = (undefined8 *)FUN_00d59724(plVar8,*(long *)StringLiteral_2590,0xb);
LAB_01455d6c:
      (*(code *)*puVar9)(plVar8,unaff_x20,puVar9[1]);
    }
    if (*(int *)(*(long *)System_Threading_Timer_TimerComparer_TypeInfo + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    dVar19 = SQRT((double)unaff_x20);
    if ((6144.0 < dVar19) && (1 < *(int *)(unaff_x19 + 0x28))) {
      uStack0000000000000020 = 0x2000;
      uVar18 = FUN_0176eb1c(&stack0x00000020,0);
      uVar18 = FUN_01600424(*(undefined8 *)
                             Sirenix_Serialization_IOverridesSerializationPolicy_TypeInfo,uVar18,
                            *(undefined8 *)
                             System_Linq_Expressions_Interpreter_EqualInstruction_EqualByteLiftedToNull_TypeInfo
                            ,0);
      if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
        thunk_FUN_00d32864(*(long *)StringLiteral_302);
      }
      FUN_02661754(uVar18,0);
    }
    unaff_x28 = (long *)thunk_FUN_00d62348(*(undefined8 *)
                                            SpaceShipCommunicationModule_<ScrambleHint>d__14_TypeInfo
                                          );
    if (unaff_x28 == (long *)0x0) goto LAB_0145640c;
    FUN_02671bf8(unaff_x28,1,1,5,1,0);
    lVar10 = *(long *)(unaff_x19 + 0x38);
    lVar17 = 0;
    uVar18 = extraout_x1;
    if (lVar10 != 0) {
      if (unaff_x24 == 0) goto LAB_0145640c;
      uVar18 = FUN_015f5b28(*(undefined8 *)StringLiteral_8635,*(undefined8 *)(unaff_x24 + 0x10),0);
      (**(code **)(lVar10 + 0x18))
                (*(undefined8 *)(lVar10 + 0x40),uVar18,*(undefined8 *)(lVar10 + 0x28));
      lVar17 = *(long *)(unaff_x19 + 0x38);
      uVar18 = extraout_x1_00;
    }
    if (uStack0000000000000024 == 0) break;
    if (lVar17 != 0) {
      if (unaff_x24 == 0) goto LAB_0145640c;
      uVar18 = FUN_015f5b28(*(undefined8 *)
                             Method_UnityEngine_XR_InputDevice_CheckValidAndSetDefault<HapticCapabilities>__
                            ,*(undefined8 *)(unaff_x24 + 0x10),0);
      (**(code **)(lVar17 + 0x18))
                (*(undefined8 *)(lVar17 + 0x40),uVar18,*(undefined8 *)(lVar17 + 0x28));
      uVar18 = extraout_x1_01;
    }
    if (*(long *)(unaff_x19 + 0x20) == 0) goto LAB_0145640c;
    unaff_x28 = (long *)FUN_014549d4(plVar15,uVar18,in_stack_00000008,uStack0000000000000004,uVar5);
    puVar9 = (undefined8 *)StringLiteral_11624;
  } while( true );
  if (lVar17 != 0) {
    if (*(int *)(*(long *)System_Threading_Timer_TimerComparer_TypeInfo + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    in_stack_00000010 = dVar19;
    uVar18 = FUN_017562ec(&stack0x00000010,*(undefined8 *)StringLiteral_9134,0);
    uVar18 = FUN_015f5b28(*(undefined8 *)Method_Obi_ObiNativeList<float>_CopyReplicate__,uVar18,0);
    (**(code **)(lVar17 + 0x18))
              (*(undefined8 *)(lVar17 + 0x40),uVar18,*(undefined8 *)(lVar17 + 0x28));
  }
  if (2 < *(int *)(unaff_x19 + 0x28)) {
    if (*(int *)(*(long *)System_Threading_Timer_TimerComparer_TypeInfo + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    in_stack_00000010 = dVar19;
    uVar18 = FUN_017562ec(&stack0x00000010,*(undefined8 *)StringLiteral_9134,0);
    uVar18 = FUN_015f5b28(*(undefined8 *)
                           Method_UnityEngine_SubsystemsImplementation_SubsystemWithProvider<XRPlaneSubsystem,_XRPlaneSubsystemDescriptor,_XRPlaneSubsystem_Provider>_get_provider__
                          ,uVar18,0);
    if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
      thunk_FUN_00d32864(*(long *)StringLiteral_302);
    }
    FUN_02660dac(uVar18,0);
  }
  if (*(long *)(unaff_x19 + 0x20) == 0) goto LAB_0145640c;
  in_stack_00000008 =
       FUN_026714b4(unaff_x28,plVar15,*(undefined4 *)(*(long *)(unaff_x19 + 0x20) + 0x18),0x2000,0,0
                   );
  if (*(int *)(unaff_x19 + 0x28) < 3) {
LAB_014561fc:
    uStack0000000000000004 =
         (**(code **)(*unaff_x28 + 0x188))(unaff_x28,*(undefined8 *)(*unaff_x28 + 400));
    goto code_r0x0145620c;
  }
  plVar8 = (long *)FUN_00da4fb8(*(undefined8 *)PTR_DAT_033ea8a0,6);
  if (plVar8 == (long *)0x0) {
LAB_0145640c:
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  if ((*(long *)Method_System_Runtime_Remoting_RemotingServices_IsTransparentProxy__ != 0) &&
     (lVar17 = thunk_FUN_00d6225c(*(long *)
                                   Method_System_Runtime_Remoting_RemotingServices_IsTransparentProxy__
                                  ,*(undefined8 *)(*plVar8 + 0x40)), lVar17 == 0)) {
LAB_01456414:
    uVar18 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
    FUN_00da5038(uVar18,0);
  }
  if ((int)plVar8[3] != 0) {
    plVar8[4] = *(long *)Method_System_Runtime_Remoting_RemotingServices_IsTransparentProxy__;
    if (plVar15 == (long *)0x0) goto LAB_0145640c;
    uStack0000000000000020 = (undefined4)plVar15[3];
    lVar17 = FUN_0176eb1c(&stack0x00000020,0);
    if ((lVar17 != 0) &&
       (lVar10 = thunk_FUN_00d6225c(lVar17,*(undefined8 *)(*plVar8 + 0x40)), lVar10 == 0))
    goto LAB_01456414;
    puVar2 = Method_System_Collections_Hashtable_OnDeserialization__;
    uVar11 = *(uint *)(plVar8 + 3);
    if (1 < uVar11) {
      plVar8[5] = lVar17;
      lVar17 = *(long *)puVar2;
      if (lVar17 != 0) {
        lVar17 = thunk_FUN_00d6225c(lVar17,*(undefined8 *)(*plVar8 + 0x40));
        if (lVar17 == 0) goto LAB_01456414;
        uVar11 = *(uint *)(plVar8 + 3);
      }
      if (2 < uVar11) {
        plVar8[6] = *(long *)puVar2;
        uStack0000000000000020 =
             (**(code **)(*unaff_x28 + 0x188))(unaff_x28,*(undefined8 *)(*unaff_x28 + 400));
        lVar17 = FUN_0176eb1c(&stack0x00000020,0);
        if ((lVar17 != 0) &&
           (lVar10 = thunk_FUN_00d6225c(lVar17,*(undefined8 *)(*plVar8 + 0x40)), lVar10 == 0))
        goto LAB_01456414;
        uVar11 = *(uint *)(plVar8 + 3);
        if (3 < uVar11) {
          plVar8[7] = lVar17;
          if (*(long *)StringLiteral_3287 != 0) {
            lVar17 = thunk_FUN_00d6225c(*(long *)StringLiteral_3287,*(undefined8 *)(*plVar8 + 0x40))
            ;
            if (lVar17 == 0) goto LAB_01456414;
            uVar11 = *(uint *)(plVar8 + 3);
          }
          if (4 < uVar11) {
            plVar8[8] = *(long *)StringLiteral_3287;
            uStack0000000000000020 =
                 (**(code **)(*unaff_x28 + 0x1a8))(unaff_x28,*(undefined8 *)(*unaff_x28 + 0x1b0));
            lVar17 = FUN_0176eb1c(&stack0x00000020,0);
            if ((lVar17 != 0) &&
               (lVar10 = thunk_FUN_00d6225c(lVar17,*(undefined8 *)(*plVar8 + 0x40)), lVar10 == 0))
            goto LAB_01456414;
            if (5 < *(uint *)(plVar8 + 3)) {
              plVar8[9] = lVar17;
              uVar18 = FUN_01600844(plVar8,0);
              if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
                thunk_FUN_00d32864(*(long *)StringLiteral_302);
              }
              FUN_02660dac(uVar18,0);
              goto LAB_014561fc;
            }
          }
        }
      }
    }
  }
LAB_01456410:
                    /* WARNING: Subroutine does not return */
  FUN_00da5194();
}


