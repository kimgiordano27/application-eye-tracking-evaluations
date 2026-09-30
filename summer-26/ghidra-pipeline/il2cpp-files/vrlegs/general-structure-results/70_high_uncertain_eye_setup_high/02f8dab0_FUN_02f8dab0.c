/*
FUNCTION_NAME: FUN_02f8dab0
ENTRY_POINT: 02f8dab0
PROGRAM: vrlegs-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_8;functionality_eye_api_context_without_clear_sink_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x02f8e09c) */
/* WARNING: Removing unreachable block (ram,0x02f8df34) */
/* WARNING: Removing unreachable block (ram,0x02f8e250) */
/* WARNING: Removing unreachable block (ram,0x02f8df60) */
/* WARNING: Removing unreachable block (ram,0x02f8e258) */

void FUN_02f8dab0(long param_1,long param_2,uint param_3,undefined4 param_4,undefined8 param_5,
                 long param_6,uint param_7)

{
  byte bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  long *plVar8;
  undefined8 uVar9;
  long *plVar10;
  undefined8 *puVar11;
  long *plVar12;
  long *plVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  int *piVar18;
  int iVar19;
  char local_74 [4];
  undefined8 local_70;
  undefined8 local_68;
  
  if ((DAT_0412ad5c & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03d256f0);
    FUN_01ab69ac(PTR_DAT_03cdb5d0);
    FUN_01ab69ac(PTR_DAT_03cbed08);
    FUN_01ab69ac(PTR_DAT_03cbed20);
    FUN_01ab69ac(PTR_DAT_03cc1600);
    FUN_01ab69ac(PTR_DAT_03cbfc10);
    FUN_01ab69ac(PTR_DAT_03d256f8);
    FUN_01ab69ac(PTR_DAT_03cbebc0);
    FUN_01ab69ac(PTR_DAT_03cc16b8);
    DAT_0412ad5c = 1;
  }
  puVar6 = PTR_DAT_03cdb5d0;
  puVar5 = PTR_DAT_03cbed20;
  local_74[0] = '\0';
  if (param_6 == 0) {
UniGLTF_MeshData__PushIndices:
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  if (0 < *(int *)(param_6 + 0x18)) {
    iVar19 = 0;
    do {
      plVar8 = *(long **)(param_1 + 0x10);
      if (plVar8 == (long *)0x0) goto UniGLTF_MeshData__PushIndices;
      uVar9 = (**(code **)(*plVar8 + 0x3b8))(plVar8,*(undefined8 *)(*plVar8 + 0x3c0));
      local_74[0] = '\0';
      FUN_027e0bd8(uVar9,local_74,0);
      plVar8 = *(long **)(param_1 + 0x10);
      FUN_02215a88(param_6,iVar19,&local_70,*(undefined8 *)PTR_DAT_03cbfc10);
      if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      plVar8 = (long *)(**(code **)(*plVar8 + 0x308))
                                 (plVar8,local_70,*(undefined8 *)(*plVar8 + 0x310));
      if (plVar8 != (long *)0x0) {
        bVar1 = *(byte *)(*(long *)PTR_DAT_03d256f8 + 0x130);
        if ((*(byte *)(*plVar8 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*plVar8 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_03d256f8
           )) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6ee0();
        }
      }
      if (local_74[0] != '\0') {
        OVRManager_<>c__<InitOVRManager>b__424_0(uVar9,0);
      }
      if (plVar8 != (long *)0x0) {
        plVar10 = (long *)plVar8[2];
        if (plVar10 == (long *)0x0) goto UniGLTF_MeshData__PushIndices;
        uVar9 = (**(code **)(*plVar10 + 0x308))(plVar10,*(undefined8 *)(*plVar10 + 0x310));
        local_74[0] = '\0';
        FUN_027e0bd8(uVar9,local_74,0);
        plVar10 = (long *)plVar8[2];
        if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        plVar10 = (long *)(**(code **)(*plVar10 + 0x388))(plVar10,*(undefined8 *)(*plVar10 + 0x390))
        ;
        bVar4 = false;
        bVar3 = false;
LAB_02f8dcb4:
        do {
          if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c3c();
          }
          lVar16 = *plVar10;
          lVar15 = *(long *)puVar5;
          uVar17 = (ulong)*(ushort *)(lVar16 + 0x12e);
          if (uVar17 != 0) {
            piVar18 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
            do {
              if (*(long *)(piVar18 + -2) == lVar15) {
                puVar11 = (undefined8 *)(lVar16 + (long)*piVar18 * 0x10 + 0x138);
                goto LAB_02f8dd08;
              }
              uVar17 = uVar17 - 1;
              piVar18 = piVar18 + 4;
            } while (uVar17 != 0);
          }
          puVar11 = (undefined8 *)FUN_01a472ec(plVar10,lVar15,0);
LAB_02f8dd08:
          uVar17 = (*(code *)*puVar11)(plVar10,puVar11[1]);
          if ((uVar17 & 1) == 0) break;
          lVar16 = *plVar10;
          lVar15 = *(long *)puVar5;
          uVar17 = (ulong)*(ushort *)(lVar16 + 0x12e);
          if (uVar17 != 0) {
            piVar18 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
            do {
              if (*(long *)(piVar18 + -2) == lVar15) {
                puVar11 = (undefined8 *)(lVar16 + (long)(*piVar18 + 1) * 0x10 + 0x138);
                goto LAB_02f8dd68;
              }
              uVar17 = uVar17 - 1;
              piVar18 = piVar18 + 4;
            } while (uVar17 != 0);
          }
          puVar11 = (undefined8 *)FUN_01a472ec(plVar10,lVar15,1);
LAB_02f8dd68:
          plVar12 = (long *)(*(code *)*puVar11)(plVar10,puVar11[1]);
          if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c3c();
          }
          if (*(long *)(*plVar12 + 0x40) != *(long *)(*(long *)puVar6 + 0x40)) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6ee0();
          }
          plVar13 = (long *)thunk_FUN_01a89fbc();
          plVar12 = (long *)*plVar13;
          plVar13 = (long *)plVar13[1];
          if ((plVar12 != (long *)0x0) && (*plVar12 != *(long *)PTR_DAT_03cbebc0)) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6ee0(plVar12);
          }
          if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c3c();
          }
          lVar15 = FUN_02ea0efc(param_2,0);
          uVar14 = FUN_02f87380(plVar12);
          if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c3c(uVar14,uVar14);
          }
          uVar17 = FUN_025bd594(lVar15,uVar14,0);
          if ((uVar17 & 1) != 0) {
            if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01ab6c3c();
            }
            bVar1 = *(byte *)(*(long *)PTR_DAT_03d256f0 + 0x130);
            if ((*(byte *)(*plVar13 + 0x130) < bVar1) ||
               (*(long *)(*(long *)(*plVar13 + 200) + (ulong)bVar1 * 8 + -8) !=
                *(long *)PTR_DAT_03d256f0)) {
                    /* WARNING: Subroutine does not return */
              FUN_01ab6ee0(plVar13);
            }
            FUN_02f89f1c(plVar13,1);
            FUN_02f8e2fc(param_1,param_5,plVar13,param_4,param_3 & 1,param_7 & 1);
            uVar17 = thunk_FUN_025bd1c0(plVar12,*(undefined8 *)PTR_DAT_03cc16b8,0);
            bVar3 = true;
            if ((uVar17 & 1) != 0) {
              bVar4 = true;
            }
            goto LAB_02f8dcb4;
          }
          bVar2 = !bVar3;
          bVar3 = false;
        } while (bVar2);
        plVar10 = (long *)thunk_FUN_01a89d6c(plVar10,*(undefined8 *)PTR_DAT_03cbed08);
        if (plVar10 != (long *)0x0) {
          lVar15 = *plVar10;
          uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
          if (uVar17 != 0) {
            piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
            do {
              if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_03cbed08) {
                puVar11 = (undefined8 *)(lVar15 + (long)*piVar18 * 0x10 + 0x138);
                goto LAB_02f8df0c;
              }
              uVar17 = uVar17 - 1;
              piVar18 = piVar18 + 4;
            } while (uVar17 != 0);
          }
          puVar11 = (undefined8 *)FUN_01a472ec(plVar10,*(long *)PTR_DAT_03cbed08,0);
