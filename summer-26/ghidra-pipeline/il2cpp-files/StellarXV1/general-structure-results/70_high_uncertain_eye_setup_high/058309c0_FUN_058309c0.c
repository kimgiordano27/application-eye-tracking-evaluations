/*
FUNCTION_NAME: FUN_058309c0
ENTRY_POINT: 058309c0
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_8;functionality_eye_api_context_without_clear_sink_hits_3
*/


void FUN_058309c0(undefined8 param_1,undefined8 ****param_2,long param_3)

{
  undefined8 ****ppppuVar1;
  ushort uVar2;
  long lVar3;
  long *plVar4;
  int *piVar5;
  void *__src;
  long *plVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  ulong uVar10;
  ulong __n;
  undefined8 *__dest;
  undefined8 *__dest_00;
  code *pcVar11;
  undefined8 *puVar12;
  long local_90;
  undefined8 ***local_88;
  undefined8 *local_80;
  undefined8 *puStack_78;
  char local_6c [4];
  long local_68;
  
                    /* try { // try from 058309c0 to 05930a0f has its CatchHandler @ 05830890 */
  lVar7 = tpidr_el0;
  local_68 = *(long *)(lVar7 + 0x28);
  lVar8 = *(long *)(param_3 + 0x20);
  uVar2 = *(ushort *)(lVar8 + 0x135);
  lVar3 = lVar8;
  local_88 = param_2;
  if ((uVar2 & 1) == 0) {
    lVar8 = FUN_040b1acc(lVar8);
    uVar2 = *(ushort *)(*(long *)(param_3 + 0x20) + 0x135);
    lVar3 = *(long *)(param_3 + 0x20);
  }
  __n = (ulong)*(uint *)(*(long *)(*(long *)(lVar8 + 0xc0) + 0x10) + 0xfc);
  uVar10 = __n + 0xf & 0x1fffffff0;
  __dest = (undefined8 *)((long)&local_90 - uVar10);
  __dest_00 = (undefined8 *)((long)__dest - uVar10);
  lVar8 = lVar3;
  if ((uVar2 & 1) == 0) {
    lVar3 = FUN_040b1acc(lVar3);
    uVar2 = *(ushort *)(*(long *)(param_3 + 0x20) + 0x135);
    lVar8 = *(long *)(param_3 + 0x20);
  }
  pcVar11 = (code *)**(undefined8 **)(*(long *)(lVar3 + 0xc0) + 0x80);
  if ((uVar2 & 1) == 0) {
    lVar8 = FUN_040b1acc(lVar8);
  }
  plVar4 = (long *)(*pcVar11)(*(undefined8 *)(*(long *)(lVar8 + 0xc0) + 0x80));
  lVar3 = *(long *)(param_3 + 0x20);
  if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_040b1acc(lVar3);
  }
  piVar5 = (int *)thunk_FUN_040d6b00(param_1,*(undefined8 *)(**(long **)(lVar3 + 0xc0) + 0x80));
  if (*piVar5 < 1) {
LAB_05830d84:
    plVar6 = (long *)0xffffffff;
  }
  else {
    lVar3 = *(long *)(param_3 + 0x20);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_040b1acc();
    }
    __src = (void *)thunk_FUN_040d6b00(param_1,*(long *)(**(long **)(lVar3 + 0xc0) + 0x80) + 0x20);
    memcpy(__dest,__src,__n);
    lVar3 = *(long *)(param_3 + 0x20);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_040b1acc();
    }
    ppppuVar1 = param_2;
    if (-1 < *(int *)(*(long *)(*(long *)(lVar3 + 0xc0) + 0x10) + 0x28)) {
      ppppuVar1 = &local_88;
    }
    plVar6 = memcpy(__dest_00,ppppuVar1,__n);
    if (plVar4 == (long *)0x0) {
      lVar7 = *(long *)(lVar7 + 0x28);
LAB_05830df4:
      if (lVar7 == local_68) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      goto System_Array_InternalEnumerator<OVRPlugin_Quatf>__get_Current;
    }
    lVar3 = *(long *)(param_3 + 0x20);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_040b1acc();
    }
    puVar12 = __dest;
    if (-1 < *(int *)(*(long *)(*(long *)(lVar3 + 0xc0) + 0x10) + 0x28)) {
      puVar12 = (undefined8 *)*__dest;
    }
    lVar3 = *(long *)(param_3 + 0x20);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_040b1acc();
    }
    puStack_78 = __dest_00;
    if (-1 < *(int *)(*(long *)(*(long *)(lVar3 + 0xc0) + 0x10) + 0x28)) {
      puStack_78 = (undefined8 *)*__dest_00;
    }
    lVar3 = *(long *)(*plVar4 + 0x1c0);
    local_80 = puVar12;
    (**(code **)(lVar3 + 0x10))(*(undefined8 *)(lVar3 + 8),lVar3,plVar4,&local_80,local_6c);
    if (local_6c[0] == '\0') {
      lVar3 = *(long *)(param_3 + 0x20);
      if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_040b1acc();
      }
      plVar6 = (long *)thunk_FUN_040d6b00(param_1,*(long *)(**(long **)(lVar3 + 0xc0) + 0x80) + 0x40
                                         );
      if (*plVar6 == 0) goto LAB_05830d84;
      uVar10 = 0;
      local_90 = lVar7;
      while( true ) {
        lVar7 = *(long *)(param_3 + 0x20);
        if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
          lVar7 = FUN_040b1acc();
        }
        piVar5 = (int *)thunk_FUN_040d6b00(param_1,*(undefined8 *)(**(long **)(lVar7 + 0xc0) + 0x80)
                                          );
        if ((long)(*piVar5 + -1) <= (long)uVar10) {
          plVar6 = (long *)0xffffffff;
          lVar7 = local_90;
          goto LAB_05830d9c;
        }
        lVar7 = *(long *)(param_3 + 0x20);
        if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
          lVar7 = FUN_040b1acc();
        }
        plVar6 = (long *)thunk_FUN_040d6b00(param_1,*(long *)(**(long **)(lVar7 + 0xc0) + 0x80) +
                                                    0x40);
        plVar9 = (long *)*plVar6;
        if (plVar9 == (long *)0x0) {
          lVar7 = *(long *)(local_90 + 0x28);
          goto LAB_05830df4;
        }
        if (*(uint *)(plVar9 + 3) <= uVar10) {
          if (*(long *)(local_90 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
            FUN_04077838();
          }
          goto System_Array_InternalEnumerator<OVRPlugin_Quatf>__get_Current;
        }
        memcpy(__dest,(void *)((long)plVar9 + uVar10 * *(uint *)(*plVar9 + 0x104) + 0x20),__n);
        lVar3 = *(long *)(param_3 + 0x20);
        lVar7 = lVar3;
        if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
          lVar3 = FUN_040b1acc(lVar3);
          lVar7 = *(long *)(param_3 + 0x20);
        }
        ppppuVar1 = param_2;
        if (-1 < *(int *)(*(long *)(*(long *)(lVar3 + 0xc0) + 0x10) + 0x28)) {
          ppppuVar1 = &local_88;
        }
        memcpy(__dest_00,ppppuVar1,__n);
        if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
          lVar7 = FUN_040b1acc(lVar7);
        }
        puVar12 = __dest;
        if (-1 < *(int *)(*(long *)(*(long *)(lVar7 + 0xc0) + 0x10) + 0x28)) {
          puVar12 = (undefined8 *)*__dest;
        }
        lVar7 = *(long *)(param_3 + 0x20);
        if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
          lVar7 = FUN_040b1acc();
        }
        puStack_78 = __dest_00;
        if (-1 < *(int *)(*(long *)(*(long *)(lVar7 + 0xc0) + 0x10) + 0x28)) {
          puStack_78 = (undefined8 *)*__dest_00;
        }
        lVar7 = *(long *)(*plVar4 + 0x1c0);
        local_80 = puVar12;
        (**(code **)(lVar7 + 0x10))(*(undefined8 *)(lVar7 + 8),lVar7,plVar4,&local_80,local_6c);
        if (local_6c[0] != '\0') break;
        uVar10 = uVar10 + 1;
      }
      plVar6 = (long *)(ulong)((int)uVar10 + 1);
      lVar7 = local_90;
    }
    else {
      plVar6 = (long *)0x0;
    }
  }
LAB_05830d9c:
  if (*(long *)(lVar7 + 0x28) == local_68) {
    return;
  }
System_Array_InternalEnumerator<OVRPlugin_Quatf>__get_Current:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(plVar6);
}


