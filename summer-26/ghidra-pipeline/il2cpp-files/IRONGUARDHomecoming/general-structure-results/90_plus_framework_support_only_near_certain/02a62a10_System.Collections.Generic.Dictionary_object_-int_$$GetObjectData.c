/*
FUNCTION_NAME: System.Collections.Generic.Dictionary<object,-int>$$GetObjectData
ENTRY_POINT: 02a62a10
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 97
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_6;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_8;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x02a62d4c) */

long * System_Collections_Generic_Dictionary<object,_int>__GetObjectData
                 (undefined8 param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  long *plVar5;
  long *plVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  ulong uVar12;
  undefined1 *__src;
  uint uVar13;
  undefined1 auStack_90 [8];
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined1 *local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  if ((DAT_04830f36 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    DAT_04830f36 = 1;
  }
  lVar8 = *(long *)(*(long *)(param_2 + 0x20) + 0xc0);
  uVar12 = (ulong)*(uint *)(*(long *)(lVar8 + 0x88) + 0xfc);
  __src = auStack_90 + -(uVar12 + 0xf & 0x1fffffff0);
  local_80 = 0;
  uStack_78 = 0;
  local_88 = 0;
  (*(code *)**(undefined8 **)(lVar8 + 0x50))
            (param_1,&uStack_78,(long)&local_88 + 4,&local_80,&local_88);
  uVar4 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 0x60))
                    (uStack_78,local_88._4_4_,local_80,local_88 & 0xffffffff);
  lVar8 = *(long *)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 0x70);
  if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
    lVar8 = FUN_01ecaf44(lVar8);
  }
  puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
  plVar5 = (long *)FUN_01f08890(lVar8,uVar4);
  plVar6 = (long *)(*(code *)**(undefined8 **)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 0x78))
                             (param_1,uStack_78,local_88._4_4_,local_80,local_88 & 0xffffffff);
  puVar3 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  uVar13 = 0;
  do {
    lVar8 = *plVar6;
    uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)puVar3) {
          puVar7 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_02a62b94;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar7 = (undefined8 *)FUN_01ecb238(plVar6,*(long *)puVar3,0);
LAB_02a62b94:
    uVar10 = (*(code *)*puVar7)(plVar6,puVar7[1]);
    if ((uVar10 & 1) == 0) {
      if (plVar6 == (long *)0x0) goto LAB_02a62d04;
      lVar8 = *plVar6;
      uVar12 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar12 == 0) goto LAB_02a62cdc;
      piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      break;
    }
    lVar8 = *(long *)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 0x48);
    if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_01ecaf44(lVar8);
    }
    lVar9 = *plVar6;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == lVar8) {
          lVar8 = lVar9 + (long)*piVar11 * 0x10 + 0x138;
          goto LAB_02a62c0c;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    lVar8 = FUN_01ecb238(plVar6,lVar8,0);
LAB_02a62c0c:
    lVar8 = *(long *)(lVar8 + 8);
    local_70 = __src;
    (**(code **)(lVar8 + 0x10))(*(undefined8 *)(lVar8 + 8),lVar8,plVar6,&local_70,__src);
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    if (*(uint *)(plVar5 + 3) <= uVar13) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a44();
    }
    lVar9 = (long)(int)uVar13;
    memcpy((void *)((long)plVar5 + (ulong)*(uint *)(*plVar5 + 0x104) * lVar9 + 0x20),__src,uVar12);
    lVar8 = *(long *)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 0x88);
    if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_01ecaf44();
    }
    if (*(uint *)(plVar5 + 3) <= uVar13) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a44();
    }
    uVar13 = uVar13 + 1;
    FUN_01f087b0(lVar8,(long)plVar5 + (ulong)*(uint *)(*plVar5 + 0x104) * lVar9 + 0x20,__src);
  } while( true );
  while( true ) {
    uVar12 = uVar12 - 1;
    piVar11 = piVar11 + 4;
    if (uVar12 == 0) break;
    if (*(long *)(piVar11 + -2) == *(long *)puVar2) {
      puVar7 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
      goto LAB_02a62cf8;
    }
  }
LAB_02a62cdc:
  puVar7 = (undefined8 *)FUN_01ecb238(plVar6,*(long *)puVar2,0);
LAB_02a62cf8:
  (*(code *)*puVar7)(plVar6,puVar7[1]);
LAB_02a62d04:
  if (*(long *)(lVar1 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return plVar5;
}


