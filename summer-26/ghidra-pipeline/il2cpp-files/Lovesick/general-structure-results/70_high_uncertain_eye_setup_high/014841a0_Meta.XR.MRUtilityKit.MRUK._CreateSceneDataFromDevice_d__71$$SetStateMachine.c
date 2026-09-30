/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUK.<CreateSceneDataFromDevice>d__71$$SetStateMachine
ENTRY_POINT: 014841a0
PROGRAM: Lovesick-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_21;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_MRUK_<CreateSceneDataFromDevice>d__71__SetStateMachine(void)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined8 *puVar7;
  long lVar8;
  long in_x9;
  ulong uVar9;
  int *piVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x22;
  long *unaff_x23;
  long unaff_x24;
  ulong unaff_x25;
  uint unaff_w26;
  uint uVar14;
  ulong unaff_x27;
  long lVar15;
  long unaff_x29;
  undefined8 in_stack_00000000;
  long in_stack_00000008;
  
  do {
    if (*(uint *)(in_x9 + 0x18) <= unaff_x27) {
LAB_01484478:
                    /* WARNING: Subroutine does not return */
      FUN_00da5194();
    }
    if (unaff_x19 == (long *)0x0) break;
    lVar8 = *unaff_x19;
    lVar15 = *(long *)(in_x9 + unaff_x27 * 8 + 0x20);
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12a);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *unaff_x23) {
          puVar7 = (undefined8 *)(lVar8 + (long)(*piVar10 + 0xe) * 0x10 + 0x138);
          goto LAB_01484208;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar7 = (undefined8 *)FUN_00d59724();
LAB_01484208:
    uVar5 = (*(code *)*puVar7)();
    if (lVar15 == 0) break;
    uVar14 = unaff_w26 + (int)unaff_x24 * 0x20;
    if (*(uint *)(lVar15 + 0x18) <= uVar14) goto LAB_01484478;
    *(undefined4 *)(lVar15 + (long)(int)uVar14 * 4 + 0x20) = uVar5;
    unaff_x24 = unaff_x24 + 1;
    if (*(int *)(unaff_x20 + 0xa8) <= unaff_x24) {
      do {
        while( true ) {
          while( true ) {
            while( true ) {
              unaff_x27 = unaff_x27 + 1;
              uVar14 = unaff_w26;
              if ((long)*(int *)(unaff_x20 + 0xa0) <= (long)unaff_x27) {
                do {
                  unaff_x25 = unaff_x25 + 1;
                  unaff_w26 = uVar14 + 1;
                  if (unaff_x25 == 0x20) {
                    in_stack_00000000._4_4_ = in_stack_00000000._4_4_ + 1;
                    unaff_w26 = (uVar14 + *(int *)(unaff_x20 + 0xa8) * 0x20) - 0x1f;
                    if (in_stack_00000000._4_4_ == 0xc) {
                      return;
                    }
                    unaff_x25 = 0;
                  }
                  uVar14 = unaff_w26;
                } while (*(int *)(unaff_x20 + 0xa0) < 1);
                in_stack_00000008 = (long)(int)unaff_w26;
                unaff_x27 = 0;
                unaff_x29 = (long)(int)(unaff_w26 + 0x20);
                unaff_x22 = (long)(int)(unaff_w26 + 0x40);
              }
              if ((unaff_x27 == 0) || ((long)unaff_x25 < (long)*(int *)(unaff_x20 + 0xa4))) break;
              if (0 < *(int *)(unaff_x20 + 0xa8)) {
                lVar8 = *(long *)(unaff_x20 + 0xc0);
                if (lVar8 == 0) goto LAB_0148447c;
                uVar2 = *(uint *)(lVar8 + 0x18);
                lVar15 = 0;
                uVar14 = unaff_w26;
                do {
                  if (uVar2 < 2) goto LAB_01484478;
                  lVar11 = *(long *)(lVar8 + 0x20);
                  if (lVar11 == 0) goto LAB_0148447c;
                  if (*(uint *)(lVar11 + 0x18) <= uVar14) goto LAB_01484478;
                  lVar12 = *(long *)(lVar8 + 0x28);
                  if (lVar12 == 0) goto LAB_0148447c;
                  if (*(uint *)(lVar12 + 0x18) <= uVar14) goto LAB_01484478;
                  lVar13 = (long)(int)uVar14;
                  lVar15 = lVar15 + 1;
                  uVar14 = uVar14 + 0x20;
                  *(undefined4 *)(lVar12 + lVar13 * 4 + 0x20) =
                       *(undefined4 *)(lVar11 + lVar13 * 4 + 0x20);
                } while (lVar15 < *(int *)(unaff_x20 + 0xa8));
              }
            }
            lVar8 = *(long *)(unaff_x20 + 0xd8);
            if (lVar8 == 0) goto LAB_0148447c;
            if (*(uint *)(lVar8 + 0x18) <= unaff_x27) goto LAB_01484478;
            lVar8 = *(long *)(lVar8 + unaff_x27 * 8 + 0x20);
            if (lVar8 == 0) goto LAB_0148447c;
            if (*(uint *)(lVar8 + 0x18) <= unaff_x25) goto LAB_01484478;
            iVar6 = *(int *)(lVar8 + unaff_x25 * 4 + 0x20);
            if (iVar6 != 0) break;
            if (0 < *(int *)(unaff_x20 + 0xa8)) {
              lVar8 = *(long *)(unaff_x20 + 0xc0);
              if (lVar8 == 0) goto LAB_0148447c;
              uVar2 = *(uint *)(lVar8 + 0x18);
              lVar15 = 0;
              uVar14 = unaff_w26;
              do {
                if (uVar2 <= unaff_x27) goto LAB_01484478;
                lVar11 = *(long *)(lVar8 + unaff_x27 * 8 + 0x20);
                if (lVar11 == 0) goto LAB_0148447c;
                if (*(uint *)(lVar11 + 0x18) <= uVar14) goto LAB_01484478;
                *(undefined4 *)(lVar11 + (long)(int)uVar14 * 4 + 0x20) = 0;
                lVar15 = lVar15 + 1;
                uVar14 = uVar14 + 0x20;
              } while (lVar15 < *(int *)(unaff_x20 + 0xa8));
            }
          }
          if (-1 < iVar6) break;
          if (unaff_x19 == (long *)0x0) goto LAB_0148447c;
          lVar8 = *unaff_x19;
          uVar14 = -iVar6;
          uVar9 = (ulong)*(ushort *)(lVar8 + 0x12a);
          if (uVar9 != 0) {
            piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(long *)(piVar10 + -2) == *unaff_x23) {
                puVar7 = (undefined8 *)(lVar8 + (long)(*piVar10 + 0xe) * 0x10 + 0x138);
                goto LAB_01484380;
              }
              uVar9 = uVar9 - 1;
              piVar10 = piVar10 + 4;
            } while (uVar9 != 0);
          }
          puVar7 = (undefined8 *)FUN_00d59724();
LAB_01484380:
          iVar6 = (*(code *)*puVar7)();
          lVar8 = *(long *)(unaff_x20 + 0xc0);
          uVar2 = uVar14;
          if ((int)uVar14 < 0) {
            uVar2 = uVar14 + 1;
          }
          if (lVar8 == 0) goto LAB_0148447c;
          if (*(uint *)(lVar8 + 0x18) <= unaff_x27) goto LAB_01484478;
          lVar8 = *(long *)(lVar8 + unaff_x27 * 8 + 0x20);
          if (lVar8 == 0) goto LAB_0148447c;
          uVar3 = *(uint *)(lVar8 + 0x18);
          if (uVar3 <= unaff_w26) goto LAB_01484478;
          iVar1 = (1 << (ulong)(((uVar14 - (uVar2 & 0x1e)) + (uVar2 >> 1)) - 1 & 0x1f)) + 1;
          iVar4 = 0;
          if (iVar1 != 0) {
            iVar4 = iVar6 / iVar1;
          }
          *(int *)(lVar8 + in_stack_00000008 * 4 + 0x20) = iVar6 - iVar4 * iVar1;
          if (uVar3 <= (uint)unaff_x29) goto LAB_01484478;
          iVar6 = 0;
          if (iVar1 != 0) {
            iVar6 = iVar4 / iVar1;
          }
          *(int *)(lVar8 + unaff_x29 * 4 + 0x20) = iVar4 - iVar6 * iVar1;
          if (uVar3 <= (uint)unaff_x22) goto LAB_01484478;
          *(int *)(lVar8 + unaff_x22 * 4 + 0x20) = iVar6;
        }
      } while (*(int *)(unaff_x20 + 0xa8) < 1);
      unaff_x24 = 0;
    }
    in_x9 = *(long *)(unaff_x20 + 0xc0);
  } while (in_x9 != 0);
LAB_0148447c:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


