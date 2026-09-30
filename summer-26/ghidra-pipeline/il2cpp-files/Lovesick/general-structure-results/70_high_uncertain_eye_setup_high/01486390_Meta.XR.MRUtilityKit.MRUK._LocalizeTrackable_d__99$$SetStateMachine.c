/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUK.<LocalizeTrackable>d__99$$SetStateMachine
ENTRY_POINT: 01486390
PROGRAM: Lovesick-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_21;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_MRUK_<LocalizeTrackable>d__99__SetStateMachine(float param_1)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  int *piVar10;
  undefined4 uVar11;
  long *unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long *unaff_x22;
  ulong unaff_x23;
  ulong unaff_x24;
  long unaff_x25;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  
LAB_014866cc:
  do {
    *(float *)(unaff_x25 + 0x28) = param_1;
    lVar7 = *(long *)(unaff_x20 + 0x138);
    if (lVar7 == 0) goto LAB_014876cc;
    if (*(uint *)(lVar7 + 0x18) <= unaff_x23) {
LAB_014876c8:
                    /* WARNING: Subroutine does not return */
      FUN_00da5194();
    }
    lVar6 = *unaff_x19;
    lVar7 = *(long *)(lVar7 + unaff_x23 * 8 + 0x20);
    uVar8 = (ulong)*(ushort *)(lVar6 + 0x12a);
    if (uVar8 != 0) {
      piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *unaff_x21) {
          puVar4 = (undefined8 *)(lVar6 + (long)(*piVar10 + 0xe) * 0x10 + 0x138);
          goto LAB_0148673c;
        }
        uVar8 = uVar8 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar8 != 0);
    }
    puVar4 = (undefined8 *)FUN_00d59724();
LAB_0148673c:
    uVar2 = (*(code *)*puVar4)();
    if (lVar7 == 0) goto LAB_014876cc;
    if (*(uint *)(lVar7 + 0x18) <= unaff_x24) goto LAB_014876c8;
    *(undefined4 *)(lVar7 + unaff_x24 * 4 + 0x20) = uVar2;
    lVar7 = *(long *)(unaff_x20 + 0x140);
    if (lVar7 == 0) goto LAB_014876cc;
    if (*(uint *)(lVar7 + 0x18) <= unaff_x23) goto LAB_014876c8;
    lVar6 = *unaff_x19;
    lVar7 = *(long *)(lVar7 + unaff_x23 * 8 + 0x20);
    uVar8 = (ulong)*(ushort *)(lVar6 + 0x12a);
    if (uVar8 != 0) {
      piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *unaff_x21) {
          puVar4 = (undefined8 *)(lVar6 + (long)(*piVar10 + 0xe) * 0x10 + 0x138);
          goto LAB_014867d0;
        }
        uVar8 = uVar8 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar8 != 0);
    }
    puVar4 = (undefined8 *)FUN_00d59724();
LAB_014867d0:
    iVar3 = (*(code *)*puVar4)();
    if (lVar7 == 0) goto LAB_014876cc;
    if (*(uint *)(lVar7 + 0x18) <= unaff_x24) goto LAB_014876c8;
    *(float *)(lVar7 + unaff_x24 * 4 + 0x20) = ((float)iVar3 + unaff_s8) * unaff_s9;
    lVar7 = *(long *)(unaff_x20 + 0x148);
    if (lVar7 == 0) goto LAB_014876cc;
    if (*(uint *)(lVar7 + 0x18) <= unaff_x23) goto LAB_014876c8;
    lVar6 = *unaff_x19;
    lVar7 = *(long *)(lVar7 + unaff_x23 * 8 + 0x20);
    uVar8 = (ulong)*(ushort *)(lVar6 + 0x12a);
    if (uVar8 != 0) {
      piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *unaff_x21) {
          puVar4 = (undefined8 *)(lVar6 + (long)(*piVar10 + 0xe) * 0x10 + 0x138);
          goto LAB_01486870;
        }
        uVar8 = uVar8 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar8 != 0);
    }
    puVar4 = (undefined8 *)FUN_00d59724();
