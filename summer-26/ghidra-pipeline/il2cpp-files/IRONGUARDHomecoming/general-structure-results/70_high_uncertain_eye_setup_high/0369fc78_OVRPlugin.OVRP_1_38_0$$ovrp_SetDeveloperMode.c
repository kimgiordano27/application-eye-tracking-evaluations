/*
FUNCTION_NAME: OVRPlugin.OVRP_1_38_0$$ovrp_SetDeveloperMode
ENTRY_POINT: 0369fc78
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_11;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_38_0__ovrp_SetDeveloperMode(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  long *plVar7;
  long lVar8;
  uint uVar9;
  uint uVar10;
  long lVar11;
  ulong uVar12;
  int *piVar13;
  long lVar14;
  long unaff_x19;
  long *unaff_x20;
  long *unaff_x22;
  int unaff_w23;
  undefined8 uVar15;
  
  puVar6 = (undefined8 *)FUN_01ecb238();
  iVar4 = (*(code *)*puVar6)();
  if (unaff_w23 == iVar4) {
    lVar8 = unaff_x20[0x11];
LAB_0369fca4:
    iVar1 = (int)unaff_x20[0x10];
    iVar2 = *(int *)((long)unaff_x20 + 0x84);
    iVar4 = iVar1;
    if (iVar2 <= iVar1) {
      iVar4 = iVar2;
    }
    iVar3 = 0;
    if (-1 < iVar2) {
      iVar3 = iVar4;
    }
    *(int *)((long)unaff_x20 + 0x84) = iVar3;
    if (lVar8 != 0) {
      lVar11 = 0;
      iVar3 = ((int)unaff_x20[0x12] + iVar1) - iVar3;
      iVar4 = 0;
      if (iVar1 != 0) {
        iVar4 = iVar3 / iVar1;
      }
      uVar10 = iVar3 - iVar4 * iVar1;
      do {
        uVar9 = (uint)lVar11;
        if ((int)*(uint *)(lVar8 + 0x18) <= (int)uVar9) {
          return;
        }
        if (*(uint *)(lVar8 + 0x18) <= uVar9) {
LAB_0369fe48:
                    /* WARNING: Subroutine does not return */
          FUN_01f08a44();
        }
        lVar8 = *(long *)(lVar8 + lVar11 * 8 + 0x20);
        if (lVar8 == 0) break;
        if (*(uint *)(lVar8 + 0x18) <= uVar10) goto LAB_0369fe48;
        lVar14 = *(long *)(unaff_x19 + 0x38);
        if (lVar14 == 0) break;
        if (*(uint *)(lVar14 + 0x18) <= uVar9) goto LAB_0369fe48;
        lVar8 = lVar8 + (long)(int)uVar10 * 0x10;
        uVar15 = *(undefined8 *)(lVar8 + 0x20);
        lVar14 = lVar14 + lVar11 * 0x10;
        lVar11 = lVar11 + 1;
        *(undefined8 *)(lVar14 + 0x28) = *(undefined8 *)(lVar8 + 0x28);
        *(undefined8 *)(lVar14 + 0x20) = uVar15;
        lVar8 = unaff_x20[0x11];
      } while (lVar8 != 0);
    }
  }
  else {
    plVar7 = (long *)(**(code **)(*unaff_x20 + 0x268))();
    if (plVar7 != (long *)0x0) {
      lVar8 = *plVar7;
      uVar12 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar12 != 0) {
        piVar13 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == *unaff_x22) {
            puVar6 = (undefined8 *)(lVar8 + (long)*piVar13 * 0x10 + 0x138);
            goto LAB_0369fdb4;
          }
          uVar12 = uVar12 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar12 != 0);
      }
      puVar6 = (undefined8 *)FUN_01ecb238(plVar7,*unaff_x22,0);
LAB_0369fdb4:
      uVar5 = (*(code *)*puVar6)(plVar7,puVar6[1]);
      iVar1 = (int)unaff_x20[0x10];
      lVar8 = unaff_x20[0x11];
      iVar4 = (int)unaff_x20[0x12] + 1;
      iVar2 = 0;
      if (iVar1 != 0) {
        iVar2 = iVar4 / iVar1;
      }
      *(int *)(unaff_x20 + 0x12) = iVar4 - iVar2 * iVar1;
      *(undefined4 *)((long)unaff_x20 + 0x94) = uVar5;
      if (lVar8 != 0) {
        lVar11 = 0;
        do {
          uVar10 = (uint)lVar11;
          if ((int)*(uint *)(lVar8 + 0x18) <= (int)uVar10) goto LAB_0369fca4;
          if (*(uint *)(lVar8 + 0x18) <= uVar10) goto LAB_0369fe48;
          lVar14 = *(long *)(unaff_x19 + 0x38);
          if (lVar14 == 0) break;
          if (*(uint *)(lVar14 + 0x18) <= uVar10) goto LAB_0369fe48;
          lVar8 = *(long *)(lVar8 + lVar11 * 8 + 0x20);
          if (lVar8 == 0) break;
          if (*(uint *)(lVar8 + 0x18) <= *(uint *)(unaff_x20 + 0x12)) goto LAB_0369fe48;
          lVar14 = lVar14 + lVar11 * 0x10;
          uVar15 = *(undefined8 *)(lVar14 + 0x20);
          lVar8 = lVar8 + (long)(int)*(uint *)(unaff_x20 + 0x12) * 0x10;
          lVar11 = lVar11 + 1;
          *(undefined8 *)(lVar8 + 0x28) = *(undefined8 *)(lVar14 + 0x28);
          *(undefined8 *)(lVar8 + 0x20) = uVar15;
          lVar8 = unaff_x20[0x11];
        } while (lVar8 != 0);
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


