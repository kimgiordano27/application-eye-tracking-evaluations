/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.DebugInterface$$Awake
ENTRY_POINT: 01446bd4
PROGRAM: Lovesick-libil2cpp.so
SCORE: 162
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;pose_vector;paired_state_refs;telemetry;structure_combo
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;telemetry_or_network_hits_1;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_data_collection_or_telemetry_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_DebugInterface__Awake
               (long param_1,undefined1 param_2 [16],undefined1 param_3 [16],double param_4,
               double param_5)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  byte bVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  ulong uVar14;
  long lVar15;
  undefined8 uVar16;
  long unaff_x19;
  long unaff_x20;
  int unaff_w21;
  int iVar17;
  long unaff_x22;
  uint uVar18;
  int iVar19;
  uint uVar20;
  long lVar21;
  int iVar22;
  int iVar23;
  undefined8 *unaff_x26;
  undefined8 *unaff_x27;
  undefined8 *unaff_x28;
  undefined8 *puVar24;
  byte unaff_w29;
  double dVar25;
  double dVar26;
  int iStack000000000000001c;
  ulong in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  long in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  double in_stack_00000070;
  double in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  double in_stack_000000d0;
  double in_stack_000000d8;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  double in_stack_000000f0;
  double in_stack_000000f8;
  undefined8 in_stack_00000100;
  undefined8 in_stack_00000108;
  double in_stack_00000110;
  double in_stack_00000118;
  
  do {
    if (*(char *)(*(long *)(param_1 + 0xb8) + 1) == '\0') {
      if ((unaff_w29 & 1) != 0) goto LAB_01446ca8;
      goto LAB_01446cfc;
    }
    do {
      if ((unaff_w29 & 1) == 0) {
        uVar11 = FUN_01445ad4(unaff_x22);
        uVar11 = FUN_015f6780(*unaff_x28,uVar11,0);
        if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
          thunk_FUN_00d32864(*(long *)StringLiteral_302);
        }
        FUN_02660dac(uVar11,0);
      }
      else {
        plVar7 = (long *)FUN_00da4fb8(*(undefined8 *)StringLiteral_3033,2);
        in_stack_00000040 = CONCAT44(in_stack_00000040._4_4_,unaff_w21);
        lVar8 = thunk_FUN_00d61fa0(*(undefined8 *)
                                    Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__
                                   ,&stack0x00000040);
        if (plVar7 == (long *)0x0) goto LAB_014479c0;
        if ((lVar8 != 0) &&
           (lVar9 = thunk_FUN_00d6225c(lVar8,*(undefined8 *)(*plVar7 + 0x40)), lVar9 == 0)) {
LAB_014479c8:
          uVar11 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
          FUN_00da5038(uVar11,0);
        }
        if ((int)plVar7[3] == 0) goto LAB_014479c4;
        plVar7[4] = lVar8;
        in_stack_00000020 = CONCAT71(in_stack_00000020._1_7_,unaff_w29) & 0xffffffffffffff01;
        lVar8 = thunk_FUN_00d61fa0(*unaff_x26,&stack0x00000020);
        if ((lVar8 != 0) &&
           (lVar9 = thunk_FUN_00d6225c(lVar8,*(undefined8 *)(*plVar7 + 0x40)), lVar9 == 0))
        goto LAB_014479c8;
        if (*(uint *)(plVar7 + 3) < 2) goto LAB_014479c4;
        plVar7[5] = lVar8;
        if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        FUN_02660fcc(*unaff_x27,plVar7,0);
LAB_01446ca8:
        FUN_01444fa0(unaff_x22);
      }
LAB_01446cfc:
      puVar5 = 
      Method_UnityEngine_Experimental_Rendering_RenderGraphModule_TextureResource_ReleasePooledGraphicsResource__
      ;
      puVar3 = Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__;
      puVar2 = System_Tuple<Vector3,_Vector3>_var;
      unaff_w21 = unaff_w21 + 1;
      if (*(int *)(unaff_x19 + 0x18) <= unaff_w21) {
        if (*(int *)(unaff_x19 + 0x18) < 1) goto LAB_01446f04;
        iVar17 = 0;
        goto LAB_01446d3c;
      }
      FUN_0132138c();
      unaff_x22 = in_stack_00000040;
      if ((in_stack_00000040 == 0) || (lVar8 = *(long *)(in_stack_00000040 + 0x10), lVar8 == 0))
      goto LAB_014479c0;
      uVar18 = 0;
      uVar20 = 0xffffffff;
      unaff_w29 = 1;
      uVar11 = 0;
      uVar12 = 0;
      dVar25 = 0.0;
      dVar26 = 0.0;
      while ((int)uVar18 < (int)*(uint *)(lVar8 + 0x18)) {
        if (*(uint *)(lVar8 + 0x18) <= uVar18) goto LAB_014479c4;
        lVar9 = (long)(int)uVar18;
        if (*(long *)(lVar8 + lVar9 * 8 + 0x20) == 0) goto LAB_014479c0;
        uVar14 = FUN_014440c0();
        if (uVar20 == 0xffffffff) {
          if ((uVar14 & 1) == 0) {
            lVar8 = *(long *)(unaff_x22 + 0x10);
            if (lVar8 == 0) goto LAB_014479c0;
            if (*(uint *)(lVar8 + 0x18) <= uVar18) goto LAB_014479c4;
            lVar8 = *(long *)(lVar8 + lVar9 * 8 + 0x20);
            if (lVar8 == 0) goto LAB_014479c0;
            uVar11 = *(undefined8 *)(lVar8 + 0x40);
            uVar12 = *(undefined8 *)(lVar8 + 0x48);
            dVar25 = *(double *)(lVar8 + 0x50);
            dVar26 = *(double *)(lVar8 + 0x58);
            uVar20 = uVar18;
          }
          else {
            uVar20 = 0xffffffff;
          }
        }
        else if ((uVar14 & 1) == 0) {
          lVar8 = *(long *)(unaff_x22 + 0x10);
          if (lVar8 == 0) goto LAB_014479c0;
          if (*(uint *)(lVar8 + 0x18) <= uVar18) goto LAB_014479c4;
          lVar8 = *(long *)(lVar8 + lVar9 * 8 + 0x20);
          if (lVar8 == 0) goto LAB_014479c0;
          param_4 = dVar25;
          param_5 = dVar26;
          bVar6 = FUN_01431798(uVar11,uVar12,dVar25,dVar26,*(undefined8 *)(lVar8 + 0x40),
                               *(undefined8 *)(lVar8 + 0x48),*(undefined8 *)(lVar8 + 0x50),
                               *(undefined8 *)(lVar8 + 0x58),0);
          unaff_w29 = unaff_w29 & (bVar6 ^ 1);
        }
        lVar8 = *(long *)(unaff_x22 + 0x10);
        uVar18 = uVar18 + 1;
        if (lVar8 == 0) goto LAB_014479c0;
      }
    } while (3 < *(int *)(unaff_x20 + 0x24));
    param_1 = *(long *)PTR_DAT_033f0098;
  } while( true );
  while( true ) {
    iVar19 = 0;
    while( true ) {
      lVar10 = *(long *)(lVar9 + 0x10);
      if (lVar10 == 0) goto LAB_014479c0;
      if (*(int *)(lVar10 + 0x18) <= iVar19) break;
      if (*(long *)(lVar9 + 0x18) == 0) goto LAB_014479c0;
      if (*(int *)(*(long *)(lVar9 + 0x18) + 0x18) < 1) {
        lVar9 = *(long *)(lVar8 + 0x10);
        if (lVar9 == 0) goto LAB_014479c0;
        if (*(int *)(lVar9 + 0x18) == 0) goto LAB_014479c4;
        lVar21 = *(long *)(lVar9 + 0x20);
        FUN_0132138c(lVar10,iVar19,&stack0x00000040,*(undefined8 *)puVar5);
        lVar9 = in_stack_00000040;
        puVar4 = Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__;
        if (lVar21 == 0) {
          in_stack_00000040 = CONCAT44(in_stack_00000040._4_4_,iVar17);
          uVar12 = thunk_FUN_00d61fa0(*(undefined8 *)
                                       Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__
                                      ,&stack0x00000040);
          in_stack_00000020 = CONCAT44(in_stack_00000020._4_4_,iVar19);
          uVar13 = thunk_FUN_00d61fa0(*(undefined8 *)puVar4,&stack0x00000020);
          uVar16 = *(undefined8 *)puVar2;
          uVar11 = *(undefined8 *)
                    Method_System_Collections_Generic_HashSet<PlayableDirector>_Contains__;
        }
        else {
          lVar10 = *(long *)(lVar8 + 0x10);
          if (lVar10 == 0) goto LAB_014479c0;
          if (*(int *)(lVar10 + 0x18) == 0) goto LAB_014479c4;
          if (*(long *)(lVar10 + 0x20) == 0) goto LAB_014479c0;
          uVar11 = FUN_01444238();
          in_stack_00000040 = CONCAT44(in_stack_00000040._4_4_,iVar17);
          uVar12 = thunk_FUN_00d61fa0(*(undefined8 *)puVar3,&stack0x00000040);
          in_stack_00000020 = CONCAT44(in_stack_00000020._4_4_,iVar19);
          uVar13 = thunk_FUN_00d61fa0(*(undefined8 *)puVar3,&stack0x00000020);
          uVar16 = *(undefined8 *)puVar2;
        }
        uVar11 = FUN_01600ba0(uVar16,uVar11,uVar12,uVar13,0);
        if (lVar9 == 0) goto LAB_014479c0;
        *(undefined8 *)(lVar9 + 0x78) = uVar11;
      }
      else {
        FUN_0132138c(lVar10,iVar19,&stack0x00000040,*(undefined8 *)puVar5);
        lVar9 = in_stack_00000040;
        if ((((*(long *)(lVar8 + 0x18) == 0) ||
             (lVar10 = *(long *)(*(long *)(lVar8 + 0x18) + 0x18), lVar10 == 0)) ||
            (FUN_0132138c(lVar10,0,&stack0x00000040,
                          *(undefined8 *)
                           Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Contains<int>__),
            in_stack_00000040 == 0)) || (uVar11 = FUN_0268b6ac(in_stack_00000040,0), lVar9 == 0))
        goto LAB_014479c0;
        *(undefined8 *)(lVar9 + 0x78) = uVar11;
      }
      lVar9 = *(long *)(lVar8 + 0x18);
      iVar19 = iVar19 + 1;
      if (lVar9 == 0) goto LAB_014479c0;
    }
    FUN_01445304(lVar8,*(undefined1 *)(unaff_x20 + 0x20));
    FUN_014454e0(lVar8);
    iVar17 = iVar17 + 1;
    if (*(int *)(unaff_x19 + 0x18) <= iVar17) break;
LAB_01446d3c:
    FUN_0132138c();
    lVar8 = in_stack_00000040;
    if ((in_stack_00000040 == 0) || (lVar9 = *(long *)(in_stack_00000040 + 0x18), lVar9 == 0))
    goto LAB_014479c0;
  }
