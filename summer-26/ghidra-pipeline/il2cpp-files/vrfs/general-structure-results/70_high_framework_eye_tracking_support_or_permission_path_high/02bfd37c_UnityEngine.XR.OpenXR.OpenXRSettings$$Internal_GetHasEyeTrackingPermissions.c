/*
FUNCTION_NAME: UnityEngine.XR.OpenXR.OpenXRSettings$$Internal_GetHasEyeTrackingPermissions
ENTRY_POINT: 02bfd37c
PROGRAM: vrfs-libil2cpp.so
SCORE: 71
LABEL: framework_eye_tracking_support_or_permission_path_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_eye_tracking_support_or_permission_path
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: permission_setup;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;attempted_use
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_8;validity_or_gating_hits_19;attempted_eye_tracking_permission_or_feature_enable;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_permission_setup
*/


/* WARNING: Removing unreachable block (ram,0x02bfd9c0) */
/* WARNING: Removing unreachable block (ram,0x02bfd870) */
/* WARNING: Removing unreachable block (ram,0x02bfd884) */
/* WARNING: Removing unreachable block (ram,0x02bfd9c8) */
/* WARNING: Removing unreachable block (ram,0x02bfd8f8) */

void UnityEngine_XR_OpenXR_OpenXRSettings__Internal_GetHasEyeTrackingPermissions(void)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  undefined8 *puVar10;
  int *piVar11;
  uint *unaff_x19;
  long unaff_x20;
  long lVar12;
  uint *puVar13;
  undefined8 uVar14;
  uint *puVar15;
  ulong uVar16;
  uint uVar17;
  long *in_stack_00000010;
  ulong in_stack_00000018;
  undefined8 in_stack_00000028;
  
  thunk_FUN_0159f088(PTR_DAT_06d8b348);
  thunk_FUN_0159f088(PTR_DAT_06e636c0);
  thunk_FUN_0159f088(PTR_DAT_06e50908);
  *(undefined1 *)(unaff_x20 + 0xae3) = 1;
  puVar5 = PTR_DAT_06e636c0;
  puVar4 = PTR_DAT_06e52150;
  puVar3 = PTR_DAT_06e50908;
  puVar2 = PTR_DAT_06dd2198;
  in_stack_00000028 = 0;
  in_stack_00000010 = (long *)0x0;
  in_stack_00000018 = 0;
  uVar17 = *unaff_x19;
  lVar12 = *(long *)(unaff_x19 + 8);
  if (uVar17 < 2) {
    if (uVar17 == 0) {
      in_stack_00000028 = *(undefined8 *)(unaff_x19 + 0x14);
      uVar17 = 0xffffffff;
      unaff_x19[0x14] = 0;
      unaff_x19[0x15] = 0;
      *unaff_x19 = 0xffffffff;
      goto LAB_02bfd540;
    }
    _in_stack_00000010 = *(undefined1 (*) [16])(unaff_x19 + 0x16);
    uVar17 = 0xffffffff;
    unaff_x19[0x16] = 0;
    unaff_x19[0x17] = 0;
    unaff_x19[0x18] = 0;
    unaff_x19[0x19] = 0;
    *unaff_x19 = 0xffffffff;
  }
  else {
    if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0160eeb4();
    }
    uVar14 = *(undefined8 *)(lVar12 + 0x18);
    lVar7 = thunk_FUN_015d056c(*(undefined8 *)PTR_DAT_06e50908);
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0160eeb4();
    }
    FUN_03618cac(lVar7,uVar14,0);
    puVar15 = unaff_x19 + 10;
    *(long *)puVar15 = lVar7;
    thunk_FUN_01656ef8(puVar15,lVar7);
    lVar7 = thunk_FUN_015d056c(*(undefined8 *)puVar3);
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0160eeb4();
    }
    FUN_03618b38(lVar7,0);
    puVar13 = unaff_x19 + 0xc;
    *(long *)puVar13 = lVar7;
    thunk_FUN_01656ef8(puVar13,lVar7);
    uVar14 = *(undefined8 *)puVar15;
    lVar7 = thunk_FUN_015d056c(*(undefined8 *)PTR_DAT_06dfdc68);
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0160eeb4();
    }
    FUN_0470bd5c(lVar7,uVar14,0,0);
    *(long *)(unaff_x19 + 0xe) = lVar7;
    thunk_FUN_01656ef8(unaff_x19 + 0xe,lVar7);
    puVar15 = unaff_x19 + 0x10;
    puVar15[0] = 0;
    puVar15[1] = 0;
    thunk_FUN_01656ef8(puVar15,0);
    unaff_x19[0x12] = 0;
    if (*(long *)(unaff_x19 + 0xe) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0160eeb4();
    }
    lVar7 = FUN_0438883c(*(long *)(unaff_x19 + 0xe),*(undefined8 *)puVar13,0);
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0160eeb4();
    }
    in_stack_00000028 = FUN_036985b8(lVar7,0);
    uVar8 = FUN_02df6bb4(&stack0x00000028,0);
    if ((uVar8 & 1) == 0) {
      *unaff_x19 = 0;
      *(undefined8 *)(unaff_x19 + 0x14) = in_stack_00000028;
      thunk_FUN_01656ef8(unaff_x19 + 0x14,0);
      FUN_029dd11c(unaff_x19 + 2,&stack0x00000028);
      return;
    }
