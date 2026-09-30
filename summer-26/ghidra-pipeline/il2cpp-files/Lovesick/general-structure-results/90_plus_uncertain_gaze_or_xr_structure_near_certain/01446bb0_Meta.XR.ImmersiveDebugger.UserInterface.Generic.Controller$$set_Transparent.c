/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.Controller$$set_Transparent
ENTRY_POINT: 01446bb0
PROGRAM: Lovesick-libil2cpp.so
SCORE: 197
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;pose_vector;paired_state_refs;telemetry;structure_combo;ordered_structure
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;telemetry_or_network_hits_1;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;ordered_eye_source_validity_pose_collection_sink;functionality_data_collection_or_telemetry_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_Generic_Controller__set_Transparent
               (long param_1,undefined1 param_2 [16],undefined1 param_3 [16],double param_4,
               double param_5)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  byte bVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  long unaff_x19;
  long unaff_x20;
  int unaff_w21;
  int iVar16;
  long unaff_x22;
  uint unaff_w23;
  int iVar17;
  uint unaff_w24;
  long lVar18;
  long lVar19;
  uint uVar20;
  int iVar21;
  int iVar22;
  undefined8 *unaff_x26;
  uint uVar23;
  undefined8 *unaff_x27;
  undefined8 *unaff_x28;
  undefined8 *puVar24;
  byte unaff_w29;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  double unaff_d10;
  double unaff_d11;
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
  
  while (unaff_w23 = unaff_w23 + 1, param_1 != 0) {
    while ((int)*(uint *)(param_1 + 0x18) <= (int)unaff_w23) {
      if ((*(int *)(unaff_x20 + 0x24) < 4) &&
         (*(char *)(*(long *)(*(long *)PTR_DAT_033f0098 + 0xb8) + 1) == '\0')) {
        if ((unaff_w29 & 1) != 0) {
LAB_01446ca8:
          FUN_01444fa0(unaff_x22);
        }
      }
      else {
        if ((unaff_w29 & 1) != 0) {
          plVar8 = (long *)FUN_00da4fb8(*(undefined8 *)StringLiteral_3033,2);
          in_stack_00000040 = CONCAT44(in_stack_00000040._4_4_,unaff_w21);
          lVar19 = thunk_FUN_00d61fa0(*(undefined8 *)
                                       Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__
                                      ,&stack0x00000040);
          if (plVar8 != (long *)0x0) {
            if ((lVar19 != 0) &&
               (lVar14 = thunk_FUN_00d6225c(lVar19,*(undefined8 *)(*plVar8 + 0x40)), lVar14 == 0)) {
LAB_014479c8:
              uVar10 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
              FUN_00da5038(uVar10,0);
            }
            if ((int)plVar8[3] != 0) {
              plVar8[4] = lVar19;
              in_stack_00000020 = CONCAT71(in_stack_00000020._1_7_,unaff_w29) & 0xffffffffffffff01;
              lVar19 = thunk_FUN_00d61fa0(*unaff_x26,&stack0x00000020);
              if ((lVar19 != 0) &&
                 (lVar14 = thunk_FUN_00d6225c(lVar19,*(undefined8 *)(*plVar8 + 0x40)), lVar14 == 0))
              goto LAB_014479c8;
              if (1 < *(uint *)(plVar8 + 3)) {
                plVar8[5] = lVar19;
                if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
                  thunk_FUN_00d32864();
                }
                FUN_02660fcc(*unaff_x27,plVar8,0);
                goto LAB_01446ca8;
              }
            }
            goto LAB_014479c4;
          }
          goto LAB_014479c0;
        }
        uVar10 = FUN_01445ad4(unaff_x22);
        uVar10 = FUN_015f6780(*unaff_x28,uVar10,0);
        if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
          thunk_FUN_00d32864(*(long *)StringLiteral_302);
        }
        FUN_02660dac(uVar10,0);
      }
      puVar5 = 
      Method_UnityEngine_Experimental_Rendering_RenderGraphModule_TextureResource_ReleasePooledGraphicsResource__
      ;
      puVar3 = Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__;
      puVar2 = System_Tuple<Vector3,_Vector3>_var;
      unaff_w21 = unaff_w21 + 1;
      if (*(int *)(unaff_x19 + 0x18) <= unaff_w21) {
        if (*(int *)(unaff_x19 + 0x18) < 1) goto LAB_01446f04;
        iVar16 = 0;
        goto LAB_01446d3c;
      }
      FUN_0132138c();
      if ((in_stack_00000040 == 0) || (param_1 = *(long *)(in_stack_00000040 + 0x10), param_1 == 0))
      goto LAB_014479c0;
      unaff_w24 = 0xffffffff;
      unaff_w29 = 1;
      unaff_d8 = 0;
      unaff_d9 = 0;
      unaff_d10 = 0.0;
      unaff_d11 = 0.0;
      unaff_x22 = in_stack_00000040;
      unaff_w23 = 0;
    }
    if (*(uint *)(param_1 + 0x18) <= unaff_w23) {
LAB_014479c4:
                    /* WARNING: Subroutine does not return */
      FUN_00da5194();
    }
    lVar19 = (long)(int)unaff_w23;
    if (*(long *)(param_1 + lVar19 * 8 + 0x20) == 0) break;
    uVar7 = FUN_014440c0();
    if (unaff_w24 == 0xffffffff) {
      if ((uVar7 & 1) == 0) {
        lVar14 = *(long *)(unaff_x22 + 0x10);
        if (lVar14 == 0) break;
        if (*(uint *)(lVar14 + 0x18) <= unaff_w23) goto LAB_014479c4;
        lVar19 = *(long *)(lVar14 + lVar19 * 8 + 0x20);
        if (lVar19 == 0) break;
        unaff_d8 = *(undefined8 *)(lVar19 + 0x40);
        unaff_d9 = *(undefined8 *)(lVar19 + 0x48);
        unaff_d10 = *(double *)(lVar19 + 0x50);
        unaff_d11 = *(double *)(lVar19 + 0x58);
        unaff_w24 = unaff_w23;
      }
      else {
        unaff_w24 = 0xffffffff;
      }
    }
    else if ((uVar7 & 1) == 0) {
      lVar14 = *(long *)(unaff_x22 + 0x10);
      if (lVar14 == 0) break;
      if (*(uint *)(lVar14 + 0x18) <= unaff_w23) goto LAB_014479c4;
      lVar19 = *(long *)(lVar14 + lVar19 * 8 + 0x20);
      if (lVar19 == 0) break;
      param_4 = unaff_d10;
      param_5 = unaff_d11;
      bVar6 = FUN_01431798(unaff_d8,unaff_d9,unaff_d10,unaff_d11,*(undefined8 *)(lVar19 + 0x40),
                           *(undefined8 *)(lVar19 + 0x48),*(undefined8 *)(lVar19 + 0x50),
                           *(undefined8 *)(lVar19 + 0x58),0);
      unaff_w29 = unaff_w29 & (bVar6 ^ 1);
    }
    param_1 = *(long *)(unaff_x22 + 0x10);
  }
  goto LAB_014479c0;