LAB_01446f04:
  puVar2 = UnityEngine_InputSystem_UI_MultiplayerEventSystem_TypeInfo;
  *(undefined1 *)(unaff_x20 + 0x10) = 1;
  lVar8 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
  if (lVar8 == 0) {
LAB_014479c0:
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  FUN_01320e50(lVar8,*(undefined8 *)PTR_DAT_033f6e48);
  if (*(int *)(unaff_x19 + 0x18) < 1) {
    iStack000000000000001c = 0;
LAB_01447844:
    puVar3 = Method_UnityEngine_Playables_ScriptPlayable<ActivationControlPlayable>_op_Implicit__;
    puVar2 = Method_System_Collections_Generic_Dictionary<Type,_VisualElement_TypeData>__ctor__;
    iVar17 = *(int *)(lVar8 + 0x18);
    if (-1 < iVar17 + -1) {
      do {
        iVar17 = iVar17 + -1;
        FUN_0132138c(lVar8,iVar17,&stack0x00000040,*(undefined8 *)puVar2);
        FUN_01324ac8();
      } while (0 < iVar17);
    }
    lVar9 = *(long *)puVar3;
    *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
    uVar14 = FUN_00da5b18(*(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 200));
    if ((uVar14 & 1) == 0) {
      *(undefined4 *)(lVar8 + 0x18) = 0;
    }
    else {
      iVar17 = *(int *)(lVar8 + 0x18);
      *(undefined4 *)(lVar8 + 0x18) = 0;
      if (0 < iVar17) {
        FUN_0179519c(*(undefined8 *)(lVar8 + 0x10),0,iVar17,0);
      }
    }
    puVar3 = 
    Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_EraseAt<InputRemoting_RemoteSender>__;
    puVar2 = Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__;
    if (3 < *(int *)(unaff_x20 + 0x24)) {
      in_stack_00000040 = CONCAT44(in_stack_00000040._4_4_,iStack000000000000001c);
      uVar11 = thunk_FUN_00d61fa0(*(undefined8 *)
                                   Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__
                                  ,&stack0x00000040);
      in_stack_00000020 = CONCAT44(in_stack_00000020._4_4_,*(undefined4 *)(unaff_x19 + 0x18));
      uVar12 = thunk_FUN_00d61fa0(*(undefined8 *)puVar2,&stack0x00000020);
      uVar11 = FUN_01600b5c(*(undefined8 *)puVar3,uVar11,uVar12,0);
      if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
        thunk_FUN_00d32864(*(long *)StringLiteral_302);
      }
      FUN_02660dac(uVar11,0);
    }
    if (**(char **)(*(long *)PTR_DAT_033f0098 + 0xb8) != '\0') {
      FUN_014479d4();
    }
    return;
  }
  iStack000000000000001c = 0;
  puVar24 = (undefined8 *)Method_UnityEngine_ProBuilder_ProBuilderMesh_<SetSelectedFaces>b__246_1__;
  iVar17 = 0;
