/*
FUNCTION_NAME: Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility$$CreateMarker__Unmanaged
ENTRY_POINT: 03569f60
PROGRAM: vrlegs-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Profiling_LowLevel_Unsafe_ProfilerUnsafeUtility__CreateMarker__Unmanaged(void)

{
  long lVar1;
  ulong uVar2;
  long unaff_x19;
  undefined8 *unaff_x21;
  float fVar3;
  undefined4 uStack0000000000000008;
  undefined4 uStack000000000000000c;
  undefined8 in_stack_00000010;
  undefined4 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined4 in_stack_00000030;
  undefined8 in_stack_00000038;
  
  FUN_0356ac08();
  FUN_0356ac08();
  FUN_0356ac08();
  FUN_0356ac08();
  FUN_0356ac08();
  lVar1 = unaff_x19 + 0x50;
  fVar3 = (float)FUN_03776990(lVar1,0);
  if (fVar3 == 0.0) {
    if (*(long *)(unaff_x19 + 200) == 0) goto LAB_0356a168;
    uStack0000000000000008 = 0x58;
    uVar2 = FUN_0219c130(*(long *)(unaff_x19 + 200),&stack0x00000008,*unaff_x21);
    if ((uVar2 & 1) != 0) {
      if (*(long *)(unaff_x19 + 200) == 0) goto LAB_0356a168;
      in_stack_00000038._4_4_ = 0x58;
      FUN_0219b634(*(long *)(unaff_x19 + 200),(long)&stack0x00000038 + 4,&stack0x00000008,
                   *(undefined8 *)OVRPlugin_Hand_TypeInfo);
      if ((CONCAT44(uStack000000000000000c,uStack0000000000000008) == 0) ||
         (*(long *)(unaff_x19 + 0xb8) == 0)) goto LAB_0356a168;
      in_stack_00000038._4_4_ =
           *(undefined4 *)(CONCAT44(uStack000000000000000c,uStack0000000000000008) + 0x28);
      FUN_0219b634(*(long *)(unaff_x19 + 0xb8),(long)&stack0x00000038 + 4,&stack0x00000008,
                   *(undefined8 *)Mono_CSharp_Operator_OpType_TypeInfo);
      if (CONCAT44(uStack000000000000000c,uStack0000000000000008) == 0) goto LAB_0356a168;
      FUN_03776e6c(&stack0x00000008,CONCAT44(uStack000000000000000c,uStack0000000000000008),0);
      in_stack_00000020 = CONCAT44(uStack000000000000000c,uStack0000000000000008);
      in_stack_00000028 = in_stack_00000010;
      in_stack_00000030 = in_stack_00000018;
      FUN_03776cac(&stack0x00000020,0);
      FUN_03776998(lVar1,0);
    }
  }
  fVar3 = (float)FUN_037769a0(lVar1,0);
  if (fVar3 != 0.0) {
    return;
  }
  if (*(long *)(unaff_x19 + 200) != 0) {
    uStack0000000000000008 = 0x78;
    uVar2 = FUN_0219c130(*(long *)(unaff_x19 + 200),&stack0x00000008,*unaff_x21);
    if ((uVar2 & 1) == 0) {
      return;
    }
    if (*(long *)(unaff_x19 + 200) != 0) {
      in_stack_00000038._4_4_ = 0x78;
      FUN_0219b634(*(long *)(unaff_x19 + 200),(long)&stack0x00000038 + 4,&stack0x00000008,
                   *(undefined8 *)OVRPlugin_Hand_TypeInfo);
      if ((CONCAT44(uStack000000000000000c,uStack0000000000000008) != 0) &&
         (*(long *)(unaff_x19 + 0xb8) != 0)) {
        in_stack_00000038._4_4_ =
             *(undefined4 *)(CONCAT44(uStack000000000000000c,uStack0000000000000008) + 0x28);
        FUN_0219b634(*(long *)(unaff_x19 + 0xb8),(long)&stack0x00000038 + 4,&stack0x00000008,
                     *(undefined8 *)Mono_CSharp_Operator_OpType_TypeInfo);
        if (CONCAT44(uStack000000000000000c,uStack0000000000000008) != 0) {
          FUN_03776e6c(&stack0x00000008,CONCAT44(uStack000000000000000c,uStack0000000000000008),0);
          in_stack_00000020 = CONCAT44(uStack000000000000000c,uStack0000000000000008);
          in_stack_00000028 = in_stack_00000010;
          in_stack_00000030 = in_stack_00000018;
          FUN_03776cac(&stack0x00000020,0);
          FUN_037769a8(lVar1,0);
          return;
        }
      }
    }
  }
LAB_0356a168:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


