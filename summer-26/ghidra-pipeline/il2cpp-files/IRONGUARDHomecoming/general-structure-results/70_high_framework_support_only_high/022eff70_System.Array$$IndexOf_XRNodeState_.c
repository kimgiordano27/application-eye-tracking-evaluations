/*
FUNCTION_NAME: System.Array$$IndexOf<XRNodeState>
ENTRY_POINT: 022eff70
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_6;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x022f00d4) */

uint System_Array__IndexOf<XRNodeState>(undefined8 param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long *unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x21;
  long *unaff_x22;
  size_t unaff_x23;
  void *unaff_x24;
  void *pvVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *unaff_x27;
  uint unaff_w28;
  long unaff_x29;
  
  do {
    plVar7 = *(long **)(unaff_x20 + 0x38);
    do {
      puVar8 = unaff_x21;
      puVar9 = unaff_x27;
      if (-1 < *(int *)(plVar7[8] + 0x28)) {
        puVar8 = (undefined8 *)*unaff_x21;
        puVar9 = (undefined8 *)*unaff_x27;
      }
      lVar3 = *unaff_x22;
      uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar4 != 0) {
        piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == param_2) {
            lVar3 = lVar3 + (long)*piVar5 * 0x10 + 0x138;
            goto LAB_022effd8;
          }
          uVar4 = uVar4 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar4 != 0);
      }
      lVar3 = FUN_01ecb238();
LAB_022effd8:
      *(undefined8 **)(unaff_x29 + -0x20) = puVar8;
      *(undefined8 **)(unaff_x29 + -0x18) = puVar9;
      (**(code **)(*(long *)(lVar3 + 8) + 0x10))(*(undefined8 *)(*(long *)(lVar3 + 8) + 8));
      if (*(char *)(unaff_x29 + -0xc) != '\0') {
        uVar1 = unaff_w28;
        if (unaff_x19 == (long *)0x0) goto LAB_022f0074;
LAB_022f0014:
        unaff_w28 = uVar1;
        lVar3 = *unaff_x19;
        uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
        if (uVar4 == 0) goto LAB_022f004c;
        piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        goto LAB_022f0034;
      }
      lVar3 = *unaff_x19;
      uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar4 != 0) {
        piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) ==
              *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__) {
            puVar8 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
            goto LAB_022efe74;
          }
          uVar4 = uVar4 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar4 != 0);
      }
      puVar8 = (undefined8 *)FUN_01ecb238();
LAB_022efe74:
      unaff_w28 = (*(code *)*puVar8)();
      if ((unaff_w28 & 1) == 0) {
        unaff_w28 = 0;
        uVar1 = 0;
        if (unaff_x19 != (long *)0x0) goto LAB_022f0014;
        goto LAB_022f0074;
      }
      lVar3 = *(long *)(*(long *)(unaff_x20 + 0x38) + 0x30);
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_01ecaf44(lVar3);
      }
      lVar2 = *unaff_x19;
      uVar4 = (ulong)*(ushort *)(lVar2 + 0x12e);
      if (uVar4 != 0) {
        piVar5 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == lVar3) {
            lVar3 = lVar2 + (long)*piVar5 * 0x10 + 0x138;
            goto LAB_022efeec;
          }
          uVar4 = uVar4 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar4 != 0);
      }
      lVar3 = FUN_01ecb238();
LAB_022efeec:
      *(void **)(unaff_x29 + -0x20) = unaff_x24;
      (**(code **)(*(long *)(lVar3 + 8) + 0x10))(*(undefined8 *)(*(long *)(lVar3 + 8) + 8));
      pvVar6 = *(void **)(unaff_x29 + -0x38);
      memcpy(pvVar6,unaff_x24,unaff_x23);
      memcpy(unaff_x21,pvVar6,unaff_x23);
      plVar7 = *(long **)(unaff_x20 + 0x38);
      pvVar6 = *(void **)(unaff_x29 + -0x30);
      if (-1 < *(int *)(plVar7[8] + 0x28)) {
        pvVar6 = (void *)(unaff_x29 + -0x28);
      }
      memcpy(unaff_x27,pvVar6,unaff_x23);
      if (unaff_x22 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      param_2 = *plVar7;
    } while ((*(byte *)(param_2 + 0x135) & 1) != 0);
    param_2 = FUN_01ecaf44(param_2);
  } while( true );
  while( true ) {
    uVar4 = uVar4 - 1;
    piVar5 = piVar5 + 4;
    if (uVar4 == 0) break;
LAB_022f0034:
    if (*(long *)(piVar5 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar8 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
      goto LAB_022f0068;
    }
  }
LAB_022f004c:
  puVar8 = (undefined8 *)FUN_01ecb238();
LAB_022f0068:
  (*(code *)*puVar8)();
LAB_022f0074:
  if (*(long *)(*(long *)(unaff_x29 + -0x40) + 0x28) == *(long *)(unaff_x29 + -8)) {
    return unaff_w28 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