LAB_0144733c:
  lVar18 = *(long *)(lVar18 + 0x10);
  if (lVar18 == 0) goto LAB_014479c0;
  if (*(int *)(lVar18 + 0x18) <= iVar22) goto LAB_01447434;
  FUN_0132138c(lVar18,iVar22,&stack0x00000040,*(undefined8 *)puVar5);
  if (((in_stack_00000040 == 0) || (*(long *)(lVar9 + 0x18) == 0)) ||
     (lVar18 = *(long *)(*(long *)(lVar9 + 0x18) + 0x10), lVar18 == 0)) goto LAB_014479c0;
  uVar10 = *(undefined8 *)(in_stack_00000040 + 0x10);
  FUN_0132138c(lVar18,iVar22,&stack0x00000040,*(undefined8 *)puVar5);
  if (in_stack_00000040 == 0) goto LAB_014479c0;
  in_stack_00000048 = *(undefined8 *)(in_stack_00000040 + 0x40);
  in_stack_00000050 = *(undefined8 *)(in_stack_00000040 + 0x48);
  in_stack_00000058 = *(undefined8 *)(in_stack_00000040 + 0x50);
  in_stack_00000040 = *(long *)(in_stack_00000040 + 0x38);
  uVar11 = thunk_FUN_00d61fa0(*(undefined8 *)PTR_DAT_033ed038,&stack0x00000040);
  lVar18 = *(long *)(lVar9 + 0x10);
  if (lVar18 == 0) goto LAB_014479c0;
  if (*(int *)(lVar18 + 0x18) == 0) goto LAB_014479c4;
  lVar18 = *(long *)(lVar18 + 0x20);
  if (lVar18 == 0) goto LAB_014479c0;
  in_stack_00000028 = *(undefined8 *)(lVar18 + 0x28);
  in_stack_00000020 = *(ulong *)(lVar18 + 0x20);
  in_stack_00000030 = *(undefined8 *)(lVar18 + 0x30);
  in_stack_00000038 = *(undefined8 *)(lVar18 + 0x38);
  uVar12 = thunk_FUN_00d61fa0(*(undefined8 *)PTR_DAT_033ed038,&stack0x00000020);
  FUN_0160dd00(plVar8,*(undefined8 *)StringLiteral_1722,uVar10,uVar11,uVar12,0);
  lVar18 = *(long *)(lVar9 + 0x18);
  iVar22 = iVar22 + 1;
  puVar24 = (undefined8 *)Method_UnityEngine_ProBuilder_ProBuilderMesh_<SetSelectedFaces>b__246_1__;
  if (lVar18 == 0) goto LAB_014479c0;
  goto LAB_0144733c;
