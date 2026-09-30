/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.Cursor$$.ctor
ENTRY_POINT: 014540c8
PROGRAM: Lovesick-libil2cpp.so
SCORE: 95
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_2;validity_or_gating_hits_12;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_3
*/


/* WARNING: Removing unreachable block (ram,0x014542e8) */
/* WARNING: Removing unreachable block (ram,0x014542f0) */
/* WARNING: Removing unreachable block (ram,0x014542f8) */
/* WARNING: Removing unreachable block (ram,0x01454300) */
/* WARNING: Removing unreachable block (ram,0x01454348) */
/* WARNING: Removing unreachable block (ram,0x01454350) */
/* WARNING: Removing unreachable block (ram,0x01454360) */
/* WARNING: Removing unreachable block (ram,0x0145436c) */
/* WARNING: Removing unreachable block (ram,0x0145437c) */
/* WARNING: Removing unreachable block (ram,0x01454388) */
/* WARNING: Removing unreachable block (ram,0x01454398) */
/* WARNING: Removing unreachable block (ram,0x014543a4) */

long * Meta_XR_ImmersiveDebugger_UserInterface_Generic_Cursor___ctor(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  int unaff_w19;
  long unaff_x20;
  long unaff_x21;
  undefined8 in_stack_00000018;
  long in_stack_00000028;
  
  thunk_FUN_00d48444(*(undefined8 *)(param_1 + 0xcd8));
  thunk_FUN_00d48444(Method_OVRTaskBuilder<OVRPlugin_Result>_SetStateMachine__);
  thunk_FUN_00d48444(System_Collections_Generic_List<StyleSheet>_TypeInfo);
  thunk_FUN_00d48444(StringLiteral_302);
  thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vmaxnmv_f32__);
  thunk_FUN_00d48444(PTR_DAT_033ee2d8);
  thunk_FUN_00d48444(Method_Obi_ObiNativeList<TriangleMeshHeader>__ctor__);
  thunk_FUN_00d48444(System_Collections_Generic_Dictionary<int,_RTHandle[]>_TypeInfo);
  *(undefined1 *)(unaff_x21 + 0xa7f) = 1;
  puVar3 = Method_UnityEngine_Rendering_VolumeParameter<AnimationCurve>__ctor__;
  puVar2 = System_Collections_Generic_List<StyleSheet>_TypeInfo;
  puVar1 = System_Collections_Generic_Dictionary<int,_RTHandle[]>_TypeInfo;
  if (3 < unaff_w19) {
    if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    FUN_02660dac(*(undefined8 *)puVar1,0);
  }
  plVar4 = (long *)FUN_00da4fb8(*(undefined8 *)puVar3,1);
  lVar5 = FUN_00da4fb8(*(undefined8 *)puVar2,1);
  if (unaff_x20 != 0) {
    in_stack_00000018 = 0;
    FUN_01435968(&stack0x00000018,*(undefined4 *)(unaff_x20 + 0x18),0);
    puVar1 = Method_OVRTaskBuilder<OVRPlugin_Result>_SetStateMachine__;
    if (lVar5 != 0) {
      if (*(int *)(lVar5 + 0x18) != 0) {
        *(undefined8 *)(lVar5 + 0x20) = in_stack_00000018;
        lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
        if ((lVar6 == 0) || (FUN_01435978(lVar6,lVar5,0), plVar4 == (long *)0x0)) goto LAB_014543b4;
        lVar5 = thunk_FUN_00d6225c(lVar6,*(undefined8 *)(*plVar4 + 0x40));
        puVar1 = Method_Obi_ObiNativeList<TriangleMeshHeader>__ctor__;
        if (lVar5 == 0) {
          uVar7 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
          FUN_00da5038(uVar7,0);
        }
        if ((int)plVar4[3] != 0) {
          plVar4[4] = lVar6;
          uVar7 = FUN_00da4fb8(*(undefined8 *)puVar1,1);
          *(undefined8 *)(lVar6 + 0x20) = uVar7;
          if ((int)plVar4[3] != 0) {
            lVar5 = plVar4[4];
            uVar7 = FUN_00da4fb8(*(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vmaxnmv_f32__
                                 ,1);
            if (lVar5 != 0) {
              *(undefined8 *)(lVar5 + 0x30) = uVar7;
              if ((int)plVar4[3] == 0) goto LAB_014543b8;
              if (plVar4[4] != 0) {
                lVar5 = *(long *)(plVar4[4] + 0x20);
                FUN_0268834c(0,0,0x3f800000,0x3f800000);
                if (lVar5 != 0) {
                  if (*(int *)(lVar5 + 0x18) == 0) goto LAB_014543b8;
                  *(undefined8 *)(lVar5 + 0x28) = 0;
                  *(undefined8 *)(lVar5 + 0x20) = 0;
                  if (((*(long *)(unaff_x20 + 0x58) != 0) &&
                      (FUN_0132138c(*(long *)(unaff_x20 + 0x58),0,&stack0x00000028,
                                    *(undefined8 *)PTR_DAT_033ee2d8), in_stack_00000028 != 0)) &&
                     (*(long *)(in_stack_00000028 + 0x10) != 0)) {
                    if (*(long *)(*(long *)(in_stack_00000028 + 0x10) + 0x18) == 0) {
                      if ((int)plVar4[3] == 0) goto LAB_014543b8;
                      lVar5 = plVar4[4];
                      if (lVar5 != 0) {
                        *(undefined8 *)(lVar5 + 0x10) = 0x1000000010;
                        *(undefined4 *)(lVar5 + 0x18) = 0x10;
                        *(undefined4 *)(lVar5 + 0x1c) = 0x10;
                        return plVar4;
                      }
                    }
                    else if (*(long *)(unaff_x20 + 0x58) != 0) {
                      FUN_0132138c(*(long *)(unaff_x20 + 0x58),0);
                    }
                  }
                }
              }
            }
            goto LAB_014543b4;
          }
        }
      }
LAB_014543b8:
                    /* WARNING: Subroutine does not return */
      FUN_00da5194();
    }
  }
LAB_014543b4:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


