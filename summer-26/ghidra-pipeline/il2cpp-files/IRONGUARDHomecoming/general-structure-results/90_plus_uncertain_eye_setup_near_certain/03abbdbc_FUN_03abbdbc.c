/*
FUNCTION_NAME: FUN_03abbdbc
ENTRY_POINT: 03abbdbc
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 129
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_14;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_5
*/


/* WARNING: Removing unreachable block (ram,0x03abc23c) */
/* WARNING: Removing unreachable block (ram,0x03abc1a4) */

void FUN_03abbdbc(void)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 uVar9;
  long *plVar10;
  undefined8 *puVar11;
  long *plVar12;
  ulong uVar13;
  long lVar14;
  int *piVar15;
  long lVar16;
  undefined8 uVar17;
  ulong uVar18;
  
                    /* try { // try from 03abbdc8 to 03bbbdd3 has its CatchHandler @ 03abbf5c */
                    /* try { // try from 03abbdd4 to 03bbbf0b has its CatchHandler @ 03abb9e0 */
  if ((DAT_0483907b & 1) == 0) {
    thunk_FUN_01efb3a4(StringLiteral_9025);
    thunk_FUN_01efb3a4(StringLiteral_9005);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(Method_UnityEngine_Rendering_DebugFrameTiming_<RegisterDebugUI>b__17_1__);
    thunk_FUN_01efb3a4(Method_UnityEngine_Rendering_DebugFrameTiming_<RegisterDebugUI>b__17_10__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                      );
    thunk_FUN_01efb3a4(StringLiteral_9026);
    thunk_FUN_01efb3a4(StringLiteral_9027);
    thunk_FUN_01efb3a4(StringLiteral_9007);
    thunk_FUN_01efb3a4(StringLiteral_9028);
    DAT_0483907b = 1;
  }
  lVar8 = thunk_FUN_01ec9ab0(0);
  if ((lVar8 == 0) ||
     (lVar8 = FUN_035aee10(lVar8,0), puVar7 = StringLiteral_9028, puVar6 = StringLiteral_9026,
     puVar5 = StringLiteral_9007,
     puVar4 = Method_UnityEngine_Rendering_DebugFrameTiming_<RegisterDebugUI>b__17_10__,
     puVar3 = Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__,
     puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__, lVar8 == 0
     )) {
LAB_03abc238:
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  if ((int)*(ulong *)(lVar8 + 0x18) < 1) {
    return;
  }
  uVar18 = 0;
  uVar13 = *(ulong *)(lVar8 + 0x18) & 0xffffffff;
LAB_03abbecc:
  if (uVar13 <= uVar18) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a44();
  }
  uVar9 = FUN_034b9218(*(undefined8 *)(lVar8 + uVar18 * 8 + 0x20),0);
  lVar14 = *(long *)puVar5;
  if (*(int *)(lVar14 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c(lVar14);
    lVar14 = *(long *)puVar5;
  }
  lVar16 = *(long *)(*(long *)(lVar14 + 0xb8) + 0x10);
  if (lVar16 == 0) {
    if (*(int *)(lVar14 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c(lVar14);
      lVar14 = *(long *)puVar5;
    }
    uVar17 = **(undefined8 **)(lVar14 + 0xb8);
    lVar16 = thunk_FUN_01f117cc(*(undefined8 *)StringLiteral_9005);
    FUN_02e6c0a0(lVar16,uVar17,*(undefined8 *)StringLiteral_9027,0);
    plVar10 = (long *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x10);
    *plVar10 = lVar16;
    thunk_FUN_01f51358(plVar10,lVar16);
  }
  plVar10 = (long *)FUN_0230b6f4(uVar9,lVar16,*(undefined8 *)StringLiteral_9025);
  if (plVar10 != (long *)0x0) {
    lVar14 = *plVar10;
    uVar13 = (ulong)*(ushort *)(lVar14 + 0x12e);
    if (uVar13 != 0) {
      piVar15 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) ==
            *(long *)Method_UnityEngine_Rendering_DebugFrameTiming_<RegisterDebugUI>b__17_1__) {
          puVar11 = (undefined8 *)(lVar14 + (long)*piVar15 * 0x10 + 0x138);
          goto LAB_03abbfdc;
        }
        uVar13 = uVar13 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar13 != 0);
    }
    puVar11 = (undefined8 *)
              FUN_01ecb238(plVar10,*(long *)
                                    Method_UnityEngine_Rendering_DebugFrameTiming_<RegisterDebugUI>b__17_1__
                           ,0);
