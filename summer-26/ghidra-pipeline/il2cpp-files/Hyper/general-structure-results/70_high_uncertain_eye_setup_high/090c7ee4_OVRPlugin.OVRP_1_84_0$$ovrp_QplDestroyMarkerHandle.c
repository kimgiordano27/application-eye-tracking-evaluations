/*
FUNCTION_NAME: OVRPlugin.OVRP_1_84_0$$ovrp_QplDestroyMarkerHandle
ENTRY_POINT: 090c7ee4
PROGRAM: Hyper-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_12;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_84_0__ovrp_QplDestroyMarkerHandle(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  undefined4 uVar6;
  long *plVar7;
  undefined8 *puVar8;
  long lVar9;
  uint uVar10;
  code *in_x9;
  ulong uVar11;
  int *piVar12;
  uint uVar13;
  long lVar14;
  long lVar15;
  long unaff_x19;
  long *unaff_x20;
  int unaff_w23;
  undefined8 uVar16;
  
  plVar7 = (long *)(*in_x9)();
  puVar4 = PTR_DAT_0ac468d0;
  if (plVar7 != (long *)0x0) {
    lVar9 = *plVar7;
    uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_0ac468d0) {
          puVar8 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_090c7f44;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar8 = (undefined8 *)FUN_04980e68(plVar7,*(long *)PTR_DAT_0ac468d0,0);
LAB_090c7f44:
    iVar5 = (*(code *)*puVar8)(plVar7,puVar8[1]);
    if (unaff_w23 == iVar5) {
      lVar9 = unaff_x20[0x11];
LAB_090c7f5c:
      iVar1 = (int)unaff_x20[0x10];
      iVar2 = *(int *)((long)unaff_x20 + 0x84);
      iVar5 = iVar2;
      if (iVar1 <= iVar2) {
        iVar5 = iVar1;
      }
      iVar3 = 0;
      if (-1 < iVar2) {
        iVar3 = iVar5;
      }
      *(int *)((long)unaff_x20 + 0x84) = iVar3;
      if (lVar9 != 0) {
        iVar3 = ((int)unaff_x20[0x12] + iVar1) - iVar3;
        iVar5 = 0;
        if (iVar1 != 0) {
          iVar5 = iVar3 / iVar1;
        }
        uVar10 = iVar3 - iVar5 * iVar1;
        lVar14 = 0;
        do {
          uVar13 = (uint)lVar14;
          if ((int)*(uint *)(lVar9 + 0x18) <= (int)uVar13) {
            return;
          }
          if (*(uint *)(lVar9 + 0x18) <= uVar13) {
LAB_090c8100:
                    /* WARNING: Subroutine does not return */
            FUN_04948194();
          }
          lVar9 = *(long *)(lVar9 + lVar14 * 8 + 0x20);
          if (lVar9 == 0) break;
          if (*(uint *)(lVar9 + 0x18) <= uVar10) goto LAB_090c8100;
          lVar15 = *(long *)(unaff_x19 + 0x48);
          if (lVar15 == 0) break;
          if (*(uint *)(lVar15 + 0x18) <= uVar13) goto LAB_090c8100;
          lVar9 = lVar9 + (long)(int)uVar10 * 0x10;
          uVar16 = *(undefined8 *)(lVar9 + 0x20);
          lVar15 = lVar15 + lVar14 * 0x10;
          lVar14 = lVar14 + 1;
          *(undefined8 *)(lVar15 + 0x28) = *(undefined8 *)(lVar9 + 0x28);
          *(undefined8 *)(lVar15 + 0x20) = uVar16;
          lVar9 = unaff_x20[0x11];
        } while (lVar9 != 0);
      }
    }
    else {
      plVar7 = (long *)(**(code **)(*unaff_x20 + 0x268))();
      if (plVar7 != (long *)0x0) {
        lVar9 = *plVar7;
        uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == *(long *)puVar4) {
              puVar8 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
              goto LAB_090c806c;
            }
            uVar11 = uVar11 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar11 != 0);
        }
        puVar8 = (undefined8 *)FUN_04980e68(plVar7,*(long *)puVar4,0);
LAB_090c806c:
        uVar6 = (*(code *)*puVar8)(plVar7,puVar8[1]);
        iVar1 = (int)unaff_x20[0x10];
        iVar5 = (int)unaff_x20[0x12] + 1;
        iVar2 = 0;
        if (iVar1 != 0) {
          iVar2 = iVar5 / iVar1;
        }
        lVar9 = unaff_x20[0x11];
        *(int *)(unaff_x20 + 0x12) = iVar5 - iVar2 * iVar1;
        *(undefined4 *)((long)unaff_x20 + 0x94) = uVar6;
        if (lVar9 != 0) {
          lVar14 = 0;
          do {
            uVar10 = (uint)lVar14;
            if ((int)*(uint *)(lVar9 + 0x18) <= (int)uVar10) goto LAB_090c7f5c;
            if (*(uint *)(lVar9 + 0x18) <= uVar10) goto LAB_090c8100;
            lVar15 = *(long *)(unaff_x19 + 0x48);
            if (lVar15 == 0) break;
            if (*(uint *)(lVar15 + 0x18) <= uVar10) goto LAB_090c8100;
            lVar9 = *(long *)(lVar9 + lVar14 * 8 + 0x20);
            if (lVar9 == 0) break;
            if (*(uint *)(lVar9 + 0x18) <= *(uint *)(unaff_x20 + 0x12)) goto LAB_090c8100;
            lVar15 = lVar15 + lVar14 * 0x10;
            lVar9 = lVar9 + (long)(int)*(uint *)(unaff_x20 + 0x12) * 0x10;
            lVar14 = lVar14 + 1;
            uVar16 = *(undefined8 *)(lVar15 + 0x20);
            *(undefined8 *)(lVar9 + 0x28) = *(undefined8 *)(lVar15 + 0x28);
            *(undefined8 *)(lVar9 + 0x20) = uVar16;
            lVar9 = unaff_x20[0x11];
          } while (lVar9 != 0);
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


