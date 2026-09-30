/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector3f>$$AsReadOnlySpan
ENTRY_POINT: 050a4ef8
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 77
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint Unity_Collections_NativeArray<OVRPlugin_Vector3f>__AsReadOnlySpan(void)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  uint unaff_w19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  uint unaff_w24;
  int unaff_w25;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  
  do {
    FUN_03ac4090();
    do {
      in_stack_00000090 = in_stack_00000030;
      in_stack_00000088 = in_stack_00000028;
      in_stack_00000080 = in_stack_00000020;
      in_stack_00000068 = in_stack_00000048;
      in_stack_00000060 = in_stack_00000040;
      in_stack_00000070 = in_stack_00000050;
      iVar1 = (**(code **)(unaff_x22 + 0x18))
                        (*(undefined8 *)(unaff_x22 + 0x40),&stack0x00000080,&stack0x00000060,
                         *(undefined8 *)(unaff_x22 + 0x28));
      if (-1 < iVar1) {
        do {
                    /* try { // try from 050a4f38 to 051a4f8f has its CatchHandler @ 050a4f90 */
          unaff_w24 = unaff_w24 - 1;
          if (*(uint *)(unaff_x20 + 0x18) <= unaff_w24) goto LAB_050a5088;
          lVar2 = unaff_x20 + (long)(int)unaff_w24 * (long)unaff_w25;
          uVar5 = *(undefined8 *)(lVar2 + 0x28);
          uVar4 = *(undefined8 *)(lVar2 + 0x20);
          uVar3 = *(undefined8 *)(lVar2 + 0x30);
          if ((*(byte *)(*(long *)(unaff_x21 + 0x20) + 0x135) & 1) == 0) {
            FUN_03ac4090();
          }
          in_stack_00000090 = in_stack_00000050;
          in_stack_00000088 = in_stack_00000048;
          in_stack_00000080 = in_stack_00000040;
          in_stack_00000060 = uVar4;
          in_stack_00000068 = uVar5;
          in_stack_00000070 = uVar3;
          iVar1 = (**(code **)(unaff_x22 + 0x18))
                            (*(undefined8 *)(unaff_x22 + 0x40),&stack0x00000080,&stack0x00000060,
                             *(undefined8 *)(unaff_x22 + 0x28));
        } while (iVar1 < 0);
        if ((int)unaff_w24 <= (int)unaff_w19) {
          lVar2 = *(long *)(unaff_x21 + 0x20);
          if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
            lVar2 = FUN_03ac4090();
          }
          lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x48);
          if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
            lVar2 = FUN_03ac4090();
          }
          if (*(int *)(lVar2 + 0xe4) == 0) {
            thunk_FUN_03ae8be4();
          }
          if ((*(ushort *)(*(long *)(unaff_x21 + 0x20) + 0x135) & 1) == 0) {
            FUN_03ac4090();
          }
          FUN_050a4864();
          return unaff_w19;
        }
        lVar2 = *(long *)(unaff_x21 + 0x20);
        if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
          lVar2 = FUN_03ac4090();
        }
        lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x48);
        if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
          lVar2 = FUN_03ac4090();
        }
        if (*(int *)(lVar2 + 0xe4) == 0) {
          thunk_FUN_03ae8be4();
        }
        if ((*(ushort *)(*(long *)(unaff_x21 + 0x20) + 0x135) & 1) == 0) {
          FUN_03ac4090();
        }
        FUN_050a4864();
      }
      unaff_w19 = unaff_w19 + 1;
      if (*(uint *)(unaff_x20 + 0x18) <= unaff_w19) {
LAB_050a5088:
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c8();
      }
      if (unaff_x22 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      lVar2 = unaff_x20 + (long)(int)unaff_w19 * (long)unaff_w25;
      in_stack_00000028 = *(undefined8 *)(lVar2 + 0x28);
      in_stack_00000020 = *(undefined8 *)(lVar2 + 0x20);
      in_stack_00000030 = *(undefined8 *)(lVar2 + 0x30);
    } while ((*(byte *)(*(long *)(unaff_x21 + 0x20) + 0x135) & 1) != 0);
  } while( true );
}


