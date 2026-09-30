/*
FUNCTION_NAME: FUN_02385d94
ENTRY_POINT: 02385d94
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 117
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_10;functionality_eye_api_context_without_clear_sink_hits_5
*/


/* WARNING: Removing unreachable block (ram,0x0238621c) */
/* WARNING: Removing unreachable block (ram,0x023862b4) */

void FUN_02385d94(undefined8 ****param_1,long param_2,long param_3,long param_4,byte param_5,
                 long param_6)

{
  undefined8 ****ppppuVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  int *piVar7;
  long *__dest;
  long lVar8;
  ulong __n;
  long *plVar9;
  long lVar10;
  long alStack_c0 [2];
  undefined8 ***local_b0;
  undefined8 ***pppuStack_a8;
  long *local_a0;
  long *local_98;
  long lStack_90;
  long local_88;
  long lStack_80;
  byte *local_78;
  byte local_6c [4];
  long local_68;
  
  lVar10 = tpidr_el0;
  local_68 = *(long *)(lVar10 + 0x28);
  lVar8 = *(long *)(param_6 + 0x38);
  local_b0 = param_1;
  pppuStack_a8 = param_1;
  if (lVar8 == 0) {
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    lVar8 = *(long *)(param_6 + 0x38);
    if (lVar8 == 0) {
      FUN_01ecafa0(param_6);
      lVar8 = *(long *)(param_6 + 0x38);
    }
  }
  __n = (ulong)*(uint *)(*(long *)(lVar8 + 8) + 0xfc);
  uVar6 = __n + 0xf & 0x1fffffff0;
  __dest = (long *)((long)alStack_c0 - uVar6);
  plVar9 = (long *)((long)__dest - uVar6);
  ppppuVar1 = (undefined8 ****)local_b0;
  if (-1 < *(int *)(*(long *)(lVar8 + 8) + 0x28)) {
    ppppuVar1 = &pppuStack_a8;
  }
  memcpy(__dest,ppppuVar1,__n);
  if (param_2 != 0) {
    puVar5 = *(undefined8 **)(lVar8 + 0x10);
    local_a0 = __dest;
    if (-1 < *(int *)(*(long *)(lVar8 + 8) + 0x28)) {
      local_a0 = (long *)*__dest;
    }
    (*(code *)puVar5[2])(*puVar5,puVar5,param_2,&local_a0,&local_98);
    if ((char)local_98 != '\0') {
      if ((param_5 & 1) != 0) {
        lVar8 = *(long *)(param_6 + 0x38);
        ppppuVar1 = (undefined8 ****)local_b0;
        if (-1 < *(int *)(*(long *)(lVar8 + 8) + 0x28)) {
          ppppuVar1 = &pppuStack_a8;
        }
        memcpy(__dest,ppppuVar1,__n);
        if (param_3 == 0) goto LAB_023862ac;
        puVar5 = *(undefined8 **)(lVar8 + 0x68);
        if (-1 < *(int *)(*(long *)(lVar8 + 8) + 0x28)) {
          __dest = (long *)*__dest;
        }
        local_a0 = __dest;
        (*(code *)puVar5[2])(*puVar5,puVar5,param_3,&local_a0,&local_98);
        if ((char)local_98 == '\0') {
          thunk_FUN_01efb3a4(Method_Unity_VisualScripting_MoveTowards<float>__ctor__);
          uVar3 = thunk_FUN_01f117cc();
          uVar4 = thunk_FUN_01efb3a4(Method_UnityEngine_Component_GetComponent<Rigidbody2D>__);
          FUN_0356adc8(uVar3,uVar4,0);
                    /* WARNING: Subroutine does not return */
          FUN_01f08910(uVar3,param_6);
        }
      }
LAB_0238627c:
      if (*(long *)(lVar10 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
    lVar8 = *(long *)(param_6 + 0x38);
    ppppuVar1 = (undefined8 ****)local_b0;
    if (-1 < *(int *)(*(long *)(lVar8 + 8) + 0x28)) {
      ppppuVar1 = &pppuStack_a8;
    }
    alStack_c0[1] = lVar10;
    memcpy(__dest,ppppuVar1,__n);
    puVar5 = *(undefined8 **)(lVar8 + 0x18);
    local_a0 = __dest;
    if (-1 < *(int *)(*(long *)(lVar8 + 8) + 0x28)) {
      local_a0 = (long *)*__dest;
    }
    (*(code *)puVar5[2])(*puVar5,puVar5,param_2,&local_a0,&local_98);
    lVar10 = *(long *)(param_6 + 0x38);
    ppppuVar1 = (undefined8 ****)local_b0;
    if (-1 < *(int *)(*(long *)(lVar10 + 8) + 0x28)) {
      ppppuVar1 = &pppuStack_a8;
    }
    memcpy(plVar9,ppppuVar1,__n);
    if (param_4 != 0) {
      puVar5 = *(undefined8 **)(lVar10 + 0x28);
      if (-1 < *(int *)(*(long *)(lVar10 + 8) + 0x28)) {
        plVar9 = (long *)*plVar9;
      }
      local_a0 = plVar9;
      (*(code *)puVar5[2])(*puVar5,puVar5,param_4,&local_a0,&local_98);
      plVar9 = local_98;
      if (local_98 != (long *)0x0) {
        lVar10 = *(long *)(*(long *)(param_6 + 0x38) + 0x30);
        if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
          lVar10 = FUN_01ecaf44(lVar10);
        }
        lVar8 = *plVar9;
        uVar6 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar6 != 0) {
          piVar7 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == lVar10) {
              puVar5 = (undefined8 *)(lVar8 + (long)*piVar7 * 0x10 + 0x138);
              goto LAB_02386058;
            }
            uVar6 = uVar6 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar6 != 0);
        }
        puVar5 = (undefined8 *)FUN_01ecb238(plVar9,lVar10,0);
LAB_02386058:
        plVar9 = (long *)(*(code *)*puVar5)(plVar9,puVar5[1]);
        puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
        if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        do {
          lVar10 = *plVar9;
          uVar6 = (ulong)*(ushort *)(lVar10 + 0x12e);
          if (uVar6 != 0) {
            piVar7 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(long *)(piVar7 + -2) == *(long *)puVar2) {
                puVar5 = (undefined8 *)(lVar10 + (long)*piVar7 * 0x10 + 0x138);
                goto LAB_023860c8;
              }
              uVar6 = uVar6 - 1;
              piVar7 = piVar7 + 4;
            } while (uVar6 != 0);
          }
          puVar5 = (undefined8 *)FUN_01ecb238(plVar9,*(long *)puVar2,0);
LAB_023860c8:
          uVar6 = (*(code *)*puVar5)(plVar9,puVar5[1]);
          lVar10 = alStack_c0[1];
          if ((uVar6 & 1) == 0) goto LAB_023861a0;
          lVar10 = *(long *)(*(long *)(param_6 + 0x38) + 0x40);
          if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
            lVar10 = FUN_01ecaf44(lVar10);
          }
          lVar8 = *plVar9;
          uVar6 = (ulong)*(ushort *)(lVar8 + 0x12e);
          if (uVar6 != 0) {
            piVar7 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(long *)(piVar7 + -2) == lVar10) {
                lVar10 = lVar8 + (long)*piVar7 * 0x10 + 0x138;
                goto LAB_0238613c;
              }
              uVar6 = uVar6 - 1;
              piVar7 = piVar7 + 4;
            } while (uVar6 != 0);
          }
          lVar10 = FUN_01ecb238(plVar9,lVar10,0);
