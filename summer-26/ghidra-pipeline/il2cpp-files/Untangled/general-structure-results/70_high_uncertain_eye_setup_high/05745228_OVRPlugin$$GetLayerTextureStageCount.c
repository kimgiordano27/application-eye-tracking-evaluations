/*
FUNCTION_NAME: OVRPlugin$$GetLayerTextureStageCount
ENTRY_POINT: 05745228
PROGRAM: Untangled-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin__GetLayerTextureStageCount(long param_1)

{
  int iVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  uint uVar6;
  undefined8 uVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  
  if ((DAT_071c39b5 & 1) == 0) {
    FUN_02f07e70(PTR_DAT_06d02bd0);
    FUN_02f07e70(PTR_DAT_06d01eb0);
    DAT_071c39b5 = 1;
  }
  iVar1 = *(int *)(param_1 + 0x10);
  if (iVar1 == 2) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  }
  else {
    if (iVar1 == 1) {
      *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
      goto LAB_057453ec;
    }
    if (iVar1 == 0) {
      *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
      lVar10 = *(long *)(param_1 + 0x38);
      uVar7 = *(undefined8 *)(param_1 + 0x28);
      if (*(int *)(*(long *)PTR_DAT_06d01eb0 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
      }
      uVar3 = FUN_05619d34(uVar7,0,0);
      puVar2 = PTR_DAT_06d02bd0;
      if ((uVar3 & 1) != 0) {
        thunk_FUN_02f239f0(PTR_DAT_06d02610);
        uVar7 = thunk_FUN_02ef1808();
        uVar5 = thunk_FUN_02f239f0(PTR_DAT_06d045c0);
        FUN_05558508(uVar7,uVar5,0);
        uVar5 = thunk_FUN_02f239f0(PTR_DAT_06d591a0);
                    /* WARNING: Subroutine does not return */
        FUN_02f07f94(uVar7,uVar5);
      }
      if (lVar10 != 0) {
        lVar8 = *(long *)(lVar10 + 0x28);
        if (lVar8 == 0) {
          return 0;
        }
        lVar4 = thunk_FUN_02ef170c(lVar8,*(undefined8 *)PTR_DAT_06d02bd0);
        plVar9 = (long *)(param_1 + 0x40);
        *plVar9 = lVar4;
        uVar7 = thunk_FUN_02ef170c(lVar8,*(undefined8 *)puVar2);
        thunk_FUN_02f411dc(plVar9,uVar7);
        lVar8 = *plVar9;
        if (lVar8 == 0) {
          plVar9 = *(long **)(param_1 + 0x28);
          if (plVar9 != (long *)0x0) {
            uVar3 = (**(code **)(*plVar9 + 0x8f8))
                              (plVar9,*(undefined8 *)(lVar10 + 0x28),
                               *(undefined8 *)(*plVar9 + 0x900));
            if ((uVar3 & 1) == 0) {
              return 0;
            }
            *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(lVar10 + 0x28);
            thunk_FUN_02f411dc((undefined8 *)(param_1 + 0x18));
            *(undefined4 *)(param_1 + 0x10) = 2;
            return 1;
          }
        }
        else {
          uVar6 = 0;
          *(undefined4 *)(param_1 + 0x48) = 0;
          while (lVar8 != 0) {
            if ((int)*(uint *)(lVar8 + 0x18) <= (int)uVar6) {
              return 0;
            }
            if (*(uint *)(lVar8 + 0x18) <= uVar6) {
                    /* WARNING: Subroutine does not return */
              FUN_02f080c8();
            }
            lVar10 = *(long *)(lVar8 + (long)(int)uVar6 * 8 + 0x20);
            if (lVar10 == 0) {
              return 0;
            }
            plVar9 = *(long **)(param_1 + 0x28);
            if (plVar9 == (long *)0x0) break;
            uVar3 = (**(code **)(*plVar9 + 0x8f8))(plVar9,lVar10,*(undefined8 *)(*plVar9 + 0x900));
            if ((uVar3 & 1) != 0) {
              *(long *)(param_1 + 0x18) = lVar10;
              thunk_FUN_02f411dc((long *)(param_1 + 0x18),lVar10);
              *(undefined4 *)(param_1 + 0x10) = 1;
              return 1;
            }
LAB_057453ec:
            lVar8 = *(long *)(param_1 + 0x40);
            uVar6 = *(int *)(param_1 + 0x48) + 1;
            *(uint *)(param_1 + 0x48) = uVar6;
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
  }
  return 0;
}


