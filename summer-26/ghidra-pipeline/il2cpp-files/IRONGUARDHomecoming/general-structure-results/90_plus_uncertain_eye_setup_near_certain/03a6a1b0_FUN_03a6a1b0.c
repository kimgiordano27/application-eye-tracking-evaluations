/*
FUNCTION_NAME: FUN_03a6a1b0
ENTRY_POINT: 03a6a1b0
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 117
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_13;strong_pose_or_ray_construction_hits_8;functionality_eye_api_context_without_clear_sink_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x03a6a6ec) */

long FUN_03a6a1b0(long param_1,long param_2,long param_3,undefined8 param_4,uint param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long *plVar10;
  undefined8 *puVar11;
  long *plVar12;
  long lVar13;
  int *piVar14;
  undefined4 uVar15;
  long lVar16;
  ulong uVar17;
  
  puVar2 = StringLiteral_7779;
  if ((DAT_04838d80 & 1) == 0) {
    thunk_FUN_01efb3a4(StringLiteral_7779);
    thunk_FUN_01efb3a4(StringLiteral_7789);
    thunk_FUN_01efb3a4(StringLiteral_7790);
    thunk_FUN_01efb3a4(StringLiteral_7742);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    thunk_FUN_01efb3a4(StringLiteral_7567);
    DAT_04838d80 = 1;
  }
  lVar6 = thunk_FUN_01f117cc(*(undefined8 *)puVar2);
  FUN_03a6662c();
  puVar2 = StringLiteral_7789;
  if (param_3 != 0) {
    lVar16 = 0;
    uVar17 = 0;
    uVar15 = 0;
    do {
      lVar7 = *(long *)puVar2;
      if (*(int *)(lVar7 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
        lVar7 = *(long *)puVar2;
      }
      lVar13 = **(long **)(lVar7 + 0xb8);
      if (lVar13 == 0) goto LAB_03a6a6dc;
      if ((long)*(int *)(lVar13 + 0x18) <= (long)uVar17) goto LAB_03a6a328;
      if (*(int *)(lVar7 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
        lVar13 = **(long **)(*(long *)puVar2 + 0xb8);
        if (lVar13 == 0) goto LAB_03a6a6dc;
      }
      if (*(uint *)(lVar13 + 0x18) <= uVar17) goto LAB_03a6a3f0;
      iVar4 = FUN_0340d008(param_3,*(undefined8 *)(lVar13 + lVar16 + 0x20),5,0);
      if (iVar4 == 0) {
        lVar7 = *(long *)puVar2;
        if (*(int *)(lVar7 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
          lVar7 = *(long *)puVar2;
        }
        lVar7 = **(long **)(lVar7 + 0xb8);
        if (lVar7 == 0) goto LAB_03a6a6dc;
        if (*(uint *)(lVar7 + 0x18) <= uVar17) {
LAB_03a6a3f0:
                    /* WARNING: Subroutine does not return */
          FUN_01f08a44();
        }
        uVar15 = *(undefined4 *)(lVar7 + lVar16 + 0x28);
      }
      uVar17 = uVar17 + 1;
      lVar16 = lVar16 + 0x10;
    } while( true );
  }
  uVar15 = 2;
LAB_03a6a328:
  puVar2 = StringLiteral_7790;
  if (param_2 != 0) {
    uVar8 = FUN_039fe8a0(param_2,0);
    uVar5 = FUN_03a69f10(param_1,uVar8);
    lVar16 = thunk_FUN_01f117cc(*(undefined8 *)puVar2);
    FUN_03a65f94(lVar16,param_4);
    puVar2 = StringLiteral_7567;
    if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    while (lVar7 = FUN_03a6600c(lVar16),
          puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__,
          lVar7 != 0) {
      uVar8 = *(undefined8 *)(lVar7 + 0x40);
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      uVar17 = FUN_03a587ac(uVar8,0);
      if ((uVar17 & 1) == 0) {
        uVar17 = FUN_03a638c0(lVar7,uVar15,param_2,uVar5 & 1,*(undefined8 *)(param_1 + 0x28),1,
                              param_5 & 1);
        if ((uVar17 & 1) != 0) {
          if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          FUN_03a670b8(lVar6,lVar7,1);
        }
      }
      else if ((param_5 & 1) != 0) {
        uVar8 = thunk_FUN_01efb3a4(StringLiteral_7791);
        uVar8 = FUN_033f1b08(uVar8,0);
        thunk_FUN_01efb3a4(StringLiteral_7750);
        uVar9 = thunk_FUN_01f117cc();
        FUN_03553fd0(uVar9,uVar8,0);
        uVar8 = thunk_FUN_01efb3a4(StringLiteral_7792);
                    /* WARNING: Subroutine does not return */
        FUN_01f08910(uVar9,uVar8);
      }
    }
    if (lVar6 != 0) {
      plVar10 = (long *)FUN_03a66f34(lVar6);
      puVar3 = StringLiteral_7742;
      puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
      if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      do {
        lVar7 = *plVar10;
        lVar16 = *(long *)puVar2;
        uVar17 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar17 != 0) {
          piVar14 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == lVar16) {
              puVar11 = (undefined8 *)(lVar7 + (long)*piVar14 * 0x10 + 0x138);
              goto LAB_03a6a5b0;
            }
            uVar17 = uVar17 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar17 != 0);
        }
        puVar11 = (undefined8 *)FUN_01ecb238(plVar10,lVar16,0);
LAB_03a6a5b0:
        uVar17 = (*(code *)*puVar11)(plVar10,puVar11[1]);
        if ((uVar17 & 1) == 0) {
          plVar10 = (long *)thunk_FUN_01f116d0(plVar10,*(undefined8 *)puVar1);
          if (plVar10 == (long *)0x0) {
            return lVar6;
          }
          lVar7 = *plVar10;
          lVar16 = *(long *)puVar1;
          uVar17 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar17 == 0) goto LAB_03a6a690;
          piVar14 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          goto LAB_03a6a678;
        }
        lVar7 = *plVar10;
        lVar16 = *(long *)puVar2;
        uVar17 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar17 != 0) {
          piVar14 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == lVar16) {
              puVar11 = (undefined8 *)(lVar7 + (long)(*piVar14 + 1) * 0x10 + 0x138);
              goto LAB_03a6a610;
            }
            uVar17 = uVar17 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar17 != 0);
        }
        puVar11 = (undefined8 *)FUN_01ecb238(plVar10,lVar16,1);
LAB_03a6a610:
        plVar12 = (long *)(*(code *)*puVar11)(plVar10,puVar11[1]);
        if ((plVar12 != (long *)0x0) && (*plVar12 != *(long *)puVar3)) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08cfc(plVar12);
        }
        FUN_03a679c8(param_1,plVar12,param_5 & 1);
      } while( true );
    }
  }
LAB_03a6a6dc:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
  while( true ) {
    uVar17 = uVar17 - 1;
    piVar14 = piVar14 + 4;
    if (uVar17 == 0) break;
LAB_03a6a678:
    if (*(long *)(piVar14 + -2) == lVar16) {
      puVar11 = (undefined8 *)(lVar7 + (long)*piVar14 * 0x10 + 0x138);
      goto LAB_03a6a6ac;
    }
  }
LAB_03a6a690:
  puVar11 = (undefined8 *)FUN_01ecb238(plVar10,lVar16,0);
LAB_03a6a6ac:
  (*(code *)*puVar11)(plVar10,puVar11[1]);
  return lVar6;
}


