/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.DebugInterface$$SetTransparencyRecursive
ENTRY_POINT: 01446a2c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 166
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;pose_vector;paired_state_refs;telemetry;structure_combo
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_3;paired_field_refs_with_eye_source;telemetry_or_network_hits_1;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_data_collection_or_telemetry_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_DebugInterface__SetTransparencyRecursive
               (undefined1 param_1 [16],undefined1 param_2 [16],double param_3,double param_4)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  byte bVar6;
  byte bVar7;
  undefined8 uVar8;
  ulong uVar9;
  long *plVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  int iVar14;
  long lVar15;
  undefined8 uVar16;
  long unaff_x19;
  long unaff_x20;
  int iVar17;
  uint uVar18;
  uint uVar19;
  long lVar20;
  long lVar21;
  int iVar22;
  int iVar23;
  undefined8 *puVar24;
  undefined8 uVar25;
  double dVar26;
  double dVar27;
  int iStack000000000000001c;
  undefined8 in_stack_00000020;
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
  
  puVar2 = 
  Method_UnityEngine_Rendering_Universal_UTess_ModuleHandle_GetUpper<UHull,_float2,_Tessellator_TestHullPointU>__
  ;
  uVar8 = FUN_0176eb1c(&stack0x0000012c,0);
  uVar8 = FUN_015f5b28(*(undefined8 *)puVar2,uVar8,0);
  if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
    thunk_FUN_00d32864(*(long *)StringLiteral_302);
  }
  FUN_02660dac(uVar8,0);
  puVar5 = StringLiteral_9958;
  puVar3 = Method_System_Linq_Enumerable_ToList<Vector4>__;
  puVar2 = PTR_DAT_033f6c10;
  iVar14 = *(int *)(unaff_x19 + 0x18);
  if (0 < iVar14) {
    iVar17 = 0;
    do {
      FUN_0132138c();
      lVar12 = in_stack_00000040;
      if ((in_stack_00000040 == 0) || (lVar15 = *(long *)(in_stack_00000040 + 0x10), lVar15 == 0))
      goto LAB_014479c0;
      uVar18 = 0;
      uVar19 = 0xffffffff;
      bVar7 = 1;
      uVar8 = 0;
      uVar25 = 0;
      dVar26 = 0.0;
      dVar27 = 0.0;
      while ((int)uVar18 < (int)*(uint *)(lVar15 + 0x18)) {
        if (*(uint *)(lVar15 + 0x18) <= uVar18) goto LAB_014479c4;
        lVar21 = (long)(int)uVar18;
        if (*(long *)(lVar15 + lVar21 * 8 + 0x20) == 0) goto LAB_014479c0;
        uVar9 = FUN_014440c0();
        if (uVar19 == 0xffffffff) {
          if ((uVar9 & 1) == 0) {
            lVar15 = *(long *)(lVar12 + 0x10);
            if (lVar15 == 0) goto LAB_014479c0;
            if (*(uint *)(lVar15 + 0x18) <= uVar18) goto LAB_014479c4;
            lVar15 = *(long *)(lVar15 + lVar21 * 8 + 0x20);
            if (lVar15 == 0) goto LAB_014479c0;
            uVar8 = *(undefined8 *)(lVar15 + 0x40);
            uVar25 = *(undefined8 *)(lVar15 + 0x48);
            dVar26 = *(double *)(lVar15 + 0x50);
            dVar27 = *(double *)(lVar15 + 0x58);
            uVar19 = uVar18;
          }
          else {
            uVar19 = 0xffffffff;
          }
        }
        else if ((uVar9 & 1) == 0) {
          lVar15 = *(long *)(lVar12 + 0x10);
          if (lVar15 == 0) goto LAB_014479c0;
          if (*(uint *)(lVar15 + 0x18) <= uVar18) goto LAB_014479c4;
          lVar15 = *(long *)(lVar15 + lVar21 * 8 + 0x20);
          if (lVar15 == 0) goto LAB_014479c0;
          param_3 = dVar26;
          param_4 = dVar27;
          bVar6 = FUN_01431798(uVar8,uVar25,dVar26,dVar27,*(undefined8 *)(lVar15 + 0x40),
                               *(undefined8 *)(lVar15 + 0x48),*(undefined8 *)(lVar15 + 0x50),
                               *(undefined8 *)(lVar15 + 0x58),0);
          bVar7 = bVar7 & (bVar6 ^ 1);
        }
        lVar15 = *(long *)(lVar12 + 0x10);
        uVar18 = uVar18 + 1;
        if (lVar15 == 0) goto LAB_014479c0;
      }
      if ((*(int *)(unaff_x20 + 0x24) < 4) &&
         (*(char *)(*(long *)(*(long *)PTR_DAT_033f0098 + 0xb8) + 1) == '\0')) {
        if (bVar7 != 0) {
LAB_01446ca8:
          FUN_01444fa0(lVar12);
        }
      }
      else {
        if (bVar7 != 0) {
          plVar10 = (long *)FUN_00da4fb8(*(undefined8 *)StringLiteral_3033,2);
          in_stack_00000040 = CONCAT44(in_stack_00000040._4_4_,iVar17);
          lVar15 = thunk_FUN_00d61fa0(*(undefined8 *)
                                       Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__
                                      ,&stack0x00000040);
          if (plVar10 != (long *)0x0) {
            if ((lVar15 != 0) &&
               (lVar21 = thunk_FUN_00d6225c(lVar15,*(undefined8 *)(*plVar10 + 0x40)), lVar21 == 0))
            {
LAB_014479c8:
              uVar8 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
              FUN_00da5038(uVar8,0);
            }
            if ((int)plVar10[3] != 0) {
              plVar10[4] = lVar15;
              in_stack_00000020 = CONCAT71(in_stack_00000020._1_7_,bVar7);
              lVar15 = thunk_FUN_00d61fa0(*(undefined8 *)puVar5,&stack0x00000020);
              if ((lVar15 != 0) &&
                 (lVar21 = thunk_FUN_00d6225c(lVar15,*(undefined8 *)(*plVar10 + 0x40)), lVar21 == 0)
                 ) goto LAB_014479c8;
              if (1 < *(uint *)(plVar10 + 3)) {
                plVar10[5] = lVar15;
                if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
                  thunk_FUN_00d32864();
                }
                FUN_02660fcc(*(undefined8 *)puVar3,plVar10,0);
                goto LAB_01446ca8;
              }
            }
LAB_014479c4:
                    /* WARNING: Subroutine does not return */
            FUN_00da5194();
          }
          goto LAB_014479c0;
        }
        uVar8 = FUN_01445ad4(lVar12);
        uVar8 = FUN_015f6780(*(undefined8 *)puVar2,uVar8,0);
        if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
          thunk_FUN_00d32864(*(long *)StringLiteral_302);
        }
        FUN_02660dac(uVar8,0);
      }
      iVar14 = *(int *)(unaff_x19 + 0x18);
      iVar17 = iVar17 + 1;
    } while (iVar17 < iVar14);
  }
  puVar5 = 
  Method_UnityEngine_Experimental_Rendering_RenderGraphModule_TextureResource_ReleasePooledGraphicsResource__
  ;
  puVar3 = Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__;
  puVar2 = System_Tuple<Vector3,_Vector3>_var;
  if (0 < iVar14) {
    iVar14 = 0;
    do {
      FUN_0132138c();
      lVar12 = in_stack_00000040;
      if ((in_stack_00000040 == 0) || (lVar15 = *(long *)(in_stack_00000040 + 0x18), lVar15 == 0))
      goto LAB_014479c0;
      iVar17 = 0;
      while( true ) {
        lVar21 = *(long *)(lVar15 + 0x10);
        if (lVar21 == 0) goto LAB_014479c0;
        if (*(int *)(lVar21 + 0x18) <= iVar17) break;
        if (*(long *)(lVar15 + 0x18) == 0) goto LAB_014479c0;
        if (*(int *)(*(long *)(lVar15 + 0x18) + 0x18) < 1) {
          lVar15 = *(long *)(lVar12 + 0x10);
          if (lVar15 == 0) goto LAB_014479c0;
          if (*(int *)(lVar15 + 0x18) == 0) goto LAB_014479c4;
          lVar20 = *(long *)(lVar15 + 0x20);
          FUN_0132138c(lVar21,iVar17,&stack0x00000040,*(undefined8 *)puVar5);
          lVar15 = in_stack_00000040;
          puVar4 = Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__;
          if (lVar20 == 0) {
            in_stack_00000040 = CONCAT44(in_stack_00000040._4_4_,iVar14);
            uVar25 = thunk_FUN_00d61fa0(*(undefined8 *)
                                         Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__
                                        ,&stack0x00000040);
            in_stack_00000020 = CONCAT44(in_stack_00000020._4_4_,iVar17);
            uVar11 = thunk_FUN_00d61fa0(*(undefined8 *)puVar4,&stack0x00000020);
            uVar16 = *(undefined8 *)puVar2;
            uVar8 = *(undefined8 *)
                     Method_System_Collections_Generic_HashSet<PlayableDirector>_Contains__;
          }
          else {
            lVar21 = *(long *)(lVar12 + 0x10);
            if (lVar21 == 0) goto LAB_014479c0;
            if (*(int *)(lVar21 + 0x18) == 0) goto LAB_014479c4;
            if (*(long *)(lVar21 + 0x20) == 0) goto LAB_014479c0;
            uVar8 = FUN_01444238();
            in_stack_00000040 = CONCAT44(in_stack_00000040._4_4_,iVar14);
            uVar25 = thunk_FUN_00d61fa0(*(undefined8 *)puVar3,&stack0x00000040);
            in_stack_00000020 = CONCAT44(in_stack_00000020._4_4_,iVar17);
            uVar11 = thunk_FUN_00d61fa0(*(undefined8 *)puVar3,&stack0x00000020);
            uVar16 = *(undefined8 *)puVar2;
          }
          uVar8 = FUN_01600ba0(uVar16,uVar8,uVar25,uVar11,0);
          if (lVar15 == 0) goto LAB_014479c0;
          *(undefined8 *)(lVar15 + 0x78) = uVar8;
        }
        else {
          FUN_0132138c(lVar21,iVar17,&stack0x00000040,*(undefined8 *)puVar5);
          lVar15 = in_stack_00000040;
          if ((((*(long *)(lVar12 + 0x18) == 0) ||
               (lVar21 = *(long *)(*(long *)(lVar12 + 0x18) + 0x18), lVar21 == 0)) ||
              (FUN_0132138c(lVar21,0,&stack0x00000040,
                            *(undefined8 *)
                             Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Contains<int>__),
              in_stack_00000040 == 0)) || (uVar8 = FUN_0268b6ac(in_stack_00000040,0), lVar15 == 0))
          goto LAB_014479c0;
          *(undefined8 *)(lVar15 + 0x78) = uVar8;
        }
        lVar15 = *(long *)(lVar12 + 0x18);
        iVar17 = iVar17 + 1;
        if (lVar15 == 0) goto LAB_014479c0;
      }
      FUN_01445304(lVar12,*(undefined1 *)(unaff_x20 + 0x20));
      FUN_014454e0(lVar12);
      iVar14 = iVar14 + 1;
    } while (iVar14 < *(int *)(unaff_x19 + 0x18));
  }
  puVar2 = UnityEngine_InputSystem_UI_MultiplayerEventSystem_TypeInfo;
  *(undefined1 *)(unaff_x20 + 0x10) = 1;
  lVar12 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
  if (lVar12 == 0) {
LAB_014479c0:
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  FUN_01320e50(lVar12,*(undefined8 *)PTR_DAT_033f6e48);
  if (*(int *)(unaff_x19 + 0x18) < 1) {
    iStack000000000000001c = 0;
LAB_01447844:
    puVar3 = Method_UnityEngine_Playables_ScriptPlayable<ActivationControlPlayable>_op_Implicit__;
    puVar2 = Method_System_Collections_Generic_Dictionary<Type,_VisualElement_TypeData>__ctor__;
    iVar14 = *(int *)(lVar12 + 0x18);
    if (-1 < iVar14 + -1) {
      do {
        iVar14 = iVar14 + -1;
        FUN_0132138c(lVar12,iVar14,&stack0x00000040,*(undefined8 *)puVar2);
        FUN_01324ac8();
      } while (0 < iVar14);
    }
    lVar15 = *(long *)puVar3;
    *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
    uVar9 = FUN_00da5b18(*(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 200));
    if ((uVar9 & 1) == 0) {
      *(undefined4 *)(lVar12 + 0x18) = 0;
    }
    else {
      iVar14 = *(int *)(lVar12 + 0x18);
      *(undefined4 *)(lVar12 + 0x18) = 0;
      if (0 < iVar14) {
        FUN_0179519c(*(undefined8 *)(lVar12 + 0x10),0,iVar14,0);
      }
    }
    puVar3 = 
    Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_EraseAt<InputRemoting_RemoteSender>__;
    puVar2 = Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__;
    if (3 < *(int *)(unaff_x20 + 0x24)) {
      in_stack_00000040 = CONCAT44(in_stack_00000040._4_4_,iStack000000000000001c);
      uVar8 = thunk_FUN_00d61fa0(*(undefined8 *)
                                  Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__
                                 ,&stack0x00000040);
      in_stack_00000020 = CONCAT44(in_stack_00000020._4_4_,*(undefined4 *)(unaff_x19 + 0x18));
      uVar25 = thunk_FUN_00d61fa0(*(undefined8 *)puVar2,&stack0x00000020);
      uVar8 = FUN_01600b5c(*(undefined8 *)puVar3,uVar8,uVar25,0);
      if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
        thunk_FUN_00d32864(*(long *)StringLiteral_302);
      }
      FUN_02660dac(uVar8,0);
    }
    if (**(char **)(*(long *)PTR_DAT_033f0098 + 0xb8) != '\0') {
      FUN_014479d4();
    }
    return;
  }
  iStack000000000000001c = 0;
  puVar24 = (undefined8 *)Method_UnityEngine_ProBuilder_ProBuilderMesh_<SetSelectedFaces>b__246_1__;
  iVar14 = 0;
