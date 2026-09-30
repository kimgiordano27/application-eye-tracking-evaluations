/*
FUNCTION_NAME: FUN_05830e08
ENTRY_POINT: 05830e08
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined4 FUN_05830e08(undefined8 param_1,undefined8 ****param_2,long param_3)

{
  undefined4 uVar1;
  int iVar2;
  ushort uVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  int *piVar7;
  long *plVar8;
  undefined4 *puVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  long lVar12;
  void *__dest;
  ulong __n;
  code *pcVar13;
  undefined8 ***local_70;
  long local_68;
  
  lVar5 = tpidr_el0;
                    /* try { // try from 05830e2c to 05930e33 has its CatchHandler @ 05830f28 */
  local_68 = *(long *)(lVar5 + 0x28);
  lVar12 = *(long *)(param_3 + 0x20);
  uVar3 = *(ushort *)(lVar12 + 0x135);
  lVar6 = lVar12;
  local_70 = param_2;
  if ((uVar3 & 1) == 0) {
    lVar12 = FUN_040b1acc(lVar12);
                    /* try { // try from 05830e60 to 05930ec7 has its CatchHandler @ 05830f2c */
    uVar3 = *(ushort *)(*(long *)(param_3 + 0x20) + 0x135);
    lVar6 = *(long *)(param_3 + 0x20);
  }
  __n = (ulong)*(uint *)(*(long *)(*(long *)(lVar12 + 0xc0) + 0x10) + 0xfc);
  __dest = (void *)((long)&local_70 - (__n + 0xf & 0x1fffffff0));
  if ((uVar3 & 1) == 0) {
    lVar6 = FUN_040b1acc(lVar6);
  }
  piVar7 = (int *)thunk_FUN_040d6b00(param_1,*(undefined8 *)(**(long **)(lVar6 + 0xc0) + 0x80));
  lVar6 = *(long *)(param_3 + 0x20);
  if (*piVar7 == 0) {
    lVar12 = lVar6;
    if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_040b1acc(lVar6);
      lVar12 = *(long *)(param_3 + 0x20);
    }
    if (-1 < *(int *)(*(long *)(*(long *)(lVar6 + 0xc0) + 0x10) + 0x28)) {
      param_2 = &local_70;
    }
    memcpy(__dest,param_2,__n);
    if ((*(ushort *)(lVar12 + 0x135) & 1) == 0) {
      lVar12 = FUN_040b1acc(lVar12);
    }
    FUN_040775b0(param_1,*(long *)(**(long **)(lVar12 + 0xc0) + 0x80) + 0x20,__dest,__n);
