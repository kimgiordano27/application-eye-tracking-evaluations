/*
FUNCTION_NAME: FUN_03b28358
ENTRY_POINT: 03b28358
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 117
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_7;weak_xr_or_state_hits_8;validity_or_gating_hits_11;strong_pose_or_ray_construction_hits_14;functionality_eye_api_context_without_clear_sink_hits_7
*/


/* WARNING: Removing unreachable block (ram,0x03b286f0) */
/* WARNING: Removing unreachable block (ram,0x03b286fc) */

void FUN_03b28358(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  long *plVar5;
  undefined8 *puVar6;
  long *plVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  ulong uVar12;
  int *piVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  
  if ((DAT_048393bc & 1) == 0) {
    thunk_FUN_01efb3a4(StringLiteral_11580);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(StringLiteral_11733);
    thunk_FUN_01efb3a4(StringLiteral_11734);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    DAT_048393bc = 1;
  }
  puVar1 = StringLiteral_11733;
  if (param_1 == (long *)0x0) {
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LivestreamingVideoStats>_get_Data__);
    uVar9 = thunk_FUN_01f117cc();
    uVar10 = thunk_FUN_01efb3a4(StringLiteral_11735);
    FUN_034efd20(uVar9,uVar10,0);
    uVar10 = thunk_FUN_01efb3a4(StringLiteral_11736);
                    /* WARNING: Subroutine does not return */
    FUN_01f08910(uVar9,uVar10);
  }
  plVar5 = (long *)FUN_03b2468c();
  lVar11 = *param_1;
  uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
  if (uVar12 != 0) {
    piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
    do {
      if (*(long *)(piVar13 + -2) == *(long *)puVar1) {
        puVar6 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
        goto LAB_03b28424;
      }
      uVar12 = uVar12 - 1;
      piVar13 = piVar13 + 4;
    } while (uVar12 != 0);
  }
  puVar6 = (undefined8 *)FUN_01ecb238(param_1,*(long *)puVar1,0);
LAB_03b28424:
  plVar7 = (long *)(*(code *)*puVar6)(param_1,puVar6[1]);
  puVar3 = StringLiteral_11734;
  puVar2 = StringLiteral_11580;
  puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  do {
    lVar11 = *plVar7;
    uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *(long *)puVar1) {
          puVar6 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
          goto LAB_03b2849c;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    puVar6 = (undefined8 *)FUN_01ecb238(plVar7,*(long *)puVar1,0);
LAB_03b2849c:
    uVar12 = (*(code *)*puVar6)(plVar7,puVar6[1]);
    if ((uVar12 & 1) == 0) {
      if (plVar7 == (long *)0x0) goto LAB_03b2860c;
      lVar11 = *plVar7;
      uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar12 == 0) goto LAB_03b285e4;
      piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      break;
    }
    lVar11 = *plVar7;
    uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *(long *)puVar3) {
          puVar6 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
          goto LAB_03b284f8;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    puVar6 = (undefined8 *)FUN_01ecb238(plVar7,*(long *)puVar3,0);
LAB_03b284f8:
    lVar11 = (*(code *)*puVar6)(plVar7,puVar6[1]);
    if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar14 = *(long *)(lVar11 + 200);
    if (lVar14 == 0) {
      FUN_03b1da04(lVar11);
      lVar14 = *(long *)(lVar11 + 200);
      if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
    }
    lVar15 = *(long *)(lVar14 + 0x30);
    uVar4 = FUN_02293fcc(lVar15,*(undefined8 *)puVar2);
    if (0 < (int)uVar4) {
      if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      uVar12 = 0;
      lVar16 = lVar15 + 0x20;
      do {
        if (*(uint *)(lVar15 + 0x18) <= uVar12) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a44();
        }
        uVar8 = FUN_03b3137c(lVar16,lVar11,0);
        if ((uVar8 & 1) != 0) {
          FUN_03b3c014(lVar16,0);
        }
        uVar12 = uVar12 + 1;
        lVar16 = lVar16 + 0x58;
      } while (uVar4 != uVar12);
    }
    FUN_03b23a04(lVar14,0);
    FUN_03b1c6fc(lVar14,1);
  } while( true );
  while( true ) {
    uVar12 = uVar12 - 1;
    piVar13 = piVar13 + 4;
    if (uVar12 == 0) break;
    if (*(long *)(piVar13 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar6 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
      goto LAB_03b28600;
    }
  }
LAB_03b285e4:
  puVar6 = (undefined8 *)
           FUN_01ecb238(plVar7,*(long *)
                                Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                        ,0);
LAB_03b28600:
  (*(code *)*puVar6)(plVar7,puVar6[1]);
LAB_03b2860c:
  if (plVar5 != (long *)0x0) {
    lVar11 = *plVar5;
    uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar6 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
          goto LAB_03b2866c;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    puVar6 = (undefined8 *)
             FUN_01ecb238(plVar5,*(long *)
                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                          ,0);
LAB_03b2866c:
    (*(code *)*puVar6)(plVar5,puVar6[1]);
  }
  return;
}


