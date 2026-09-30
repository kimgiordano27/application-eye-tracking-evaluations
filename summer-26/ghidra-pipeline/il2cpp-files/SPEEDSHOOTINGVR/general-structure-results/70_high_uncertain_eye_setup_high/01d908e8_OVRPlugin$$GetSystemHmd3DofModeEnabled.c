/*
FUNCTION_NAME: OVRPlugin$$GetSystemHmd3DofModeEnabled
ENTRY_POINT: 01d908e8
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 86
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_8;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_4
*/


void OVRPlugin__GetSystemHmd3DofModeEnabled(long param_1,long param_2)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  ulong uVar9;
  long *plVar10;
  uint uVar11;
  
  puVar3 = PTR_DAT_02359868;
  puVar2 = PTR_DAT_0234bc58;
  if ((DAT_0247d86f & 1) == 0) {
    FUN_00fdc2e4(PTR_DAT_02359868);
    FUN_00fdc2e4(PTR_DAT_02359828);
    FUN_00fdc2e4(PTR_DAT_02359838);
    FUN_00fdc2e4(PTR_DAT_0234bc58);
    FUN_00fdc2e4(PTR_DAT_02359830);
    DAT_0247d86f = 1;
  }
  uVar8 = *(undefined8 *)puVar3;
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01022c14();
  }
  uVar8 = FUN_01d5e86c(uVar8,0);
  if (param_2 == 0) {
LAB_01d90af0:
                    /* WARNING: Subroutine does not return */
    FUN_00fdc534();
  }
  plVar4 = (long *)FUN_01c9f7dc(param_2,*(undefined8 *)PTR_DAT_02359830,uVar8,0);
  if (plVar4 == (long *)0x0) {
    plVar7 = (long *)FUN_00fdc388(*(undefined8 *)PTR_DAT_02359838,0);
  }
  else {
    bVar1 = *(byte *)(*(long *)PTR_DAT_02359828 + 0x130);
    if ((*(byte *)(*plVar4 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*plVar4 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_02359828)) {
                    /* WARNING: Subroutine does not return */
      FUN_00fdc8d0(plVar4);
    }
    uVar11 = 0;
    plVar7 = plVar4;
    do {
      plVar7 = (long *)plVar7[8];
      uVar11 = uVar11 + 1;
    } while (plVar7 != (long *)0x0);
    if (uVar11 == 1) {
      if (plVar4 == (long *)0x0) goto LAB_01d90af0;
      uVar8 = FUN_01d90b0c(plVar4,param_2,0);
      goto OVRPlugin__GetHmdColorDesc;
    }
    plVar7 = (long *)FUN_00fdc388(*(undefined8 *)PTR_DAT_02359838,uVar11);
    if (0 < (int)uVar11) {
      uVar9 = 0;
      plVar10 = plVar7 + 4;
      do {
        if ((plVar4 == (long *)0x0) ||
           (lVar5 = FUN_01d90b0c(plVar4,param_2,uVar9 & 0xffffffff), plVar7 == (long *)0x0))
        goto LAB_01d90af0;
        if ((lVar5 != 0) &&
           (lVar6 = thunk_FUN_0103ffe0(lVar5,*(undefined8 *)(*plVar7 + 0x40)), lVar6 == 0)) {
          uVar8 = thunk_FUN_01058ef0();
                    /* WARNING: Subroutine does not return */
          FUN_00fdc400(uVar8,0);
        }
        if (*(uint *)(plVar7 + 3) <= uVar9) {
                    /* WARNING: Subroutine does not return */
          FUN_00fdc53c();
        }
        *plVar10 = lVar5;
        thunk_FUN_0106e12c(plVar10,lVar5);
        plVar4 = (long *)plVar4[8];
        uVar9 = uVar9 + 1;
        plVar10 = plVar10 + 1;
      } while (uVar11 != uVar9);
    }
  }
  uVar8 = FUN_01d9064c(plVar7);
OVRPlugin__GetHmdColorDesc:
  *(undefined8 *)(param_1 + 0x10) = uVar8;
  thunk_FUN_0106e12c((undefined8 *)(param_1 + 0x10),uVar8);
  return;
}


