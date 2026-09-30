/*
FUNCTION_NAME: UnityEngine.Experimental.Rendering.XRSystem$$get_foveatedRenderingCaps
ENTRY_POINT: 059e3f10
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 89
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: foveated_rendering;possible_biometrics
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;foveation_rendering;frame_behavior;structure_combo;keyword_support
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_1;strong_foveation_hits_2;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;eye_or_gaze_keyword_boost_only;negative_framework_support_context_without_confirmed_app_level_gaze_flow;framework_foveation_support_not_confirmed_dynamic_eye_tracking;cap_below_near_certain_without_eye_anchor_or_ordered_structure;functionality_foveated_rendering;functionality_possible_biometrics_hits_17
*/


undefined8
UnityEngine_Experimental_Rendering_XRSystem__get_foveatedRenderingCaps
          (undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 *unaff_x19;
  long unaff_x20;
  uint unaff_w21;
  int unaff_w22;
  int unaff_w23;
  long unaff_x24;
  void *__src;
  undefined8 uVar7;
  undefined4 unaff_w28;
  ulong uVar8;
  long *plVar9;
  undefined8 *unaff_x29;
  undefined4 uStack000000000000000c;
  long in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 uStack0000000000000060;
  undefined8 uStack0000000000000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  uint uStack00000000000000b0;
  int iStack00000000000000b4;
  undefined8 in_stack_000000f8;
  undefined8 in_stack_00000100;
  undefined8 in_stack_00000108;
  long in_stack_00000118;
  
  uStack0000000000000060 = param_2;
  uStack0000000000000068 = param_3;
  uVar2 = thunk_FUN_02d8a270(*param_1,&stack0x00000060);
  in_stack_000000a0 = 0;
  UnityEngine_Rendering_ComputeCommandBuffer__SetGlobalTexture
            (&stack0x000000a0,unaff_w22,unaff_w21,0);
  uVar3 = FUN_031d1460(uVar2,in_stack_000000a0,
                       *(undefined8 *)
                        Method_System_Net_Configuration_AuthenticationModuleElement_get_Properties__
                      );
  uVar2 = 0;
  if (((uVar3 & 1) != 0) && (in_stack_00000010 != 0)) {
    if (0 < (int)*(ulong *)(in_stack_00000010 + 0x18)) {
      uVar3 = 0;
      uVar8 = *(ulong *)(in_stack_00000010 + 0x18) & 0xffffffff;
      __src = (void *)(in_stack_00000010 + 0x20);
      uStack000000000000000c = unaff_w28;
      do {
        if (uVar8 <= uVar3) {
          if (*(long *)(unaff_x24 + 0x28) == in_stack_00000118) {
                    /* WARNING: Subroutine does not return */
            FUN_02d4def0();
          }
          goto LAB_059e45b4;
        }
        memcpy(&stack0x000000b0,__src,0x48);
        if ((uStack00000000000000b0 & 0xfffffffe) == 0x30) {
          if (iStack00000000000000b4 == 1) {
LAB_059e3fe8:
            puVar1 = PTR_DAT_066462a0;
            uVar2 = *(undefined8 *)
                     Method_System_Net_Configuration_AuthenticationModuleElementCollection__ctor__;
            if (*(int *)(*(long *)(PTR_DAT_066462a0 + 0xe0) + 0xe4) == 0) {
              thunk_FUN_02dabd98();
            }
            lVar4 = FUN_050121a8(uVar2,0);
            uVar7 = *unaff_x29;
            if ((unaff_w22 == 1) && ((unaff_w21 & 0xfffffffe) == 4)) {
              uVar7 = *(undefined8 *)
                       Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_ContainsReference<InputDevice,_InputDevice>__
              ;
              uVar2 = *(undefined8 *)
                       Method_UnityEngine_Rendering_ArrayExtensions_ResizeArray<AABB>__;
              if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
                thunk_FUN_02dabd98();
              }
              lVar4 = FUN_050121a8(uVar2,0);
            }
            uVar2 = *(undefined8 *)PTR_DAT_06646708;
            uVar3 = FUN_04e7eb78(uVar7,*(undefined8 *)
                                        Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_ContainsReference<InputDevice,_InputDevice>__
                                 ,0);
            if ((uVar3 & 1) != 0) {
              if (unaff_w22 == 1) {
                uStack0000000000000060 = CONCAT44(uStack0000000000000060._4_4_,unaff_w21);
                uVar2 = thunk_FUN_02d8a270(*(undefined8 *)
                                            Method_System_Net_Configuration_AuthenticationModuleElement_get_Type__
                                           ,&stack0x00000060);
                uVar2 = FUN_04e762a8(*(undefined8 *)PTR_DAT_06658a48,uVar2,0);
              }
              else {
                uStack0000000000000060 = CONCAT44(uStack0000000000000060._4_4_,unaff_w22);
                uVar2 = thunk_FUN_02d8a270(*(undefined8 *)
                                            Method_System_Net_Configuration_AuthenticationModuleElementCollection_Remove__
                                           ,&stack0x00000060);
                in_stack_000000a0 = CONCAT44(in_stack_000000a0._4_4_,unaff_w21);
                uVar6 = thunk_FUN_02d8a270(*(undefined8 *)(puVar1 + 0x48),&stack0x000000a0);
                uVar2 = FUN_04e80fdc(*(undefined8 *)
                                      Method_System_Net_Configuration_AuthenticationModuleElementCollection_Remove__
                                     ,uVar2,uVar6,0);
              }
            }
            plVar9 = (long *)PTR_DAT_0664b030;
            uStack0000000000000068 = unaff_x19[1];
            uStack0000000000000060 = *unaff_x19;
            in_stack_00000078 = unaff_x19[3];
            in_stack_00000070 = unaff_x19[2];
            in_stack_00000088 = unaff_x19[5];
            in_stack_00000080 = unaff_x19[4];
            in_stack_00000090 = unaff_x19[6];
            if (*(int *)(*(long *)PTR_DAT_0664b030 + 0xe4) == 0) {
              thunk_FUN_02dabd98();
            }
            in_stack_00000028 = uStack0000000000000068;
            in_stack_00000020 = uStack0000000000000060;
            in_stack_00000038 = in_stack_00000078;
            in_stack_00000030 = in_stack_00000070;
            in_stack_00000048 = in_stack_00000088;
            in_stack_00000040 = in_stack_00000080;
            in_stack_00000050 = in_stack_00000090;
            in_stack_000000f8 = FUN_059387cc(&stack0x00000020,0);
            uVar3 = FUN_04e7faf0(unaff_x19[3],0);
            if (((uVar3 & 1) == 0) && (uVar3 = FUN_04e7faf0(unaff_x19[2],0), (uVar3 & 1) == 0)) {
              lVar5 = FUN_02d4dd2c(*(undefined8 *)PTR_DAT_06646310,5);
              if (lVar5 != 0) {
                FUN_0291b630(lVar5,0,*(undefined8 *)
                                      Method_System_Net_Configuration_AuthenticationModuleElementCollection_get_Item__
                            );
                FUN_0291b630(lVar5,1,unaff_x19[2]);
                FUN_0291b630(lVar5,2,*(undefined8 *)PTR_DAT_06649130);
                FUN_0291b630(lVar5,3,unaff_x19[3]);
                FUN_0291b630(lVar5,4,uVar2);
                uVar2 = FUN_04e80ce4(lVar5,0);
                goto LAB_059e43b8;
              }
            }
            else {
              uVar3 = FUN_04e7faf0(unaff_x19[3],0);
              if ((uVar3 & 1) == 0) {
                uVar2 = FUN_04e80678(*(undefined8 *)
                                      Method_System_Net_Configuration_AuthenticationModuleElementCollection_get_Item__
                                     ,unaff_x19[3],uVar2,0);
              }
              else {
                if (unaff_w23 == 0) break;
                lVar5 = FUN_02d4dd2c(*(undefined8 *)PTR_DAT_066463a0,4);
                if (lVar5 == 0) goto LAB_059e45a0;
                FUN_0291b5fc(lVar5,*unaff_x29);
                FUN_0291b630(lVar5,0,*unaff_x29);
                uStack0000000000000060 = CONCAT44(uStack0000000000000060._4_4_,unaff_w23);
                uVar6 = thunk_FUN_02d8a270(*(undefined8 *)(PTR_DAT_066462a0 + 0x48),&stack0x00000060
                                          );
                FUN_0291b5fc(lVar5,uVar6);
                FUN_0291b630(lVar5,1,uVar6);
                in_stack_000000a0 = CONCAT44(in_stack_000000a0._4_4_,uStack000000000000000c);
                uVar6 = thunk_FUN_02d8a270(*(undefined8 *)(PTR_DAT_066462a0 + 0x48),&stack0x000000a0
                                          );
                FUN_0291b5fc(lVar5,uVar6);
                FUN_0291b630(lVar5,2,uVar6);
                FUN_0291b5fc(lVar5,uVar2);
                FUN_0291b630(lVar5,3,uVar2);
                uVar2 = FUN_04e81064(*(undefined8 *)
                                      Method_System_Net_Configuration_AuthenticationModulesSection__ctor__
                                     ,lVar5,0);
                if (*(int *)(*(long *)PTR_DAT_0664b030 + 0xe4) == 0) {
                  thunk_FUN_02dabd98(*(long *)PTR_DAT_0664b030);
                }
                puVar1 = 
                Method_System_Net_Configuration_AuthenticationModuleElementCollection_Clear__;
                in_stack_000000a8 =
                     FUN_0327c3ac(&stack0x000000f8,
                                  *(undefined8 *)
                                   Method_System_Net_Configuration_AuthenticationModuleElementCollection_RemoveAt__
                                  ,uStack000000000000000c,
                                  *(undefined8 *)
                                   Method_System_Net_Configuration_AuthenticationModuleElementCollection_Clear__
                                 );
                in_stack_000000f8 =
                     FUN_0327c3ac(&stack0x000000a8,
                                  *(undefined8 *)
                                   Method_System_Net_Configuration_AuthenticationModuleElementCollection_set_Item__
                                  ,unaff_w23,*(undefined8 *)puVar1);
                plVar9 = (long *)PTR_DAT_0664b030;
              }
LAB_059e43b8:
              if (*(int *)(*plVar9 + 0xe4) == 0) {
                thunk_FUN_02dabd98();
              }
              in_stack_000000a8 =
                   FUN_0327c3ac(&stack0x000000f8,
                                *(undefined8 *)
                                 Method_System_Runtime_Remoting_Activation_AppDomainLevelActivator_Activate__
                                ,unaff_w21,
                                *(undefined8 *)
                                 Method_System_Net_Configuration_AuthenticationModuleElementCollection_Clear__
                               );
              in_stack_000000f8 =
                   FUN_0327c464(&stack0x000000a8,
                                *(undefined8 *)
                                 Method_System_Net_Configuration_AuthenticationModuleElementCollection_get_Item__
                                ,unaff_w22,
                                *(undefined8 *)
                                 Method_System_Net_Configuration_AuthenticationModuleElementCollection_CreateNewElement__
                               );
              lVar5 = thunk_FUN_02d8a638(*(undefined8 *)
                                          Method_System_Net_Configuration_AuthenticationModuleElement_set_Type__
                                        );
              FUN_05044d4c(lVar5,0);
              if (lVar5 != 0) {
                *(undefined8 *)(lVar5 + 0x10) = unaff_x19[3];
                thunk_FUN_02dc1ef0();
                *(uint *)(lVar5 + 0x20) = unaff_w21;
                *(int *)(lVar5 + 0x24) = unaff_w22;
                *(undefined8 *)(lVar5 + 0x30) = in_stack_00000108;
                *(undefined8 *)(lVar5 + 0x28) = in_stack_00000100;
                *(int *)(lVar5 + 0x18) = unaff_w23;
                *(undefined4 *)(lVar5 + 0x1c) = uStack000000000000000c;
                *(undefined8 *)(lVar5 + 0x40) = in_stack_00000018;
                *(long *)(lVar5 + 0x38) = in_stack_00000010;
                thunk_FUN_02dc1ef0((long *)(lVar5 + 0x38),0);
                *(undefined8 *)(lVar5 + 0x48) = uVar7;
                thunk_FUN_02dc1ef0((undefined8 *)(lVar5 + 0x48),uVar7);
                if (lVar4 == 0) {
                  uVar6 = *(undefined8 *)
                           Method_System_Net_Configuration_AuthenticationModuleElementCollection__ctor__
                  ;
                  if (*(int *)(*(long *)(PTR_DAT_066462a0 + 0xe0) + 0xe4) == 0) {
                    thunk_FUN_02dabd98();
                  }
                  lVar4 = FUN_050121a8(uVar6,0);
                }
                *(long *)(lVar5 + 0x50) = lVar4;
                thunk_FUN_02dc1ef0((long *)(lVar5 + 0x50),lVar4);
                if (unaff_x20 != 0) {
                  *(long *)(unaff_x20 + 0x10) = lVar5;
                  thunk_FUN_02dc1ef0((long *)(unaff_x20 + 0x10),lVar5);
                  uVar6 = thunk_FUN_02d8a638(*(undefined8 *)
                                              Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter,_WebRequestStream_<Initialize>d__36>__
                                            );
                  FUN_04c43d20();
                  uStack0000000000000060 = 0;
                  uStack0000000000000068 = 0;
                  Unity_Properties_PropertyCollection<StylePropertyName>__get_Empty
                            (&stack0x00000060,in_stack_000000f8,
                             *(undefined8 *)
                              Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<JsonWriter_<<InternalWriteEndAsync>g__AwaitEnd_11_2>d>__
                            );
                  if (*(int *)(*(long *)PTR_DAT_0664aed0 + 0xe4) == 0) {
                    thunk_FUN_02dabd98();
                  }
                  FUN_059518bc(uVar6,uVar2,uVar7,uStack0000000000000060,uStack0000000000000068,0);
                  goto LAB_059e4558;
                }
              }
            }
LAB_059e45a0:
            if (*(long *)(unaff_x24 + 0x28) == in_stack_00000118) {
                    /* WARNING: Subroutine does not return */
              FUN_02d4dee8();
            }
            goto LAB_059e45b4;
          }
        }
        else {
          lVar4 = FUN_059e6d58(&stack0x000000b0);
          if (lVar4 != 0) goto LAB_059e3fe8;
          uVar8 = (ulong)*(uint *)(in_stack_00000010 + 0x18);
        }
        uVar3 = uVar3 + 1;
        __src = (void *)((long)__src + 0x48);
      } while ((long)uVar3 < (long)(int)uVar8);
    }
    uVar2 = 0;
  }
LAB_059e4558:
  if (*(long *)(unaff_x24 + 0x28) == in_stack_00000118) {
    return uVar2;
  }
LAB_059e45b4:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


