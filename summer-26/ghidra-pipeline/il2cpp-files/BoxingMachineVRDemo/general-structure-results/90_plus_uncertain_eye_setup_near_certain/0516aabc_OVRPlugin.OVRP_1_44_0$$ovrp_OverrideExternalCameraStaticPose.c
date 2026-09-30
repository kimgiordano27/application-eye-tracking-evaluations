/*
FUNCTION_NAME: OVRPlugin.OVRP_1_44_0$$ovrp_OverrideExternalCameraStaticPose
ENTRY_POINT: 0516aabc
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 95
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_12;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0516affc) */
/* WARNING: Removing unreachable block (ram,0x0516b034) */

int OVRPlugin_OVRP_1_44_0__ovrp_OverrideExternalCameraStaticPose(void)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  ulong uVar15;
  int *piVar16;
  long *unaff_x19;
  long lVar17;
  undefined1 uStack000000000000000c;
  
  if (unaff_x19 == (long *)0x0) {
LAB_0516b028:
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
  uVar4 = (**(code **)(*unaff_x19 + 0x178))();
  puVar2 = PTR_DAT_06782788;
  iVar6 = 8;
  switch(uVar4) {
  case 1:
  case 9:
  case 0x12:
    break;
  case 2:
    bVar1 = *(byte *)(*(long *)PTR_DAT_067827a8 + 0x130);
    if ((*(byte *)(*unaff_x19 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*unaff_x19 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_067827a8)
       ) goto LAB_0516b02c;
    plVar10 = (long *)unaff_x19[4];
    if (plVar10 == (long *)0x0) {
      iVar5 = 0;
    }
    else {
      if (*plVar10 != *(long *)(PTR_DAT_0675e258 + 0x90)) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60e88(plVar10);
      }
      lVar17 = *(long *)PTR_DAT_06782788;
      if (*(int *)(lVar17 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
        lVar17 = *(long *)puVar2;
      }
      plVar9 = (long *)**(long **)(lVar17 + 0xb8);
      if (plVar9 == (long *)0x0) goto LAB_0516b028;
      iVar5 = (**(code **)(*plVar9 + 0x1e8))(plVar9,plVar10,*(undefined8 *)(*plVar9 + 0x1f0));
    }
    *(int *)((long)unaff_x19 + 0x2c) = iVar5;
    iVar6 = 5;
    if ((char)unaff_x19[6] == '\0') {
      iVar6 = 1;
    }
    iVar6 = iVar6 + iVar5;
    goto LAB_0516b004;
  case 3:
    bVar1 = *(byte *)(*(long *)PTR_DAT_06782798 + 0x130);
    if ((bVar1 <= *(byte *)(*unaff_x19 + 0x130)) &&
       (*(long *)(*(long *)(*unaff_x19 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)PTR_DAT_06782798)
       ) {
      plVar10 = (long *)FUN_0516c158();
      puVar3 = PTR_DAT_067827b8;
      puVar2 = PTR_DAT_0675f3d8;
      if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      iVar6 = 4;
      do {
        lVar17 = *plVar10;
        uVar15 = (ulong)*(ushort *)(lVar17 + 0x12e);
        if (uVar15 != 0) {
          piVar16 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
          do {
            if (*(long *)(piVar16 + -2) == *(long *)puVar2) {
              puVar11 = (undefined8 *)(lVar17 + (long)*piVar16 * 0x10 + 0x138);
              goto LAB_0516ad04;
            }
            uVar15 = uVar15 - 1;
            piVar16 = piVar16 + 4;
          } while (uVar15 != 0);
        }
        puVar11 = (undefined8 *)FUN_02d9a5d4(plVar10,*(long *)puVar2,0);
LAB_0516ad04:
        uVar15 = (*(code *)*puVar11)(plVar10,puVar11[1]);
        if ((uVar15 & 1) == 0) {
          if (plVar10 == (long *)0x0) goto LAB_0516b000;
          lVar17 = *plVar10;
          uVar15 = (ulong)*(ushort *)(lVar17 + 0x12e);
          if (uVar15 == 0) goto LAB_0516af80;
          piVar16 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
          goto LAB_0516af68;
        }
        lVar17 = *plVar10;
        uVar15 = (ulong)*(ushort *)(lVar17 + 0x12e);
        if (uVar15 != 0) {
          piVar16 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
          do {
            if (*(long *)(piVar16 + -2) == *(long *)puVar3) {
              puVar11 = (undefined8 *)(lVar17 + (long)*piVar16 * 0x10 + 0x138);
              goto LAB_0516ad60;
            }
            uVar15 = uVar15 - 1;
            piVar16 = piVar16 + 4;
          } while (uVar15 != 0);
        }
        puVar11 = (undefined8 *)FUN_02d9a5d4(plVar10,*(long *)puVar3,0);
LAB_0516ad60:
        lVar17 = (*(code *)*puVar11)(plVar10,puVar11[1]);
        if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d60ae8();
        }
        iVar5 = FUN_0516aa08();
        iVar7 = FUN_0516aa08();
        iVar6 = iVar6 + iVar5 + iVar7 + 1;
      } while( true );
    }
    goto LAB_0516b02c;
  case 4:
    bVar1 = *(byte *)(*(long *)PTR_DAT_06782780 + 0x130);
    if ((bVar1 <= *(byte *)(*unaff_x19 + 0x130)) &&
       (*(long *)(*(long *)(*unaff_x19 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)PTR_DAT_06782780)
       ) {
      plVar10 = (long *)FUN_0516c28c();
      puVar3 = PTR_DAT_067827b0;
      puVar2 = PTR_DAT_0675f3d8;
      if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      lVar17 = 0;
      iVar6 = 4;
      do {
        lVar8 = *plVar10;
        uVar15 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar15 != 0) {
          piVar16 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar16 + -2) == *(long *)puVar2) {
              puVar11 = (undefined8 *)(lVar8 + (long)*piVar16 * 0x10 + 0x138);
              goto LAB_0516ae50;
            }
            uVar15 = uVar15 - 1;
            piVar16 = piVar16 + 4;
          } while (uVar15 != 0);
        }
        puVar11 = (undefined8 *)FUN_02d9a5d4(plVar10,*(long *)puVar2,0);
LAB_0516ae50:
        uVar15 = (*(code *)*puVar11)(plVar10,puVar11[1]);
        if ((uVar15 & 1) == 0) goto LAB_0516aee8;
        lVar8 = *plVar10;
        uVar15 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar15 != 0) {
          piVar16 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar16 + -2) == *(long *)puVar3) {
              puVar11 = (undefined8 *)(lVar8 + (long)*piVar16 * 0x10 + 0x138);
              goto LAB_0516aeac;
            }
            uVar15 = uVar15 - 1;
            piVar16 = piVar16 + 4;
          } while (uVar15 != 0);
        }
        puVar11 = (undefined8 *)FUN_02d9a5d4(plVar10,*(long *)puVar3,0);
