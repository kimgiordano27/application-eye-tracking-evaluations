/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.LocalMatchmaking.<StopDiscoveringColocationSessions>d__22$$MoveNext
ENTRY_POINT: 08a8a328
PROGRAM: Hyper-libil2cpp.so
SCORE: 92
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_18;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_MultiplayerBlocks_Shared_LocalMatchmaking_<StopDiscoveringColocationSessions>d__22__MoveNext
               (int *param_1)

{
  undefined *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  int *piVar10;
  long *plVar11;
  long *plVar12;
  undefined8 in_stack_00000000;
  undefined4 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000038;
  
  if ((DAT_0b32c69c & 1) == 0) {
    FUN_04947ee4(PTR_DAT_0ac54c28);
    FUN_04947ee4(PTR_DAT_0ac54c30);
    FUN_04947ee4(PTR_DAT_0ac54c38);
    FUN_04947ee4(PTR_DAT_0ac54c40);
    FUN_04947ee4(PTR_DAT_0ac54c48);
    FUN_04947ee4(PTR_DAT_0ac4c9f0);
    FUN_04947ee4(PTR_DAT_0ac4c7d8);
    FUN_04947ee4(PTR_DAT_0ac46eb8);
    FUN_04947ee4(PTR_DAT_0ac0fde8);
    FUN_04947ee4(PTR_DAT_0ac0fcf8);
    FUN_04947ee4(PTR_DAT_0ac0fd00);
    FUN_04947ee4(PTR_DAT_0ac549c8);
    FUN_04947ee4(PTR_DAT_0ac549a0);
    FUN_04947ee4(PTR_DAT_0ac54978);
    FUN_04947ee4(PTR_DAT_0ac549d0);
    FUN_04947ee4(PTR_DAT_0ac549a8);
    FUN_04947ee4(PTR_DAT_0ac54980);
    FUN_04947ee4(PTR_DAT_0ac549d8);
    FUN_04947ee4(PTR_DAT_0ac54988);
    FUN_04947ee4(PTR_DAT_0ac549b0);
    FUN_04947ee4(PTR_DAT_0ac54c50);
    FUN_04947ee4(PTR_DAT_0ac46ed8);
    DAT_0b32c69c = 1;
  }
  iVar2 = *param_1;
  plVar11 = *(long **)(param_1 + 10);
  in_stack_00000038 = 0;
  in_stack_00000020 = 0;
  in_stack_00000028 = 0;
  in_stack_00000018 = 0;
  in_stack_00000010 = 0;
  if (iVar2 < 2) {
    if (iVar2 == 0) {
      in_stack_00000038 = *(undefined8 *)(param_1 + 0x10);
      param_1[0x10] = 0;
      param_1[0x11] = 0;
      *param_1 = -1;
LAB_08a8a59c:
      FUN_08c80ec0(&stack0x00000038,0);
      iVar2 = param_1[0xe];
      if (iVar2 < 4) {
        if (iVar2 == 0) {
          if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_0494818c();
          }
          plVar11[0x2e] = 0;
          thunk_FUN_049ee3d8(plVar11 + 0x2e,0);
          plVar11[0x2d] = 0;
          thunk_FUN_049ee3d8(plVar11 + 0x2d,0);
          if (plVar11[0x28] == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_0494818c();
          }
          lVar5 = FUN_08a3cf68(plVar11[0x28],*(undefined8 *)(param_1 + 0xc),0);
          if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_0494818c();
          }
          in_stack_00000018 = FUN_07764808(lVar5,*(undefined8 *)PTR_DAT_0ac549d8);
          uVar6 = FUN_076844c8(&stack0x00000018,*(undefined8 *)PTR_DAT_0ac549d0);
          if ((uVar6 & 1) == 0) {
            *param_1 = 3;
            *(undefined8 *)(param_1 + 0x16) = in_stack_00000018;
            thunk_FUN_049ee3d8(param_1 + 0x16,0);
            FUN_05a6f83c(param_1 + 2,&stack0x00000018,param_1,*(undefined8 *)PTR_DAT_0ac54c28);
            return;
          }
          goto LAB_08a8a500;
        }
        if (iVar2 == 1) {
          if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_0494818c();
          }
          if (plVar11[0x28] == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_0494818c();
          }
          lVar5 = FUN_08a3d574(plVar11[0x28],*(undefined8 *)(param_1 + 0xc),0);
          if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_0494818c();
          }
          in_stack_00000028 = FUN_07764808(lVar5,*(undefined8 *)PTR_DAT_0ac54988);
          uVar6 = FUN_076844c8(&stack0x00000028,*(undefined8 *)PTR_DAT_0ac54980);
          if ((uVar6 & 1) == 0) {
            *param_1 = 1;
            *(undefined8 *)(param_1 + 0x12) = in_stack_00000028;
            thunk_FUN_049ee3d8(param_1 + 0x12,0);
            FUN_05a6f83c(param_1 + 2,&stack0x00000028,param_1,*(undefined8 *)PTR_DAT_0ac54c30);
            return;
          }
          goto LAB_08a8a490;
        }
