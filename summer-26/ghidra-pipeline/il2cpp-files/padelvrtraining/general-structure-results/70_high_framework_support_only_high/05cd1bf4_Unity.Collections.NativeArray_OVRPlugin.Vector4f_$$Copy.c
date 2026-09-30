/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4f>$$Copy
ENTRY_POINT: 05cd1bf4
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_15;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x05cd2144) */
/* WARNING: Removing unreachable block (ram,0x05cd20bc) */
/* WARNING: Removing unreachable block (ram,0x05cd212c) */
/* WARNING: Removing unreachable block (ram,0x05cd2134) */
/* WARNING: Removing unreachable block (ram,0x05cd2140) */
/* WARNING: Removing unreachable block (ram,0x05cd214c) */
/* WARNING: Removing unreachable block (ram,0x05cd20d8) */
/* WARNING: Removing unreachable block (ram,0x05cd20e4) */
/* WARNING: Removing unreachable block (ram,0x05cd2168) */

void Unity_Collections_NativeArray<OVRPlugin_Vector4f>__Copy(void)

{
  int iVar1;
  char cVar2;
  ushort uVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  ulong uVar13;
  int *piVar14;
  long unaff_x19;
  long unaff_x20;
  long lVar15;
  undefined8 in_stack_00000008;
  
  FUN_071e78b0();
  cVar2 = *(char *)(unaff_x20 + 0xb0);
  thunk_FUN_03d187c8();
  if (cVar2 == '\0') {
    lVar6 = FUN_05cd0144();
    if (lVar6 != 0) {
      plVar7 = *(long **)(unaff_x20 + 0x100);
      if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03d2d548();
      }
      plVar7 = (long *)(**(code **)(*plVar7 + 0x178))(plVar7,lVar6,*(undefined8 *)(*plVar7 + 0x180))
      ;
      if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03d2d548();
      }
      lVar6 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x110);
      if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_03d8f26c(lVar6);
      }
      lVar12 = *plVar7;
      uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar13 != 0) {
        piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == lVar6) {
            puVar8 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
            goto LAB_05cd1cbc;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
      puVar8 = (undefined8 *)FUN_03d8f370(plVar7,lVar6,0);
LAB_05cd1cbc:
      plVar7 = (long *)(*(code *)*puVar8)(plVar7,puVar8[1]);
      puVar5 = PTR_DAT_091fcc60;
      puVar4 = PTR_DAT_091a1508;
      if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03d2d548();
      }
      do {
        lVar6 = *plVar7;
        uVar13 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar13 != 0) {
          piVar14 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == *(long *)puVar4) {
              puVar8 = (undefined8 *)(lVar6 + (long)*piVar14 * 0x10 + 0x138);
              goto LAB_05cd1d2c;
            }
            uVar13 = uVar13 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar13 != 0);
        }
        puVar8 = (undefined8 *)FUN_03d8f370(plVar7,*(long *)puVar4,0);
LAB_05cd1d2c:
        uVar13 = (*(code *)*puVar8)(plVar7,puVar8[1]);
        if ((uVar13 & 1) == 0) {
          if (plVar7 == (long *)0x0) goto LAB_05cd2060;
          lVar6 = *plVar7;
          uVar13 = (ulong)*(ushort *)(lVar6 + 0x12e);
          if (uVar13 == 0) goto LAB_05cd1fa4;
          piVar14 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          goto LAB_05cd1f8c;
        }
        lVar6 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x120);
        if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
          lVar6 = FUN_03d8f26c(lVar6);
        }
        lVar12 = *plVar7;
        uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar13 != 0) {
          piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == lVar6) {
              puVar8 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
              goto LAB_05cd1da4;
            }
            uVar13 = uVar13 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar13 != 0);
        }
        puVar8 = (undefined8 *)FUN_03d8f370(plVar7,lVar6,0);
