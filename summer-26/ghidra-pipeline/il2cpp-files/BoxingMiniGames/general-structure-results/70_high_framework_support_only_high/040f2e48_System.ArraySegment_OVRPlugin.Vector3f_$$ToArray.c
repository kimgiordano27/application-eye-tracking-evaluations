/*
FUNCTION_NAME: System.ArraySegment<OVRPlugin.Vector3f>$$ToArray
ENTRY_POINT: 040f2e48
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_ArraySegment<OVRPlugin_Vector3f>__ToArray(long param_1)

{
  int iVar1;
  uint uVar2;
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  int iVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  int unaff_w22;
  undefined8 *unaff_x24;
  
  while (!(bool)in_ZR && in_NG == in_OV) {
    if ((param_1 == 0) ||
       (plVar4 = (long *)FUN_0459ed6c(param_1,unaff_w22,
                                      *(undefined8 *)
                                       (*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x90)),
       unaff_x21 == 0)) goto LAB_040f2fe8;
    lVar6 = *(long *)(unaff_x21 + 0x10);
    *(int *)(unaff_x21 + 0x1c) = *(int *)(unaff_x21 + 0x1c) + 1;
    if (lVar6 == 0) goto LAB_040f2fe8;
    uVar2 = *(uint *)(unaff_x21 + 0x18);
    if (uVar2 < *(uint *)(lVar6 + 0x18)) {
      *(uint *)(unaff_x21 + 0x18) = uVar2 + 1;
      plVar5 = (long *)(lVar6 + (long)(int)uVar2 * 8 + 0x20);
      *plVar5 = (long)plVar4;
      thunk_FUN_036b7ad0(plVar5,plVar4);
    }
    else {
      FUN_0459f03c();
    }
    if ((plVar4 == (long *)0x0) ||
       (lVar6 = (**(code **)(*plVar4 + 0x178))(plVar4,*(undefined8 *)(*plVar4 + 0x180)), lVar6 == 0)
       ) goto LAB_040f2fe8;
    FUN_0732b804(lVar6,0);
    iVar3 = (**(code **)(*unaff_x20 + 0x178))();
    unaff_w22 = unaff_w22 + 1;
    if ((unaff_x20[5] == 0) ||
       (lVar6 = FUN_0459ed6c(unaff_x20[5],unaff_w22,
                             *(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x90)),
       lVar6 == 0)) goto LAB_040f2fe8;
    iVar1 = *(int *)(lVar6 + 0x20);
    param_1 = unaff_x20[5];
    in_OV = SBORROW4(iVar3,iVar1);
    in_NG = iVar3 - iVar1 < 0;
    in_ZR = iVar3 == iVar1;
  }
  if (((param_1 != 0) &&
      (FUN_045a089c(param_1,0,unaff_w22,
                    *(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xc0)),
      unaff_x20[5] != 0)) && (FUN_0459f24c(), unaff_x21 != 0)) {
    iVar3 = *(int *)(unaff_x21 + 0x18);
    *(undefined4 *)(unaff_x21 + 0x18) = 0;
    *(int *)(unaff_x21 + 0x1c) = *(int *)(unaff_x21 + 0x1c) + 1;
    if (0 < iVar3) {
      FUN_05e3b0f4(*unaff_x24,0,iVar3,0);
    }
    lVar6 = unaff_x20[5];
    if (lVar6 != 0) {
      iVar3 = 0;
      do {
        if (*(int *)(lVar6 + 0x18) <= iVar3) {
          *(undefined1 *)(unaff_x20 + 0x12) = 0;
          return;
        }
        (**(code **)(*unaff_x20 + 0x178))();
        if (unaff_x20[5] == 0) break;
        FUN_0459ed6c(unaff_x20[5],iVar3,
                     *(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x90));
        FUN_052a1908();
        lVar6 = unaff_x20[5];
        iVar3 = iVar3 + 1;
      } while (lVar6 != 0);
    }
  }
LAB_040f2fe8:
                    /* WARNING: Subroutine does not return */
  FUN_03642c18();
}


