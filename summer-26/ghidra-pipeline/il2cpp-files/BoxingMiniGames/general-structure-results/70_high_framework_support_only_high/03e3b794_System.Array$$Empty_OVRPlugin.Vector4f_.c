/*
FUNCTION_NAME: System.Array$$Empty<OVRPlugin.Vector4f>
ENTRY_POINT: 03e3b794
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_11;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x03e3c064) */
/* WARNING: Removing unreachable block (ram,0x03e3bd90) */
/* WARNING: Removing unreachable block (ram,0x03e3c0ec) */
/* WARNING: Removing unreachable block (ram,0x03e3bd78) */

void System_Array__Empty<OVRPlugin_Vector4f>(void)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  long *plVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long *plVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  int *piVar14;
  long unaff_x19;
  long unaff_x21;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  char cStack00000000000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  long *in_stack_00000178;
  
  FUN_0367c9fc();
  plVar5 = (long *)thunk_FUN_0367fd24();
  if (plVar5 != (long *)0x0) {
                    /* try { // try from 03e3b7b0 to 03f3b7b7 has its CatchHandler @ 03e3b890 */
    lVar11 = *(long *)(*(long *)(unaff_x21 + 0x38) + 0x40);
    if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
      FUN_0367c9fc(lVar11);
    }
    plVar6 = (long *)thunk_FUN_0367fd24();
                    /* try { // try from 03e3b7d4 to 03f3b7e3 has its CatchHandler @ 03e3b88c */
    if (plVar6 != (long *)0x0) {
                    /* try { // try from 03e3b7e4 to 03f3b80b has its CatchHandler @ 03e3b704 */
      iVar2 = FUN_072533bc(&stack0x00000150,0);
      lVar11 = *(long *)(*(long *)(unaff_x21 + 0x38) + 0x40);
      if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
        lVar11 = FUN_0367c9fc(lVar11);
      }
      lVar12 = *plVar6;
      uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar13 != 0) {
        piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == lVar11) {
            puVar7 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
            goto LAB_03e3ba28;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
      puVar7 = (undefined8 *)FUN_0367cd30(plVar6,lVar11,0);
LAB_03e3ba28:
      iVar3 = (*(code *)*puVar7)(plVar6);
      if (iVar2 < iVar3) {
        lVar11 = *(long *)(*(long *)(unaff_x21 + 0x38) + 0x40);
        if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
          lVar11 = FUN_0367c9fc(lVar11);
        }
        lVar12 = *plVar6;
        uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar13 != 0) {
          piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == lVar11) {
              puVar7 = (undefined8 *)(lVar12 + (long)(*piVar14 + 2) * 0x10 + 0x138);
              goto LAB_03e3bda4;
            }
            uVar13 = uVar13 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar13 != 0);
        }
        puVar7 = (undefined8 *)FUN_0367cd30(plVar6,lVar11,2);
LAB_03e3bda4:
        uVar8 = (*(code *)*puVar7)(plVar6,puVar7[1]);
        uVar4 = FUN_072533bc(&stack0x00000150,0);
        lVar11 = *(long *)(*(long *)(unaff_x21 + 0x38) + 0x40);
        if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
          lVar11 = FUN_0367c9fc(lVar11);
        }
        lVar12 = *plVar6;
        uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar13 != 0) {
          piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == lVar11) {
              puVar7 = (undefined8 *)(lVar12 + (long)(*piVar14 + 3) * 0x10 + 0x138);
              goto LAB_03e3be30;
            }
            uVar13 = uVar13 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar13 != 0);
        }
        puVar7 = (undefined8 *)FUN_0367cd30(plVar6,lVar11,3);
LAB_03e3be30:
        (*(code *)*puVar7)(plVar6,uVar4,puVar7[1]);
        lVar11 = *(long *)(*(long *)(unaff_x21 + 0x38) + 0x40);
        if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
          lVar11 = FUN_0367c9fc(lVar11);
        }
        lVar12 = *plVar6;
        uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar13 != 0) {
          piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == lVar11) {
              puVar7 = (undefined8 *)(lVar12 + (long)(*piVar14 + 1) * 0x10 + 0x138);
              goto LAB_03e3beac;
            }
            uVar13 = uVar13 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar13 != 0);
        }
        puVar7 = (undefined8 *)FUN_0367cd30(plVar6,lVar11,1);