LAB_03abbfdc:
    plVar10 = (long *)(*(code *)*puVar11)(plVar10,puVar11[1]);
    if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    do {
      lVar14 = *plVar10;
      uVar13 = (ulong)*(ushort *)(lVar14 + 0x12e);
      if (uVar13 != 0) {
        piVar15 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == *(long *)puVar2) {
            puVar11 = (undefined8 *)(lVar14 + (long)*piVar15 * 0x10 + 0x138);
            goto LAB_03abc03c;
          }
          uVar13 = uVar13 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar13 != 0);
      }
      puVar11 = (undefined8 *)FUN_01ecb238(plVar10,*(long *)puVar2,0);
LAB_03abc03c:
      uVar13 = (*(code *)*puVar11)(plVar10,puVar11[1]);
      if ((uVar13 & 1) == 0) goto LAB_03abc12c;
      lVar14 = *plVar10;
      uVar13 = (ulong)*(ushort *)(lVar14 + 0x12e);
      if (uVar13 != 0) {
        piVar15 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == *(long *)puVar4) {
            puVar11 = (undefined8 *)(lVar14 + (long)*piVar15 * 0x10 + 0x138);
            goto UnityEngine_InputSystem_InputManager__ProcessStateChangeMonitors;
          }
          uVar13 = uVar13 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar13 != 0);
      }
      puVar11 = (undefined8 *)FUN_01ecb238(plVar10,*(long *)puVar4,0);
UnityEngine_InputSystem_InputManager__ProcessStateChangeMonitors:
      plVar12 = (long *)(*(code *)*puVar11)(plVar10,puVar11[1]);
      if (plVar12 == (long *)0x0) {
LAB_03abc1bc:
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar16 = *plVar12;
      lVar14 = *(long *)puVar6;
      bVar1 = *(byte *)(lVar14 + 0x130);
      if ((*(byte *)(lVar16 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(lVar16 + 200) + (ulong)bVar1 * 8 + -8) != lVar14)) goto LAB_03abc1bc;
      if (*(long *)(*(long *)(lVar16 + 200) + (ulong)bVar1 * 8 + -8) != lVar14) {
        plVar12 = (long *)0x0;
      }
      if (plVar12[2] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar14 = FUN_03584c60(plVar12[2],*(undefined8 *)puVar7,0x18,0);
      uVar9 = FUN_01f08890(*(undefined8 *)puVar3,0);
      if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      FUN_034b2bf4(lVar14,0,uVar9,0);
    } while( true );
  }
  goto LAB_03abc238;
LAB_03abc12c:
  if (plVar10 != (long *)0x0) {
    lVar14 = *plVar10;
    uVar13 = (ulong)*(ushort *)(lVar14 + 0x12e);
    if (uVar13 != 0) {
      piVar15 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar11 = (undefined8 *)(lVar14 + (long)*piVar15 * 0x10 + 0x138);
          goto LAB_03abc18c;
        }
        uVar13 = uVar13 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar13 != 0);
    }
    puVar11 = (undefined8 *)
              FUN_01ecb238(plVar10,*(long *)
                                    Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                           ,0);
LAB_03abc18c:
    (*(code *)*puVar11)(plVar10,puVar11[1]);
  }
  uVar13 = (ulong)*(uint *)(lVar8 + 0x18);
  uVar18 = uVar18 + 1;
  if ((long)(int)*(uint *)(lVar8 + 0x18) <= (long)uVar18) {
    return;
  }
  goto LAB_03abbecc;
}


