/*
FUNCTION_NAME: System.Array$$Empty<OVRPlugin.Vector4s>
ENTRY_POINT: 03e3b7f8
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

void System_Array__Empty<OVRPlugin_Vector4s>(ushort *param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long *plVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  long unaff_x19;
  long unaff_x21;
  long *unaff_x22;
  long *unaff_x23;
  int unaff_w24;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  char cStack00000000000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  long *in_stack_00000178;
  
  if ((*param_1 & 1) == 0) {
    param_3 = FUN_0367c9fc(param_3);
  }
                    /* try { // try from 03e3b80c to 03f3b81b has its CatchHandler @ 03e3b888 */
  lVar8 = *unaff_x22;
  uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
  if (uVar10 != 0) {
                    /* try { // try from 03e3b81c to 03f3b8ab has its CatchHandler @ 03e3b704 */
    piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
    do {
      if (*(long *)(piVar11 + -2) == param_3) {
        puVar3 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
        goto LAB_03e3ba28;
      }
      uVar10 = uVar10 - 1;
      piVar11 = piVar11 + 4;
    } while (uVar10 != 0);
  }
  puVar3 = (undefined8 *)FUN_0367cd30();
LAB_03e3ba28:
  iVar2 = (*(code *)*puVar3)();
  if (unaff_w24 < iVar2) {
    lVar8 = *(long *)(*(long *)(unaff_x21 + 0x38) + 0x40);
    if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_0367c9fc(lVar8);
    }
    lVar9 = *unaff_x22;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == lVar8) {
          puVar3 = (undefined8 *)(lVar9 + (long)(*piVar11 + 2) * 0x10 + 0x138);
          goto LAB_03e3bda4;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar3 = (undefined8 *)FUN_0367cd30();
LAB_03e3bda4:
    (*(code *)*puVar3)();
    FUN_072533bc(&stack0x00000150,0);
    lVar8 = *(long *)(*(long *)(unaff_x21 + 0x38) + 0x40);
    if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_0367c9fc(lVar8);
    }
    lVar9 = *unaff_x22;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == lVar8) {
          puVar3 = (undefined8 *)(lVar9 + (long)(*piVar11 + 3) * 0x10 + 0x138);
          goto LAB_03e3be30;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar3 = (undefined8 *)FUN_0367cd30();
LAB_03e3be30:
    (*(code *)*puVar3)();
    lVar8 = *(long *)(*(long *)(unaff_x21 + 0x38) + 0x40);
    if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_0367c9fc(lVar8);
    }
    lVar9 = *unaff_x22;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == lVar8) {
          puVar3 = (undefined8 *)(lVar9 + (long)(*piVar11 + 1) * 0x10 + 0x138);
          goto LAB_03e3beac;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar3 = (undefined8 *)FUN_0367cd30();
LAB_03e3beac:
    plVar5 = (long *)(*(code *)*puVar3)();
    puVar1 = PTR_DAT_079fead0;
    plVar6 = (long *)thunk_FUN_0367fd24(plVar5,*(undefined8 *)PTR_DAT_079fead0);
    if (plVar6 != (long *)0x0) {
      lVar9 = *(long *)puVar1;
      uVar7 = thunk_FUN_0367fd24(*(undefined8 *)(unaff_x19 + 0xa8),lVar9);
      lVar8 = *plVar6;
      uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == lVar9) {
            puVar3 = (undefined8 *)(lVar8 + (long)(*piVar11 + 4) * 0x10 + 0x138);
            goto LAB_03e3bf44;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar3 = (undefined8 *)FUN_0367cd30(plVar6,lVar9,4);
LAB_03e3bf44:
      (*(code *)*puVar3)(plVar6,uVar7,puVar3[1]);
      FUN_04930ea8();
    }
    in_stack_000000b0 = 0;
    in_stack_000000a8 = 0;
    _cStack00000000000000a0 = 0;
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03642c18();
    }
    lVar8 = *(long *)(*(long *)(unaff_x21 + 0x38) + 0x28);
    if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_0367c9fc(lVar8);
    }
    lVar9 = *plVar5;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == lVar8) {
          puVar3 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_03e3c01c;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar3 = (undefined8 *)FUN_0367cd30(plVar5,lVar8,0);
LAB_03e3c01c:
    (*(code *)*puVar3)(plVar5);
    if (cStack00000000000000a0 != '\0') {
      in_stack_00000098 = in_stack_000000b0;
      in_stack_00000090 = in_stack_000000a8;
      FUN_07253298(&stack0x00000090,0);
    }
    lVar8 = *(long *)(*(long *)(unaff_x21 + 0x38) + 0x40);
    if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_0367c9fc(lVar8);
    }
    lVar9 = *unaff_x22;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == lVar8) {
          puVar3 = (undefined8 *)(lVar9 + (long)(*piVar11 + 3) * 0x10 + 0x138);
          goto LAB_03e3c0d4;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar3 = (undefined8 *)FUN_0367cd30();
LAB_03e3c0d4:
    (*(code *)*puVar3)();
  }
  else {
    FUN_072533bc(&stack0x00000150,0);
    lVar8 = *(long *)(*(long *)(unaff_x21 + 0x38) + 0x38);
    if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_0367c9fc(lVar8);
    }
    lVar9 = *unaff_x23;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == lVar8) {
          puVar3 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_03e3bb14;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar3 = (undefined8 *)FUN_0367cd30();
LAB_03e3bb14:
    uVar10 = (*(code *)*puVar3)();
    if ((uVar10 & 1) == 0) {
      *(undefined4 *)(unaff_x19 + 0xb4) = 4;
    }
    else {
      lVar8 = thunk_FUN_0367fd24(in_stack_00000178,DAT_07b68d08);
      uVar7 = DAT_07b68d08;
      if (lVar8 != 0) {
        uVar4 = thunk_FUN_0367fd24(*(undefined8 *)(unaff_x19 + 0xa8),DAT_07b68d08);
        FUN_0315f2c4(4,uVar7,lVar8,uVar4);
        FUN_04930ea8();
      }
      plVar5 = in_stack_00000178;
      if (in_stack_00000178 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03642c18();
      }
      lVar8 = *(long *)(*(long *)(unaff_x21 + 0x38) + 0x28);
      if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_0367c9fc(lVar8);
      }
      lVar9 = *plVar5;
      uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == lVar8) {
            puVar3 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_03e3bd54;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar3 = (undefined8 *)FUN_0367cd30(plVar5,lVar8,0);
LAB_03e3bd54:
      (*(code *)*puVar3)(plVar5);
    }
  }
  return;
}