LAB_01447434:
  lVar18 = *(long *)(lVar14 + 0x18);
  if (lVar18 == 0) goto LAB_014479c0;
  iVar22 = 0;
  while( true ) {
    lVar18 = *(long *)(lVar18 + 0x10);
    if (lVar18 == 0) goto LAB_014479c0;
    if (*(int *)(lVar18 + 0x18) <= iVar22) break;
    FUN_0132138c(lVar18,iVar22,&stack0x00000040,*(undefined8 *)puVar5);
    if (((in_stack_00000040 == 0) || (*(long *)(lVar14 + 0x18) == 0)) ||
       (lVar18 = *(long *)(*(long *)(lVar14 + 0x18) + 0x10), lVar18 == 0)) goto LAB_014479c0;
    uVar10 = *(undefined8 *)(in_stack_00000040 + 0x10);
    FUN_0132138c(lVar18,iVar22,&stack0x00000040,*(undefined8 *)puVar5);
    if (in_stack_00000040 == 0) goto LAB_014479c0;
    in_stack_00000048 = *(undefined8 *)(in_stack_00000040 + 0x40);
    in_stack_00000050 = *(undefined8 *)(in_stack_00000040 + 0x48);
    in_stack_00000058 = *(undefined8 *)(in_stack_00000040 + 0x50);
    in_stack_00000040 = *(long *)(in_stack_00000040 + 0x38);
    uVar11 = thunk_FUN_00d61fa0(*(undefined8 *)PTR_DAT_033ed038,&stack0x00000040);
    lVar18 = *(long *)(lVar14 + 0x10);
    if (lVar18 == 0) goto LAB_014479c0;
    if (*(int *)(lVar18 + 0x18) == 0) goto LAB_014479c4;
    lVar18 = *(long *)(lVar18 + 0x20);
    if (lVar18 == 0) goto LAB_014479c0;
    in_stack_00000028 = *(undefined8 *)(lVar18 + 0x28);
    in_stack_00000020 = *(ulong *)(lVar18 + 0x20);
    in_stack_00000030 = *(undefined8 *)(lVar18 + 0x30);
    in_stack_00000038 = *(undefined8 *)(lVar18 + 0x38);
    uVar12 = thunk_FUN_00d61fa0(*(undefined8 *)PTR_DAT_033ed038,&stack0x00000020);
    FUN_0160dd00(plVar8,*(undefined8 *)
                         Method_Newtonsoft_Json_Utilities_AsyncUtils_CancelIfRequestedAsync<Nullable<DateTime>>__
                 ,uVar10,uVar11,uVar12,0);
    lVar18 = *(long *)(lVar14 + 0x18);
    iVar22 = iVar22 + 1;
    puVar24 = (undefined8 *)
              Method_UnityEngine_ProBuilder_ProBuilderMesh_<SetSelectedFaces>b__246_1__;
    if (lVar18 == 0) goto LAB_014479c0;
  }
