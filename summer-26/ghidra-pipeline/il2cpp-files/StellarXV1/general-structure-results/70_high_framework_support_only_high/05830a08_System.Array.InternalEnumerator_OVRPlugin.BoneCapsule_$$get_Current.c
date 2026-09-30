/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.BoneCapsule>$$get_Current
ENTRY_POINT: 05830a08
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 89
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_5
*/


void System_Array_InternalEnumerator<OVRPlugin_BoneCapsule>__get_Current(long param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  int *piVar4;
  void *pvVar5;
  long *plVar6;
  undefined8 *puVar7;
  long *plVar8;
  ushort in_w9;
  ulong uVar9;
  long unaff_x19;
  void *unaff_x20;
  ulong __n;
  undefined8 *__dest;
  undefined8 *__dest_00;
  code *pcVar10;
  undefined8 *puVar11;
  long unaff_x27;
  long unaff_x29;
  
  lVar1 = param_1;
  if ((in_w9 & 1) == 0) {
                    /* try { // try from 05830a10 to 05930a13 has its CatchHandler @ 05830a1c */
    param_1 = FUN_040b1acc(param_1);
                    /* try { // try from 05830a14 to 05930a3f has its CatchHandler @ 05830890 */
                    /* catch(type#1 @ 08d635d8) { ... } // from try @ 05830a10 with catch @ 05830a1c
                        */
    in_w9 = *(ushort *)(*(long *)(unaff_x19 + 0x20) + 0x135);
    lVar1 = *(long *)(unaff_x19 + 0x20);
                    /* catch(type#1 @ 08d635d8) { ... } // from try @ 05830900 with catch @ 05830a20
                        */
  }
  __n = (ulong)*(uint *)(*(long *)(*(long *)(param_1 + 0xc0) + 0x10) + 0xfc);
  uVar9 = __n + 0xf & 0x1fffffff0;
                    /* try { // try from 05830a40 to 05930a43 has its CatchHandler @ 05830a4c */
  __dest = (undefined8 *)(&stack0x00000000 + -uVar9);
                    /* catch() { ... } // from try @ 05830a40 with catch @ 05830a4c */
  __dest_00 = (undefined8 *)((long)__dest - uVar9);
                    /* try { // try from 05830a50 to 05930a57 has its CatchHandler @ 05830a60 */
  lVar2 = lVar1;
  if ((in_w9 & 1) == 0) {
                    /* try { // try from 05830a58 to 05930a63 has its CatchHandler @ 05830890 */
    lVar1 = FUN_040b1acc(lVar1);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 05830a50 with catch @ 05830a60
                        */
    in_w9 = *(ushort *)(*(long *)(unaff_x19 + 0x20) + 0x135);
    lVar2 = *(long *)(unaff_x19 + 0x20);
  }
  pcVar10 = (code *)**(undefined8 **)(*(long *)(lVar1 + 0xc0) + 0x80);
  if ((in_w9 & 1) == 0) {
    lVar2 = FUN_040b1acc(lVar2);
  }
  plVar3 = (long *)(*pcVar10)(*(undefined8 *)(*(long *)(lVar2 + 0xc0) + 0x80));
  if ((*(ushort *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
    FUN_040b1acc(*(long *)(unaff_x19 + 0x20));
  }
  piVar4 = (int *)thunk_FUN_040d6b00();
  if (*piVar4 < 1) {
LAB_05830d84:
    plVar6 = (long *)0xffffffff;
  }
  else {
    if ((*(ushort *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
      FUN_040b1acc();
    }
    pvVar5 = (void *)thunk_FUN_040d6b00();
    memcpy(__dest,pvVar5,__n);
    lVar1 = *(long *)(unaff_x19 + 0x20);
    if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_040b1acc();
    }
    pvVar5 = unaff_x20;
    if (-1 < *(int *)(*(long *)(*(long *)(lVar1 + 0xc0) + 0x10) + 0x28)) {
      pvVar5 = (void *)(unaff_x29 + -0x28);
    }
    plVar6 = memcpy(__dest_00,pvVar5,__n);
    if (plVar3 == (long *)0x0) {
      lVar1 = *(long *)(unaff_x27 + 0x28);
LAB_05830df4:
      if (lVar1 == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      goto System_Array_InternalEnumerator<OVRPlugin_Quatf>__get_Current;
    }
    lVar1 = *(long *)(unaff_x19 + 0x20);
    if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_040b1acc();
    }
    puVar11 = __dest;
    if (-1 < *(int *)(*(long *)(*(long *)(lVar1 + 0xc0) + 0x10) + 0x28)) {
      puVar11 = (undefined8 *)*__dest;
    }
    lVar1 = *(long *)(unaff_x19 + 0x20);
    if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_040b1acc();
    }
    puVar7 = __dest_00;
    if (-1 < *(int *)(*(long *)(*(long *)(lVar1 + 0xc0) + 0x10) + 0x28)) {
      puVar7 = (undefined8 *)*__dest_00;
    }
    lVar1 = *plVar3;
    *(undefined8 **)(unaff_x29 + -0x20) = puVar11;
    *(undefined8 **)(unaff_x29 + -0x18) = puVar7;
    lVar1 = *(long *)(lVar1 + 0x1c0);
    (**(code **)(lVar1 + 0x10))
              (*(undefined8 *)(lVar1 + 8),lVar1,plVar3,unaff_x29 + -0x20,unaff_x29 + -0xc);
    if (*(char *)(unaff_x29 + -0xc) == '\0') {
      if ((*(ushort *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
        FUN_040b1acc();
      }
      plVar6 = (long *)thunk_FUN_040d6b00();
      if (*plVar6 == 0) goto LAB_05830d84;
      *(long *)(unaff_x29 + -0x30) = unaff_x27;
      uVar9 = 0;
      while( true ) {
        if ((*(ushort *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
          FUN_040b1acc();
        }
        piVar4 = (int *)thunk_FUN_040d6b00();
        if ((long)(*piVar4 + -1) <= (long)uVar9) {
          plVar6 = (long *)0xffffffff;
          goto FUN_05830d98;
        }
        if ((*(ushort *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
          FUN_040b1acc();
        }
        plVar6 = (long *)thunk_FUN_040d6b00();
        plVar8 = (long *)*plVar6;
        if (plVar8 == (long *)0x0) {
          lVar1 = *(long *)(*(long *)(unaff_x29 + -0x30) + 0x28);
          goto LAB_05830df4;
        }
        if (*(uint *)(plVar8 + 3) <= uVar9) {
          if (*(long *)(*(long *)(unaff_x29 + -0x30) + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
            FUN_04077838();
          }
          goto System_Array_InternalEnumerator<OVRPlugin_Quatf>__get_Current;
        }
        memcpy(__dest,(void *)((long)plVar8 + uVar9 * *(uint *)(*plVar8 + 0x104) + 0x20),__n);
        lVar2 = *(long *)(unaff_x19 + 0x20);
        lVar1 = lVar2;
        if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
          lVar2 = FUN_040b1acc(lVar2);
          lVar1 = *(long *)(unaff_x19 + 0x20);
        }
        pvVar5 = unaff_x20;
        if (-1 < *(int *)(*(long *)(*(long *)(lVar2 + 0xc0) + 0x10) + 0x28)) {
          pvVar5 = (void *)(unaff_x29 + -0x28);
        }
        memcpy(__dest_00,pvVar5,__n);
        if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
          lVar1 = FUN_040b1acc(lVar1);
        }
        puVar11 = __dest;
        if (-1 < *(int *)(*(long *)(*(long *)(lVar1 + 0xc0) + 0x10) + 0x28)) {
          puVar11 = (undefined8 *)*__dest;
        }
        lVar1 = *(long *)(unaff_x19 + 0x20);
        if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
          lVar1 = FUN_040b1acc();
        }
        puVar7 = __dest_00;
        if (-1 < *(int *)(*(long *)(*(long *)(lVar1 + 0xc0) + 0x10) + 0x28)) {
          puVar7 = (undefined8 *)*__dest_00;
        }
        lVar1 = *plVar3;
        *(undefined8 **)(unaff_x29 + -0x20) = puVar11;
        *(undefined8 **)(unaff_x29 + -0x18) = puVar7;
        lVar1 = *(long *)(lVar1 + 0x1c0);
        (**(code **)(lVar1 + 0x10))
                  (*(undefined8 *)(lVar1 + 8),lVar1,plVar3,unaff_x29 + -0x20,unaff_x29 + -0xc);
        if (*(char *)(unaff_x29 + -0xc) != '\0') break;
        uVar9 = uVar9 + 1;
      }
      plVar6 = (long *)(ulong)((int)uVar9 + 1);
FUN_05830d98:
      unaff_x27 = *(long *)(unaff_x29 + -0x30);
    }
    else {
      plVar6 = (long *)0x0;
    }
  }
  if (*(long *)(unaff_x27 + 0x28) == *(long *)(unaff_x29 + -8)) {
    return;
  }
System_Array_InternalEnumerator<OVRPlugin_Quatf>__get_Current:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(plVar6);
}


