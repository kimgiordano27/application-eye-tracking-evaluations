/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceDiscoveryResult>$$set_Item
ENTRY_POINT: 027646b8
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


void Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>__set_Item
               (undefined1 *param_1,void *param_2)

{
  void *__src;
  uint uVar1;
  uint uVar2;
  int iVar3;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  uint unaff_w22;
  long lVar4;
  uint unaff_w24;
  uint unaff_w25;
  undefined8 uVar5;
  uint unaff_w26;
  code *pcVar6;
  int unaff_w27;
  int iVar7;
  long unaff_x28;
  uint uVar8;
  undefined8 in_stack_00000010;
  int iStack0000000000000018;
  int iStack000000000000001c;
  
  while (memcpy(param_1,param_2,0x50), unaff_w25 < unaff_w26) {
    iVar7 = (int)unaff_x28;
    memcpy(&stack0x00000200,(void *)(unaff_x19 + (long)(int)unaff_w25 * (long)iVar7 + 0x20),0x50);
    if (unaff_x21 == 0) {
LAB_027648c8:
                    /* WARNING: Subroutine does not return */
      FUN_017fc5a8();
    }
    memcpy(&stack0x000001b0,&stack0x00000250,0x50);
    memcpy(&stack0x00000160,&stack0x00000200,0x50);
    if ((*(byte *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
      FUN_0185daa4();
    }
    pcVar6 = *(code **)(unaff_x21 + 0x18);
    uVar5 = *(undefined8 *)(unaff_x21 + 0x40);
    memcpy(&stack0x00000340,&stack0x000001b0,0x50);
    memcpy(&stack0x000002f0,&stack0x00000160,0x50);
    uVar2 = (*pcVar6)(uVar5,&stack0x00000340,&stack0x000002f0,*(undefined8 *)(unaff_x21 + 0x28));
    unaff_w24 = unaff_w24 | uVar2 >> 0x1f;
    uVar2 = unaff_w22;
    do {
      unaff_w22 = unaff_w24;
      memcpy(&stack0x00000250,&stack0x000002a0,0x50);
      uVar8 = unaff_w27 + unaff_w22;
      if (*(uint *)(unaff_x19 + 0x18) <= uVar8) goto LAB_027648c4;
      __src = (void *)(unaff_x19 + (long)(int)uVar8 * (long)iVar7 + 0x20);
      memcpy(&stack0x00000200,__src,0x50);
      if (unaff_x21 == 0) goto LAB_027648c8;
      memcpy(&stack0x00000110,&stack0x00000250,0x50);
      memcpy(&stack0x000000c0,&stack0x00000200,0x50);
      if ((*(byte *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
        FUN_0185daa4();
      }
      pcVar6 = *(code **)(unaff_x21 + 0x18);
      uVar5 = *(undefined8 *)(unaff_x21 + 0x40);
      memcpy(&stack0x00000340,&stack0x00000110,0x50);
      memcpy(&stack0x000002f0,&stack0x000000c0,0x50);
      iVar3 = (*pcVar6)(uVar5,&stack0x00000340,&stack0x000002f0,*(undefined8 *)(unaff_x21 + 0x28));
      if (-1 < iVar3) {
        uVar8 = unaff_w27 + uVar2;
LAB_02764860:
        uVar2 = *(uint *)(unaff_x19 + 0x18);
        memcpy(&stack0x00000020,&stack0x000002a0,0x50);
        if (uVar8 < uVar2) {
          lVar4 = unaff_x19 + (long)(int)uVar8 * 0x50;
          memcpy((void *)(lVar4 + 0x20),&stack0x00000020,0x50);
          thunk_FUN_0188fd20(lVar4 + 0x28,0);
          return;
        }
        goto LAB_027648c4;
      }
      uVar1 = *(uint *)(unaff_x19 + 0x18);
      if (uVar1 <= uVar8) goto LAB_027648c4;
      memcpy(&stack0x00000070,__src,0x50);
      if (uVar1 <= unaff_w27 + uVar2) goto LAB_027648c4;
      lVar4 = unaff_x19 + (int)(unaff_w27 + uVar2) * unaff_x28;
      memcpy((void *)(lVar4 + 0x20),&stack0x00000070,0x50);
      thunk_FUN_0188fd20(lVar4 + 0x28,0);
      if (iStack0000000000000018 < (int)unaff_w22) goto LAB_02764860;
      unaff_w24 = unaff_w22 * 2;
      uVar2 = unaff_w22;
    } while (iStack000000000000001c <= (int)unaff_w24);
    unaff_w26 = *(uint *)(unaff_x19 + 0x18);
    unaff_w25 = unaff_w24 + in_stack_00000010._4_4_;
    if (unaff_w26 <= unaff_w25 - 1) break;
    param_2 = (void *)(unaff_x19 + (long)(int)(unaff_w25 - 1) * (long)iVar7 + 0x20);
    param_1 = &stack0x00000250;
  }
LAB_027648c4:
                    /* WARNING: Subroutine does not return */
  FUN_017fc5b0();
}


