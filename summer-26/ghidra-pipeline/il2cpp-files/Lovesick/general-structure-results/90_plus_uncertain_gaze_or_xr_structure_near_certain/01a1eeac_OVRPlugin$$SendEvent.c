/*
FUNCTION_NAME: OVRPlugin$$SendEvent
ENTRY_POINT: 01a1eeac
PROGRAM: Lovesick-libil2cpp.so
SCORE: 107
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_13;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x01a1f350) */

void OVRPlugin__SendEvent(undefined1 param_1 [16],ulong param_2,long param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  float fVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined8 *puVar13;
  ulong uVar14;
  long lVar15;
  ulong uVar16;
  int *piVar17;
  long *plVar18;
  long *plVar19;
  float fVar20;
  float fVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  float fVar24;
  float fVar25;
  undefined1 auVar26 [16];
  undefined8 uStack_f0;
  ulong uStack_d0;
  ulong uStack_c8;
  undefined8 uStack_c0;
  undefined4 uStack_b8;
  undefined1 auStack_b0 [16];
  
  if ((DAT_0377a9f4 & 1) == 0) {
    thunk_FUN_00d48444(Method_UnityEngine_InputSystem_LowLevel_InputStateHistory_RecordStateChange__
                      );
    thunk_FUN_00d48444(Method_System_Collections_Generic_Stack<TextureId>_Pop__);
    thunk_FUN_00d48444(StringLiteral_10310);
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vmla_laneq_u32__);
    thunk_FUN_00d48444(StringLiteral_1244);
    thunk_FUN_00d48444(Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_Dictionary<string,_WitResponseNode>_get_Item__
                      );
    thunk_FUN_00d48444(StringLiteral_3861);
    DAT_0377a9f4 = 1;
  }
  auStack_b0._0_8_ = 0;
  auStack_b0._8_8_ = 0;
  uStack_c8 = 0;
  uStack_c0 = 0;
  uStack_d0 = 0;
  uStack_b8 = 0;
  if ((*(long *)(param_3 + 0x18) == 0) ||
     (plVar18 = *(long **)(*(long *)(param_3 + 0x18) + 0x50), plVar18 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  lVar15 = *plVar18;
  uVar16 = (ulong)*(ushort *)(lVar15 + 0x12a);
  if (uVar16 != 0) {
    piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
    do {
      if (*(long *)(piVar17 + -2) ==
          *(long *)Method_Unity_Burst_Intrinsics_Arm_Neon_vmla_laneq_u32__) {
        puVar13 = (undefined8 *)(lVar15 + (long)*piVar17 * 0x10 + 0x138);
        goto LAB_01a1efc8;
      }
      uVar16 = uVar16 - 1;
      piVar17 = piVar17 + 4;
    } while (uVar16 != 0);
  }
  puVar13 = (undefined8 *)
            FUN_00d59724(plVar18,*(long *)Method_Unity_Burst_Intrinsics_Arm_Neon_vmla_laneq_u32__,0)
  ;
LAB_01a1efc8:
  puVar12 = StringLiteral_10310;
  plVar18 = (long *)(*(code *)*puVar13)(plVar18,puVar13[1]);
  puVar11 = StringLiteral_3861;
  puVar10 = StringLiteral_1244;
  puVar9 = Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__;
  puVar8 = Method_UnityEngine_InputSystem_LowLevel_InputStateHistory_RecordStateChange__;
  puVar7 = Method_System_Collections_Generic_Stack<TextureId>_Pop__;
  puVar6 = Method_System_Collections_Generic_Dictionary<string,_WitResponseNode>_get_Item__;
  uVar5 = DAT_02945bd0;
  fVar4 = DAT_028aa894;
  uVar3 = DAT_028aa458;
  uVar2 = DAT_028aa450;
  if (plVar18 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  uVar22 = NEON_fmov(0x3f800000,4);
  do {
    lVar15 = *plVar18;
    uVar16 = (ulong)*(ushort *)(lVar15 + 0x12a);
    if (uVar16 != 0) {
      piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) == *(long *)puVar9) {
          puVar13 = (undefined8 *)(lVar15 + (long)*piVar17 * 0x10 + 0x138);
          uVar16 = param_2;
          goto LAB_01a1f0b0;
        }
        uVar16 = uVar16 - 1;
        piVar17 = piVar17 + 4;
      } while (uVar16 != 0);
    }
    puVar13 = (undefined8 *)FUN_00d59724(plVar18,*(long *)puVar9,0);
    uVar16 = param_2;
LAB_01a1f0b0:
    uVar14 = (*(code *)*puVar13)(plVar18,puVar13[1]);
    if ((uVar14 & 1) == 0) {
      if (plVar18 == (long *)0x0) {
        return;
      }
      lVar15 = *plVar18;
      uVar16 = (ulong)*(ushort *)(lVar15 + 0x12a);
      if (uVar16 == 0) goto LAB_01a1f2e0;
      piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      break;
    }
    lVar15 = *plVar18;
    uVar14 = (ulong)*(ushort *)(lVar15 + 0x12a);
    if (uVar14 != 0) {
      piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) == *(long *)puVar10) {
          puVar13 = (undefined8 *)(lVar15 + (long)*piVar17 * 0x10 + 0x138);
          goto LAB_01a1f10c;
        }
        uVar14 = uVar14 - 1;
        piVar17 = piVar17 + 4;
      } while (uVar14 != 0);
    }
    puVar13 = (undefined8 *)FUN_00d59724(plVar18,*(long *)puVar10,0);