LAB_01446f58:
  FUN_0132138c();
  lVar15 = in_stack_00000040;
  iVar17 = iVar14 + 1;
  iVar23 = iVar17;
  if (iVar17 < *(int *)(unaff_x19 + 0x18)) {
    do {
      FUN_0132138c();
      lVar21 = in_stack_00000040;
      if (in_stack_00000040 == 0) goto LAB_014479c0;
      uVar9 = FUN_01445624(in_stack_00000040,lVar15,*(undefined1 *)(unaff_x20 + 0x11),
                           *(undefined8 *)(unaff_x20 + 0x18));
      if ((uVar9 & 1) != 0) {
        in_stack_00000108 = 0;
        in_stack_00000100 = 0;
        in_stack_00000118 = 0.0;
        in_stack_00000110 = 0.0;
        if ((lVar15 == 0) || (lVar20 = *(long *)(lVar15 + 0x10), lVar20 == 0)) goto LAB_014479c0;
        uVar18 = 0;
        uVar19 = 0xffffffff;
        while ((int)uVar18 < (int)*(uint *)(lVar20 + 0x18)) {
          if (*(uint *)(lVar20 + 0x18) <= uVar18) goto LAB_014479c4;
          if (*(long *)(lVar20 + (long)(int)uVar18 * 8 + 0x20) == 0) goto LAB_014479c0;
          bVar7 = FUN_014440c0();
          lVar20 = *(long *)(lVar15 + 0x10);
          uVar1 = uVar18;
          if ((uVar19 == 0xffffffff & (bVar7 ^ 1)) == 0) {
            uVar1 = uVar19;
          }
          uVar18 = uVar18 + 1;
          uVar19 = uVar1;
          if (lVar20 == 0) goto LAB_014479c0;
        }
        in_stack_000000e8 = 0;
        in_stack_000000e0 = 0;
        in_stack_000000f8 = 0.0;
        in_stack_000000f0 = 0.0;
        in_stack_000000c8 = 0;
        in_stack_000000c0 = 0;
        in_stack_000000d8 = 0.0;
        in_stack_000000d0 = 0.0;
        if (uVar19 == 0xffffffff) {
          param_3 = 5.26354424712089e-315;
          param_4 = 5.26354424712089e-315;
          FUN_0143157c(0,0,&stack0x00000100,0);
        }
        else {
          if (((*(long *)(lVar21 + 0x18) == 0) ||
              (lVar20 = *(long *)(*(long *)(lVar21 + 0x18) + 0x10), lVar20 == 0)) ||
             (FUN_0132138c(lVar20,0,&stack0x00000040,*(undefined8 *)puVar5), in_stack_00000040 == 0)
             ) goto LAB_014479c0;
          in_stack_000000f8 = *(double *)(in_stack_00000040 + 0x50);
          in_stack_000000f0 = *(double *)(in_stack_00000040 + 0x48);
          in_stack_000000e0 = *(undefined8 *)(in_stack_00000040 + 0x38);
          lVar20 = *(long *)(lVar21 + 0x18);
          in_stack_000000e8 = *(undefined8 *)(in_stack_00000040 + 0x40);
          if (lVar20 == 0) goto LAB_014479c0;
          iVar22 = 1;
          while( true ) {
            lVar20 = *(long *)(lVar20 + 0x10);
            if (lVar20 == 0) goto LAB_014479c0;
            if (*(int *)(lVar20 + 0x18) <= iVar22) break;
            FUN_0132138c(lVar20,iVar22,&stack0x00000040,*(undefined8 *)puVar5);
            if (in_stack_00000040 == 0) goto LAB_014479c0;
            in_stack_000000b8 = *(undefined8 *)(in_stack_00000040 + 0x50);
            in_stack_000000b0 = *(undefined8 *)(in_stack_00000040 + 0x48);
            in_stack_000000a8 = *(undefined8 *)(in_stack_00000040 + 0x40);
            uVar8 = *(undefined8 *)(in_stack_00000040 + 0x38);
            in_stack_000000a0 = uVar8;
            in_stack_000000e0 = FUN_014320a0(&stack0x000000e0,&stack0x000000a0,0);
            lVar20 = *(long *)(lVar21 + 0x18);
            iVar22 = iVar22 + 1;
            in_stack_000000e8 = uVar8;
            in_stack_000000f0 = param_3;
            in_stack_000000f8 = param_4;
            if (lVar20 == 0) goto LAB_014479c0;
          }
          if (((*(long *)(lVar15 + 0x18) == 0) ||
              (lVar20 = *(long *)(*(long *)(lVar15 + 0x18) + 0x10), lVar20 == 0)) ||
             (FUN_0132138c(lVar20,0,&stack0x00000040,*(undefined8 *)puVar5), in_stack_00000040 == 0)
             ) goto LAB_014479c0;
          in_stack_000000d8 = *(double *)(in_stack_00000040 + 0x50);
          in_stack_000000d0 = *(double *)(in_stack_00000040 + 0x48);
          uVar8 = *(undefined8 *)(in_stack_00000040 + 0x38);
          lVar20 = *(long *)(lVar15 + 0x18);
          in_stack_000000c0 = uVar8;
          in_stack_000000c8 = *(undefined8 *)(in_stack_00000040 + 0x40);
          if (lVar20 == 0) goto LAB_014479c0;
          iVar22 = 1;
          while( true ) {
            lVar20 = *(long *)(lVar20 + 0x10);
            if (lVar20 == 0) goto LAB_014479c0;
            if (*(int *)(lVar20 + 0x18) <= iVar22) break;
            FUN_0132138c(lVar20,iVar22,&stack0x00000040,*(undefined8 *)puVar5);
            if (in_stack_00000040 == 0) goto LAB_014479c0;
            in_stack_00000098 = *(undefined8 *)(in_stack_00000040 + 0x50);
            in_stack_00000090 = *(undefined8 *)(in_stack_00000040 + 0x48);
            in_stack_00000088 = *(undefined8 *)(in_stack_00000040 + 0x40);
            uVar8 = *(undefined8 *)(in_stack_00000040 + 0x38);
            in_stack_00000080 = uVar8;
            in_stack_000000c0 = FUN_014320a0(&stack0x000000c0,&stack0x00000080,0);
            lVar20 = *(long *)(lVar15 + 0x18);
            iVar22 = iVar22 + 1;
            in_stack_000000c8 = uVar8;
            in_stack_000000d0 = param_3;
            in_stack_000000d8 = param_4;
            if (lVar20 == 0) goto LAB_014479c0;
          }
          in_stack_00000100 = FUN_014320a0(&stack0x000000e0,&stack0x000000c0,0);
          in_stack_00000108 = uVar8;
          in_stack_00000110 = param_3;
          in_stack_00000118 = param_4;
          if (param_3 * param_4 + 0.0 <
              in_stack_000000f0 * in_stack_000000f8 + in_stack_000000d0 * in_stack_000000d8 + 0.0) {
            if (*(int *)(unaff_x20 + 0x24) < 3) {
              plVar10 = (long *)0x0;
              goto LAB_01447538;
            }
            plVar10 = (long *)thunk_FUN_00d62348(*(undefined8 *)
                                                  Method_System_Collections_Generic_Dictionary<TerrainData,_ObiHeightFieldHandle>_get_Count__
                                                );
            if (plVar10 == (long *)0x0) goto LAB_014479c0;
            FUN_0160aa4c(plVar10,0);
            uVar8 = FUN_01445ad4(lVar21);
            uVar25 = FUN_01445ad4(lVar15);
            FUN_0160dca4(plVar10,*(undefined8 *)System_Xml_Schema_Datatype_ENTITY_TypeInfo,uVar8,
                         uVar25,0);
            if (*(int *)(unaff_x20 + 0x24) < 5) goto LAB_01447538;
            lVar20 = *(long *)(lVar21 + 0x18);
            if (lVar20 == 0) goto LAB_014479c0;
            iVar23 = 0;
            goto LAB_0144733c;
          }
        }
        if (3 < *(int *)(unaff_x20 + 0x24)) {
          uVar8 = FUN_01445ad4(lVar21);
          in_stack_00000068 = in_stack_000000e8;
          in_stack_00000060 = in_stack_000000e0;
          in_stack_00000078 = in_stack_000000f8;
          in_stack_00000070 = in_stack_000000f0;
          uVar25 = FUN_0143182c(&stack0x00000060,0);
          uVar8 = FUN_015f5b28(uVar8,uVar25,0);
          uVar25 = FUN_01445ad4(lVar15);
          in_stack_00000068 = in_stack_000000c8;
          in_stack_00000060 = in_stack_000000c0;
          in_stack_00000078 = in_stack_000000d8;
          in_stack_00000070 = in_stack_000000d0;
          uVar11 = FUN_0143182c(&stack0x00000060,0);
          uVar25 = FUN_015f5b28(uVar25,uVar11,0);
          uVar8 = FUN_01600b5c(*(undefined8 *)
                                Method_Oculus_Interaction_PointerInteractable<HandGrabInteractor,_HandGrabInteractable>__ctor__
                               ,uVar8,uVar25,0);
          if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
            thunk_FUN_00d32864(*(long *)StringLiteral_302);
          }
          FUN_02660dac(uVar8,0);
        }
      }
      iVar23 = iVar23 + 1;
    } while (iVar23 < *(int *)(unaff_x19 + 0x18));
  }
  goto LAB_014472ac;