LAB_01446f58:
  FUN_0132138c();
  lVar9 = in_stack_00000040;
  iVar19 = iVar17 + 1;
  iVar23 = iVar19;
  if (iVar19 < *(int *)(unaff_x19 + 0x18)) {
    do {
      FUN_0132138c();
      lVar10 = in_stack_00000040;
      if (in_stack_00000040 == 0) goto LAB_014479c0;
      uVar14 = FUN_01445624(in_stack_00000040,lVar9,*(undefined1 *)(unaff_x20 + 0x11),
                            *(undefined8 *)(unaff_x20 + 0x18));
      if ((uVar14 & 1) != 0) {
        in_stack_00000108 = 0;
        in_stack_00000100 = 0;
        in_stack_00000118 = 0.0;
        in_stack_00000110 = 0.0;
        if ((lVar9 == 0) || (lVar21 = *(long *)(lVar9 + 0x10), lVar21 == 0)) goto LAB_014479c0;
        uVar18 = 0;
        uVar20 = 0xffffffff;
        while ((int)uVar18 < (int)*(uint *)(lVar21 + 0x18)) {
          if (*(uint *)(lVar21 + 0x18) <= uVar18) goto LAB_014479c4;
          if (*(long *)(lVar21 + (long)(int)uVar18 * 8 + 0x20) == 0) goto LAB_014479c0;
          bVar6 = FUN_014440c0();
          lVar21 = *(long *)(lVar9 + 0x10);
          uVar1 = uVar18;
          if ((uVar20 == 0xffffffff & (bVar6 ^ 1)) == 0) {
            uVar1 = uVar20;
          }
          uVar18 = uVar18 + 1;
          uVar20 = uVar1;
          if (lVar21 == 0) goto LAB_014479c0;
        }
        in_stack_000000e8 = 0;
        in_stack_000000e0 = 0;
        in_stack_000000f8 = 0.0;
        in_stack_000000f0 = 0.0;
        in_stack_000000c8 = 0;
        in_stack_000000c0 = 0;
        in_stack_000000d8 = 0.0;
        in_stack_000000d0 = 0.0;
        if (uVar20 == 0xffffffff) {
          param_4 = 5.26354424712089e-315;
          param_5 = 5.26354424712089e-315;
          FUN_0143157c(0,0,&stack0x00000100,0);
        }
        else {
          if (((*(long *)(lVar10 + 0x18) == 0) ||
              (lVar21 = *(long *)(*(long *)(lVar10 + 0x18) + 0x10), lVar21 == 0)) ||
             (FUN_0132138c(lVar21,0,&stack0x00000040,*(undefined8 *)puVar5), in_stack_00000040 == 0)
             ) goto LAB_014479c0;
          in_stack_000000f8 = *(double *)(in_stack_00000040 + 0x50);
          in_stack_000000f0 = *(double *)(in_stack_00000040 + 0x48);
          in_stack_000000e0 = *(undefined8 *)(in_stack_00000040 + 0x38);
          lVar21 = *(long *)(lVar10 + 0x18);
          in_stack_000000e8 = *(undefined8 *)(in_stack_00000040 + 0x40);
          if (lVar21 == 0) goto LAB_014479c0;
          iVar22 = 1;
          while( true ) {
            lVar21 = *(long *)(lVar21 + 0x10);
            if (lVar21 == 0) goto LAB_014479c0;
            if (*(int *)(lVar21 + 0x18) <= iVar22) break;
            FUN_0132138c(lVar21,iVar22,&stack0x00000040,*(undefined8 *)puVar5);
            if (in_stack_00000040 == 0) goto LAB_014479c0;
            in_stack_000000b8 = *(undefined8 *)(in_stack_00000040 + 0x50);
            in_stack_000000b0 = *(undefined8 *)(in_stack_00000040 + 0x48);
            in_stack_000000a8 = *(undefined8 *)(in_stack_00000040 + 0x40);
            uVar11 = *(undefined8 *)(in_stack_00000040 + 0x38);
            in_stack_000000a0 = uVar11;
            in_stack_000000e0 = FUN_014320a0(&stack0x000000e0,&stack0x000000a0,0);
            lVar21 = *(long *)(lVar10 + 0x18);
            iVar22 = iVar22 + 1;
            in_stack_000000e8 = uVar11;
            in_stack_000000f0 = param_4;
            in_stack_000000f8 = param_5;
            if (lVar21 == 0) goto LAB_014479c0;
          }
          if (((*(long *)(lVar9 + 0x18) == 0) ||
              (lVar21 = *(long *)(*(long *)(lVar9 + 0x18) + 0x10), lVar21 == 0)) ||
             (FUN_0132138c(lVar21,0,&stack0x00000040,*(undefined8 *)puVar5), in_stack_00000040 == 0)
             ) goto LAB_014479c0;
          in_stack_000000d8 = *(double *)(in_stack_00000040 + 0x50);
          in_stack_000000d0 = *(double *)(in_stack_00000040 + 0x48);
          uVar11 = *(undefined8 *)(in_stack_00000040 + 0x38);
          lVar21 = *(long *)(lVar9 + 0x18);
          in_stack_000000c0 = uVar11;
          in_stack_000000c8 = *(undefined8 *)(in_stack_00000040 + 0x40);
          if (lVar21 == 0) goto LAB_014479c0;
          iVar22 = 1;
          while( true ) {
            lVar21 = *(long *)(lVar21 + 0x10);
            if (lVar21 == 0) goto LAB_014479c0;
            if (*(int *)(lVar21 + 0x18) <= iVar22) break;
            FUN_0132138c(lVar21,iVar22,&stack0x00000040,*(undefined8 *)puVar5);
            if (in_stack_00000040 == 0) goto LAB_014479c0;
            in_stack_00000098 = *(undefined8 *)(in_stack_00000040 + 0x50);
            in_stack_00000090 = *(undefined8 *)(in_stack_00000040 + 0x48);
            in_stack_00000088 = *(undefined8 *)(in_stack_00000040 + 0x40);
            uVar11 = *(undefined8 *)(in_stack_00000040 + 0x38);
            in_stack_00000080 = uVar11;
            in_stack_000000c0 = FUN_014320a0(&stack0x000000c0,&stack0x00000080,0);
            lVar21 = *(long *)(lVar9 + 0x18);
            iVar22 = iVar22 + 1;
            in_stack_000000c8 = uVar11;
            in_stack_000000d0 = param_4;
            in_stack_000000d8 = param_5;
            if (lVar21 == 0) goto LAB_014479c0;
          }
          in_stack_00000100 = FUN_014320a0(&stack0x000000e0,&stack0x000000c0,0);
          in_stack_00000108 = uVar11;
          in_stack_00000110 = param_4;
          in_stack_00000118 = param_5;
          if (param_4 * param_5 + 0.0 <
              in_stack_000000f0 * in_stack_000000f8 + in_stack_000000d0 * in_stack_000000d8 + 0.0) {
            if (*(int *)(unaff_x20 + 0x24) < 3) {
              plVar7 = (long *)0x0;
              goto LAB_01447538;
            }
            plVar7 = (long *)thunk_FUN_00d62348(*(undefined8 *)
                                                 Method_System_Collections_Generic_Dictionary<TerrainData,_ObiHeightFieldHandle>_get_Count__
                                               );
            if (plVar7 == (long *)0x0) goto LAB_014479c0;
            FUN_0160aa4c(plVar7,0);
            uVar11 = FUN_01445ad4(lVar10);
            uVar12 = FUN_01445ad4(lVar9);
            FUN_0160dca4(plVar7,*(undefined8 *)System_Xml_Schema_Datatype_ENTITY_TypeInfo,uVar11,
                         uVar12,0);
            if (*(int *)(unaff_x20 + 0x24) < 5) goto LAB_01447538;
            lVar21 = *(long *)(lVar10 + 0x18);
            if (lVar21 == 0) goto LAB_014479c0;
            iVar23 = 0;
            goto LAB_0144733c;
          }
        }
        if (3 < *(int *)(unaff_x20 + 0x24)) {
          uVar11 = FUN_01445ad4(lVar10);
          in_stack_00000068 = in_stack_000000e8;
          in_stack_00000060 = in_stack_000000e0;
          in_stack_00000078 = in_stack_000000f8;
          in_stack_00000070 = in_stack_000000f0;
          uVar12 = FUN_0143182c(&stack0x00000060,0);
          uVar11 = FUN_015f5b28(uVar11,uVar12,0);
          uVar12 = FUN_01445ad4(lVar9);
          in_stack_00000068 = in_stack_000000c8;
          in_stack_00000060 = in_stack_000000c0;
          in_stack_00000078 = in_stack_000000d8;
          in_stack_00000070 = in_stack_000000d0;
          uVar13 = FUN_0143182c(&stack0x00000060,0);
          uVar12 = FUN_015f5b28(uVar12,uVar13,0);
          uVar11 = FUN_01600b5c(*(undefined8 *)
                                 Method_Oculus_Interaction_PointerInteractable<HandGrabInteractor,_HandGrabInteractable>__ctor__
                                ,uVar11,uVar12,0);
          if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
            thunk_FUN_00d32864(*(long *)StringLiteral_302);
          }
          FUN_02660dac(uVar11,0);
        }
      }
      iVar23 = iVar23 + 1;
    } while (iVar23 < *(int *)(unaff_x19 + 0x18));
  }
  goto LAB_014472ac;
