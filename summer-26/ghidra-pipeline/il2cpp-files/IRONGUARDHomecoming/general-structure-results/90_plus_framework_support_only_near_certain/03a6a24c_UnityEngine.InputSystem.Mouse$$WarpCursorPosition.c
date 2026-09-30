/*
FUNCTION_NAME: UnityEngine.InputSystem.Mouse$$WarpCursorPosition
ENTRY_POINT: 03a6a24c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 160
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_13;strong_pose_or_ray_construction_hits_6;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_gaze_interaction_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x03a6a6ec) */

long UnityEngine_InputSystem_Mouse__WarpCursorPosition(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long *plVar8;
  undefined8 *puVar9;
  long *plVar10;
  long lVar11;
  int *piVar12;
  ulong unaff_x20;
  long unaff_x22;
  undefined4 uVar13;
  undefined8 *unaff_x23;
  long unaff_x25;
  long lVar14;
  ulong uVar15;
  undefined8 uVar16;
  
  lVar5 = thunk_FUN_01f117cc(*unaff_x23);
  FUN_03a6662c();
  puVar2 = StringLiteral_7789;
  if (unaff_x25 != 0) {
    lVar14 = 0;
    uVar15 = 0;
    uVar13 = 0;
    do {
      lVar6 = *(long *)puVar2;
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
        lVar6 = *(long *)puVar2;
      }
      lVar11 = **(long **)(lVar6 + 0xb8);
      if (lVar11 == 0) goto LAB_03a6a6dc;
      if ((long)*(int *)(lVar11 + 0x18) <= (long)uVar15) goto LAB_03a6a328;
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
        lVar11 = **(long **)(*(long *)puVar2 + 0xb8);
        if (lVar11 == 0) goto LAB_03a6a6dc;
      }
      if (*(uint *)(lVar11 + 0x18) <= uVar15) goto LAB_03a6a3f0;
      iVar4 = FUN_0340d008();
      if (iVar4 == 0) {
        lVar6 = *(long *)puVar2;
        if (*(int *)(lVar6 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
          lVar6 = *(long *)puVar2;
        }
        lVar6 = **(long **)(lVar6 + 0xb8);
        if (lVar6 == 0) goto LAB_03a6a6dc;
        if (*(uint *)(lVar6 + 0x18) <= uVar15) {
LAB_03a6a3f0:
                    /* WARNING: Subroutine does not return */
          FUN_01f08a44();
        }
        uVar13 = *(undefined4 *)(lVar6 + lVar14 + 0x28);
      }
      uVar15 = uVar15 + 1;
      lVar14 = lVar14 + 0x10;
    } while( true );
  }
  uVar13 = 2;
LAB_03a6a328:
  puVar2 = StringLiteral_7790;
  if (unaff_x22 != 0) {
    FUN_039fe8a0();
    FUN_03a69f10();
    lVar14 = thunk_FUN_01f117cc(*(undefined8 *)puVar2);
    FUN_03a65f94();
    puVar2 = StringLiteral_7567;
    if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    while (lVar6 = FUN_03a6600c(lVar14),
          puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__,
          lVar6 != 0) {
      uVar16 = *(undefined8 *)(lVar6 + 0x40);
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      uVar15 = FUN_03a587ac(uVar16,0);
      if ((uVar15 & 1) == 0) {
        uVar15 = FUN_03a638c0(lVar6,uVar13);
        if ((uVar15 & 1) != 0) {
          if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          FUN_03a670b8(lVar5,lVar6,1);
        }
      }
      else if ((unaff_x20 & 1) != 0) {
        uVar16 = thunk_FUN_01efb3a4(StringLiteral_7791);
        uVar16 = FUN_033f1b08(uVar16,0);
        thunk_FUN_01efb3a4(StringLiteral_7750);
        uVar7 = thunk_FUN_01f117cc();
        FUN_03553fd0(uVar7,uVar16,0);
        uVar16 = thunk_FUN_01efb3a4(StringLiteral_7792);
                    /* WARNING: Subroutine does not return */
        FUN_01f08910(uVar7,uVar16);
      }
    }
    if (lVar5 != 0) {
      plVar8 = (long *)FUN_03a66f34(lVar5);
      puVar3 = StringLiteral_7742;
      puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
      if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      do {
        lVar6 = *plVar8;
        lVar14 = *(long *)puVar2;
        uVar15 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar15 != 0) {
          piVar12 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == lVar14) {
              puVar9 = (undefined8 *)(lVar6 + (long)*piVar12 * 0x10 + 0x138);
              goto LAB_03a6a5b0;
            }
            uVar15 = uVar15 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar15 != 0);
        }
        puVar9 = (undefined8 *)FUN_01ecb238(plVar8,lVar14,0);
LAB_03a6a5b0:
        uVar15 = (*(code *)*puVar9)(plVar8,puVar9[1]);
        if ((uVar15 & 1) == 0) {
          plVar8 = (long *)thunk_FUN_01f116d0(plVar8,*(undefined8 *)puVar1);
          if (plVar8 == (long *)0x0) {
            return lVar5;
          }
          lVar6 = *plVar8;
          lVar14 = *(long *)puVar1;
          uVar15 = (ulong)*(ushort *)(lVar6 + 0x12e);
          if (uVar15 == 0) goto LAB_03a6a690;
          piVar12 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          goto LAB_03a6a678;
        }
        lVar6 = *plVar8;
        lVar14 = *(long *)puVar2;
        uVar15 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar15 != 0) {
          piVar12 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == lVar14) {
              puVar9 = (undefined8 *)(lVar6 + (long)(*piVar12 + 1) * 0x10 + 0x138);
              goto LAB_03a6a610;
            }
            uVar15 = uVar15 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar15 != 0);
        }
        puVar9 = (undefined8 *)FUN_01ecb238(plVar8,lVar14,1);
LAB_03a6a610:
        plVar10 = (long *)(*(code *)*puVar9)(plVar8,puVar9[1]);
        if ((plVar10 != (long *)0x0) && (*plVar10 != *(long *)puVar3)) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08cfc(plVar10);
        }
        FUN_03a679c8();
      } while( true );
    }
  }
LAB_03a6a6dc:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
  while( true ) {
    uVar15 = uVar15 - 1;
    piVar12 = piVar12 + 4;
    if (uVar15 == 0) break;
LAB_03a6a678:
    if (*(long *)(piVar12 + -2) == lVar14) {
      puVar9 = (undefined8 *)(lVar6 + (long)*piVar12 * 0x10 + 0x138);
      goto LAB_03a6a6ac;
    }
  }
LAB_03a6a690:
  puVar9 = (undefined8 *)FUN_01ecb238(plVar8,lVar14,0);
LAB_03a6a6ac:
  (*(code *)*puVar9)(plVar8,puVar9[1]);
  return lVar5;
}


