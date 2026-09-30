/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.FriendsMatchmaking.<JoinRoom>d__25$$MoveNext
ENTRY_POINT: 06e24968
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_21;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x06e24dec) */
/* WARNING: Removing unreachable block (ram,0x06e24f40) */

void Meta_XR_MultiplayerBlocks_Shared_FriendsMatchmaking_<JoinRoom>d__25__MoveNext(void)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  long lVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long *plVar14;
  undefined8 *puVar15;
  long *plVar16;
  undefined4 *puVar17;
  long lVar18;
  ulong uVar19;
  long lVar20;
  int *piVar21;
  long unaff_x19;
  long unaff_x20;
  ulong uVar22;
  undefined8 in_stack_00000000;
  undefined4 uStack0000000000000008;
  undefined4 uStack000000000000000c;
  
  FUN_03c8f898();
  FUN_03c8f898(PTR_DAT_08e6a338);
  FUN_03c8f898(PTR_DAT_08e695f0);
  FUN_03c8f898(PTR_DAT_08e7e268);
  FUN_03c8f898(PTR_DAT_08e7e240);
  FUN_03c8f898(PTR_DAT_08e7e248);
  FUN_03c8f898(PTR_DAT_08e93698);
  FUN_03c8f898(PTR_DAT_08e936b8);
  FUN_03c8f898(PTR_DAT_08e936f0);
  *(undefined1 *)(unaff_x20 + 0x58) = 1;
  if (*(long *)(unaff_x19 + 0x28) == 0) {
    return;
  }
  lVar10 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08e6a338);
  FUN_06f82b08(lVar10,0);
  if (*(long *)(unaff_x19 + 0x30) != 0) {
    FUN_0699d86c(*(long *)(unaff_x19 + 0x30),*(undefined8 *)PTR_DAT_08e93688);
    if (*(long *)(unaff_x19 + 0x38) != 0) {
      FUN_06a3fe60(*(long *)(unaff_x19 + 0x38),*(undefined8 *)PTR_DAT_08e936e0);
      puVar8 = PTR_DAT_08e936e8;
      puVar6 = PTR_DAT_08e8cfd8;
      puVar5 = PTR_DAT_08e7e280;
      puVar2 = PTR_DAT_08e7e248;
      lVar18 = *(long *)(unaff_x19 + 0x28);
      if (lVar18 != 0) {
        uVar22 = 0;
        do {
          if ((long)(int)*(uint *)(lVar18 + 0x18) <= (long)uVar22) {
            uVar12 = *(undefined8 *)PTR_DAT_08e7e240;
            if (*(int *)(*(long *)PTR_DAT_08e695f0 + 0xe0) == 0) {
              thunk_FUN_03cd7500();
            }
            uVar12 = FUN_0710fcf0(uVar12,0);
            if (*(int *)(*(long *)PTR_DAT_08e6b480 + 0xe0) == 0) {
              thunk_FUN_03cd7500(*(long *)PTR_DAT_08e6b480);
            }
            lVar18 = FUN_0713670c(uVar12,0);
            if (lVar18 != 0) {
              plVar14 = (long *)FUN_071273a8(lVar18,0);
              puVar7 = PTR_DAT_08e936b8;
              puVar4 = PTR_DAT_08e6a290;
              if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_03c8fb30();
              }
              goto LAB_06e24c34;
            }
            break;
          }
          if (*(uint *)(lVar18 + 0x18) <= uVar22) {
LAB_06e24f28:
                    /* WARNING: Subroutine does not return */
            FUN_03c8fb38();
          }
          if (*(long *)(unaff_x19 + 0x30) == 0) break;
          uVar1 = *(undefined4 *)(lVar18 + uVar22 * 0x10 + 0x20);
          uVar11 = FUN_0699d8d8(*(long *)(unaff_x19 + 0x30),uVar1,*(undefined8 *)puVar5);
          if ((uVar11 & 1) == 0) {
            if (*(long *)(unaff_x19 + 0x30) == 0) break;
            FUN_0699d6d8(*(long *)(unaff_x19 + 0x30),uVar1,uVar22 & 0xffffffff,
                         *(undefined8 *)PTR_DAT_08e93690);
            lVar18 = *(long *)(unaff_x19 + 0x28);
            if (lVar18 == 0) break;
            if (*(uint *)(lVar18 + 0x18) <= uVar22) goto LAB_06e24f28;
            lVar18 = *(long *)(lVar18 + uVar22 * 0x10 + 0x28);
            if (lVar18 == 0) break;
            if (0 < (int)*(ulong *)(lVar18 + 0x18)) {
              uVar11 = 0;
              uVar19 = *(ulong *)(lVar18 + 0x18) & 0xffffffff;
              puVar15 = (undefined8 *)(lVar18 + 0x20);
              do {
                if (uVar19 <= uVar11) goto LAB_06e24f28;
                uVar12 = *puVar15;
                uVar19 = FUN_06f74e14(uVar12,0);
                if ((uVar19 & 1) == 0) {
                  if (*(long *)(unaff_x19 + 0x38) == 0) goto LAB_06e24e7c;
                  uVar19 = FUN_06a3fecc(*(long *)(unaff_x19 + 0x38),uVar12,*(undefined8 *)puVar8);
                  if ((uVar19 & 1) == 0) {
                    if (*(long *)(unaff_x19 + 0x38) == 0) goto LAB_06e24e7c;
                    FUN_06a3fcc4(*(long *)(unaff_x19 + 0x38),uVar12,0xffffffff,*(undefined8 *)puVar6
                                );
                  }
                }
                uVar19 = (ulong)*(uint *)(lVar18 + 0x18);
                uVar11 = uVar11 + 1;
                puVar15 = puVar15 + 2;
              } while ((long)uVar11 < (long)(int)*(uint *)(lVar18 + 0x18));
            }
          }
          else {
            uStack000000000000000c = uVar1;
            uVar12 = thunk_FUN_03cf4e64(*(undefined8 *)puVar2,(long)&stack0x00000008 + 4);
            uStack0000000000000008 = (int)uVar22;
            uVar13 = thunk_FUN_03cf4e64(*(undefined8 *)PTR_DAT_08e699d0,&stack0x00000008);
            uVar12 = FUN_06f75240(*(undefined8 *)PTR_DAT_08e936f0,uVar12,uVar13,0);
            if (lVar10 == 0) break;
            FUN_06f84868(lVar10,uVar12,0);
          }
          lVar18 = *(long *)(unaff_x19 + 0x28);
          uVar22 = uVar22 + 1;
        } while (lVar18 != 0);
      }
    }
  }
  goto LAB_06e24e7c;