LAB_0144733c:
  lVar21 = *(long *)(lVar21 + 0x10);
  if (lVar21 == 0) goto LAB_014479c0;
  if (*(int *)(lVar21 + 0x18) <= iVar23) goto LAB_01447434;
  FUN_0132138c(lVar21,iVar23,&stack0x00000040,*(undefined8 *)puVar5);
  if (((in_stack_00000040 == 0) || (*(long *)(lVar10 + 0x18) == 0)) ||
     (lVar21 = *(long *)(*(long *)(lVar10 + 0x18) + 0x10), lVar21 == 0)) goto LAB_014479c0;
  uVar11 = *(undefined8 *)(in_stack_00000040 + 0x10);
  FUN_0132138c(lVar21,iVar23,&stack0x00000040,*(undefined8 *)puVar5);
  if (in_stack_00000040 == 0) goto LAB_014479c0;
  in_stack_00000048 = *(undefined8 *)(in_stack_00000040 + 0x40);
  in_stack_00000050 = *(undefined8 *)(in_stack_00000040 + 0x48);
  in_stack_00000058 = *(undefined8 *)(in_stack_00000040 + 0x50);
  in_stack_00000040 = *(long *)(in_stack_00000040 + 0x38);
  uVar12 = thunk_FUN_00d61fa0(*(undefined8 *)PTR_DAT_033ed038,&stack0x00000040);
  lVar21 = *(long *)(lVar10 + 0x10);
  if (lVar21 == 0) goto LAB_014479c0;
  if (*(int *)(lVar21 + 0x18) == 0) goto LAB_014479c4;
  lVar21 = *(long *)(lVar21 + 0x20);
  if (lVar21 == 0) goto LAB_014479c0;
  in_stack_00000028 = *(undefined8 *)(lVar21 + 0x28);
  in_stack_00000020 = *(ulong *)(lVar21 + 0x20);
  in_stack_00000030 = *(undefined8 *)(lVar21 + 0x30);
  in_stack_00000038 = *(undefined8 *)(lVar21 + 0x38);
  uVar13 = thunk_FUN_00d61fa0(*(undefined8 *)PTR_DAT_033ed038,&stack0x00000020);
  FUN_0160dd00(plVar7,*(undefined8 *)StringLiteral_1722,uVar11,uVar12,uVar13,0);
  lVar21 = *(long *)(lVar10 + 0x18);
  iVar23 = iVar23 + 1;
  puVar24 = (undefined8 *)Method_UnityEngine_ProBuilder_ProBuilderMesh_<SetSelectedFaces>b__246_1__;
  if (lVar21 == 0) goto LAB_014479c0;
  goto LAB_0144733c;
