/*
FUNCTION_NAME: Unity.VisualScripting.FullSerializer.fsBaseConverter$$DeserializeMember<Vector3>
ENTRY_POINT: 041b9964
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x041b9b50) */
/* WARNING: Removing unreachable block (ram,0x041b9bc4) */
/* WARNING: Removing unreachable block (ram,0x041b9cac) */

undefined8
Unity_VisualScripting_FullSerializer_fsBaseConverter__DeserializeMember<Vector3>
          (long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 in_ZR;
  undefined8 *puVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  long in_x9;
  ulong uVar8;
  int *in_x10;
  int *piVar9;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x25;
  long *unaff_x26;
  long *unaff_x27;
  long unaff_x29;
  
  while (!(bool)in_ZR) {
    if (*(long *)(in_x10 + 2) == param_3) {
      puVar4 = (undefined8 *)(param_1 + (long)in_x10[4] * 0x10 + 0x138);
      goto LAB_041b9988;
    }
    in_x9 = in_x9 + -1;
    in_x10 = in_x10 + 4;
    in_ZR = in_x9 == 0;
  }
  puVar4 = (undefined8 *)FUN_0377596c();
LAB_041b9988:
  plVar5 = (long *)(*(code *)*puVar4)();
  puVar3 = PTR_DAT_07d97ab0;
  puVar2 = PTR_DAT_07d97a80;
  puVar1 = PTR_DAT_07d89700;
  if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0373b7b4();
  }
LAB_041b99b4:
  lVar7 = *plVar5;
  uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar8 != 0) {
    piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == *(long *)puVar1) {
        puVar4 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
        goto LAB_041b9a00;
      }
      uVar8 = uVar8 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar8 != 0);
  }
  puVar4 = (undefined8 *)FUN_0377596c(plVar5,*(long *)puVar1,0);
LAB_041b9a00:
  uVar8 = (*(code *)*puVar4)(plVar5,puVar4[1]);
  if ((uVar8 & 1) != 0) {
    lVar7 = *plVar5;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
                    /* try { // try from 041b9a20 to 042b9ba3 has its CatchHandler @ 041b9a20
                       catch() { ... } // from try @ 041b9a20 with catch @ 041b9a20
                       catch() { ... } // from try @ 041ba7e8 with catch @ 041b9a20
                       catch() { ... } // from try @ 041ba8e8 with catch @ 041b9a20
                       catch() { ... } // from try @ 041ba900 with catch @ 041b9a20
                       catch() { ... } // from try @ 041baab8 with catch @ 041b9a20 */
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)puVar2) {
          puVar4 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_041b9a5c;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar4 = (undefined8 *)FUN_0377596c(plVar5,*(long *)puVar2,0);
LAB_041b9a5c:
    uVar6 = (*(code *)*puVar4)(plVar5,puVar4[1]);
    uVar8 = FUN_04d808a0(unaff_x29 + -0x20,uVar6,*(undefined8 *)puVar3);
    if ((uVar8 & 1) == 0) {
      lVar7 = *unaff_x19;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *unaff_x26) {
            puVar4 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_041b9acc;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar4 = (undefined8 *)FUN_0377596c();
LAB_041b9acc:
      (*(code *)*puVar4)();
    }
    goto LAB_041b99b4;
  }
  if (plVar5 != (long *)0x0) {
    lVar7 = *plVar5;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *unaff_x27) {
          puVar4 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_041b9b38;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar4 = (undefined8 *)FUN_0377596c(plVar5,*unaff_x27,0);
LAB_041b9b38:
    (*(code *)*puVar4)(plVar5,puVar4[1]);
  }
  if (*(long *)(unaff_x20 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0373b7b4();
  }
  uVar8 = FUN_06dbaf78(*(long *)(unaff_x20 + 0x10),0);
  if (((uVar8 & 1) == 0) &&
     (uVar8 = FUN_04d808a0(unaff_x29 + -0x20,0,*(undefined8 *)PTR_DAT_07d97ab0), (uVar8 & 1) == 0))
  {
    lVar7 = *unaff_x19;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *unaff_x26) {
          puVar4 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_041b9bd8;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar4 = (undefined8 *)FUN_0377596c();
LAB_041b9bd8:
    (*(code *)*puVar4)();
  }
  lVar7 = *unaff_x19;
  uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar8 != 0) {
    piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == *unaff_x26) {
        puVar4 = (undefined8 *)(lVar7 + (long)(*piVar9 + 2) * 0x10 + 0x138);
        goto LAB_041b9c38;
      }
      uVar8 = uVar8 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar8 != 0);
  }
  puVar4 = (undefined8 *)FUN_0377596c();
LAB_041b9c38:
  uVar6 = (*(code *)*puVar4)();
  FUN_04d806a0(unaff_x29 + -0x20,*(undefined8 *)PTR_DAT_07d97ab8);
  if (*(long *)(unaff_x25 + 0x28) == *(long *)(unaff_x29 + -8)) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