LAB_01447538:
  lVar18 = *(long *)(lVar14 + 0x18);
  if (lVar18 == 0) goto LAB_014479c0;
  iVar22 = 0;
  iStack000000000000001c = iStack000000000000001c + 1;
  while( true ) {
    lVar13 = *(long *)(lVar18 + 0x18);
    if (lVar13 == 0) goto LAB_014479c0;
    if (*(int *)(lVar13 + 0x18) <= iVar22) break;
    if (*(long *)(lVar9 + 0x18) == 0) goto LAB_014479c0;
    lVar18 = *(long *)(*(long *)(lVar9 + 0x18) + 0x18);
    FUN_0132138c(lVar13,iVar22,&stack0x00000040,
                 *(undefined8 *)
                  Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Contains<int>__);
    if (lVar18 == 0) goto LAB_014479c0;
    uVar7 = FUN_01322618(lVar18,in_stack_00000040,*puVar24);
    if ((uVar7 & 1) == 0) {
      if (((*(long *)(lVar9 + 0x18) == 0) || (*(long *)(lVar14 + 0x18) == 0)) ||
         (lVar18 = *(long *)(*(long *)(lVar14 + 0x18) + 0x18), lVar18 == 0)) goto LAB_014479c0;
      lVar13 = *(long *)(*(long *)(lVar9 + 0x18) + 0x18);
      FUN_0132138c(lVar18,iVar22,&stack0x00000040,
                   *(undefined8 *)
                    Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Contains<int>__);
      if (lVar13 == 0) goto LAB_014479c0;
      FUN_00ac8520(lVar13,in_stack_00000040,*(undefined8 *)StringLiteral_1415);
    }
    lVar18 = *(long *)(lVar14 + 0x18);
    iVar22 = iVar22 + 1;
    if (lVar18 == 0) goto LAB_014479c0;
  }
  iVar22 = 0;
  while( true ) {
    lVar18 = *(long *)(lVar18 + 0x10);
    if (lVar18 == 0) goto LAB_014479c0;
    if (*(int *)(lVar18 + 0x18) <= iVar22) break;
    if (*(long *)(lVar9 + 0x18) == 0) goto LAB_014479c0;
    lVar13 = *(long *)(*(long *)(lVar9 + 0x18) + 0x10);
    FUN_0132138c(lVar18,iVar22,&stack0x00000040,*(undefined8 *)puVar5);
    if (lVar13 == 0) goto LAB_014479c0;
    FUN_00bc03b0(lVar13,in_stack_00000040,*(undefined8 *)PTR_DAT_033eb210);
    lVar18 = *(long *)(lVar14 + 0x18);
    iVar22 = iVar22 + 1;
    if (lVar18 == 0) goto LAB_014479c0;
  }
  param_4 = in_stack_00000110;
  param_5 = in_stack_00000118;
  FUN_01444de8(in_stack_00000100,in_stack_00000108,lVar9);
  in_stack_00000040 = CONCAT44(in_stack_00000040._4_4_,iVar16);
  uVar7 = FUN_01322618(lVar19,&stack0x00000040,*(undefined8 *)PTR_DAT_033f4718);
  if ((uVar7 & 1) == 0) {
    FUN_00ac20f0(lVar19,iVar16,*(undefined8 *)StringLiteral_4747);
  }
  if (3 < *(int *)(unaff_x20 + 0x24)) {
    if (*(int *)(unaff_x20 + 0x24) != 4) {
      uVar10 = FUN_01445ad4(lVar9);
      if (plVar8 == (long *)0x0) goto LAB_014479c0;
      FUN_0160d178(plVar8,*(undefined8 *)
                           Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesScale_IsSame__
                   ,uVar10,0);
      lVar14 = *(long *)(lVar9 + 0x18);
      if (lVar14 == 0) goto LAB_014479c0;
      iVar16 = 0;
      while( true ) {
        lVar14 = *(long *)(lVar14 + 0x10);
        if (lVar14 == 0) goto LAB_014479c0;
        if (*(int *)(lVar14 + 0x18) <= iVar16) break;
        FUN_0132138c(lVar14,iVar16,&stack0x00000040,*(undefined8 *)puVar5);
        if (((in_stack_00000040 == 0) || (*(long *)(lVar9 + 0x18) == 0)) ||
           (lVar14 = *(long *)(*(long *)(lVar9 + 0x18) + 0x10), lVar14 == 0)) goto LAB_014479c0;
        uVar10 = *(undefined8 *)(in_stack_00000040 + 0x10);
        FUN_0132138c(lVar14,iVar16,&stack0x00000040,*(undefined8 *)puVar5);
        if (in_stack_00000040 == 0) goto LAB_014479c0;
        in_stack_00000048 = *(undefined8 *)(in_stack_00000040 + 0x40);
        in_stack_00000050 = *(undefined8 *)(in_stack_00000040 + 0x48);
        in_stack_00000058 = *(undefined8 *)(in_stack_00000040 + 0x50);
        in_stack_00000040 = *(long *)(in_stack_00000040 + 0x38);
        uVar11 = thunk_FUN_00d61fa0(*(undefined8 *)PTR_DAT_033ed038,&stack0x00000040);
        lVar14 = *(long *)(lVar9 + 0x10);
        if (lVar14 == 0) goto LAB_014479c0;
        if (*(int *)(lVar14 + 0x18) == 0) goto LAB_014479c4;
        lVar14 = *(long *)(lVar14 + 0x20);
        if (lVar14 == 0) goto LAB_014479c0;
        in_stack_00000028 = *(undefined8 *)(lVar14 + 0x28);
        in_stack_00000020 = *(ulong *)(lVar14 + 0x20);
        in_stack_00000030 = *(undefined8 *)(lVar14 + 0x30);
        in_stack_00000038 = *(undefined8 *)(lVar14 + 0x38);
        uVar12 = thunk_FUN_00d61fa0(*(undefined8 *)PTR_DAT_033ed038,&stack0x00000020);
        FUN_0160dd00(plVar8,*(undefined8 *)StringLiteral_1722,uVar10,uVar11,uVar12,0);
        lVar14 = *(long *)(lVar9 + 0x18);
        iVar16 = iVar16 + 1;
        if (lVar14 == 0) goto LAB_014479c0;
      }
      if (**(char **)(*(long *)PTR_DAT_033f0098 + 0xb8) != '\0') {
        FUN_014479d4();
      }
    }
    if (plVar8 == (long *)0x0) goto LAB_014479c0;
    uVar10 = (**(code **)(*plVar8 + 0x168))(plVar8,*(undefined8 *)(*plVar8 + 0x170));
    if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
      thunk_FUN_00d32864(*(long *)StringLiteral_302);
    }
    FUN_02660dac(uVar10,0);
  }