LAB_01486870:
    uVar2 = (*(code *)*puVar4)();
    if (lVar7 == 0) goto LAB_014876cc;
    if (*(uint *)(lVar7 + 0x18) <= unaff_x24) goto LAB_014876c8;
    *(undefined4 *)(lVar7 + unaff_x24 * 4 + 0x20) = uVar2;
    unaff_x24 = unaff_x24 + 1;
    if ((long)*(int *)(unaff_x20 + 200) <= (long)unaff_x24) {
      do {
        unaff_x23 = unaff_x23 + 1;
        if (unaff_x23 == 2) {
          return;
        }
      } while (*(int *)(unaff_x20 + 200) < 1);
      unaff_x24 = 0;
    }
    lVar7 = *(long *)(unaff_x20 + 0xe0);
    if (lVar7 == 0) goto LAB_014876cc;
    if (*(uint *)(lVar7 + 0x18) <= unaff_x23) goto LAB_014876c8;
    lVar6 = *unaff_x19;
    lVar7 = *(long *)(lVar7 + unaff_x23 * 8 + 0x20);
    uVar8 = (ulong)*(ushort *)(lVar6 + 0x12a);
    if (uVar8 != 0) {
      piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *unaff_x21) {
          puVar4 = (undefined8 *)(lVar6 + (long)(*piVar10 + 0xe) * 0x10 + 0x138);
          goto LAB_01485a70;
        }
        uVar8 = uVar8 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar8 != 0);
    }
    puVar4 = (undefined8 *)FUN_00d59724();
LAB_01485a70:
    uVar2 = (*(code *)*puVar4)();
    if (lVar7 == 0) goto LAB_014876cc;
    if (*(uint *)(lVar7 + 0x18) <= unaff_x24) goto LAB_014876c8;
    *(undefined4 *)(lVar7 + unaff_x24 * 4 + 0x20) = uVar2;
    lVar7 = *(long *)(unaff_x20 + 0xe8);
    if (lVar7 == 0) goto LAB_014876cc;
    if (*(uint *)(lVar7 + 0x18) <= unaff_x23) goto LAB_014876c8;
    lVar6 = *unaff_x19;
    lVar7 = *(long *)(lVar7 + unaff_x23 * 8 + 0x20);
    uVar8 = (ulong)*(ushort *)(lVar6 + 0x12a);
    if (uVar8 != 0) {
      piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *unaff_x21) {
          puVar4 = (undefined8 *)(lVar6 + (long)(*piVar10 + 0xe) * 0x10 + 0x138);
          goto LAB_01485b04;
        }
        uVar8 = uVar8 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar8 != 0);
    }
    puVar4 = (undefined8 *)FUN_00d59724();
LAB_01485b04:
    uVar2 = (*(code *)*puVar4)();
    if (lVar7 == 0) goto LAB_014876cc;
    if (*(uint *)(lVar7 + 0x18) <= unaff_x24) goto LAB_014876c8;
    *(undefined4 *)(lVar7 + unaff_x24 * 4 + 0x20) = uVar2;
    lVar7 = *(long *)(unaff_x20 + 0xf0);
    if (lVar7 == 0) goto LAB_014876cc;
    if (*(uint *)(lVar7 + 0x18) <= unaff_x23) goto LAB_014876c8;
    lVar6 = *unaff_x22;
    lVar7 = *(long *)(lVar7 + unaff_x23 * 8 + 0x20);
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      lVar6 = *unaff_x22;
    }
    lVar5 = *unaff_x19;
    lVar6 = **(long **)(lVar6 + 0xb8);
    uVar8 = (ulong)*(ushort *)(lVar5 + 0x12a);
    if (uVar8 != 0) {
      piVar10 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *unaff_x21) {
          puVar4 = (undefined8 *)(lVar5 + (long)(*piVar10 + 0xe) * 0x10 + 0x138);
          goto LAB_01485bb4;
        }
        uVar8 = uVar8 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar8 != 0);
    }
    puVar4 = (undefined8 *)FUN_00d59724();
