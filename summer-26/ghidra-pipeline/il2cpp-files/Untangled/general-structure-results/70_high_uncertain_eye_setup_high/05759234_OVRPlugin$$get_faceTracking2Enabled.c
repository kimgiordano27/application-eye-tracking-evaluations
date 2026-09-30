/*
FUNCTION_NAME: OVRPlugin$$get_faceTracking2Enabled
ENTRY_POINT: 05759234
PROGRAM: Untangled-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_14;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__get_faceTracking2Enabled(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  undefined8 uVar10;
  ulong uVar11;
  long *plVar12;
  long *plVar13;
  undefined8 *puVar14;
  long lVar15;
  long lVar16;
  int *piVar17;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  undefined8 uVar18;
  
  FUN_02f07e70(*(undefined8 *)(param_1 + 0xcf0));
  FUN_02f07e70(PTR_DAT_06d03d00);
  FUN_02f07e70(PTR_DAT_06d02350);
  FUN_02f07e70(PTR_DAT_06d01eb0);
  *(undefined1 *)(unaff_x22 + 0xa70) = 1;
  if ((unaff_x19 != 0) && (lVar7 = FUN_05b61ec8(), unaff_x21 != (long *)0x0)) {
    FUN_05698e6c();
    iVar6 = (**(code **)(*unaff_x21 + 0x238))();
    puVar5 = PTR_DAT_06d59700;
    puVar3 = PTR_DAT_06d15f58;
    puVar2 = PTR_DAT_06d01eb0;
    if (iVar6 == 4) {
      do {
        plVar8 = (long *)(**(code **)(*unaff_x21 + 0x248))();
        if ((plVar8 != (long *)0x0) && (*plVar8 != *(long *)PTR_DAT_06d02350)) {
                    /* WARNING: Subroutine does not return */
          FUN_02f08440(plVar8);
        }
        FUN_05698e6c();
        if (*(long *)(unaff_x19 + 0x40) == 0) goto LAB_057596d8;
        lVar9 = FUN_05b8e528(*(long *)(unaff_x19 + 0x40),plVar8,0);
        if (lVar9 == 0) {
          uVar10 = FUN_057596e4();
          lVar9 = thunk_FUN_02ef1808(*(undefined8 *)PTR_DAT_06d59708);
          FUN_05b6aad0(lVar9,plVar8,uVar10,0);
          if ((*(long *)(unaff_x19 + 0x40) == 0) ||
             (FUN_05b9011c(*(long *)(unaff_x19 + 0x40),lVar9,0), lVar9 == 0)) goto LAB_057596d8;
        }
        uVar10 = *(undefined8 *)(lVar9 + 0x38);
        uVar18 = *(undefined8 *)puVar5;
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_02f12b58();
        }
        uVar18 = FUN_056109c0(uVar18,0);
        uVar11 = FUN_05619d34(uVar10,uVar18,0);
        if ((uVar11 & 1) == 0) {
          if (*(long *)(lVar9 + 0x38) == 0) goto LAB_057596d8;
          uVar11 = FUN_0561b9b8(*(long *)(lVar9 + 0x38),0);
          if ((uVar11 & 1) != 0) {
            uVar10 = *(undefined8 *)(lVar9 + 0x38);
            uVar18 = *(undefined8 *)PTR_DAT_06d04070;
            if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
              thunk_FUN_02f12b58();
            }
            uVar18 = FUN_056109c0(uVar18,0);
            uVar11 = FUN_0561ab0c(uVar10,uVar18,0);
            if ((uVar11 & 1) != 0) {
              iVar6 = (**(code **)(*unaff_x21 + 0x238))();
              if (iVar6 == 2) {
                FUN_05698e6c();
              }
              plVar12 = (long *)thunk_FUN_02ef1808(*(undefined8 *)PTR_DAT_06d03d00);
              FUN_03fd0468(plVar12,*(undefined8 *)PTR_DAT_06d03ce8);
              while (iVar6 = (**(code **)(*unaff_x21 + 0x238))(), iVar6 != 0xe) {
                uVar10 = (**(code **)(*unaff_x21 + 0x248))();
                if (plVar12 == (long *)0x0) goto LAB_057596d8;
                lVar15 = plVar12[2];
                lVar16 = *(long *)puVar3;
                *(int *)((long)plVar12 + 0x1c) = *(int *)((long)plVar12 + 0x1c) + 1;
                if (lVar15 == 0) goto LAB_057596d8;
                uVar1 = *(uint *)(plVar12 + 3);
                if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                  *(uint *)(plVar12 + 3) = uVar1 + 1;
                  *(undefined8 *)(lVar15 + (long)(int)uVar1 * 8 + 0x20) = uVar10;
                  thunk_FUN_02f411dc();
                }
                else {
                  FUN_03fd0c9c(plVar12,uVar10,
                               *(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
                }
                FUN_05698e6c();
              }
              plVar13 = *(long **)(lVar9 + 0x38);
              if ((plVar13 != (long *)0x0) &&
                 (uVar10 = (**(code **)(*plVar13 + 0x428))
                                     (plVar13,*(undefined8 *)(*plVar13 + 0x430)),
                 plVar12 != (long *)0x0)) {
                lVar9 = FUN_0562816c(uVar10,(int)plVar12[3],0);
                lVar15 = *plVar12;
                uVar11 = (ulong)*(ushort *)(lVar15 + 0x12e);
                if (uVar11 != 0) {
                  piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar17 + -2) == *(long *)PTR_DAT_06d03d68) {
                      puVar14 = (undefined8 *)(lVar15 + (long)*piVar17 * 0x10 + 0x138);
                      goto LAB_05759680;
                    }
                    uVar11 = uVar11 - 1;
                    piVar17 = piVar17 + 4;
                  } while (uVar11 != 0);
                }
                puVar14 = (undefined8 *)FUN_02eea86c(plVar12,*(long *)PTR_DAT_06d03d68,0);
LAB_05759680:
                (*(code *)*puVar14)(plVar12,lVar9,0,puVar14[1]);
                goto joined_r0x05759694;
              }
              goto LAB_057596d8;
            }
          }
          lVar9 = (**(code **)(*unaff_x21 + 0x248))();
          if (lVar9 != 0) {
            if (unaff_x20 == 0) goto LAB_057596d8;
            lVar9 = FUN_0569200c();
            if (lVar9 != 0) goto joined_r0x05759694;
          }
          puVar4 = PTR_DAT_06d4d140;
          lVar9 = *(long *)PTR_DAT_06d4d140;
          if (*(int *)(lVar9 + 0xe0) == 0) {
            thunk_FUN_02f12b58();
            lVar9 = *(long *)puVar4;
          }
          lVar9 = **(long **)(lVar9 + 0xb8);
        }
        else {
          iVar6 = (**(code **)(*unaff_x21 + 0x238))();
          if (iVar6 == 2) {
            FUN_05698e6c();
          }
          lVar9 = thunk_FUN_02ef1808(*(undefined8 *)PTR_DAT_06d596f0);
          FUN_05b51290(lVar9,0);
          while (iVar6 = (**(code **)(*unaff_x21 + 0x238))(), iVar6 != 0xe) {
            FUN_057591a0();
            FUN_05698e6c();
          }
        }
joined_r0x05759694:
        if (lVar7 == 0) goto LAB_057596d8;
        FUN_05b9a92c(lVar7,plVar8,lVar9,0);
        FUN_05698e6c();
        iVar6 = (**(code **)(*unaff_x21 + 0x238))();
      } while (iVar6 == 4);
    }
    else if (lVar7 == 0) goto LAB_057596d8;
    FUN_05b9af18(lVar7,0);
    if (*(long *)(unaff_x19 + 0x38) != 0) {
      FUN_05b9d918(*(long *)(unaff_x19 + 0x38),lVar7,0);
      return;
    }
  }
LAB_057596d8:
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