LAB_08a8a918:
        if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_0494818c();
        }
      }
      else {
        if (iVar2 == 4) {
          if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_0494818c();
          }
          plVar11[0x2e] = 0;
          thunk_FUN_049ee3d8(plVar11 + 0x2e,0);
          lVar5 = FUN_08a7f190(plVar11,*(undefined8 *)(param_1 + 0xc));
          if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_0494818c();
          }
          in_stack_00000020 = FUN_07764808(lVar5,*(undefined8 *)PTR_DAT_0ac549b0);
          uVar6 = FUN_076844c8(&stack0x00000020,*(undefined8 *)PTR_DAT_0ac549a8);
          if ((uVar6 & 1) == 0) {
            *param_1 = 2;
            *(undefined8 *)(param_1 + 0x14) = in_stack_00000020;
            thunk_FUN_049ee3d8(param_1 + 0x14,0);
            FUN_05a6f83c(param_1 + 2,&stack0x00000020,param_1,*(undefined8 *)PTR_DAT_0ac54c38);
            return;
          }
          goto LAB_08a8a658;
        }
        if (iVar2 != 7) goto LAB_08a8a918;
        if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_0494818c();
        }
        plVar11[0x2e] = 0;
        thunk_FUN_049ee3d8(plVar11 + 0x2e,0);
        plVar11[0x2d] = 0;
        thunk_FUN_049ee3d8(plVar11 + 0x2d,0);
        plVar11[0x2c] = 0;
        thunk_FUN_049ee3d8(plVar11 + 0x2c,0);
      }
    }
    else {
      if (iVar2 != 1) {
LAB_08a8a52c:
        if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_0494818c();
        }
        if (plVar11[5] == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0494818c();
        }
        plVar12 = *(long **)(plVar11[5] + 0x50);
        if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_0494818c();
        }
        lVar5 = *plVar12;
        uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar6 != 0) {
          piVar10 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_0ac4c7d8) {
              puVar8 = (undefined8 *)(lVar5 + (long)*piVar10 * 0x10 + 0x138);
              goto LAB_08a8a820;
            }
            uVar6 = uVar6 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar6 != 0);
        }
        puVar8 = (undefined8 *)FUN_04980e68(plVar12,*(long *)PTR_DAT_0ac4c7d8,0);
LAB_08a8a820:
        uVar6 = (*(code *)*puVar8)(plVar12,puVar8[1]);
        plVar12 = (long *)plVar11[2];
        if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_0494818c();
        }
        lVar5 = *plVar12;
        uVar9 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_0ac4c9f0) {
              puVar8 = (undefined8 *)(lVar5 + (long)(*piVar10 + 0xe) * 0x10 + 0x138);
              goto LAB_08a8a890;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        puVar8 = (undefined8 *)FUN_04980e68(plVar12,*(long *)PTR_DAT_0ac4c9f0,0xe);
LAB_08a8a890:
        uVar9 = (*(code *)*puVar8)(plVar12,puVar8[1]);
        if ((uVar9 & 1) == 0) {
          iVar2 = 4;
        }
        else {
          iVar2 = FUN_08a7d624(plVar11);
        }
        if (plVar11[0x31] == 0) {
          iVar2 = 0;
          if ((uVar6 & 1) == 0) {
            iVar2 = 7;
          }
        }
        else {
          uVar3 = FUN_08a5bea8(plVar11[0x31],0);
          in_stack_00000000._4_4_ = in_stack_00000000._4_4_ & 0xffff0000;
          FUN_06fb8f70((long)&stack0x00000000 + 4,uVar3 & 1,*(undefined8 *)PTR_DAT_0ac0fcf8);
          if ((uVar6 & 1) == 0) {
            if ((in_stack_00000000._4_4_ & 0xff) == 0) {
              iVar2 = 7;
            }
            else if (0xff < in_stack_00000000._4_2_) {
              iVar2 = 1;
            }
          }
          else {
            iVar2 = 0;
          }
        }
        param_1[0xe] = iVar2;
        iVar4 = FUN_08a7d750(plVar11);
        if (iVar2 == iVar4) goto LAB_08a8a7a4;
        if (plVar11[0x28] == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0494818c();
        }
        lVar5 = FUN_08a3ceb0(plVar11[0x28],param_1[0xe],*(undefined8 *)(param_1 + 0xc),0);
        if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0494818c();
        }
        in_stack_00000038 = FUN_08df2f04(lVar5,0);
        uVar6 = FUN_08c80df8(&stack0x00000038,0);
        if ((uVar6 & 1) == 0) {
          *param_1 = 0;
          *(undefined8 *)(param_1 + 0x10) = in_stack_00000038;
          thunk_FUN_049ee3d8(param_1 + 0x10,0);
          FUN_05a708bc(param_1 + 2,&stack0x00000038,param_1,*(undefined8 *)PTR_DAT_0ac54c40);
          return;
        }
        goto LAB_08a8a59c;
      }
      in_stack_00000028 = *(undefined8 *)(param_1 + 0x12);
      param_1[0x12] = 0;
      param_1[0x13] = 0;
      *param_1 = -1;
