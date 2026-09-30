/*
FUNCTION_NAME: UnityEngine.Rendering.Universal.Internal.DeferredLights$$SetupMatrixConstants
ENTRY_POINT: 058a46a0
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 73
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;frame_behavior
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_2;frame_or_lifecycle_behavior;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_1
*/


void UnityEngine_Rendering_Universal_Internal_DeferredLights__SetupMatrixConstants(void)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined1 in_ZR;
  bool bVar4;
  bool bVar5;
  long lVar6;
  ulong uVar7;
  char cVar8;
  byte bVar9;
  int in_w8;
  undefined4 uVar10;
  undefined4 uVar11;
  int in_w9;
  int in_w10;
  ulong unaff_x19;
  int unaff_w20;
  undefined4 *puVar12;
  ulong unaff_x22;
  undefined8 *unaff_x23;
  int unaff_w24;
  long *unaff_x25;
  long unaff_x26;
  ulong uVar13;
  undefined4 unaff_w27;
  undefined8 unaff_x28;
  char *unaff_x29;
  undefined1 auVar14 [16];
  long in_stack_00000010;
  ulong in_stack_00000018;
  undefined8 in_stack_00000020;
  ulong in_stack_00000028;
  uint uStack0000000000000030;
  undefined4 uStack0000000000000034;
  ulong in_stack_00000038;
  long in_stack_00000040;
  undefined8 in_stack_00000118;
  
  do {
    if (unaff_w20 < in_w10 + in_w9) {
      if (!(bool)in_ZR && unaff_w24 == in_w8) {
        cVar8 = unaff_x29[0x2d];
        if (unaff_x29[0x2e] != '\0') goto LAB_058a4704;
        if (cVar8 == '\0') {
          uVar10 = 2;
        }
        else {
          if (*(char *)(unaff_x26 + 0x2c0) != '\0') {
            if (*(int *)(*(long *)
                          Method_OVRTaskBuilder<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>>_Start<OVRSpatialAnchor_<LoadUnboundSharedAnchorsAsync>d__63>__
                        + 0xe4) == 0) {
              thunk_FUN_02b9ad44();
            }
            if (*(int *)(unaff_x26 + 0x294) == 0) goto LAB_058a46bc;
          }
          uVar10 = 1;
        }
      }
      else {
LAB_058a46bc:
        uVar10 = 3;
      }
    }
    else {
      if (!(bool)in_ZR && unaff_w24 == in_w8) {
        bVar4 = unaff_x29[0x2d] == '\0';
        bVar9 = unaff_x29[0x2e] ^ 1;
      }
      else {
        bVar4 = false;
        bVar9 = 0;
      }
      bVar5 = bVar9 != 0;
      if (*(long *)(in_stack_00000040 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      in_stack_00000018 = in_stack_00000018 & 0xffffffff00000000 | (ulong)*(uint *)(unaff_x23 + 1);
      auVar14 = FUN_058abf08(*(long *)(in_stack_00000040 + 0x30),*unaff_x23,in_stack_00000018,0);
      puVar12 = auVar14._0_8_;
      if (0 < auVar14._8_4_) {
        uVar13 = auVar14._8_8_ & 0xffffffff;
        do {
          if (*(long *)(in_stack_00000040 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02b3cac4();
          }
          lVar6 = FUN_03ab2128(*(long *)(in_stack_00000040 + 0x30) + 0x18,*puVar12,
                               *(undefined8 *)
                                Method_System_Nullable<NativeArray<ShaderTagId>>_GetHashCode__);
          unaff_x22 = unaff_x22 & 0xffffffff00000000 | (ulong)*(uint *)(unaff_x23 + 1);
          uVar7 = FUN_058abd20(lVar6,*unaff_x23,unaff_x22,*(undefined8 *)(in_stack_00000040 + 0x30),
                               0);
          if (*(int *)(lVar6 + 4) == 1) {
            uVar11 = 0;
            bVar5 = unaff_x29[0x2e] == '\0';
            uVar10 = 1;
            if (bVar5) {
              uVar10 = 2;
            }
            goto LAB_058a4824;
          }
          if ((uVar7 & 1) == 0) {
            bVar5 = (bool)(unaff_x29[0x2e] == '\0' | bVar5);
            bVar4 = (bool)(unaff_x29[0x2e] != '\0' | bVar4);
          }
          else {
            bVar4 = true;
          }
          uVar13 = uVar13 - 1;
          puVar12 = puVar12 + 2;
        } while (uVar13 != 0);
      }
      uVar11 = 0;
      if (!bVar4) {
        uVar11 = 3;
      }
      uVar10 = 1;
      if ((bool)(bVar4 & bVar5)) {
        uVar10 = 2;
      }
LAB_058a4824:
      unaff_x25 = (long *)
                  Method_OVRTaskBuilder<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>>_Start<OVRSpatialAnchor_<LoadUnboundSharedAnchorsAsync>d__62>__
      ;
      unaff_x26 = in_stack_00000010;
      if (!bVar5) {
        uVar10 = uVar11;
      }
    }
LAB_058a483c:
    do {
      while( true ) {
        in_stack_00000028 = in_stack_00000028 & 0xffffffff00000000 | unaff_x19;
        FUN_058ac08c(&stack0x00000120,unaff_x28,in_stack_00000028,uStack0000000000000030,uVar10,
                     unaff_x29[0x14],uStack0000000000000034,unaff_w27);
        if (*(int *)(*(long *)
                      Method_OVRTaskBuilder<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>>_Start<OVRSpatialAnchor_<LoadUnboundSharedAnchorsAsync>d__63>__
                    + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        FUN_0499dac0(unaff_x26 + 0x194,&stack0x00000120,
                     *(undefined8 *)
                      Method_OVRTaskBuilder<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRAnchor_FetchResult>>_get_Task__
                    );
        in_stack_00000020._4_4_ = in_stack_00000020._4_4_ + 1;
        memcpy(&stack0x0000005c,(void *)(unaff_x26 + 0xd0),0xc4);
        if (*(int *)(*unaff_x25 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        if (in_stack_00000118._4_4_ <= in_stack_00000020._4_4_) {
          FUN_05814cd4(&stack0x0000014c,0);
          return;
        }
        memcpy(&stack0x0000005c,(void *)(unaff_x26 + 0xd0),0xc4);
        if (*(int *)(*unaff_x25 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        unaff_x23 = (undefined8 *)
                    FUN_0499dea4(&stack0x0000005c,in_stack_00000020._4_4_,
                                 *(undefined8 *)
                                  Method_OVRTaskBuilder<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>>_AwaitOnCompleted<OVRTask_Awaiter<OVRPlugin_Result>,_OVRSpatialAnchor_<LoadUnboundSharedAnchorsAsync>d__62>__
                                );
        if (*(long *)(in_stack_00000040 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3cac4();
        }
        unaff_x19 = (ulong)*(uint *)(unaff_x23 + 1);
        uVar2 = *(uint *)((long)unaff_x23 + 0xc);
        uStack0000000000000034 = *(undefined4 *)(unaff_x23 + 2);
        unaff_w27 = *(undefined4 *)((long)unaff_x23 + 0x14);
        unaff_x28 = *unaff_x23;
        in_stack_00000038 = in_stack_00000038 & 0xffffffff00000000 | unaff_x19;
        unaff_x29 = (char *)FUN_058ab2a4(*(long *)(in_stack_00000040 + 0x30),unaff_x28,
                                         in_stack_00000038,0);
        cVar8 = *unaff_x29;
        unaff_w20 = *(int *)(unaff_x29 + 8);
        uVar3 = *(uint *)((long)unaff_x23 + 0xc);
        iVar1 = *(int *)(unaff_x26 + 0x29c) + 1;
        if (((uVar2 & 6) != 2) && ((uVar3 & 1) == 0)) break;
        if (*(int *)(unaff_x26 + 0x298) <= *(int *)(unaff_x29 + 0x10)) {
          if (cVar8 == '\0') {
            uStack0000000000000030 = 1;
          }
          else {
            uStack0000000000000030 = (uint)(byte)unaff_x29[0x2c];
          }
          goto LAB_058a4658;
        }
        uStack0000000000000030 = 0;
        uVar10 = 0;
        if (unaff_w20 < iVar1) {
          uVar10 = 3;
        }
        if ((uVar3 >> 1 & 1) != 0) goto LAB_058a4664;
      }
      uStack0000000000000030 = 2;
LAB_058a4658:
      uVar10 = 3;
    } while ((uVar3 >> 1 & 1) == 0);
LAB_058a4664:
    if (*(int *)(unaff_x26 + 0x2b8) < 2) {
      uVar10 = 0;
      if (unaff_w20 < iVar1) {
        uVar10 = 3;
      }
      if ((cVar8 != '\0') && (unaff_w20 < iVar1)) {
        cVar8 = unaff_x29[0x2d];
LAB_058a4704:
        uVar10 = 0;
        if (cVar8 != '\0') {
          uVar10 = 3;
        }
      }
      goto LAB_058a483c;
    }
    unaff_w24 = *(int *)(unaff_x29 + 0x28);
    if (*(int *)(*(long *)PTR_DAT_06322b80 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    in_w8 = *(int *)((long)unaff_x23 + 4);
    in_w9 = *(int *)(unaff_x26 + 0x298);
    in_ZR = cVar8 == '\0';
    in_w10 = *(int *)(unaff_x26 + 0x2a0);
  } while( true );
}


