/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKAnchor$$RaycastPlane
ENTRY_POINT: 01486b0c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 92
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs;ray_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_21;paired_field_refs_with_eye_source;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_MRUKAnchor__RaycastPlane(long param_1)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  undefined4 uVar9;
  long *unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long *unaff_x22;
  ulong unaff_x23;
  long unaff_x24;
  float fVar10;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  
  while( true ) {
                    /* try { // try from 01486b10 to 01586b47 has its CatchHandler @ 01486f00 */
    *(undefined4 *)(unaff_x24 + unaff_x23 * 4 + 0x20) = *(undefined4 *)(param_1 + 0x20);
    lVar6 = *(long *)(unaff_x20 + 0xf8);
    if (lVar6 == 0) break;
    if (*(int *)(lVar6 + 0x18) == 0) goto LAB_014876c8;
    lVar5 = *unaff_x19;
    lVar6 = *(long *)(lVar6 + 0x20);
    uVar7 = (ulong)*(ushort *)(lVar5 + 0x12a);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
                    /* try { // try from 01486b48 to 01586b67 has its CatchHandler @ 0148631c */
        if (*(long *)(piVar8 + -2) == *unaff_x21) {
                    /* try { // try from 01486b6c to 01586ba3 has its CatchHandler @ 0148631c */
          puVar4 = (undefined8 *)(lVar5 + (long)(*piVar8 + 0xe) * 0x10 + 0x138);
          goto LAB_01486b7c;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined8 *)FUN_00d59724();
                    /* try { // try from 01486b68 to 01586b6b has its CatchHandler @ 01486f00 */
LAB_01486b7c:
    uVar2 = (*(code *)*puVar4)();
    if (lVar6 == 0) break;
    if (*(uint *)(lVar6 + 0x18) <= unaff_x23) goto LAB_014876c8;
    *(undefined4 *)(lVar6 + unaff_x23 * 4 + 0x20) = uVar2;
                    /* try { // try from 01486ba4 to 01586ba7 has its CatchHandler @ 01486f00 */
    lVar6 = *(long *)(unaff_x20 + 0x100);
                    /* try { // try from 01486ba8 to 01586bd7 has its CatchHandler @ 0148631c */
    if (lVar6 == 0) break;
    if (*(int *)(lVar6 + 0x18) == 0) goto LAB_014876c8;
    lVar5 = *unaff_x19;
    lVar6 = *(long *)(lVar6 + 0x20);
    uVar7 = (ulong)*(ushort *)(lVar5 + 0x12a);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
                    /* try { // try from 01486bd8 to 01586be3 has its CatchHandler @ 01486f00 */
        if (*(long *)(piVar8 + -2) == *unaff_x21) {
                    /* try { // try from 01486bf8 to 01586c1b has its CatchHandler @ 01486e3c */
          puVar4 = (undefined8 *)(lVar5 + (long)(*piVar8 + 0xe) * 0x10 + 0x138);
          goto LAB_01486c08;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined8 *)FUN_00d59724();
LAB_01486c08:
    iVar3 = (*(code *)*puVar4)();
    if (lVar6 == 0) break;
    if (*(uint *)(lVar6 + 0x18) <= unaff_x23) goto LAB_014876c8;
    *(bool *)(lVar6 + unaff_x23 + 0x20) = iVar3 == 1;
    lVar6 = *(long *)(unaff_x20 + 0x100);
    if (lVar6 == 0) break;
    if (*(int *)(lVar6 + 0x18) == 0) goto LAB_014876c8;
    lVar6 = *(long *)(lVar6 + 0x20);
    if (lVar6 == 0) break;
    if (*(uint *)(lVar6 + 0x18) <= unaff_x23) goto LAB_014876c8;
    if (*(char *)(lVar6 + unaff_x23 + 0x20) == '\0') {
      lVar6 = *(long *)(unaff_x20 + 0x118);
      if (lVar6 == 0) break;
      if (*(int *)(lVar6 + 0x18) == 0) goto LAB_014876c8;
      lVar6 = *(long *)(lVar6 + 0x20);
      if (lVar6 == 0) break;
                    /* try { // try from 01486cdc to 01586cdf has its CatchHandler @ 01486e10 */
      if (*(uint *)(lVar6 + 0x18) <= unaff_x23) goto LAB_014876c8;
                    /* try { // try from 01486ce0 to 01586cef has its CatchHandler @ 01486e14 */
      lVar5 = *unaff_x19;
      lVar6 = *(long *)(lVar6 + unaff_x23 * 8 + 0x20);
                    /* try { // try from 01486cf0 to 01586de7 has its CatchHandler @ 0148631c */
      uVar7 = (ulong)*(ushort *)(lVar5 + 0x12a);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *unaff_x21) {
            puVar4 = (undefined8 *)(lVar5 + (long)(*piVar8 + 0xe) * 0x10 + 0x138);
            goto LAB_01487244;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar4 = (undefined8 *)FUN_00d59724();
LAB_01487244:
      uVar2 = (*(code *)*puVar4)();
      if (lVar6 == 0) break;
      if (*(int *)(lVar6 + 0x18) == 0) goto LAB_014876c8;
      *(undefined4 *)(lVar6 + 0x20) = uVar2;
      lVar6 = *(long *)(unaff_x20 + 0x118);
      if (lVar6 == 0) break;
      if (*(int *)(lVar6 + 0x18) == 0) goto LAB_014876c8;
      lVar6 = *(long *)(lVar6 + 0x20);
      if (lVar6 == 0) break;
      if (*(uint *)(lVar6 + 0x18) <= unaff_x23) goto LAB_014876c8;
      lVar5 = *unaff_x19;
      lVar6 = *(long *)(lVar6 + unaff_x23 * 8 + 0x20);
      uVar7 = (ulong)*(ushort *)(lVar5 + 0x12a);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *unaff_x21) {
            puVar4 = (undefined8 *)(lVar5 + (long)(*piVar8 + 0xe) * 0x10 + 0x138);
            goto LAB_014872e0;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar4 = (undefined8 *)FUN_00d59724();
LAB_014872e0:
      uVar2 = (*(code *)*puVar4)();
      if (lVar6 == 0) break;
      if (*(uint *)(lVar6 + 0x18) < 2) goto LAB_014876c8;
      *(undefined4 *)(lVar6 + 0x24) = uVar2;
      lVar6 = *(long *)(unaff_x20 + 0x118);
      if (lVar6 == 0) break;
      if (*(int *)(lVar6 + 0x18) == 0) goto LAB_014876c8;
      lVar6 = *(long *)(lVar6 + 0x20);
      if (lVar6 == 0) break;
      if (*(uint *)(lVar6 + 0x18) <= unaff_x23) goto LAB_014876c8;
      lVar5 = *unaff_x19;
      lVar6 = *(long *)(lVar6 + unaff_x23 * 8 + 0x20);
      uVar7 = (ulong)*(ushort *)(lVar5 + 0x12a);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *unaff_x21) {
            puVar4 = (undefined8 *)(lVar5 + (long)(*piVar8 + 0xe) * 0x10 + 0x138);
            goto LAB_01487380;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar4 = (undefined8 *)FUN_00d59724();
LAB_01487380:
      uVar2 = (*(code *)*puVar4)();
      if (lVar6 == 0) break;
      if (*(uint *)(lVar6 + 0x18) < 3) goto LAB_014876c8;
      *(undefined4 *)(lVar6 + 0x28) = uVar2;
      lVar6 = *(long *)(unaff_x20 + 0x128);
      if (lVar6 == 0) break;
      if (*(int *)(lVar6 + 0x18) == 0) goto LAB_014876c8;
      lVar5 = *unaff_x19;
      lVar6 = *(long *)(lVar6 + 0x20);
      uVar7 = (ulong)*(ushort *)(lVar5 + 0x12a);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *unaff_x21) {
            puVar4 = (undefined8 *)(lVar5 + (long)(*piVar8 + 0xe) * 0x10 + 0x138);
            goto LAB_01487408;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar4 = (undefined8 *)FUN_00d59724();
LAB_01487408:
      uVar2 = (*(code *)*puVar4)();
      if (lVar6 == 0) break;
      if (*(uint *)(lVar6 + 0x18) <= unaff_x23) goto LAB_014876c8;
      *(undefined4 *)(lVar6 + unaff_x23 * 4 + 0x20) = uVar2;
      lVar6 = *(long *)(unaff_x20 + 0x130);
      if (lVar6 == 0) break;
      if (*(int *)(lVar6 + 0x18) == 0) goto LAB_014876c8;
      lVar5 = *unaff_x19;
      lVar6 = *(long *)(lVar6 + 0x20);
      uVar7 = (ulong)*(ushort *)(lVar5 + 0x12a);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *unaff_x21) {
            puVar4 = (undefined8 *)(lVar5 + (long)(*piVar8 + 0xe) * 0x10 + 0x138);
            goto LAB_01487494;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar4 = (undefined8 *)FUN_00d59724();
LAB_01487494:
      uVar2 = (*(code *)*puVar4)();
      if (lVar6 == 0) break;
      if (*(uint *)(lVar6 + 0x18) <= unaff_x23) goto LAB_014876c8;
      *(undefined4 *)(lVar6 + unaff_x23 * 4 + 0x20) = uVar2;
      lVar6 = *(long *)(unaff_x20 + 0x110);
      if (lVar6 == 0) break;
      if (*(int *)(lVar6 + 0x18) == 0) goto LAB_014876c8;
      lVar6 = *(long *)(lVar6 + 0x20);
      if (lVar6 == 0) break;
      if (*(uint *)(lVar6 + 0x18) <= unaff_x23) goto LAB_014876c8;
      *(undefined4 *)(lVar6 + unaff_x23 * 4 + 0x20) = 0;
      lVar6 = *(long *)(unaff_x20 + 0x120);
      if (lVar6 == 0) break;
      if (*(int *)(lVar6 + 0x18) == 0) goto LAB_014876c8;
      lVar6 = *(long *)(lVar6 + 0x20);
      if (lVar6 == 0) break;
      if (*(uint *)(lVar6 + 0x18) <= unaff_x23) goto LAB_014876c8;
      lVar6 = *(long *)(lVar6 + unaff_x23 * 8 + 0x20);
      if (lVar6 == 0) break;
      uVar1 = *(uint *)(lVar6 + 0x18);
      if ((uVar1 == 0) || (*(undefined4 *)(lVar6 + 0x20) = 0, uVar1 == 1)) goto LAB_014876c8;
      fVar10 = 0.0;
      *(undefined4 *)(lVar6 + 0x24) = 0;
      if (uVar1 < 3) goto LAB_014876c8;
    }
    else {
      lVar6 = *(long *)(unaff_x20 + 0x110);
      if (lVar6 == 0) break;
      if (*(int *)(lVar6 + 0x18) == 0) goto LAB_014876c8;
      lVar5 = *unaff_x19;
                    /* try { // try from 01486c7c to 01586ca3 has its CatchHandler @ 01486e18 */
      lVar6 = *(long *)(lVar6 + 0x20);
      uVar7 = (ulong)*(ushort *)(lVar5 + 0x12a);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *unaff_x21) {
            puVar4 = (undefined8 *)(lVar5 + (long)(*piVar8 + 0xe) * 0x10 + 0x138);
            goto LAB_01486d38;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar4 = (undefined8 *)FUN_00d59724();
LAB_01486d38:
      uVar2 = (*(code *)*puVar4)();
      if (lVar6 == 0) break;
      if (*(uint *)(lVar6 + 0x18) <= unaff_x23) goto LAB_014876c8;
      *(undefined4 *)(lVar6 + unaff_x23 * 4 + 0x20) = uVar2;
      lVar6 = *(long *)(unaff_x20 + 0x108);
      if (lVar6 == 0) break;
      if (*(int *)(lVar6 + 0x18) == 0) goto LAB_014876c8;
      lVar5 = *unaff_x19;
      lVar6 = *(long *)(lVar6 + 0x20);
      uVar7 = (ulong)*(ushort *)(lVar5 + 0x12a);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *unaff_x21) {
            puVar4 = (undefined8 *)(lVar5 + (long)(*piVar8 + 0xe) * 0x10 + 0x138);
            goto LAB_01486dc4;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar4 = (undefined8 *)FUN_00d59724();
LAB_01486dc4:
      iVar3 = (*(code *)*puVar4)();
      if (lVar6 == 0) break;
      if (*(uint *)(lVar6 + 0x18) <= unaff_x23) goto LAB_014876c8;
      *(bool *)(lVar6 + unaff_x23 + 0x20) = iVar3 == 1;
      lVar6 = *(long *)(unaff_x20 + 0x118);
      if (lVar6 == 0) break;
      if (*(int *)(lVar6 + 0x18) == 0) goto LAB_014876c8;
      lVar6 = *(long *)(lVar6 + 0x20);
      if (lVar6 == 0) break;
      if (*(uint *)(lVar6 + 0x18) <= unaff_x23) goto LAB_014876c8;
      lVar5 = *unaff_x19;
      lVar6 = *(long *)(lVar6 + unaff_x23 * 8 + 0x20);
      uVar7 = (ulong)*(ushort *)(lVar5 + 0x12a);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *unaff_x21) {
            puVar4 = (undefined8 *)(lVar5 + (long)(*piVar8 + 0xe) * 0x10 + 0x138);
            goto LAB_01486e70;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar4 = (undefined8 *)FUN_00d59724();
LAB_01486e70:
      uVar2 = (*(code *)*puVar4)();
      if (lVar6 == 0) break;
      if (*(int *)(lVar6 + 0x18) == 0) goto LAB_014876c8;
      *(undefined4 *)(lVar6 + 0x20) = uVar2;
      lVar6 = *(long *)(unaff_x20 + 0x118);
      if (lVar6 == 0) break;
      if (*(int *)(lVar6 + 0x18) == 0) goto LAB_014876c8;
      lVar6 = *(long *)(lVar6 + 0x20);
      if (lVar6 == 0) break;
      if (*(uint *)(lVar6 + 0x18) <= unaff_x23) goto LAB_014876c8;
      lVar5 = *unaff_x19;
      lVar6 = *(long *)(lVar6 + unaff_x23 * 8 + 0x20);
      uVar7 = (ulong)*(ushort *)(lVar5 + 0x12a);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *unaff_x21) {
            puVar4 = (undefined8 *)(lVar5 + (long)(*piVar8 + 0xe) * 0x10 + 0x138);
            goto LAB_01486f0c;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar4 = (undefined8 *)FUN_00d59724();
LAB_01486f0c:
      uVar2 = (*(code *)*puVar4)();
      if (lVar6 == 0) break;
      if (*(uint *)(lVar6 + 0x18) < 2) goto LAB_014876c8;
      *(undefined4 *)(lVar6 + 0x24) = uVar2;
      lVar6 = *(long *)(unaff_x20 + 0x118);
      if (lVar6 == 0) break;
      if (*(int *)(lVar6 + 0x18) == 0) goto LAB_014876c8;
      lVar6 = *(long *)(lVar6 + 0x20);
      if (lVar6 == 0) break;
      if (*(uint *)(lVar6 + 0x18) <= unaff_x23) goto LAB_014876c8;
      lVar6 = *(long *)(lVar6 + unaff_x23 * 8 + 0x20);
      if (lVar6 == 0) break;
      if (*(uint *)(lVar6 + 0x18) < 3) goto LAB_014876c8;
      *(undefined4 *)(lVar6 + 0x28) = 0;
      lVar6 = *(long *)(unaff_x20 + 0x110);
      if (lVar6 == 0) break;
      if (*(int *)(lVar6 + 0x18) == 0) goto LAB_014876c8;
      lVar6 = *(long *)(lVar6 + 0x20);
      if (lVar6 == 0) break;
      if (*(uint *)(lVar6 + 0x18) <= unaff_x23) goto LAB_014876c8;
      if (*(int *)(lVar6 + unaff_x23 * 4 + 0x20) == 2) {
        lVar6 = *(long *)(unaff_x20 + 0x108);
        if (lVar6 == 0) break;
        if (*(int *)(lVar6 + 0x18) == 0) goto LAB_014876c8;
        lVar6 = *(long *)(lVar6 + 0x20);
        if (lVar6 == 0) break;
        if (*(uint *)(lVar6 + 0x18) <= unaff_x23) goto LAB_014876c8;
        if (*(char *)(lVar6 + unaff_x23 + 0x20) != '\0') goto LAB_01486fd4;
        lVar6 = *(long *)(unaff_x20 + 0x128);
        if (lVar6 == 0) break;
        iVar3 = (int)*(undefined8 *)(lVar6 + 0x18);
        if (iVar3 == 0) goto LAB_014876c8;
        lVar6 = *(long *)(lVar6 + 0x20);
        if (lVar6 == 0) break;
        uVar7 = (ulong)*(uint *)(lVar6 + 0x18);
        if (uVar7 <= unaff_x23) goto LAB_014876c8;
        uVar2 = 0xc;
        uVar9 = 8;
      }
      else {
LAB_01486fd4:
        lVar6 = *(long *)(unaff_x20 + 0x128);
        if (lVar6 == 0) break;
        iVar3 = (int)*(undefined8 *)(lVar6 + 0x18);
        if (iVar3 == 0) goto LAB_014876c8;
        lVar6 = *(long *)(lVar6 + 0x20);
        if (lVar6 == 0) break;
        uVar7 = (ulong)*(uint *)(lVar6 + 0x18);
        if (uVar7 <= unaff_x23) goto LAB_014876c8;
        uVar2 = 0xd;
        uVar9 = 7;
      }
      *(undefined4 *)(lVar6 + unaff_x23 * 4 + 0x20) = uVar9;
      lVar6 = *(long *)(unaff_x20 + 0x130);
      if (lVar6 == 0) break;
      if (((*(int *)(lVar6 + 0x18) == 0) || (iVar3 == 0)) || (uVar7 <= unaff_x23))
      goto LAB_014876c8;
      lVar6 = *(long *)(lVar6 + 0x20);
      if (lVar6 == 0) break;
      if (*(uint *)(lVar6 + 0x18) <= unaff_x23) goto LAB_014876c8;
      *(undefined4 *)(lVar6 + unaff_x23 * 4 + 0x20) = uVar2;
      lVar6 = *(long *)(unaff_x20 + 0x120);
      if (lVar6 == 0) break;
      if (*(int *)(lVar6 + 0x18) == 0) goto LAB_014876c8;
      lVar6 = *(long *)(lVar6 + 0x20);
      if (lVar6 == 0) break;
      if (*(uint *)(lVar6 + 0x18) <= unaff_x23) goto LAB_014876c8;
      lVar5 = *unaff_x19;
      lVar6 = *(long *)(lVar6 + unaff_x23 * 8 + 0x20);
      uVar7 = (ulong)*(ushort *)(lVar5 + 0x12a);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *unaff_x21) {
            puVar4 = (undefined8 *)(lVar5 + (long)(*piVar8 + 0xe) * 0x10 + 0x138);
            goto LAB_014870bc;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar4 = (undefined8 *)FUN_00d59724();
LAB_014870bc:
      iVar3 = (*(code *)*puVar4)();
      if (lVar6 == 0) break;
      if (*(int *)(lVar6 + 0x18) == 0) goto LAB_014876c8;
      *(float *)(lVar6 + 0x20) = (float)iVar3 * unaff_s10;
      lVar6 = *(long *)(unaff_x20 + 0x120);
      if (lVar6 == 0) break;
      if (*(int *)(lVar6 + 0x18) == 0) goto LAB_014876c8;
      lVar6 = *(long *)(lVar6 + 0x20);
      if (lVar6 == 0) break;
      if (*(uint *)(lVar6 + 0x18) <= unaff_x23) goto LAB_014876c8;
      lVar5 = *unaff_x19;
      lVar6 = *(long *)(lVar6 + unaff_x23 * 8 + 0x20);
      uVar7 = (ulong)*(ushort *)(lVar5 + 0x12a);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *unaff_x21) {
            puVar4 = (undefined8 *)(lVar5 + (long)(*piVar8 + 0xe) * 0x10 + 0x138);
            goto LAB_01487160;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar4 = (undefined8 *)FUN_00d59724();
LAB_01487160:
      iVar3 = (*(code *)*puVar4)();
      if (lVar6 == 0) break;
      if (*(uint *)(lVar6 + 0x18) < 2) goto LAB_014876c8;
      *(float *)(lVar6 + 0x24) = (float)iVar3 * unaff_s10;
      lVar6 = *(long *)(unaff_x20 + 0x120);
      if (lVar6 == 0) break;
      if (*(int *)(lVar6 + 0x18) == 0) goto LAB_014876c8;
      lVar6 = *(long *)(lVar6 + 0x20);
      if (lVar6 == 0) break;
      if (*(uint *)(lVar6 + 0x18) <= unaff_x23) goto LAB_014876c8;
      lVar5 = *unaff_x19;
      lVar6 = *(long *)(lVar6 + unaff_x23 * 8 + 0x20);
      uVar7 = (ulong)*(ushort *)(lVar5 + 0x12a);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *unaff_x21) {
            puVar4 = (undefined8 *)(lVar5 + (long)(*piVar8 + 0xe) * 0x10 + 0x138);
            goto LAB_01487208;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar4 = (undefined8 *)FUN_00d59724();
LAB_01487208:
      iVar3 = (*(code *)*puVar4)();
      if (lVar6 == 0) break;
      if (*(uint *)(lVar6 + 0x18) < 3) goto LAB_014876c8;
      fVar10 = (float)iVar3 * unaff_s10;
    }
    *(float *)(lVar6 + 0x28) = fVar10;
    lVar6 = *(long *)(unaff_x20 + 0x140);
    if (lVar6 == 0) break;
    if (*(int *)(lVar6 + 0x18) == 0) {
LAB_014876c8:
                    /* WARNING: Subroutine does not return */
      FUN_00da5194();
    }
    lVar5 = *unaff_x19;
    lVar6 = *(long *)(lVar6 + 0x20);
    uVar7 = (ulong)*(ushort *)(lVar5 + 0x12a);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *unaff_x21) {
          puVar4 = (undefined8 *)(lVar5 + (long)(*piVar8 + 0xe) * 0x10 + 0x138);
          goto LAB_014875a4;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined8 *)FUN_00d59724();
