/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Utils$$LerpPosition
ENTRY_POINT: 06dd5714
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_13;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


long Meta_XR_ImmersiveDebugger_UserInterface_Utils__LerpPosition
               (long *param_1,long *param_2,undefined8 param_3,undefined8 param_4,int param_5,
               long param_6)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  int iVar9;
  long lVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  int iStack000000000000000c;
  
  iStack000000000000000c = 0;
  if (param_2 != (long *)0x0) {
    uVar3 = (**(code **)(*param_2 + 0x738))
                      (param_2,&stack0x0000000c,*(undefined8 *)(*param_2 + 0x740));
    if ((uVar3 & 1) == 0) {
      iStack000000000000000c = 0x20;
    }
    else {
      if (param_5 < iStack000000000000000c) {
        FUN_0799b3e4(param_2,param_5,0);
      }
      if (0xffff < iStack000000000000000c) {
        iStack000000000000000c = 0xffff;
      }
    }
    iVar9 = 0;
    uVar13 = 0;
    lVar10 = 0;
    do {
      iVar2 = iStack000000000000000c;
      lVar4 = **(long **)(*(long *)(param_6 + 0x20) + 0xc0);
      if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_03d8f26c();
      }
      lVar4 = FUN_03d2d394(lVar4,iVar2);
      if (lVar4 == 0) break;
      iVar2 = *(int *)(lVar4 + 0x18);
      if (iVar2 < 1) {
        iVar12 = 0;
      }
      else {
        iVar12 = 0;
        do {
          iVar1 = (**(code **)(*param_1 + 0x178))
                            (param_1,param_2,param_3,param_4,lVar4,iVar12,iVar2 - iVar12,
                             *(undefined8 *)(*param_1 + 0x180));
          if (iVar1 == 0) break;
          iVar2 = *(int *)(lVar4 + 0x18);
          iVar12 = iVar1 + iVar12;
        } while (iVar12 < iVar2);
      }
      if (param_5 - iVar12 < iVar9) {
        FUN_0799b3e4(param_2,param_5,0);
      }
      iVar9 = iVar12 + iVar9;
      iVar2 = (int)*(undefined8 *)(lVar4 + 0x18);
      if (iVar12 < iVar2) {
LAB_06dd58c8:
        if (((int)uVar13 < 1) && (iVar9 == iVar2)) {
          return lVar4;
        }
        lVar6 = **(long **)(*(long *)(param_6 + 0x20) + 0xc0);
        if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
          lVar6 = FUN_03d8f26c();
        }
        lVar6 = FUN_03d2d394(lVar6,iVar9);
        if ((int)uVar13 < 1) {
          iVar2 = 0;
          goto LAB_06dd5978;
        }
        if (lVar10 == 0) break;
        uVar8 = *(undefined8 *)(lVar10 + 0x18);
        iVar2 = 0;
        uVar11 = 0;
        goto LAB_06dd591c;
      }
      iVar2 = (**(code **)(*param_2 + 0x198))(param_2,*(undefined8 *)(*param_2 + 0x1a0));
      if (iVar2 == 0xf) {
        iVar2 = (int)*(undefined8 *)(lVar4 + 0x18);
        goto LAB_06dd58c8;
      }
      if (lVar10 == 0) {
        lVar10 = *(long *)(*(long *)(*(long *)(param_6 + 0x20) + 0xc0) + 0x28);
        if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
          lVar10 = FUN_03d8f26c();
        }
        lVar10 = FUN_03d2d394(lVar10,0x20);
        if (lVar10 == 0) break;
      }
      if (*(uint *)(lVar10 + 0x18) <= uVar13) goto LAB_06dd59bc;
      plVar5 = (long *)(lVar10 + (long)(int)uVar13 * 8 + 0x20);
      *plVar5 = lVar4;
      uVar13 = uVar13 + 1;
      thunk_FUN_03d1023c(plVar5,lVar4);
      iStack000000000000000c = iStack000000000000000c << 1;
    } while( true );
  }
LAB_06dd59b8:
                    /* WARNING: Subroutine does not return */
  FUN_03d2d548();
LAB_06dd591c:
  if ((uint)uVar8 <= uVar11) {
LAB_06dd59bc:
                    /* WARNING: Subroutine does not return */
    FUN_03d2d550();
  }
  plVar5 = (long *)(lVar10 + (long)(int)uVar11 * 8 + 0x20);
  lVar7 = *plVar5;
  if (lVar7 == 0) goto LAB_06dd59b8;
  FUN_0719b94c(lVar7,0,lVar6,iVar2,*(undefined4 *)(lVar7 + 0x18),0);
  uVar8 = *(undefined8 *)(lVar10 + 0x18);
  if ((uint)uVar8 <= uVar11) goto LAB_06dd59bc;
  lVar7 = *plVar5;
  if (lVar7 == 0) goto LAB_06dd59b8;
  uVar11 = uVar11 + 1;
  iVar2 = iVar2 + *(int *)(lVar7 + 0x18);
  if (uVar13 == uVar11) {
LAB_06dd5978:
    FUN_0719b94c(lVar4,0,lVar6,iVar2,iVar9 - iVar2,0);
    return lVar6;
  }
  goto LAB_06dd591c;
}


