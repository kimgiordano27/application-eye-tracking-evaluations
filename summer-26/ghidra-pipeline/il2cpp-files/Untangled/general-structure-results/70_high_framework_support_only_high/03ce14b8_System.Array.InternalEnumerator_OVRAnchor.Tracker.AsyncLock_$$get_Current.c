/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRAnchor.Tracker.AsyncLock>$$get_Current
ENTRY_POINT: 03ce14b8
PROGRAM: Untangled-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_11;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x03ce1800) */
/* WARNING: Removing unreachable block (ram,0x03ce17ac) */

long System_Array_InternalEnumerator<OVRAnchor_Tracker_AsyncLock>__get_Current
               (ulong param_1,undefined8 param_2,long *param_3,long param_4)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  long *plVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  int *piVar13;
  long unaff_x20;
  
  if ((param_1 & 1) == 0) {
    FUN_02f07e70(PTR_DAT_06d01f60);
    FUN_02f07e70(PTR_DAT_06d02048);
    FUN_02f07e70(PTR_DAT_06d10420);
    FUN_02f07e70(PTR_DAT_06d02330);
    FUN_02f07e70(PTR_DAT_06d15e40);
    FUN_02f07e70(PTR_DAT_06d02340);
    FUN_02f07e70(PTR_DAT_06d02348);
    *(undefined1 *)(unaff_x20 + 0x740) = 1;
  }
  if (param_3 != (long *)0x0) {
    lVar9 = *(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x10);
    if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_02eea768(lVar9);
    }
    if (*param_3 != lVar9) {
                    /* WARNING: Subroutine does not return */
      FUN_02f08440(param_3);
    }
    iVar4 = FUN_03ce5c98(param_3,*(undefined8 *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x40)
                        );
    if (iVar4 != 0) {
      lVar9 = thunk_FUN_02ef1808(*(undefined8 *)PTR_DAT_06d02348);
      FUN_03fd0468(lVar9,*(undefined8 *)PTR_DAT_06d02340);
      plVar5 = (long *)FUN_03ce5fa0(param_3,*(undefined8 *)
                                             (*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x50));
      puVar3 = PTR_DAT_06d02330;
      puVar2 = PTR_DAT_06d02048;
      if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      do {
        lVar10 = *plVar5;
        uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar12 != 0) {
          piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == *(long *)puVar2) {
              puVar6 = (undefined8 *)(lVar10 + (long)*piVar13 * 0x10 + 0x138);
              goto System_Array_InternalEnumerator<OVRPlugin_Qpl_Annotation>___ctor;
            }
            uVar12 = uVar12 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar12 != 0);
        }
        puVar6 = (undefined8 *)FUN_02eea86c(plVar5,*(long *)puVar2,0);
System_Array_InternalEnumerator<OVRPlugin_Qpl_Annotation>___ctor:
        uVar12 = (*(code *)*puVar6)(plVar5,puVar6[1]);
        if ((uVar12 & 1) == 0) {
          if (plVar5 == (long *)0x0) goto LAB_03ce17a0;
          lVar10 = *plVar5;
          uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
          if (uVar12 == 0) goto LAB_03ce173c;
          piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          goto LAB_03ce1724;
        }
        lVar10 = *(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x58);
        if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
          lVar10 = FUN_02eea768(lVar10);
        }
        lVar11 = *plVar5;
        uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar12 != 0) {
          piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == lVar10) {
              puVar6 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
              goto LAB_03ce167c;
            }
            uVar12 = uVar12 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar12 != 0);
        }
        puVar6 = (undefined8 *)FUN_02eea86c(plVar5,lVar10,0);
LAB_03ce167c:
        plVar7 = (long *)(*(code *)*puVar6)(plVar5,puVar6[1]);
        if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f080c0();
        }
        uVar8 = (**(code **)(*plVar7 + 0x168))(plVar7,*(undefined8 *)(*plVar7 + 0x170));
        if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f080c0();
        }
        lVar10 = *(long *)(lVar9 + 0x10);
        lVar11 = *(long *)puVar3;
        *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f080c0();
        }
        uVar1 = *(uint *)(lVar9 + 0x18);
        if (uVar1 < *(uint *)(lVar10 + 0x18)) {
          *(uint *)(lVar9 + 0x18) = uVar1 + 1;
          *(undefined8 *)(lVar10 + (long)(int)uVar1 * 8 + 0x20) = uVar8;
          thunk_FUN_02f411dc();
        }
        else {
          FUN_03fd0c9c(lVar9,uVar8,
                       *(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
        }
      } while( true );
    }
    lVar9 = param_3[5];
    if (lVar9 != 0) {
      lVar10 = thunk_FUN_02ef1808(*(undefined8 *)PTR_DAT_06d02348);
      FUN_03fd0590(lVar10,lVar9,*(undefined8 *)PTR_DAT_06d15e40);
      return lVar10;
    }
  }
  return 0;
  while( true ) {
    uVar12 = uVar12 - 1;
    piVar13 = piVar13 + 4;
    if (uVar12 == 0) break;
LAB_03ce1724:
    if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_06d01f60) {
      puVar6 = (undefined8 *)(lVar10 + (long)*piVar13 * 0x10 + 0x138);
      goto LAB_03ce1794;
    }
  }
LAB_03ce173c:
  puVar6 = (undefined8 *)FUN_02eea86c(plVar5,*(long *)PTR_DAT_06d01f60,0);
LAB_03ce1794:
  (*(code *)*puVar6)(plVar5,puVar6[1]);
LAB_03ce17a0:
  if (param_3[5] != 0) {
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    FUN_03fd0ea8(lVar9,param_3[5],*(undefined8 *)PTR_DAT_06d10420);
  }
  return lVar9;
}