LAB_02bfd540:
    FUN_02df6c84(&stack0x00000028,0);
    plVar9 = *(long **)(unaff_x19 + 0xc);
    if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0160eeb4();
    }
    uVar14 = (**(code **)(*plVar9 + 0x408))(plVar9,*(undefined8 *)(*plVar9 + 0x410));
    if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0160eeb4();
    }
    *(undefined8 *)(lVar12 + 0x20) = uVar14;
    thunk_FUN_01656ef8();
    plVar9 = *(long **)(unaff_x19 + 0xe);
    if (plVar9 == (long *)0x0) goto LAB_02bfd780;
    lVar12 = *plVar9;
    uVar8 = (ulong)*(ushort *)(lVar12 + 0x12a);
    if (uVar8 != 0) {
      piVar11 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_06d8b348) {
          puVar10 = (undefined8 *)(lVar12 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_02bfd5d4;
        }
        uVar8 = uVar8 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar8 != 0);
    }
    puVar10 = (undefined8 *)FUN_015c2a80(plVar9,*(long *)PTR_DAT_06d8b348,0);
LAB_02bfd5d4:
    (*(code *)*puVar10)(plVar9,puVar10[1]);
    _in_stack_00000010 = FUN_036991cc();
    if (DAT_0722a6b5 == '\0') {
      thunk_FUN_0159f088(PTR_DAT_06e52150);
      thunk_FUN_0159f088(PTR_DAT_06dd2198);
      DAT_0722a6b5 = '\x01';
    }
    if (in_stack_00000010 != (long *)0x0) {
      plVar9 = in_stack_00000010;
      lVar12 = *in_stack_00000010;
      lVar7 = *(long *)puVar2;
      bVar1 = *(byte *)(lVar7 + 300);
      if ((*(byte *)(lVar12 + 300) < bVar1) ||
         (*(long *)(*(long *)(lVar12 + 200) + (ulong)bVar1 * 8 + -8) != lVar7)) {
        uVar16 = in_stack_00000018 & 0xffff;
        uVar8 = (ulong)*(ushort *)(lVar12 + 0x12a);
        lVar7 = *(long *)puVar4;
        if (uVar8 != 0) {
          piVar11 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == lVar7) {
              puVar10 = (undefined8 *)(lVar12 + (long)*piVar11 * 0x10 + 0x138);
              goto LAB_02bfd6ac;
            }
            uVar8 = uVar8 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar8 != 0);
        }
        puVar10 = (undefined8 *)FUN_015c2a80(in_stack_00000010,lVar7,0);
