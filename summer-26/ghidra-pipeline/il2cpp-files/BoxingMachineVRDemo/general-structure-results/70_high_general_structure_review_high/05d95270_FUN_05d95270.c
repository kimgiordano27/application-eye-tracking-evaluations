/*
FUNCTION_NAME: FUN_05d95270
ENTRY_POINT: 05d95270
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2
*/


void FUN_05d95270(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  undefined8 *puVar8;
  long *plVar9;
  undefined8 *puVar10;
  
  puVar4 = Method_UnityEngine_XR_ARSubsystems_Promise<SessionAvailability>_CreateResolvedPromise__;
  puVar3 = Method_Unity_VisualScripting_Project<Vector3>__ctor__;
  puVar2 = Method_Unity_VisualScripting_Project<Vector2>__ctor__;
  puVar1 = PTR_DAT_0676a790;
  if ((DAT_06b82dc3 & 1) == 0) {
    FUN_02d6084c(PTR_DAT_0676a790);
    FUN_02d6084c(Method_Unity_VisualScripting_Project<Vector2>__ctor__);
    FUN_02d6084c(PTR_DAT_06767ed0);
    FUN_02d6084c(PTR_DAT_06769e80);
    FUN_02d6084c(PTR_DAT_06769e88);
    FUN_02d6084c(Method_Unity_VisualScripting_Project<Vector3>__ctor__);
    FUN_02d6084c(Method_UnityEngine_Pool_PooledObject<List<int>>_System_IDisposable_Dispose__);
    FUN_02d6084c(
                Method_UnityEngine_XR_ARSubsystems_Promise<SessionAvailability>_CreateResolvedPromise__
                );
    DAT_06b82dc3 = 1;
  }
  UnityEngine_XR_Interaction_Toolkit_ActionBasedController__set_uiScrollAction(param_1);
  uVar5 = thunk_FUN_02d9d534(*(undefined8 *)puVar1);
  FUN_04d62ba4(uVar5,param_1,*(undefined8 *)puVar2,0);
  uVar5 = FUN_05dc15a0(param_1,*(undefined8 *)puVar3,uVar5,0);
  puVar8 = (undefined8 *)(param_1 + 0xa8);
  *puVar8 = uVar5;
  thunk_FUN_02dd37b4(puVar8,uVar5);
  uVar5 = FUN_05dc1798(param_1,*(undefined8 *)puVar4,0);
  puVar10 = (undefined8 *)(param_1 + 200);
  *puVar10 = uVar5;
  thunk_FUN_02dd37b4(puVar10,uVar5);
  thunk_FUN_05dc64d0(param_1,*puVar8,*puVar10,0);
  if (*(long *)(param_1 + 0x90) != 0) {
    uVar6 = FUN_05cd5bec(*(long *)(param_1 + 0x90),0);
    if (((uVar6 & 1) != 0) && (*(char *)(param_1 + 0xa0) != '\0')) {
      if (*(long *)(param_1 + 0x90) == 0) goto LAB_05d9555c;
      uVar5 = FUN_05dc63d8(param_1,*(undefined8 *)(*(long *)(param_1 + 0x90) + 0x20),
                           *(undefined8 *)
                            Method_UnityEngine_Pool_PooledObject<List<int>>_System_IDisposable_Dispose__
                           ,0);
      puVar8 = (undefined8 *)(param_1 + 0xc0);
      *puVar8 = uVar5;
      thunk_FUN_02dd37b4(puVar8,uVar5);
      thunk_FUN_05dc64d0(param_1,*(undefined8 *)(param_1 + 0xa8),*puVar8,0);
    }
    puVar1 = PTR_DAT_06769e88;
    if (*(long *)(param_1 + 0x90) != 0) {
      uVar5 = FUN_05cd5330(*(long *)(param_1 + 0x90),0);
      uVar5 = FUN_05dc63d8(param_1,uVar5,*(undefined8 *)puVar1,0);
      puVar8 = (undefined8 *)(param_1 + 0xb8);
      *puVar8 = uVar5;
      thunk_FUN_02dd37b4(puVar8,uVar5);
      thunk_FUN_05dc64d0(param_1,*(undefined8 *)(param_1 + 0xa8),*puVar8,0);
      if (*(long *)(param_1 + 0x90) != 0) {
        uVar6 = FUN_05cd5bec(*(long *)(param_1 + 0x90),0);
        if ((uVar6 & 1) != 0) {
          thunk_FUN_05dc64d0(param_1,*(undefined8 *)(param_1 + 0x98),*(undefined8 *)(param_1 + 0xa8)
                             ,0);
        }
        puVar1 = PTR_DAT_06769e80;
        if (*(long *)(param_1 + 0x90) != 0) {
          uVar5 = FUN_05cd5330(*(long *)(param_1 + 0x90),0);
          lVar7 = FUN_05dc169c(param_1,uVar5,*(undefined8 *)puVar1,0);
          plVar9 = (long *)(param_1 + 0xb0);
          *plVar9 = lVar7;
          thunk_FUN_02dd37b4(plVar9,lVar7);
          thunk_FUN_05dc64d0(param_1,*plVar9,*(undefined8 *)(param_1 + 0xa8),0);
          if (*(long *)(param_1 + 0x90) != 0) {
            uVar6 = FUN_05cd6480(*(long *)(param_1 + 0x90),0);
            if ((uVar6 & 1) != 0) {
              if (*plVar9 == 0) goto LAB_05d9555c;
              FUN_05da9378(*plVar9,0);
            }
            puVar1 = PTR_DAT_06767ed0;
            if (*(long *)(param_1 + 0x90) != 0) {
              lVar7 = *(long *)(param_1 + 0xb0);
              uVar5 = FUN_05cd5330(*(long *)(param_1 + 0x90),0);
              if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                thunk_FUN_02dbd7b4(*(long *)puVar1);
              }
              uVar5 = FUN_05d52e0c(uVar5,0);
              if (lVar7 != 0) {
                FUN_05dbeb0c(lVar7,uVar5,0);
                return;
              }
            }
          }
        }
      }
    }
  }
LAB_05d9555c:
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


