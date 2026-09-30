/*
FUNCTION_NAME: System.Array$$InternalArray__get_Item<OVRPlugin.VirtualKeyboardModelAnimationState>
ENTRY_POINT: 0102ebb4
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint System_Array__InternalArray__get_Item<OVRPlugin_VirtualKeyboardModelAnimationState>(void)

{
  long *plVar1;
  long lVar2;
  int iVar3;
  char *__dest;
  long unaff_x19;
  long lVar4;
  ulong unaff_x20;
  undefined8 *unaff_x21;
  char *pcVar5;
  size_t unaff_x22;
  ulong uVar6;
  char *unaff_x23;
  undefined8 *puVar7;
  void *unaff_x24;
  undefined8 *puVar8;
  long unaff_x26;
  long unaff_x27;
  long unaff_x28;
  long unaff_x29;
  undefined8 in_stack_00000000;
  void *in_stack_00000008;
  char *in_stack_00000010;
  ulong in_stack_00000018;
  size_t in_stack_00000020;
  void *in_stack_00000028;
  int iStack0000000000000030;
  void *in_stack_00000038;
  char *in_stack_00000040;
  undefined8 in_stack_00000048;
  
  do {
    if (unaff_x22 != 0) goto LAB_0102ebdc;
    while( true ) {
      *(undefined1 *)((long)unaff_x24 + unaff_x22) = 0;
      FUN_00ff180c(&stack0x00000030,&stack0x00000018);
      if ((in_stack_00000018 & 1) != 0) {
        operator_delete(in_stack_00000028);
      }
      uVar6 = (ulong)_iStack0000000000000030 >> 1 & 0x7f;
      if (((ulong)_iStack0000000000000030 & 1) != 0) {
        uVar6 = (ulong)in_stack_00000038;
      }
      __dest = calloc(uVar6 + 1,1);
      *(char **)(unaff_x27 + unaff_x20 * unaff_x26 + 8) = __dest;
      pcVar5 = in_stack_00000010;
      if (((ulong)_iStack0000000000000030 & 1) != 0) {
        pcVar5 = in_stack_00000040;
      }
      strcpy(__dest,pcVar5);
      uVar6 = (ulong)*(uint *)(DAT_02485488 + 0x78);
      if (*(uint *)(DAT_02485488 + 0x78) != 0) {
        pcVar5 = (char *)*unaff_x21;
        puVar7 = *(undefined8 **)(DAT_02485488 + 0x80);
        do {
          puVar8 = (undefined8 *)*puVar7;
          iVar3 = strcmp(pcVar5,(char *)*puVar8);
          if (iVar3 == 0) {
            *(undefined8 **)(unaff_x27 + unaff_x20 * unaff_x26 + 0x38) = puVar8;
          }
          uVar6 = uVar6 - 1;
          puVar7 = puVar7 + 1;
        } while (uVar6 != 0);
      }
      *(undefined1 *)(unaff_x27 + unaff_x20 * unaff_x26 + 0x44) = 0;
      if (((ulong)_iStack0000000000000030 & 1) != 0) {
        operator_delete(in_stack_00000040);
      }
      unaff_x20 = unaff_x20 + 1;
      if ((long)*(int *)(unaff_x28 + 0x4a0) <= (long)unaff_x20) {
        if (0 < *(int *)(unaff_x28 + 0x4a0)) {
          lVar4 = 0;
          uVar6 = 0;
          do {
            plVar1 = (long *)(*(long *)(unaff_x19 + 0x4b0) + lVar4);
            FUN_00ffa244(plVar1,uVar6 & 0xffffffff,&stack0x00000030);
            lVar2 = 0;
            if (iStack0000000000000030 != -1) {
              lVar2 = *(long *)(unaff_x29 + 0x4a8) + (long)iStack0000000000000030 * 0x48;
            }
            *plVar1 = lVar2;
            FUN_0103fbfc(plVar1);
            uVar6 = uVar6 + 1;
            lVar4 = lVar4 + 0x58;
          } while ((long)uVar6 < (long)*(int *)(unaff_x28 + 0x4a0));
        }
        FUN_0102ee88();
        _iStack0000000000000030 = (void *)0x0;
        in_stack_00000038 = (void *)0x0;
        in_stack_00000040 = (char *)0x0;
        FUN_00ffb2f0(&stack0x00000030);
        FUN_00ff43c0(&stack0x00000030);
        if (_iStack0000000000000030 != (void *)0x0) {
          in_stack_00000038 = _iStack0000000000000030;
          operator_delete(_iStack0000000000000030);
        }
        return in_stack_00000000._4_4_ & 1;
      }
      unaff_x27 = *(long *)(unaff_x29 + 0x4a8);
      unaff_x21 = (undefined8 *)(unaff_x27 + unaff_x20 * unaff_x26);
      FUN_00ffa1a8(unaff_x21,unaff_x20 & 0xffffffff,(long)&stack0x00000048 + 4);
      unaff_x23 = (char *)*unaff_x21;
      lVar4 = 0;
      if (in_stack_00000048._4_4_ != -1) {
        lVar4 = *(long *)(unaff_x19 + 0x4b0) + (long)in_stack_00000048._4_4_ * 0x58;
      }
      unaff_x21[2] = lVar4;
      unaff_x22 = strlen(unaff_x23);
      if (0xffffffffffffffef < unaff_x22) {
                    /* WARNING: Subroutine does not return */
        std::__ndk1::__basic_string_common<true>::__throw_length_error();
      }
      if (unaff_x22 < 0x17) break;
      uVar6 = unaff_x22 + 0x10 & 0xfffffffffffffff0;
      unaff_x24 = operator_new(uVar6);
      in_stack_00000018 = uVar6 | 1;
      in_stack_00000020 = unaff_x22;
      in_stack_00000028 = unaff_x24;
LAB_0102ebdc:
      memcpy(unaff_x24,unaff_x23,unaff_x22);
    }
    in_stack_00000018 = CONCAT71(in_stack_00000018._1_7_,(char)((int)unaff_x22 << 1));
    unaff_x24 = in_stack_00000008;
  } while( true );
}