LAB_01447434:
  lVar21 = *(long *)(lVar9 + 0x18);
  if (lVar21 == 0) goto LAB_014479c0;
  iVar23 = 0;
  while( true ) {
    lVar21 = *(long *)(lVar21 + 0x10);
    if (lVar21 == 0) goto LAB_014479c0;
    if (*(int *)(lVar21 + 0x18) <= iVar23) break;
    FUN_0132138c(lVar21,iVar23,&stack0x00000040,*(undefined8 *)puVar5);
    if (((in_stack_00000040 == 0) || (*(long *)(lVar9 + 0x18) == 0)) ||
       (lVar21 = *(long *)(*(long *)(lVar9 + 0x18) + 0x10), lVar21 == 0)) goto LAB_014479c0;
    uVar11 = *(undefined8 *)(in_stack_00000040 + 0x10);
    FUN_0132138c(lVar21,iVar23,&stack0x00000040,*(undefined8 *)puVar5);
    if (in_stack_00000040 == 0) goto LAB_014479c0;
    in_stack_00000048 = *(undefined8 *)(in_stack_00000040 + 0x40);
    in_stack_00000050 = *(undefined8 *)(in_stack_00000040 + 0x48);
    in_stack_00000058 = *(undefined8 *)(in_stack_00000040 + 0x50);
    in_stack_00000040 = *(long *)(in_stack_00000040 + 0x38);
    uVar12 = thunk_FUN_00d61fa0(*(undefined8 *)PTR_DAT_033ed038,&stack0x00000040);
    lVar21 = *(long *)(lVar9 + 0x10);
    if (lVar21 == 0) goto LAB_014479c0;
    if (*(int *)(lVar21 + 0x18) == 0) goto LAB_014479c4;
    lVar21 = *(long *)(lVar21 + 0x20);
    if (lVar21 == 0) goto LAB_014479c0;
    in_stack_00000028 = *(undefined8 *)(lVar21 + 0x28);
    in_stack_00000020 = *(ulong *)(lVar21 + 0x20);
    in_stack_00000030 = *(undefined8 *)(lVar21 + 0x30);
    in_stack_00000038 = *(undefined8 *)(lVar21 + 0x38);
    uVar13 = thunk_FUN_00d61fa0(*(undefined8 *)PTR_DAT_033ed038,&stack0x00000020);
    FUN_0160dd00(plVar7,*(undefined8 *)
                         Method_Newtonsoft_Json_Utilities_AsyncUtils_CancelIfRequestedAsync<Nullable<DateTime>>__
                 ,uVar11,uVar12,uVar13,0);
    lVar21 = *(long *)(lVar9 + 0x18);
    iVar23 = iVar23 + 1;
    puVar24 = (undefined8 *)
              Method_UnityEngine_ProBuilder_ProBuilderMesh_<SetSelectedFaces>b__246_1__;
    if (lVar21 == 0) goto LAB_014479c0;
  }
