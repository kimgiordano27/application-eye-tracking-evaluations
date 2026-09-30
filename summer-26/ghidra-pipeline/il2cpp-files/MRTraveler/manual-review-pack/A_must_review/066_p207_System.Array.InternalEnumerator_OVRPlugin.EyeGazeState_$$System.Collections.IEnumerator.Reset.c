/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.EyeGazeState>$$System.Collections.IEnumerator.Reset
ENTRY_POINT: 04e7abc8
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 157
LABEL: confirmed_gaze_retrieval_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: active_eye_tracking_runtime_retrieval
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;attempted_use;active_gaze_retrieval
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_4;validity_or_gating_hits_12;strong_pose_or_ray_construction_hits_2;attempted_eye_tracking_permission_or_feature_enable;active_gaze_state_retrieval_with_validity_and_pose;functionality_gaze_retrieval_or_extraction
*/


/* WARNING: Removing unreachable block (ram,0x04e7aea4) */

void System_Array_InternalEnumerator<OVRPlugin_EyeGazeState>__System_Collections_IEnumerator_Reset
               (void)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  undefined8 *puVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  long unaff_x19;
  long unaff_x20;
  ulong unaff_x21;
  long *unaff_x23;
  long unaff_x26;
  long unaff_x29;
  
  lVar4 = thunk_FUN_03cf5234();
  FUN_077e9ab0();
  if (unaff_x23 != (long *)0x0) {
    lVar8 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x38);
    if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_03cf1244(lVar8);
    }
    lVar9 = *unaff_x23;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == lVar8) {
          puVar5 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_04e7ac4c;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar5 = (undefined8 *)FUN_03cf1348();
LAB_04e7ac4c:
    puVar1 = PTR_DAT_08e6a288;
    plVar6 = (long *)(*(code *)*puVar5)();
    puVar2 = PTR_DAT_08e6a290;
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    do {
      lVar8 = *plVar6;
      uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *(long *)puVar2) {
            puVar5 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_04e7acbc;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar5 = (undefined8 *)FUN_03cf1348(plVar6,*(long *)puVar2,0);
LAB_04e7acbc:
      uVar10 = (*(code *)*puVar5)(plVar6,puVar5[1]);
      if ((uVar10 & 1) == 0) {
        if (plVar6 == (long *)0x0) goto LAB_04e7ade0;
        lVar8 = *plVar6;
        uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar10 == 0) goto LAB_04e7adb8;
        piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        goto LAB_04e7ada0;
      }
      lVar8 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xe8);
      if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_03cf1244(lVar8);
      }
      lVar9 = *plVar6;
      uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == lVar8) {
            puVar5 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_04e7ad34;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar5 = (undefined8 *)FUN_03cf1348(plVar6,lVar8,0);
LAB_04e7ad34:
      (*(code *)*puVar5)(plVar6,puVar5[1]);
      iVar3 = FUN_04e7af60();
      if (-1 < iVar3) {
        if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03c8fb30();
        }
        FUN_077e9b24(lVar4,iVar3,0);
      }
    } while( true );
  }
LAB_04e7ae94:
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
  while( true ) {
    uVar10 = uVar10 - 1;
    piVar11 = piVar11 + 4;
    if (uVar10 == 0) break;
LAB_04e7ada0:
    if (*(long *)(piVar11 + -2) == *(long *)puVar1) {
      puVar5 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
      goto LAB_04e7add4;
    }
  }
LAB_04e7adb8:
  puVar5 = (undefined8 *)FUN_03cf1348(plVar6,*(long *)puVar1,0);
LAB_04e7add4:
  (*(code *)*puVar5)(plVar6,puVar5[1]);
LAB_04e7ade0:
  if (0 < (int)unaff_x21) {
    uVar10 = 0;
    lVar8 = 0x20;
    do {
      lVar9 = *(long *)(unaff_x20 + 0x18);
      if (lVar9 == 0) goto LAB_04e7ae94;
      if (*(uint *)(lVar9 + 0x18) <= uVar10) {
System_Array_InternalEnumerator<OVRPlugin_SpaceDiscoveryResult>__get_Current:
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb38();
      }
      if (-1 < *(int *)(lVar9 + lVar8)) {
        if (lVar4 == 0) goto LAB_04e7ae94;
        uVar7 = FUN_077e9ba0(lVar4,uVar10 & 0xffffffff,0);
        if ((uVar7 & 1) == 0) {
          if (*(long *)(unaff_x20 + 0x18) == 0) goto LAB_04e7ae94;
          if (*(uint *)(*(long *)(unaff_x20 + 0x18) + 0x18) <= uVar10)
          goto System_Array_InternalEnumerator<OVRPlugin_SpaceDiscoveryResult>__get_Current;
          FUN_04e77a20();
        }
      }
      uVar10 = uVar10 + 1;
      lVar8 = lVar8 + 0x18;
    } while (unaff_x21 != uVar10);
  }
  if (*(long *)(unaff_x26 + 0x28) == *(long *)(unaff_x29 + -8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


