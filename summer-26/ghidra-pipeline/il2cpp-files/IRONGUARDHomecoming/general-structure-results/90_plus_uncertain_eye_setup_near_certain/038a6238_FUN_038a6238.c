/*
FUNCTION_NAME: FUN_038a6238
ENTRY_POINT: 038a6238
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 129
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_10;validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_10;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_5
*/


/* WARNING: Removing unreachable block (ram,0x038a6694) */
/* WARNING: Removing unreachable block (ram,0x038a65d0) */

void FUN_038a6238(float *param_1,undefined1 param_2 [16],ulong param_3,undefined8 param_4,
                 long param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  bool bVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puVar7;
  ulong uVar8;
  ulong uVar9;
  int *piVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined8 uVar19;
  float fVar20;
  float fVar21;
  float fVar23;
  ulong uVar22;
  float fVar24;
  
  if ((DAT_04837ea2 & 1) == 0) {
    thunk_FUN_01efb3a4(StringLiteral_2365);
    thunk_FUN_01efb3a4(StringLiteral_2366);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(StringLiteral_2367);
    thunk_FUN_01efb3a4(StringLiteral_2368);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    thunk_FUN_01efb3a4(StringLiteral_2338);
    thunk_FUN_01efb3a4(StringLiteral_2369);
    thunk_FUN_01efb3a4(StringLiteral_2353);
    DAT_04837ea2 = 1;
  }
  if (*(long *)(param_5 + 0x90) != 0) {
    if (*(int *)(*(long *)(param_5 + 0x90) + 0x18) < 2) {
      param_1[0] = 0.0;
      param_1[1] = 0.0;
      param_1[2] = 0.0;
      param_1[3] = 0.0;
      param_1[4] = 0.0;
      param_1[5] = 0.0;
    }
    else {
      if (DAT_0482ee10 == '\0') {
        thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LeaderboardEntryList>_get_Data__);
        DAT_0482ee10 = '\x01';
      }
      puVar2 = StringLiteral_2353;
      puVar1 = Method_Oculus_Platform_Message<LeaderboardEntryList>_get_Data__;
      uVar11 = *(undefined8 *)(param_5 + 0x90);
      lVar5 = *(long *)StringLiteral_2353;
      uVar19 = *(undefined8 *)
                (*(long *)(*(long *)Method_Oculus_Platform_Message<LeaderboardEntryList>_get_Data__
                          + 0xb8) + 0xc);
      fVar24 = *(float *)(*(long *)(*(long *)
                                     Method_Oculus_Platform_Message<LeaderboardEntryList>_get_Data__
                                   + 0xb8) + 0x14);
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
        lVar5 = *(long *)puVar2;
      }
      lVar12 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x28);
      if (lVar12 == 0) {
        if (*(int *)(lVar5 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
          lVar5 = *(long *)puVar2;
        }
        uVar13 = **(undefined8 **)(lVar5 + 0xb8);
        lVar12 = thunk_FUN_01f117cc(*(undefined8 *)StringLiteral_2366);
        FUN_02e6d770(lVar12,uVar13,*(undefined8 *)StringLiteral_2369,0);
        plVar6 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x28);
        *plVar6 = lVar12;
        thunk_FUN_01f51358(plVar6,lVar12);
      }
      plVar6 = (long *)FUN_02301d28(uVar11,lVar12,*(undefined8 *)StringLiteral_2365);
      if (plVar6 == (long *)0x0)
      goto System_Linq_Expressions_Interpreter_LoadStaticFieldInstruction___ctor;
      lVar5 = *plVar6;
      uVar8 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar8 != 0) {
        piVar10 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)StringLiteral_2367) {
            puVar7 = (undefined8 *)(lVar5 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_038a6448;
          }
          uVar8 = uVar8 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar8 != 0);
      }
      puVar7 = (undefined8 *)FUN_01ecb238(plVar6,*(long *)StringLiteral_2367,0);
