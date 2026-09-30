/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.WatchManager.<>c$$<ProcessType>b__4_1
ENTRY_POINT: 06da1e14
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_21;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Manager_WatchManager_<>c__<ProcessType>b__4_1
               (long param_1,long param_2)

{
  uint uVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  long *in_x9;
  long lVar6;
  long in_x10;
  long in_x11;
  uint in_w12;
  ulong unaff_x19;
  uint unaff_w20;
  ulong uVar7;
  long unaff_x21;
  long lVar8;
  uint unaff_w23;
  int iVar9;
  ulong unaff_x24;
  long *unaff_x25;
  float unaff_w27;
  ulong unaff_x28;
  long unaff_x29;
  float fVar10;
  float fVar11;
  long in_stack_00000000;
  long in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 *in_stack_00000018;
  long in_stack_00000020;
  undefined8 in_stack_00000028;
  
  while ((uint)in_x11 < in_w12) {
    lVar6 = *in_x9;
    if (lVar6 == 0) goto LAB_06da20ac;
    if (*(uint *)(lVar6 + 0x18) <= unaff_w20) break;
    lVar8 = *(long *)(unaff_x21 + 0xd0);
    iVar9 = *(int *)(in_x10 + (long)(int)(uint)in_x11 * 4 + 0x20);
    fVar10 = *(float *)(param_1 + (long)(int)unaff_w20 * 4 + 0x20);
    fVar11 = *(float *)(lVar6 + (long)(int)unaff_w20 * 4 + 0x20);
    if (*(int *)(param_2 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
      param_2 = *unaff_x25;
    }
    lVar6 = *(long *)(unaff_x21 + 200);
    if (lVar6 == 0) goto LAB_06da20ac;
    if (*(uint *)(lVar6 + 0x18) <= unaff_w23) break;
    lVar6 = *(long *)(lVar6 + unaff_x29 * 8 + 0x20);
    if (lVar6 == 0) goto LAB_06da20ac;
    if (*(uint *)(lVar6 + 0x18) <= unaff_x28) break;
    lVar6 = *(long *)(lVar6 + unaff_x28 * 8 + 0x20);
    if (lVar6 == 0) goto LAB_06da20ac;
    if (*(uint *)(lVar6 + 0x18) <= unaff_x19) break;
    lVar4 = *(long *)(*(long *)(param_2 + 0xb8) + 0x20);
    if (lVar4 == 0) goto LAB_06da20ac;
    uVar1 = *(uint *)(lVar6 + unaff_x19 * 4 + 0x20);
    if (*(uint *)(lVar4 + 0x18) <= uVar1) break;
    if (lVar8 == 0) goto LAB_06da20ac;
    if (*(uint *)(lVar8 + 0x18) <= unaff_x19) break;
    fVar10 = fVar10 * ((float)(iVar9 << (ulong)(0x10 - unaff_w20 & 0x1f)) * unaff_w27 + fVar11) *
             *(float *)(lVar4 + (long)(int)uVar1 * 4 + 0x20);
    while( true ) {
      lVar6 = unaff_x19 * 4;
      unaff_x19 = unaff_x19 + 1;
      *(float *)(lVar8 + lVar6 + 0x20) = fVar10;
      if (unaff_x19 == 0x20) {
        FUN_06d9e508();
        if (*(uint *)(in_stack_00000020 + 0x18) <= unaff_w23) goto thunk_FUN_03c8fb38;
        iVar9 = (int)unaff_x24;
        uVar7 = unaff_x24 + 0x20;
        FUN_0712485c(*(undefined8 *)(unaff_x21 + 0xd0),0,*in_stack_00000018,iVar9,0x20,0);
        in_stack_00000028._4_4_ = in_stack_00000028._4_4_ + 1;
        if (in_stack_00000028._4_4_ == 0xc) {
          unaff_x28 = unaff_x28 + 1;
          uVar7 = (ulong)(iVar9 + 0x20);
          if ((long)*(int *)(unaff_x21 + 0xa8) <= (long)unaff_x28) {
            uVar7 = (ulong)(iVar9 + 0x20);
            while( true ) {
              unaff_w23 = unaff_w23 + 1;
              if (in_stack_00000010._4_4_ < (int)unaff_w23) {
                if (*(int *)(unaff_x21 + 0xa0) != 2) {
                  return;
                }
                if (*(int *)(unaff_x21 + 0x28) != 3) {
                  return;
                }
                if ((int)uVar7 < 1) {
                  return;
                }
                if (in_stack_00000000 == 0) goto LAB_06da20ac;
                uVar1 = *(uint *)(in_stack_00000000 + 0x18);
                uVar5 = 0;
                goto LAB_06da2050;
              }
              if (0 < *(int *)(unaff_x21 + 0xa8)) break;
              uVar7 = 0;
            }
            in_stack_00000018 = (undefined8 *)(in_stack_00000020 + (long)(int)unaff_w23 * 8 + 0x20);
            unaff_x28 = 0;
            uVar7 = 0;
            unaff_x29 = (long)(int)unaff_w23;
          }
          in_stack_00000028._4_4_ = 0;
        }
        unaff_x19 = 0;
        unaff_x24 = uVar7 & 0xffffffff;
      }
      lVar6 = *(long *)(unaff_x21 + 0xd8);
      if (lVar6 == 0) goto LAB_06da20ac;
      if (*(uint *)(lVar6 + 0x18) <= unaff_w23) goto thunk_FUN_03c8fb38;
      lVar6 = *(long *)(lVar6 + unaff_x29 * 8 + 0x20);
      if (lVar6 == 0) goto LAB_06da20ac;
      if (*(uint *)(lVar6 + 0x18) <= unaff_x19) goto thunk_FUN_03c8fb38;
      unaff_w20 = *(uint *)(lVar6 + unaff_x19 * 4 + 0x20);
      if (unaff_w20 != 0) break;
      lVar8 = *(long *)(unaff_x21 + 0xd0);
      if (lVar8 == 0) goto LAB_06da20ac;
      fVar10 = 0.0;
      if (*(uint *)(lVar8 + 0x18) <= unaff_x19) goto thunk_FUN_03c8fb38;
    }
    if ((int)unaff_w20 < 0) {
      param_2 = *unaff_x25;
      iVar2 = -unaff_w20;
      iVar9 = iVar2;
      if (iVar2 < 0) {
        iVar9 = iVar2 + 1;
      }
      unaff_w20 = (iVar2 % 2 + (iVar9 >> 1)) - 1;
      if (*(int *)(param_2 + 0xe0) == 0) {
        thunk_FUN_03cd7500();
        param_2 = *unaff_x25;
      }
      plVar3 = *(long **)(param_2 + 0xb8);
      in_x9 = plVar3 + 1;
    }
    else {
      param_2 = *unaff_x25;
      if (*(int *)(param_2 + 0xe0) == 0) {
        thunk_FUN_03cd7500();
        param_2 = *unaff_x25;
      }
      plVar3 = (long *)(*(long *)(param_2 + 0xb8) + 0x10);
      in_x9 = (long *)(*(long *)(param_2 + 0xb8) + 0x18);
    }
    param_1 = *plVar3;
    if (param_1 == 0) goto LAB_06da20ac;
    if (*(uint *)(param_1 + 0x18) <= unaff_w20) break;
    lVar6 = *(long *)(unaff_x21 + 0xc0);
    if (lVar6 == 0) goto LAB_06da20ac;
    if (*(uint *)(lVar6 + 0x18) <= unaff_w23) break;
    in_x10 = *(long *)(lVar6 + unaff_x29 * 8 + 0x20);
    if (in_x10 == 0) goto LAB_06da20ac;
    in_w12 = *(uint *)(in_x10 + 0x18);
    in_x11 = unaff_x24 + unaff_x19;
  }
thunk_FUN_03c8fb38:
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb38();
LAB_06da2050:
  if (uVar1 <= uVar5) goto thunk_FUN_03c8fb38;
  if (in_stack_00000008 == 0) {
LAB_06da20ac:
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb30();
  }
  if (*(uint *)(in_stack_00000008 + 0x18) <= uVar5) goto thunk_FUN_03c8fb38;
  *(float *)(in_stack_00000000 + 0x20 + uVar5 * 4) =
       (*(float *)(in_stack_00000000 + 0x20 + uVar5 * 4) +
       *(float *)(in_stack_00000008 + 0x20 + uVar5 * 4)) * 0.5;
  uVar5 = uVar5 + 1;
  if (uVar7 == uVar5) {
    return;
  }
  goto LAB_06da2050;
}