LAB_01485bb4:
    uVar1 = (*(code *)*puVar4)();
    if (lVar6 == 0) goto LAB_014876cc;
    if (*(uint *)(lVar6 + 0x18) <= uVar1) goto LAB_014876c8;
    if (lVar7 == 0) goto LAB_014876cc;
    if (*(uint *)(lVar7 + 0x18) <= unaff_x24) goto LAB_014876c8;
    *(undefined4 *)(lVar7 + unaff_x24 * 4 + 0x20) =
         *(undefined4 *)(lVar6 + (long)(int)uVar1 * 4 + 0x20);
    lVar7 = *(long *)(unaff_x20 + 0xf8);
    if (lVar7 == 0) goto LAB_014876cc;
    if (*(uint *)(lVar7 + 0x18) <= unaff_x23) goto LAB_014876c8;
    lVar6 = *unaff_x19;
    lVar7 = *(long *)(lVar7 + unaff_x23 * 8 + 0x20);
    uVar8 = (ulong)*(ushort *)(lVar6 + 0x12a);
    if (uVar8 != 0) {
      piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *unaff_x21) {
          puVar4 = (undefined8 *)(lVar6 + (long)(*piVar10 + 0xe) * 0x10 + 0x138);
          goto LAB_01485c60;
        }
        uVar8 = uVar8 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar8 != 0);
    }
    puVar4 = (undefined8 *)FUN_00d59724();
LAB_01485c60:
    uVar2 = (*(code *)*puVar4)();
    if (lVar7 == 0) goto LAB_014876cc;
    if (*(uint *)(lVar7 + 0x18) <= unaff_x24) goto LAB_014876c8;
    *(undefined4 *)(lVar7 + unaff_x24 * 4 + 0x20) = uVar2;
    lVar7 = *(long *)(unaff_x20 + 0x100);
    if (lVar7 == 0) goto LAB_014876cc;
    if (*(uint *)(lVar7 + 0x18) <= unaff_x23) goto LAB_014876c8;
    lVar6 = *unaff_x19;
    lVar7 = *(long *)(lVar7 + unaff_x23 * 8 + 0x20);
    uVar8 = (ulong)*(ushort *)(lVar6 + 0x12a);
    if (uVar8 != 0) {
      piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *unaff_x21) {
          puVar4 = (undefined8 *)(lVar6 + (long)(*piVar10 + 0xe) * 0x10 + 0x138);
          goto LAB_01485cf4;
        }
        uVar8 = uVar8 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar8 != 0);
    }
    puVar4 = (undefined8 *)FUN_00d59724();
LAB_01485cf4:
    iVar3 = (*(code *)*puVar4)();
    if (lVar7 == 0) goto LAB_014876cc;
    if (*(uint *)(lVar7 + 0x18) <= unaff_x24) goto LAB_014876c8;
    *(bool *)(lVar7 + unaff_x24 + 0x20) = iVar3 == 1;
    lVar7 = *(long *)(unaff_x20 + 0x100);
    if (lVar7 == 0) goto LAB_014876cc;
    if (*(uint *)(lVar7 + 0x18) <= unaff_x23) goto LAB_014876c8;
    lVar7 = *(long *)(lVar7 + unaff_x23 * 8 + 0x20);
    if (lVar7 == 0) goto LAB_014876cc;
    if (*(uint *)(lVar7 + 0x18) <= unaff_x24) goto LAB_014876c8;
    if (*(char *)(lVar7 + unaff_x24 + 0x20) != '\0') {
      lVar7 = *(long *)(unaff_x20 + 0x110);
      if (lVar7 == 0) goto LAB_014876cc;
      if (*(uint *)(lVar7 + 0x18) <= unaff_x23) goto LAB_014876c8;
      lVar6 = *unaff_x19;
      lVar7 = *(long *)(lVar7 + unaff_x23 * 8 + 0x20);
      uVar8 = (ulong)*(ushort *)(lVar6 + 0x12a);
      if (uVar8 != 0) {
        piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *unaff_x21) {
            puVar4 = (undefined8 *)(lVar6 + (long)(*piVar10 + 0xe) * 0x10 + 0x138);
            goto LAB_01485e3c;
          }
          uVar8 = uVar8 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar8 != 0);
      }
      puVar4 = (undefined8 *)FUN_00d59724();