LAB_01a1f10c:
    auVar26 = (*(code *)*puVar13)(plVar18,puVar13[1]);
    auStack_b0 = auVar26;
    lVar15 = FUN_00bfe424(auStack_b0,*(undefined8 *)puVar6);
    if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    uVar1 = *(undefined4 *)(lVar15 + 0x10);
    fVar20 = (float)FUN_00bfe528(auStack_b0,*(undefined8 *)puVar11);
    plVar19 = *(long **)(param_3 + 0x28);
    if (plVar19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    lVar15 = *plVar19;
    uVar14 = (ulong)*(ushort *)(lVar15 + 0x12a);
    param_2 = uVar16;
    if (uVar14 != 0) {
      piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) == *(long *)puVar7) {
          puVar13 = (undefined8 *)(lVar15 + (long)(*piVar17 + 4) * 0x10 + 0x138);
          goto LAB_01a1f1a0;
        }
        uVar14 = uVar14 - 1;
        piVar17 = piVar17 + 4;
      } while (uVar14 != 0);
    }
    puVar13 = (undefined8 *)FUN_00d59724(plVar19,*(long *)puVar7,4);
LAB_01a1f1a0:
    uVar14 = (*(code *)*puVar13)(plVar19,uVar1,&uStack_d0,puVar13[1]);
    if ((uVar14 & 1) != 0) {
      if (*(long *)(param_3 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      param_2 = uStack_d0 >> 0x20;
      uVar14 = uStack_c8 & 0xffffffff;
      uVar23 = FUN_026a0e4c(uStack_d0 & 0xffffffff,param_2,uVar14,*(long *)(param_3 + 0x30),0);
      fVar25 = (float)uVar16;
      fVar21 = 0.0;
      if (fVar20 <= fVar25) {
        fVar24 = 1.0;
        uStack_f0 = uVar3;
      }
      else {
        fVar24 = 1.0;
        uStack_f0 = uVar2;
        fVar21 = 0.0;
        if (0.0 < fVar25) {
          fVar21 = (fVar20 / fVar25) * 0.5;
          fVar20 = fVar21;
          if (1.0 < fVar21) {
            fVar20 = 1.0;
          }
          if (fVar21 < 0.0) {
            fVar20 = 0.0;
          }
          fVar24 = (float)uVar5 * fVar20 + (float)uVar22;
          fVar21 = fVar4 - fVar20 * fVar4;
          uStack_f0 = CONCAT44(0.92156863 - (float)((ulong)uVar5 >> 0x20) * fVar20,fVar24);
        }
      }
      lVar15 = *(long *)puVar8;
      fVar20 = *(float *)(param_3 + 0x38);
      if (*(int *)(lVar15 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar15 = *(long *)puVar8;
      }
      lVar15 = *(long *)(lVar15 + 0xb8);
      *(float *)(lVar15 + 0x1c) = fVar20 * 0.5;
      *(undefined8 *)(lVar15 + 0xc) = uStack_f0;
      *(float *)(lVar15 + 0x14) = fVar21;
      *(float *)(lVar15 + 0x18) = fVar24;
      FUN_019a99ac(uVar23,param_2,uVar14,0,0);
    }
  } while( true );
  while( true ) {
    uVar16 = uVar16 - 1;
    piVar17 = piVar17 + 4;
    if (uVar16 == 0) break;
    if (*(long *)(piVar17 + -2) == *(long *)puVar12) {
      puVar13 = (undefined8 *)(lVar15 + (long)*piVar17 * 0x10 + 0x138);
      goto LAB_01a1f2fc;
    }
  }
LAB_01a1f2e0:
  puVar13 = (undefined8 *)FUN_00d59724(plVar18,*(long *)puVar12,0);
LAB_01a1f2fc:
  (*(code *)*puVar13)(plVar18,puVar13[1]);
  return;
}