LAB_06e24c34:
  lVar20 = *plVar14;
  lVar18 = *(long *)puVar4;
  uVar22 = (ulong)*(ushort *)(lVar20 + 0x12e);
  if (uVar22 != 0) {
    piVar21 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
    do {
      if (*(long *)(piVar21 + -2) == lVar18) {
        puVar15 = (undefined8 *)(lVar20 + (long)*piVar21 * 0x10 + 0x138);
        goto LAB_06e24c80;
      }
      uVar22 = uVar22 - 1;
      piVar21 = piVar21 + 4;
    } while (uVar22 != 0);
  }
  puVar15 = (undefined8 *)FUN_03cf1348(plVar14,lVar18,0);
LAB_06e24c80:
  uVar22 = (*(code *)*puVar15)(plVar14,puVar15[1]);
  puVar3 = PTR_DAT_08e6a288;
  if ((uVar22 & 1) == 0) {
    plVar14 = (long *)thunk_FUN_03cf5138(plVar14,*(undefined8 *)PTR_DAT_08e6a288);
    if (plVar14 == (long *)0x0) goto LAB_06e24de0;
    lVar18 = *plVar14;
    uVar22 = (ulong)*(ushort *)(lVar18 + 0x12e);
    if (uVar22 == 0) goto LAB_06e24db8;
    piVar21 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
    goto LAB_06e24da0;
  }
  lVar20 = *plVar14;
  lVar18 = *(long *)puVar4;
  uVar22 = (ulong)*(ushort *)(lVar20 + 0x12e);
  if (uVar22 != 0) {
    piVar21 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
    do {
      if (*(long *)(piVar21 + -2) == lVar18) {
        puVar15 = (undefined8 *)(lVar20 + (long)(*piVar21 + 1) * 0x10 + 0x138);
        goto LAB_06e24ce0;
      }
      uVar22 = uVar22 - 1;
      piVar21 = piVar21 + 4;
    } while (uVar22 != 0);
  }
  puVar15 = (undefined8 *)FUN_03cf1348(plVar14,lVar18,1);
