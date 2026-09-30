/*
FUNCTION_NAME: FUN_03fd3000
ENTRY_POINT: 03fd3000
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 117
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_6;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_8;functionality_eye_api_context_without_clear_sink_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x03fd32ac) */

undefined1  [16]
FUN_03fd3000(undefined1 param_1 [16],ulong param_2,ulong param_3,undefined8 param_4,long *param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined1 auVar4 [16];
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  bool bVar9;
  undefined8 *puVar10;
  long *plVar11;
  bool bVar12;
  long lVar13;
  int *piVar14;
  ulong uVar15;
  uint *puVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined8 uVar19;
  uint uVar20;
  ulong uVar21;
  uint uVar22;
  ulong uVar23;
  
  if ((DAT_0483ba56 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(StringLiteral_2367);
    thunk_FUN_01efb3a4(StringLiteral_2368);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    DAT_0483ba56 = 1;
  }
  if (DAT_0482ee12 == '\0') {
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LeaderboardEntryList>_get_Data__);
    DAT_0482ee12 = '\x01';
  }
  if (param_5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar13 = *param_5;
  puVar16 = *(uint **)(*(long *)Method_Oculus_Platform_Message<LeaderboardEntryList>_get_Data__ +
                      0xb8);
  uVar15 = (ulong)*(ushort *)(lVar13 + 0x12e);
  auVar17._4_4_ = 0;
  auVar17._0_4_ = *puVar16;
  uVar19 = 0;
  uVar20 = puVar16[1];
  uVar22 = puVar16[2];
  if (uVar15 != 0) {
    piVar14 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
    do {
      if (*(long *)(piVar14 + -2) == *(long *)StringLiteral_2367) {
        puVar10 = (undefined8 *)(lVar13 + (long)*piVar14 * 0x10 + 0x138);
        goto LAB_03fd30f0;
      }
      uVar15 = uVar15 - 1;
      piVar14 = piVar14 + 4;
    } while (uVar15 != 0);
  }
  puVar10 = (undefined8 *)FUN_01ecb238(param_5,*(long *)StringLiteral_2367,0);
LAB_03fd30f0:
  puVar5 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
  plVar11 = (long *)(*(code *)*puVar10)(param_5,puVar10[1]);
  puVar7 = StringLiteral_2368;
  puVar6 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  auVar17._8_8_ = uVar19;
  if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  uVar15 = (ulong)uVar20;
  uVar8 = (ulong)uVar22;
  bVar9 = false;
LAB_03fd3120:
  auVar4 = auVar17;
  bVar12 = bVar9;
  uVar23 = uVar8;
  uVar21 = uVar15;
  uVar19 = auVar4._8_8_;
  lVar13 = *plVar11;
  uVar15 = (ulong)*(ushort *)(lVar13 + 0x12e);
  if (uVar15 != 0) {
    piVar14 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
    do {
      if (*(long *)(piVar14 + -2) == *(long *)puVar6) {
        puVar10 = (undefined8 *)(lVar13 + (long)*piVar14 * 0x10 + 0x138);
        goto LAB_03fd317c;
      }
      uVar15 = uVar15 - 1;
      piVar14 = piVar14 + 4;
    } while (uVar15 != 0);
  }
  puVar10 = (undefined8 *)FUN_01ecb238(plVar11,*(long *)puVar6,0);
LAB_03fd317c:
  uVar15 = (*(code *)*puVar10)(plVar11,puVar10[1]);
  if ((uVar15 & 1) != 0) {
    lVar13 = *plVar11;
    uVar15 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar15 != 0) {
      piVar14 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *(long *)puVar7) {
          puVar10 = (undefined8 *)(lVar13 + (long)*piVar14 * 0x10 + 0x138);
          goto LAB_03fd31d8;
        }
        uVar15 = uVar15 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar15 != 0);
    }
    puVar10 = (undefined8 *)FUN_01ecb238(plVar11,*(long *)puVar7,0);
LAB_03fd31d8:
    auVar17 = (*(code *)*puVar10)(plVar11,puVar10[1]);
    uVar15 = param_2;
    uVar8 = param_3;
    bVar9 = true;
    if (bVar12) {
      fVar1 = auVar4._0_4_;
      if (auVar4._0_4_ <= auVar17._0_4_) {
        fVar1 = auVar17._0_4_;
      }
      fVar2 = (float)uVar21;
      if ((float)uVar21 <= (float)param_2) {
        fVar2 = (float)param_2;
      }
      fVar3 = (float)uVar23;
      if ((float)uVar23 <= (float)param_3) {
        fVar3 = (float)param_3;
      }
      uVar15 = (ulong)(uint)fVar2;
      uVar8 = (ulong)(uint)fVar3;
      bVar9 = true;
      auVar17 = ZEXT416((uint)fVar1);
    }
    goto LAB_03fd3120;
  }
  if (plVar11 != (long *)0x0) {
    lVar13 = *plVar11;
    uVar15 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar15 != 0) {
      piVar14 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *(long *)puVar5) {
          puVar10 = (undefined8 *)(lVar13 + (long)*piVar14 * 0x10 + 0x138);
          goto LAB_03fd326c;
        }
        uVar15 = uVar15 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar15 != 0);
    }
    puVar10 = (undefined8 *)FUN_01ecb238(plVar11,*(long *)puVar5,0);
LAB_03fd326c:
    (*(code *)*puVar10)(plVar11,puVar10[1]);
  }
  auVar18._8_8_ = uVar19;
  auVar18._0_8_ = auVar4._0_8_;
  return auVar18;
}


