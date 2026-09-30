/*
FUNCTION_NAME: System.Array$$InternalArray__get_Item<OVRPlugin.Vector4s>
ENTRY_POINT: 0102eb1c
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint System_Array__InternalArray__get_Item<OVRPlugin_Vector4s>(size_t param_1,size_t param_2)

{
  long *plVar1;
  long lVar2;
  int iVar3;
  size_t __n;
  void *pvVar4;
  char *__dest;
  ulong unaff_x19;
  ulong uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  uint unaff_w23;
  char *pcVar8;
  undefined8 *puVar9;
  long lVar10;
  long unaff_x28;
  long unaff_x29;
  uint uStack0000000000000004;
  ulong in_stack_00000018;
  size_t in_stack_00000020;
  void *in_stack_00000028;
  int iStack0000000000000030;
  void *in_stack_00000038;
  char *in_stack_00000040;
  undefined8 in_stack_00000048;
  
  DAT_024854b0 = calloc(param_1,param_2);
  if (0 < *(int *)(unaff_x28 + 0x4a0)) {
    uVar5 = 0;
    uStack0000000000000004 = unaff_w23;
    do {
      lVar10 = *(long *)(unaff_x29 + 0x4a8);
      puVar6 = (undefined8 *)(lVar10 + uVar5 * 0x48);
      FUN_00ffa1a8(puVar6,uVar5 & 0xffffffff,(long)&stack0x00000048 + 4);
      pcVar8 = (char *)*puVar6;
      pvVar4 = (void *)0x0;
      if (in_stack_00000048._4_4_ != -1) {
        pvVar4 = (void *)((long)DAT_024854b0 + (long)in_stack_00000048._4_4_ * 0x58);
      }
      puVar6[2] = pvVar4;
      __n = strlen(pcVar8);
      if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
        std::__ndk1::__basic_string_common<true>::__throw_length_error();
      }
      if (__n < 0x17) {
        in_stack_00000018 = CONCAT71(in_stack_00000018._1_7_,(char)((int)__n << 1));
        pvVar4 = (void *)((ulong)&stack0x00000018 | 1);
        if (__n != 0) goto LAB_0102ebdc;
      }
      else {
        uVar7 = __n + 0x10 & 0xfffffffffffffff0;
        pvVar4 = operator_new(uVar7);
        in_stack_00000018 = uVar7 | 1;
        in_stack_00000020 = __n;
        in_stack_00000028 = pvVar4;
LAB_0102ebdc:
        memcpy(pvVar4,pcVar8,__n);
      }
      *(undefined1 *)((long)pvVar4 + __n) = 0;
      FUN_00ff180c(&stack0x00000030,&stack0x00000018);
      if ((in_stack_00000018 & 1) != 0) {
        operator_delete(in_stack_00000028);
      }
      uVar7 = (ulong)_iStack0000000000000030 >> 1 & 0x7f;
      if (((ulong)_iStack0000000000000030 & 1) != 0) {
        uVar7 = (ulong)in_stack_00000038;
      }
      __dest = calloc(uVar7 + 1,1);
      *(char **)(lVar10 + uVar5 * 0x48 + 8) = __dest;
      pcVar8 = (char *)(unaff_x19 | 1);
      if (((ulong)_iStack0000000000000030 & 1) != 0) {
        pcVar8 = in_stack_00000040;
      }
      strcpy(__dest,pcVar8);
      uVar7 = (ulong)*(uint *)(DAT_02485488 + 0x78);
      if (*(uint *)(DAT_02485488 + 0x78) != 0) {
        pcVar8 = (char *)*puVar6;
        puVar6 = *(undefined8 **)(DAT_02485488 + 0x80);
        do {
          puVar9 = (undefined8 *)*puVar6;
          iVar3 = strcmp(pcVar8,(char *)*puVar9);
          if (iVar3 == 0) {
            *(undefined8 **)(lVar10 + uVar5 * 0x48 + 0x38) = puVar9;
          }
          uVar7 = uVar7 - 1;
          puVar6 = puVar6 + 1;
        } while (uVar7 != 0);
      }
      *(undefined1 *)(lVar10 + uVar5 * 0x48 + 0x44) = 0;
      if (((ulong)_iStack0000000000000030 & 1) != 0) {
        operator_delete(in_stack_00000040);
      }
      uVar5 = uVar5 + 1;
    } while ((long)uVar5 < (long)*(int *)(unaff_x28 + 0x4a0));
    unaff_w23 = uStack0000000000000004;
    if (0 < *(int *)(unaff_x28 + 0x4a0)) {
      lVar10 = 0;
      uVar5 = 0;
      do {
        plVar1 = (long *)((long)DAT_024854b0 + lVar10);
        FUN_00ffa244(plVar1,uVar5 & 0xffffffff,&stack0x00000030);
        lVar2 = 0;
        if (iStack0000000000000030 != -1) {
          lVar2 = *(long *)(unaff_x29 + 0x4a8) + (long)iStack0000000000000030 * 0x48;
        }
        *plVar1 = lVar2;
        FUN_0103fbfc(plVar1);
        uVar5 = uVar5 + 1;
        lVar10 = lVar10 + 0x58;
      } while ((long)uVar5 < (long)*(int *)(unaff_x28 + 0x4a0));
    }
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
  return unaff_w23 & 1;
}


