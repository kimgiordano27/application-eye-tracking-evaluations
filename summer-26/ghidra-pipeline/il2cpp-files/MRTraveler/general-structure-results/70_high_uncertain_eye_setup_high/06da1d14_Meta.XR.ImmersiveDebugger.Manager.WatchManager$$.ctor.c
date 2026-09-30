/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.WatchManager$$.ctor
ENTRY_POINT: 06da1d14
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_19;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Manager_WatchManager___ctor(void)

{
  int iVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  uint uVar11;
  ulong uVar12;
  int unaff_w20;
  int iVar13;
  uint uVar14;
  long unaff_x21;
  uint unaff_w23;
  long *unaff_x25;
  float unaff_w27;
  ulong unaff_x28;
  long unaff_x29;
  float fVar15;
  float fVar16;
  long in_stack_00000000;
  long in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 *in_stack_00000018;
  long in_stack_00000020;
  int iStack000000000000002c;
  
  do {
    do {
      iVar3 = 0;
      do {
        iVar13 = unaff_w20;
        uVar12 = 0;
        iStack000000000000002c = iVar3;
        do {
          lVar4 = *(long *)(unaff_x21 + 0xd8);
          if (lVar4 == 0) goto LAB_06da20ac;
          if (*(uint *)(lVar4 + 0x18) <= unaff_w23) goto thunk_FUN_03c8fb38;
          lVar4 = *(long *)(lVar4 + unaff_x29 * 8 + 0x20);
          if (lVar4 == 0) goto LAB_06da20ac;
          if (*(uint *)(lVar4 + 0x18) <= uVar12) goto thunk_FUN_03c8fb38;
          uVar14 = *(uint *)(lVar4 + uVar12 * 4 + 0x20);
          if (uVar14 == 0) {
            lVar4 = *(long *)(unaff_x21 + 0xd0);
            if (lVar4 == 0) goto LAB_06da20ac;
            fVar15 = 0.0;
            if (*(uint *)(lVar4 + 0x18) <= uVar12) goto thunk_FUN_03c8fb38;
          }
          else {
            if ((int)uVar14 < 0) {
              lVar2 = *unaff_x25;
              iVar1 = -uVar14;
              iVar3 = iVar1;
              if (iVar1 < 0) {
                iVar3 = iVar1 + 1;
              }
              uVar14 = (iVar1 % 2 + (iVar3 >> 1)) - 1;
              if (*(int *)(lVar2 + 0xe0) == 0) {
                thunk_FUN_03cd7500();
                lVar2 = *unaff_x25;
              }
              plVar5 = *(long **)(lVar2 + 0xb8);
              plVar8 = plVar5 + 1;
            }
            else {
              lVar2 = *unaff_x25;
              if (*(int *)(lVar2 + 0xe0) == 0) {
                thunk_FUN_03cd7500();
                lVar2 = *unaff_x25;
              }
              plVar5 = (long *)(*(long *)(lVar2 + 0xb8) + 0x10);
              plVar8 = (long *)(*(long *)(lVar2 + 0xb8) + 0x18);
            }
            lVar6 = *plVar5;
            if (lVar6 == 0) goto LAB_06da20ac;
            if (*(uint *)(lVar6 + 0x18) <= uVar14) goto thunk_FUN_03c8fb38;
            lVar4 = *(long *)(unaff_x21 + 0xc0);
            if (lVar4 == 0) goto LAB_06da20ac;
            if (*(uint *)(lVar4 + 0x18) <= unaff_w23) goto thunk_FUN_03c8fb38;
            lVar10 = *(long *)(lVar4 + unaff_x29 * 8 + 0x20);
            if (lVar10 == 0) goto LAB_06da20ac;
            uVar11 = iVar13 + (int)uVar12;
            if (*(uint *)(lVar10 + 0x18) <= uVar11) goto thunk_FUN_03c8fb38;
            lVar9 = *plVar8;
            if (lVar9 == 0) goto LAB_06da20ac;
            if (*(uint *)(lVar9 + 0x18) <= uVar14) goto thunk_FUN_03c8fb38;
            lVar4 = *(long *)(unaff_x21 + 0xd0);
            iVar3 = *(int *)(lVar10 + (long)(int)uVar11 * 4 + 0x20);
            fVar15 = *(float *)(lVar6 + (long)(int)uVar14 * 4 + 0x20);
            fVar16 = *(float *)(lVar9 + (long)(int)uVar14 * 4 + 0x20);
            if (*(int *)(lVar2 + 0xe0) == 0) {
              thunk_FUN_03cd7500();
              lVar2 = *unaff_x25;
            }
            lVar6 = *(long *)(unaff_x21 + 200);
            if (lVar6 == 0) goto LAB_06da20ac;
            if (*(uint *)(lVar6 + 0x18) <= unaff_w23) goto thunk_FUN_03c8fb38;
            lVar6 = *(long *)(lVar6 + unaff_x29 * 8 + 0x20);
            if (lVar6 == 0) goto LAB_06da20ac;
            if (*(uint *)(lVar6 + 0x18) <= unaff_x28) goto thunk_FUN_03c8fb38;
            lVar6 = *(long *)(lVar6 + unaff_x28 * 8 + 0x20);
            if (lVar6 == 0) goto LAB_06da20ac;
            if (*(uint *)(lVar6 + 0x18) <= uVar12) goto thunk_FUN_03c8fb38;
            lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x20);
            if (lVar2 == 0) goto LAB_06da20ac;
            uVar11 = *(uint *)(lVar6 + uVar12 * 4 + 0x20);
            if (*(uint *)(lVar2 + 0x18) <= uVar11) goto thunk_FUN_03c8fb38;
            if (lVar4 == 0) goto LAB_06da20ac;
            if (*(uint *)(lVar4 + 0x18) <= uVar12) goto thunk_FUN_03c8fb38;
            fVar15 = fVar15 * ((float)(iVar3 << (ulong)(0x10 - uVar14 & 0x1f)) * unaff_w27 + fVar16)
                     * *(float *)(lVar2 + (long)(int)uVar11 * 4 + 0x20);
          }
          lVar2 = uVar12 * 4;
          uVar12 = uVar12 + 1;
          *(float *)(lVar4 + lVar2 + 0x20) = fVar15;
        } while (uVar12 != 0x20);
        FUN_06d9e508();
        if (*(uint *)(in_stack_00000020 + 0x18) <= unaff_w23) goto thunk_FUN_03c8fb38;
        FUN_0712485c(*(undefined8 *)(unaff_x21 + 0xd0),0,*in_stack_00000018,iVar13,0x20,0);
        iVar3 = iStack000000000000002c + 1;
        unaff_w20 = iVar13 + 0x20;
      } while (iVar3 != 0xc);
      unaff_x28 = unaff_x28 + 1;
      unaff_w20 = iVar13 + 0x20;
    } while ((long)unaff_x28 < (long)*(int *)(unaff_x21 + 0xa8));
    uVar12 = (ulong)(iVar13 + 0x20);
    while( true ) {
      unaff_w23 = unaff_w23 + 1;
      if (in_stack_00000010._4_4_ < (int)unaff_w23) {
        if (*(int *)(unaff_x21 + 0xa0) != 2) {
          return;
        }
        if (*(int *)(unaff_x21 + 0x28) != 3) {
          return;
        }
        if ((int)uVar12 < 1) {
          return;
        }
        if (in_stack_00000000 == 0) goto LAB_06da20ac;
        uVar14 = *(uint *)(in_stack_00000000 + 0x18);
        uVar7 = 0;
        goto LAB_06da2050;
      }
      if (0 < *(int *)(unaff_x21 + 0xa8)) break;
      uVar12 = 0;
    }
    in_stack_00000018 = (undefined8 *)(in_stack_00000020 + (long)(int)unaff_w23 * 8 + 0x20);
    unaff_x28 = 0;
    unaff_w20 = 0;
    unaff_x29 = (long)(int)unaff_w23;
  } while( true );
LAB_06da2050:
  if (uVar14 <= uVar7) {
thunk_FUN_03c8fb38:
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb38();
  }
  if (in_stack_00000008 == 0) {
LAB_06da20ac:
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb30();
  }
  if (*(uint *)(in_stack_00000008 + 0x18) <= uVar7) goto thunk_FUN_03c8fb38;
  *(float *)(in_stack_00000000 + 0x20 + uVar7 * 4) =
       (*(float *)(in_stack_00000000 + 0x20 + uVar7 * 4) +
       *(float *)(in_stack_00000008 + 0x20 + uVar7 * 4)) * 0.5;
  uVar7 = uVar7 + 1;
  if (uVar12 == uVar7) {
    return;
  }
  goto LAB_06da2050;
}


