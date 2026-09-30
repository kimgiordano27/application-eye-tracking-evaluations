/*
FUNCTION_NAME: OVRPlugin.Qpl.Annotation.Builder$$Copy
ENTRY_POINT: 090c804c
PROGRAM: Hyper-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_11;functionality_eye_api_context_without_clear_sink_hits_4
*/


void OVRPlugin_Qpl_Annotation_Builder__Copy(long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined1 in_ZR;
  undefined4 uVar5;
  undefined8 *puVar6;
  long lVar7;
  uint uVar8;
  long in_x9;
  long lVar9;
  int *in_x10;
  long lVar10;
  uint uVar11;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar12;
  
  while (!(bool)in_ZR) {
    if (*(long *)(in_x10 + -2) == param_3) {
      puVar6 = (undefined8 *)(param_1 + (long)*in_x10 * 0x10 + 0x138);
      goto LAB_090c806c;
    }
    in_x9 = in_x9 + -1;
    in_x10 = in_x10 + 4;
    in_ZR = in_x9 == 0;
  }
  puVar6 = (undefined8 *)FUN_04980e68();
LAB_090c806c:
  uVar5 = (*(code *)*puVar6)();
  iVar2 = *(int *)(unaff_x20 + 0x80);
  iVar1 = *(int *)(unaff_x20 + 0x90) + 1;
  iVar3 = 0;
  if (iVar2 != 0) {
    iVar3 = iVar1 / iVar2;
  }
  lVar7 = *(long *)(unaff_x20 + 0x88);
  *(int *)(unaff_x20 + 0x90) = iVar1 - iVar3 * iVar2;
  *(undefined4 *)(unaff_x20 + 0x94) = uVar5;
  if (lVar7 != 0) {
    lVar9 = 0;
    do {
      uVar8 = (uint)lVar9;
      if ((int)*(uint *)(lVar7 + 0x18) <= (int)uVar8) {
        iVar2 = *(int *)(unaff_x20 + 0x80);
        iVar3 = *(int *)(unaff_x20 + 0x84);
        iVar1 = iVar3;
        if (iVar2 <= iVar3) {
          iVar1 = iVar2;
        }
        iVar4 = 0;
        if (-1 < iVar3) {
          iVar4 = iVar1;
        }
        *(int *)(unaff_x20 + 0x84) = iVar4;
        if (lVar7 != 0) {
          iVar4 = (*(int *)(unaff_x20 + 0x90) + iVar2) - iVar4;
          iVar1 = 0;
          if (iVar2 != 0) {
            iVar1 = iVar4 / iVar2;
          }
          uVar8 = iVar4 - iVar1 * iVar2;
          lVar9 = 0;
          goto OVRPlugin_Qpl_Variant__From;
        }
        break;
      }
      if (*(uint *)(lVar7 + 0x18) <= uVar8) goto LAB_090c8100;
      lVar10 = *(long *)(unaff_x19 + 0x48);
      if (lVar10 == 0) break;
      if (*(uint *)(lVar10 + 0x18) <= uVar8) goto LAB_090c8100;
      lVar7 = *(long *)(lVar7 + lVar9 * 8 + 0x20);
      if (lVar7 == 0) break;
      if (*(uint *)(lVar7 + 0x18) <= *(uint *)(unaff_x20 + 0x90)) goto LAB_090c8100;
      lVar10 = lVar10 + lVar9 * 0x10;
      lVar7 = lVar7 + (long)(int)*(uint *)(unaff_x20 + 0x90) * 0x10;
      lVar9 = lVar9 + 1;
      uVar12 = *(undefined8 *)(lVar10 + 0x20);
      *(undefined8 *)(lVar7 + 0x28) = *(undefined8 *)(lVar10 + 0x28);
      *(undefined8 *)(lVar7 + 0x20) = uVar12;
      lVar7 = *(long *)(unaff_x20 + 0x88);
    } while (lVar7 != 0);
  }
  goto LAB_090c80fc;
  while( true ) {
    if (*(uint *)(lVar7 + 0x18) <= uVar8) goto LAB_090c8100;
    lVar10 = *(long *)(unaff_x19 + 0x48);
    if (lVar10 == 0) break;
    if (*(uint *)(lVar10 + 0x18) <= uVar11) goto LAB_090c8100;
    lVar7 = lVar7 + (long)(int)uVar8 * 0x10;
    uVar12 = *(undefined8 *)(lVar7 + 0x20);
    lVar10 = lVar10 + lVar9 * 0x10;
    lVar9 = lVar9 + 1;
    *(undefined8 *)(lVar10 + 0x28) = *(undefined8 *)(lVar7 + 0x28);
    *(undefined8 *)(lVar10 + 0x20) = uVar12;
    lVar7 = *(long *)(unaff_x20 + 0x88);
    if (lVar7 == 0) break;
OVRPlugin_Qpl_Variant__From:
    uVar11 = (uint)lVar9;
    if ((int)*(uint *)(lVar7 + 0x18) <= (int)uVar11) {
      return;
    }
    if (*(uint *)(lVar7 + 0x18) <= uVar11) {
LAB_090c8100:
                    /* WARNING: Subroutine does not return */
      FUN_04948194();
    }
    lVar7 = *(long *)(lVar7 + lVar9 * 8 + 0x20);
    if (lVar7 == 0) break;
  }
LAB_090c80fc:
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


