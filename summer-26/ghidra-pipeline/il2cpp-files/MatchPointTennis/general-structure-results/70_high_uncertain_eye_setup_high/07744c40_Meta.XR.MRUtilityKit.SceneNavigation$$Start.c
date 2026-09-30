/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.SceneNavigation$$Start
ENTRY_POINT: 07744c40
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 78
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_21;paired_field_refs_with_eye_source;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_SceneNavigation__Start
               (long param_1,long param_2,int param_3,ulong param_4,ulong param_5,ulong param_6,
               long *param_7,long *param_8)

{
  uint uVar1;
  undefined4 uVar2;
  byte bVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  ulong uVar10;
  ulong uVar11;
  int *piVar12;
  uint uVar13;
  long lVar14;
  long lVar15;
  undefined4 *puVar16;
  uint uVar17;
  uint uVar18;
  undefined8 uStack0000000000000038;
  long in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined4 in_stack_000000b8;
  long *in_stack_000000c0;
  
  lVar5 = param_1;
  if ((DAT_0a523239 & 1) == 0) {
    FUN_04447ba8(PTR_DAT_09f30ab8);
    FUN_04447ba8(PTR_DAT_09f312c0);
    lVar5 = FUN_04447ba8(PTR_DAT_09f31508);
    DAT_0a523239 = 1;
  }
  if (in_stack_000000c0 != (long *)0x0) {
    bVar3 = *(byte *)(*(long *)PTR_DAT_09f31508 + 0x130);
    if ((*(byte *)(*in_stack_000000c0 + 0x130) < bVar3) ||
       (*(long *)(*(long *)(*in_stack_000000c0 + 200) + (ulong)bVar3 * 8 + -8) !=
        *(long *)PTR_DAT_09f31508)) {
                    /* WARNING: Subroutine does not return */
      FUN_044481e4(in_stack_000000c0);
    }
  }
  uVar13 = *(uint *)(param_1 + 8);
  uVar18 = (uint)param_4;
  uVar17 = uVar13 & uVar18 & 1;
  uVar1 = (uint)((param_4 & 0xffffffff) >> 1) & (uVar13 & 3) >> 1;
  uVar13 = (uint)((param_4 & 0xffffffff) >> 2) & (uVar13 & 7) >> 2;
  if ((uVar17 != 0 || uVar1 != 0) || uVar13 != 0) {
    if (uVar17 == 0) {
      uStack0000000000000038 = 0;
      if (uVar1 != 0) goto LAB_07744d3c;
LAB_07744d60:
      uVar6 = 0;
    }
    else {
      if ((param_2 == 0) || (in_stack_000000c0 == (long *)0x0)) goto LAB_07745348;
      uStack0000000000000038 = FUN_0773a82c(in_stack_000000c0,*(undefined8 *)(param_2 + 0xc0),0);
      if (uVar1 == 0) goto LAB_07744d60;
LAB_07744d3c:
      if ((param_2 == 0) || (in_stack_000000c0 == (long *)0x0)) goto LAB_07745348;
      uVar6 = FUN_0773a92c(in_stack_000000c0,*(undefined8 *)(param_2 + 0xc0),0);
    }
    if (uVar13 == 0) {
      uVar7 = 0;
    }
    else {
      if ((param_2 == 0) || (in_stack_000000c0 == (long *)0x0)) goto LAB_07745348;
      uVar7 = FUN_0773a9b8(in_stack_000000c0,*(undefined8 *)(param_2 + 0xc0),0);
    }
    if (param_7 == (long *)0x0) goto LAB_07745348;
    lVar5 = *param_7;
    uVar10 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar10 != 0) {
      piVar12 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_09f30ab8) {
          puVar8 = (undefined8 *)(lVar5 + (long)(*piVar12 + 0x24) * 0x10 + 0x138);
          goto LAB_07744df4;
        }
        uVar10 = uVar10 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar10 != 0);
    }
    puVar8 = (undefined8 *)FUN_044822ac(param_7,*(long *)PTR_DAT_09f30ab8,0x24);
