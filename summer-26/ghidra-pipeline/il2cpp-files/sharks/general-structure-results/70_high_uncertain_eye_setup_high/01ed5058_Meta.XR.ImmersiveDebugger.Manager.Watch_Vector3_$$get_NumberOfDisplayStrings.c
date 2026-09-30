/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.Watch<Vector3>$$get_NumberOfDisplayStrings
ENTRY_POINT: 01ed5058
PROGRAM: sharks-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_10;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Manager_Watch<Vector3>__get_NumberOfDisplayStrings
               (ulong param_1,long param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  uint unaff_w19;
  long unaff_x20;
  void *__src;
  long unaff_x22;
  long unaff_x23;
  ulong uVar9;
  
  if ((param_1 & 1) == 0) {
    FUN_017fc350(PTR_DAT_037f2f98);
    *(undefined1 *)(unaff_x23 + 0xfa3) = 1;
  }
  if (unaff_x22 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02be0698(3,0);
  }
  iVar1 = thunk_FUN_0187e988();
  if (iVar1 != 1) {
    FUN_02bef2ac(7,0);
  }
  iVar1 = thunk_FUN_0187e944();
  if (iVar1 != 0) {
    FUN_02bef2ac(6,0);
  }
  uVar2 = FUN_02be7118();
  if (uVar2 < unaff_w19) {
    FUN_02befb2c(0);
  }
  iVar1 = FUN_02be7118();
  if (*(long *)(param_2 + 0x10) != 0) {
    iVar3 = FUN_0213e620(*(long *)(param_2 + 0x10),
                         *(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x28));
    if ((int)(iVar1 - unaff_w19) < iVar3) {
      FUN_02bef2ac(5,0);
    }
    lVar8 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x20);
    if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
      FUN_0185daa4(lVar8);
    }
    lVar8 = thunk_FUN_01861ac0();
    if (lVar8 != 0) {
      FUN_01ed4d4c(param_2,lVar8,unaff_w19,
                   *(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x58));
      return;
    }
    plVar4 = (long *)thunk_FUN_01861ac0();
    if (plVar4 == (long *)0x0) {
      FUN_02befb64();
    }
    lVar8 = *(long *)(param_2 + 0x10);
    if (lVar8 != 0) {
      uVar2 = *(uint *)(lVar8 + 0x20);
      if (0 < (int)uVar2) {
        lVar8 = *(long *)(lVar8 + 0x18);
        if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_017fc5a8();
        }
        uVar9 = 0;
        __src = (void *)(lVar8 + 0x38);
        do {
          if (*(uint *)(lVar8 + 0x18) <= uVar9) {
                    /* WARNING: Subroutine does not return */
            FUN_017fc5b0();
          }
          if (-1 < *(int *)((long)__src + -0x18)) {
            memmove(&stack0x00000008,__src,0x48);
            lVar5 = thunk_FUN_018617ec(*(undefined8 *)
                                        (*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x40),
                                       &stack0x00000008);
            if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_017fc5a8();
            }
            if ((lVar5 != 0) &&
               (lVar6 = thunk_FUN_01861ac0(lVar5,*(undefined8 *)(*plVar4 + 0x40)), lVar6 == 0)) {
              uVar7 = thunk_FUN_0187aa4c();
                    /* WARNING: Subroutine does not return */
              FUN_017fc474(uVar7,0);
            }
            if (*(uint *)(plVar4 + 3) <= unaff_w19) {
                    /* WARNING: Subroutine does not return */
              FUN_017fc5b0();
            }
            plVar4[(long)(int)unaff_w19 + 4] = lVar5;
            thunk_FUN_0188fd20(plVar4 + (long)(int)unaff_w19 + 4,lVar5);
            unaff_w19 = unaff_w19 + 1;
          }
          uVar9 = uVar9 + 1;
          __src = (void *)((long)__src + 0x60);
        } while (uVar2 != uVar9);
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_017fc5a8();
}


