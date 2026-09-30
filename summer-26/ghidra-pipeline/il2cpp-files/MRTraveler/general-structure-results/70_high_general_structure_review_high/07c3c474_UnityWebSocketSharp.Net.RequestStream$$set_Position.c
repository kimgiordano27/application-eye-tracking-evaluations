/*
FUNCTION_NAME: UnityWebSocketSharp.Net.RequestStream$$set_Position
ENTRY_POINT: 07c3c474
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x07c3c64c) */
/* WARNING: Removing unreachable block (ram,0x07c3c744) */

undefined8 UnityWebSocketSharp_Net_RequestStream__set_Position(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  bool in_ZR;
  long *plVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  undefined8 *unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  int unaff_w24;
  
  if (!in_ZR) {
    if (unaff_w24 != 0) {
      return param_1;
    }
    unaff_x20 = (long *)thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08e9a788);
    FUN_070d4fd4(unaff_x20,1,0);
  }
  FUN_07c3c0d4();
  plVar4 = *(long **)(unaff_x21 + 0x28);
  if (plVar4 != (long *)0x0) {
    plVar4 = (long *)(**(code **)(*plVar4 + 0x388))(plVar4,*(undefined8 *)(*plVar4 + 0x390));
    puVar3 = PTR_DAT_08ee5980;
    puVar2 = PTR_DAT_08e6a290;
    if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    do {
      lVar9 = *plVar4;
      lVar8 = *(long *)puVar2;
      uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == lVar8) {
            puVar5 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_07c3c520;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar5 = (undefined8 *)FUN_03cf1348(plVar4,lVar8,0);
LAB_07c3c520:
      uVar10 = (*(code *)*puVar5)(plVar4,puVar5[1]);
      puVar1 = PTR_DAT_08e6a288;
      if ((uVar10 & 1) == 0) {
        plVar4 = (long *)thunk_FUN_03cf5138(plVar4,*(undefined8 *)PTR_DAT_08e6a288);
        if (plVar4 == (long *)0x0) goto LAB_07c3c640;
        lVar8 = *plVar4;
        uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar10 == 0) goto LAB_07c3c618;
        piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        goto LAB_07c3c600;
      }
      lVar9 = *plVar4;
      lVar8 = *(long *)puVar2;
      uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == lVar8) {
            puVar5 = (undefined8 *)(lVar9 + (long)(*piVar11 + 1) * 0x10 + 0x138);
            goto LAB_07c3c580;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar5 = (undefined8 *)FUN_03cf1348(plVar4,lVar8,1);
LAB_07c3c580:
      plVar6 = (long *)(*(code *)*puVar5)(plVar4,puVar5[1]);
      if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30();
      }
      if (*plVar6 != *(long *)puVar3) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fecc();
      }
      uVar7 = FUN_07c3c17c();
      if (unaff_x20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30(uVar7,uVar7);
      }
      (**(code **)(*unaff_x20 + 0x318))(unaff_x20,uVar7,*(undefined8 *)(*unaff_x20 + 800));
    } while( true );
  }
  goto LAB_07c3c73c;
  while( true ) {
    uVar10 = uVar10 - 1;
    piVar11 = piVar11 + 4;
    if (uVar10 == 0) break;
LAB_07c3c600:
    if (*(long *)(piVar11 + -2) == *(long *)puVar1) {
      puVar5 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
      goto LAB_07c3c634;
    }
  }
LAB_07c3c618:
  puVar5 = (undefined8 *)FUN_03cf1348(plVar4,*(long *)puVar1,0);
LAB_07c3c634:
  (*(code *)*puVar5)(plVar4,puVar5[1]);
LAB_07c3c640:
  uVar7 = *(undefined8 *)PTR_DAT_08ee5528;
  if (*(int *)(*(long *)PTR_DAT_08e695f0 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
  }
  uVar7 = FUN_0710fcf0(uVar7,0);
  if (unaff_x20 != (long *)0x0) {
    lVar8 = (**(code **)(*unaff_x20 + 0x428))(unaff_x20,uVar7,*(undefined8 *)(*unaff_x20 + 0x430));
    if (lVar8 == 0) {
      lVar9 = 0;
    }
    else {
      uVar7 = *(undefined8 *)PTR_DAT_08eac128;
      lVar9 = thunk_FUN_03cf5138(lVar8,uVar7);
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fecc(lVar8,uVar7);
      }
    }
    uVar7 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08eabf38);
    FUN_07c13870(uVar7,lVar9,1,0);
    *unaff_x19 = uVar7;
    thunk_FUN_03d233cc();
    return *unaff_x19;
  }
LAB_07c3c73c:
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