LAB_038a6448:
      fVar18 = (float)uVar19;
      fVar20 = (float)((ulong)uVar19 >> 0x20);
      uVar8 = CONCAT44(fVar20 * 3.4028235e+38,fVar18 * 3.4028235e+38);
      fVar17 = fVar24 * 3.4028235e+38;
      uVar22 = CONCAT44(fVar20 * -3.4028235e+38,fVar18 * -3.4028235e+38);
      plVar6 = (long *)(*(code *)*puVar7)(plVar6,puVar7[1]);
      puVar3 = StringLiteral_2368;
      puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
      fVar24 = fVar24 * -3.4028235e+38;
      if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
LAB_038a647c:
      fVar18 = (float)param_3;
      lVar5 = *plVar6;
      uVar9 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)puVar2) {
            puVar7 = (undefined8 *)(lVar5 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_038a64c8;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar7 = (undefined8 *)FUN_01ecb238(plVar6,*(long *)puVar2,0);
LAB_038a64c8:
      uVar9 = (*(code *)*puVar7)(plVar6,puVar7[1]);
      fVar20 = (float)uVar8;
      fVar16 = (float)(uVar8 >> 0x20);
      fVar21 = (float)uVar22;
      fVar23 = (float)(uVar22 >> 0x20);
      if ((uVar9 & 1) != 0) {
        lVar5 = *plVar6;
        uVar9 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == *(long *)puVar3) {
              puVar7 = (undefined8 *)(lVar5 + (long)*piVar10 * 0x10 + 0x138);
              goto LAB_038a6524;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        puVar7 = (undefined8 *)FUN_01ecb238(plVar6,*(long *)puVar3,0);
LAB_038a6524:
        fVar14 = (float)(*(code *)*puVar7)(plVar6,puVar7[1]);
        fVar15 = (float)param_4;
        param_3 = CONCAT44(-(uint)(fVar16 < fVar18),-(uint)(fVar20 < fVar14));
        if (fVar15 <= fVar17) {
          fVar17 = fVar15;
        }
        uVar8 = uVar8 ^ (uVar8 ^ CONCAT44(fVar18,fVar14)) & ~param_3;
        uVar22 = uVar22 ^ (uVar22 ^ CONCAT44(fVar18,fVar14)) &
                          ~CONCAT44(-(uint)(fVar18 < fVar23),-(uint)(fVar14 < fVar21));
        if (fVar24 <= fVar15) {
          fVar24 = fVar15;
        }
        goto LAB_038a647c;
      }
      if (plVar6 != (long *)0x0) {
        lVar5 = *plVar6;
        uVar8 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar8 != 0) {
          piVar10 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) ==
                *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
              puVar7 = (undefined8 *)(lVar5 + (long)*piVar10 * 0x10 + 0x138);
              goto LAB_038a65b8;
            }
            uVar8 = uVar8 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar8 != 0);
        }
        puVar7 = (undefined8 *)
                 FUN_01ecb238(plVar6,*(long *)
                                      Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                              ,0);
LAB_038a65b8:
        (*(code *)*puVar7)(plVar6,puVar7[1]);
      }
      bVar4 = *(int *)(param_5 + 0x98) != 0;
      fVar18 = 0.0;
      if (bVar4) {
        fVar18 = fVar24;
      }
      fVar24 = 0.0;
      if (bVar4) {
        fVar24 = fVar17;
      }
      if (DAT_0482ee10 == '\0') {
        thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LeaderboardEntryList>_get_Data__);
        DAT_0482ee10 = '\x01';
      }
      fVar17 = *(float *)(param_5 + 0xa4) * 0.5;
      uVar11 = *(undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0xc);
      fVar14 = *(float *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x14);
      *param_1 = (fVar21 + fVar20) * 0.5;
      param_1[1] = (fVar23 + fVar16) * 0.5;
      param_1[2] = (fVar18 + fVar24) * 0.5;
      *(ulong *)(param_1 + 3) =
           CONCAT44(((fVar23 - fVar16) + (float)((ulong)uVar11 >> 0x20) * fVar17) * 0.5,
                    ((fVar21 - fVar20) + (float)uVar11 * fVar17) * 0.5);
      param_1[5] = ((fVar18 - fVar24) + fVar14 * fVar17) * 0.5;
    }
    return;
  }
System_Linq_Expressions_Interpreter_LoadStaticFieldInstruction___ctor:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


