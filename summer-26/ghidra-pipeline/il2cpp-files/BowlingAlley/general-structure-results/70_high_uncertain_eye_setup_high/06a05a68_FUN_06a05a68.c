/*
FUNCTION_NAME: FUN_06a05a68
ENTRY_POINT: 06a05a68
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_3
*/


/* WARNING: Removing unreachable block (ram,0x06a05cac) */

void FUN_06a05a68(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  long *plVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  
  if ((DAT_076e289b & 1) == 0) {
    thunk_FUN_032e1da0(PTR_DAT_07279f60);
    thunk_FUN_032e1da0(Method_OVRTask<List<OVRPlugin_Result>>_GetAwaiter__);
    thunk_FUN_032e1da0(Method_OVRTask<List<OVRSceneManager_Metrics>>_GetAwaiter__);
    thunk_FUN_032e1da0(PTR_DAT_0727a180);
    DAT_076e289b = 1;
  }
  plVar5 = (long *)(**(code **)(*param_1 + 0x178))(param_1,*(undefined8 *)(*param_1 + 0x180));
  if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_032d5ee8();
  }
  lVar7 = *plVar5;
  uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar8 != 0) {
    piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == *(long *)Method_OVRTask<List<OVRPlugin_Result>>_GetAwaiter__) {
        puVar6 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
        goto LAB_06a05b2c;
      }
      uVar8 = uVar8 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar8 != 0);
  }
  puVar6 = (undefined8 *)
           FUN_032937ac(plVar5,*(long *)Method_OVRTask<List<OVRPlugin_Result>>_GetAwaiter__,0);
LAB_06a05b2c:
  puVar1 = PTR_DAT_07279f60;
  plVar5 = (long *)(*(code *)*puVar6)(plVar5,puVar6[1]);
  puVar3 = Method_OVRTask<List<OVRSceneManager_Metrics>>_GetAwaiter__;
  puVar2 = PTR_DAT_0727a180;
  if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_032d5ee8();
  }
  do {
    lVar7 = *plVar5;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)puVar2) {
          puVar6 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_06a05ba4;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar6 = (undefined8 *)FUN_032937ac(plVar5,*(long *)puVar2,0);
LAB_06a05ba4:
    uVar8 = (*(code *)*puVar6)(plVar5,puVar6[1]);
    if ((uVar8 & 1) == 0) {
      if (plVar5 == (long *)0x0) {
        return;
      }
      lVar7 = *plVar5;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar8 == 0) goto LAB_06a05c60;
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      break;
    }
    lVar7 = *plVar5;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)puVar3) {
          puVar6 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_06a05c00;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar6 = (undefined8 *)FUN_032937ac(plVar5,*(long *)puVar3,0);
LAB_06a05c00:
    uVar4 = (*(code *)*puVar6)(plVar5,puVar6[1]);
    if (param_1[4] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_032d5ee8(0,uVar4);
    }
    FUN_06bb0b2c(param_1[4],uVar4,param_1[7],0);
  } while( true );
  while( true ) {
    uVar8 = uVar8 - 1;
    piVar9 = piVar9 + 4;
    if (uVar8 == 0) break;
    if (*(long *)(piVar9 + -2) == *(long *)puVar1) {
      puVar6 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
      goto LAB_06a05c7c;
    }
  }
LAB_06a05c60:
  puVar6 = (undefined8 *)FUN_032937ac(plVar5,*(long *)puVar1,0);
LAB_06a05c7c:
  (*(code *)*puVar6)(plVar5,puVar6[1]);
  return;
}