LAB_01485e3c:
      uVar2 = (*(code *)*puVar4)();
      if (lVar7 == 0) goto LAB_014876cc;
      if (*(uint *)(lVar7 + 0x18) <= unaff_x24) goto LAB_014876c8;
      *(undefined4 *)(lVar7 + unaff_x24 * 4 + 0x20) = uVar2;
      lVar7 = *(long *)(unaff_x20 + 0x108);
      if (lVar7 == 0) goto LAB_014876cc;
      if (*(uint *)(lVar7 + 0x18) <= unaff_x23) goto LAB_014876c8;
      lVar6 = *unaff_x19;
      lVar7 = *(long *)(lVar7 + unaff_x23 * 8 + 0x20);
      uVar8 = (ulong)*(ushort *)(lVar6 + 0x12a);
      if (uVar8 != 0) {
        piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *unaff_x21) {
            puVar4 = (undefined8 *)(lVar6 + (long)(*piVar10 + 0xe) * 0x10 + 0x138);
            goto LAB_01485ed0;
          }
          uVar8 = uVar8 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar8 != 0);
      }
      puVar4 = (undefined8 *)FUN_00d59724();
LAB_01485ed0:
      iVar3 = (*(code *)*puVar4)();
      if (lVar7 == 0) goto LAB_014876cc;
      if (*(uint *)(lVar7 + 0x18) <= unaff_x24) goto LAB_014876c8;
      *(bool *)(lVar7 + unaff_x24 + 0x20) = iVar3 == 1;
      lVar7 = *(long *)(unaff_x20 + 0x118);
      if (lVar7 == 0) goto LAB_014876cc;
      if (*(uint *)(lVar7 + 0x18) <= unaff_x23) goto LAB_014876c8;
      lVar7 = *(long *)(lVar7 + unaff_x23 * 8 + 0x20);
      if (lVar7 == 0) goto LAB_014876cc;
      if (*(uint *)(lVar7 + 0x18) <= unaff_x24) goto LAB_014876c8;
      lVar6 = *unaff_x19;
      lVar7 = *(long *)(lVar7 + unaff_x24 * 8 + 0x20);
      uVar8 = (ulong)*(ushort *)(lVar6 + 0x12a);
      if (uVar8 != 0) {
        piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *unaff_x21) {
            puVar4 = (undefined8 *)(lVar6 + (long)(*piVar10 + 0xe) * 0x10 + 0x138);
            goto LAB_01485f84;
          }
          uVar8 = uVar8 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar8 != 0);
      }
      puVar4 = (undefined8 *)FUN_00d59724();
LAB_01485f84:
      uVar2 = (*(code *)*puVar4)();
      if (lVar7 == 0) goto LAB_014876cc;
      if (*(int *)(lVar7 + 0x18) == 0) goto LAB_014876c8;
      *(undefined4 *)(lVar7 + 0x20) = uVar2;
      lVar7 = *(long *)(unaff_x20 + 0x118);
      if (lVar7 == 0) goto LAB_014876cc;
      if (*(uint *)(lVar7 + 0x18) <= unaff_x23) goto LAB_014876c8;
      lVar7 = *(long *)(lVar7 + unaff_x23 * 8 + 0x20);
      if (lVar7 == 0) goto LAB_014876cc;
      if (*(uint *)(lVar7 + 0x18) <= unaff_x24) goto LAB_014876c8;
      lVar6 = *unaff_x19;
      lVar7 = *(long *)(lVar7 + unaff_x24 * 8 + 0x20);
      uVar8 = (ulong)*(ushort *)(lVar6 + 0x12a);
      if (uVar8 != 0) {
        piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *unaff_x21) {
            puVar4 = (undefined8 *)(lVar6 + (long)(*piVar10 + 0xe) * 0x10 + 0x138);
            goto LAB_01486028;
          }
          uVar8 = uVar8 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar8 != 0);
      }
      puVar4 = (undefined8 *)FUN_00d59724();