LAB_01447538:
  lVar21 = *(long *)(lVar9 + 0x18);
  if (lVar21 == 0) goto LAB_014479c0;
  iVar23 = 0;
  iStack000000000000001c = iStack000000000000001c + 1;
  while( true ) {
    lVar15 = *(long *)(lVar21 + 0x18);
    if (lVar15 == 0) goto LAB_014479c0;
    if (*(int *)(lVar15 + 0x18) <= iVar23) break;
    if (*(long *)(lVar10 + 0x18) == 0) goto LAB_014479c0;
    lVar21 = *(long *)(*(long *)(lVar10 + 0x18) + 0x18);
    FUN_0132138c(lVar15,iVar23,&stack0x00000040,
                 *(undefined8 *)
                  Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Contains<int>__);
    if (lVar21 == 0) goto LAB_014479c0;
    uVar14 = FUN_01322618(lVar21,in_stack_00000040,*puVar24);
    if ((uVar14 & 1) == 0) {
      if (((*(long *)(lVar10 + 0x18) == 0) || (*(long *)(lVar9 + 0x18) == 0)) ||
         (lVar21 = *(long *)(*(long *)(lVar9 + 0x18) + 0x18), lVar21 == 0)) goto LAB_014479c0;
      lVar15 = *(long *)(*(long *)(lVar10 + 0x18) + 0x18);
      FUN_0132138c(lVar21,iVar23,&stack0x00000040,
                   *(undefined8 *)
                    Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Contains<int>__);
      if (lVar15 == 0) goto LAB_014479c0;
      FUN_00ac8520(lVar15,in_stack_00000040,*(undefined8 *)StringLiteral_1415);
    }
    lVar21 = *(long *)(lVar9 + 0x18);
    iVar23 = iVar23 + 1;
    if (lVar21 == 0) goto LAB_014479c0;
  }
  iVar23 = 0;
  while( true ) {
    lVar21 = *(long *)(lVar21 + 0x10);
    if (lVar21 == 0) goto LAB_014479c0;
    if (*(int *)(lVar21 + 0x18) <= iVar23) break;
    if (*(long *)(lVar10 + 0x18) == 0) goto LAB_014479c0;
    lVar15 = *(long *)(*(long *)(lVar10 + 0x18) + 0x10);
    FUN_0132138c(lVar21,iVar23,&stack0x00000040,*(undefined8 *)puVar5);
    if (lVar15 == 0) goto LAB_014479c0;
    FUN_00bc03b0(lVar15,in_stack_00000040,*(undefined8 *)PTR_DAT_033eb210);
    lVar21 = *(long *)(lVar9 + 0x18);
    iVar23 = iVar23 + 1;
    if (lVar21 == 0) goto LAB_014479c0;
  }
  param_4 = in_stack_00000110;
  param_5 = in_stack_00000118;
  FUN_01444de8(in_stack_00000100,in_stack_00000108,lVar10);
  in_stack_00000040 = CONCAT44(in_stack_00000040._4_4_,iVar17);
  uVar14 = FUN_01322618(lVar8,&stack0x00000040,*(undefined8 *)PTR_DAT_033f4718);
  if ((uVar14 & 1) == 0) {
    FUN_00ac20f0(lVar8,iVar17,*(undefined8 *)StringLiteral_4747);
  }
  if (3 < *(int *)(unaff_x20 + 0x24)) {
    if (*(int *)(unaff_x20 + 0x24) != 4) {
      uVar11 = FUN_01445ad4(lVar10);
      if (plVar7 == (long *)0x0) goto LAB_014479c0;
      FUN_0160d178(plVar7,*(undefined8 *)
                           Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesScale_IsSame__
                   ,uVar11,0);
      lVar9 = *(long *)(lVar10 + 0x18);
      if (lVar9 == 0) goto LAB_014479c0;
      iVar17 = 0;
      while( true ) {
        lVar9 = *(long *)(lVar9 + 0x10);
        if (lVar9 == 0) goto LAB_014479c0;
        if (*(int *)(lVar9 + 0x18) <= iVar17) break;
        FUN_0132138c(lVar9,iVar17,&stack0x00000040,*(undefined8 *)puVar5);
        if (((in_stack_00000040 == 0) || (*(long *)(lVar10 + 0x18) == 0)) ||
           (lVar9 = *(long *)(*(long *)(lVar10 + 0x18) + 0x10), lVar9 == 0)) goto LAB_014479c0;
        uVar11 = *(undefined8 *)(in_stack_00000040 + 0x10);
        FUN_0132138c(lVar9,iVar17,&stack0x00000040,*(undefined8 *)puVar5);
        if (in_stack_00000040 == 0) goto LAB_014479c0;
        in_stack_00000048 = *(undefined8 *)(in_stack_00000040 + 0x40);
        in_stack_00000050 = *(undefined8 *)(in_stack_00000040 + 0x48);
        in_stack_00000058 = *(undefined8 *)(in_stack_00000040 + 0x50);
        in_stack_00000040 = *(long *)(in_stack_00000040 + 0x38);
        uVar12 = thunk_FUN_00d61fa0(*(undefined8 *)PTR_DAT_033ed038,&stack0x00000040);
        lVar9 = *(long *)(lVar10 + 0x10);
        if (lVar9 == 0) goto LAB_014479c0;
        if (*(int *)(lVar9 + 0x18) == 0) {
LAB_014479c4:
                    /* WARNING: Subroutine does not return */
          FUN_00da5194();
        }
        lVar9 = *(long *)(lVar9 + 0x20);
        if (lVar9 == 0) goto LAB_014479c0;
        in_stack_00000028 = *(undefined8 *)(lVar9 + 0x28);
        in_stack_00000020 = *(ulong *)(lVar9 + 0x20);
        in_stack_00000030 = *(undefined8 *)(lVar9 + 0x30);
        in_stack_00000038 = *(undefined8 *)(lVar9 + 0x38);
        uVar13 = thunk_FUN_00d61fa0(*(undefined8 *)PTR_DAT_033ed038,&stack0x00000020);
        FUN_0160dd00(plVar7,*(undefined8 *)StringLiteral_1722,uVar11,uVar12,uVar13,0);
        lVar9 = *(long *)(lVar10 + 0x18);
        iVar17 = iVar17 + 1;
        if (lVar9 == 0) goto LAB_014479c0;
      }
      if (**(char **)(*(long *)PTR_DAT_033f0098 + 0xb8) != '\0') {
        FUN_014479d4();
      }
    }
    if (plVar7 == (long *)0x0) goto LAB_014479c0;
    uVar11 = (**(code **)(*plVar7 + 0x168))(plVar7,*(undefined8 *)(*plVar7 + 0x170));
    if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
      thunk_FUN_00d32864(*(long *)StringLiteral_302);
    }
    FUN_02660dac(uVar11,0);
  }
LAB_014472ac:
  iVar17 = iVar19;
  if (*(int *)(unaff_x19 + 0x18) <= iVar19) goto LAB_01447844;
  goto LAB_01446f58;
}


