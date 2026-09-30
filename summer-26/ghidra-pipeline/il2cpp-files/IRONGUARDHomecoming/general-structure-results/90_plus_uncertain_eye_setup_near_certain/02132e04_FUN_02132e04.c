/*
FUNCTION_NAME: FUN_02132e04
ENTRY_POINT: 02132e04
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 123
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_6;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_3
*/


/* WARNING: Removing unreachable block (ram,0x021331a4) */
/* WARNING: Type propagation algorithm not settling */

void FUN_02132e04(long param_1,undefined8 *param_2,undefined8 *param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  int *piVar6;
  undefined8 *puVar7;
  ulong uVar8;
  ulong uVar9;
  void *__s;
  void *__dest;
  undefined8 uVar10;
  long *plVar11;
  long *aplStack_b0 [4];
  void *local_90;
  long lStack_88;
  undefined1 *local_80;
  undefined1 local_6c [4];
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  plVar11 = *(long **)(param_4 + 0x38);
  aplStack_b0[1] = param_3;
  if (plVar11 == (long *)0x0) {
    thunk_FUN_01efb3a4(Method_UnityEngine_BootConfigData__ctor__);
    thunk_FUN_01efb3a4(Method_System_Globalization_Bootstring_Decode__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    plVar11 = *(long **)(param_4 + 0x38);
    if (plVar11 == (long *)0x0) {
      FUN_01ecafa0(param_4);
      plVar11 = *(long **)(param_4 + 0x38);
    }
  }
  uVar8 = (ulong)*(uint *)(plVar11[3] + 0xfc);
  uVar9 = uVar8 + 0xf & 0x1fffffff0;
  __dest = (void *)((long)aplStack_b0 - uVar9);
  puVar7 = (undefined8 *)((long)__dest - uVar9);
  memset(puVar7,0,uVar8);
  __s = (void *)((long)puVar7 - uVar9);
  memset(__s,0,uVar8);
  if ((*(byte *)(*plVar11 + 0x135) & 1) == 0) {
    FUN_01ecaf44();
  }
  lVar2 = thunk_FUN_01f117cc();
  (*(code *)**(undefined8 **)(*(long *)(param_4 + 0x38) + 8))();
  local_90 = (void *)param_2[2];
  aplStack_b0[3] = (long *)param_2[1];
  aplStack_b0[2] = (long *)*param_2;
  if (lVar2 != 0) {
    *(void **)(lVar2 + 0x20) = local_90;
    *(long **)(lVar2 + 0x18) = aplStack_b0[3];
    *(long **)(lVar2 + 0x10) = aplStack_b0[2];
    thunk_FUN_01f51358(lVar2 + 0x10,0);
    if ((param_1 != 0) &&
       (lVar3 = FUN_032a01b0(param_1,*(undefined8 *)
                                      (*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x20)),
       lVar3 != 0)) {
      plVar11 = (long *)thunk_FUN_03ed4570(lVar3,0);
      uVar4 = thunk_FUN_01f117cc(*(undefined8 *)Method_UnityEngine_BootConfigData__ctor__);
      FUN_02e67a8c(uVar4,lVar2,*(undefined8 *)(*(long *)(param_4 + 0x38) + 0x10),0);
      lVar2 = *(long *)(param_4 + 0x38);
      if (-1 < *(int *)(*(long *)(lVar2 + 0x18) + 0x28)) {
        param_3 = aplStack_b0 + 1;
      }
      memcpy(__dest,param_3,uVar8);
      lVar2 = *(long *)(lVar2 + 0x28);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_01ecaf44();
      }
      if (*(int *)(lVar2 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      lVar2 = *(long *)(*(long *)(param_4 + 0x38) + 0x28);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_01ecaf44();
      }
      lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 8);
      if (lVar2 == 0) {
        memcpy(__s,__dest,uVar8);
        lVar2 = *(long *)(*(long *)(param_4 + 0x38) + 0x28);
        if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
          lVar2 = FUN_01ecaf44();
        }
        if (*(int *)(lVar2 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        lVar2 = *(long *)(*(long *)(param_4 + 0x38) + 0x28);
        if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
          lVar2 = FUN_01ecaf44();
        }
        uVar10 = **(undefined8 **)(lVar2 + 0xb8);
        lVar2 = thunk_FUN_01f117cc(*(undefined8 *)Method_System_Globalization_Bootstring_Decode__);
        FUN_02e6c0a0(lVar2,uVar10,*(undefined8 *)(*(long *)(param_4 + 0x38) + 0x30),0);
        lVar3 = *(long *)(*(long *)(param_4 + 0x38) + 0x28);
        if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
          lVar3 = FUN_01ecaf44();
        }
        *(long *)(*(long *)(lVar3 + 0xb8) + 8) = lVar2;
        lVar3 = *(long *)(*(long *)(param_4 + 0x38) + 0x28);
        if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
          lVar3 = FUN_01ecaf44();
        }
        thunk_FUN_01f51358(*(long *)(lVar3 + 0xb8) + 8,lVar2);
        __dest = __s;
      }
      memcpy(puVar7,__dest,uVar8);
      puVar5 = *(undefined8 **)(*(long *)(param_4 + 0x38) + 0x38);
      if (-1 < *(int *)(*(long *)(*(long *)(param_4 + 0x38) + 0x18) + 0x28)) {
        puVar7 = (undefined8 *)*puVar7;
      }
      local_80 = local_6c;
      local_6c[0] = 1;
      aplStack_b0[2] = plVar11;
      aplStack_b0[3] = (long *)uVar4;
      local_90 = puVar7;
      lStack_88 = lVar2;
      (*(code *)puVar5[2])(*puVar5,puVar5,0,aplStack_b0 + 2,local_6c);
      if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      FUN_03ed669c(plVar11,0);
      lVar2 = *plVar11;
      uVar8 = (ulong)*(ushort *)(lVar2 + 0x12e);
      if (uVar8 != 0) {
        piVar6 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) ==
              *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
            puVar7 = (undefined8 *)(lVar2 + (long)*piVar6 * 0x10 + 0x138);
            goto LAB_02133160;
          }
          uVar8 = uVar8 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar8 != 0);
      }
      puVar7 = (undefined8 *)
               FUN_01ecb238(plVar11,*(long *)
                                     Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                            ,0);
LAB_02133160:
      (*(code *)*puVar7)(plVar11,puVar7[1]);
      if (*(long *)(lVar1 + 0x28) == local_68) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