LAB_05cd1da4:
        uVar9 = (*(code *)*puVar8)(plVar7,puVar8[1]);
        if (*(long *)(unaff_x20 + 0x110) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03d2d548(uVar9,uVar9);
        }
        lVar6 = FUN_05cd0144();
        if (lVar6 == 0) {
          iVar1 = *(int *)(unaff_x20 + 0x14c);
          *(int *)(unaff_x20 + 0x14c) = iVar1 + 1;
          if (iVar1 == 0) {
            plVar11 = *(long **)(unaff_x20 + 0x78);
            if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_03d2d548();
            }
            lVar6 = *plVar11;
            uVar13 = (ulong)*(ushort *)(lVar6 + 0x12e);
            if (uVar13 != 0) {
              piVar14 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
              do {
                if (*(long *)(piVar14 + -2) == *(long *)puVar5) {
                  puVar8 = (undefined8 *)(lVar6 + (long)(*piVar14 + 3) * 0x10 + 0x138);
                  goto LAB_05cd1f4c;
                }
                uVar13 = uVar13 - 1;
                piVar14 = piVar14 + 4;
              } while (uVar13 != 0);
            }
            puVar8 = (undefined8 *)FUN_03d8f370(plVar11,*(long *)puVar5,3);
LAB_05cd1f4c:
            (*(code *)*puVar8)(plVar11,puVar8[1]);
          }
        }
        else {
          *(undefined4 *)(unaff_x20 + 0x14c) = 0;
          lVar15 = *(long *)(unaff_x20 + 0x78);
          lVar12 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xf8);
          if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
            lVar12 = FUN_03d8f26c(lVar12);
          }
          if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03d2d548();
          }
          lVar10 = thunk_FUN_03d2ee44(lVar15,lVar12);
          if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03d2d8e4(lVar15,lVar12);
          }
          lVar12 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xf8);
          uVar3 = *(ushort *)(lVar12 + 0x135);
          lVar10 = lVar12;
          if ((uVar3 & 1) == 0) {
            lVar10 = FUN_03d8f26c(lVar12);
            lVar12 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xf8);
            uVar3 = *(ushort *)(lVar12 + 0x135);
          }
          if ((uVar3 & 1) == 0) {
            lVar12 = FUN_03d8f26c(lVar12);
          }
          plVar11 = (long *)thunk_FUN_03d2ee44(lVar15,lVar12);
          if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_03d2d8e4(lVar15,lVar12);
          }
          lVar12 = *plVar11;
          uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
          if (uVar13 != 0) {
            piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
            do {
              if (*(long *)(piVar14 + -2) == lVar10) {
                puVar8 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
                goto LAB_05cd1f28;
              }
              uVar13 = uVar13 - 1;
              piVar14 = piVar14 + 4;
            } while (uVar13 != 0);
          }
          puVar8 = (undefined8 *)FUN_03d8f370(plVar11,lVar10,0);
LAB_05cd1f28:
          (*(code *)*puVar8)(plVar11,lVar6,puVar8[1]);
        }
      } while( true );
    }
    iVar1 = *(int *)(unaff_x20 + 0x14c);
    *(int *)(unaff_x20 + 0x14c) = iVar1 + 1;
    if (iVar1 == 0) {
      plVar7 = *(long **)(unaff_x20 + 0x78);
      if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03d2d548();
      }
      lVar6 = *plVar7;
      uVar13 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar13 != 0) {
        piVar14 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_091fcc60) {
            puVar8 = (undefined8 *)(lVar6 + (long)(*piVar14 + 3) * 0x10 + 0x138);
            goto LAB_05cd204c;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
      puVar8 = (undefined8 *)FUN_03d8f370(plVar7,*(long *)PTR_DAT_091fcc60,3);
LAB_05cd204c:
      (*(code *)*puVar8)(plVar7,puVar8[1]);
    }
  }
LAB_05cd2060:
  if (in_stack_00000008._4_1_ != '\0') {
    thunk_FUN_03d180a8();
  }
  return;
  while( true ) {
    uVar13 = uVar13 - 1;
    piVar14 = piVar14 + 4;
    if (uVar13 == 0) break;
LAB_05cd1f8c:
    if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_091a14e0) {
      puVar8 = (undefined8 *)(lVar6 + (long)*piVar14 * 0x10 + 0x138);
      goto LAB_05cd1fc0;
    }
  }
LAB_05cd1fa4:
  puVar8 = (undefined8 *)FUN_03d8f370(plVar7,*(long *)PTR_DAT_091a14e0,0);
LAB_05cd1fc0:
  (*(code *)*puVar8)(plVar7,puVar8[1]);
  goto LAB_05cd2060;
}


