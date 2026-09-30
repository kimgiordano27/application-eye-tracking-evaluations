/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.Watch<Vector3>$$get_Values
ENTRY_POINT: 02783cc0
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 93
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_1;validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Meta_XR_ImmersiveDebugger_Manager_Watch<Vector3>__get_Values(undefined8 param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  uint unaff_w19;
  long unaff_x20;
  long lVar8;
  long unaff_x22;
  ulong uVar9;
  long *plVar10;
  
  iVar1 = thunk_FUN_01dff4e0(param_1,0);
  if (iVar1 != 1) {
    FUN_033b2d60(7,0);
  }
  iVar1 = thunk_FUN_01dff49c();
  if (iVar1 != 0) {
    FUN_033b2d60(6,0);
  }
  uVar2 = FUN_033aadfc();
  if (uVar2 < unaff_w19) {
    OVRManager_PassthroughCapabilities___ctor(0);
  }
  iVar1 = FUN_033aadfc();
  if (*(long *)(unaff_x20 + 0x10) != 0) {
    iVar3 = FUN_02a88c20(*(long *)(unaff_x20 + 0x10),
                         *(undefined8 *)(*(long *)(*(long *)(unaff_x22 + 0x20) + 0xc0) + 0x28));
    if ((int)(iVar1 - unaff_w19) < iVar3) {
      FUN_033b2d60(5,0);
    }
    lVar7 = *(long *)(*(long *)(*(long *)(unaff_x22 + 0x20) + 0xc0) + 0x20);
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      FUN_01dde7f8(lVar7);
    }
    lVar7 = thunk_FUN_01de26bc();
    if (lVar7 != 0) {
      FUN_02783a30();
      return;
    }
    plVar4 = (long *)thunk_FUN_01de26bc();
    if (plVar4 == (long *)0x0) {
      FUN_033b3618();
    }
    lVar7 = *(long *)(unaff_x20 + 0x10);
    if (lVar7 != 0) {
      uVar2 = *(uint *)(lVar7 + 0x20);
      if (0 < (int)uVar2) {
        lVar7 = *(long *)(lVar7 + 0x18);
        if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01d7db70();
        }
        uVar9 = 0;
        plVar10 = (long *)(lVar7 + 0x40);
        do {
          if (*(uint *)(lVar7 + 0x18) <= uVar9) {
                    /* WARNING: Subroutine does not return */
            FUN_01d7db78();
          }
          if (-1 < (int)plVar10[-4]) {
            if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01d7db70();
            }
            lVar8 = *plVar10;
            if ((lVar8 != 0) &&
               (lVar5 = thunk_FUN_01de26bc(lVar8,*(undefined8 *)(*plVar4 + 0x40)), lVar5 == 0)) {
              uVar6 = thunk_FUN_01dfb5cc();
                    /* WARNING: Subroutine does not return */
              FUN_01d7da3c(uVar6,0);
            }
            if (*(uint *)(plVar4 + 3) <= unaff_w19) {
                    /* WARNING: Subroutine does not return */
              FUN_01d7db78();
            }
            plVar4[(long)(int)unaff_w19 + 4] = lVar8;
            thunk_FUN_01e10808(plVar4 + (long)(int)unaff_w19 + 4,lVar8);
            unaff_w19 = unaff_w19 + 1;
          }
          uVar9 = uVar9 + 1;
          plVar10 = plVar10 + 5;
        } while (uVar2 != uVar9);
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01d7db70();
}