LAB_014875a4:
    iVar3 = (*(code *)*puVar4)();
    if (lVar6 == 0) break;
    if (*(uint *)(lVar6 + 0x18) <= unaff_x23) goto LAB_014876c8;
    *(float *)(lVar6 + unaff_x23 * 4 + 0x20) = ((float)iVar3 + unaff_s8) * unaff_s9;
    lVar6 = *(long *)(unaff_x20 + 0x148);
    if (lVar6 == 0) break;
    if (*(int *)(lVar6 + 0x18) == 0) goto LAB_014876c8;
    lVar5 = *unaff_x19;
    lVar6 = *(long *)(lVar6 + 0x20);
    uVar7 = (ulong)*(ushort *)(lVar5 + 0x12a);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *unaff_x21) {
          puVar4 = (undefined8 *)(lVar5 + (long)(*piVar8 + 0xe) * 0x10 + 0x138);
          goto LAB_0148763c;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined8 *)FUN_00d59724();
LAB_0148763c:
    uVar2 = (*(code *)*puVar4)();
    if (lVar6 == 0) break;
    if (*(uint *)(lVar6 + 0x18) <= unaff_x23) goto LAB_014876c8;
    *(undefined4 *)(lVar6 + unaff_x23 * 4 + 0x20) = uVar2;
    unaff_x23 = unaff_x23 + 1;
    if ((long)*(int *)(unaff_x20 + 200) <= (long)unaff_x23) {
      return;
    }
    lVar6 = *(long *)(unaff_x20 + 0xe0);
    if (lVar6 == 0) break;
    if (*(int *)(lVar6 + 0x18) == 0) goto LAB_014876c8;
    lVar5 = *unaff_x19;
    lVar6 = *(long *)(lVar6 + 0x20);
    uVar7 = (ulong)*(ushort *)(lVar5 + 0x12a);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *unaff_x21) {
          puVar4 = (undefined8 *)(lVar5 + (long)(*piVar8 + 0xe) * 0x10 + 0x138);
          goto LAB_014869a4;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined8 *)FUN_00d59724();
