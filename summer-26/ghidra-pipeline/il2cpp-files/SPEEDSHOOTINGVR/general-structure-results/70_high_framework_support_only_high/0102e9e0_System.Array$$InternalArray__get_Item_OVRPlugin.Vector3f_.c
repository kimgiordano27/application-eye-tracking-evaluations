/*
FUNCTION_NAME: System.Array$$InternalArray__get_Item<OVRPlugin.Vector3f>
ENTRY_POINT: 0102e9e0
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 87
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint System_Array__InternalArray__get_Item<OVRPlugin_Vector3f>(void)

{
  uint uVar1;
  void *pvVar2;
  int iVar3;
  size_t __n;
  void *pvVar4;
  char *__dest;
  long lVar5;
  long unaff_x19;
  ulong uVar6;
  long unaff_x20;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  ulong uVar10;
  uint unaff_w23;
  char *pcVar11;
  undefined8 *puVar12;
  uint uStack0000000000000004;
  ulong in_stack_00000018;
  size_t in_stack_00000020;
  void *in_stack_00000028;
  int iStack0000000000000030;
  void *in_stack_00000038;
  char *in_stack_00000040;
  undefined8 in_stack_00000048;
  
  FUN_01065f80(*(undefined4 *)(*(long *)(unaff_x20 + 0x498) + 4));
  FUN_01065f98(*(undefined4 *)(*(long *)(unaff_x20 + 0x498) + 8));
  FUN_0102edc4(&DAT_02485230,(long)*(int *)(*(long *)(unaff_x19 + 0x490) + 0x10));
  lVar5 = *(long *)(unaff_x19 + 0x490);
  if (0 < *(int *)(lVar5 + 0x10)) {
    lVar7 = 0;
    lVar9 = 0;
    do {
      FUN_0102ee14(&DAT_02485230,*(long *)(lVar5 + 0x18) + lVar7);
      lVar5 = *(long *)(unaff_x19 + 0x490);
      lVar9 = lVar9 + 1;
      lVar7 = lVar7 + 8;
    } while (lVar9 < *(int *)(lVar5 + 0x10));
  }
  lVar5 = *(long *)(DAT_02485488 + 0x60);
  uVar6 = (ulong)*(uint *)(DAT_02485488 + 0x58);
  if ((DAT_02485450 != '\0') && (DAT_02485440 != (void *)0x0)) {
    operator_delete__(DAT_02485440);
  }
  FUN_01034030(lVar5,lVar5 + uVar6 * 0x38,&stack0x00000030);
  DAT_02485450 = 0;
  lVar9 = *(long *)(DAT_02485488 + 0x70);
  uVar1 = *(uint *)(DAT_02485488 + 0x68);
  DAT_02485440 = (void *)lVar5;
  DAT_02485448 = uVar6;
  if ((DAT_02485468 != '\0') && (DAT_02485458 != (void *)0x0)) {
    operator_delete__(DAT_02485458);
  }
  FUN_01034ee0(lVar9,lVar9 + (ulong)uVar1 * 0x10,&stack0x00000030);
  DAT_02485468 = 0;
  DAT_02485458 = (void *)lVar9;
  DAT_02485460 = (ulong)uVar1;
  DAT_024854a8 = calloc((long)DAT_024854a0,0x48);
  DAT_024854b0 = calloc((long)DAT_024854a4,0x58);
  if (0 < DAT_024854a0) {
    uVar6 = 0;
    uStack0000000000000004 = unaff_w23;
    do {
      pvVar2 = DAT_024854a8;
      puVar8 = (undefined8 *)((long)DAT_024854a8 + uVar6 * 0x48);
      FUN_00ffa1a8(puVar8,uVar6 & 0xffffffff,(long)&stack0x00000048 + 4);
      pcVar11 = (char *)*puVar8;
      pvVar4 = (void *)0x0;
      if (in_stack_00000048._4_4_ != -1) {
        pvVar4 = (void *)((long)DAT_024854b0 + (long)in_stack_00000048._4_4_ * 0x58);
      }
      puVar8[2] = pvVar4;
      __n = strlen(pcVar11);
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
        uVar10 = __n + 0x10 & 0xfffffffffffffff0;
        pvVar4 = operator_new(uVar10);
        in_stack_00000018 = uVar10 | 1;
        in_stack_00000020 = __n;
        in_stack_00000028 = pvVar4;
LAB_0102ebdc:
        memcpy(pvVar4,pcVar11,__n);
      }
      *(undefined1 *)((long)pvVar4 + __n) = 0;
      FUN_00ff180c(&stack0x00000030,&stack0x00000018);
      if ((in_stack_00000018 & 1) != 0) {
        operator_delete(in_stack_00000028);
      }
      uVar10 = (ulong)_iStack0000000000000030 >> 1 & 0x7f;
      if (((ulong)_iStack0000000000000030 & 1) != 0) {
        uVar10 = (ulong)in_stack_00000038;
      }
      __dest = calloc(uVar10 + 1,1);
      *(char **)((long)pvVar2 + uVar6 * 0x48 + 8) = __dest;
      pcVar11 = (char *)((ulong)&stack0x00000030 | 1);
      if (((ulong)_iStack0000000000000030 & 1) != 0) {
        pcVar11 = in_stack_00000040;
      }
      strcpy(__dest,pcVar11);
      uVar10 = (ulong)*(uint *)(DAT_02485488 + 0x78);
      if (*(uint *)(DAT_02485488 + 0x78) != 0) {
        pcVar11 = (char *)*puVar8;
        puVar8 = *(undefined8 **)(DAT_02485488 + 0x80);
        do {
          puVar12 = (undefined8 *)*puVar8;
          iVar3 = strcmp(pcVar11,(char *)*puVar12);
          if (iVar3 == 0) {
            *(undefined8 **)((long)pvVar2 + uVar6 * 0x48 + 0x38) = puVar12;
          }
          uVar10 = uVar10 - 1;
          puVar8 = puVar8 + 1;
        } while (uVar10 != 0);
      }
      *(undefined1 *)((long)pvVar2 + uVar6 * 0x48 + 0x44) = 0;
      if (((ulong)_iStack0000000000000030 & 1) != 0) {
        operator_delete(in_stack_00000040);
      }
      uVar6 = uVar6 + 1;
    } while ((long)uVar6 < (long)DAT_024854a0);
    unaff_w23 = uStack0000000000000004;
    if (0 < DAT_024854a0) {
      lVar5 = 0;
      uVar6 = 0;
      do {
        puVar8 = (undefined8 *)((long)DAT_024854b0 + lVar5);
        FUN_00ffa244(puVar8,uVar6 & 0xffffffff,&stack0x00000030);
        pvVar4 = (void *)0x0;
        if (iStack0000000000000030 != -1) {
          pvVar4 = (void *)((long)DAT_024854a8 + (long)iStack0000000000000030 * 0x48);
        }
        *puVar8 = pvVar4;
        FUN_0103fbfc(puVar8);
        uVar6 = uVar6 + 1;
        lVar5 = lVar5 + 0x58;
      } while ((long)uVar6 < (long)DAT_024854a0);
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