LAB_07744df4:
    iVar4 = (*(code *)*puVar8)(param_7,puVar8[1]);
    if (iVar4 == 1) {
      if (param_8 == (long *)0x0) goto LAB_07745348;
      uVar9 = *(undefined8 *)(param_1 + 0x18);
      lVar5 = *param_8;
      uVar10 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar10 != 0) {
        piVar12 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_09f312c0) {
            puVar8 = (undefined8 *)(lVar5 + (long)(*piVar12 + 9) * 0x10 + 0x138);
            goto LAB_07744ebc;
          }
          uVar10 = uVar10 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar10 != 0);
      }
      puVar8 = (undefined8 *)FUN_044822ac(param_8,*(long *)PTR_DAT_09f312c0,9);
LAB_07744ebc:
      lVar5 = (*(code *)*puVar8)(param_8,param_2,param_7,param_3,uVar6,uVar7,uStack0000000000000038,
                                 uVar9);
    }
    else {
      if ((param_2 == 0) || (*(long *)(param_2 + 0x18) == 0)) goto LAB_07745348;
      uVar9 = FUN_0952a094(*(long *)(param_2 + 0x18),0);
      lVar5 = FUN_07745378(uVar9,uVar9,uVar1,uVar13,param_3,uStack0000000000000038,uVar6,uVar7);
    }
  }
  uVar17 = *(uint *)(param_1 + 8);
  if (((uVar18 & uVar17) >> 4 & 1) != 0) {
    if (param_2 == 0) goto LAB_07745348;
    Meta_XR_MRUtilityKit_SceneNavigation__BuildSceneNavMesh
              (lVar5,in_stack_000000a8,param_2,*(undefined8 *)(param_2 + 0xc0),0,param_3,
               *(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38));
    uVar17 = *(uint *)(param_1 + 8);
  }
  if (((uVar18 & uVar17) >> 6 & 1) != 0) {
    FUN_07745b70(param_1,param_7,in_stack_000000c0,param_2,param_3,in_stack_000000b8);
    uVar17 = *(uint *)(param_1 + 8);
  }
  if (((uVar18 & uVar17) >> 7 & 1) != 0) {
    if (((param_2 == 0) || (in_stack_000000c0 == (long *)0x0)) ||
       (lVar5 = FUN_0773ab5c(in_stack_000000c0,3,*(undefined8 *)(param_2 + 0xc0),0), lVar5 == 0))
    goto LAB_07745348;
    FUN_07a61200(lVar5,*(undefined8 *)(param_1 + 0x48),param_3,0);
    uVar17 = *(uint *)(param_1 + 8);
  }
  if (((uVar18 & uVar17) >> 8 & 1) != 0) {
    if (((param_2 == 0) || (in_stack_000000c0 == (long *)0x0)) ||
       (lVar5 = FUN_0773ab5c(in_stack_000000c0,4,*(undefined8 *)(param_2 + 0xc0),0), lVar5 == 0))
    goto LAB_07745348;
    FUN_07a61200(lVar5,*(undefined8 *)(param_1 + 0x50),param_3,0);
    uVar17 = *(uint *)(param_1 + 8);
  }
  if (((uVar18 & uVar17) >> 9 & 1) != 0) {
    if (((param_2 == 0) || (in_stack_000000c0 == (long *)0x0)) ||
       (lVar5 = FUN_0773ab5c(in_stack_000000c0,5,*(undefined8 *)(param_2 + 0xc0),0), lVar5 == 0))
    goto LAB_07745348;
    FUN_07a61200(lVar5,*(undefined8 *)(param_1 + 0x58),param_3,0);
    uVar17 = *(uint *)(param_1 + 8);
  }
  if (((uVar18 & uVar17) >> 10 & 1) != 0) {
    if (((param_2 == 0) || (in_stack_000000c0 == (long *)0x0)) ||
       (lVar5 = FUN_0773ab5c(in_stack_000000c0,6,*(undefined8 *)(param_2 + 0xc0),0), lVar5 == 0))
    goto LAB_07745348;
    FUN_07a61200(lVar5,*(undefined8 *)(param_1 + 0x60),param_3,0);
    uVar17 = *(uint *)(param_1 + 8);
  }
  if (((uVar18 & uVar17) >> 0xb & 1) != 0) {
    if (((param_2 == 0) || (in_stack_000000c0 == (long *)0x0)) ||
       (lVar5 = FUN_0773ab5c(in_stack_000000c0,7,*(undefined8 *)(param_2 + 0xc0),0), lVar5 == 0))
    goto LAB_07745348;
    FUN_07a61200(lVar5,*(undefined8 *)(param_1 + 0x68),param_3,0);
    uVar17 = *(uint *)(param_1 + 8);
  }
  if (((uVar18 & uVar17) >> 0xc & 1) != 0) {
    if (((param_2 == 0) || (in_stack_000000c0 == (long *)0x0)) ||
       (lVar5 = FUN_0773ab5c(in_stack_000000c0,8,*(undefined8 *)(param_2 + 0xc0),0), lVar5 == 0))
    goto LAB_07745348;
    FUN_07a61200(lVar5,*(undefined8 *)(param_1 + 0x70),param_3,0);
    uVar17 = *(uint *)(param_1 + 8);
  }
  if (((uVar18 & uVar17) >> 3 & 1) != 0) {
    if (((param_2 == 0) || (in_stack_000000c0 == (long *)0x0)) ||
       (lVar5 = FUN_0773ad18(in_stack_000000c0,*(undefined8 *)(param_2 + 0xc0),0), lVar5 == 0))
    goto LAB_07745348;
    FUN_07a61200(lVar5,*(undefined8 *)(param_1 + 0x28),param_3,0);
  }
  if ((param_6 & 1) != 0) {
    if (param_8 == (long *)0x0) goto LAB_07745348;
    lVar5 = *param_8;
    uVar10 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar10 != 0) {
      piVar12 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_09f312c0) {
          puVar8 = (undefined8 *)(lVar5 + (long)(*piVar12 + 0xf) * 0x10 + 0x138);
          goto LAB_07745158;
        }
        uVar10 = uVar10 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar10 != 0);
    }
    puVar8 = (undefined8 *)FUN_044822ac(param_8,*(long *)PTR_DAT_09f312c0,0xf);
