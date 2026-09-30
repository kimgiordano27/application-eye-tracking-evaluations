/*
FUNCTION_NAME: OVRManager$$remove_AudioInChanged
ENTRY_POINT: 0572d840
PROGRAM: Untangled-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0572db0c) */

undefined8
OVRManager__remove_AudioInChanged(long *param_1,int param_2,long param_3,uint param_4,uint param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  int *piVar8;
  undefined8 uVar9;
  
  plVar3 = param_1;
  if ((bRam00000000071c38bf & 1) == 0) {
    FUN_02f07e70(PTR_DAT_06d01f60);
    FUN_02f07e70(PTR_DAT_06d03d70);
    plVar3 = (long *)FUN_02f07e70(PTR_DAT_06d02048);
    bRam00000000071c38bf = 1;
  }
  uVar4 = FUN_0572e2a0(plVar3,param_3);
  puVar2 = PTR_DAT_06d03d70;
  if ((uVar4 & 1) == 0) {
    uVar9 = FUN_0573018c(param_3);
                    /* WARNING: Could not recover jumptable at 0x0572d954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar9 = (**(code **)(*param_1 + 0x648))
                      (param_1,param_2,uVar9,param_4 & 1,param_5 & 1,
                       *(undefined8 *)(*param_1 + 0x650));
    return uVar9;
  }
  if (param_3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  uVar9 = *(undefined8 *)PTR_DAT_06d03d70;
  lVar5 = thunk_FUN_02ef170c(param_3,uVar9);
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f08440(param_3,uVar9);
  }
  lVar5 = *(long *)puVar2;
  plVar3 = (long *)thunk_FUN_02ef170c(param_3,lVar5);
  if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f08440(param_3,lVar5);
  }
  lVar7 = *plVar3;
  uVar4 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar4 != 0) {
    piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == lVar5) {
        puVar6 = (undefined8 *)(lVar7 + (long)*piVar8 * 0x10 + 0x138);
        goto LAB_0572d964;
      }
      uVar4 = uVar4 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar4 != 0);
  }
  puVar6 = (undefined8 *)FUN_02eea86c(plVar3,lVar5,0);
LAB_0572d964:
  plVar3 = (long *)(*(code *)*puVar6)(plVar3,puVar6[1]);
  puVar2 = PTR_DAT_06d02048;
  if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  do {
    lVar7 = *plVar3;
    lVar5 = *(long *)puVar2;
    uVar4 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar4 != 0) {
      piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == lVar5) {
          puVar6 = (undefined8 *)(lVar7 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_0572d9cc;
        }
        uVar4 = uVar4 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar4 != 0);
    }
    puVar6 = (undefined8 *)FUN_02eea86c(plVar3,lVar5,0);
LAB_0572d9cc:
    uVar4 = (*(code *)*puVar6)(plVar3,puVar6[1]);
    puVar1 = PTR_DAT_06d01f60;
    if ((uVar4 & 1) == 0) break;
    lVar7 = *plVar3;
    lVar5 = *(long *)puVar2;
    uVar4 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar4 != 0) {
      piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == lVar5) {
          puVar6 = (undefined8 *)(lVar7 + (long)(*piVar8 + 1) * 0x10 + 0x138);
          goto LAB_0572da2c;
        }
        uVar4 = uVar4 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar4 != 0);
    }
    puVar6 = (undefined8 *)FUN_02eea86c(plVar3,lVar5,1);
LAB_0572da2c:
    uVar9 = (*(code *)*puVar6)(plVar3,puVar6[1]);
    FUN_0572d83c(param_1,param_2,uVar9,param_4 & 1,param_5 & 1);
    param_2 = param_2 + 1;
  } while( true );
  plVar3 = (long *)thunk_FUN_02ef170c(plVar3,*(undefined8 *)PTR_DAT_06d01f60);
  if (plVar3 != (long *)0x0) {
    lVar5 = *plVar3;
    uVar4 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar4 != 0) {
      piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)puVar1) {
          puVar6 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_0572dac4;
        }
        uVar4 = uVar4 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar4 != 0);
    }
    puVar6 = (undefined8 *)FUN_02eea86c(plVar3,*(long *)puVar1,0);
LAB_0572dac4:
    (*(code *)*puVar6)(plVar3,puVar6[1]);
  }
  return 1;
}