LAB_014472ac:
  iVar16 = iVar17;
  if (*(int *)(unaff_x19 + 0x18) <= iVar17) goto LAB_01447844;
  goto LAB_01446f58;
  while( true ) {
    iVar17 = 0;
    while( true ) {
      lVar9 = *(long *)(lVar14 + 0x10);
      if (lVar9 == 0) goto LAB_014479c0;
      if (*(int *)(lVar9 + 0x18) <= iVar17) break;
      if (*(long *)(lVar14 + 0x18) == 0) goto LAB_014479c0;
      if (*(int *)(*(long *)(lVar14 + 0x18) + 0x18) < 1) {
        lVar14 = *(long *)(lVar19 + 0x10);
        if (lVar14 == 0) goto LAB_014479c0;
        if (*(int *)(lVar14 + 0x18) == 0) goto LAB_014479c4;
        lVar18 = *(long *)(lVar14 + 0x20);
        FUN_0132138c(lVar9,iVar17,&stack0x00000040,*(undefined8 *)puVar5);
        lVar14 = in_stack_00000040;
        puVar4 = Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__;
        if (lVar18 == 0) {
          in_stack_00000040 = CONCAT44(in_stack_00000040._4_4_,iVar16);
          uVar11 = thunk_FUN_00d61fa0(*(undefined8 *)
                                       Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__
                                      ,&stack0x00000040);
          in_stack_00000020 = CONCAT44(in_stack_00000020._4_4_,iVar17);
          uVar12 = thunk_FUN_00d61fa0(*(undefined8 *)puVar4,&stack0x00000020);
          uVar15 = *(undefined8 *)puVar2;
          uVar10 = *(undefined8 *)
                    Method_System_Collections_Generic_HashSet<PlayableDirector>_Contains__;
        }
        else {
          lVar9 = *(long *)(lVar19 + 0x10);
          if (lVar9 == 0) goto LAB_014479c0;
          if (*(int *)(lVar9 + 0x18) == 0) goto LAB_014479c4;
          if (*(long *)(lVar9 + 0x20) == 0) goto LAB_014479c0;
          uVar10 = FUN_01444238();
          in_stack_00000040 = CONCAT44(in_stack_00000040._4_4_,iVar16);
          uVar11 = thunk_FUN_00d61fa0(*(undefined8 *)puVar3,&stack0x00000040);
          in_stack_00000020 = CONCAT44(in_stack_00000020._4_4_,iVar17);
          uVar12 = thunk_FUN_00d61fa0(*(undefined8 *)puVar3,&stack0x00000020);
          uVar15 = *(undefined8 *)puVar2;
        }
        uVar10 = FUN_01600ba0(uVar15,uVar10,uVar11,uVar12,0);
        if (lVar14 == 0) goto LAB_014479c0;
        *(undefined8 *)(lVar14 + 0x78) = uVar10;
      }
      else {
        FUN_0132138c(lVar9,iVar17,&stack0x00000040,*(undefined8 *)puVar5);
        lVar14 = in_stack_00000040;
        if ((((*(long *)(lVar19 + 0x18) == 0) ||
             (lVar9 = *(long *)(*(long *)(lVar19 + 0x18) + 0x18), lVar9 == 0)) ||
            (FUN_0132138c(lVar9,0,&stack0x00000040,
                          *(undefined8 *)
                           Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Contains<int>__),
            in_stack_00000040 == 0)) || (uVar10 = FUN_0268b6ac(in_stack_00000040,0), lVar14 == 0))
        goto LAB_014479c0;
        *(undefined8 *)(lVar14 + 0x78) = uVar10;
      }
      lVar14 = *(long *)(lVar19 + 0x18);
      iVar17 = iVar17 + 1;
      if (lVar14 == 0) goto LAB_014479c0;
    }
    FUN_01445304(lVar19,*(undefined1 *)(unaff_x20 + 0x20));
    FUN_014454e0(lVar19);
    iVar16 = iVar16 + 1;
    if (*(int *)(unaff_x19 + 0x18) <= iVar16) break;
LAB_01446d3c:
    FUN_0132138c();
    lVar19 = in_stack_00000040;
    if ((in_stack_00000040 == 0) || (lVar14 = *(long *)(in_stack_00000040 + 0x18), lVar14 == 0))
    goto LAB_014479c0;
  }
