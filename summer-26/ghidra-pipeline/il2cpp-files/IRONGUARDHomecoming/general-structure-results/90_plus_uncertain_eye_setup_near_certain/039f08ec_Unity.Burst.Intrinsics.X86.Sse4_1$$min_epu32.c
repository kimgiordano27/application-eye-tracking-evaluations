/*
FUNCTION_NAME: Unity.Burst.Intrinsics.X86.Sse4_1$$min_epu32
ENTRY_POINT: 039f08ec
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 111
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_6;functionality_eye_api_context_without_clear_sink_hits_3
*/


/* WARNING: Removing unreachable block (ram,0x039f0b58) */

long Unity_Burst_Intrinsics_X86_Sse4_1__min_epu32(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  long lVar13;
  ulong uVar14;
  int *in_x10;
  int *piVar15;
  long lVar16;
  long lVar19;
  int iVar20;
  undefined1 auVar21 [16];
  long lStack0000000000000008;
  long lVar17;
  long lVar18;
  
  puVar5 = StringLiteral_6264;
  puVar4 = StringLiteral_6233;
  puVar3 = StringLiteral_6183;
  puVar2 = StringLiteral_6177;
  puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  plVar10 = (long *)(**(code **)(param_1 + (long)*in_x10 * 0x10 + 0x138))();
  lStack0000000000000008 = 0;
  lVar13 = 0;
  lVar7 = 0;
  lVar8 = lStack0000000000000008;
  lVar9 = 0;
  do {
    lVar18 = lVar9;
    lStack0000000000000008 = lVar8;
    lVar17 = lVar7;
    lVar16 = lVar13;
    if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar13 = *plVar10;
    uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar14 != 0) {
      piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == *(long *)puVar1) {
          puVar11 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
          goto LAB_039f09a8;
        }
        uVar14 = uVar14 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar14 != 0);
    }
    puVar11 = (undefined8 *)FUN_01ecb238(plVar10,*(long *)puVar1,0);
LAB_039f09a8:
    uVar14 = (*(code *)*puVar11)(plVar10,puVar11[1]);
    if ((uVar14 & 1) == 0) {
      lVar19 = 0;
      iVar20 = 10;
      iVar6 = 10;
      if (plVar10 == (long *)0x0) goto LAB_039f0b00;
LAB_039f0aa0:
      iVar20 = iVar6;
      lVar13 = *plVar10;
      uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar14 == 0) goto LAB_039f0ad8;
      piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      break;
    }
    lVar13 = *plVar10;
    uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar14 != 0) {
      piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == *(long *)puVar5) {
          puVar11 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
          goto LAB_039f0a04;
        }
        uVar14 = uVar14 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar14 != 0);
    }
    puVar11 = (undefined8 *)FUN_01ecb238(plVar10,*(long *)puVar5,0);
LAB_039f0a04:
    auVar21 = (*(code *)*puVar11)(plVar10,puVar11[1]);
    lVar19 = auVar21._8_8_;
    uVar12 = auVar21._0_8_;
    uVar14 = thunk_FUN_0340e318(uVar12,*(undefined8 *)puVar2,0);
    if ((uVar14 & 1) != 0) {
      iVar20 = 9;
      iVar6 = 9;
      if (plVar10 != (long *)0x0) goto LAB_039f0aa0;
      goto LAB_039f0b00;
    }
    uVar14 = thunk_FUN_0340e318(uVar12,*(undefined8 *)puVar3,0);
    lVar13 = lVar19;
    lVar7 = lVar17;
    lVar8 = lStack0000000000000008;
    lVar9 = lVar18;
    if ((((uVar14 & 1) == 0) &&
        (uVar14 = thunk_FUN_0340e318(uVar12,*(undefined8 *)puVar4,0), lVar13 = lVar16,
        lVar9 = lVar19, (uVar14 & 1) == 0)) &&
       ((uVar14 = thunk_FUN_0340e318(uVar12,*(undefined8 *)StringLiteral_6127,0), lVar7 = lVar19,
        lVar9 = lVar18, (uVar14 & 1) == 0 &&
        (lVar7 = lVar17, lVar8 = lVar19, lStack0000000000000008 != 0)))) {
      lVar8 = lStack0000000000000008;
    }
  } while( true );
  while( true ) {
    uVar14 = uVar14 - 1;
    piVar15 = piVar15 + 4;
    if (uVar14 == 0) break;
    if (*(long *)(piVar15 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar11 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
      goto LAB_039f0af4;
    }
  }
LAB_039f0ad8:
  puVar11 = (undefined8 *)
            FUN_01ecb238(plVar10,*(long *)
                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                         ,0);
LAB_039f0af4:
  (*(code *)*puVar11)(plVar10,puVar11[1]);
LAB_039f0b00:
  if ((((iVar20 == 10) || (iVar20 == 0)) && (lVar19 = lVar16, lVar16 == 0)) &&
     ((lVar19 = lVar18, lVar18 == 0 && (lVar19 = lStack0000000000000008, lVar17 != 0)))) {
    lVar19 = lVar17;
  }
  return lVar19;
}


