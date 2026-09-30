/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_evt_message_t_message_id_set
ENTRY_POINT: 0788cb14
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;ui_interaction;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_1;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_evt_message_t_message_id_set(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  int iVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long *plVar9;
  undefined8 *unaff_x19;
  int unaff_w20;
  long lVar10;
  long unaff_x21;
  long unaff_x22;
  undefined8 *unaff_x23;
  long lVar11;
  undefined8 *unaff_x26;
  long *unaff_x28;
  undefined8 *unaff_x29;
  long in_stack_00000010;
  long in_stack_00000018;
  long in_stack_00000020;
  undefined8 *in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  long in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  long in_stack_00000070;
  undefined8 *in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined4 in_stack_000000b0;
  long in_stack_000000b8;
  
  if (unaff_w20 != 1) {
                    /* try { // try from 0788cc80 to 0798cc83 has its CatchHandler @ 0788d134 */
    FUN_03a535f4(&stack0x00000020);
                    /* try { // try from 0788cd58 to 0798cd6b has its CatchHandler @ 0788d114 */
    if (unaff_w20 != 1) {
      FUN_03a53624(&stack0x00000050);
                    /* try { // try from 0788cdf0 to 0798ce77 has its CatchHandler @ 0788d12c */
                    /* WARNING: Subroutine does not return */
      FUN_03b79cbc();
    }
    plVar9 = (long *)__cxa_begin_catch();
    lVar10 = *plVar9;
    in_stack_00000050 = lVar10;
    __cxa_end_catch();
    iVar5 = 0;
LAB_0788cb44:
    FUN_06272918(in_stack_00000058,
                 *(undefined8 *)System_Collections_Generic_IReadOnlyCollection<ulong>_TypeInfo);
    if (lVar10 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9b8(lVar10);
    }
    if ((iVar5 != 0x29) && (iVar5 != 0)) {
      return;
    }
    if (in_stack_00000018 != 0) {
                    /* try { // try from 0788cb78 to 0798cbaf has its CatchHandler @ 0788d140 */
      iVar5 = FUN_05ed0f88(in_stack_00000018,
                           *(undefined8 *)
                            UnityEngine_Rendering_ListPool<ValueTuple<int,_Vector4>>_TypeInfo);
      if ((0 < iVar5) && (lVar10 = *(long *)(in_stack_00000010 + 0x40), lVar10 != 0)) {
        (**(code **)(lVar10 + 0x18))
                  (*(undefined8 *)(lVar10 + 0x40),in_stack_00000018,*(undefined8 *)(lVar10 + 0x28));
      }
      if (unaff_x22 != 0) {
        iVar5 = FUN_05ed0f88();
        if ((0 < iVar5) && (lVar10 = *(long *)(in_stack_00000010 + 0x48), lVar10 != 0)) {
          (**(code **)(lVar10 + 0x18))(*(undefined8 *)(lVar10 + 0x40));
        }
        if (unaff_x21 != 0) {
          iVar5 = FUN_05ed0f88();
          if (iVar5 < 1) {
            return;
          }
          lVar10 = *(long *)(in_stack_00000010 + 0x50);
          if (lVar10 == 0) {
            return;
          }
          (**(code **)(lVar10 + 0x18))(*(undefined8 *)(lVar10 + 0x40));
          return;
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  plVar9 = (long *)__cxa_begin_catch();
  lVar10 = *plVar9;
  in_stack_00000020 = lVar10;
  __cxa_end_catch();
  iVar5 = 0;
  puVar8 = in_stack_00000028;
LAB_0788ca50:
  FUN_06289384(puVar8,*(undefined8 *)System_Collections_Generic_IReadOnlyCollection<Type>_TypeInfo);
  if (lVar10 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9b8(lVar10);
  }
  if ((iVar5 == 0x1e) || (lVar10 = in_stack_00000050, iVar5 == 0)) {
    do {
      uVar6 = FUN_062727f4(&stack0x000000a0,*unaff_x26);
      lVar10 = in_stack_000000b8;
      uVar4 = in_stack_000000b0;
      if ((uVar6 & 1) == 0) {
        iVar5 = 0x29;
        lVar10 = in_stack_00000050;
        break;
      }
      if (in_stack_000000b8 != 0) {
        lVar11 = *(long *)(in_stack_000000b8 + 0x38);
        if (*(int *)(*(long *)System_Collections_Generic_IReadOnlyCollection<InputDevice>_TypeInfo +
                    0xe4) == 0) {
          thunk_FUN_03ae8be4();
        }
        if (lVar11 != 0) goto code_r0x0788c778;
      }
      if (unaff_x22 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      FUN_05ed12f0();
    } while( true );
  }
  goto LAB_0788cb44;
code_r0x0788c778:
  lVar10 = *(long *)(lVar10 + 0x38);
  if (*(int *)(*(long *)System_Collections_Generic_IReadOnlyCollection<InputDevice>_TypeInfo + 0xe4)
      == 0) {
    thunk_FUN_03ae8be4();
  }
  if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  FUN_05f6ec70(&stack0x00000020,lVar10,
               *(undefined8 *)System_Collections_Generic_IReadOnlyCollection<OVRSpaceUser>_TypeInfo)
  ;
  in_stack_00000070 = in_stack_00000020;
  in_stack_00000020 = 0;
  in_stack_00000078 = in_stack_00000028;
  in_stack_00000088 = in_stack_00000038;
  in_stack_00000080 = in_stack_00000030;
  in_stack_00000098 = in_stack_00000048;
  in_stack_00000090 = in_stack_00000040;
  in_stack_00000028 = &stack0x00000070;
  while (uVar6 = FUN_06289248(&stack0x00000070,*unaff_x19), uVar3 = in_stack_00000090,
        uVar2 = in_stack_00000088, uVar1 = in_stack_00000080, (uVar6 & 1) != 0) {
    in_stack_00000060 = in_stack_00000088;
    in_stack_00000068 = in_stack_00000090;
    if (*(int *)(*unaff_x28 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    uVar6 = FUN_0584b198(&stack0x00000060,*unaff_x29);
    if ((uVar6 & 1) == 0) {
      in_stack_00000060 = uVar2;
      in_stack_00000068 = uVar3;
      if (*(int *)(*unaff_x28 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      uVar6 = FUN_0584b040(&stack0x00000060,
                           *(undefined8 *)
                            System_Collections_Generic_IReadOnlyCollection<KeyValuePair<string,_SessionProperty>>_TypeInfo
                          );
      if ((uVar6 & 1) == 0) {
        in_stack_00000060 = uVar2;
        in_stack_00000068 = uVar3;
        if (*(int *)(*unaff_x28 + 0xe4) == 0) {
          thunk_FUN_03ae8be4();
        }
        uVar6 = FUN_0584b0bc(&stack0x00000060,
                             *(undefined8 *)
                              UnityEngine_UIElements_UIR_LinkedPool<MeshHandle>_TypeInfo);
        if ((uVar6 & 1) != 0) {
          if (in_stack_00000018 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c0();
          }
          uVar6 = FUN_05ed14e4(in_stack_00000018,uVar4,
                               *(undefined8 *)
                                UnityEngine_Rendering_ListChangedEventArgs<DebugUI_Widget>_TypeInfo)
          ;
          if ((uVar6 & 1) == 0) {
            uVar7 = thunk_FUN_03ac74bc(*(undefined8 *)
                                        UnityEngine_Rendering_ListPool<CameraSettings>_TypeInfo);
            FUN_05f6dacc(uVar7,*(undefined8 *)
                                UnityEngine_Rendering_ListPool<ValueTuple<GUIContent,_int>>_TypeInfo
                        );
            FUN_05ed12f0(in_stack_00000018,uVar4,uVar7,
                         *(undefined8 *)
                          UnityEngine_UIElements_UIR_LinkedPool<DynamicAtlas_TextureInfo>_TypeInfo);
          }
          lVar10 = FUN_05ed1250(in_stack_00000018,uVar4,
                                *(undefined8 *)
                                 UnityEngine_Rendering_ListPool<AOVRequestData>_TypeInfo);
          if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c0();
          }
          FUN_05f6e848(lVar10,uVar1,uVar2,uVar3,*unaff_x23);
        }
      }
      else {
        if (unaff_x22 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        uVar6 = FUN_05ed14e4();
        if ((uVar6 & 1) == 0) {
          uVar7 = thunk_FUN_03ac74bc(*(undefined8 *)
                                      UnityEngine_Rendering_ListPool<CameraSettings>_TypeInfo);
          FUN_05f6dacc(uVar7,*(undefined8 *)
                              UnityEngine_Rendering_ListPool<ValueTuple<GUIContent,_int>>_TypeInfo);
          FUN_05ed12f0();
        }
        lVar10 = FUN_05ed1250();
        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        FUN_05f6e848(lVar10,uVar1,uVar2,uVar3,*unaff_x23);
      }
    }
    else {
      if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      uVar6 = FUN_05ed14e4();
      if ((uVar6 & 1) == 0) {
        uVar7 = thunk_FUN_03ac74bc(*(undefined8 *)
                                    UnityEngine_Rendering_ListPool<CameraSettings>_TypeInfo);
        FUN_05f6dacc(uVar7,*(undefined8 *)
                            UnityEngine_Rendering_ListPool<ValueTuple<GUIContent,_int>>_TypeInfo);
        FUN_05ed12f0();
      }
      lVar10 = FUN_05ed1250();
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      FUN_05f6e848(lVar10,uVar1,uVar2,uVar3,*unaff_x23);
    }
  }
  lVar10 = 0;
  iVar5 = 0x1e;
  puVar8 = &stack0x00000070;
  unaff_x26 = (undefined8 *)System_Collections_Generic_IReadOnlyCollection<VisualElement>_TypeInfo;
  goto LAB_0788ca50;
}