LAB_01446f04:
  puVar2 = UnityEngine_InputSystem_UI_MultiplayerEventSystem_TypeInfo;
  *(undefined1 *)(unaff_x20 + 0x10) = 1;
  lVar19 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
  if (lVar19 != 0) {
    FUN_01320e50(lVar19,*(undefined8 *)PTR_DAT_033f6e48);
    if (*(int *)(unaff_x19 + 0x18) < 1) {
      iStack000000000000001c = 0;
LAB_01447844:
      puVar3 = Method_UnityEngine_Playables_ScriptPlayable<ActivationControlPlayable>_op_Implicit__;
      puVar2 = Method_System_Collections_Generic_Dictionary<Type,_VisualElement_TypeData>__ctor__;
      iVar16 = *(int *)(lVar19 + 0x18);
      if (-1 < iVar16 + -1) {
        do {
          iVar16 = iVar16 + -1;
          FUN_0132138c(lVar19,iVar16,&stack0x00000040,*(undefined8 *)puVar2);
          FUN_01324ac8();
        } while (0 < iVar16);
      }
      lVar14 = *(long *)puVar3;
      *(int *)(lVar19 + 0x1c) = *(int *)(lVar19 + 0x1c) + 1;
      uVar7 = FUN_00da5b18(*(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 200));
      if ((uVar7 & 1) == 0) {
        *(undefined4 *)(lVar19 + 0x18) = 0;
      }
      else {
        iVar16 = *(int *)(lVar19 + 0x18);
        *(undefined4 *)(lVar19 + 0x18) = 0;
        if (0 < iVar16) {
          FUN_0179519c(*(undefined8 *)(lVar19 + 0x10),0,iVar16,0);
        }
      }
      puVar3 = 
      Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_EraseAt<InputRemoting_RemoteSender>__;
      puVar2 = Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__;
      if (3 < *(int *)(unaff_x20 + 0x24)) {
        in_stack_00000040 = CONCAT44(in_stack_00000040._4_4_,iStack000000000000001c);
        uVar10 = thunk_FUN_00d61fa0(*(undefined8 *)
                                     Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__
                                    ,&stack0x00000040);
        in_stack_00000020 = CONCAT44(in_stack_00000020._4_4_,*(undefined4 *)(unaff_x19 + 0x18));
        uVar11 = thunk_FUN_00d61fa0(*(undefined8 *)puVar2,&stack0x00000020);
        uVar10 = FUN_01600b5c(*(undefined8 *)puVar3,uVar10,uVar11,0);
        if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
          thunk_FUN_00d32864(*(long *)StringLiteral_302);
        }
        FUN_02660dac(uVar10,0);
      }
      if (**(char **)(*(long *)PTR_DAT_033f0098 + 0xb8) != '\0') {
        FUN_014479d4();
      }
      return;
    }
    iStack000000000000001c = 0;
    puVar24 = (undefined8 *)
              Method_UnityEngine_ProBuilder_ProBuilderMesh_<SetSelectedFaces>b__246_1__;
    iVar16 = 0;
