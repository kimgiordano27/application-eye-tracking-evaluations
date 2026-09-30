/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.SceneDecorator.SceneDecorator$$TestCollider
ENTRY_POINT: 077583dc
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 92
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs;ray_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_17;paired_field_refs_with_eye_source;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


bool Meta_XR_MRUtilityKit_SceneDecorator_SceneDecorator__TestCollider(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  bool bVar5;
  undefined4 uVar6;
  uint uVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  long *plVar11;
  undefined8 uVar12;
  uint in_w8;
  undefined8 *puVar13;
  long lVar14;
  long unaff_x19;
  uint uVar15;
  long lVar16;
  uint unaff_w21;
  uint unaff_w22;
  uint unaff_w23;
  uint unaff_w24;
  uint unaff_w25;
  int iVar17;
  long unaff_x26;
  int unaff_w27;
  long lVar18;
  long unaff_x29;
  undefined8 *puVar19;
  uint uStack0000000000000054;
  uint uStack000000000000005c;
  undefined8 in_stack_00000060;
  uint uStack0000000000000068;
  long in_stack_00000088;
  
  puVar19 = *(undefined8 **)(unaff_x29 + 0xd78);
  uStack0000000000000068 = in_w8;
  do {
    puVar4 = PTR_DAT_09f32910;
    puVar3 = PTR_DAT_09f328f0;
    puVar2 = PTR_DAT_09f1e870;
    puVar1 = PTR_DAT_09f1e540;
    if (*(int *)(param_1 + 0x18) <= unaff_w27) {
      uVar7 = *(uint *)(unaff_x26 + 0x18);
      uStack0000000000000054 = unaff_w24;
      uStack000000000000005c = unaff_w22;
      if ((int)uVar7 < 1) goto LAB_077585cc;
      lVar16 = 0;
      lVar8 = unaff_x26 + 0x20;
      goto LAB_07758484;
    }
    lVar8 = FUN_05badb74(param_1,unaff_w27,*puVar19);
    if ((lVar8 == 0) || (lVar8 = *(long *)(lVar8 + 0x38), lVar8 == 0)) break;
    iVar17 = *(int *)(lVar8 + 0x18);
    *(undefined4 *)(lVar8 + 0x18) = 0;
    *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
    if (0 < iVar17) {
      FUN_07a61000(*(undefined8 *)(lVar8 + 0x10),0,iVar17,0);
    }
    param_1 = *(long *)(unaff_x19 + 0x98);
    unaff_w27 = unaff_w27 + 1;
  } while (param_1 != 0);
  goto LAB_07758788;
  while( true ) {
    lVar18 = *(long *)(unaff_x19 + 0x90);
    uVar6 = FUN_0952fcb8(lVar9,0);
    if (lVar18 == 0) goto LAB_07758788;
    FUN_0731ca6c(lVar18,uVar6,&stack0x00000088,*(undefined8 *)puVar3);
    if (in_stack_00000088 == 0) {
      if (*(uint *)(unaff_x26 + 0x18) <= uVar15) goto LAB_077587b8;
      plVar11 = *(long **)(lVar8 + lVar16 * 8);
      uVar12 = *(undefined8 *)PTR_DAT_09f30cd0;
      if (plVar11 == (long *)0x0) {
        uVar10 = 0;
      }
      else {
        if (plVar11 == (long *)0x0) goto LAB_07758788;
        uVar10 = (**(code **)(*plVar11 + 0x168))(plVar11,*(undefined8 *)(*plVar11 + 0x170));
      }
      uVar12 = FUN_078b4f58(uVar12,uVar10,*(undefined8 *)puVar4,0);
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_044a54b4(*(long *)puVar1);
      }
      FUN_094c33b0(uVar12,0);
    }
    else {
      if (*(uint *)(unaff_x26 + 0x18) <= uVar15) goto LAB_077587b8;
      lVar9 = *(long *)(in_stack_00000088 + 0x38);
      if (lVar9 == 0) goto LAB_07758788;
      uVar12 = *(undefined8 *)(lVar8 + lVar16 * 8);
      lVar18 = *(long *)(lVar9 + 0x10);
      lVar14 = *(long *)puVar2;
      *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
      if (lVar18 == 0) goto LAB_07758788;
      uVar7 = *(uint *)(lVar9 + 0x18);
      if (uVar7 < *(uint *)(lVar18 + 0x18)) {
        *(uint *)(lVar9 + 0x18) = uVar7 + 1;
        puVar13 = (undefined8 *)(lVar18 + (long)(int)uVar7 * 8 + 0x20);
        *puVar13 = uVar12;
        thunk_FUN_044bb4b4(puVar13);
      }
      else {
        FUN_05bade44(lVar9,uVar12,*(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70)
                    );
      }
    }
    uVar7 = *(uint *)(unaff_x26 + 0x18);
    lVar16 = lVar16 + 1;
    if ((int)uVar7 <= (int)lVar16) break;
LAB_07758484:
    uVar15 = (uint)lVar16;
    in_stack_00000088 = 0;
    if (uVar7 <= uVar15) {
LAB_077587b8:
                    /* WARNING: Subroutine does not return */
      FUN_04447e4c();
    }
    lVar9 = *(long *)(lVar8 + lVar16 * 8);
    if (lVar9 == 0) goto LAB_07758788;
  }
  param_1 = *(long *)(unaff_x19 + 0x98);
  if (param_1 != 0) {
LAB_077585cc:
    iVar17 = 0;
    bVar5 = true;
    uStack0000000000000068 = uStack0000000000000068 & 1;
    do {
      if (*(int *)(param_1 + 0x18) <= iVar17) {
        *(undefined4 *)(unaff_x19 + 0x10) = 1;
        return bVar5;
      }
      lVar8 = FUN_05badb74(param_1,iVar17,*puVar19);
      if ((lVar8 == 0) || (*(long *)(lVar8 + 0x38) == 0)) break;
      if (0 < *(int *)(*(long *)(lVar8 + 0x38) + 0x18)) {
        if ((*(long *)(unaff_x19 + 0x98) == 0) ||
           (lVar8 = FUN_05badb74(*(long *)(unaff_x19 + 0x98),iVar17,*puVar19), lVar8 == 0)) break;
        *(undefined1 *)(lVar8 + 0x40) = 1;
        if ((*(long *)(unaff_x19 + 0x98) == 0) ||
           ((lVar8 = FUN_05badb74(*(long *)(unaff_x19 + 0x98),iVar17,*puVar19), lVar8 == 0 ||
            (*(long *)(lVar8 + 0x38) == 0)))) break;
        uVar12 = FUN_05baf9bc(*(long *)(lVar8 + 0x38),*(undefined8 *)PTR_DAT_09f1e880);
        if (bVar5) {
          if (((*(long *)(unaff_x19 + 0x98) == 0) ||
              (lVar8 = FUN_05badb74(*(long *)(unaff_x19 + 0x98),iVar17,*puVar19), lVar8 == 0)) ||
             (plVar11 = *(long **)(lVar8 + 0x10), plVar11 == (long *)0x0)) break;
          uVar7 = (**(code **)(*plVar11 + 0x8c8))
                            (plVar11,uVar12,in_stack_00000060._4_4_ & 1,unaff_w25 & 1,
                             uStack0000000000000054 & 1,unaff_w23 & 1,uStack000000000000005c & 1,
                             unaff_w21 & 1);
          uVar7 = uVar7 & 1;
        }
        else {
          uVar7 = 0;
        }
        bVar5 = uVar7 != 0;
      }
      param_1 = *(long *)(unaff_x19 + 0x98);
      iVar17 = iVar17 + 1;
    } while (param_1 != 0);
  }
LAB_07758788:
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


