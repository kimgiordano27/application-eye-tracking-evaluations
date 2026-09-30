/*
FUNCTION_NAME: UnityEngine.UIElements.ListViewDragger$$PlaceHoverBarAtElement
ENTRY_POINT: 0377ea80
PROGRAM: vrlegs-libil2cpp.so
SCORE: 85
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;ray_interaction;ui_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_1;paired_field_refs_with_structure_only;ray_or_cast_sink_hits_4;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_5;frame_or_lifecycle_behavior;negative_generic_transform_raycast_without_eye_source_or_attempt
*/


uint UnityEngine_UIElements_ListViewDragger__PlaceHoverBarAtElement(void)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  ulong uVar10;
  bool bVar11;
  int iVar12;
  uint uVar13;
  undefined8 uVar14;
  long lVar15;
  ulong uVar16;
  long *plVar17;
  long *unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  undefined8 uVar18;
  int unaff_w23;
  long lVar19;
  ulong unaff_x26;
  ulong unaff_x27;
  undefined8 uVar20;
  undefined8 *unaff_x28;
  long unaff_x29;
  ulong in_stack_00000008;
  undefined8 in_stack_00000010;
  long in_stack_00000018;
  undefined8 in_stack_00000020;
  int iStack0000000000000028;
  undefined4 uStack000000000000002c;
  
  uVar10 = in_stack_00000008;
  do {
    if (*(int *)(*unaff_x21 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    iVar12 = FUN_037775a0(unaff_w23,0);
    if (iVar12 == 0) {
      if ((unaff_w23 == 0x2011) || (unaff_w23 == 0xad)) {
        if (*(int *)(*unaff_x21 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar14 = 0x2d;
LAB_0377eaec:
        iVar12 = FUN_037775a0(uVar14,0);
        if (iVar12 != 0) goto LAB_0377eafc;
      }
      else if (unaff_w23 == 0xa0) {
        if (*(int *)(*unaff_x21 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar14 = 0x20;
        goto LAB_0377eaec;
      }
      if (*(long *)(unaff_x20 + 0x1e0) == 0) goto LAB_0377f160;
      iStack0000000000000028 = unaff_w23;
      FUN_01b5f01c(*(long *)(unaff_x20 + 0x1e0),&stack0x00000028,
                   *(undefined8 *)
                    Unity_Physics_Systems_CreateJacobiansSystem___codegen__OnUpdate_00000B8D_PostfixBurstDelegate_var
                  );
      in_stack_00000008._4_4_ = 1;
    }
    else {
LAB_0377eafc:
      lVar15 = thunk_FUN_01a89e68(*(undefined8 *)
                                   Method_System_Collections_Generic_Dictionary<int,_ValueTuple<Vector4,_Vector2Int>>_Clear__
                                 );
      FUN_037794cc(lVar15,unaff_w23,iVar12);
      if (*(long *)(unaff_x20 + 0x120) == 0) goto LAB_0377f160;
      iStack0000000000000028 = iVar12;
      uVar16 = FUN_0219c130(*(long *)(unaff_x20 + 0x120),&stack0x00000028,
                            *(undefined8 *)
                             System_Linq_Expressions_Interpreter_OrInstruction_OrBoolean_TypeInfo);
      if ((uVar16 & 1) == 0) {
        if (*(long *)(unaff_x20 + 0x1c8) == 0) goto LAB_0377f160;
        iStack0000000000000028 = iVar12;
        uVar16 = FUN_021e5f08(*(long *)(unaff_x20 + 0x1c8),&stack0x00000028,
                              *(undefined8 *)PTR_DAT_03ccd4f0);
        if ((uVar16 & 1) != 0) {
          if (*(long *)(unaff_x20 + 0x1c0) == 0) goto LAB_0377f160;
          iStack0000000000000028 = iVar12;
          FUN_01b5f01c(*(long *)(unaff_x20 + 0x1c0),&stack0x00000028,
                       *(undefined8 *)
                        Unity_Physics_Systems_CreateJacobiansSystem___codegen__OnUpdate_00000B8D_PostfixBurstDelegate_var
                      );
        }
        if (*(long *)(unaff_x20 + 0x1d8) == 0) goto LAB_0377f160;
        iStack0000000000000028 = unaff_w23;
        uVar16 = FUN_021e5f08(*(long *)(unaff_x20 + 0x1d8),&stack0x00000028,
                              *(undefined8 *)PTR_DAT_03ccd4f0);
        if ((uVar16 & 1) != 0) {
          if (*(long *)(unaff_x20 + 0x1d0) == 0) goto LAB_0377f160;
          FUN_01b5f01c(*(long *)(unaff_x20 + 0x1d0),lVar15,
                       *(undefined8 *)
                        Method_System_Collections_Generic_Dictionary<int,_char>_ContainsKey__);
        }
      }
      else {
        if ((*(long *)(unaff_x20 + 0x120) == 0) ||
           (in_stack_00000020._4_4_ = iVar12,
           FUN_0219b634(*(long *)(unaff_x20 + 0x120),(long)&stack0x00000020 + 4,&stack0x00000028,
                        *(undefined8 *)Mono_CSharp_Operator_OpType_TypeInfo), lVar15 == 0))
        goto LAB_0377f160;
        *(ulong *)(lVar15 + 0x20) = CONCAT44(uStack000000000000002c,iStack0000000000000028);
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
        *(long *)(lVar15 + 0x18) = unaff_x20;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
        if (*(long *)(unaff_x20 + 0x128) == 0) goto LAB_0377f160;
        FUN_01b5f01c(*(long *)(unaff_x20 + 0x128),lVar15,
                     *(undefined8 *)
                      Method_System_Collections_Generic_Dictionary<int,_char>_ContainsKey__);
        if (*(long *)(unaff_x20 + 0x130) == 0) goto LAB_0377f160;
        iStack0000000000000028 = unaff_w23;
        FUN_0219b9a4(*(long *)(unaff_x20 + 0x130),&stack0x00000028,lVar15,
                     *(undefined8 *)
                      Method_System_Collections_Generic_Dictionary<int,_List<LocalVoice>>_set_Item__
                    );
      }
    }
    do {
      puVar5 = 
      UnityEngine_XR_Interaction_Toolkit_Utilities_Curves_CurveUtility_CalculateProjectileFlightTime_00000A60_PostfixBurstDelegate_var
      ;
      if (unaff_x27 == unaff_x26) {
        if (*(long *)(unaff_x20 + 0x1c0) == 0) goto LAB_0377f160;
        if (*(int *)(*(long *)(unaff_x20 + 0x1c0) + 0x18) == 0) {
          *unaff_x19 = unaff_x22;
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
          uVar13 = 0;
          goto LAB_0377e8b8;
        }
        lVar15 = *(long *)(unaff_x20 + 0x140);
        if (lVar15 == 0) goto LAB_0377f160;
        if (*(uint *)(lVar15 + 0x18) <= *(uint *)(unaff_x20 + 0x148)) goto LAB_0377f164;
        plVar17 = *(long **)(lVar15 + (long)(int)*(uint *)(unaff_x20 + 0x148) * 8 + 0x20);
        if (plVar17 == (long *)0x0) goto LAB_0377f160;
        iVar12 = (**(code **)(*plVar17 + 0x188))(plVar17,*(undefined8 *)(*plVar17 + 400));
        if (iVar12 == *(int *)(unaff_x20 + 0x150)) {
          lVar15 = *(long *)(unaff_x20 + 0x140);
          if (lVar15 == 0) goto LAB_0377f160;
          if (*(uint *)(lVar15 + 0x18) <= *(uint *)(unaff_x20 + 0x148)) goto LAB_0377f164;
          plVar17 = *(long **)(lVar15 + (long)(int)*(uint *)(unaff_x20 + 0x148) * 8 + 0x20);
          if (plVar17 == (long *)0x0) goto LAB_0377f160;
          iVar12 = (**(code **)(*plVar17 + 0x1a8))(plVar17,*(undefined8 *)(*plVar17 + 0x1b0));
          if (iVar12 != *(int *)(unaff_x20 + 0x154)) goto LAB_0377ed30;
        }
        else {
LAB_0377ed30:
          lVar15 = *(long *)(unaff_x20 + 0x140);
          if (lVar15 == 0) goto LAB_0377f160;
          if (*(uint *)(lVar15 + 0x18) <= *(uint *)(unaff_x20 + 0x148)) goto LAB_0377f164;
          lVar15 = *(long *)(lVar15 + (long)(int)*(uint *)(unaff_x20 + 0x148) * 8 + 0x20);
          if (lVar15 == 0) goto LAB_0377f160;
          FUN_036afd58(lVar15,*(undefined4 *)(unaff_x20 + 0x150),*(undefined4 *)(unaff_x20 + 0x154),
                       0);
          lVar15 = *(long *)(unaff_x20 + 0x140);
          if (lVar15 == 0) goto LAB_0377f160;
          if (*(uint *)(lVar15 + 0x18) <= *(uint *)(unaff_x20 + 0x148)) goto LAB_0377f164;
          uVar14 = *(undefined8 *)(lVar15 + (long)(int)*(uint *)(unaff_x20 + 0x148) * 8 + 0x20);
          if (*(int *)(*(long *)OVRVirtualKeyboard_KeyboardPosition_TypeInfo + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          FUN_03778c94(uVar14,0);
        }
        lVar15 = *(long *)(unaff_x20 + 0x140);
        if (lVar15 == 0) goto LAB_0377f160;
        if (*(uint *)(lVar15 + 0x18) <= *(uint *)(unaff_x20 + 0x148)) goto LAB_0377f164;
        uVar18 = *(undefined8 *)(unaff_x20 + 0x1c0);
        uVar2 = *(undefined4 *)(unaff_x20 + 0x158);
        uVar14 = *(undefined8 *)(unaff_x20 + 0x160);
        uVar1 = *(undefined8 *)(unaff_x20 + 0x168);
        uVar3 = *(undefined4 *)(unaff_x20 + 0x15c);
        uVar20 = *(undefined8 *)(lVar15 + (long)(int)*(uint *)(unaff_x20 + 0x148) * 8 + 0x20);
        if (*(int *)(*(long *)OVRVirtualKeyboard_KeyboardPosition_TypeInfo + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar13 = FUN_03777f70(uVar18,uVar2,0,uVar1,uVar14,uVar3,uVar20,&stack0x00000018);
        puVar7 = Photon_Voice_OpusCodec_EncoderFloat_TypeInfo;
        puVar6 = _Common_PlatformService_OculusService_Scripts_OculusDataManager_<>c_TypeInfo;
        puVar4 = 
        Unity_Physics_Systems_CreateJacobiansSystem___codegen__OnUpdate_00000B8D_PostfixBurstDelegate_var
        ;
        if (in_stack_00000018 == 0) goto LAB_0377f160;
        lVar15 = 0;
        goto LAB_0377ee40;
      }
      unaff_x26 = unaff_x26 + 1;
      if (*(uint *)(unaff_x22 + 0x18) <= unaff_x26) goto LAB_0377f164;
      if (*(long *)(unaff_x20 + 0x130) == 0) goto LAB_0377f160;
      unaff_w23 = *(int *)(unaff_x29 + unaff_x26 * 4);
      iStack0000000000000028 = unaff_w23;
      uVar16 = FUN_0219c130(*(long *)(unaff_x20 + 0x130),&stack0x00000028,*unaff_x28);
    } while ((uVar16 & 1) != 0);
  } while( true );
LAB_0377ee40:
  do {
    if ((int)*(uint *)(in_stack_00000018 + 0x18) <= (int)(uint)lVar15) {
LAB_0377eef0:
      lVar15 = *(long *)(unaff_x20 + 0x1c0);
      if (lVar15 != 0) {
        lVar19 = *(long *)puVar5;
        *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) + 1;
        uVar16 = FUN_01ab7534(*(undefined8 *)(*(long *)(*(long *)(lVar19 + 0x20) + 0xc0) + 200));
        if ((uVar16 & 1) == 0) {
          *(undefined4 *)(lVar15 + 0x18) = 0;
        }
        else {
          iVar12 = *(int *)(lVar15 + 0x18);
          *(undefined4 *)(lVar15 + 0x18) = 0;
          if (0 < iVar12) {
            FUN_02793a34(*(undefined8 *)(lVar15 + 0x10),0,iVar12,0);
          }
        }
        puVar9 = Method_System_Collections_Generic_Dictionary<int,_Collider>__ctor__;
        puVar8 = Method_System_Collections_Generic_Dictionary<int,_char>_ContainsKey__;
        puVar7 = Method_System_Collections_Generic_Dictionary<int,_List<object>>__ctor__;
        puVar6 = Method_System_Collections_Generic_Dictionary<int,_List<LocalVoice>>_set_Item__;
        puVar5 = Koenigz_PerfectCulling_PerfectCullingVolumeBakeData_<>c__DisplayClass31_0_TypeInfo;
        lVar15 = *(long *)(unaff_x20 + 0x1d0);
        if (lVar15 != 0) {
          iVar12 = 0;
          goto LAB_0377ef88;
        }
      }
      break;
    }
    if (*(uint *)(in_stack_00000018 + 0x18) <= (uint)lVar15) {
LAB_0377f164:
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c44();
    }
    lVar19 = *(long *)(in_stack_00000018 + lVar15 * 8 + 0x20);
    if (lVar19 == 0) goto LAB_0377eef0;
    iVar12 = FUN_03776e5c(lVar19,0);
    FUN_03776ec0(lVar19,*(undefined4 *)(unaff_x20 + 0x148),0);
    if (*(long *)(unaff_x20 + 0x118) == 0) break;
    FUN_01b5f01c(*(long *)(unaff_x20 + 0x118),lVar19,*(undefined8 *)puVar6);
    if (*(long *)(unaff_x20 + 0x120) == 0) break;
    iStack0000000000000028 = iVar12;
    FUN_0219b9a4(*(long *)(unaff_x20 + 0x120),&stack0x00000028,lVar19,*(undefined8 *)puVar7);
    if (*(long *)(unaff_x20 + 0x1b8) == 0) break;
    iStack0000000000000028 = iVar12;
    FUN_01b5f01c(*(long *)(unaff_x20 + 0x1b8),&stack0x00000028,*(undefined8 *)puVar4);
    if (*(long *)(unaff_x20 + 0x1b0) == 0) break;
    iStack0000000000000028 = iVar12;
    FUN_01b5f01c(*(long *)(unaff_x20 + 0x1b0),&stack0x00000028,*(undefined8 *)puVar4);
    lVar15 = lVar15 + 1;
  } while (in_stack_00000018 != 0);
  goto LAB_0377f160;
LAB_0377ef88:
  if (iVar12 < *(int *)(lVar15 + 0x18)) {
    FUN_02215a88(lVar15,iVar12,&stack0x00000028,*(undefined8 *)puVar7);
    lVar15 = CONCAT44(uStack000000000000002c,iStack0000000000000028);
    if ((lVar15 == 0) || (*(long *)(unaff_x20 + 0x120) == 0)) goto LAB_0377f160;
    iStack0000000000000028 = *(int *)(lVar15 + 0x28);
    uVar16 = FUN_0219f8b8(*(long *)(unaff_x20 + 0x120),&stack0x00000028,&stack0x00000010,
                          *(undefined8 *)puVar5);
    if ((uVar16 & 1) == 0) {
      if (*(long *)(unaff_x20 + 0x1c0) == 0) goto LAB_0377f160;
      iStack0000000000000028 = *(int *)(lVar15 + 0x28);
      FUN_01b5f01c(*(long *)(unaff_x20 + 0x1c0),&stack0x00000028,*(undefined8 *)puVar4);
    }
    else {
      *(undefined8 *)(lVar15 + 0x20) = in_stack_00000010;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      *(long *)(lVar15 + 0x18) = unaff_x20;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      if (*(long *)(unaff_x20 + 0x128) == 0) goto LAB_0377f160;
      FUN_01b5f01c(*(long *)(unaff_x20 + 0x128),lVar15,*(undefined8 *)puVar8);
      if (*(long *)(unaff_x20 + 0x130) == 0) goto LAB_0377f160;
      iStack0000000000000028 = *(int *)(lVar15 + 0x14);
      FUN_0219b9a4(*(long *)(unaff_x20 + 0x130),&stack0x00000028,lVar15,*(undefined8 *)puVar6);
      if (*(long *)(unaff_x20 + 0x1d0) == 0) goto LAB_0377f160;
      FUN_022190f4(*(long *)(unaff_x20 + 0x1d0),iVar12,*(undefined8 *)puVar9);
      iVar12 = iVar12 + -1;
    }
    lVar15 = *(long *)(unaff_x20 + 0x1d0);
    iVar12 = iVar12 + 1;
    if (lVar15 == 0) goto LAB_0377f160;
    goto LAB_0377ef88;
  }
  bVar11 = *(char *)(unaff_x20 + 0x14c) != '\0';
  if ((uVar13 & 1) == 0 && bVar11) {
    do {
      uVar16 = FUN_0377f168();
    } while ((uVar16 & 1) == 0);
    uVar13 = 1;
  }
  else {
    uVar13 = uVar13 | bVar11;
  }
  if ((uVar10 & 1) != 0) {
    FUN_0377e2cc();
  }
  lVar15 = *(long *)(unaff_x20 + 0x1d0);
  if (lVar15 == 0) goto LAB_0377f160;
  iVar12 = 0;
  while (iVar12 < *(int *)(lVar15 + 0x18)) {
    FUN_02215a88(lVar15,iVar12,&stack0x00000028,*(undefined8 *)puVar7);
    if ((CONCAT44(uStack000000000000002c,iStack0000000000000028) == 0) ||
       (*(long *)(unaff_x20 + 0x1e0) == 0)) goto LAB_0377f160;
    iStack0000000000000028 =
         *(int *)(CONCAT44(uStack000000000000002c,iStack0000000000000028) + 0x14);
    FUN_01b5f01c(*(long *)(unaff_x20 + 0x1e0),&stack0x00000028,*(undefined8 *)puVar4);
    lVar15 = *(long *)(unaff_x20 + 0x1d0);
    iVar12 = iVar12 + 1;
    if (lVar15 == 0) goto LAB_0377f160;
  }
  *unaff_x19 = 0;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
  lVar15 = *(long *)(unaff_x20 + 0x1e0);
  if (lVar15 != 0) {
    if (0 < *(int *)(lVar15 + 0x18)) {
      lVar15 = FUN_022195a8(lVar15,*(undefined8 *)
                                    UnityEngine_XR_Interaction_Toolkit_Utilities_Curves_CurveUtility_ElevateQuadraticToCubicBezier_00000A5D_PostfixBurstDelegate_var
                           );
      *unaff_x19 = lVar15;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
    }
    uVar13 = uVar13 & (in_stack_00000008._4_4_ ^ 1);
LAB_0377e8b8:
    return uVar13 & 1;
  }
LAB_0377f160:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


