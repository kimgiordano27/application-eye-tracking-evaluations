/*
FUNCTION_NAME: FUN_03fbecd8
ENTRY_POINT: 03fbecd8
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 97
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x03fbee2c) */
/* WARNING: Removing unreachable block (ram,0x03fbee70) */

undefined8 FUN_03fbecd8(long param_1,long param_2)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  ulong uVar5;
  long *plVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  int *piVar10;
  undefined4 local_5c;
  undefined8 local_58;
  undefined8 local_48;
  
  if ((DAT_0483b8af & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    DAT_0483b8af = 1;
  }
  local_48 = 0;
  local_58 = 0;
  local_5c = 0;
  iVar2 = FUN_03fbe868(param_1,param_2,&local_48,&local_58,&local_5c);
  puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  uVar4 = FUN_03fae1e8(param_2);
  while ((iVar3 = FUN_03fae2e4(param_2), iVar3 == iVar2 &&
         (uVar5 = FUN_03fbea40(param_1,param_2,local_48,local_58,&local_5c), (uVar5 & 1) != 0))) {
    FUN_03fae50c(param_2,*(undefined8 *)(param_1 + 0xa0));
    plVar6 = *(long **)(param_2 + 0x10);
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    (**(code **)(*plVar6 + 0x188))(plVar6,uVar4,*(undefined8 *)(*plVar6 + 400));
  }
  plVar6 = (long *)thunk_FUN_01f116d0(local_48,*(undefined8 *)puVar1);
  if (plVar6 != (long *)0x0) {
    lVar9 = *plVar6;
    lVar8 = *(long *)puVar1;
    uVar5 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar5 != 0) {
      piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == lVar8) {
          puVar7 = (undefined8 *)(lVar9 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_03fbee14;
        }
        uVar5 = uVar5 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar5 != 0);
    }
    puVar7 = (undefined8 *)FUN_01ecb238(plVar6,lVar8,0);
LAB_03fbee14:
    (*(code *)*puVar7)(plVar6,puVar7[1]);
  }
  FUN_03fae27c(param_2,uVar4);
  FUN_03fae484(param_2,iVar2);
  return *(undefined8 *)(param_1 + 0x98);
}


