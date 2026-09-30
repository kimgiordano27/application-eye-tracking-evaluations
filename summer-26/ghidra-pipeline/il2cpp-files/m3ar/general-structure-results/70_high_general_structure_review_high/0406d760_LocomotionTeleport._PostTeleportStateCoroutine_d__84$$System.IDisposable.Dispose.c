/*
FUNCTION_NAME: LocomotionTeleport.<PostTeleportStateCoroutine>d__84$$System.IDisposable.Dispose
ENTRY_POINT: 0406d760
PROGRAM: m3ar-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


void LocomotionTeleport_<PostTeleportStateCoroutine>d__84__System_IDisposable_Dispose(void)

{
  ulong uVar1;
  long *plVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  long *plVar8;
  long unaff_x19;
  long *unaff_x20;
  int iVar9;
  long lVar10;
  long *plVar11;
  undefined1 auVar12 [16];
  
  iVar9 = 0;
  do {
    lVar4 = FUN_04097b74();
    plVar8 = (long *)unaff_x20[1];
    if (plVar8 < (long *)unaff_x20[2]) {
      plVar11 = plVar8 + 1;
      *plVar8 = lVar4 + 0x18;
      unaff_x20[1] = (long)plVar11;
    }
    else {
      lVar10 = (long)plVar8 - *unaff_x20 >> 3;
      uVar1 = lVar10 + 1;
      if (uVar1 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04034c40();
      }
      uVar5 = unaff_x20[2] - *unaff_x20;
      uVar7 = (long)uVar5 >> 2;
      if (uVar7 <= uVar1) {
        uVar7 = uVar1;
      }
      if (0x7ffffffffffffff7 < uVar5) {
        uVar7 = 0x1fffffffffffffff;
      }
      if (uVar7 == 0) {
        auVar12 = ZEXT816(0);
      }
      else {
        auVar12 = FUN_0403e7e8(unaff_x20 + 2);
      }
      plVar8 = (long *)(auVar12._0_8_ + lVar10 * 8);
      plVar11 = plVar8 + 1;
      *plVar8 = lVar4 + 0x18;
      plVar2 = (long *)*unaff_x20;
      plVar6 = (long *)unaff_x20[1];
      if (plVar6 != plVar2) {
        do {
          plVar6 = plVar6 + -1;
          plVar8 = plVar8 + -1;
          *plVar8 = *plVar6;
        } while (plVar6 != plVar2);
        plVar6 = (long *)*unaff_x20;
      }
      *unaff_x20 = (long)plVar8;
      unaff_x20[1] = (long)plVar11;
      unaff_x20[2] = auVar12._0_8_ + auVar12._8_8_ * 8;
      if (plVar6 != (long *)0x0) {
        operator_delete(plVar6);
      }
    }
    iVar3 = *(int *)(unaff_x19 + 0x10);
    iVar9 = iVar9 + 1;
    unaff_x20[1] = (long)plVar11;
  } while (iVar9 < iVar3);
  return;
}


