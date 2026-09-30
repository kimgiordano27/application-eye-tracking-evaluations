/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceDiscoveryResult>$$get_Length
ENTRY_POINT: 0276464c
PROGRAM: sharks-libil2cpp.so
SCORE: 103
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>__get_Length
               (undefined8 param_1,void *param_2,undefined8 param_3,undefined8 param_4,long param_5,
               long param_6)

{
  void *__src;
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  long unaff_x19;
  long lVar5;
  uint unaff_w22;
  uint unaff_w24;
  uint uVar6;
  undefined8 uVar7;
  code *pcVar8;
  int unaff_w27;
  long unaff_x28;
  uint unaff_w29;
  undefined8 in_stack_00000010;
  long in_stack_00000018;
  
  memcpy(&stack0x000002a0,param_2,0x50);
  iVar1 = in_stack_00000018._4_4_;
  if (in_stack_00000018 < 0) {
    iVar1 = in_stack_00000018._4_4_ + 1;
  }
  if ((int)unaff_w22 <= iVar1 >> 1) {
    do {
      uVar6 = unaff_w22 * 2;
      iVar4 = (int)unaff_x28;
      if ((int)uVar6 < in_stack_00000018._4_4_) {
        uVar2 = *(uint *)(unaff_x19 + 0x18);
        uVar3 = uVar6 + in_stack_00000010._4_4_;
        if ((uVar2 <= uVar3 - 1) ||
           (memcpy(&stack0x00000250,
                   (void *)(unaff_x19 + (long)(int)(uVar3 - 1) * (long)iVar4 + 0x20),0x50),
           uVar2 <= uVar3)) goto LAB_027648c4;
        memcpy(&stack0x00000200,(void *)(unaff_x19 + (long)(int)uVar3 * (long)iVar4 + 0x20),0x50);
        if (param_5 == 0) goto LAB_027648c8;
        memcpy(&stack0x000001b0,&stack0x00000250,0x50);
        memcpy(&stack0x00000160,&stack0x00000200,0x50);
        if ((*(byte *)(*(long *)(param_6 + 0x20) + 0x135) & 1) == 0) {
          FUN_0185daa4();
        }
        pcVar8 = *(code **)(param_5 + 0x18);
        uVar7 = *(undefined8 *)(param_5 + 0x40);
        memcpy(&stack0x00000340,&stack0x000001b0,0x50);
        memcpy(&stack0x000002f0,&stack0x00000160,0x50);
        uVar3 = (*pcVar8)(uVar7,&stack0x00000340,&stack0x000002f0,*(undefined8 *)(param_5 + 0x28));
        uVar6 = uVar6 | uVar3 >> 0x1f;
      }
      memcpy(&stack0x00000250,&stack0x000002a0,0x50);
      unaff_w29 = unaff_w27 + uVar6;
      if (*(uint *)(unaff_x19 + 0x18) <= unaff_w29) goto LAB_027648c4;
      __src = (void *)(unaff_x19 + (long)(int)unaff_w29 * (long)iVar4 + 0x20);
      memcpy(&stack0x00000200,__src,0x50);
      if (param_5 == 0) {
LAB_027648c8:
                    /* WARNING: Subroutine does not return */
        FUN_017fc5a8();
      }
      memcpy(&stack0x00000110,&stack0x00000250,0x50);
      memcpy(&stack0x000000c0,&stack0x00000200,0x50);
      if ((*(byte *)(*(long *)(param_6 + 0x20) + 0x135) & 1) == 0) {
        FUN_0185daa4();
      }
      pcVar8 = *(code **)(param_5 + 0x18);
      uVar7 = *(undefined8 *)(param_5 + 0x40);
      memcpy(&stack0x00000340,&stack0x00000110,0x50);
      memcpy(&stack0x000002f0,&stack0x000000c0,0x50);
      iVar4 = (*pcVar8)(uVar7,&stack0x00000340,&stack0x000002f0,*(undefined8 *)(param_5 + 0x28));
      if (-1 < iVar4) {
        unaff_w29 = unaff_w27 + unaff_w22;
        break;
      }
      uVar3 = *(uint *)(unaff_x19 + 0x18);
      if (uVar3 <= unaff_w29) goto LAB_027648c4;
      memcpy(&stack0x00000070,__src,0x50);
      if (uVar3 <= unaff_w27 + unaff_w22) goto LAB_027648c4;
      lVar5 = unaff_x19 + (int)(unaff_w27 + unaff_w22) * unaff_x28;
      memcpy((void *)(lVar5 + 0x20),&stack0x00000070,0x50);
      thunk_FUN_0188fd20(lVar5 + 0x28,0);
      unaff_w22 = uVar6;
    } while ((int)uVar6 <= iVar1 >> 1);
    unaff_w24 = *(uint *)(unaff_x19 + 0x18);
  }
  memcpy(&stack0x00000020,&stack0x000002a0,0x50);
  if (unaff_w29 < unaff_w24) {
    lVar5 = unaff_x19 + (long)(int)unaff_w29 * 0x50;
    memcpy((void *)(lVar5 + 0x20),&stack0x00000020,0x50);
    thunk_FUN_0188fd20(lVar5 + 0x28,0);
    return;
  }
LAB_027648c4:
                    /* WARNING: Subroutine does not return */
  FUN_017fc5b0();
}


