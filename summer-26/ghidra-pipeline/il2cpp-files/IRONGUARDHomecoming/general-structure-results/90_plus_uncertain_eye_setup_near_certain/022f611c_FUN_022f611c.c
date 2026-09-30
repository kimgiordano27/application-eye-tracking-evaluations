/*
FUNCTION_NAME: FUN_022f611c
ENTRY_POINT: 022f611c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 117
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_6;validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_12;functionality_eye_api_context_without_clear_sink_hits_6
*/


/* WARNING: Removing unreachable block (ram,0x022f64ec) */

void FUN_022f611c(void *param_1,long *param_2,long param_3)

{
  int iVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  int iVar9;
  undefined8 auStack_e8 [11];
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 local_40;
  
  if (*(long *)(param_3 + 0x38) == 0) {
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    if (*(long *)(param_3 + 0x38) == 0) {
      FUN_01ecafa0(param_3);
    }
  }
  local_40 = 0;
  uStack_58 = 0;
  local_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_78 = 0;
  local_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_88 = 0;
  local_90 = 0;
  if (param_2 == (long *)0x0) {
    uVar4 = thunk_FUN_01efb3a4(Method_UnityEngine_UIElements_BoundsIntField_<_ctor>b__10_1__);
    uVar4 = FUN_03971094(uVar4,0);
  }
  else {
    lVar5 = *(long *)(*(long *)(param_3 + 0x38) + 8);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_01ecaf44(lVar5);
    }
    plVar2 = (long *)thunk_FUN_01f116d0(param_2,lVar5);
    if (plVar2 == (long *)0x0) {
      lVar5 = **(long **)(param_3 + 0x38);
      if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_01ecaf44(lVar5);
      }
      lVar6 = *param_2;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == lVar5) {
            puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_022f630c;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar3 = (undefined8 *)FUN_01ecb238(param_2,lVar5,0);
LAB_022f630c:
      plVar2 = (long *)(*(code *)*puVar3)(param_2,puVar3[1]);
      if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar5 = *plVar2;
      uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) ==
              *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__) {
            puVar3 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_022f6374;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar3 = (undefined8 *)
               FUN_01ecb238(plVar2,*(long *)
                                    Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__
                            ,0);
LAB_022f6374:
      uVar7 = (*(code *)*puVar3)(plVar2,puVar3[1]);
      if ((uVar7 & 1) == 0) {
        iVar9 = 6;
        iVar1 = 6;
      }
      else {
        lVar5 = *(long *)(*(long *)(param_3 + 0x38) + 0x38);
        if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
          lVar5 = FUN_01ecaf44(lVar5);
        }
        lVar6 = *plVar2;
        uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar7 != 0) {
          piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == lVar5) {
              puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
              goto LAB_022f63f8;
            }
            uVar7 = uVar7 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 != 0);
        }
        puVar3 = (undefined8 *)FUN_01ecb238(plVar2,lVar5,0);
LAB_022f63f8:
        (*(code *)*puVar3)(auStack_e8,plVar2,puVar3[1]);
        memcpy(&local_90,auStack_e8,0x58);
        iVar9 = 8;
        iVar1 = 8;
      }
      if (plVar2 != (long *)0x0) {
        lVar5 = *plVar2;
        uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar7 != 0) {
          piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) ==
                *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
              puVar3 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
              goto LAB_022f6478;
            }
            uVar7 = uVar7 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 != 0);
        }
        puVar3 = (undefined8 *)
                 FUN_01ecb238(plVar2,*(long *)
                                      Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                              ,0);
LAB_022f6478:
        (*(code *)*puVar3)(plVar2,puVar3[1]);
        iVar1 = iVar9;
      }
      if (iVar1 == 8) {
        puVar3 = &local_90;
        goto LAB_022f64ac;
      }
      if ((iVar1 != 6) && (iVar1 != 0)) {
        return;
      }
    }
    else {
      lVar5 = *(long *)(*(long *)(param_3 + 0x38) + 0x10);
      if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_01ecaf44(lVar5);
      }
      lVar6 = *plVar2;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == lVar5) {
            puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_022f626c;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar3 = (undefined8 *)FUN_01ecb238(plVar2,lVar5,0);
LAB_022f626c:
      iVar1 = (*(code *)*puVar3)(plVar2,puVar3[1]);
      if (0 < iVar1) {
        lVar5 = *(long *)(*(long *)(param_3 + 0x38) + 8);
        if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
          lVar5 = FUN_01ecaf44(lVar5);
        }
        lVar6 = *plVar2;
        uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar7 != 0) {
          piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == lVar5) {
              puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
              goto LAB_022f62e4;
            }
            uVar7 = uVar7 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 != 0);
        }
        puVar3 = (undefined8 *)FUN_01ecb238(plVar2,lVar5,0);
LAB_022f62e4:
        (*(code *)*puVar3)(auStack_e8,plVar2,0,puVar3[1]);
        puVar3 = auStack_e8;
LAB_022f64ac:
        memcpy(param_1,puVar3,0x58);
        return;
      }
    }
    uVar4 = FUN_03971224(0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08910(uVar4,param_3);
}


