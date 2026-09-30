/*
FUNCTION_NAME: System.Collections.Generic.KeyValuePair<Bounds,-object>$$Deconstruct
ENTRY_POINT: 02f1612c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 109
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_10;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_5
*/


/* WARNING: Removing unreachable block (ram,0x02f164d8) */

void System_Collections_Generic_KeyValuePair<Bounds,_object>__Deconstruct
               (undefined8 param_1,long *param_2,long param_3)

{
  ushort uVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  ulong __n;
  undefined8 *__dest;
  void *__s;
  undefined8 uVar10;
  long local_80;
  undefined8 *local_78;
  undefined1 auStack_6c [4];
  long local_68;
  
  local_80 = tpidr_el0;
  local_68 = *(long *)(local_80 + 0x28);
  if ((DAT_0483194d & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    DAT_0483194d = 1;
  }
  lVar3 = *(long *)(param_3 + 0x20);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_01ecaf44();
  }
  __n = (ulong)*(uint *)(*(long *)(*(long *)(lVar3 + 0xc0) + 0x10) + 0xfc);
  uVar8 = __n + 0xf & 0x1fffffff0;
  puVar6 = (undefined8 *)((long)&local_80 - uVar8);
  __dest = (undefined8 *)((long)puVar6 - uVar8);
  __s = (void *)((long)__dest - uVar8);
  memset(__s,0,__n);
  if (param_2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar3 = *(long *)(param_3 + 0x20);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_01ecaf44();
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x18);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_01ecaf44(lVar3);
  }
  lVar7 = *param_2;
  uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar8 != 0) {
    piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == lVar3) {
        puVar4 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
        goto LAB_02f16264;
      }
      uVar8 = uVar8 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar8 != 0);
  }
  puVar4 = (undefined8 *)FUN_01ecb238(param_2,lVar3,0);
LAB_02f16264:
  plVar5 = (long *)(*(code *)*puVar4)(param_2,puVar4[1]);
  puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  do {
    lVar3 = *plVar5;
    uVar8 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)puVar2) {
          puVar4 = (undefined8 *)(lVar3 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_02f162cc;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar4 = (undefined8 *)FUN_01ecb238(plVar5,*(long *)puVar2,0);
LAB_02f162cc:
    uVar8 = (*(code *)*puVar4)(plVar5,puVar4[1]);
    if ((uVar8 & 1) == 0) break;
    lVar3 = *(long *)(param_3 + 0x20);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_01ecaf44();
    }
    lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x38);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_01ecaf44(lVar3);
    }
    lVar7 = *plVar5;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == lVar3) {
          lVar3 = lVar7 + (long)*piVar9 * 0x10 + 0x138;
          goto LAB_02f16350;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    lVar3 = FUN_01ecb238(plVar5,lVar3,0);
LAB_02f16350:
    lVar3 = *(long *)(lVar3 + 8);
    local_78 = puVar6;
    (**(code **)(lVar3 + 0x10))(*(undefined8 *)(lVar3 + 8),lVar3,plVar5,&local_78,puVar6);
    memcpy(__s,puVar6,__n);
    memcpy(__dest,__s,__n);
    lVar7 = *(long *)(param_3 + 0x20);
    uVar1 = *(ushort *)(lVar7 + 0x135);
    lVar3 = lVar7;
    if ((uVar1 & 1) == 0) {
      lVar3 = FUN_01ecaf44();
      lVar7 = *(long *)(param_3 + 0x20);
      uVar1 = *(ushort *)(lVar7 + 0x135);
    }
    uVar10 = **(undefined8 **)(*(long *)(lVar3 + 0xc0) + 0xb0);
    lVar3 = lVar7;
    if ((uVar1 & 1) == 0) {
      lVar3 = FUN_01ecaf44();
      lVar7 = *(long *)(param_3 + 0x20);
      uVar1 = *(ushort *)(lVar7 + 0x135);
    }
    lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0xb0);
    if ((uVar1 & 1) == 0) {
      lVar7 = FUN_01ecaf44();
    }
    local_78 = __dest;
    if (-1 < *(int *)(*(long *)(*(long *)(lVar7 + 0xc0) + 0x10) + 0x28)) {
      local_78 = (undefined8 *)*__dest;
    }
    (**(code **)(lVar3 + 0x10))(uVar10,lVar3,param_1,&local_78,auStack_6c);
  } while( true );
  if (plVar5 != (long *)0x0) {
    lVar3 = *plVar5;
    uVar8 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar6 = (undefined8 *)(lVar3 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_02f1648c;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar6 = (undefined8 *)
             FUN_01ecb238(plVar5,*(long *)
                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                          ,0);
LAB_02f1648c:
    (*(code *)*puVar6)(plVar5,puVar6[1]);
  }
  if (*(long *)(local_80 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