LAB_014869a4:
    uVar2 = (*(code *)*puVar4)();
    if (lVar6 == 0) break;
    if (*(uint *)(lVar6 + 0x18) <= unaff_x23) goto LAB_014876c8;
    *(undefined4 *)(lVar6 + unaff_x23 * 4 + 0x20) = uVar2;
    lVar6 = *(long *)(unaff_x20 + 0xe8);
    if (lVar6 == 0) break;
    if (*(int *)(lVar6 + 0x18) == 0) goto LAB_014876c8;
    lVar5 = *unaff_x19;
    lVar6 = *(long *)(lVar6 + 0x20);
    uVar7 = (ulong)*(ushort *)(lVar5 + 0x12a);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *unaff_x21) {
          puVar4 = (undefined8 *)(lVar5 + (long)(*piVar8 + 0xe) * 0x10 + 0x138);
          goto LAB_01486a30;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined8 *)FUN_00d59724();
LAB_01486a30:
    uVar2 = (*(code *)*puVar4)();
    if (lVar6 == 0) break;
    if (*(uint *)(lVar6 + 0x18) <= unaff_x23) goto LAB_014876c8;
    *(undefined4 *)(lVar6 + unaff_x23 * 4 + 0x20) = uVar2;
    lVar6 = *(long *)(unaff_x20 + 0xf0);
    if (lVar6 == 0) break;
    if (*(int *)(lVar6 + 0x18) == 0) goto LAB_014876c8;
    lVar5 = *unaff_x22;
    unaff_x24 = *(long *)(lVar6 + 0x20);
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      lVar5 = *unaff_x22;
    }
    lVar6 = *unaff_x19;
    param_1 = **(long **)(lVar5 + 0xb8);
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12a);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *unaff_x21) {
          puVar4 = (undefined8 *)(lVar6 + (long)(*piVar8 + 0xe) * 0x10 + 0x138);
          goto LAB_01486ad8;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined8 *)FUN_00d59724();
LAB_01486ad8:
    uVar1 = (*(code *)*puVar4)();
    if (param_1 == 0) break;
    if (*(uint *)(param_1 + 0x18) <= uVar1) goto LAB_014876c8;
    if (unaff_x24 == 0) break;
    if (*(uint *)(unaff_x24 + 0x18) <= unaff_x23) goto LAB_014876c8;
    param_1 = param_1 + (long)(int)uVar1 * 4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


