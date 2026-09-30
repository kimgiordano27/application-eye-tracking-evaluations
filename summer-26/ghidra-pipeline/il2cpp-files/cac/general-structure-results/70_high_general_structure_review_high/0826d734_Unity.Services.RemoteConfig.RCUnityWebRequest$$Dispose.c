/*
FUNCTION_NAME: Unity.Services.RemoteConfig.RCUnityWebRequest$$Dispose
ENTRY_POINT: 0826d734
PROGRAM: cac-libil2cpp.so
SCORE: 80
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;telemetry_or_network_hits_2
*/


int Unity_Services_RemoteConfig_RCUnityWebRequest__Dispose(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  bool in_NG;
  uint uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long *unaff_x19;
  long unaff_x20;
  uint *unaff_x21;
  int *unaff_x22;
  long *unaff_x23;
  long unaff_x24;
  long lVar12;
  double dVar13;
  
  lVar12 = -unaff_x24;
  if (!in_NG) {
    lVar12 = unaff_x24;
  }
  dVar13 = (double)FUN_074b6538((double)lVar12,0);
  dVar13 = log10(dVar13);
  iVar3 = *unaff_x22;
  iVar2 = -0x80000000;
  if (dVar13 + 1.0 != INFINITY) {
    iVar2 = (int)(dVar13 + 1.0);
  }
  uVar5 = *unaff_x21;
  iVar1 = iVar3;
  if (iVar3 <= iVar2) {
    iVar1 = iVar2;
  }
  iVar4 = iVar1;
  if (*unaff_x23 < 0) {
    lVar6 = *unaff_x19;
    if (lVar6 == 0) {
LAB_0826d8b0:
                    /* WARNING: Subroutine does not return */
      FUN_03f1362c();
    }
    if (*(uint *)(lVar6 + 0x18) <= uVar5) {
LAB_0826d8b4:
                    /* WARNING: Subroutine does not return */
      FUN_03f13634();
    }
    lVar8 = (long)(int)uVar5;
    uVar5 = uVar5 + 1;
    *(undefined1 *)(lVar6 + lVar8 + 0x20) = *(undefined1 *)(unaff_x20 + 0xbd);
    iVar4 = iVar1 + 1;
  }
  if (0 < iVar1) {
    if (iVar2 <= iVar3) {
      iVar2 = iVar3;
    }
    lVar6 = (long)iVar2 + 3;
    do {
      lVar8 = *(long *)(unaff_x20 + 0xd8);
      if (lVar8 == 0) goto LAB_0826d8b0;
      if ((ulong)*(uint *)(lVar8 + 0x18) <= lVar6 - 4U) goto LAB_0826d8b4;
      lVar7 = *(long *)(unaff_x20 + 0xd0);
      if (lVar7 == 0) goto LAB_0826d8b0;
      lVar9 = *(long *)(lVar8 + lVar6 * 8);
      lVar8 = 0;
      if (lVar9 != 0) {
        lVar8 = lVar12 / lVar9;
      }
      if (*(uint *)(lVar7 + 0x18) <= (uint)lVar8) goto LAB_0826d8b4;
      lVar11 = *unaff_x19;
      if (lVar11 == 0) goto LAB_0826d8b0;
      if (*(uint *)(lVar11 + 0x18) <= uVar5) goto LAB_0826d8b4;
      lVar12 = lVar12 - lVar8 * lVar9;
      lVar9 = (long)(int)uVar5;
      lVar10 = lVar6 + -3;
      lVar6 = lVar6 + -1;
      uVar5 = uVar5 + 1;
      *(undefined1 *)(lVar11 + lVar9 + 0x20) = *(undefined1 *)(lVar7 + lVar8 + 0x20);
    } while (1 < lVar10);
  }
  return iVar4;
}