LAB_01486028:
      uVar2 = (*(code *)*puVar4)();
      if (lVar7 == 0) goto LAB_014876cc;
      if (*(uint *)(lVar7 + 0x18) < 2) goto LAB_014876c8;
      *(undefined4 *)(lVar7 + 0x24) = uVar2;
      lVar7 = *(long *)(unaff_x20 + 0x118);
      if (lVar7 == 0) goto LAB_014876cc;
      if (*(uint *)(lVar7 + 0x18) <= unaff_x23) goto LAB_014876c8;
      lVar7 = *(long *)(lVar7 + unaff_x23 * 8 + 0x20);
      if (lVar7 == 0) goto LAB_014876cc;
      if (*(uint *)(lVar7 + 0x18) <= unaff_x24) goto LAB_014876c8;
      lVar7 = *(long *)(lVar7 + unaff_x24 * 8 + 0x20);
      if (lVar7 == 0) goto LAB_014876cc;
      if (*(uint *)(lVar7 + 0x18) < 3) goto LAB_014876c8;
      *(undefined4 *)(lVar7 + 0x28) = 0;
      lVar7 = *(long *)(unaff_x20 + 0x110);
      if (lVar7 == 0) goto LAB_014876cc;
      if (*(uint *)(lVar7 + 0x18) <= unaff_x23) goto LAB_014876c8;
      lVar7 = *(long *)(lVar7 + unaff_x23 * 8 + 0x20);
      if (lVar7 == 0) goto LAB_014876cc;
      if (*(uint *)(lVar7 + 0x18) <= unaff_x24) goto LAB_014876c8;
      if (*(int *)(lVar7 + unaff_x24 * 4 + 0x20) == 2) {
        lVar7 = *(long *)(unaff_x20 + 0x108);
        if (lVar7 == 0) goto LAB_014876cc;
        if (*(uint *)(lVar7 + 0x18) <= unaff_x23) goto LAB_014876c8;
        lVar7 = *(long *)(lVar7 + unaff_x23 * 8 + 0x20);
        if (lVar7 == 0) goto LAB_014876cc;
        if (*(uint *)(lVar7 + 0x18) <= unaff_x24) goto LAB_014876c8;
        if (*(char *)(lVar7 + unaff_x24 + 0x20) != '\0') goto LAB_01486108;
        lVar7 = *(long *)(unaff_x20 + 0x128);
        if (lVar7 == 0) goto LAB_014876cc;
        uVar8 = (ulong)*(uint *)(lVar7 + 0x18);
        if (uVar8 <= unaff_x23) goto LAB_014876c8;
        lVar7 = *(long *)(lVar7 + unaff_x23 * 8 + 0x20);
        if (lVar7 == 0) goto LAB_014876cc;
        uVar9 = (ulong)*(uint *)(lVar7 + 0x18);
        if (uVar9 <= unaff_x24) goto LAB_014876c8;
        uVar2 = 0xc;
        uVar11 = 8;
      }
      else {
LAB_01486108:
        lVar7 = *(long *)(unaff_x20 + 0x128);
        if (lVar7 == 0) goto LAB_014876cc;
        uVar8 = (ulong)*(uint *)(lVar7 + 0x18);
        if (uVar8 <= unaff_x23) goto LAB_014876c8;
        lVar7 = *(long *)(lVar7 + unaff_x23 * 8 + 0x20);
        if (lVar7 == 0) goto LAB_014876cc;
        uVar9 = (ulong)*(uint *)(lVar7 + 0x18);
        if (uVar9 <= unaff_x24) goto LAB_014876c8;
        uVar2 = 0xd;
        uVar11 = 7;
      }
      *(undefined4 *)(lVar7 + unaff_x24 * 4 + 0x20) = uVar11;
      lVar7 = *(long *)(unaff_x20 + 0x130);
      if (lVar7 != 0) {
        if (((*(uint *)(lVar7 + 0x18) <= unaff_x23) || (uVar8 <= unaff_x23)) || (uVar9 <= unaff_x24)
           ) goto LAB_014876c8;
        lVar7 = *(long *)(lVar7 + unaff_x23 * 8 + 0x20);
        if (lVar7 != 0) {
          if (*(uint *)(lVar7 + 0x18) <= unaff_x24) goto LAB_014876c8;
          *(undefined4 *)(lVar7 + unaff_x24 * 4 + 0x20) = uVar2;
          lVar7 = *(long *)(unaff_x20 + 0x120);
          if (lVar7 != 0) {
            if (*(uint *)(lVar7 + 0x18) <= unaff_x23) goto LAB_014876c8;
            lVar7 = *(long *)(lVar7 + unaff_x23 * 8 + 0x20);
            if (lVar7 != 0) {
              if (*(uint *)(lVar7 + 0x18) <= unaff_x24) goto LAB_014876c8;
              lVar6 = *unaff_x19;
              lVar7 = *(long *)(lVar7 + unaff_x24 * 8 + 0x20);
              uVar8 = (ulong)*(ushort *)(lVar6 + 0x12a);
              if (uVar8 != 0) {
                piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar10 + -2) == *unaff_x21) {
                    puVar4 = (undefined8 *)(lVar6 + (long)(*piVar10 + 0xe) * 0x10 + 0x138);
                    goto LAB_0148620c;
                  }
                  uVar8 = uVar8 - 1;
                  piVar10 = piVar10 + 4;
                } while (uVar8 != 0);
              }
              puVar4 = (undefined8 *)FUN_00d59724();
LAB_0148620c:
              iVar3 = (*(code *)*puVar4)();
              if (lVar7 != 0) {
                if (*(int *)(lVar7 + 0x18) == 0) goto LAB_014876c8;
                *(float *)(lVar7 + 0x20) = (float)iVar3 * unaff_s10;
                lVar7 = *(long *)(unaff_x20 + 0x120);
                if (lVar7 != 0) {
                  if (*(uint *)(lVar7 + 0x18) <= unaff_x23) goto LAB_014876c8;
                  lVar7 = *(long *)(lVar7 + unaff_x23 * 8 + 0x20);
                  if (lVar7 != 0) {
                    if (*(uint *)(lVar7 + 0x18) <= unaff_x24) goto LAB_014876c8;
                    lVar6 = *unaff_x19;
                    lVar7 = *(long *)(lVar7 + unaff_x24 * 8 + 0x20);
                    uVar8 = (ulong)*(ushort *)(lVar6 + 0x12a);
                    if (uVar8 != 0) {
                      piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar10 + -2) == *unaff_x21) {
                          puVar4 = (undefined8 *)(lVar6 + (long)(*piVar10 + 0xe) * 0x10 + 0x138);
                          goto LAB_014862b8;
                        }
                        uVar8 = uVar8 - 1;
                        piVar10 = piVar10 + 4;
                      } while (uVar8 != 0);
                    }
                    puVar4 = (undefined8 *)FUN_00d59724();
LAB_014862b8:
                    iVar3 = (*(code *)*puVar4)();
                    if (lVar7 != 0) {
                      if (*(uint *)(lVar7 + 0x18) < 2) goto LAB_014876c8;
                      *(float *)(lVar7 + 0x24) = (float)iVar3 * unaff_s10;
                      lVar7 = *(long *)(unaff_x20 + 0x120);
                      if (lVar7 != 0) {
                        if (*(uint *)(lVar7 + 0x18) <= unaff_x23) goto LAB_014876c8;
                        lVar7 = *(long *)(lVar7 + unaff_x23 * 8 + 0x20);
                        if (lVar7 != 0) {
                          if (*(uint *)(lVar7 + 0x18) <= unaff_x24) goto LAB_014876c8;
                          lVar6 = *unaff_x19;
                          unaff_x25 = *(long *)(lVar7 + unaff_x24 * 8 + 0x20);
                          uVar8 = (ulong)*(ushort *)(lVar6 + 0x12a);
                          if (uVar8 != 0) {
                            piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
                            do {
                              if (*(long *)(piVar10 + -2) == *unaff_x21) {
                                puVar4 = (undefined8 *)
                                         (lVar6 + (long)(*piVar10 + 0xe) * 0x10 + 0x138);
                                goto LAB_01486368;
                              }
                              uVar8 = uVar8 - 1;
                              piVar10 = piVar10 + 4;
                            } while (uVar8 != 0);
                          }
                          puVar4 = (undefined8 *)FUN_00d59724();
LAB_01486368:
                          iVar3 = (*(code *)*puVar4)();
                          if (unaff_x25 != 0) {
                            if (*(uint *)(unaff_x25 + 0x18) < 3) goto LAB_014876c8;
                            param_1 = (float)iVar3 * unaff_s10;
                            goto LAB_014866cc;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
LAB_014876cc:
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    lVar7 = *(long *)(unaff_x20 + 0x118);
    if (lVar7 == 0) goto LAB_014876cc;
    if (*(uint *)(lVar7 + 0x18) <= unaff_x23) goto LAB_014876c8;
    lVar7 = *(long *)(lVar7 + unaff_x23 * 8 + 0x20);
    if (lVar7 == 0) goto LAB_014876cc;
    if (*(uint *)(lVar7 + 0x18) <= unaff_x24) goto LAB_014876c8;
    lVar6 = *unaff_x19;
    lVar7 = *(long *)(lVar7 + unaff_x24 * 8 + 0x20);
    uVar8 = (ulong)*(ushort *)(lVar6 + 0x12a);
    if (uVar8 != 0) {
      piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *unaff_x21) {
          puVar4 = (undefined8 *)(lVar6 + (long)(*piVar10 + 0xe) * 0x10 + 0x138);
          goto LAB_014863a4;
        }
        uVar8 = uVar8 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar8 != 0);
    }
    puVar4 = (undefined8 *)FUN_00d59724();
LAB_014863a4:
    uVar2 = (*(code *)*puVar4)();
    if (lVar7 == 0) goto LAB_014876cc;
    if (*(int *)(lVar7 + 0x18) == 0) goto LAB_014876c8;
    *(undefined4 *)(lVar7 + 0x20) = uVar2;
    lVar7 = *(long *)(unaff_x20 + 0x118);
    if (lVar7 == 0) goto LAB_014876cc;
    if (*(uint *)(lVar7 + 0x18) <= unaff_x23) goto LAB_014876c8;
    lVar7 = *(long *)(lVar7 + unaff_x23 * 8 + 0x20);
    if (lVar7 == 0) goto LAB_014876cc;
    if (*(uint *)(lVar7 + 0x18) <= unaff_x24) goto LAB_014876c8;
    lVar6 = *unaff_x19;
    lVar7 = *(long *)(lVar7 + unaff_x24 * 8 + 0x20);
    uVar8 = (ulong)*(ushort *)(lVar6 + 0x12a);
    if (uVar8 != 0) {
      piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *unaff_x21) {
          puVar4 = (undefined8 *)(lVar6 + (long)(*piVar10 + 0xe) * 0x10 + 0x138);
          goto LAB_01486448;
        }
        uVar8 = uVar8 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar8 != 0);
    }
    puVar4 = (undefined8 *)FUN_00d59724();
LAB_01486448:
    uVar2 = (*(code *)*puVar4)();
    if (lVar7 == 0) goto LAB_014876cc;
    if (*(uint *)(lVar7 + 0x18) < 2) goto LAB_014876c8;
    *(undefined4 *)(lVar7 + 0x24) = uVar2;
    lVar7 = *(long *)(unaff_x20 + 0x118);
    if (lVar7 == 0) goto LAB_014876cc;
    if (*(uint *)(lVar7 + 0x18) <= unaff_x23) goto LAB_014876c8;
    lVar7 = *(long *)(lVar7 + unaff_x23 * 8 + 0x20);
    if (lVar7 == 0) goto LAB_014876cc;
    if (*(uint *)(lVar7 + 0x18) <= unaff_x24) goto LAB_014876c8;
    lVar6 = *unaff_x19;
    lVar7 = *(long *)(lVar7 + unaff_x24 * 8 + 0x20);
    uVar8 = (ulong)*(ushort *)(lVar6 + 0x12a);
    if (uVar8 != 0) {
      piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *unaff_x21) {
          puVar4 = (undefined8 *)(lVar6 + (long)(*piVar10 + 0xe) * 0x10 + 0x138);
          goto LAB_014864f0;
        }
        uVar8 = uVar8 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar8 != 0);
    }
    puVar4 = (undefined8 *)FUN_00d59724();