LAB_0144733c:
  lVar20 = *(long *)(lVar20 + 0x10);
  if (lVar20 == 0) goto LAB_014479c0;
  if (*(int *)(lVar20 + 0x18) <= iVar23) goto LAB_01447434;
  FUN_0132138c(lVar20,iVar23,&stack0x00000040,*(undefined8 *)puVar5);
  if (((in_stack_00000040 == 0) || (*(long *)(lVar21 + 0x18) == 0)) ||
     (lVar20 = *(long *)(*(long *)(lVar21 + 0x18) + 0x10), lVar20 == 0)) goto LAB_014479c0;
  uVar8 = *(undefined8 *)(in_stack_00000040 + 0x10);
  FUN_0132138c(lVar20,iVar23,&stack0x00000040,*(undefined8 *)puVar5);
  if (in_stack_00000040 == 0) goto LAB_014479c0;
  in_stack_00000048 = *(undefined8 *)(in_stack_00000040 + 0x40);
  in_stack_00000050 = *(undefined8 *)(in_stack_00000040 + 0x48);
  in_stack_00000058 = *(undefined8 *)(in_stack_00000040 + 0x50);
  in_stack_00000040 = *(long *)(in_stack_00000040 + 0x38);
  uVar25 = thunk_FUN_00d61fa0(*(undefined8 *)PTR_DAT_033ed038,&stack0x00000040);
  lVar20 = *(long *)(lVar21 + 0x10);
  if (lVar20 == 0) goto LAB_014479c0;
  if (*(int *)(lVar20 + 0x18) == 0) goto LAB_014479c4;
  lVar20 = *(long *)(lVar20 + 0x20);
  if (lVar20 == 0) goto LAB_014479c0;
  in_stack_00000028 = *(undefined8 *)(lVar20 + 0x28);
  in_stack_00000020 = *(undefined8 *)(lVar20 + 0x20);
  in_stack_00000030 = *(undefined8 *)(lVar20 + 0x30);
  in_stack_00000038 = *(undefined8 *)(lVar20 + 0x38);
  uVar11 = thunk_FUN_00d61fa0(*(undefined8 *)PTR_DAT_033ed038,&stack0x00000020);
  FUN_0160dd00(plVar10,*(undefined8 *)StringLiteral_1722,uVar8,uVar25,uVar11,0);
  lVar20 = *(long *)(lVar21 + 0x18);
  iVar23 = iVar23 + 1;
  puVar24 = (undefined8 *)Method_UnityEngine_ProBuilder_ProBuilderMesh_<SetSelectedFaces>b__246_1__;
  if (lVar20 == 0) goto LAB_014479c0;
  goto LAB_0144733c;