LAB_05831288:
    lVar6 = *(long *)(param_3 + 0x20);
    if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_040b1acc();
    }
    puVar9 = (undefined4 *)
             thunk_FUN_040d6b00(param_1,*(undefined8 *)(**(long **)(lVar6 + 0xc0) + 0x80));
    lVar6 = *(long *)(param_3 + 0x20);
    uVar1 = *puVar9;
    if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_040b1acc();
    }
    piVar7 = (int *)thunk_FUN_040d6b00(param_1,*(undefined8 *)(**(long **)(lVar6 + 0xc0) + 0x80));
    lVar6 = *(long *)(param_3 + 0x20);
    iVar2 = *piVar7;
    if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_040b1acc();
    }
    FUN_03b2ebac(param_1,*(undefined8 *)(**(long **)(lVar6 + 0xc0) + 0x80),iVar2 + 1);
    if (*(long *)(lVar5 + 0x28) == local_68) {
      return uVar1;
    }
    goto LAB_05831370;
  }
                    /* try { // try from 05830ec8 to 05930f1f has its CatchHandler @ 05830dcc */
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_040b1acc(lVar6);
  }
  plVar8 = (long *)thunk_FUN_040d6b00(param_1,*(long *)(**(long **)(lVar6 + 0xc0) + 0x80) + 0x40);
  lVar6 = *(long *)(param_3 + 0x20);
  if (*plVar8 == 0) {
    if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_040b1acc();
    }
    lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 0x28);
    if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_040b1acc();
    }
    uVar10 = FUN_04077674(lVar6,1);
    lVar6 = *(long *)(param_3 + 0x20);
    if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_040b1acc(lVar6);
    }
    FUN_03b2820c(param_1,*(long *)(**(long **)(lVar6 + 0xc0) + 0x80) + 0x40,uVar10);
    lVar6 = *(long *)(param_3 + 0x20);
    if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_040b1acc();
    }
    plVar8 = (long *)thunk_FUN_040d6b00(param_1,*(long *)(**(long **)(lVar6 + 0xc0) + 0x80) + 0x40);
    lVar12 = *(long *)(param_3 + 0x20);
    lVar6 = *plVar8;
    if ((*(ushort *)(lVar12 + 0x135) & 1) == 0) {
      lVar12 = FUN_040b1acc();
    }
    if (-1 < *(int *)(*(long *)(*(long *)(lVar12 + 0xc0) + 0x10) + 0x28)) {
      param_2 = &local_70;
    }
    memcpy(__dest,param_2,__n);
    if (lVar6 == 0) goto System_Array_InternalEnumerator<OVRPlugin_Vector2f>___ctor;
    if (*(int *)(lVar6 + 0x18) != 0) {
      memmove((void *)(lVar6 + 0x20),param_2,__n);
      lVar12 = *(long *)(param_3 + 0x20);
      if ((*(ushort *)(lVar12 + 0x135) & 1) == 0) {
        lVar12 = FUN_040b1acc();
      }
      lVar12 = *(long *)(*(long *)(lVar12 + 0xc0) + 0x10);
      if ((*(ushort *)(lVar12 + 0x135) & 1) == 0) {
        lVar12 = FUN_040b1acc();
      }
      if (*(int *)(lVar6 + 0x18) != 0) {
        lVar6 = lVar6 + 0x20;
        goto LAB_0583121c;
      }
    }
  }
  else {
    if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_040b1acc();
    }
    puVar9 = (undefined4 *)
             thunk_FUN_040d6b00(param_1,*(undefined8 *)(**(long **)(lVar6 + 0xc0) + 0x80));
    lVar12 = *(long *)(param_3 + 0x20);
    uVar1 = *puVar9;
    uVar3 = *(ushort *)(lVar12 + 0x135);
    lVar6 = lVar12;
    if ((uVar3 & 1) == 0) {
      lVar12 = FUN_040b1acc(lVar12);
      uVar3 = *(ushort *)(*(long *)(param_3 + 0x20) + 0x135);
      lVar6 = *(long *)(param_3 + 0x20);
    }
    pcVar13 = (code *)**(undefined8 **)(*(long *)(lVar12 + 0xc0) + 0x60);
    if ((uVar3 & 1) == 0) {
      lVar6 = FUN_040b1acc(lVar6);
    }
    uVar10 = thunk_FUN_040d6b00(param_1,*(long *)(**(long **)(lVar6 + 0xc0) + 0x80) + 0x40);
    lVar6 = *(long *)(param_3 + 0x20);
    if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_040b1acc(lVar6);
    }
    (*pcVar13)(uVar10,uVar1,*(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0x60));
    lVar6 = *(long *)(param_3 + 0x20);
    if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_040b1acc();
    }
    puVar11 = (undefined8 *)
              thunk_FUN_040d6b00(param_1,*(long *)(**(long **)(lVar6 + 0xc0) + 0x80) + 0x40);
    lVar6 = *(long *)(param_3 + 0x20);
    plVar8 = (long *)*puVar11;
    if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_040b1acc();
    }
    piVar7 = (int *)thunk_FUN_040d6b00(param_1,*(undefined8 *)(**(long **)(lVar6 + 0xc0) + 0x80));
    lVar6 = *(long *)(param_3 + 0x20);
    iVar2 = *piVar7;
    if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_040b1acc();
    }
    if (-1 < *(int *)(*(long *)(*(long *)(lVar6 + 0xc0) + 0x10) + 0x28)) {
      param_2 = &local_70;
    }
    memcpy(__dest,param_2,__n);
    if (plVar8 == (long *)0x0) {
System_Array_InternalEnumerator<OVRPlugin_Vector2f>___ctor:
      if (*(long *)(lVar5 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      goto LAB_05831370;
    }
    uVar4 = iVar2 - 1;
    if (uVar4 < *(uint *)(plVar8 + 3)) {
      memmove((void *)((long)plVar8 + (ulong)*(uint *)(*plVar8 + 0x104) * (long)(int)uVar4 + 0x20),
              param_2,__n);
      lVar6 = *(long *)(param_3 + 0x20);
      if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_040b1acc();
      }
      lVar12 = *(long *)(*(long *)(lVar6 + 0xc0) + 0x10);
      if ((*(ushort *)(lVar12 + 0x135) & 1) == 0) {
        lVar12 = FUN_040b1acc();
      }
      if (uVar4 < *(uint *)(plVar8 + 3)) {
        lVar6 = (long)plVar8 + (ulong)*(uint *)(*plVar8 + 0x104) * (long)(int)uVar4 + 0x20;
LAB_0583121c:
        FUN_04077538(lVar12,lVar6,__dest);
        goto LAB_05831288;
      }
    }
  }
  if (*(long *)(lVar5 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
    FUN_04077838();
  }
LAB_05831370:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