LAB_02f8df0c:
          (*(code *)*puVar11)(plVar10,puVar11[1]);
        }
        if (local_74[0] != '\0') {
          OVRManager_<>c__<InitOVRManager>b__424_0(uVar9,0);
        }
        if (!bVar4) {
          plVar10 = (long *)plVar8[2];
          if (plVar10 == (long *)0x0) goto UniGLTF_MeshData__PushIndices;
          plVar10 = (long *)(**(code **)(*plVar10 + 0x3c8))
                                      (plVar10,*(undefined8 *)PTR_DAT_03cc16b8,
                                       *(undefined8 *)(*plVar10 + 0x3d0));
          if (plVar10 != (long *)0x0) {
            bVar1 = *(byte *)(*(long *)PTR_DAT_03d256f0 + 0x130);
            if ((*(byte *)(*plVar10 + 0x130) < bVar1) ||
               (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar1 * 8 + -8) !=
                *(long *)PTR_DAT_03d256f0)) {
                    /* WARNING: Subroutine does not return */
              FUN_01ab6ee0(plVar10);
            }
            FUN_02f89f1c(plVar10,1);
            FUN_02f8e2fc(param_1,param_5,plVar10,param_4,param_3 & 1,param_7 & 1);
          }
        }
        plVar8 = (long *)plVar8[2];
        if (plVar8 == (long *)0x0) goto UniGLTF_MeshData__PushIndices;
        iVar7 = (**(code **)(*plVar8 + 0x2a8))(plVar8,*(undefined8 *)(*plVar8 + 0x2b0));
        if (iVar7 == 0) {
          FUN_02215a88(param_6,iVar19,&local_68,*(undefined8 *)PTR_DAT_03cbfc10);
          FUN_02f8a7e0(param_1,local_68,0);
        }
      }
      iVar19 = iVar19 + 1;
    } while (iVar19 < *(int *)(param_6 + 0x18));
  }
  return;
}


