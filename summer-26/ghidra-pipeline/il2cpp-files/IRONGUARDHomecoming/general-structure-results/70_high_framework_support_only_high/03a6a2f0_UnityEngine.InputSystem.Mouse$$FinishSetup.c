/*
FUNCTION_NAME: UnityEngine.InputSystem.Mouse$$FinishSetup
ENTRY_POINT: 03a6a2f0
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_12;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x03a6a6ec) */

void UnityEngine_InputSystem_Mouse__FinishSetup(void)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  long *plVar9;
  undefined8 *puVar10;
  long *plVar11;
  long lVar12;
  int *piVar13;
  long unaff_x19;
  ulong unaff_x20;
  long unaff_x22;
  long unaff_x26;
  ulong unaff_x27;
  undefined8 uVar14;
  long *unaff_x28;
  
  do {
    thunk_FUN_01ee6d7c();
    lVar6 = *unaff_x28;
    do {
      lVar6 = **(long **)(lVar6 + 0xb8);
      if (lVar6 == 0) {
LAB_03a6a6dc:
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      if (*(uint *)(lVar6 + 0x18) <= unaff_x27) {
LAB_03a6a3f0:
                    /* WARNING: Subroutine does not return */
        FUN_01f08a44();
      }
      uVar1 = *(undefined4 *)(lVar6 + unaff_x26 + 0x28);
      do {
        unaff_x27 = unaff_x27 + 1;
        unaff_x26 = unaff_x26 + 0x10;
        lVar6 = *unaff_x28;
        if (*(int *)(lVar6 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
          lVar6 = *unaff_x28;
        }
        puVar3 = StringLiteral_7790;
        lVar12 = **(long **)(lVar6 + 0xb8);
        if (lVar12 == 0) goto LAB_03a6a6dc;
        if ((long)*(int *)(lVar12 + 0x18) <= (long)unaff_x27) {
          if (unaff_x22 != 0) {
            FUN_039fe8a0();
            FUN_03a69f10();
            lVar6 = thunk_FUN_01f117cc(*(undefined8 *)puVar3);
            FUN_03a65f94();
            puVar3 = StringLiteral_7567;
            if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a3c();
            }
            while (lVar12 = FUN_03a6600c(lVar6),
                  puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__,
                  lVar12 != 0) {
              uVar14 = *(undefined8 *)(lVar12 + 0x40);
              if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
                thunk_FUN_01ee6d7c();
              }
              uVar7 = FUN_03a587ac(uVar14,0);
              if ((uVar7 & 1) == 0) {
                uVar7 = FUN_03a638c0(lVar12,uVar1);
                if ((uVar7 & 1) != 0) {
                  if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_01f08a3c();
                  }
                  FUN_03a670b8();
                }
              }
              else if ((unaff_x20 & 1) != 0) {
                uVar14 = thunk_FUN_01efb3a4(StringLiteral_7791);
                uVar14 = FUN_033f1b08(uVar14,0);
                thunk_FUN_01efb3a4(StringLiteral_7750);
                uVar8 = thunk_FUN_01f117cc();
                FUN_03553fd0(uVar8,uVar14,0);
                uVar14 = thunk_FUN_01efb3a4(StringLiteral_7792);
                    /* WARNING: Subroutine does not return */
                FUN_01f08910(uVar8,uVar14);
              }
            }
            if (unaff_x19 == 0) goto LAB_03a6a6dc;
            plVar9 = (long *)FUN_03a66f34();
            puVar4 = StringLiteral_7742;
            puVar3 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
            if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a3c();
            }
            do {
              lVar12 = *plVar9;
              lVar6 = *(long *)puVar3;
              uVar7 = (ulong)*(ushort *)(lVar12 + 0x12e);
              if (uVar7 == 0) {
LAB_03a6a594:
                puVar10 = (undefined8 *)FUN_01ecb238(plVar9,lVar6,0);
              }
              else {
                piVar13 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
                while (*(long *)(piVar13 + -2) != lVar6) {
                  uVar7 = uVar7 - 1;
                  piVar13 = piVar13 + 4;
                  if (uVar7 == 0) goto LAB_03a6a594;
                }
                puVar10 = (undefined8 *)(lVar12 + (long)*piVar13 * 0x10 + 0x138);
              }
              uVar7 = (*(code *)*puVar10)(plVar9,puVar10[1]);
              if ((uVar7 & 1) == 0) {
                plVar9 = (long *)thunk_FUN_01f116d0(plVar9,*(undefined8 *)puVar2);
                if (plVar9 == (long *)0x0) {
                  return;
                }
                lVar12 = *plVar9;
                lVar6 = *(long *)puVar2;
                uVar7 = (ulong)*(ushort *)(lVar12 + 0x12e);
                if (uVar7 != 0) {
                  piVar13 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar13 + -2) == lVar6) {
                      puVar10 = (undefined8 *)(lVar12 + (long)*piVar13 * 0x10 + 0x138);
                      goto LAB_03a6a6ac;
                    }
                    uVar7 = uVar7 - 1;
                    piVar13 = piVar13 + 4;
                  } while (uVar7 != 0);
                }
                puVar10 = (undefined8 *)FUN_01ecb238(plVar9,lVar6,0);
LAB_03a6a6ac:
                (*(code *)*puVar10)(plVar9,puVar10[1]);
                return;
              }
              lVar12 = *plVar9;
              lVar6 = *(long *)puVar3;
              uVar7 = (ulong)*(ushort *)(lVar12 + 0x12e);
              if (uVar7 == 0) {
LAB_03a6a5f0:
                puVar10 = (undefined8 *)FUN_01ecb238(plVar9,lVar6,1);
              }
              else {
                piVar13 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
                while (*(long *)(piVar13 + -2) != lVar6) {
                  uVar7 = uVar7 - 1;
                  piVar13 = piVar13 + 4;
                  if (uVar7 == 0) goto LAB_03a6a5f0;
                }
                puVar10 = (undefined8 *)(lVar12 + (long)(*piVar13 + 1) * 0x10 + 0x138);
              }
              plVar11 = (long *)(*(code *)*puVar10)(plVar9,puVar10[1]);
              if ((plVar11 != (long *)0x0) && (*plVar11 != *(long *)puVar4)) {
                    /* WARNING: Subroutine does not return */
                FUN_01f08cfc(plVar11);
              }
              FUN_03a679c8();
            } while( true );
          }
          goto LAB_03a6a6dc;
        }
        if (*(int *)(lVar6 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
          lVar12 = **(long **)(*unaff_x28 + 0xb8);
          if (lVar12 == 0) goto LAB_03a6a6dc;
        }
        if (*(uint *)(lVar12 + 0x18) <= unaff_x27) goto LAB_03a6a3f0;
        iVar5 = FUN_0340d008();
      } while (iVar5 != 0);
      lVar6 = *unaff_x28;
    } while (*(int *)(lVar6 + 0xe0) != 0);
  } while( true );
}


