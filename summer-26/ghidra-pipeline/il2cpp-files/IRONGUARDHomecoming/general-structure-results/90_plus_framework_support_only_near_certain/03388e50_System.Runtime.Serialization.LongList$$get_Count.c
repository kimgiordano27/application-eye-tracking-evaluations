/*
FUNCTION_NAME: System.Runtime.Serialization.LongList$$get_Count
ENTRY_POINT: 03388e50
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 97
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;ui_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_5;validity_or_gating_hits_14;strong_pose_or_ray_construction_hits_6;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_3;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;negative_system_io_serialization_or_json_helper_without_gaze_flow;functionality_gaze_interaction_hits_3
*/


/* WARNING: Removing unreachable block (ram,0x03388864) */
/* WARNING: Removing unreachable block (ram,0x03388d44) */

void System_Runtime_Serialization_LongList__get_Count(void)

{
  byte bVar1;
  uint uVar2;
  undefined *puVar3;
  bool in_ZR;
  long *plVar4;
  long *plVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined8 *puVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  int *piVar14;
  long unaff_x19;
  long *unaff_x20;
  undefined8 *unaff_x21;
  long *unaff_x23;
  long unaff_x24;
  undefined8 uVar15;
  int unaff_w29;
  long in_stack_00000000;
  ulong in_stack_00000008;
  long in_stack_00000010;
  ulong in_stack_00000018;
  ulong in_stack_00000020;
  long in_stack_00000028;
  
  if (!in_ZR) {
    if (unaff_w29 == 1) {
      puVar7 = (undefined8 *)__cxa_begin_catch();
      uVar8 = thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<AssetFileDeleteResult>_get_Data__);
      uVar9 = thunk_FUN_01ef6ec0(uVar8,*(undefined8 *)*puVar7);
      if ((uVar9 & 1) != 0) {
        uVar8 = *puVar7;
        __cxa_end_catch();
        FUN_033a19f0(uVar8,0);
        goto LAB_03388f54;
      }
      puVar10 = (undefined8 *)__cxa_allocate_exception(8);
      *puVar10 = *puVar7;
                    /* WARNING: Subroutine does not return */
      __cxa_throw(puVar10,&
                          PTR_Method_System_Collections_Generic_List<OVRSkeletonRenderer_CapsuleVisualization>_get_Count___042b3198
                  ,0);
    }
    if (unaff_w29 != 1) {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 033890a4 with catch @ 033890b0
                        */
                    /* WARNING: Subroutine does not return */
      FUN_01fbfd14();
    }
    puVar7 = (undefined8 *)__cxa_begin_catch();
    uVar8 = thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<AssetFileDeleteResult>_get_Data__);
    uVar9 = thunk_FUN_01ef6ec0(uVar8,*(undefined8 *)*puVar7);
    if ((uVar9 & 1) != 0) {
      uVar8 = *puVar7;
      __cxa_end_catch();
      FUN_033a19f0(uVar8,0);
      goto LAB_03388f68;
    }
    puVar10 = (undefined8 *)__cxa_allocate_exception(8);
    *puVar10 = *puVar7;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar10,&
                        PTR_Method_System_Collections_Generic_List<OVRSkeletonRenderer_CapsuleVisualization>_get_Count___042b3198
                ,0);
  }
  puVar7 = (undefined8 *)__cxa_begin_catch();
  uVar8 = thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<AssetFileDeleteResult>_get_Data__);
  uVar9 = thunk_FUN_01ef6ec0(uVar8,*(undefined8 *)*puVar7);
  if ((uVar9 & 1) == 0) {
    puVar10 = (undefined8 *)__cxa_allocate_exception(8);
    *puVar10 = *puVar7;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar10,&
                        PTR_Method_System_Collections_Generic_List<OVRSkeletonRenderer_CapsuleVisualization>_get_Count___042b3198
                ,0);
  }
  uVar8 = *puVar7;
  __cxa_end_catch();
  FUN_033a19f0(uVar8,0);
  do {
    do {
      uVar9 = (ulong)*(uint *)(in_stack_00000028 + 0x18);
      in_stack_00000020 = in_stack_00000020 + 1;
      if ((long)(int)*(uint *)(in_stack_00000028 + 0x18) <= (long)in_stack_00000020) {
LAB_03388f54:
        do {
          uVar9 = (ulong)*(uint *)(in_stack_00000010 + 0x18);
          in_stack_00000018 = in_stack_00000018 + 1;
          if ((long)(int)*(uint *)(in_stack_00000010 + 0x18) <= (long)in_stack_00000018) {
LAB_03388f68:
            do {
              puVar3 = 
              Method_System_Text_RegularExpressions_GroupCollection_System_Collections_IList_Clear__
              ;
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
              plVar4 = *(long **)(in_stack_00000000 + in_stack_00000008 * 8 + 0x20);
              if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01f08a3c();
              }
              in_stack_00000010 =
                   (**(code **)(*plVar4 + 0x228))(plVar4,*(undefined8 *)(*plVar4 + 0x230));
              if (in_stack_00000010 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_01f08a3c();
              }
            } while ((int)*(ulong *)(in_stack_00000010 + 0x18) < 1);
            in_stack_00000018 = 0;
            uVar9 = *(ulong *)(in_stack_00000010 + 0x18) & 0xffffffff;
          }
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
        } while ((int)*(ulong *)(in_stack_00000028 + 0x18) < 1);
        in_stack_00000020 = 0;
        uVar9 = *(ulong *)(in_stack_00000028 + 0x18) & 0xffffffff;
      }
      if (uVar9 <= in_stack_00000020) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a44();
      }
      uVar15 = *(undefined8 *)(in_stack_00000028 + in_stack_00000020 * 8 + 0x20);
      uVar8 = *(undefined8 *)Method_GroupPresenceSample_<ClearPresence>b__10_1__;
      if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__ + 0xe0) == 0)
      {
        thunk_FUN_01ee6d7c();
      }
      uVar8 = FUN_03579868(uVar8,0);
      plVar4 = (long *)FUN_034b9230(uVar15,uVar8,0);
      if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar11 = *plVar4;
      uVar9 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar9 != 0) {
        piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) ==
              *(long *)Method_UnityEngine_Rendering_DebugFrameTiming_<RegisterDebugUI>b__17_1__) {
            puVar7 = (undefined8 *)(lVar11 + (long)*piVar14 * 0x10 + 0x138);
            goto LAB_03388a30;
          }
          uVar9 = uVar9 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar9 != 0);
      }
      puVar7 = (undefined8 *)
               FUN_01ecb238(plVar4,*(long *)
                                    Method_UnityEngine_Rendering_DebugFrameTiming_<RegisterDebugUI>b__17_1__
                            ,0);
