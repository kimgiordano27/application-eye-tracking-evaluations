/*
FUNCTION_NAME: FUN_0196c6d8
ENTRY_POINT: 0196c6d8
PROGRAM: Lovesick-libil2cpp.so
SCORE: 88
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_structure_only;telemetry_or_network_hits_2
*/


void FUN_0196c6d8(long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  
  if ((DAT_0377a2e3 & 1) == 0) {
    thunk_FUN_00d48444(
                      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<JArray>_SetStateMachine__
                      );
    thunk_FUN_00d48444(
                      Method_UnityEngine_XR_ARFoundation_ARTrackable<BoundedPlane,_ARPlane>_get_trackableId__
                      );
    thunk_FUN_00d48444(StringLiteral_121);
    thunk_FUN_00d48444(Method_Messenger<bool>_Broadcast__);
    thunk_FUN_00d48444(Method_FullSerializer_fsDirectConverter<Bounds>__ctor__);
    thunk_FUN_00d48444(System_Func<Task>_TypeInfo);
    thunk_FUN_00d48444(PTR_DAT_033f5250);
    thunk_FUN_00d48444(StringLiteral_13808);
    DAT_0377a2e3 = 1;
  }
  uStack_58 = 0;
  local_50 = 0;
  local_60 = 0;
  if (*(char *)(param_1 + 0x40) == '\0') {
    return;
  }
  if ((*(long *)(param_1 + 0x30) != 0) &&
     (lVar8 = FUN_012998a8(*(long *)(param_1 + 0x30),
                           *(undefined8 *)
                            Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<JArray>_SetStateMachine__
                          ), puVar7 = StringLiteral_13808, puVar6 = StringLiteral_121,
     puVar5 = Method_FullSerializer_fsDirectConverter<Bounds>__ctor__,
     puVar4 = Method_Messenger<bool>_Broadcast__,
     puVar3 = 
     Method_UnityEngine_XR_ARFoundation_ARTrackable<BoundedPlane,_ARPlane>_get_trackableId__,
     puVar2 = System_Func<Task>_TypeInfo, lVar8 != 0)) {
    FUN_01311764(lVar8,&local_78,*(undefined8 *)PTR_DAT_033f5250);
    uStack_58 = uStack_70;
    local_60 = local_78;
    local_50 = local_68;
    while (uVar9 = FUN_012c2b80(&local_60,*(undefined8 *)puVar6), (uVar9 & 1) != 0) {
      uVar10 = FUN_00bf8aec(&local_60,*(undefined8 *)puVar4);
      lVar8 = *(long *)(param_1 + 0x20);
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      (**(code **)(lVar8 + 0x18))
                (*(undefined8 *)(lVar8 + 0x40),*(undefined8 *)(param_1 + 0x28),uVar10,
                 *(undefined8 *)(lVar8 + 0x28));
    }
    FUN_012c2b7c(&local_60,*(undefined8 *)puVar3);
    lVar8 = *(long *)puVar2;
    if (*(int *)(lVar8 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      lVar8 = *(long *)puVar2;
    }
    if (**(long **)(lVar8 + 0xb8) != 0) {
      FUN_012de18c(**(long **)(lVar8 + 0xb8),param_1,*(undefined8 *)puVar5);
      lVar8 = *(long *)(param_1 + 0x38);
      if (lVar8 != 0) {
        lVar11 = *(long *)puVar7;
        *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
        uVar9 = FUN_00da5b18(*(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 200));
        if ((uVar9 & 1) == 0) {
          *(undefined4 *)(lVar8 + 0x18) = 0;
          return;
        }
        iVar1 = *(int *)(lVar8 + 0x18);
        *(undefined4 *)(lVar8 + 0x18) = 0;
        if (iVar1 < 1) {
          return;
        }
        FUN_0179519c(*(undefined8 *)(lVar8 + 0x10),0,iVar1,0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


