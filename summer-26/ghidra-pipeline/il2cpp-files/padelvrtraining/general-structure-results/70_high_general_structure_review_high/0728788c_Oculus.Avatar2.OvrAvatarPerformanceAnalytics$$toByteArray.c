/*
FUNCTION_NAME: Oculus.Avatar2.OvrAvatarPerformanceAnalytics$$toByteArray
ENTRY_POINT: 0728788c
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_4
*/


void Oculus_Avatar2_OvrAvatarPerformanceAnalytics__toByteArray(undefined8 *param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  long unaff_x22;
  long *plVar11;
  
  (*(code *)*param_1)();
  FUN_07286dac();
  if (unaff_x20 == (long *)0x0) goto Oculus_Avatar2_OvrAvatarRenderable__get_viewFlags;
  (**(code **)(*unaff_x20 + 0x178))();
  puVar1 = PTR_DAT_09216130;
  plVar11 = *(long **)(unaff_x19 + 0x28);
  if (plVar11 != (long *)0x0) {
    lVar8 = *plVar11;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_09216130) {
          puVar3 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
          goto Oculus_Avatar2_OvrAvatarPerformanceAnalytics__begin;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar3 = (undefined8 *)FUN_03d8f370(plVar11,*(long *)PTR_DAT_09216130,0);
Oculus_Avatar2_OvrAvatarPerformanceAnalytics__begin:
    iVar2 = (*(code *)*puVar3)(plVar11,puVar3[1]);
    if (2 < iVar2) {
      if (unaff_x22 == 0) goto Oculus_Avatar2_OvrAvatarRenderable__get_viewFlags;
      plVar11 = *(long **)(unaff_x19 + 0x28);
      uVar4 = FUN_07246840();
      if (*(int *)(*(long *)PTR_DAT_091a2ae0 + 0xe0) == 0) {
        thunk_FUN_03db619c(*(long *)PTR_DAT_091a2ae0);
      }
      uVar5 = FUN_071392b4(0);
      if (unaff_x21 == 0) goto Oculus_Avatar2_OvrAvatarRenderable__get_viewFlags;
      uVar6 = thunk_FUN_03d9f2a8();
      uVar7 = thunk_FUN_03d9f2a8();
      uVar5 = FUN_072676dc(*(undefined8 *)PTR_DAT_092187e0,uVar5,uVar6,uVar7,0);
      if (*(int *)(*(long *)PTR_DAT_091ffa48 + 0xe0) == 0) {
        thunk_FUN_03db619c(*(long *)PTR_DAT_091ffa48);
      }
      uVar4 = FUN_07209294(0,uVar4,uVar5,0);
      if (plVar11 == (long *)0x0) goto Oculus_Avatar2_OvrAvatarRenderable__get_viewFlags;
      lVar8 = *plVar11;
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)puVar1) {
            puVar3 = (undefined8 *)(lVar8 + (long)(*piVar10 + 1) * 0x10 + 0x138);
            goto FUN_07287a60;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar3 = (undefined8 *)FUN_03d8f370(plVar11,*(long *)puVar1,1);
FUN_07287a60:
      (*(code *)*puVar3)(plVar11,3,uVar4,0,puVar3[1]);
    }
  }
  lVar8 = *(long *)(unaff_x19 + 0x48);
  if (lVar8 != 0) {
    FUN_05a3af6c(lVar8,*(int *)(lVar8 + 0x18) + -1,*(undefined8 *)PTR_DAT_092187d8);
    return;
  }
Oculus_Avatar2_OvrAvatarRenderable__get_viewFlags:
                    /* WARNING: Subroutine does not return */
  FUN_03d2d548();
}


