/*
FUNCTION_NAME: OVRPlugin.OVRP_1_49_0$$ovrp_Media_GetCameraMinMaxDistance
ENTRY_POINT: 0516b8d4
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 76
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;weak_pose_support
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;weak_vector_component_hits_1;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0516bdf8) */
/* WARNING: Removing unreachable block (ram,0x0516bec8) */

void OVRPlugin_OVRP_1_49_0__ovrp_Media_GetCameraMinMaxDistance(void)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long *plVar5;
  undefined8 *puVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  long unaff_x19;
  long *unaff_x20;
  long *plVar11;
  
  bVar1 = *(byte *)(*(long *)PTR_DAT_06782798 + 0x130);
  if ((*(byte *)(*unaff_x20 + 0x130) < bVar1) ||
     (*(long *)(*(long *)(*unaff_x20 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_06782798))
  {
                    /* WARNING: Subroutine does not return */
    FUN_02d60e88();
  }
  plVar5 = *(long **)(unaff_x19 + 0x10);
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 600))(plVar5,(int)unaff_x20[3],*(undefined8 *)(*plVar5 + 0x260));
    plVar5 = (long *)FUN_0516c158();
    puVar4 = PTR_DAT_067827b8;
    puVar3 = PTR_DAT_0675f3d8;
    puVar2 = PTR_DAT_0675e258;
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    do {
      lVar8 = *plVar5;
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)puVar3) {
            puVar6 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_0516b998;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar6 = (undefined8 *)FUN_02d9a5d4(plVar5,*(long *)puVar3,0);
LAB_0516b998:
      uVar9 = (*(code *)*puVar6)(plVar5,puVar6[1]);
      if ((uVar9 & 1) == 0) {
        if (plVar5 == (long *)0x0) goto LAB_0516bdc4;
        lVar8 = *plVar5;
        uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar9 == 0) goto LAB_0516bcf0;
        piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        goto LAB_0516bcd8;
      }
      lVar8 = *plVar5;
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)puVar4) {
            puVar6 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_0516b9f4;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar6 = (undefined8 *)FUN_02d9a5d4(plVar5,*(long *)puVar4,0);
LAB_0516b9f4:
      lVar8 = (*(code *)*puVar6)(plVar5,puVar6[1]);
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      plVar7 = *(long **)(lVar8 + 0x18);
      if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      plVar11 = *(long **)(unaff_x19 + 0x10);
      uVar9 = (**(code **)(*plVar7 + 0x178))(plVar7,*(undefined8 *)(*plVar7 + 0x180));
      if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8(uVar9,uVar9 & 0xffffffff);
      }
      (**(code **)(*plVar11 + 0x1d8))(plVar11,uVar9 & 0xffffffff,*(undefined8 *)(*plVar11 + 0x1e0));
      lVar8 = *(long *)(lVar8 + 0x10);
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      plVar7 = *(long **)(lVar8 + 0x20);
      if ((plVar7 != (long *)0x0) && (*plVar7 != *(long *)(puVar2 + 0x90))) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60e88(plVar7,*(long *)(puVar2 + 0x90),*(undefined4 *)(lVar8 + 0x2c));
      }
      FUN_0516c1e8();
      FUN_0516b2a4();
    } while( true );
  }
  goto LAB_0516beb0;
  while( true ) {
    uVar9 = uVar9 - 1;
    piVar10 = piVar10 + 4;
    if (uVar9 == 0) break;
LAB_0516bcd8:
    if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_0675f3d0) {
      puVar6 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
      goto LAB_0516bdb8;
    }
  }
LAB_0516bcf0:
  puVar6 = (undefined8 *)FUN_02d9a5d4(plVar5,*(long *)PTR_DAT_0675f3d0,0);
LAB_0516bdb8:
  (*(code *)*puVar6)(plVar5,puVar6[1]);
LAB_0516bdc4:
  plVar5 = *(long **)(unaff_x19 + 0x10);
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x1c8))(plVar5,0,*(undefined8 *)(*plVar5 + 0x1d0));
    return;
  }
LAB_0516beb0:
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


