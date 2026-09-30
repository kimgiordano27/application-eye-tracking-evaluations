/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.SceneNavigation$$BuildSceneNavMeshForRoom
ENTRY_POINT: 07745088
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_21;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_SceneNavigation__BuildSceneNavMeshForRoom(void)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  long lVar4;
  undefined8 *puVar5;
  uint in_w8;
  ulong uVar6;
  ulong uVar7;
  int *piVar8;
  uint uVar9;
  long lVar10;
  long lVar11;
  undefined4 *puVar12;
  int unaff_w19;
  long unaff_x20;
  long unaff_x21;
  ulong unaff_x23;
  uint uVar13;
  long unaff_x25;
  uint unaff_w26;
  ulong unaff_x28;
  long *unaff_x29;
  long in_stack_000000a0;
  
  if (((unaff_w26 & in_w8) >> 0xc & 1) != 0) {
    if (((unaff_x20 == 0) || (unaff_x25 == 0)) || (lVar4 = FUN_0773ab5c(), lVar4 == 0))
    goto LAB_07745348;
    FUN_07a61200(lVar4,*(undefined8 *)(unaff_x21 + 0x70),unaff_w19,0);
    in_w8 = *(uint *)(unaff_x21 + 8);
  }
  if (((unaff_w26 & in_w8) >> 3 & 1) != 0) {
    if (((unaff_x20 == 0) || (unaff_x25 == 0)) || (lVar4 = FUN_0773ad18(), lVar4 == 0))
    goto LAB_07745348;
    FUN_07a61200(lVar4,*(undefined8 *)(unaff_x21 + 0x28),unaff_w19,0);
  }
  if ((unaff_x28 & 1) != 0) {
    if (unaff_x29 == (long *)0x0) goto LAB_07745348;
    lVar4 = *unaff_x29;
    uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar6 != 0) {
      piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_09f312c0) {
          puVar5 = (undefined8 *)(lVar4 + (long)(*piVar8 + 0xf) * 0x10 + 0x138);
          goto LAB_07745158;
        }
        uVar6 = uVar6 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar6 != 0);
    }
    puVar5 = (undefined8 *)FUN_044822ac();
LAB_07745158:
    (*(code *)*puVar5)();
  }
  if ((unaff_x23 & 1) == 0) {
    return;
  }
  if (in_stack_000000a0 != 0) {
    uVar13 = *(uint *)(in_stack_000000a0 + 0x18);
    uVar6 = (ulong)uVar13;
    if (0 < (long)(uVar6 << 0x20)) {
      uVar7 = 0;
      do {
        if (unaff_x20 == 0) goto LAB_07745348;
        if (uVar6 == uVar7) goto LAB_0774536c;
        lVar4 = *(long *)(unaff_x20 + 0x70);
        if (lVar4 == 0) goto LAB_07745348;
        if (*(uint *)(lVar4 + 0x18) <= uVar7) goto LAB_0774536c;
        lVar11 = uVar7 * 4;
        lVar10 = uVar7 * 4;
        uVar7 = uVar7 + 1;
        *(undefined4 *)(lVar4 + lVar10 + 0x20) = *(undefined4 *)(in_stack_000000a0 + 0x20 + lVar11);
      } while ((long)(int)uVar13 != uVar7);
    }
    if ((unaff_x20 != 0) && (lVar4 = *(long *)(unaff_x20 + 0xd0), lVar4 != 0)) {
      uVar13 = 0;
      do {
        if ((int)*(uint *)(lVar4 + 0x18) <= (int)uVar13) {
          return;
        }
        if (*(uint *)(lVar4 + 0x18) <= uVar13) {
LAB_0774536c:
                    /* WARNING: Subroutine does not return */
          FUN_04447e4c();
        }
        lVar4 = *(long *)(lVar4 + (long)(int)uVar13 * 8 + 0x20);
        if (lVar4 == 0) break;
        lVar4 = *(long *)(lVar4 + 0x10);
        if (unaff_w19 != 0) {
          if (lVar4 == 0) break;
          uVar7 = (ulong)*(uint *)(lVar4 + 0x18);
          if (0 < (long)(uVar7 << 0x20)) {
            lVar10 = (long)(int)*(uint *)(lVar4 + 0x18);
            piVar8 = (int *)(lVar4 + 0x20);
            do {
              if (uVar7 == 0) goto LAB_0774536c;
              lVar10 = lVar10 + -1;
              uVar7 = uVar7 - 1;
              *piVar8 = *piVar8 + unaff_w19;
              piVar8 = piVar8 + 1;
            } while (lVar10 != 0);
          }
        }
        if (*(char *)(unaff_x20 + 0x69) != '\0') {
          if (lVar4 == 0) break;
          uVar2 = *(uint *)(lVar4 + 0x18);
          if (0 < (int)uVar2) {
            uVar9 = 1;
            do {
              if ((uVar2 <= uVar9 - 1) || (uVar2 <= uVar9)) goto LAB_0774536c;
              lVar10 = lVar4 + (long)(int)uVar9 * 4;
              puVar12 = (undefined4 *)(lVar4 + (long)(int)(uVar9 - 1) * 4 + 0x20);
              uVar3 = *puVar12;
              iVar1 = uVar9 + 2;
              uVar9 = uVar9 + 3;
              *puVar12 = *(undefined4 *)(lVar10 + 0x20);
              *(undefined4 *)(lVar10 + 0x20) = uVar3;
            } while (iVar1 < (int)uVar2);
          }
        }
        lVar10 = *(long *)(unaff_x20 + 0x80);
        if (lVar10 == 0) break;
        if (*(uint *)(lVar10 + 0x18) <= uVar13) goto LAB_0774536c;
        lVar11 = *(long *)(unaff_x21 + 0x78);
        if (lVar11 == 0) break;
        uVar2 = *(uint *)(lVar10 + (long)(int)uVar13 * 4 + 0x20);
        lVar10 = (long)(int)uVar2;
        if (*(uint *)(lVar11 + 0x18) <= uVar2) goto LAB_0774536c;
        lVar11 = *(long *)(lVar11 + lVar10 * 8 + 0x20);
        if (lVar11 == 0) break;
        if ((uint)uVar6 <= uVar2) goto LAB_0774536c;
        if (lVar4 == 0) break;
        piVar8 = (int *)(in_stack_000000a0 + lVar10 * 4 + 0x20);
        FUN_07a61200(lVar4,*(undefined8 *)(lVar11 + 0x10),*piVar8,0);
        lVar11 = *(long *)(unaff_x20 + 0x78);
        if (lVar11 == 0) break;
        if (*(uint *)(lVar11 + 0x18) <= uVar2) goto LAB_0774536c;
        lVar11 = lVar11 + lVar10 * 4;
        iVar1 = *(int *)(lVar4 + 0x18);
        *(int *)(lVar11 + 0x20) = *(int *)(lVar11 + 0x20) + iVar1;
        uVar6 = *(ulong *)(in_stack_000000a0 + 0x18);
        if ((uint)uVar6 <= uVar2) goto LAB_0774536c;
        uVar13 = uVar13 + 1;
        *piVar8 = *piVar8 + iVar1;
        lVar4 = *(long *)(unaff_x20 + 0xd0);
      } while (lVar4 != 0);
    }
  }
LAB_07745348:
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


