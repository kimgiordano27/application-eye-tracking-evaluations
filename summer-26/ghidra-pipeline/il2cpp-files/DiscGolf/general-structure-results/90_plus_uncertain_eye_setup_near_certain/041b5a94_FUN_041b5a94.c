/*
FUNCTION_NAME: FUN_041b5a94
ENTRY_POINT: 041b5a94
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 107
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_7;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void FUN_041b5a94(long param_1,long param_2,long param_3)

{
  int iVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  
  FUN_0552aca4(param_1,0);
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_054fa008(6,0);
  }
  lVar5 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x28);
  if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_02dcfd18(lVar5);
  }
  plVar2 = (long *)thunk_FUN_02dd3048(param_2,lVar5);
  if (plVar2 == (long *)0x0) {
    lVar5 = *(long *)(param_3 + 0x20);
    *(undefined4 *)(param_1 + 0x18) = 0;
    lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x10);
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_02dcfd18();
    }
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    lVar5 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x10);
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_02dcfd18();
    }
    *(undefined8 *)(param_1 + 0x10) = **(undefined8 **)(lVar5 + 0xb8);
    LeanTween__value();
    Unity_Collections_NativeArray<OVRPlugin_Qpl_Annotation>__Dispose
              (param_1,param_2,*(undefined8 *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x40));
    return;
  }
  lVar5 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x28);
  if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_02dcfd18(lVar5);
  }
  lVar6 = *plVar2;
  uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == lVar5) {
        puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
        goto Unity_Collections_NativeArray<SimulatorLayer_PendingPacket>__AsReadOnlySpan;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar3 = (undefined8 *)FUN_02dd004c(plVar2,lVar5,0);
Unity_Collections_NativeArray<SimulatorLayer_PendingPacket>__AsReadOnlySpan:
  iVar1 = (*(code *)*puVar3)(plVar2,puVar3[1]);
  lVar5 = *(long *)(*(long *)(param_3 + 0x20) + 0xc0);
  if (iVar1 == 0) {
    lVar5 = *(long *)(lVar5 + 0x10);
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_02dcfd18();
    }
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    lVar5 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x10);
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_02dcfd18();
    }
    *(undefined8 *)(param_1 + 0x10) = **(undefined8 **)(lVar5 + 0xb8);
    LeanTween__value((undefined8 *)(param_1 + 0x10));
    return;
  }
  lVar5 = *(long *)(lVar5 + 0x18);
  if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_02dcfd18();
  }
  uVar4 = FUN_02d966a4(lVar5,iVar1);
  puVar3 = (undefined8 *)(param_1 + 0x10);
  *puVar3 = uVar4;
  LeanTween__value(puVar3,uVar4);
  uVar4 = *puVar3;
  lVar5 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x28);
  if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_02dcfd18(lVar5);
  }
  lVar6 = *plVar2;
  uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == lVar5) {
        puVar3 = (undefined8 *)(lVar6 + (long)(*piVar8 + 5) * 0x10 + 0x138);
        goto LAB_041b5d00;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar3 = (undefined8 *)FUN_02dd004c(plVar2,lVar5,5);
LAB_041b5d00:
  (*(code *)*puVar3)(plVar2,uVar4,0,puVar3[1]);
  *(int *)(param_1 + 0x18) = iVar1;
  return;
}


