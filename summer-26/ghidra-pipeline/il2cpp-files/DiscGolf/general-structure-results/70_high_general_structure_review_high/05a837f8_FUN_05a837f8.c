/*
FUNCTION_NAME: FUN_05a837f8
ENTRY_POINT: 05a837f8
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 84
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_8;ray_or_cast_sink_hits_4;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


void FUN_05a837f8(long param_1,long *param_2)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  uint uVar7;
  long *plVar8;
  uint uVar9;
  long lVar10;
  long *local_28;
  
  if ((DAT_06dc1c32 & 1) == 0) {
    FUN_02d965b8(UnityEngine_RaycastHit___var);
    FUN_02d965b8(PTR_DAT_069fc180);
    DAT_06dc1c32 = 1;
  }
  puVar1 = PTR_DAT_069fc180;
  local_28 = (long *)0x0;
  if (param_2 == (long *)0x0) {
    thunk_FUN_02dfd288(PTR_DAT_069ff9a8);
    uVar5 = thunk_FUN_02dd3144();
    uVar6 = thunk_FUN_02dfd288(System_Runtime_Serialization_DataNode<Guid>_TypeInfo);
    FUN_0544bf54(uVar5,uVar6,0);
    uVar6 = thunk_FUN_02dfd288(
                              Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<bool>_Start<SessionsManager_<<LeaveCurrentSession>g__WaituntilConnected_74_0>d>__
                              );
                    /* WARNING: Subroutine does not return */
    FUN_02d96724(uVar5,uVar6);
  }
  plVar8 = (long *)(param_1 + 0x18);
  if (*plVar8 == 0) {
    lVar10 = thunk_FUN_02dd3048(param_2,*(undefined8 *)PTR_DAT_069fc180);
    if (lVar10 == 0) goto LAB_05a839d8;
    plVar2 = (long *)FUN_02d966a4(*(undefined8 *)puVar1,1);
    if (plVar2 == (long *)0x0) goto LAB_05a83a4c;
    lVar10 = thunk_FUN_02dd3048(param_2,*(undefined8 *)(*plVar2 + 0x40));
    if (lVar10 == 0) goto LAB_05a839f8;
    if ((int)plVar2[3] == 0) goto LAB_05a839f4;
    plVar4 = plVar2 + 4;
    *plVar4 = (long)param_2;
  }
  else {
    local_28 = (long *)thunk_FUN_02dd3048(*plVar8,*(undefined8 *)PTR_DAT_069fc180);
    if (local_28 != (long *)0x0) {
      uVar7 = (uint)local_28[3];
      if ((int)uVar7 < 1) {
        lVar10 = 0;
LAB_05a8395c:
        uVar9 = (uint)lVar10;
        if (uVar9 == uVar7) goto LAB_05a83964;
      }
      else {
        lVar10 = 0;
        do {
          if (local_28[lVar10 + 4] == 0) goto LAB_05a8395c;
          lVar10 = lVar10 + 1;
          uVar9 = uVar7;
        } while (uVar7 != (uint)lVar10);
LAB_05a83964:
        FUN_034e3d40(&local_28,uVar7 << 1,*(undefined8 *)UnityEngine_RaycastHit___var);
        *plVar8 = (long)local_28;
        LeanTween__value(plVar8);
        if (local_28 == (long *)0x0) {
LAB_05a83a4c:
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
      }
      plVar8 = local_28;
      lVar10 = thunk_FUN_02dd3048(param_2,*(undefined8 *)(*local_28 + 0x40));
      if (lVar10 != 0) {
        if (uVar9 < *(uint *)(plVar8 + 3)) {
          plVar8 = plVar8 + (long)(int)uVar9 + 4;
          *plVar8 = (long)param_2;
          LeanTween__value(plVar8,param_2);
          return;
        }
LAB_05a839f4:
                    /* WARNING: Subroutine does not return */
        FUN_02d96868();
      }
LAB_05a839f8:
      uVar5 = thunk_FUN_02de0bec();
                    /* WARNING: Subroutine does not return */
      FUN_02d96724(uVar5,0);
    }
    plVar2 = (long *)FUN_02d966a4(*(undefined8 *)puVar1,2);
    if (plVar2 == (long *)0x0) goto LAB_05a83a4c;
    lVar10 = *plVar8;
    if ((lVar10 != 0) &&
       (lVar3 = thunk_FUN_02dd3048(lVar10,*(undefined8 *)(*plVar2 + 0x40)), lVar3 == 0))
    goto LAB_05a839f8;
    if ((int)plVar2[3] == 0) goto LAB_05a839f4;
    plVar2[4] = lVar10;
    LeanTween__value(plVar2 + 4,lVar10);
    lVar10 = thunk_FUN_02dd3048(param_2,*(undefined8 *)(*plVar2 + 0x40));
    if (lVar10 == 0) goto LAB_05a839f8;
    if ((*(uint *)(plVar2 + 3) & 0xfffffffe) == 0) goto LAB_05a839f4;
    plVar4 = plVar2 + 5;
    *plVar4 = (long)param_2;
  }
  LeanTween__value(plVar4,param_2);
  param_2 = plVar2;
LAB_05a839d8:
  *plVar8 = (long)param_2;
  LeanTween__value(plVar8,param_2);
  return;
}


