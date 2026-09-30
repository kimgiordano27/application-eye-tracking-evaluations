/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.WatchManager$$ProcessTypeFromInspector
ENTRY_POINT: 06da1bd8
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


void Meta_XR_ImmersiveDebugger_Manager_WatchManager__ProcessTypeFromInspector(long param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  int *piVar14;
  long lVar15;
  long lVar16;
  long *unaff_x19;
  long unaff_x20;
  long *unaff_x23;
  ulong unaff_x25;
  uint unaff_w26;
  ulong uVar17;
  undefined8 in_stack_00000000;
  long lStack0000000000000008;
  
  do {
    do {
      unaff_x25 = unaff_x25 + 1;
      uVar2 = unaff_w26 + 1;
      if (unaff_x25 == 0x20) {
        in_stack_00000000._4_4_ = in_stack_00000000._4_4_ + 1;
        uVar2 = (unaff_w26 + *(int *)(unaff_x20 + 0xa8) * 0x20) - 0x1f;
        if (in_stack_00000000._4_4_ == 0xc) {
          return;
        }
        unaff_x25 = 0;
      }
      unaff_w26 = uVar2;
    } while ((int)param_1 < 1);
    lStack0000000000000008 = (long)(int)uVar2;
    uVar17 = 0;
    do {
      if ((uVar17 == 0) || ((long)unaff_x25 < (long)*(int *)(unaff_x20 + 0xa4))) {
        lVar10 = *(long *)(unaff_x20 + 0xd8);
        if (lVar10 == 0) goto LAB_06da1c28;
        if (*(uint *)(lVar10 + 0x18) <= uVar17) goto LAB_06da1c24;
        lVar10 = *(long *)(lVar10 + uVar17 * 8 + 0x20);
        if (lVar10 == 0) goto LAB_06da1c28;
        if (*(uint *)(lVar10 + 0x18) <= unaff_x25) goto LAB_06da1c24;
        iVar8 = *(int *)(lVar10 + unaff_x25 * 4 + 0x20);
        if (iVar8 == 0) {
          if (0 < *(int *)(unaff_x20 + 0xa8)) {
            lVar10 = *(long *)(unaff_x20 + 0xc0);
            if (lVar10 == 0) goto LAB_06da1c28;
            uVar4 = *(uint *)(lVar10 + 0x18);
            lVar12 = 0;
            uVar3 = uVar2;
            do {
              if (uVar4 <= uVar17) goto LAB_06da1c24;
              lVar11 = *(long *)(lVar10 + uVar17 * 8 + 0x20);
              if (lVar11 == 0) goto LAB_06da1c28;
              if (*(uint *)(lVar11 + 0x18) <= uVar3) goto LAB_06da1c24;
              *(undefined4 *)(lVar11 + (long)(int)uVar3 * 4 + 0x20) = 0;
              lVar12 = lVar12 + 1;
              uVar3 = uVar3 + 0x20;
            } while (lVar12 < *(int *)(unaff_x20 + 0xa8));
          }
        }
        else if (iVar8 < 0) {
          if (unaff_x19 == (long *)0x0) {
LAB_06da1c28:
                    /* WARNING: Subroutine does not return */
            FUN_03c8fb30();
          }
          lVar10 = *unaff_x19;
          uVar3 = -iVar8;
          uVar13 = (ulong)*(ushort *)(lVar10 + 0x12e);
          if (uVar13 != 0) {
            piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(long *)(piVar14 + -2) == *unaff_x23) {
                puVar9 = (undefined8 *)(lVar10 + (long)(*piVar14 + 0xe) * 0x10 + 0x138);
                goto LAB_06da1b2c;
              }
              uVar13 = uVar13 - 1;
              piVar14 = piVar14 + 4;
            } while (uVar13 != 0);
          }
          puVar9 = (undefined8 *)FUN_03cf1348();
LAB_06da1b2c:
          iVar8 = (*(code *)*puVar9)();
          lVar10 = *(long *)(unaff_x20 + 0xc0);
          uVar4 = uVar3;
          if ((int)uVar3 < 0) {
            uVar4 = uVar3 + 1;
          }
          if (lVar10 == 0) goto LAB_06da1c28;
          if (*(uint *)(lVar10 + 0x18) <= uVar17) goto LAB_06da1c24;
          lVar10 = *(long *)(lVar10 + uVar17 * 8 + 0x20);
          if (lVar10 == 0) goto LAB_06da1c28;
          uVar5 = *(uint *)(lVar10 + 0x18);
          if (uVar5 <= uVar2) {
LAB_06da1c24:
                    /* WARNING: Subroutine does not return */
            FUN_03c8fb38();
          }
          iVar1 = (1 << (ulong)(((uVar3 - (uVar4 & 0x1e)) + (uVar4 >> 1)) - 1 & 0x1f)) + 1;
          iVar6 = 0;
          if (iVar1 != 0) {
            iVar6 = iVar8 / iVar1;
          }
          *(int *)(lVar10 + lStack0000000000000008 * 4 + 0x20) = iVar8 - iVar6 * iVar1;
          if (uVar5 <= uVar2 + 0x20) goto LAB_06da1c24;
          iVar8 = 0;
          if (iVar1 != 0) {
            iVar8 = iVar6 / iVar1;
          }
          *(int *)(lVar10 + (long)(int)(uVar2 + 0x20) * 4 + 0x20) = iVar6 - iVar8 * iVar1;
          if (uVar5 <= uVar2 + 0x40) goto LAB_06da1c24;
          *(int *)(lVar10 + (long)(int)(uVar2 + 0x40) * 4 + 0x20) = iVar8;
        }
        else if (0 < *(int *)(unaff_x20 + 0xa8)) {
          lVar10 = 0;
          do {
            lVar12 = *(long *)(unaff_x20 + 0xc0);
            if (lVar12 == 0) goto LAB_06da1c28;
            if (*(uint *)(lVar12 + 0x18) <= uVar17) goto LAB_06da1c24;
            if (unaff_x19 == (long *)0x0) goto LAB_06da1c28;
            lVar11 = *unaff_x19;
            lVar12 = *(long *)(lVar12 + uVar17 * 8 + 0x20);
            uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
            if (uVar13 != 0) {
              piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
              do {
                if (*(long *)(piVar14 + -2) == *unaff_x23) {
                  puVar9 = (undefined8 *)(lVar11 + (long)(*piVar14 + 0xe) * 0x10 + 0x138);
                  goto LAB_06da19b4;
                }
                uVar13 = uVar13 - 1;
                piVar14 = piVar14 + 4;
              } while (uVar13 != 0);
            }
            puVar9 = (undefined8 *)FUN_03cf1348();
LAB_06da19b4:
            uVar7 = (*(code *)*puVar9)();
            if (lVar12 == 0) goto LAB_06da1c28;
            uVar3 = uVar2 + (int)lVar10 * 0x20;
            if (*(uint *)(lVar12 + 0x18) <= uVar3) goto LAB_06da1c24;
            *(undefined4 *)(lVar12 + (long)(int)uVar3 * 4 + 0x20) = uVar7;
            lVar10 = lVar10 + 1;
          } while (lVar10 < *(int *)(unaff_x20 + 0xa8));
        }
      }
      else if (0 < *(int *)(unaff_x20 + 0xa8)) {
        lVar10 = *(long *)(unaff_x20 + 0xc0);
        if (lVar10 == 0) goto LAB_06da1c28;
        uVar4 = *(uint *)(lVar10 + 0x18);
        lVar12 = 0;
        uVar3 = uVar2;
        do {
          if (uVar4 < 2) goto LAB_06da1c24;
          lVar11 = *(long *)(lVar10 + 0x20);
          if (lVar11 == 0) goto LAB_06da1c28;
          if (*(uint *)(lVar11 + 0x18) <= uVar3) goto LAB_06da1c24;
          lVar15 = *(long *)(lVar10 + 0x28);
          if (lVar15 == 0) goto LAB_06da1c28;
          if (*(uint *)(lVar15 + 0x18) <= uVar3) goto LAB_06da1c24;
          lVar16 = (long)(int)uVar3;
          lVar12 = lVar12 + 1;
          uVar3 = uVar3 + 0x20;
          *(undefined4 *)(lVar15 + lVar16 * 4 + 0x20) = *(undefined4 *)(lVar11 + lVar16 * 4 + 0x20);
        } while (lVar12 < *(int *)(unaff_x20 + 0xa8));
      }
      param_1 = (long)*(int *)(unaff_x20 + 0xa0);
      uVar17 = uVar17 + 1;
    } while ((long)uVar17 < param_1);
  } while( true );
}