LAB_0516aeac:
        (*(code *)*puVar11)(plVar10,puVar11[1]);
        iVar5 = FUN_050ea8a4(lVar17,0);
        iVar7 = FUN_0516aa08();
        iVar6 = iVar7 + iVar6 + iVar5 + 2;
        lVar17 = lVar17 + 1;
      } while( true );
    }
LAB_0516b02c:
                    /* WARNING: Subroutine does not return */
    FUN_02d60e88();
  case 5:
    bVar1 = *(byte *)(*(long *)PTR_DAT_06782790 + 0x130);
    if ((*(byte *)(*unaff_x19 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*unaff_x19 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_06782790)
       ) goto LAB_0516b02c;
    lVar17 = unaff_x19[4];
    if (lVar17 == 0) goto LAB_0516b028;
    uVar12 = *(undefined8 *)PTR_DAT_0675e1c0;
    lVar8 = thunk_FUN_02d9d438(lVar17,uVar12);
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60e88(lVar17,uVar12);
    }
    iVar6 = *(int *)(lVar8 + 0x18) + 5;
    goto LAB_0516b004;
  case 6:
  case 10:
    iVar6 = 0;
    break;
  case 7:
    iVar6 = 0xc;
    break;
  case 8:
    iVar6 = 1;
    break;
  case 0xb:
    bVar1 = *(byte *)(*(long *)PTR_DAT_067827a0 + 0x130);
    if ((*(byte *)(*unaff_x19 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*unaff_x19 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_067827a0)
       ) goto LAB_0516b02c;
    iVar5 = FUN_0516aa08();
    iVar6 = FUN_0516aa08();
    iVar6 = iVar6 + iVar5;
LAB_0516b004:
    *(int *)(unaff_x19 + 3) = iVar6;
    break;
  default:
    thunk_FUN_02dc61f4(PTR_DAT_0675eef8);
    FUN_028f4b80();
    uVar12 = FUN_04f8e414(0);
    FUN_028f4e40();
    uStack000000000000000c = (**(code **)(*unaff_x19 + 0x178))();
    uVar13 = thunk_FUN_02dc61f4(PTR_DAT_067827c0);
    uVar13 = thunk_FUN_02d9d164(uVar13,&stack0x0000000c);
    uVar14 = thunk_FUN_02dc61f4(PTR_DAT_067827c8);
    uVar12 = FUN_050f0ec0(uVar14,uVar12,uVar13,0);
    thunk_FUN_02dc61f4(PTR_DAT_06764080);
    uVar13 = thunk_FUN_02d9d534();
    uVar14 = thunk_FUN_02dc61f4(PTR_DAT_06769ac0);
    FUN_04f7a804(uVar13,uVar14,uVar12,0);
    uVar12 = thunk_FUN_02dc61f4(PTR_DAT_067827d0);
                    /* WARNING: Subroutine does not return */
    FUN_02d609b4(uVar13,uVar12);
  case 0x10:
    iVar6 = 4;
  }
  return iVar6;
LAB_0516aee8:
  if (plVar10 != (long *)0x0) {
    lVar17 = *plVar10;
    uVar15 = (ulong)*(ushort *)(lVar17 + 0x12e);
    if (uVar15 != 0) {
      piVar16 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_0675f3d0) {
          puVar11 = (undefined8 *)(lVar17 + (long)*piVar16 * 0x10 + 0x138);
          goto LAB_0516afe4;
        }
        uVar15 = uVar15 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar15 != 0);
    }
    puVar11 = (undefined8 *)FUN_02d9a5d4(plVar10,*(long *)PTR_DAT_0675f3d0,0);
LAB_0516afe4:
    (*(code *)*puVar11)(plVar10,puVar11[1]);
  }
  goto LAB_0516b000;
  while( true ) {
    uVar15 = uVar15 - 1;
    piVar16 = piVar16 + 4;
    if (uVar15 == 0) break;
LAB_0516af68:
    if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_0675f3d0) {
      puVar11 = (undefined8 *)(lVar17 + (long)*piVar16 * 0x10 + 0x138);
      goto LAB_0516afbc;
    }
  }
LAB_0516af80:
  puVar11 = (undefined8 *)FUN_02d9a5d4(plVar10,*(long *)PTR_DAT_0675f3d0,0);
LAB_0516afbc:
  (*(code *)*puVar11)(plVar10,puVar11[1]);
LAB_0516b000:
  iVar6 = iVar6 + 1;
  goto LAB_0516b004;
}


