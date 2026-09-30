/*
FUNCTION_NAME: FUN_03794968
ENTRY_POINT: 03794968
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


bool FUN_03794968(undefined8 *param_1,long param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  int *piVar8;
  long *plVar9;
  
  plVar9 = (long *)*param_1;
  iVar1 = *(int *)(param_1 + 3) + 1;
  *(int *)(param_1 + 3) = iVar1;
  if (plVar9 == (long *)0x0) {
LAB_03794b4c:
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  lVar3 = *(long *)(param_2 + 0x20);
  if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_02f41e9c();
  }
  lVar3 = **(long **)(lVar3 + 0xc0);
  if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_02f41e9c(lVar3);
  }
  lVar5 = *plVar9;
  uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar6 != 0) {
    piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == lVar3) {
        puVar4 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
        goto LAB_03794a0c;
      }
      uVar6 = uVar6 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar6 != 0);
  }
  puVar4 = (undefined8 *)FUN_02f421d0(plVar9,lVar3,0);
LAB_03794a0c:
  iVar2 = (*(code *)*puVar4)(plVar9,param_1 + 2,puVar4[1]);
  plVar9 = (long *)*param_1;
  if (iVar1 < iVar2) {
    if (plVar9 == (long *)0x0) goto LAB_03794b4c;
    lVar3 = *(long *)(param_2 + 0x20);
    uVar6 = (ulong)*(uint *)(param_1 + 3);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_02f41e9c();
    }
    lVar3 = **(long **)(lVar3 + 0xc0);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_02f41e9c(lVar3);
    }
    lVar5 = *plVar9;
    uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == lVar3) goto LAB_03794b10;
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
  }
  else {
    if (plVar9 == (long *)0x0) goto LAB_03794b4c;
    lVar3 = *(long *)(param_2 + 0x20);
    uVar6 = param_1[1];
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_02f41e9c();
    }
    lVar3 = **(long **)(lVar3 + 0xc0);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_02f41e9c(lVar3);
    }
    lVar5 = *plVar9;
    uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == lVar3) goto LAB_03794b10;
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
  }
  puVar4 = (undefined8 *)FUN_02f421d0(plVar9,lVar3,3);
  goto System_Array_InternalEnumerator<OVRPlugin_SpaceDiscoveryResult>___ctor;
LAB_03794b10:
  puVar4 = (undefined8 *)(lVar5 + (long)(*piVar8 + 3) * 0x10 + 0x138);
System_Array_InternalEnumerator<OVRPlugin_SpaceDiscoveryResult>___ctor:
  (*(code *)*puVar4)(plVar9,uVar6,puVar4[1]);
  return iVar1 < iVar2;
}