LAB_014864f0:
    uVar2 = (*(code *)*puVar4)();
    if (lVar7 == 0) goto LAB_014876cc;
    if (*(uint *)(lVar7 + 0x18) < 3) goto LAB_014876c8;
    *(undefined4 *)(lVar7 + 0x28) = uVar2;
    lVar7 = *(long *)(unaff_x20 + 0x128);
    if (lVar7 == 0) goto LAB_014876cc;
    if (*(uint *)(lVar7 + 0x18) <= unaff_x23) goto LAB_014876c8;
    lVar6 = *unaff_x19;
    lVar7 = *(long *)(lVar7 + unaff_x23 * 8 + 0x20);
    uVar8 = (ulong)*(ushort *)(lVar6 + 0x12a);
    if (uVar8 != 0) {
      piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *unaff_x21) {
          puVar4 = (undefined8 *)(lVar6 + (long)(*piVar10 + 0xe) * 0x10 + 0x138);
          goto LAB_01486580;
        }
        uVar8 = uVar8 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar8 != 0);
    }
    puVar4 = (undefined8 *)FUN_00d59724();
LAB_01486580:
    uVar2 = (*(code *)*puVar4)();
    if (lVar7 == 0) goto LAB_014876cc;
    if (*(uint *)(lVar7 + 0x18) <= unaff_x24) goto LAB_014876c8;
    *(undefined4 *)(lVar7 + unaff_x24 * 4 + 0x20) = uVar2;
    lVar7 = *(long *)(unaff_x20 + 0x130);
    if (lVar7 == 0) goto LAB_014876cc;
    if (*(uint *)(lVar7 + 0x18) <= unaff_x23) goto LAB_014876c8;
    lVar6 = *unaff_x19;
    lVar7 = *(long *)(lVar7 + unaff_x23 * 8 + 0x20);
    uVar8 = (ulong)*(ushort *)(lVar6 + 0x12a);
    if (uVar8 != 0) {
      piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *unaff_x21) {
          puVar4 = (undefined8 *)(lVar6 + (long)(*piVar10 + 0xe) * 0x10 + 0x138);
          goto LAB_01486614;
        }
        uVar8 = uVar8 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar8 != 0);
    }
    puVar4 = (undefined8 *)FUN_00d59724();
