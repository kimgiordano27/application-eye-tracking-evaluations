/*
FUNCTION_NAME: System.Linq.Expressions.Interpreter.ExclusiveOrInstruction.ExclusiveOrUInt64$$Run
ENTRY_POINT: 038a63c4
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 91
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_4;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_6;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_3
*/


/* WARNING: Removing unreachable block (ram,0x038a65d0) */
/* WARNING: Removing unreachable block (ram,0x038a6694) */

void System_Linq_Expressions_Interpreter_ExclusiveOrInstruction_ExclusiveOrUInt64__Run
               (undefined1 param_1 [16],ulong param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  bool bVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  int *piVar9;
  float *unaff_x19;
  long unaff_x20;
  long unaff_x24;
  long *unaff_x25;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined8 uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined8 unaff_d10;
  float fVar18;
  float fVar20;
  ulong uVar19;
  float unaff_s12;
  
  plVar4 = (long *)FUN_02301d28();
  if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar6 = *plVar4;
  uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar7 != 0) {
    piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == *(long *)StringLiteral_2367) {
        puVar5 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
        goto LAB_038a6448;
      }
      uVar7 = uVar7 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar7 != 0);
  }
  puVar5 = (undefined8 *)FUN_01ecb238(plVar4,*(long *)StringLiteral_2367,0);
LAB_038a6448:
  fVar11 = (float)((ulong)unaff_d10 >> 0x20);
  uVar7 = CONCAT44(fVar11 * 3.4028235e+38,(float)unaff_d10 * 3.4028235e+38);
  fVar17 = unaff_s12 * 3.4028235e+38;
  uVar19 = CONCAT44(fVar11 * -3.4028235e+38,(float)unaff_d10 * -3.4028235e+38);
  plVar4 = (long *)(*(code *)*puVar5)(plVar4,puVar5[1]);
  puVar2 = StringLiteral_2368;
  puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  fVar11 = unaff_s12 * -3.4028235e+38;
  if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
LAB_038a647c:
  fVar12 = (float)param_2;
  lVar6 = *plVar4;
  uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar8 != 0) {
    piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == *(long *)puVar1) {
        puVar5 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
        goto LAB_038a64c8;
      }
      uVar8 = uVar8 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar8 != 0);
  }
  puVar5 = (undefined8 *)FUN_01ecb238(plVar4,*(long *)puVar1,0);
LAB_038a64c8:
  uVar8 = (*(code *)*puVar5)(plVar4,puVar5[1]);
  fVar15 = (float)uVar7;
  fVar16 = (float)(uVar7 >> 0x20);
  fVar18 = (float)uVar19;
  fVar20 = (float)(uVar19 >> 0x20);
  if ((uVar8 & 1) != 0) {
    lVar6 = *plVar4;
    uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)puVar2) {
          puVar5 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_038a6524;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar5 = (undefined8 *)FUN_01ecb238(plVar4,*(long *)puVar2,0);
LAB_038a6524:
    fVar10 = (float)(*(code *)*puVar5)(plVar4,puVar5[1]);
    fVar13 = (float)param_3;
    param_2 = CONCAT44(-(uint)(fVar16 < fVar12),-(uint)(fVar15 < fVar10));
    if (fVar13 <= fVar17) {
      fVar17 = fVar13;
    }
    uVar7 = uVar7 ^ (uVar7 ^ CONCAT44(fVar12,fVar10)) & ~param_2;
    uVar19 = uVar19 ^ (uVar19 ^ CONCAT44(fVar12,fVar10)) &
                      ~CONCAT44(-(uint)(fVar12 < fVar20),-(uint)(fVar10 < fVar18));
    if (fVar11 <= fVar13) {
      fVar11 = fVar13;
    }
    goto LAB_038a647c;
  }
  if (plVar4 != (long *)0x0) {
    lVar6 = *plVar4;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar5 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_038a65b8;
        }
        uVar7 = uVar7 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar7 != 0);
    }
    puVar5 = (undefined8 *)
             FUN_01ecb238(plVar4,*(long *)
                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                          ,0);
LAB_038a65b8:
    (*(code *)*puVar5)(plVar4,puVar5[1]);
  }
  bVar3 = *(int *)(unaff_x20 + 0x98) != 0;
  fVar12 = 0.0;
  if (bVar3) {
    fVar12 = fVar11;
  }
  fVar11 = 0.0;
  if (bVar3) {
    fVar11 = fVar17;
  }
  if (*(char *)(unaff_x24 + 0xe10) == '\0') {
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LeaderboardEntryList>_get_Data__);
    *(undefined1 *)(unaff_x24 + 0xe10) = 1;
  }
  fVar17 = *(float *)(unaff_x20 + 0xa4) * 0.5;
  uVar14 = *(undefined8 *)(*(long *)(*unaff_x25 + 0xb8) + 0xc);
  fVar10 = *(float *)(*(long *)(*unaff_x25 + 0xb8) + 0x14);
  *unaff_x19 = (fVar18 + fVar15) * 0.5;
  unaff_x19[1] = (fVar20 + fVar16) * 0.5;
  unaff_x19[2] = (fVar12 + fVar11) * 0.5;
  *(ulong *)(unaff_x19 + 3) =
       CONCAT44(((fVar20 - fVar16) + (float)((ulong)uVar14 >> 0x20) * fVar17) * 0.5,
                ((fVar18 - fVar15) + (float)uVar14 * fVar17) * 0.5);
  unaff_x19[5] = ((fVar12 - fVar11) + fVar10 * fVar17) * 0.5;
  return;
}