LAB_01447434:
  lVar20 = *(long *)(lVar15 + 0x18);
  if (lVar20 == 0) goto LAB_014479c0;
  iVar23 = 0;
  while( true ) {
    lVar20 = *(long *)(lVar20 + 0x10);
    if (lVar20 == 0) goto LAB_014479c0;
    if (*(int *)(lVar20 + 0x18) <= iVar23) break;
    FUN_0132138c(lVar20,iVar23,&stack0x00000040,*(undefined8 *)puVar5);
    if (((in_stack_00000040 == 0) || (*(long *)(lVar15 + 0x18) == 0)) ||
       (lVar20 = *(long *)(*(long *)(lVar15 + 0x18) + 0x10), lVar20 == 0)) goto LAB_014479c0;
    uVar8 = *(undefined8 *)(in_stack_00000040 + 0x10);
    FUN_0132138c(lVar20,iVar23,&stack0x00000040,*(undefined8 *)puVar5);
    if (in_stack_00000040 == 0) goto LAB_014479c0;
    in_stack_00000048 = *(undefined8 *)(in_stack_00000040 + 0x40);
    in_stack_00000050 = *(undefined8 *)(in_stack_00000040 + 0x48);
    in_stack_00000058 = *(undefined8 *)(in_stack_00000040 + 0x50);
    in_stack_00000040 = *(long *)(in_stack_00000040 + 0x38);
    uVar25 = thunk_FUN_00d61fa0(*(undefined8 *)PTR_DAT_033ed038,&stack0x00000040);
    lVar20 = *(long *)(lVar15 + 0x10);
    if (lVar20 == 0) goto LAB_014479c0;
    if (*(int *)(lVar20 + 0x18) == 0) goto LAB_014479c4;
    lVar20 = *(long *)(lVar20 + 0x20);
    if (lVar20 == 0) goto LAB_014479c0;
    in_stack_00000028 = *(undefined8 *)(lVar20 + 0x28);
    in_stack_00000020 = *(undefined8 *)(lVar20 + 0x20);
    in_stack_00000030 = *(undefined8 *)(lVar20 + 0x30);
    in_stack_00000038 = *(undefined8 *)(lVar20 + 0x38);
    uVar11 = thunk_FUN_00d61fa0(*(undefined8 *)PTR_DAT_033ed038,&stack0x00000020);
    FUN_0160dd00(plVar10,*(undefined8 *)
                          Method_Newtonsoft_Json_Utilities_AsyncUtils_CancelIfRequestedAsync<Nullable<DateTime>>__
                 ,uVar8,uVar25,uVar11,0);
    lVar20 = *(long *)(lVar15 + 0x18);
    iVar23 = iVar23 + 1;
    puVar24 = (undefined8 *)
              Method_UnityEngine_ProBuilder_ProBuilderMesh_<SetSelectedFaces>b__246_1__;
    if (lVar20 == 0) goto LAB_014479c0;
  }