LAB_02bfd6ac:
        iVar6 = (*(code *)*puVar10)(plVar9,uVar16,puVar10[1]);
        if (iVar6 == 0) goto LAB_02bfd96c;
      }
      else {
        uVar8 = FUN_036982e0(in_stack_00000010,0);
        if ((uVar8 & 1) == 0) {
LAB_02bfd96c:
          *unaff_x19 = 1;
          *(undefined1 (*) [16])(unaff_x19 + 0x16) = _in_stack_00000010;
          thunk_FUN_01656ef8((undefined1 (*) [16])(unaff_x19 + 0x16),0);
          FUN_029dd140(unaff_x19 + 2,&stack0x00000010);
          return;
        }
      }
    }
  }
  if (DAT_0722a6b6 == '\0') {
    thunk_FUN_0159f088(PTR_DAT_06e52150);
    thunk_FUN_0159f088(PTR_DAT_06dd2198);
    DAT_0722a6b6 = '\x01';
  }
  plVar9 = in_stack_00000010;
  if (in_stack_00000010 != (long *)0x0) {
    lVar12 = *in_stack_00000010;
    lVar7 = *(long *)puVar2;
    bVar1 = *(byte *)(lVar7 + 300);
    if ((*(byte *)(lVar12 + 300) < bVar1) ||
       (*(long *)(*(long *)(lVar12 + 200) + (ulong)bVar1 * 8 + -8) != lVar7)) {
      uVar16 = in_stack_00000018 & 0xffff;
      uVar8 = (ulong)*(ushort *)(lVar12 + 0x12a);
      lVar7 = *(long *)puVar4;
      if (uVar8 != 0) {
        piVar11 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == lVar7) {
            puVar10 = (undefined8 *)(lVar12 + (long)(*piVar11 + 2) * 0x10 + 0x138);
            goto LAB_02bfd770;
          }
          uVar8 = uVar8 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar8 != 0);
      }
      puVar10 = (undefined8 *)FUN_015c2a80(in_stack_00000010,lVar7,2);
LAB_02bfd770:
      (*(code *)*puVar10)(plVar9,uVar16,puVar10[1]);
    }
    else {
      FUN_02df6c8c(in_stack_00000010,0);
    }
  }
LAB_02bfd780:
  puVar15 = unaff_x19 + 0x10;
  plVar9 = *(long **)puVar15;
  if (plVar9 != (long *)0x0) {
    bVar1 = *(byte *)(*(long *)PTR_DAT_06e35b40 + 300);
    if ((bVar1 <= *(byte *)(*plVar9 + 300)) &&
       (*(long *)(*(long *)(*plVar9 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)PTR_DAT_06e35b40)) {
      lVar12 = FUN_02df4dd8(plVar9,0);
      if (lVar12 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02df4ea4(lVar12,0);
      }
                    /* WARNING: Subroutine does not return */
      FUN_0160eeb4();
    }
    uVar14 = thunk_FUN_0159f088(PTR_DAT_06e165a0);
                    /* WARNING: Subroutine does not return */
    FUN_0160ee7c(plVar9,uVar14);
  }
  puVar15[0] = 0;
  puVar15[1] = 0;
  thunk_FUN_01656ef8(puVar15,0);
  if (((int)uVar17 < 0) && (plVar9 = *(long **)(unaff_x19 + 0xc), plVar9 != (long *)0x0)) {
    lVar7 = *plVar9;
    lVar12 = *(long *)puVar5;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12a);
    if (uVar8 != 0) {
      piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == lVar12) {
          puVar10 = (undefined8 *)(lVar7 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_02bfd858;
        }
        uVar8 = uVar8 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar8 != 0);
    }
    puVar10 = (undefined8 *)FUN_015c2a80(plVar9,lVar12,0);
LAB_02bfd858:
    (*(code *)*puVar10)(plVar9,puVar10[1]);
  }
  if (((int)uVar17 < 0) && (plVar9 = *(long **)(unaff_x19 + 10), plVar9 != (long *)0x0)) {
    lVar7 = *plVar9;
    lVar12 = *(long *)puVar5;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12a);
    if (uVar8 != 0) {
      piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == lVar12) {
          puVar10 = (undefined8 *)(lVar7 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_02bfd8e0;
        }
        uVar8 = uVar8 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar8 != 0);
    }
    puVar10 = (undefined8 *)FUN_015c2a80(plVar9,lVar12,0);
LAB_02bfd8e0:
    (*(code *)*puVar10)(plVar9,puVar10[1]);
  }
  puVar15 = unaff_x19 + 10;
  puVar15[0] = 0;
  puVar15[1] = 0;
  thunk_FUN_01656ef8(puVar15,0);
  puVar15 = unaff_x19 + 0xc;
  puVar15[0] = 0;
  puVar15[1] = 0;
  thunk_FUN_01656ef8(puVar15,0);
  puVar15 = unaff_x19 + 0xe;
  puVar15[0] = 0;
  puVar15[1] = 0;
  thunk_FUN_01656ef8(puVar15,0);
  *unaff_x19 = 0xfffffffe;
  FUN_02df55e4(unaff_x19 + 2,0);
  return;
}