LAB_01486614:
    uVar2 = (*(code *)*puVar4)();
    if (lVar7 == 0) goto LAB_014876cc;
    if (*(uint *)(lVar7 + 0x18) <= unaff_x24) goto LAB_014876c8;
    *(undefined4 *)(lVar7 + unaff_x24 * 4 + 0x20) = uVar2;
    lVar7 = *(long *)(unaff_x20 + 0x110);
    if (lVar7 == 0) goto LAB_014876cc;
    if (*(uint *)(lVar7 + 0x18) <= unaff_x23) goto LAB_014876c8;
    lVar7 = *(long *)(lVar7 + unaff_x23 * 8 + 0x20);
    if (lVar7 == 0) goto LAB_014876cc;
    if (*(uint *)(lVar7 + 0x18) <= unaff_x24) goto LAB_014876c8;
    *(undefined4 *)(lVar7 + unaff_x24 * 4 + 0x20) = 0;
    lVar7 = *(long *)(unaff_x20 + 0x120);
    if (lVar7 == 0) goto LAB_014876cc;
    if (*(uint *)(lVar7 + 0x18) <= unaff_x23) goto LAB_014876c8;
    lVar7 = *(long *)(lVar7 + unaff_x23 * 8 + 0x20);
    if (lVar7 == 0) goto LAB_014876cc;
    if (*(uint *)(lVar7 + 0x18) <= unaff_x24) goto LAB_014876c8;
    unaff_x25 = *(long *)(lVar7 + unaff_x24 * 8 + 0x20);
    if (unaff_x25 == 0) goto LAB_014876cc;
    uVar1 = *(uint *)(unaff_x25 + 0x18);
    if ((uVar1 == 0) || (*(undefined4 *)(unaff_x25 + 0x20) = 0, uVar1 == 1)) goto LAB_014876c8;
    param_1 = 0.0;
    *(undefined4 *)(unaff_x25 + 0x24) = 0;
    if (uVar1 < 3) goto LAB_014876c8;
  } while( true );
}


