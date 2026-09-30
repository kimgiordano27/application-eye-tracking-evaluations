/*
FUNCTION_NAME: OVRPlugin$$CreateDynamicObjectTracker
ENTRY_POINT: 0514d0a8
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_17;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin__CreateDynamicObjectTracker(long param_1,undefined8 param_2,long param_3)

{
  byte bVar1;
  bool bVar2;
  undefined *puVar3;
  undefined1 in_ZR;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long *plVar14;
  long lVar15;
  ulong in_x9;
  int *in_x10;
  int *piVar16;
  long *unaff_x19;
  long *plVar17;
  long unaff_x22;
  undefined8 in_stack_00000018;
  long in_stack_00000028;
  
  do {
    if ((bool)in_ZR) {
      puVar8 = (undefined8 *)(param_1 + (long)*in_x10 * 0x10 + 0x138);
      goto LAB_0514d0d4;
    }
    in_x9 = in_x9 - 1;
    in_x10 = in_x10 + 4;
    if (in_x9 == 0) {
      do {
        puVar8 = (undefined8 *)FUN_02d9a5d4(unaff_x19,param_3,0);
LAB_0514d0d4:
        uVar9 = (*(code *)*puVar8)(unaff_x19,puVar8[1]);
        if ((uVar9 & 1) == 0) {
          FUN_0514d810();
          *(undefined8 *)(in_stack_00000028 + 0x50) = 0;
          thunk_FUN_02dd37b4((undefined8 *)(in_stack_00000028 + 0x50),0);
          return 0;
        }
        plVar17 = *(long **)(in_stack_00000028 + 0x50);
        if (plVar17 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d60ae8();
        }
        lVar15 = *plVar17;
        uVar9 = (ulong)*(ushort *)(lVar15 + 0x12e);
        if (uVar9 != 0) {
          piVar16 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_0676aab8) {
              puVar8 = (undefined8 *)(lVar15 + (long)*piVar16 * 0x10 + 0x138);
              goto LAB_0514d148;
            }
            uVar9 = uVar9 - 1;
            piVar16 = piVar16 + 4;
          } while (uVar9 != 0);
        }
        puVar8 = (undefined8 *)FUN_02d9a5d4(plVar17,*(long *)PTR_DAT_0676aab8,0);
LAB_0514d148:
        plVar17 = (long *)(*(code *)*puVar8)(plVar17,puVar8[1]);
        if (plVar17 == (long *)0x0) {
          *(undefined8 *)(in_stack_00000028 + 0x58) = 0;
          plVar14 = (long *)0x0;
        }
        else {
          lVar15 = *(long *)PTR_DAT_06780ff8;
          bVar1 = *(byte *)(lVar15 + 0x130);
          if (*(byte *)(*plVar17 + 0x130) < bVar1) {
            plVar14 = (long *)0x0;
          }
          else {
            plVar14 = plVar17;
            if (*(long *)(*(long *)(*plVar17 + 200) + (ulong)bVar1 * 8 + -8) != lVar15) {
              plVar14 = (long *)0x0;
            }
          }
          *(long **)(in_stack_00000028 + 0x58) = plVar14;
          if (*(byte *)(*plVar17 + 0x130) < bVar1) {
            plVar14 = (long *)0x0;
          }
          else {
            plVar14 = plVar17;
            if (*(long *)(*(long *)(*plVar17 + 200) + (ulong)bVar1 * 8 + -8) != lVar15) {
              plVar14 = (long *)0x0;
            }
          }
        }
        thunk_FUN_02dd37b4(in_stack_00000028 + 0x58,plVar14);
        if (*(long *)(in_stack_00000028 + 0x58) == 0) {
          lVar15 = *(long *)(in_stack_00000028 + 0x40);
          if (lVar15 != 0) {
            if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d60ae8();
            }
            if (*(char *)(lVar15 + 0x20) != '\0') {
              lVar15 = thunk_FUN_02dc61f4(PTR_DAT_0675eef8);
              if (*(int *)(lVar15 + 0xe4) == 0) {
                thunk_FUN_02dbd7b4();
              }
              uVar10 = FUN_04f8e414(0);
              if (plVar17 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_02d60ae8();
              }
              plVar17 = (long *)thunk_FUN_02d709fc(plVar17,0);
              if (plVar17 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_02d60ae8();
              }
              uVar11 = (**(code **)(*plVar17 + 0x1b8))(plVar17,*(undefined8 *)(*plVar17 + 0x1c0));
              uVar12 = thunk_FUN_02dc61f4(PTR_DAT_06781d28);
              uVar10 = FUN_050f0ec0(uVar12,uVar10,uVar11,0);
              thunk_FUN_02dc61f4(PTR_DAT_0677d960);
              uVar11 = thunk_FUN_02d9d534();
              FUN_050931fc(uVar11,uVar10,0);
              uVar10 = thunk_FUN_02dc61f4(PTR_DAT_06781d18);
                    /* WARNING: Subroutine does not return */
              FUN_02d609b4(uVar11,uVar10);
            }
          }
        }
        else {
          if (unaff_x22 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d60ae8();
          }
          iVar6 = *(int *)(unaff_x22 + 0x24);
          if ((*(uint *)(unaff_x22 + 0x20) & 0xff) == 0) {
            iVar6 = 1;
          }
          *(int *)(in_stack_00000028 + 0x60) = iVar6;
          if (*(char *)(unaff_x22 + 0x10) == '\0') {
            if (iVar6 < 1) {
              iVar6 = FUN_0512edb8(*(long *)(in_stack_00000028 + 0x58),0);
              iVar6 = iVar6 + -1;
            }
            else {
              iVar6 = 0;
            }
          }
          else {
            iVar6 = *(int *)(unaff_x22 + 0x14);
          }
          lVar15 = in_stack_00000028;
          if (*(char *)(unaff_x22 + 0x18) == '\0') {
            if (*(int *)(in_stack_00000028 + 0x60) < 1) {
              uVar5 = 0xffffffff;
            }
            else {
              if (*(long *)(in_stack_00000028 + 0x58) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02d60ae8();
              }
              uVar5 = FUN_0512edb8(*(long *)(in_stack_00000028 + 0x58),0);
            }
          }
          else {
            uVar5 = *(undefined4 *)(unaff_x22 + 0x1c);
          }
          if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d60ae8();
          }
          *(undefined4 *)(lVar15 + 100) = uVar5;
          in_stack_00000018._4_4_ = 0;
          if ((*(char *)(unaff_x22 + 0x10) != '\0') && (*(int *)(unaff_x22 + 0x14) < 0)) {
            if (*(long *)(in_stack_00000028 + 0x58) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d60ae8();
            }
            iVar4 = FUN_0512edb8(*(long *)(in_stack_00000028 + 0x58),0);
            iVar6 = iVar4 + iVar6;
          }
          in_stack_00000018._4_4_ = 0;
          if ((*(char *)(unaff_x22 + 0x18) != '\0') && (*(int *)(unaff_x22 + 0x1c) < 0)) {
            if (*(long *)(in_stack_00000028 + 0x58) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d60ae8();
            }
            iVar4 = FUN_0512edb8(*(long *)(in_stack_00000028 + 0x58),0);
            *(int *)(in_stack_00000028 + 100) = *(int *)(in_stack_00000028 + 100) + iVar4;
          }
          puVar3 = PTR_DAT_0675e6d8;
          iVar4 = *(int *)(in_stack_00000028 + 0x60);
          if (*(int *)(*(long *)PTR_DAT_0675e6d8 + 0xe4) == 0) {
            thunk_FUN_02dbd7b4();
          }
          uVar5 = FUN_0500808c(iVar6,(uint)(iVar4 < 1) << 0x1f,0);
          lVar15 = *(long *)(in_stack_00000028 + 0x58);
          if (*(int *)(in_stack_00000028 + 0x60) < 1) {
            if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d60ae8();
            }
            iVar6 = FUN_0512edb8(lVar15,0);
            iVar6 = iVar6 + -1;
          }
          else {
            if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d60ae8();
            }
            iVar6 = FUN_0512edb8(lVar15,0);
          }
          if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
            thunk_FUN_02dbd7b4();
          }
          iVar6 = FUN_050081d4(uVar5,iVar6,0);
          uVar5 = FUN_0500808c(*(undefined4 *)(in_stack_00000028 + 100),0xffffffff,0);
          *(undefined4 *)(in_stack_00000028 + 100) = uVar5;
          if (*(long *)(in_stack_00000028 + 0x58) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d60ae8();
          }
          uVar7 = FUN_0512edb8(*(long *)(in_stack_00000028 + 0x58),0);
          iVar4 = FUN_050081d4(uVar5,uVar7,0);
          *(int *)(in_stack_00000028 + 100) = iVar4;
          bVar2 = iVar6 < iVar4;
          if (*(int *)(in_stack_00000028 + 0x60) < 1) {
            bVar2 = iVar4 < iVar6;
          }
          *(bool *)(in_stack_00000028 + 0x68) = 0 < *(int *)(in_stack_00000028 + 0x60);
          if (bVar2) {
            *(int *)(in_stack_00000028 + 0x6c) = iVar6;
            bVar2 = iVar4 < iVar6;
            if (*(char *)(in_stack_00000028 + 0x68) != '\0') {
              bVar2 = iVar6 < iVar4;
            }
            if (bVar2) {
              if (*(long *)(in_stack_00000028 + 0x58) != 0) {
                uVar10 = FUN_05128104(*(long *)(in_stack_00000028 + 0x58),iVar6,0);
                *(undefined8 *)(in_stack_00000028 + 0x18) = uVar10;
                thunk_FUN_02dd37b4();
                *(undefined4 *)(in_stack_00000028 + 0x10) = 1;
                return 1;
              }
                    /* WARNING: Subroutine does not return */
              FUN_02d60ae8();
            }
          }
          else {
            lVar15 = *(long *)(in_stack_00000028 + 0x40);
            if (lVar15 != 0) {
              if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02d60ae8();
              }
              if (*(char *)(lVar15 + 0x20) != '\0') {
                lVar15 = thunk_FUN_02dc61f4(PTR_DAT_0675eef8);
                if (*(int *)(lVar15 + 0xe4) == 0) {
                  thunk_FUN_02dbd7b4();
                }
                uVar10 = FUN_04f8e414(0);
                uVar9 = *(ulong *)(unaff_x22 + 0x10);
                thunk_FUN_02dc61f4(PTR_DAT_067675e8);
                if ((uVar9 & 0xff) == 0) {
                  uVar11 = thunk_FUN_02dc61f4(PTR_DAT_06781d20);
                  uVar12 = thunk_FUN_02dc61f4(PTR_DAT_06775140);
                }
                else {
                  uVar11 = thunk_FUN_02dc61f4(PTR_DAT_06781d20);
                  uVar12 = *(undefined8 *)(unaff_x22 + 0x10);
                  thunk_FUN_02dc61f4(PTR_DAT_067675d8);
                  in_stack_00000018._4_4_ = (undefined4)((ulong)uVar12 >> 0x20);
                  lVar15 = thunk_FUN_02dc61f4(PTR_DAT_0675eef8);
                  if (*(int *)(lVar15 + 0xe4) == 0) {
                    thunk_FUN_02dbd7b4();
                  }
                  uVar12 = FUN_04f8e414(0);
                  uVar12 = FUN_05004a00((long)&stack0x00000018 + 4,uVar12,0);
                }
                uVar9 = *(ulong *)(unaff_x22 + 0x18);
                thunk_FUN_02dc61f4(PTR_DAT_067675e8);
                if ((uVar9 & 0xff) == 0) {
                  uVar13 = thunk_FUN_02dc61f4(PTR_DAT_06775140);
                }
                else {
                  uVar13 = *(undefined8 *)(unaff_x22 + 0x18);
                  thunk_FUN_02dc61f4(PTR_DAT_067675d8);
                  in_stack_00000018._4_4_ = (undefined4)((ulong)uVar13 >> 0x20);
                  lVar15 = thunk_FUN_02dc61f4(PTR_DAT_0675eef8);
                  if (*(int *)(lVar15 + 0xe4) == 0) {
                    thunk_FUN_02dbd7b4();
                  }
                  uVar13 = FUN_04f8e414(0);
                  uVar13 = FUN_05004a00((long)&stack0x00000018 + 4,uVar13,0);
                }
                uVar10 = FUN_050f0fe0(uVar11,uVar10,uVar12,uVar13,0);
                thunk_FUN_02dc61f4(PTR_DAT_0677d960);
                uVar11 = thunk_FUN_02d9d534();
                FUN_050931fc(uVar11,uVar10,0);
                uVar10 = thunk_FUN_02dc61f4(PTR_DAT_06781d18);
                    /* WARNING: Subroutine does not return */
                FUN_02d609b4(uVar11,uVar10);
              }
            }
          }
        }
        *(undefined8 *)(in_stack_00000028 + 0x58) = 0;
        thunk_FUN_02dd37b4((undefined8 *)(in_stack_00000028 + 0x58),0);
        unaff_x19 = *(long **)(in_stack_00000028 + 0x50);
        if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d60ae8();
        }
        param_1 = *unaff_x19;
        in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
        param_3 = *(long *)PTR_DAT_0675f3d8;
      } while (in_x9 == 0);
      in_x10 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    }
    in_ZR = *(long *)(in_x10 + -2) == param_3;
  } while( true );
}