LAB_03e3beac:
        plVar5 = (long *)(*(code *)*puVar7)(plVar6,puVar7[1]);
        puVar1 = PTR_DAT_079fead0;
        plVar9 = (long *)thunk_FUN_0367fd24(plVar5,*(undefined8 *)PTR_DAT_079fead0);
        if (plVar9 != (long *)0x0) {
          lVar12 = *(long *)puVar1;
          uVar10 = thunk_FUN_0367fd24(*(undefined8 *)(unaff_x19 + 0xa8),lVar12);
          lVar11 = *plVar9;
          uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
          if (uVar13 != 0) {
            piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
            do {
              if (*(long *)(piVar14 + -2) == lVar12) {
                puVar7 = (undefined8 *)(lVar11 + (long)(*piVar14 + 4) * 0x10 + 0x138);
                goto LAB_03e3bf44;
              }
              uVar13 = uVar13 - 1;
              piVar14 = piVar14 + 4;
            } while (uVar13 != 0);
          }
          puVar7 = (undefined8 *)FUN_0367cd30(plVar9,lVar12,4);
LAB_03e3bf44:
          (*(code *)*puVar7)(plVar9,uVar10,puVar7[1]);
          FUN_04930ea8();
        }
        in_stack_000000b0 = 0;
        in_stack_000000a8 = 0;
        _cStack00000000000000a0 = 0;
        if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03642c18();
        }
        lVar11 = *(long *)(*(long *)(unaff_x21 + 0x38) + 0x28);
        if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
          lVar11 = FUN_0367c9fc(lVar11);
        }
        lVar12 = *plVar5;
        uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar13 != 0) {
          piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == lVar11) {
              puVar7 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
              goto LAB_03e3c01c;
            }
            uVar13 = uVar13 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar13 != 0);
        }
        puVar7 = (undefined8 *)FUN_0367cd30(plVar5,lVar11,0);
LAB_03e3c01c:
        (*(code *)*puVar7)(plVar5);
        if (cStack00000000000000a0 != '\0') {
          in_stack_00000098 = in_stack_000000b0;
          in_stack_00000090 = in_stack_000000a8;
          FUN_07253298(&stack0x00000090,0);
        }
        lVar11 = *(long *)(*(long *)(unaff_x21 + 0x38) + 0x40);
        if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
          lVar11 = FUN_0367c9fc(lVar11);
        }
        lVar12 = *plVar6;
        uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar13 != 0) {
          piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == lVar11) {
              puVar7 = (undefined8 *)(lVar12 + (long)(*piVar14 + 3) * 0x10 + 0x138);
              goto LAB_03e3c0d4;
            }
            uVar13 = uVar13 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar13 != 0);
        }
        puVar7 = (undefined8 *)FUN_0367cd30(plVar6,lVar11,3);
LAB_03e3c0d4:
        (*(code *)*puVar7)(plVar6,uVar8,puVar7[1]);
        return;
      }
    }
    FUN_072533bc(&stack0x00000150,0);
    lVar11 = *(long *)(*(long *)(unaff_x21 + 0x38) + 0x38);
    if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
      lVar11 = FUN_0367c9fc(lVar11);
    }
    lVar12 = *plVar5;
    uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar13 != 0) {
      piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == lVar11) {
          puVar7 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
          goto LAB_03e3bb14;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    puVar7 = (undefined8 *)FUN_0367cd30(plVar5,lVar11,0);
LAB_03e3bb14:
    uVar13 = (*(code *)*puVar7)(plVar5);
    if ((uVar13 & 1) != 0) {
      lVar11 = thunk_FUN_0367fd24(in_stack_00000178,DAT_07b68d08);
      uVar8 = DAT_07b68d08;
      if (lVar11 != 0) {
        uVar10 = thunk_FUN_0367fd24(*(undefined8 *)(unaff_x19 + 0xa8),DAT_07b68d08);
        FUN_0315f2c4(4,uVar8,lVar11,uVar10);
        FUN_04930ea8();
      }
      plVar5 = in_stack_00000178;
      if (in_stack_00000178 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03642c18();
      }
      lVar11 = *(long *)(*(long *)(unaff_x21 + 0x38) + 0x28);
      if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
        lVar11 = FUN_0367c9fc(lVar11);
      }
      lVar12 = *plVar5;
      uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar13 != 0) {
        piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == lVar11) {
            puVar7 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
            goto LAB_03e3bd54;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
      puVar7 = (undefined8 *)FUN_0367cd30(plVar5,lVar11,0);
LAB_03e3bd54:
      (*(code *)*puVar7)(plVar5);
      return;
    }
  }
  *(undefined4 *)(unaff_x19 + 0xb4) = 4;
  return;
}


