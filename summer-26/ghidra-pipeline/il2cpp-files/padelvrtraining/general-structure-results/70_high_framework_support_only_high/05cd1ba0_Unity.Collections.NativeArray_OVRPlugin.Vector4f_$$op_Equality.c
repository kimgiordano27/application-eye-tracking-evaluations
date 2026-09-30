/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4f>$$op_Equality
ENTRY_POINT: 05cd1ba0
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_19;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x05cd2144) */
/* WARNING: Removing unreachable block (ram,0x05cd2168) */

void Unity_Collections_NativeArray<OVRPlugin_Vector4f>__op_Equality(void)

{
  int iVar1;
  char cVar2;
  ushort uVar3;
  undefined *puVar4;
  undefined *puVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long lVar9;
  long *plVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  int *piVar15;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  undefined8 uVar16;
  long lVar17;
  char cStack000000000000000c;
  
  FUN_03d2d2b0();
  *(undefined1 *)(unaff_x21 + 0x4f8) = 1;
  cStack000000000000000c = 0;
  if (unaff_x20 == 0) {
LAB_05cd2140:
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548();
  }
  if (*(char *)(unaff_x20 + 0x10) == '\0') {
    return;
  }
  uVar16 = *(undefined8 *)(unaff_x20 + 0x78);
  lVar12 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xf8);
  if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
    lVar12 = FUN_03d8f26c(lVar12);
  }
  lVar12 = thunk_FUN_03d2ee44(uVar16,lVar12);
  if (lVar12 == 0) {
    uVar8 = *(undefined8 *)(unaff_x20 + 0xd0);
    lVar12 = *(long *)(unaff_x20 + 0x78);
    uVar16 = thunk_FUN_03d1e194(PTR_DAT_091fcc68);
    if (lVar12 == 0) {
      uVar11 = thunk_FUN_03d1e194(PTR_DAT_091add20);
    }
    else {
      if ((*(long *)(unaff_x20 + 0x78) == 0) ||
         (plVar6 = (long *)thunk_FUN_03d9f2a8(*(long *)(unaff_x20 + 0x78),0), plVar6 == (long *)0x0)
         ) goto LAB_05cd2140;
      uVar11 = (**(code **)(*plVar6 + 0x168))(plVar6,*(undefined8 *)(*plVar6 + 0x170));
    }
    uVar16 = FUN_06fd2168(uVar8,uVar16,uVar11,0);
    thunk_FUN_03d1e194(PTR_DAT_091a4f90);
    uVar8 = thunk_FUN_03d2ef40();
    FUN_071b07cc(uVar8,uVar16,0);
                    /* WARNING: Subroutine does not return */
    FUN_03d2d414(uVar8);
  }
  uVar16 = *(undefined8 *)(unaff_x20 + 0xb8);
  cStack000000000000000c = '\0';
  FUN_071e78b0(uVar16,&stack0x0000000c,0);
  cVar2 = *(char *)(unaff_x20 + 0xb0);
  thunk_FUN_03d187c8();
  if (cVar2 == '\0') {
    lVar12 = FUN_05cd0144();
    if (lVar12 != 0) {
      plVar6 = *(long **)(unaff_x20 + 0x100);
      if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03d2d548();
      }
      plVar6 = (long *)(**(code **)(*plVar6 + 0x178))
                                 (plVar6,lVar12,*(undefined8 *)(*plVar6 + 0x180));
      if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03d2d548();
      }
      lVar12 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x110);
      if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
        lVar12 = FUN_03d8f26c(lVar12);
      }
      lVar13 = *plVar6;
      uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar14 != 0) {
        piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == lVar12) {
            puVar7 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
            goto LAB_05cd1cbc;
          }
          uVar14 = uVar14 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar14 != 0);
      }
      puVar7 = (undefined8 *)FUN_03d8f370(plVar6,lVar12,0);
LAB_05cd1cbc:
      plVar6 = (long *)(*(code *)*puVar7)(plVar6,puVar7[1]);
      puVar5 = PTR_DAT_091fcc60;
      puVar4 = PTR_DAT_091a1508;
      if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03d2d548();
      }
      do {
        lVar12 = *plVar6;
        uVar14 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar14 != 0) {
          piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar15 + -2) == *(long *)puVar4) {
              puVar7 = (undefined8 *)(lVar12 + (long)*piVar15 * 0x10 + 0x138);
              goto LAB_05cd1d2c;
            }
            uVar14 = uVar14 - 1;
            piVar15 = piVar15 + 4;
          } while (uVar14 != 0);
        }
        puVar7 = (undefined8 *)FUN_03d8f370(plVar6,*(long *)puVar4,0);
LAB_05cd1d2c:
        uVar14 = (*(code *)*puVar7)(plVar6,puVar7[1]);
        if ((uVar14 & 1) == 0) {
          if (plVar6 == (long *)0x0) goto LAB_05cd2060;
          lVar12 = *plVar6;
          uVar14 = (ulong)*(ushort *)(lVar12 + 0x12e);
          if (uVar14 == 0) goto LAB_05cd1fa4;
          piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          goto LAB_05cd1f8c;
        }
        lVar12 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x120);
        if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
          lVar12 = FUN_03d8f26c(lVar12);
        }
        lVar13 = *plVar6;
        uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
        if (uVar14 != 0) {
          piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
          do {
            if (*(long *)(piVar15 + -2) == lVar12) {
              puVar7 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
              goto LAB_05cd1da4;
            }
            uVar14 = uVar14 - 1;
            piVar15 = piVar15 + 4;
          } while (uVar14 != 0);
        }
        puVar7 = (undefined8 *)FUN_03d8f370(plVar6,lVar12,0);
