/*
FUNCTION_NAME: FUN_042970e0
ENTRY_POINT: 042970e0
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 100
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x04297314) */

undefined8 FUN_042970e0(long param_1,char param_2,long param_3)

{
  int iVar1;
  char cVar2;
  undefined *puVar3;
  undefined *puVar4;
  long *plVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long lVar9;
  int *piVar10;
  uint uVar11;
  
  if ((DAT_048418b6 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(Method_UnityEngine_InputSystem_InputManager_TryGetDevice__);
    thunk_FUN_01efb3a4(PTR_DAT_04593550);
    DAT_048418b6 = 1;
  }
  puVar3 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  plVar5 = (long *)thunk_FUN_01f117cc(*(undefined8 *)
                                       Method_UnityEngine_InputSystem_InputManager_TryGetDevice__);
  FUN_034c7774(plVar5,*(undefined4 *)(param_1 + 0x18),0);
  puVar4 = PTR_DAT_04593550;
  if (*(int *)(param_1 + 0x18) < 1) {
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
  }
  else {
    uVar11 = 0;
    do {
      if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      uVar6 = FUN_042973f8(param_1,uVar11,param_3);
      if ((uVar6 & 1) == 0) {
        if (*(uint *)(param_1 + 0x18) <= uVar11) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a44();
        }
        cVar2 = *(char *)(param_1 + (int)uVar11 + 0x20);
        if (((int)(uVar11 + 2) < (int)*(uint *)(param_1 + 0x18)) && (cVar2 == param_2)) {
          if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          uVar6 = FUN_04297034(param_1,uVar11 + 1);
          if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c(uVar6,uVar6 & 0xffffffff);
          }
          (**(code **)(*plVar5 + 0x378))(plVar5,uVar6 & 0xffffffff,*(undefined8 *)(*plVar5 + 0x380))
          ;
          uVar11 = uVar11 + 2;
        }
        else {
          if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          (**(code **)(*plVar5 + 0x378))(plVar5,cVar2,*(undefined8 *)(*plVar5 + 0x380));
        }
      }
      else {
        if (param_3 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        iVar1 = *(int *)(param_3 + 0x18);
        (**(code **)(*plVar5 + 0x378))(plVar5,0x20,*(undefined8 *)(*plVar5 + 0x380));
        uVar11 = (uVar11 + iVar1) - 1;
      }
      uVar11 = uVar11 + 1;
    } while ((int)uVar11 < *(int *)(param_1 + 0x18));
  }
  uVar7 = (**(code **)(*plVar5 + 0x3b8))(plVar5,*(undefined8 *)(*plVar5 + 0x3c0));
  lVar9 = *plVar5;
  uVar6 = (ulong)*(ushort *)(lVar9 + 0x12e);
  if (uVar6 != 0) {
    piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
    do {
      if (*(long *)(piVar10 + -2) == *(long *)puVar3) {
        puVar8 = (undefined8 *)(lVar9 + (long)*piVar10 * 0x10 + 0x138);
        goto LAB_042972d0;
      }
      uVar6 = uVar6 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar6 != 0);
  }
  puVar8 = (undefined8 *)FUN_01ecb238(plVar5,*(long *)puVar3,0);
LAB_042972d0:
  (*(code *)*puVar8)(plVar5,puVar8[1]);
  return uVar7;
}


