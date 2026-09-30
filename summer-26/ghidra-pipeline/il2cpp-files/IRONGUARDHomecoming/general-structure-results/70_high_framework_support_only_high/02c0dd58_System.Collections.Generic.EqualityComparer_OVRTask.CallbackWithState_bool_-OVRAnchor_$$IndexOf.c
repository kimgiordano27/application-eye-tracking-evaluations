/*
FUNCTION_NAME: System.Collections.Generic.EqualityComparer<OVRTask.CallbackWithState<bool,-OVRAnchor>>$$IndexOf
ENTRY_POINT: 02c0dd58
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 85
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_5;validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x02c0e078) */

long * System_Collections_Generic_EqualityComparer<OVRTask_CallbackWithState<bool,_OVRAnchor>>__IndexOf
                 (void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  byte bVar4;
  undefined8 *puVar5;
  long *plVar6;
  long *plVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  long *unaff_x19;
  long unaff_x20;
  long *plVar13;
  long unaff_x21;
  undefined8 *unaff_x22;
  long unaff_x23;
  uint unaff_w24;
  undefined4 uVar14;
  float fVar15;
  float fStack000000000000001c;
  
  thunk_FUN_01efb3a4();
  *(undefined1 *)(unaff_x20 + 0x4ab) = 1;
  fStack000000000000001c = 0.0;
  if (DAT_0482ee12 == '\0') {
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LeaderboardEntryList>_get_Data__);
    DAT_0482ee12 = '\x01';
  }
  uVar14 = *(undefined4 *)
            (*(undefined8 **)
              (*(long *)Method_Oculus_Platform_Message<LeaderboardEntryList>_get_Data__ + 0xb8) + 1)
  ;
  *unaff_x22 = **(undefined8 **)
                 (*(long *)Method_Oculus_Platform_Message<LeaderboardEntryList>_get_Data__ + 0xb8);
  *(undefined4 *)(unaff_x22 + 1) = uVar14;
  if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar9 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x40);
  if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
    lVar9 = FUN_01ecaf44(lVar9);
  }
  lVar10 = *unaff_x19;
  uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
  if (uVar11 != 0) {
    piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
    do {
      if (*(long *)(piVar12 + -2) == lVar9) {
        puVar5 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
        goto LAB_02c0de1c;
      }
      uVar11 = uVar11 - 1;
      piVar12 = piVar12 + 4;
    } while (uVar11 != 0);
  }
  puVar5 = (undefined8 *)FUN_01ecb238();
LAB_02c0de1c:
  puVar3 = Method_System_Linq_Enumerable_Where<List<InvocationContext>>__;
  puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
  plVar6 = (long *)(*(code *)*puVar5)();
  plVar13 = (long *)0x0;
  fVar15 = -INFINITY;
  do {
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar9 = *plVar6;
    uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
          puVar5 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_02c0dea4;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar5 = (undefined8 *)FUN_01ecb238(plVar6,*(long *)puVar2,0);
LAB_02c0dea4:
    uVar11 = (*(code *)*puVar5)(plVar6,puVar5[1]);
    if ((uVar11 & 1) == 0) {
      if (plVar6 == (long *)0x0) {
        return plVar13;
      }
      lVar9 = *plVar6;
      uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar11 == 0) goto LAB_02c0e014;
      piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      break;
    }
    lVar9 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x50);
    if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_01ecaf44(lVar9);
    }
    lVar10 = *plVar6;
    uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == lVar9) {
          puVar5 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_02c0df1c;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar5 = (undefined8 *)FUN_01ecb238(plVar6,lVar9,0);
LAB_02c0df1c:
    plVar7 = (long *)(*(code *)*puVar5)(plVar6,puVar5[1]);
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar9 = *plVar7;
    lVar10 = *(long *)(unaff_x23 + 0x38);
    uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)puVar3) {
          puVar5 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_02c0df80;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar5 = (undefined8 *)FUN_01ecb238(plVar7,*(long *)puVar3,0);
LAB_02c0df80:
    uVar8 = (*(code *)*puVar5)(plVar7,puVar5[1]);
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c(uVar8,uVar8);
    }
    bVar4 = FUN_035fbeec(lVar10,uVar8,unaff_w24 & 1,&stack0x0000001c);
    if ((bVar4 & fVar15 < fStack000000000000001c) != 0) {
      *(undefined4 *)(unaff_x22 + 1) = 0;
      *unaff_x22 = 0;
      plVar13 = plVar7;
      fVar15 = fStack000000000000001c;
    }
  } while( true );
  while( true ) {
    uVar11 = uVar11 - 1;
    piVar12 = piVar12 + 4;
    if (uVar11 == 0) break;
    if (*(long *)(piVar12 + -2) == *(long *)puVar1) {
      puVar5 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
      goto LAB_02c0e030;
    }
  }
LAB_02c0e014:
  puVar5 = (undefined8 *)FUN_01ecb238(plVar6,*(long *)puVar1,0);
LAB_02c0e030:
  (*(code *)*puVar5)(plVar6,puVar5[1]);
  return plVar13;
}