LAB_01447538:
  lVar20 = *(long *)(lVar15 + 0x18);
  if (lVar20 == 0) goto LAB_014479c0;
  iVar23 = 0;
  iStack000000000000001c = iStack000000000000001c + 1;
  while( true ) {
    lVar13 = *(long *)(lVar20 + 0x18);
    if (lVar13 == 0) goto LAB_014479c0;
    if (*(int *)(lVar13 + 0x18) <= iVar23) break;
    if (*(long *)(lVar21 + 0x18) == 0) goto LAB_014479c0;
    lVar20 = *(long *)(*(long *)(lVar21 + 0x18) + 0x18);
    FUN_0132138c(lVar13,iVar23,&stack0x00000040,
                 *(undefined8 *)
                  Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Contains<int>__);
    if (lVar20 == 0) goto LAB_014479c0;
    uVar9 = FUN_01322618(lVar20,in_stack_00000040,*puVar24);
    if ((uVar9 & 1) == 0) {
      if (((*(long *)(lVar21 + 0x18) == 0) || (*(long *)(lVar15 + 0x18) == 0)) ||
         (lVar20 = *(long *)(*(long *)(lVar15 + 0x18) + 0x18), lVar20 == 0)) goto LAB_014479c0;
      lVar13 = *(long *)(*(long *)(lVar21 + 0x18) + 0x18);
      FUN_0132138c(lVar20,iVar23,&stack0x00000040,
                   *(undefined8 *)
                    Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Contains<int>__);
      if (lVar13 == 0) goto LAB_014479c0;
      FUN_00ac8520(lVar13,in_stack_00000040,*(undefined8 *)StringLiteral_1415);
    }
    lVar20 = *(long *)(lVar15 + 0x18);
    iVar23 = iVar23 + 1;
    if (lVar20 == 0) goto LAB_014479c0;
  }
  iVar23 = 0;
  while( true ) {
    lVar20 = *(long *)(lVar20 + 0x10);
    if (lVar20 == 0) goto LAB_014479c0;
    if (*(int *)(lVar20 + 0x18) <= iVar23) break;
    if (*(long *)(lVar21 + 0x18) == 0) goto LAB_014479c0;
    lVar13 = *(long *)(*(long *)(lVar21 + 0x18) + 0x10);
    FUN_0132138c(lVar20,iVar23,&stack0x00000040,*(undefined8 *)puVar5);
    if (lVar13 == 0) goto LAB_014479c0;
    FUN_00bc03b0(lVar13,in_stack_00000040,*(undefined8 *)PTR_DAT_033eb210);
    lVar20 = *(long *)(lVar15 + 0x18);
    iVar23 = iVar23 + 1;
    if (lVar20 == 0) goto LAB_014479c0;
  }
  param_3 = in_stack_00000110;
  param_4 = in_stack_00000118;
  FUN_01444de8(in_stack_00000100,in_stack_00000108,lVar21);
  in_stack_00000040 = CONCAT44(in_stack_00000040._4_4_,iVar14);
  uVar9 = FUN_01322618(lVar12,&stack0x00000040,*(undefined8 *)PTR_DAT_033f4718);
  if ((uVar9 & 1) == 0) {
    FUN_00ac20f0(lVar12,iVar14,*(undefined8 *)StringLiteral_4747);
  }
  if (3 < *(int *)(unaff_x20 + 0x24)) {
    if (*(int *)(unaff_x20 + 0x24) != 4) {
      uVar8 = FUN_01445ad4(lVar21);
      if (plVar10 == (long *)0x0) goto LAB_014479c0;
      FUN_0160d178(plVar10,*(undefined8 *)
                            Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesScale_IsSame__
                   ,uVar8,0);
      lVar15 = *(long *)(lVar21 + 0x18);
      if (lVar15 == 0) goto LAB_014479c0;
      iVar14 = 0;
      while( true ) {
        lVar15 = *(long *)(lVar15 + 0x10);
        if (lVar15 == 0) goto LAB_014479c0;
        if (*(int *)(lVar15 + 0x18) <= iVar14) break;
        FUN_0132138c(lVar15,iVar14,&stack0x00000040,*(undefined8 *)puVar5);
        if (((in_stack_00000040 == 0) || (*(long *)(lVar21 + 0x18) == 0)) ||
           (lVar15 = *(long *)(*(long *)(lVar21 + 0x18) + 0x10), lVar15 == 0)) goto LAB_014479c0;
        uVar8 = *(undefined8 *)(in_stack_00000040 + 0x10);
        FUN_0132138c(lVar15,iVar14,&stack0x00000040,*(undefined8 *)puVar5);
        if (in_stack_00000040 == 0) goto LAB_014479c0;
        in_stack_00000048 = *(undefined8 *)(in_stack_00000040 + 0x40);
        in_stack_00000050 = *(undefined8 *)(in_stack_00000040 + 0x48);
        in_stack_00000058 = *(undefined8 *)(in_stack_00000040 + 0x50);
        in_stack_00000040 = *(long *)(in_stack_00000040 + 0x38);
        uVar25 = thunk_FUN_00d61fa0(*(undefined8 *)PTR_DAT_033ed038,&stack0x00000040);
        lVar15 = *(long *)(lVar21 + 0x10);
        if (lVar15 == 0) goto LAB_014479c0;
        if (*(int *)(lVar15 + 0x18) == 0) goto LAB_014479c4;
        lVar15 = *(long *)(lVar15 + 0x20);
        if (lVar15 == 0) goto LAB_014479c0;
        in_stack_00000028 = *(undefined8 *)(lVar15 + 0x28);
        in_stack_00000020 = *(undefined8 *)(lVar15 + 0x20);
        in_stack_00000030 = *(undefined8 *)(lVar15 + 0x30);
        in_stack_00000038 = *(undefined8 *)(lVar15 + 0x38);
        uVar11 = thunk_FUN_00d61fa0(*(undefined8 *)PTR_DAT_033ed038,&stack0x00000020);
        FUN_0160dd00(plVar10,*(undefined8 *)StringLiteral_1722,uVar8,uVar25,uVar11,0);
        lVar15 = *(long *)(lVar21 + 0x18);
        iVar14 = iVar14 + 1;
        if (lVar15 == 0) goto LAB_014479c0;
      }
      if (**(char **)(*(long *)PTR_DAT_033f0098 + 0xb8) != '\0') {
        FUN_014479d4();
      }
    }
    if (plVar10 == (long *)0x0) goto LAB_014479c0;
    uVar8 = (**(code **)(*plVar10 + 0x168))(plVar10,*(undefined8 *)(*plVar10 + 0x170));
    if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
      thunk_FUN_00d32864(*(long *)StringLiteral_302);
    }
    FUN_02660dac(uVar8,0);
  }
LAB_014472ac:
  iVar14 = iVar17;
  if (*(int *)(unaff_x19 + 0x18) <= iVar17) goto LAB_01447844;
  goto LAB_01446f58;
}


