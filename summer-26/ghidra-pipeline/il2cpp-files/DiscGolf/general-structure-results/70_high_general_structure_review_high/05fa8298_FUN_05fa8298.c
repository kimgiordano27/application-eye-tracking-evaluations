/*
FUNCTION_NAME: FUN_05fa8298
ENTRY_POINT: 05fa8298
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


long FUN_05fa8298(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 *puVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  undefined8 local_78;
  undefined8 *puStack_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  
  puVar2 = PTR_DAT_069fb990;
  if ((DAT_06dc4669 & 1) == 0) {
    FUN_02d965b8(PTR_DAT_06a0ef88);
    FUN_02d965b8(PTR_DAT_06a0ef90);
    FUN_02d965b8(PTR_DAT_06a0ef98);
    FUN_02d965b8(
                Method_System_Runtime_CompilerServices_TaskAwaiter<Response<Session>>_get_IsCompleted__
                );
    FUN_02d965b8(PTR_DAT_06a0efa0);
    FUN_02d965b8(
                Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesDiscrete<BackgroundPosition>__ctor__
                );
    FUN_02d965b8(PTR_DAT_069fb990);
    FUN_02d965b8(
                Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesDiscrete<BackgroundRepeat>__ctor__
                );
    DAT_06dc4669 = 1;
  }
  local_60 = 0;
  uStack_58 = 0;
  plVar11 = (long *)(param_1 + 0x48);
  lVar12 = *plVar11;
  local_50 = 0;
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  uVar6 = FUN_06350670(lVar12,0,0);
  if ((uVar6 & 1) != 0) {
    uVar7 = FUN_03829034(*(undefined8 *)
                          Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesDiscrete<BackgroundRepeat>__ctor__
                        );
    *(undefined8 *)(param_1 + 0x48) = uVar7;
    LeanTween__value(plVar11,uVar7);
    uVar7 = *(undefined8 *)(param_1 + 0x30);
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    uVar6 = FUN_0634eb94(uVar7,0,0);
    if ((uVar6 & 1) != 0) {
      if (*(long *)(param_1 + 0x30) != 0) {
        lVar12 = *(long *)(param_1 + 0x48);
        uVar7 = thunk_FUN_06354368(*(long *)(param_1 + 0x30),0);
        if (lVar12 != 0) {
          thunk_FUN_063544b0(lVar12,uVar7,0);
          if ((*(long *)(param_1 + 0x30) != 0) &&
             (lVar12 = *(long *)(*(long *)(param_1 + 0x30) + 0x18), lVar12 != 0)) {
            FUN_04010c90(&local_78,lVar12,*(undefined8 *)PTR_DAT_06a0efa0);
            puVar5 = 
            Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesDiscrete<BackgroundPosition>__ctor__
            ;
            puVar4 = 
            Method_System_Runtime_CompilerServices_TaskAwaiter<Response<Session>>_get_IsCompleted__;
            puVar3 = PTR_DAT_06a0ef90;
            uStack_58 = puStack_70;
            local_60 = local_78;
            puStack_70 = &local_60;
            local_50 = local_68;
            local_78 = 0;
            while (uVar6 = FUN_05156804(&local_60,*(undefined8 *)puVar3), uVar7 = local_50,
                  (uVar6 & 1) != 0) {
              if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                thunk_FUN_02df485c();
              }
              uVar7 = FUN_0376b250(uVar7,*(undefined8 *)puVar5);
              if (*plVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02d96860();
              }
              lVar12 = *(long *)(*plVar11 + 0x18);
              if (lVar12 == 0) {
LAB_05fa84f0:
                    /* WARNING: Subroutine does not return */
                FUN_02d96860();
              }
              lVar8 = *(long *)(lVar12 + 0x10);
              lVar10 = *(long *)puVar4;
              *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
              if (lVar8 == 0) goto LAB_05fa84f0;
              uVar1 = *(uint *)(lVar12 + 0x18);
              if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                puVar9 = (undefined8 *)(lVar8 + (long)(int)uVar1 * 8 + 0x20);
                *puVar9 = uVar7;
                LeanTween__value(puVar9);
              }
              else {
                FUN_040101ec(lVar12,uVar7,
                             *(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
              }
            }
            FUN_05156800(&local_60,*(undefined8 *)PTR_DAT_06a0ef88);
            goto LAB_05fa84d4;
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
  }
LAB_05fa84d4:
  return *plVar11;
}