LAB_06e24ce0:
  plVar16 = (long *)(*(code *)*puVar15)(plVar14,puVar15[1]);
  if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb30();
  }
  if (*(long *)(*plVar16 + 0x40) != *(long *)(*(long *)puVar2 + 0x40)) {
                    /* WARNING: Subroutine does not return */
    FUN_03c8fecc();
  }
  puVar17 = (undefined4 *)thunk_FUN_03cf5388();
  if (*(long *)(unaff_x19 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb30();
  }
  uVar1 = *puVar17;
  uVar22 = FUN_0699d8d8(*(long *)(unaff_x19 + 0x30),uVar1,*(undefined8 *)puVar5);
  if ((uVar22 & 1) == 0) {
    in_stack_00000000._4_4_ = uVar1;
    uVar12 = thunk_FUN_03cf4e64(*(undefined8 *)puVar2,(long)&stack0x00000000 + 4);
    uVar12 = FUN_06f6be0c(*(undefined8 *)puVar7,uVar12,0);
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30(uVar12,uVar12);
    }
    FUN_06f84868(lVar10,uVar12,0);
  }
  goto LAB_06e24c34;
  while( true ) {
    uVar22 = uVar22 - 1;
    piVar21 = piVar21 + 4;
    if (uVar22 == 0) break;
LAB_06e24da0:
    if (*(long *)(piVar21 + -2) == *(long *)puVar3) {
      puVar15 = (undefined8 *)(lVar18 + (long)*piVar21 * 0x10 + 0x138);
      goto LAB_06e24dd4;
    }
  }
LAB_06e24db8:
  puVar15 = (undefined8 *)FUN_03cf1348(plVar14,*(long *)puVar3,0);
LAB_06e24dd4:
  (*(code *)*puVar15)(plVar14,puVar15[1]);
LAB_06e24de0:
  FUN_06e25034();
  puVar2 = PTR_DAT_08e69b48;
  lVar18 = *(long *)(unaff_x19 + 0x40);
  if (lVar18 != 0) {
    iVar9 = 0;
    do {
      if (*(int *)(lVar18 + 0x18) <= iVar9) {
        if (lVar10 != 0) {
          iVar9 = FUN_06f7cb5c(lVar10,0);
          if (iVar9 < 1) {
            return;
          }
          plVar14 = (long *)thunk_FUN_03d12a58();
          if (plVar14 != (long *)0x0) {
            uVar12 = (**(code **)(*plVar14 + 0x1b8))(plVar14,*(undefined8 *)(*plVar14 + 0x1c0));
            uVar13 = FUN_06f6be0c(*(undefined8 *)PTR_DAT_08e93698,lVar10,0);
            if (*(int *)(*(long *)PTR_DAT_08e7e268 + 0xe0) == 0) {
              thunk_FUN_03cd7500(*(long *)PTR_DAT_08e7e268);
            }
            FUN_06dfdedc(uVar12,uVar13,0,0);
            return;
          }
        }
        break;
      }
      lVar20 = *(long *)(unaff_x19 + 0x38);
      uVar12 = FUN_05212a24(lVar18,iVar9,*(undefined8 *)puVar2);
      if (lVar20 == 0) break;
      uVar22 = FUN_06a3fecc(lVar20,uVar12,*(undefined8 *)puVar8);
      if ((uVar22 & 1) != 0) {
        if (*(long *)(unaff_x19 + 0x40) == 0) break;
        lVar18 = *(long *)(unaff_x19 + 0x38);
        uVar12 = FUN_05212a24(*(long *)(unaff_x19 + 0x40),iVar9,*(undefined8 *)puVar2);
        if (lVar18 == 0) break;
        FUN_06a3fcc4(lVar18,uVar12,iVar9,*(undefined8 *)puVar6);
      }
      lVar18 = *(long *)(unaff_x19 + 0x40);
      iVar9 = iVar9 + 1;
    } while (lVar18 != 0);
  }
LAB_06e24e7c:
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


