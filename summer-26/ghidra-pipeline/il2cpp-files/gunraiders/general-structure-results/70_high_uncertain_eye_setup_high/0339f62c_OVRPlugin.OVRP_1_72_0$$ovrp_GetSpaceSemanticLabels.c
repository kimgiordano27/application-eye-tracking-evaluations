/*
FUNCTION_NAME: OVRPlugin.OVRP_1_72_0$$ovrp_GetSpaceSemanticLabels
ENTRY_POINT: 0339f62c
PROGRAM: gunraiders-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_72_0__ovrp_GetSpaceSemanticLabels(void)

{
  bool in_ZR;
  bool in_CY;
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  int iVar6;
  ulong uVar7;
  int *piVar8;
  long unaff_x21;
  long unaff_x22;
  long unaff_x24;
  ulong unaff_x25;
  long *plVar9;
  int unaff_w26;
  undefined8 uVar10;
  undefined8 uStack0000000000000008;
  
  uStack0000000000000008 = 0;
  if (!in_CY || in_ZR) {
    if (unaff_x24 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4a4();
    }
    if (*(char *)(unaff_x24 + 0x80) == '\0') {
      uVar7 = *(ulong *)(unaff_x24 + 0x10);
      if ((uVar7 & 0xff) == 0) {
        if (unaff_x22 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5d4a4();
        }
        uVar7 = *(ulong *)(unaff_x22 + 200);
      }
      iVar6 = (int)(uVar7 >> 0x20);
      if (unaff_w26 == 0) {
        if (iVar6 - 1U < 2) {
          lVar2 = thunk_FUN_01c273e8(PTR_DAT_042305b0);
          if (*(int *)(lVar2 + 0xe0) == 0) {
            thunk_FUN_01c1d1e8();
          }
          uVar3 = FUN_03295500(0);
          uVar10 = *(undefined8 *)(unaff_x24 + 0x30);
          uVar4 = thunk_FUN_01c273e8(Method_System_Collections_Generic_HashSet<RTHandle>__ctor__);
          FUN_0336f2b8(uVar4,uVar3,uVar10,0);
          uVar3 = FUN_0335cdc4();
          uVar4 = thunk_FUN_01c273e8(Method_System_Collections_Generic_HashSet<Player>_Remove__);
                    /* WARNING: Subroutine does not return */
          FUN_01c5d37c(uVar3,uVar4);
        }
        if ((unaff_x25 & 1) != 0) {
          if (*(long *)(unaff_x24 + 0x48) == 0) {
            uVar3 = FUN_03395dc8();
            *(undefined8 *)(unaff_x24 + 0x48) = uVar3;
          }
          uStack0000000000000008 = *(undefined8 *)(unaff_x24 + 0x90);
          if (*(long *)(unaff_x21 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01c5d4a4();
          }
          uVar1 = FUN_02f211a0(&stack0x00000008,*(undefined4 *)(*(long *)(unaff_x21 + 0x20) + 0x2c),
                               *(undefined8 *)
                                Method_System_Collections_Generic_HashSet<Interactable>__ctor__);
          if (((uVar1 >> 1 & 1) != 0) && (*(char *)(unaff_x24 + 0x82) != '\0')) {
            plVar9 = *(long **)(unaff_x24 + 0x68);
            FUN_033931b0();
            if (*(int *)(*(long *)PTR_DAT_042305b0 + 0xe0) == 0) {
              thunk_FUN_01c1d1e8();
            }
            FUN_03295500(0);
            FUN_033985d4();
            if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01c5d4a4();
            }
            lVar2 = *plVar9;
            uVar7 = (ulong)*(ushort *)(lVar2 + 0x12e);
            if (uVar7 != 0) {
              piVar8 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
              do {
                if (*(long *)(piVar8 + -2) ==
                    *(long *)Method_System_Collections_Generic_HashSet<int>_RemoveWhere__) {
                  puVar5 = (undefined8 *)(lVar2 + (long)*piVar8 * 0x10 + 0x138);
                  goto LAB_0339f7d8;
                }
                uVar7 = uVar7 - 1;
                piVar8 = piVar8 + 4;
              } while (uVar7 != 0);
            }
            puVar5 = (undefined8 *)
                     FUN_01c72498(plVar9,*(long *)
                                          Method_System_Collections_Generic_HashSet<int>_RemoveWhere__
                                  ,0);
LAB_0339f7d8:
            (*(code *)*puVar5)(plVar9);
          }
        }
      }
      else {
        if (iVar6 == 3) {
          lVar2 = thunk_FUN_01c273e8(PTR_DAT_042305b0);
          if (*(int *)(lVar2 + 0xe0) == 0) {
            thunk_FUN_01c1d1e8();
          }
          uVar3 = FUN_03295500(0);
          uVar10 = *(undefined8 *)(unaff_x24 + 0x30);
          uVar4 = thunk_FUN_01c273e8(Method_System_Collections_Generic_HashSet<Player>_get_Count__);
          FUN_0336f2b8(uVar4,uVar3,uVar10,0);
          uVar3 = FUN_0335cdc4();
          uVar4 = thunk_FUN_01c273e8(Method_System_Collections_Generic_HashSet<Player>_Remove__);
                    /* WARNING: Subroutine does not return */
          FUN_01c5d37c(uVar3,uVar4);
        }
        if (iVar6 == 2) {
          lVar2 = thunk_FUN_01c273e8(PTR_DAT_042305b0);
          if (*(int *)(lVar2 + 0xe0) == 0) {
            thunk_FUN_01c1d1e8();
          }
          uVar3 = FUN_03295500(0);
          uVar10 = *(undefined8 *)(unaff_x24 + 0x30);
          uVar4 = thunk_FUN_01c273e8(
                                    Method_System_Collections_Generic_HashSet<Player>_GetEnumerator__
                                    );
          FUN_0336f2b8(uVar4,uVar3,uVar10,0);
          uVar3 = FUN_0335cdc4();
          uVar4 = thunk_FUN_01c273e8(Method_System_Collections_Generic_HashSet<Player>_Remove__);
                    /* WARNING: Subroutine does not return */
          FUN_01c5d37c(uVar3,uVar4);
        }
      }
    }
  }
  return;
}