LAB_0238613c:
          lVar10 = *(long *)(lVar10 + 8);
          local_a0 = __dest;
          (**(code **)(lVar10 + 0x10))(*(undefined8 *)(lVar10 + 8),lVar10,plVar9,&local_a0,__dest);
          local_98 = __dest;
          if (-1 < *(int *)(*(long *)(*(long *)(param_6 + 0x38) + 8) + 0x28)) {
            local_98 = (long *)*__dest;
          }
          puVar5 = *(undefined8 **)(*(long *)(param_6 + 0x38) + 0x58);
          lStack_90 = param_2;
          local_88 = param_3;
          lStack_80 = param_4;
          local_78 = local_6c;
          local_6c[0] = param_5 & 1;
          (*(code *)puVar5[2])(*puVar5,puVar5,0,&local_98,local_6c);
        } while( true );
      }
    }
  }
  goto LAB_023862ac;
LAB_023861a0:
  if (plVar9 != (long *)0x0) {
    lVar8 = *plVar9;
    uVar6 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar5 = (undefined8 *)(lVar8 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_02386204;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar5 = (undefined8 *)
             FUN_01ecb238(plVar9,*(long *)
                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                          ,0);
LAB_02386204:
    (*(code *)*puVar5)(plVar9,puVar5[1]);
  }
  lVar8 = *(long *)(param_6 + 0x38);
  ppppuVar1 = (undefined8 ****)local_b0;
  if (-1 < *(int *)(*(long *)(lVar8 + 8) + 0x28)) {
    ppppuVar1 = &pppuStack_a8;
  }
  memcpy(__dest,ppppuVar1,__n);
  if (param_3 != 0) {
    puVar5 = *(undefined8 **)(lVar8 + 0x60);
    if (-1 < *(int *)(*(long *)(lVar8 + 8) + 0x28)) {
      __dest = (long *)*__dest;
    }
    local_a0 = __dest;
    (*(code *)puVar5[2])(*puVar5,puVar5,param_3,&local_a0,__dest);
    goto LAB_0238627c;
  }
LAB_023862ac:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


