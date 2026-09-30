/*
FUNCTION_NAME: System.Runtime.Serialization.LongList$$EnlargeArray
ENTRY_POINT: 03388dbc
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 103
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;ui_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_6;validity_or_gating_hits_18;strong_pose_or_ray_construction_hits_12;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_3;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;negative_system_io_serialization_or_json_helper_without_gaze_flow;functionality_gaze_interaction_hits_3
*/


/* WARNING: Removing unreachable block (ram,0x0338907c) */

void System_Runtime_Serialization_LongList__EnlargeArray(void)

{
  byte bVar1;
  uint uVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  int *piVar11;
  long unaff_x19;
  long *unaff_x20;
  undefined8 *unaff_x21;
  int iVar12;
  undefined8 uVar13;
  long *unaff_x23;
  long unaff_x24;
  long *unaff_x26;
  undefined8 uVar14;
  long lVar15;
  int unaff_w29;
  long in_stack_00000000;
  ulong in_stack_00000008;
  long in_stack_00000010;
  ulong in_stack_00000018;
  ulong in_stack_00000020;
  long in_stack_00000028;
  
  if (unaff_w29 == 1) {
    plVar6 = (long *)__cxa_begin_catch();
    lVar15 = *plVar6;
    __cxa_end_catch();
    iVar12 = 0;
    goto joined_r0x03388dd8;
  }
  if (unaff_x26 != (long *)0x0) {
    lVar15 = *unaff_x26;
    uVar9 = (ulong)*(ushort *)(lVar15 + 0x12e);
    if (uVar9 != 0) {
      piVar11 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar4 = (undefined8 *)(lVar15 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_03388e3c;
        }
        uVar9 = uVar9 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar9 != 0);
    }
    puVar4 = (undefined8 *)FUN_01ecb238();
LAB_03388e3c:
    (*(code *)*puVar4)();
  }
  if (unaff_w29 == 1) {
    puVar4 = (undefined8 *)__cxa_begin_catch();
    uVar13 = thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<AssetFileDeleteResult>_get_Data__);
    uVar9 = thunk_FUN_01ef6ec0(uVar13,*(undefined8 *)*puVar4);
    if ((uVar9 & 1) == 0) {
      puVar7 = (undefined8 *)__cxa_allocate_exception(8);
      *puVar7 = *puVar4;
                    /* WARNING: Subroutine does not return */
      __cxa_throw(puVar7,&
                         PTR_Method_System_Collections_Generic_List<OVRSkeletonRenderer_CapsuleVisualization>_get_Count___042b3198
                  ,0);
    }
    uVar13 = *puVar4;
    __cxa_end_catch();
    FUN_033a19f0(uVar13,0);
    goto LAB_03388d1c;
  }
  if (unaff_w29 == 1) {
    puVar4 = (undefined8 *)__cxa_begin_catch();
    uVar13 = thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<AssetFileDeleteResult>_get_Data__);
    uVar9 = thunk_FUN_01ef6ec0(uVar13,*(undefined8 *)*puVar4);
    if ((uVar9 & 1) == 0) {
      puVar7 = (undefined8 *)__cxa_allocate_exception(8);
      *puVar7 = *puVar4;
                    /* WARNING: Subroutine does not return */
      __cxa_throw(puVar7,&
                         PTR_Method_System_Collections_Generic_List<OVRSkeletonRenderer_CapsuleVisualization>_get_Count___042b3198
                  ,0);
    }
    uVar13 = *puVar4;
    __cxa_end_catch();
    FUN_033a19f0(uVar13,0);
    goto LAB_03388f54;
  }
  if (unaff_w29 != 1) {
                    /* WARNING: Subroutine does not return */
    FUN_01fbfd14();
  }
  puVar4 = (undefined8 *)__cxa_begin_catch();
  uVar13 = thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<AssetFileDeleteResult>_get_Data__);
  uVar9 = thunk_FUN_01ef6ec0(uVar13,*(undefined8 *)*puVar4);
  if ((uVar9 & 1) == 0) {
    puVar7 = (undefined8 *)__cxa_allocate_exception(8);
    *puVar7 = *puVar4;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar7,&
                       PTR_Method_System_Collections_Generic_List<OVRSkeletonRenderer_CapsuleVisualization>_get_Count___042b3198
                ,0);
  }
  uVar13 = *puVar4;
  __cxa_end_catch();
  FUN_033a19f0(uVar13,0);
  do {
    do {
      puVar3 = 
      Method_System_Text_RegularExpressions_GroupCollection_System_Collections_IList_Clear__;
      in_stack_00000008 = in_stack_00000008 + 1;
      if ((long)(int)*(uint *)(in_stack_00000000 + 0x18) <= (long)in_stack_00000008) {
        **(long **)(*(long *)
                     Method_System_Text_RegularExpressions_GroupCollection_System_Collections_IList_Clear__
                   + 0xb8) = unaff_x19;
        thunk_FUN_01f51358(*(undefined8 *)(*(long *)puVar3 + 0xb8));
        return;
      }
      if (*(uint *)(in_stack_00000000 + 0x18) <= in_stack_00000008) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a44();
      }
      plVar6 = *(long **)(in_stack_00000000 + in_stack_00000008 * 8 + 0x20);
      if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      in_stack_00000010 = (**(code **)(*plVar6 + 0x228))(plVar6,*(undefined8 *)(*plVar6 + 0x230));
      if (in_stack_00000010 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
    } while ((int)*(ulong *)(in_stack_00000010 + 0x18) < 1);
    in_stack_00000018 = 0;
    uVar9 = *(ulong *)(in_stack_00000010 + 0x18) & 0xffffffff;
    do {
      if (uVar9 <= in_stack_00000018) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a44();
      }
      unaff_x24 = *(long *)(in_stack_00000010 + in_stack_00000018 * 8 + 0x20);
      if (unaff_x24 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      in_stack_00000028 = FUN_03584e6c(unaff_x24,0);
      if (in_stack_00000028 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      if (0 < (int)*(ulong *)(in_stack_00000028 + 0x18)) {
        in_stack_00000020 = 0;
        uVar9 = *(ulong *)(in_stack_00000028 + 0x18) & 0xffffffff;
        do {
          if (uVar9 <= in_stack_00000020) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a44();
          }
          uVar14 = *(undefined8 *)(in_stack_00000028 + in_stack_00000020 * 8 + 0x20);
          uVar13 = *(undefined8 *)Method_GroupPresenceSample_<ClearPresence>b__10_1__;
          if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__ + 0xe0) ==
              0) {
            thunk_FUN_01ee6d7c();
          }
          uVar13 = FUN_03579868(uVar13,0);
          plVar6 = (long *)FUN_034b9230(uVar14,uVar13,0);
          if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          lVar15 = *plVar6;
          uVar9 = (ulong)*(ushort *)(lVar15 + 0x12e);
          if (uVar9 != 0) {
            piVar11 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
            do {
              if (*(long *)(piVar11 + -2) ==
                  *(long *)Method_UnityEngine_Rendering_DebugFrameTiming_<RegisterDebugUI>b__17_1__)
              {
                puVar4 = (undefined8 *)(lVar15 + (long)*piVar11 * 0x10 + 0x138);
                goto LAB_03388a30;
              }
              uVar9 = uVar9 - 1;
              piVar11 = piVar11 + 4;
            } while (uVar9 != 0);
          }
          puVar4 = (undefined8 *)
                   FUN_01ecb238(plVar6,*(long *)
                                        Method_UnityEngine_Rendering_DebugFrameTiming_<RegisterDebugUI>b__17_1__
                                ,0);
LAB_03388a30:
          unaff_x26 = (long *)(*(code *)*puVar4)(plVar6,puVar4[1]);
          if (unaff_x26 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
LAB_03388a44:
          lVar15 = *unaff_x26;
          uVar9 = (ulong)*(ushort *)(lVar15 + 0x12e);
          if (uVar9 != 0) {
            piVar11 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
            do {
              if (*(long *)(piVar11 + -2) == *unaff_x20) {
                puVar4 = (undefined8 *)(lVar15 + (long)*piVar11 * 0x10 + 0x138);
                goto System_Runtime_Serialization_ObjectHolder__get_ContainerID;
              }
              uVar9 = uVar9 - 1;
              piVar11 = piVar11 + 4;
            } while (uVar9 != 0);
          }
          puVar4 = (undefined8 *)FUN_01ecb238(unaff_x26,*unaff_x20,0);
System_Runtime_Serialization_ObjectHolder__get_ContainerID:
          uVar9 = (*(code *)*puVar4)(unaff_x26,puVar4[1]);
          if ((uVar9 & 1) != 0) {
            lVar15 = *unaff_x26;
            uVar9 = (ulong)*(ushort *)(lVar15 + 0x12e);
            if (uVar9 != 0) {
              piVar11 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
              do {
                if (*(long *)(piVar11 + -2) ==
                    *(long *)
                     Method_UnityEngine_Rendering_DebugFrameTiming_<RegisterDebugUI>b__17_10__) {
                  puVar4 = (undefined8 *)(lVar15 + (long)*piVar11 * 0x10 + 0x138);
                  goto LAB_03388af4;
                }
                uVar9 = uVar9 - 1;
                piVar11 = piVar11 + 4;
              } while (uVar9 != 0);
            }
            puVar4 = (undefined8 *)
                     FUN_01ecb238(unaff_x26,
                                  *(long *)
                                   Method_UnityEngine_Rendering_DebugFrameTiming_<RegisterDebugUI>b__17_10__
                                  ,0);
LAB_03388af4:
            plVar6 = (long *)(*(code *)*puVar4)(unaff_x26,puVar4[1]);
            if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a3c();
            }
            bVar1 = *(byte *)(*(long *)Method_GroupPresenceSample_<LaunchInvitePanel>b__11_0__ +
                             0x130);
            if ((*(byte *)(*plVar6 + 0x130) < bVar1) ||
               (*(long *)(*(long *)(*plVar6 + 200) + (ulong)bVar1 * 8 + -8) !=
                *(long *)Method_GroupPresenceSample_<LaunchInvitePanel>b__11_0__)) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08cfc(plVar6);
            }
            if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a3c();
            }
            lVar15 = FUN_02a8b780();
            lVar5 = thunk_FUN_01f117cc(*unaff_x21);
            FUN_035ac8e8(lVar5,0);
            if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a3c();
            }
            *(long *)(lVar5 + 0x10) = unaff_x24;
            thunk_FUN_01f51358((long *)(lVar5 + 0x10),unaff_x24);
            *(undefined8 *)(lVar5 + 0x18) = uVar14;
            thunk_FUN_01f51358((undefined8 *)(lVar5 + 0x18),uVar14);
            *(long *)(lVar5 + 0x20) = (long)plVar6;
            thunk_FUN_01f51358((long *)(lVar5 + 0x20),plVar6);
            if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a3c();
            }
            lVar8 = *(long *)(lVar15 + 0x10);
            lVar10 = *unaff_x23;
            *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) + 1;
            if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a3c();
            }
            uVar2 = *(uint *)(lVar15 + 0x18);
            if (uVar2 < *(uint *)(lVar8 + 0x18)) {
              *(uint *)(lVar15 + 0x18) = uVar2 + 1;
              plVar6 = (long *)(lVar8 + (long)(int)uVar2 * 8 + 0x20);
              *plVar6 = lVar5;
              thunk_FUN_01f51358(plVar6,lVar5);
            }
            else {
              FUN_030f2bb4(lVar15,lVar5,
                           *(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
            }
            goto LAB_03388a44;
          }
          lVar15 = 0;
          iVar12 = 0xc;
joined_r0x03388dd8:
          if (unaff_x26 != (long *)0x0) {
            lVar5 = *unaff_x26;
            uVar9 = (ulong)*(ushort *)(lVar5 + 0x12e);
            if (uVar9 != 0) {
              piVar11 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
              do {
                if (*(long *)(piVar11 + -2) ==
                    *(long *)
                     Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
                  puVar4 = (undefined8 *)(lVar5 + (long)*piVar11 * 0x10 + 0x138);
                  goto LAB_03388d00;
                }
                uVar9 = uVar9 - 1;
                piVar11 = piVar11 + 4;
              } while (uVar9 != 0);
            }
            puVar4 = (undefined8 *)
                     FUN_01ecb238(unaff_x26,
                                  *(long *)
                                   Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                                  ,0);
LAB_03388d00:
            (*(code *)*puVar4)(unaff_x26,puVar4[1]);
          }
          if (lVar15 != 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01eed990(lVar15);
          }
          if ((iVar12 != 0) && (iVar12 != 0xc)) {
            return;
          }
LAB_03388d1c:
          uVar9 = (ulong)*(uint *)(in_stack_00000028 + 0x18);
          in_stack_00000020 = in_stack_00000020 + 1;
        } while ((long)in_stack_00000020 < (long)(int)*(uint *)(in_stack_00000028 + 0x18));
      }
LAB_03388f54:
      uVar9 = (ulong)*(uint *)(in_stack_00000010 + 0x18);
      in_stack_00000018 = in_stack_00000018 + 1;
    } while ((long)in_stack_00000018 < (long)(int)*(uint *)(in_stack_00000010 + 0x18));
  } while( true );
}


