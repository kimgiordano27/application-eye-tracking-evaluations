/*
FUNCTION_NAME: FUN_02453ec8
ENTRY_POINT: 02453ec8
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 111
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_6;functionality_eye_api_context_without_clear_sink_hits_3
*/


void FUN_02453ec8(long param_1,undefined4 param_2,long param_3)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  int *piVar8;
  ulong uVar9;
  ulong __n;
  void *__dest;
  void *__dest_00;
  void *__s;
  void *__s_00;
  void *pvVar10;
  long local_80;
  undefined4 local_74;
  void *local_70;
  long local_68;
  
  local_80 = tpidr_el0;
  local_68 = *(long *)(local_80 + 0x28);
  lVar5 = *(long *)(param_3 + 0x38);
  local_74 = param_2;
  if (lVar5 == 0) {
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    lVar5 = *(long *)(param_3 + 0x38);
    if (lVar5 == 0) {
      FUN_01ecafa0(param_3);
      lVar5 = *(long *)(param_3 + 0x38);
    }
  }
  uVar4 = *(uint *)(*(long *)(lVar5 + 8) + 0xfc);
  __n = (ulong)uVar4;
  if ((*(byte *)(*(long *)(lVar5 + 8) + 0x135) & 1) == 0) {
    lVar5 = FUN_01ecaf44();
    uVar4 = *(uint *)(lVar5 + 0xfc);
  }
  lVar5 = (long)&local_80 - ((ulong)(uVar4 + 0x10) + 0xf & 0x1fffffff0);
  uVar9 = __n + 0xf & 0x1fffffff0;
  pvVar10 = (void *)(lVar5 - uVar9);
  __dest_00 = (void *)((long)pvVar10 - uVar9);
  __dest = (void *)((long)__dest_00 - uVar9);
  __s = (void *)((long)__dest - uVar9);
  memset(__s,0,__n);
  __s_00 = (void *)((long)__s - uVar9);
  memset(__s_00,0,__n);
  if (*(long *)(param_1 + 0x18) != 0) {
    plVar1 = (long *)FUN_04155a74(*(long *)(param_1 + 0x18),local_74,0);
    if (plVar1 != (long *)0x0) {
      lVar6 = *plVar1;
      uVar9 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar9 != 0) {
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) ==
              *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
            puVar2 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_02454034;
          }
          uVar9 = uVar9 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar9 != 0);
      }
      puVar2 = (undefined8 *)
               FUN_01ecb238(plVar1,*(long *)
                                    Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                            ,0);
LAB_02454034:
      (*(code *)*puVar2)(plVar1,puVar2[1]);
    }
    puVar2 = (undefined8 *)**(undefined8 **)(param_3 + 0x38);
    local_70 = pvVar10;
    (*(code *)puVar2[2])(*puVar2,puVar2,0,&local_70,pvVar10);
    memcpy(__s_00,pvVar10,__n);
    lVar7 = *(long *)(param_3 + 0x38);
    pvVar10 = *(void **)(param_1 + 0x10);
    lVar6 = *(long *)(lVar7 + 8);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_01ecaf44();
      lVar7 = *(long *)(param_3 + 0x38);
    }
    local_70 = pvVar10;
    FUN_01f09244(lVar6,*(undefined8 *)(lVar7 + 0x10),lVar5,__s_00,&local_70,pvVar10);
    memcpy(__dest_00,__s_00,__n);
    memcpy(__s,__dest_00,__n);
    lVar5 = *(long *)(param_1 + 0x18);
    memcpy(__dest,__s,__n);
    uVar3 = thunk_FUN_01f113fc(*(undefined8 *)(*(long *)(param_3 + 0x38) + 8),__dest);
    if (lVar5 != 0) {
      FUN_04155ba4(lVar5,local_74,uVar3,0);
      if (*(long *)(local_80 + 0x28) == local_68) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