LAB_03388a30:
      plVar4 = (long *)(*(code *)*puVar7)(plVar4,puVar7[1]);
      if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
LAB_03388a44:
      lVar11 = *plVar4;
      uVar9 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar9 != 0) {
        piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == *unaff_x20) {
            puVar7 = (undefined8 *)(lVar11 + (long)*piVar14 * 0x10 + 0x138);
            goto System_Runtime_Serialization_ObjectHolder__get_ContainerID;
          }
          uVar9 = uVar9 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar9 != 0);
      }
      puVar7 = (undefined8 *)FUN_01ecb238(plVar4,*unaff_x20,0);
System_Runtime_Serialization_ObjectHolder__get_ContainerID:
      uVar9 = (*(code *)*puVar7)(plVar4,puVar7[1]);
      if ((uVar9 & 1) != 0) {
        lVar11 = *plVar4;
        uVar9 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar9 != 0) {
          piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) ==
                *(long *)Method_UnityEngine_Rendering_DebugFrameTiming_<RegisterDebugUI>b__17_10__)
            {
              puVar7 = (undefined8 *)(lVar11 + (long)*piVar14 * 0x10 + 0x138);
              goto LAB_03388af4;
            }
            uVar9 = uVar9 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar9 != 0);
        }
        puVar7 = (undefined8 *)
                 FUN_01ecb238(plVar4,*(long *)
                                      Method_UnityEngine_Rendering_DebugFrameTiming_<RegisterDebugUI>b__17_10__
                              ,0);
LAB_03388af4:
        plVar5 = (long *)(*(code *)*puVar7)(plVar4,puVar7[1]);
        if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        bVar1 = *(byte *)(*(long *)Method_GroupPresenceSample_<LaunchInvitePanel>b__11_0__ + 0x130);
        if ((*(byte *)(*plVar5 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*plVar5 + 200) + (ulong)bVar1 * 8 + -8) !=
            *(long *)Method_GroupPresenceSample_<LaunchInvitePanel>b__11_0__)) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08cfc(plVar5);
        }
        if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        lVar11 = FUN_02a8b780();
        lVar6 = thunk_FUN_01f117cc(*unaff_x21);
        FUN_035ac8e8(lVar6,0);
        if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        *(long *)(lVar6 + 0x10) = unaff_x24;
        thunk_FUN_01f51358((long *)(lVar6 + 0x10),unaff_x24);
        *(undefined8 *)(lVar6 + 0x18) = uVar15;
        thunk_FUN_01f51358((undefined8 *)(lVar6 + 0x18),uVar15);
        *(long *)(lVar6 + 0x20) = (long)plVar5;
        thunk_FUN_01f51358((long *)(lVar6 + 0x20),plVar5);
        if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        lVar12 = *(long *)(lVar11 + 0x10);
        lVar13 = *unaff_x23;
        *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
        if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        uVar2 = *(uint *)(lVar11 + 0x18);
        if (uVar2 < *(uint *)(lVar12 + 0x18)) {
          *(uint *)(lVar11 + 0x18) = uVar2 + 1;
          plVar5 = (long *)(lVar12 + (long)(int)uVar2 * 8 + 0x20);
          *plVar5 = lVar6;
          thunk_FUN_01f51358(plVar5,lVar6);
        }
        else {
          FUN_030f2bb4(lVar11,lVar6,
                       *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
        }
        goto LAB_03388a44;
      }
    } while (plVar4 == (long *)0x0);
    lVar11 = *plVar4;
    uVar9 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar9 != 0) {
      piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar7 = (undefined8 *)(lVar11 + (long)*piVar14 * 0x10 + 0x138);
          goto LAB_03388d00;
        }
        uVar9 = uVar9 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar9 != 0);
    }
    puVar7 = (undefined8 *)
             FUN_01ecb238(plVar4,*(long *)
                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                          ,0);
LAB_03388d00:
    (*(code *)*puVar7)(plVar4,puVar7[1]);
  } while( true );
}


