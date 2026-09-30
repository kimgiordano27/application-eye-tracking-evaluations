/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.WatchUtils$$Register<Vector2>
ENTRY_POINT: 037b93a0
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Manager_WatchUtils__Register<Vector2>(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  code *UNRECOVERED_JUMPTABLE;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long *unaff_x21;
  long unaff_x22;
  
  lVar1 = thunk_FUN_02dd3048();
  if (lVar1 == 0) {
    lVar1 = *(long *)(*(long *)(unaff_x22 + 0x38) + 0x10);
    if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
      FUN_02dcfd18(lVar1);
    }
    param_1 = (long *)thunk_FUN_02dd3048();
    if ((param_1 == (long *)0x0) || (lVar1 = thunk_FUN_02dd3048(), lVar1 == 0)) {
      lVar1 = *(long *)(*(long *)(unaff_x22 + 0x38) + 0x18);
      if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
        FUN_02dcfd18(lVar1);
      }
      param_1 = (long *)thunk_FUN_02dd3048();
      if ((param_1 == (long *)0x0) || (lVar1 = thunk_FUN_02dd3048(), lVar1 == 0)) {
        lVar1 = *(long *)(*(long *)(unaff_x22 + 0x38) + 0x20);
        if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
          FUN_02dcfd18(lVar1);
        }
        param_1 = (long *)thunk_FUN_02dd3048();
        if ((param_1 == (long *)0x0) || (lVar1 = thunk_FUN_02dd3048(), lVar1 == 0)) {
          lVar1 = **(long **)(unaff_x22 + 0x38);
          if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
            lVar1 = FUN_02dcfd18(lVar1);
          }
          lVar3 = *unaff_x21;
          uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
          if (uVar4 != 0) {
            piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
            do {
              if (*(long *)(piVar5 + -2) == lVar1) {
                puVar2 = (undefined8 *)(lVar3 + (long)(*piVar5 + 2) * 0x10 + 0x138);
                goto LAB_037b9688;
              }
              uVar4 = uVar4 - 1;
              piVar5 = piVar5 + 4;
            } while (uVar4 != 0);
          }
          puVar2 = (undefined8 *)FUN_02dd004c();
LAB_037b9688:
          UNRECOVERED_JUMPTABLE = (code *)*puVar2;
          goto LAB_037b9604;
        }
        lVar1 = *(long *)(*(long *)(unaff_x22 + 0x38) + 0x20);
        if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
          lVar1 = FUN_02dcfd18(lVar1);
        }
        lVar3 = *param_1;
        uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
        if (uVar4 != 0) {
          piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
          do {
            if (*(long *)(piVar5 + -2) == lVar1) goto LAB_037b95ec;
            uVar4 = uVar4 - 1;
            piVar5 = piVar5 + 4;
          } while (uVar4 != 0);
        }
      }
      else {
        lVar1 = *(long *)(*(long *)(unaff_x22 + 0x38) + 0x18);
        if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
          lVar1 = FUN_02dcfd18(lVar1);
        }
        lVar3 = *param_1;
        uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
        if (uVar4 != 0) {
          piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
          do {
            if (*(long *)(piVar5 + -2) == lVar1) goto LAB_037b95ec;
            uVar4 = uVar4 - 1;
            piVar5 = piVar5 + 4;
          } while (uVar4 != 0);
        }
      }
    }
    else {
      lVar1 = *(long *)(*(long *)(unaff_x22 + 0x38) + 0x10);
      if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
        lVar1 = FUN_02dcfd18(lVar1);
      }
      lVar3 = *param_1;
      uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar4 != 0) {
        piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
                    /* try { // try from 037b948c to 038b9497 has its CatchHandler @ 037ba3b0 */
          if (*(long *)(piVar5 + -2) == lVar1) goto LAB_037b95ec;
          uVar4 = uVar4 - 1;
          piVar5 = piVar5 + 4;
                    /* try { // try from 037b94a0 to 038b94bb has its CatchHandler @ 037ba400 */
        } while (uVar4 != 0);
      }
    }
  }
  else {
    lVar1 = *(long *)(*(long *)(unaff_x22 + 0x38) + 8);
    if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_02dcfd18(lVar1);
    }
    lVar3 = *param_1;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == lVar1) goto LAB_037b95ec;
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
  }
  puVar2 = (undefined8 *)FUN_02dd004c(param_1,lVar1,0);
  goto LAB_037b95f8;
LAB_037b95ec:
  puVar2 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
LAB_037b95f8:
  UNRECOVERED_JUMPTABLE = (code *)*puVar2;
LAB_037b9604:
                    /* WARNING: Could not recover jumptable at 0x037b9618. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}