LAB_05cd1da4:
        uVar8 = (*(code *)*puVar7)(plVar6,puVar7[1]);
        if (*(long *)(unaff_x20 + 0x110) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03d2d548(uVar8,uVar8);
        }
        lVar12 = FUN_05cd0144();
        if (lVar12 == 0) {
          iVar1 = *(int *)(unaff_x20 + 0x14c);
          *(int *)(unaff_x20 + 0x14c) = iVar1 + 1;
          if (iVar1 == 0) {
            plVar10 = *(long **)(unaff_x20 + 0x78);
            if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_03d2d548();
            }
            lVar12 = *plVar10;
            uVar14 = (ulong)*(ushort *)(lVar12 + 0x12e);
            if (uVar14 != 0) {
              piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
              do {
                if (*(long *)(piVar15 + -2) == *(long *)puVar5) {
                  puVar7 = (undefined8 *)(lVar12 + (long)(*piVar15 + 3) * 0x10 + 0x138);
                  goto LAB_05cd1f4c;
                }
                uVar14 = uVar14 - 1;
                piVar15 = piVar15 + 4;
              } while (uVar14 != 0);
            }
            puVar7 = (undefined8 *)FUN_03d8f370(plVar10,*(long *)puVar5,3);
LAB_05cd1f4c:
            (*(code *)*puVar7)(plVar10,puVar7[1]);
          }
        }
        else {
          *(undefined4 *)(unaff_x20 + 0x14c) = 0;
          lVar17 = *(long *)(unaff_x20 + 0x78);
          lVar13 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xf8);
          if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
            lVar13 = FUN_03d8f26c(lVar13);
          }
          if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03d2d548();
          }
          lVar9 = thunk_FUN_03d2ee44(lVar17,lVar13);
          if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03d2d8e4(lVar17,lVar13);
          }
          lVar13 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xf8);
          uVar3 = *(ushort *)(lVar13 + 0x135);
          lVar9 = lVar13;
          if ((uVar3 & 1) == 0) {
            lVar9 = FUN_03d8f26c(lVar13);
            lVar13 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xf8);
            uVar3 = *(ushort *)(lVar13 + 0x135);
          }
          if ((uVar3 & 1) == 0) {
            lVar13 = FUN_03d8f26c(lVar13);
          }
          plVar10 = (long *)thunk_FUN_03d2ee44(lVar17,lVar13);
          if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_03d2d8e4(lVar17,lVar13);
          }
          lVar13 = *plVar10;
          uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
          if (uVar14 != 0) {
            piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
            do {
              if (*(long *)(piVar15 + -2) == lVar9) {
                puVar7 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
                goto LAB_05cd1f28;
              }
              uVar14 = uVar14 - 1;
              piVar15 = piVar15 + 4;
            } while (uVar14 != 0);
          }
          puVar7 = (undefined8 *)FUN_03d8f370(plVar10,lVar9,0);
LAB_05cd1f28:
          (*(code *)*puVar7)(plVar10,lVar12,puVar7[1]);
        }
      } while( true );
    }
    iVar1 = *(int *)(unaff_x20 + 0x14c);
    *(int *)(unaff_x20 + 0x14c) = iVar1 + 1;
    if (iVar1 == 0) {
      plVar6 = *(long **)(unaff_x20 + 0x78);
      if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03d2d548();
      }
      lVar12 = *plVar6;
      uVar14 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar14 != 0) {
        piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_091fcc60) {
            puVar7 = (undefined8 *)(lVar12 + (long)(*piVar15 + 3) * 0x10 + 0x138);
            goto LAB_05cd204c;
          }
          uVar14 = uVar14 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar14 != 0);
      }
      puVar7 = (undefined8 *)FUN_03d8f370(plVar6,*(long *)PTR_DAT_091fcc60,3);
LAB_05cd204c:
      (*(code *)*puVar7)(plVar6,puVar7[1]);
    }
  }
  goto LAB_05cd2060;
  while( true ) {
    uVar14 = uVar14 - 1;
    piVar15 = piVar15 + 4;
    if (uVar14 == 0) break;
LAB_05cd1f8c:
    if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_091a14e0) {
      puVar7 = (undefined8 *)(lVar12 + (long)*piVar15 * 0x10 + 0x138);
      goto LAB_05cd1fc0;
    }
  }
LAB_05cd1fa4:
  puVar7 = (undefined8 *)FUN_03d8f370(plVar6,*(long *)PTR_DAT_091a14e0,0);
LAB_05cd1fc0:
  (*(code *)*puVar7)(plVar6,puVar7[1]);
LAB_05cd2060:
  if (cStack000000000000000c != '\0') {
    thunk_FUN_03d180a8(uVar16,0);
  }
  return;
}


