/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4s>$$CopySafe
ENTRY_POINT: 04a1294c
PROGRAM: vandalizer-libil2cpp.so
SCORE: 74
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint Unity_Collections_NativeArray<OVRPlugin_Vector4s>__CopySafe(void)

{
  int iVar1;
  long lVar2;
  uint unaff_w19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  uint unaff_w24;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_000000f8;
  undefined8 in_stack_00000100;
  undefined8 in_stack_00000108;
  undefined8 in_stack_00000110;
  undefined8 in_stack_00000118;
  
  do {
    FUN_0322bef4();
    do {
                    /* try { // try from 04a12950 to 04b12957 has its CatchHandler @ 04a12958 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 04a1291c with catch @ 04a12958
                       catch(type#2 @ 00000000) { ... } // from try @ 04a12950 with catch @ 04a12958
                        */
      FUN_04a12250();
      do {
        unaff_w19 = unaff_w19 + 1;
        if (*(uint *)(unaff_x20 + 0x18) <= unaff_w19) goto LAB_04a129d0;
        lVar2 = unaff_x20 + (long)(int)unaff_w19 * 0x20;
        uVar6 = *(undefined8 *)(lVar2 + 0x28);
        uVar5 = *(undefined8 *)(lVar2 + 0x20);
        uVar4 = *(undefined8 *)(lVar2 + 0x38);
        uVar3 = *(undefined8 *)(lVar2 + 0x30);
        if (unaff_x22 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_031f2390();
        }
        if ((*(byte *)(*(long *)(unaff_x21 + 0x20) + 0x135) & 1) == 0) {
          FUN_0322bef4();
        }
        in_stack_000000e8 = in_stack_000000c8;
        in_stack_000000e0 = in_stack_000000c0;
        in_stack_000000f8 = in_stack_000000d8;
        in_stack_000000f0 = in_stack_000000d0;
        in_stack_00000100 = uVar5;
        in_stack_00000108 = uVar6;
        in_stack_00000110 = uVar3;
        in_stack_00000118 = uVar4;
        iVar1 = (**(code **)(unaff_x22 + 0x18))
                          (*(undefined8 *)(unaff_x22 + 0x40),&stack0x00000100,&stack0x000000e0,
                           *(undefined8 *)(unaff_x22 + 0x28));
      } while (iVar1 < 0);
      do {
        unaff_w24 = unaff_w24 - 1;
        if (*(uint *)(unaff_x20 + 0x18) <= unaff_w24) {
LAB_04a129d0:
                    /* WARNING: Subroutine does not return */
          FUN_031f2398();
        }
        lVar2 = unaff_x20 + (long)(int)unaff_w24 * 0x20;
        uVar6 = *(undefined8 *)(lVar2 + 0x28);
        uVar5 = *(undefined8 *)(lVar2 + 0x20);
        uVar4 = *(undefined8 *)(lVar2 + 0x38);
        uVar3 = *(undefined8 *)(lVar2 + 0x30);
        if ((*(byte *)(*(long *)(unaff_x21 + 0x20) + 0x135) & 1) == 0) {
          FUN_0322bef4();
        }
        in_stack_00000108 = in_stack_000000c8;
        in_stack_00000100 = in_stack_000000c0;
        in_stack_00000118 = in_stack_000000d8;
        in_stack_00000110 = in_stack_000000d0;
        in_stack_000000e0 = uVar5;
        in_stack_000000e8 = uVar6;
        in_stack_000000f0 = uVar3;
        in_stack_000000f8 = uVar4;
        iVar1 = (**(code **)(unaff_x22 + 0x18))
                          (*(undefined8 *)(unaff_x22 + 0x40),&stack0x00000100,&stack0x000000e0,
                           *(undefined8 *)(unaff_x22 + 0x28));
      } while (iVar1 < 0);
      if ((int)unaff_w24 <= (int)unaff_w19) {
        lVar2 = *(long *)(unaff_x21 + 0x20);
        if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
          lVar2 = FUN_0322bef4();
        }
        lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x48);
        if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
          lVar2 = FUN_0322bef4();
        }
        if (*(int *)(lVar2 + 0xe4) == 0) {
          Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
        }
        if ((*(byte *)(*(long *)(unaff_x21 + 0x20) + 0x135) & 1) == 0) {
          FUN_0322bef4();
        }
        FUN_04a12250();
        return unaff_w19;
      }
      lVar2 = *(long *)(unaff_x21 + 0x20);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_0322bef4();
      }
      lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x48);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_0322bef4();
      }
      if (*(int *)(lVar2 + 0xe4) == 0) {
        Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
      }
    } while ((*(byte *)(*(long *)(unaff_x21 + 0x20) + 0x135) & 1) != 0);
  } while( true );
}


