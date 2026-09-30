/*
FUNCTION_NAME: FUN_03b36b5c
ENTRY_POINT: 03b36b5c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 103
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x03b36cdc) */

void FUN_03b36b5c(long param_1,long param_2)

{
  byte *pbVar1;
  undefined *puVar2;
  long *plVar3;
  ulong uVar4;
  undefined8 *puVar5;
  uint uVar6;
  long lVar7;
  int *piVar8;
  ulong uVar9;
  long lVar10;
  
  if ((DAT_0483941a & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    DAT_0483941a = 1;
  }
  puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
  plVar3 = (long *)FUN_03b2468c(0);
  if (0 < *(int *)(param_1 + 0x4c)) {
    lVar10 = 0;
    uVar9 = 0;
    do {
      pbVar1 = (byte *)(lVar10 + *(long *)(param_1 + 0x60));
      if (1 < *pbVar1) {
        if ((pbVar1[1] >> 1 & 1) == 0) {
          uVar6 = (uint)*(ushort *)(pbVar1 + 4);
          if (uVar6 != 0xffff) {
            lVar7 = *(long *)(param_1 + 0x18);
            if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a3c();
            }
            if (*(uint *)(lVar7 + 0x18) <= uVar6) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a44();
            }
            lVar7 = *(long *)(lVar7 + (ulong)uVar6 * 8 + 0x20);
            if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a3c();
            }
            if (*(long *)(lVar7 + 0x78) == param_2) goto LAB_03b36c30;
          }
        }
        else {
          uVar4 = FUN_03b36d9c(param_1,param_2,uVar9 & 0xffffffff);
          if ((uVar4 & 1) != 0) {
LAB_03b36c30:
            FUN_03b35980(param_1,uVar9 & 0xffffffff,1,0);
          }
        }
      }
      uVar9 = uVar9 + 1;
      lVar10 = lVar10 + 0x30;
    } while ((long)uVar9 < (long)*(int *)(param_1 + 0x4c));
  }
  if (plVar3 != (long *)0x0) {
    lVar10 = *plVar3;
    uVar9 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar9 != 0) {
      piVar8 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)puVar2) {
          puVar5 = (undefined8 *)(lVar10 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_03b36cac;
        }
        uVar9 = uVar9 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined8 *)FUN_01ecb238(plVar3,*(long *)puVar2,0);
LAB_03b36cac:
    (*(code *)*puVar5)(plVar3,puVar5[1]);
  }
  return;
}


