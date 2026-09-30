/*
FUNCTION_NAME: UnityWebSocketSharp.Net.RequestStream$$get_Position
ENTRY_POINT: 07c3c43c
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 78
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_3;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x07c3c64c) */
/* WARNING: Removing unreachable block (ram,0x07c3c744) */

undefined8
UnityWebSocketSharp_Net_RequestStream__get_Position(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 in_ZR;
  undefined8 *puVar4;
  undefined8 uVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  long in_x9;
  ulong uVar10;
  int *in_x10;
  int *piVar11;
  undefined8 *unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  long unaff_x23;
  int unaff_w24;
  
  while (!(bool)in_ZR) {
    if (*(long *)(in_x10 + 2) == param_3) {
      puVar4 = (undefined8 *)(param_1 + (long)in_x10[4] * 0x10 + 0x138);
      goto LAB_07c3c460;
    }
    in_x9 = in_x9 + -1;
    in_x10 = in_x10 + 4;
    in_ZR = in_x9 == 0;
  }
  puVar4 = (undefined8 *)FUN_03cf1348();
LAB_07c3c460:
  uVar5 = (*(code *)*puVar4)();
  if (unaff_x23 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb28();
  }
  if (unaff_w24 != 6) {
    if (unaff_w24 != 0) {
      return uVar5;
    }
    unaff_x20 = (long *)thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08e9a788);
    FUN_070d4fd4(unaff_x20,1,0);
  }
  FUN_07c3c0d4();
  plVar6 = *(long **)(unaff_x21 + 0x28);
  if (plVar6 != (long *)0x0) {
    plVar6 = (long *)(**(code **)(*plVar6 + 0x388))(plVar6,*(undefined8 *)(*plVar6 + 0x390));
    puVar3 = PTR_DAT_08ee5980;
    puVar2 = PTR_DAT_08e6a290;
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    do {
      lVar9 = *plVar6;
      lVar8 = *(long *)puVar2;
      uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == lVar8) {
            puVar4 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_07c3c520;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar4 = (undefined8 *)FUN_03cf1348(plVar6,lVar8,0);
LAB_07c3c520:
      uVar10 = (*(code *)*puVar4)(plVar6,puVar4[1]);
      puVar1 = PTR_DAT_08e6a288;
      if ((uVar10 & 1) == 0) {
        plVar6 = (long *)thunk_FUN_03cf5138(plVar6,*(undefined8 *)PTR_DAT_08e6a288);
        if (plVar6 == (long *)0x0) goto LAB_07c3c640;
        lVar8 = *plVar6;
        uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar10 == 0) goto LAB_07c3c618;
        piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        goto LAB_07c3c600;
      }
      lVar9 = *plVar6;
      lVar8 = *(long *)puVar2;
      uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == lVar8) {
            puVar4 = (undefined8 *)(lVar9 + (long)(*piVar11 + 1) * 0x10 + 0x138);
            goto LAB_07c3c580;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar4 = (undefined8 *)FUN_03cf1348(plVar6,lVar8,1);
LAB_07c3c580:
      plVar7 = (long *)(*(code *)*puVar4)(plVar6,puVar4[1]);
      if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30();
      }
      if (*plVar7 != *(long *)puVar3) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fecc();
      }
      uVar5 = FUN_07c3c17c();
      if (unaff_x20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30(uVar5,uVar5);
      }
      (**(code **)(*unaff_x20 + 0x318))(unaff_x20,uVar5,*(undefined8 *)(*unaff_x20 + 800));
    } while( true );
  }
  goto LAB_07c3c73c;
  while( true ) {
    uVar10 = uVar10 - 1;
    piVar11 = piVar11 + 4;
    if (uVar10 == 0) break;
LAB_07c3c600:
    if (*(long *)(piVar11 + -2) == *(long *)puVar1) {
      puVar4 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
      goto LAB_07c3c634;
    }
  }
LAB_07c3c618:
  puVar4 = (undefined8 *)FUN_03cf1348(plVar6,*(long *)puVar1,0);
LAB_07c3c634:
  (*(code *)*puVar4)(plVar6,puVar4[1]);
LAB_07c3c640:
  uVar5 = *(undefined8 *)PTR_DAT_08ee5528;
  if (*(int *)(*(long *)PTR_DAT_08e695f0 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
  }
  uVar5 = FUN_0710fcf0(uVar5,0);
  if (unaff_x20 != (long *)0x0) {
    lVar8 = (**(code **)(*unaff_x20 + 0x428))(unaff_x20,uVar5,*(undefined8 *)(*unaff_x20 + 0x430));
    if (lVar8 == 0) {
      lVar9 = 0;
    }
    else {
      uVar5 = *(undefined8 *)PTR_DAT_08eac128;
      lVar9 = thunk_FUN_03cf5138(lVar8,uVar5);
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fecc(lVar8,uVar5);
      }
    }
    uVar5 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08eabf38);
    FUN_07c13870(uVar5,lVar9,1,0);
    *unaff_x19 = uVar5;
    thunk_FUN_03d233cc();
    return *unaff_x19;
  }
LAB_07c3c73c:
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


