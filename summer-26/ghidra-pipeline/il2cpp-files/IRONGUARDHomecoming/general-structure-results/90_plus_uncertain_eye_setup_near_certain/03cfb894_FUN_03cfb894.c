/*
FUNCTION_NAME: FUN_03cfb894
ENTRY_POINT: 03cfb894
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 117
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_8;functionality_eye_api_context_without_clear_sink_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x03cfbb30) */

long FUN_03cfb894(undefined8 param_1,undefined8 param_2,long *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  
  if ((DAT_04839ee4 & 1) == 0) {
    thunk_FUN_01efb3a4(PTR_DAT_04572d30);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(PTR_DAT_04572c88);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    thunk_FUN_01efb3a4(PTR_DAT_04572c90);
    DAT_04839ee4 = 1;
  }
  puVar4 = PTR_DAT_04572d30;
  if (param_3 != (long *)0x0) {
    lVar7 = *param_3;
    uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_04572d30) {
          puVar5 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_03cfb95c;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined8 *)FUN_01ecb238(param_3,*(long *)PTR_DAT_04572d30,0);
LAB_03cfb95c:
    lVar7 = (*(code *)*puVar5)(param_3,puVar5[1]);
    puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
    if (lVar7 != 0) {
      plVar6 = (long *)FUN_025d9d24(lVar7,*(undefined8 *)PTR_DAT_04572c90);
      puVar3 = PTR_DAT_04572c88;
      puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
      if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
LAB_03cfb99c:
      lVar7 = *plVar6;
      uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)puVar2) {
            puVar5 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_03cfb9e8;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar5 = (undefined8 *)FUN_01ecb238(plVar6,*(long *)puVar2,0);
LAB_03cfb9e8:
      uVar9 = (*(code *)*puVar5)(plVar6,puVar5[1]);
      if ((uVar9 & 1) != 0) {
        lVar7 = *plVar6;
        uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == *(long *)puVar3) {
              puVar5 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
              goto LAB_03cfba44;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        puVar5 = (undefined8 *)FUN_01ecb238(plVar6,*(long *)puVar3,0);
LAB_03cfba44:
        lVar7 = (*(code *)*puVar5)(plVar6,puVar5[1]);
        if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        uVar9 = thunk_FUN_0340e318(*(undefined8 *)(lVar7 + 0x38),param_2,0);
        if (((uVar9 & 1) != 0) ||
           ((lVar7 = thunk_FUN_01f116d0(lVar7,*(undefined8 *)puVar4), lVar7 != 0 &&
            (lVar7 = FUN_03cfb894(param_1,param_2,lVar7), lVar7 != 0)))) goto joined_r0x03cfbaa8;
        goto LAB_03cfb99c;
      }
      lVar7 = 0;
joined_r0x03cfbaa8:
      if (plVar6 != (long *)0x0) {
        lVar8 = *plVar6;
        uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == *(long *)puVar1) {
              puVar5 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
              goto LAB_03cfbaf8;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        puVar5 = (undefined8 *)FUN_01ecb238(plVar6,*(long *)puVar1,0);
LAB_03cfbaf8:
        (*(code *)*puVar5)(plVar6,puVar5[1]);
      }
      return lVar7;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