LAB_07745158:
    (*(code *)*puVar8)(param_8,param_2,puVar8[1]);
  }
  if ((param_5 & 1) == 0) {
    return;
  }
  if (in_stack_000000a0 != 0) {
    uVar17 = *(uint *)(in_stack_000000a0 + 0x18);
    uVar10 = (ulong)uVar17;
    if (0 < (long)(uVar10 << 0x20)) {
      uVar11 = 0;
      do {
        if (param_2 == 0) goto LAB_07745348;
        if (uVar10 == uVar11) goto LAB_0774536c;
        lVar5 = *(long *)(param_2 + 0x70);
        if (lVar5 == 0) goto LAB_07745348;
        if (*(uint *)(lVar5 + 0x18) <= uVar11) goto LAB_0774536c;
        lVar15 = uVar11 * 4;
        lVar14 = uVar11 * 4;
        uVar11 = uVar11 + 1;
        *(undefined4 *)(lVar5 + lVar14 + 0x20) = *(undefined4 *)(in_stack_000000a0 + 0x20 + lVar15);
      } while ((long)(int)uVar17 != uVar11);
    }
    if ((param_2 != 0) && (lVar5 = *(long *)(param_2 + 0xd0), lVar5 != 0)) {
      uVar17 = 0;
      do {
        if ((int)*(uint *)(lVar5 + 0x18) <= (int)uVar17) {
          return;
        }
        if (*(uint *)(lVar5 + 0x18) <= uVar17) {
LAB_0774536c:
                    /* WARNING: Subroutine does not return */
          FUN_04447e4c();
        }
        lVar5 = *(long *)(lVar5 + (long)(int)uVar17 * 8 + 0x20);
        if (lVar5 == 0) break;
        lVar5 = *(long *)(lVar5 + 0x10);
        if (param_3 != 0) {
          if (lVar5 == 0) break;
          uVar11 = (ulong)*(uint *)(lVar5 + 0x18);
          if (0 < (long)(uVar11 << 0x20)) {
            lVar14 = (long)(int)*(uint *)(lVar5 + 0x18);
            piVar12 = (int *)(lVar5 + 0x20);
            do {
              if (uVar11 == 0) goto LAB_0774536c;
              lVar14 = lVar14 + -1;
              uVar11 = uVar11 - 1;
              *piVar12 = *piVar12 + param_3;
              piVar12 = piVar12 + 1;
            } while (lVar14 != 0);
          }
        }
        if (*(char *)(param_2 + 0x69) != '\0') {
          if (lVar5 == 0) break;
          uVar1 = *(uint *)(lVar5 + 0x18);
          if (0 < (int)uVar1) {
            uVar13 = 1;
            do {
              if ((uVar1 <= uVar13 - 1) || (uVar1 <= uVar13)) goto LAB_0774536c;
              lVar14 = lVar5 + (long)(int)uVar13 * 4;
              puVar16 = (undefined4 *)(lVar5 + (long)(int)(uVar13 - 1) * 4 + 0x20);
              uVar2 = *puVar16;
              iVar4 = uVar13 + 2;
              uVar13 = uVar13 + 3;
              *puVar16 = *(undefined4 *)(lVar14 + 0x20);
              *(undefined4 *)(lVar14 + 0x20) = uVar2;
            } while (iVar4 < (int)uVar1);
          }
        }
        lVar14 = *(long *)(param_2 + 0x80);
        if (lVar14 == 0) break;
        if (*(uint *)(lVar14 + 0x18) <= uVar17) goto LAB_0774536c;
        lVar15 = *(long *)(param_1 + 0x78);
        if (lVar15 == 0) break;
        uVar1 = *(uint *)(lVar14 + (long)(int)uVar17 * 4 + 0x20);
        lVar14 = (long)(int)uVar1;
        if (*(uint *)(lVar15 + 0x18) <= uVar1) goto LAB_0774536c;
        lVar15 = *(long *)(lVar15 + lVar14 * 8 + 0x20);
        if (lVar15 == 0) break;
        if ((uint)uVar10 <= uVar1) goto LAB_0774536c;
        if (lVar5 == 0) break;
        piVar12 = (int *)(in_stack_000000a0 + lVar14 * 4 + 0x20);
        FUN_07a61200(lVar5,*(undefined8 *)(lVar15 + 0x10),*piVar12,0);
        lVar15 = *(long *)(param_2 + 0x78);
        if (lVar15 == 0) break;
        if (*(uint *)(lVar15 + 0x18) <= uVar1) goto LAB_0774536c;
        lVar15 = lVar15 + lVar14 * 4;
        iVar4 = *(int *)(lVar5 + 0x18);
        *(int *)(lVar15 + 0x20) = *(int *)(lVar15 + 0x20) + iVar4;
        uVar10 = *(ulong *)(in_stack_000000a0 + 0x18);
        if ((uint)uVar10 <= uVar1) goto LAB_0774536c;
        uVar17 = uVar17 + 1;
        *piVar12 = *piVar12 + iVar4;
        lVar5 = *(long *)(param_2 + 0xd0);
      } while (lVar5 != 0);
    }
  }
LAB_07745348:
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