LAB_08a8a490:
      lVar5 = FUN_07684508(&stack0x00000028,*(undefined8 *)PTR_DAT_0ac54978);
      if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0494818c();
      }
      plVar11[0x2e] = lVar5;
      thunk_FUN_049ee3d8(plVar11 + 0x2e);
      plVar11[0x2d] = 0;
      thunk_FUN_049ee3d8(plVar11 + 0x2d,0);
      plVar11[0x2c] = 0;
      thunk_FUN_049ee3d8(plVar11 + 0x2c,0);
    }
  }
  else if (iVar2 == 2) {
    in_stack_00000020 = *(undefined8 *)(param_1 + 0x14);
    param_1[0x14] = 0;
    param_1[0x15] = 0;
    *param_1 = -1;
LAB_08a8a658:
    lVar5 = FUN_07684508(&stack0x00000020,*(undefined8 *)PTR_DAT_0ac549a0);
    if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    plVar11[0x2d] = lVar5;
    thunk_FUN_049ee3d8(plVar11 + 0x2d);
    plVar11[0x2c] = 0;
    thunk_FUN_049ee3d8(plVar11 + 0x2c,0);
  }
  else {
    if (iVar2 != 3) goto LAB_08a8a52c;
    in_stack_00000018 = *(undefined8 *)(param_1 + 0x16);
    param_1[0x16] = 0;
    param_1[0x17] = 0;
    *param_1 = -1;
LAB_08a8a500:
    lVar5 = FUN_07684508(&stack0x00000018,*(undefined8 *)PTR_DAT_0ac549c8);
    if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    plVar11[0x2c] = lVar5;
    thunk_FUN_049ee3d8(plVar11 + 0x2c);
  }
  uVar6 = (**(code **)(*plVar11 + 0x1e8))(plVar11,*(undefined8 *)(*plVar11 + 0x1f0));
  if ((uVar6 & 1) != 0) {
    if (plVar11[0x31] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    *(undefined1 *)(plVar11[0x31] + 0x38) = 0;
  }
  puVar1 = PTR_DAT_0ac46eb8;
  if (*(int *)(*(long *)PTR_DAT_0ac46eb8 + 0xe4) == 0) {
    thunk_FUN_049a583c();
  }
  if (DAT_0b32acf7 == '\0') {
    FUN_04947ee4(PTR_DAT_0ac46eb8);
    DAT_0b32acf7 = '\x01';
  }
  lVar5 = *(long *)puVar1;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_049a583c();
    lVar5 = *(long *)puVar1;
  }
  in_stack_00000000._4_4_ = param_1[0xe];
  plVar11 = (long *)**(undefined8 **)(lVar5 + 0xb8);
  uVar7 = thunk_FUN_04983b98(*(undefined8 *)PTR_DAT_0ac54c48,(long)&stack0x00000000 + 4);
  uVar7 = FUN_08bc9f74(*(undefined8 *)PTR_DAT_0ac54c50,uVar7,0);
  if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0494818c();
  }
  lVar5 = *plVar11;
  uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar6 != 0) {
    piVar10 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_0ac46ed8) {
        puVar8 = (undefined8 *)(lVar5 + (long)*piVar10 * 0x10 + 0x138);
        goto LAB_08a8a794;
      }
      uVar6 = uVar6 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar6 != 0);
  }
  puVar8 = (undefined8 *)FUN_04980e68(plVar11,*(long *)PTR_DAT_0ac46ed8,0);
LAB_08a8a794:
  (*(code *)*puVar8)(plVar11,uVar7,puVar8[1]);
LAB_08a8a7a4:
  *param_1 = -2;
  FUN_08c7f6c8(param_1 + 2,0);
  return;
}