LAB_01446f58:
    FUN_0132138c();
    lVar14 = in_stack_00000040;
    iVar17 = iVar16 + 1;
    iVar22 = iVar17;
    if (iVar17 < *(int *)(unaff_x19 + 0x18)) {
      do {
        FUN_0132138c();
        lVar9 = in_stack_00000040;
        if (in_stack_00000040 == 0) goto LAB_014479c0;
        uVar7 = FUN_01445624(in_stack_00000040,lVar14,*(undefined1 *)(unaff_x20 + 0x11),
                             *(undefined8 *)(unaff_x20 + 0x18));
        if ((uVar7 & 1) != 0) {
          in_stack_00000108 = 0;
          in_stack_00000100 = 0;
          in_stack_00000118 = 0.0;
          in_stack_00000110 = 0.0;
          if ((lVar14 == 0) || (lVar18 = *(long *)(lVar14 + 0x10), lVar18 == 0)) goto LAB_014479c0;
          uVar23 = 0;
          uVar20 = 0xffffffff;
          while ((int)uVar23 < (int)*(uint *)(lVar18 + 0x18)) {
            if (*(uint *)(lVar18 + 0x18) <= uVar23) goto LAB_014479c4;
            if (*(long *)(lVar18 + (long)(int)uVar23 * 8 + 0x20) == 0) goto LAB_014479c0;
            bVar6 = FUN_014440c0();
            lVar18 = *(long *)(lVar14 + 0x10);
            uVar1 = uVar23;
            if ((uVar20 == 0xffffffff & (bVar6 ^ 1)) == 0) {
              uVar1 = uVar20;
            }
            uVar23 = uVar23 + 1;
            uVar20 = uVar1;
            if (lVar18 == 0) goto LAB_014479c0;
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
            if (((*(long *)(lVar9 + 0x18) == 0) ||
                (lVar18 = *(long *)(*(long *)(lVar9 + 0x18) + 0x10), lVar18 == 0)) ||
               (FUN_0132138c(lVar18,0,&stack0x00000040,*(undefined8 *)puVar5),
               in_stack_00000040 == 0)) goto LAB_014479c0;
            in_stack_000000f8 = *(double *)(in_stack_00000040 + 0x50);
            in_stack_000000f0 = *(double *)(in_stack_00000040 + 0x48);
            in_stack_000000e0 = *(undefined8 *)(in_stack_00000040 + 0x38);
            lVar18 = *(long *)(lVar9 + 0x18);
            in_stack_000000e8 = *(undefined8 *)(in_stack_00000040 + 0x40);
            if (lVar18 == 0) goto LAB_014479c0;
            iVar21 = 1;
            while( true ) {
              lVar18 = *(long *)(lVar18 + 0x10);
              if (lVar18 == 0) goto LAB_014479c0;
              if (*(int *)(lVar18 + 0x18) <= iVar21) break;
              FUN_0132138c(lVar18,iVar21,&stack0x00000040,*(undefined8 *)puVar5);
              if (in_stack_00000040 == 0) goto LAB_014479c0;
              in_stack_000000b8 = *(undefined8 *)(in_stack_00000040 + 0x50);
              in_stack_000000b0 = *(undefined8 *)(in_stack_00000040 + 0x48);
              in_stack_000000a8 = *(undefined8 *)(in_stack_00000040 + 0x40);
              uVar10 = *(undefined8 *)(in_stack_00000040 + 0x38);
              in_stack_000000a0 = uVar10;
              in_stack_000000e0 = FUN_014320a0(&stack0x000000e0,&stack0x000000a0,0);
              lVar18 = *(long *)(lVar9 + 0x18);
              iVar21 = iVar21 + 1;
              in_stack_000000e8 = uVar10;
              in_stack_000000f0 = param_4;
              in_stack_000000f8 = param_5;
              if (lVar18 == 0) goto LAB_014479c0;
            }
            if (((*(long *)(lVar14 + 0x18) == 0) ||
                (lVar18 = *(long *)(*(long *)(lVar14 + 0x18) + 0x10), lVar18 == 0)) ||
               (FUN_0132138c(lVar18,0,&stack0x00000040,*(undefined8 *)puVar5),
               in_stack_00000040 == 0)) goto LAB_014479c0;
            in_stack_000000d8 = *(double *)(in_stack_00000040 + 0x50);
            in_stack_000000d0 = *(double *)(in_stack_00000040 + 0x48);
            uVar10 = *(undefined8 *)(in_stack_00000040 + 0x38);
            lVar18 = *(long *)(lVar14 + 0x18);
            in_stack_000000c0 = uVar10;
            in_stack_000000c8 = *(undefined8 *)(in_stack_00000040 + 0x40);
            if (lVar18 == 0) goto LAB_014479c0;
            iVar21 = 1;
            while( true ) {
              lVar18 = *(long *)(lVar18 + 0x10);
              if (lVar18 == 0) goto LAB_014479c0;
              if (*(int *)(lVar18 + 0x18) <= iVar21) break;
              FUN_0132138c(lVar18,iVar21,&stack0x00000040,*(undefined8 *)puVar5);
              if (in_stack_00000040 == 0) goto LAB_014479c0;
              in_stack_00000098 = *(undefined8 *)(in_stack_00000040 + 0x50);
              in_stack_00000090 = *(undefined8 *)(in_stack_00000040 + 0x48);
              in_stack_00000088 = *(undefined8 *)(in_stack_00000040 + 0x40);
              uVar10 = *(undefined8 *)(in_stack_00000040 + 0x38);
              in_stack_00000080 = uVar10;
              in_stack_000000c0 = FUN_014320a0(&stack0x000000c0,&stack0x00000080,0);
              lVar18 = *(long *)(lVar14 + 0x18);
              iVar21 = iVar21 + 1;
              in_stack_000000c8 = uVar10;
              in_stack_000000d0 = param_4;
              in_stack_000000d8 = param_5;
              if (lVar18 == 0) goto LAB_014479c0;
            }
            in_stack_00000100 = FUN_014320a0(&stack0x000000e0,&stack0x000000c0,0);
            in_stack_00000108 = uVar10;
            in_stack_00000110 = param_4;
            in_stack_00000118 = param_5;
            if (param_4 * param_5 + 0.0 <
                in_stack_000000f0 * in_stack_000000f8 + in_stack_000000d0 * in_stack_000000d8 + 0.0)
            {
              if (*(int *)(unaff_x20 + 0x24) < 3) {
                plVar8 = (long *)0x0;
                goto LAB_01447538;
              }
              plVar8 = (long *)thunk_FUN_00d62348(*(undefined8 *)
                                                                                                      
                                                  Method_System_Collections_Generic_Dictionary<TerrainData,_ObiHeightFieldHandle>_get_Count__
                                                 );
              if (plVar8 == (long *)0x0) goto LAB_014479c0;
              FUN_0160aa4c(plVar8,0);
              uVar10 = FUN_01445ad4(lVar9);
              uVar11 = FUN_01445ad4(lVar14);
              FUN_0160dca4(plVar8,*(undefined8 *)System_Xml_Schema_Datatype_ENTITY_TypeInfo,uVar10,
                           uVar11,0);
              if (*(int *)(unaff_x20 + 0x24) < 5) goto LAB_01447538;
              lVar18 = *(long *)(lVar9 + 0x18);
              if (lVar18 == 0) goto LAB_014479c0;
              iVar22 = 0;
              goto LAB_0144733c;
            }
          }
          if (3 < *(int *)(unaff_x20 + 0x24)) {
            uVar10 = FUN_01445ad4(lVar9);
            in_stack_00000068 = in_stack_000000e8;
            in_stack_00000060 = in_stack_000000e0;
            in_stack_00000078 = in_stack_000000f8;
            in_stack_00000070 = in_stack_000000f0;
            uVar11 = FUN_0143182c(&stack0x00000060,0);
            uVar10 = FUN_015f5b28(uVar10,uVar11,0);
            uVar11 = FUN_01445ad4(lVar14);
            in_stack_00000068 = in_stack_000000c8;
            in_stack_00000060 = in_stack_000000c0;
            in_stack_00000078 = in_stack_000000d8;
            in_stack_00000070 = in_stack_000000d0;
            uVar12 = FUN_0143182c(&stack0x00000060,0);
            uVar11 = FUN_015f5b28(uVar11,uVar12,0);
            uVar10 = FUN_01600b5c(*(undefined8 *)
                                   Method_Oculus_Interaction_PointerInteractable<HandGrabInteractor,_HandGrabInteractable>__ctor__
                                  ,uVar10,uVar11,0);
            if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
              thunk_FUN_00d32864(*(long *)StringLiteral_302);
            }
            FUN_02660dac(uVar10,0);
          }
        }
        iVar22 = iVar22 + 1;
      } while (iVar22 < *(int *)(unaff_x19 + 0x18));
    }
    goto LAB_014472ac;
  }
LAB_014479c0:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


