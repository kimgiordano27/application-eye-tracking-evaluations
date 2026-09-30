/*
FUNCTION_NAME: UniGLTF.MeshData$$DropUnusedVertices
ENTRY_POINT: 02f8dfac
PROGRAM: vrlegs-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_7;functionality_eye_api_context_without_clear_sink_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x02f8e09c) */
/* WARNING: Removing unreachable block (ram,0x02f8df34) */
/* WARNING: Removing unreachable block (ram,0x02f8e250) */
/* WARNING: Removing unreachable block (ram,0x02f8df60) */
/* WARNING: Removing unreachable block (ram,0x02f8e258) */

void UniGLTF_MeshData__DropUnusedVertices(long param_1,undefined8 param_2,long param_3)

{
  byte bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long *plVar8;
  long *plVar9;
  undefined8 uVar10;
  long *plVar11;
  long lVar12;
  ulong uVar13;
  ulong in_x9;
  uint in_w10;
  int *piVar14;
  long *unaff_x19;
  long *unaff_x20;
  long *unaff_x22;
  long *unaff_x23;
  long unaff_x24;
  int unaff_w26;
  long unaff_x28;
  uint uStack0000000000000000;
  undefined4 uStack0000000000000004;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  long in_stack_00000018;
  long in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  
  do {
    if ((in_w10 < (uint)in_x9) || (*(long *)(*(long *)(param_1 + 200) + in_x9 * 8 + -8) != param_3))
    {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6ee0(unaff_x19);
    }
    FUN_02f89f1c(unaff_x19,1);
    FUN_02f8e2fc(in_stack_00000030,in_stack_00000008,unaff_x19,uStack0000000000000004,
                 uStack0000000000000000 & 1,in_stack_00000010._4_4_ & 1);
    do {
      do {
        plVar11 = (long *)unaff_x20[2];
        if (plVar11 == (long *)0x0) {
UniGLTF_MeshData__PushIndices:
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        iVar5 = (**(code **)(*plVar11 + 0x2a8))(plVar11,*(undefined8 *)(*plVar11 + 0x2b0));
        if (iVar5 == 0) {
          FUN_02215a88(unaff_x28,unaff_w26,&stack0x00000048,*(undefined8 *)PTR_DAT_03cbfc10);
          FUN_02f8a7e0(in_stack_00000030,in_stack_00000048,0);
        }
        do {
          unaff_w26 = unaff_w26 + 1;
          if (*(int *)(unaff_x28 + 0x18) <= unaff_w26) {
            return;
          }
          plVar11 = *(long **)(in_stack_00000030 + 0x10);
          if (plVar11 == (long *)0x0) goto UniGLTF_MeshData__PushIndices;
          uVar6 = (**(code **)(*plVar11 + 0x3b8))(plVar11,*(undefined8 *)(*plVar11 + 0x3c0));
          in_stack_00000038._4_1_ = '\0';
          FUN_027e0bd8(uVar6,(long)&stack0x00000038 + 4,0);
          plVar11 = *(long **)(in_stack_00000030 + 0x10);
          FUN_02215a88(unaff_x28,unaff_w26,&stack0x00000040,*(undefined8 *)PTR_DAT_03cbfc10);
          if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c3c();
          }
          unaff_x20 = (long *)(**(code **)(*plVar11 + 0x308))
                                        (plVar11,in_stack_00000040,*(undefined8 *)(*plVar11 + 0x310)
                                        );
          if (unaff_x20 != (long *)0x0) {
            bVar1 = *(byte *)(*(long *)PTR_DAT_03d256f8 + 0x130);
            if ((*(byte *)(*unaff_x20 + 0x130) < bVar1) ||
               (*(long *)(*(long *)(*unaff_x20 + 200) + (ulong)bVar1 * 8 + -8) !=
                *(long *)PTR_DAT_03d256f8)) {
                    /* WARNING: Subroutine does not return */
              FUN_01ab6ee0();
            }
          }
          if (in_stack_00000038._4_1_ != '\0') {
            OVRManager_<>c__<InitOVRManager>b__424_0(uVar6,0);
          }
        } while (unaff_x20 == (long *)0x0);
        plVar11 = (long *)unaff_x20[2];
        if (plVar11 == (long *)0x0) goto UniGLTF_MeshData__PushIndices;
        uVar6 = (**(code **)(*plVar11 + 0x308))(plVar11,*(undefined8 *)(*plVar11 + 0x310));
        in_stack_00000038._4_1_ = '\0';
        FUN_027e0bd8(uVar6,(long)&stack0x00000038 + 4,0);
        plVar11 = (long *)unaff_x20[2];
        if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        plVar11 = (long *)(**(code **)(*plVar11 + 0x388))(plVar11,*(undefined8 *)(*plVar11 + 0x390))
        ;
        bVar4 = false;
        bVar3 = false;
LAB_02f8dcb4:
        do {
          if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c3c();
          }
          lVar12 = *plVar11;
          uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
          if (uVar13 != 0) {
            piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
            do {
              if (*(long *)(piVar14 + -2) == *unaff_x23) {
                puVar7 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
                goto LAB_02f8dd08;
              }
              uVar13 = uVar13 - 1;
              piVar14 = piVar14 + 4;
            } while (uVar13 != 0);
          }
          puVar7 = (undefined8 *)FUN_01a472ec(plVar11,*unaff_x23,0);
LAB_02f8dd08:
          uVar13 = (*(code *)*puVar7)(plVar11,puVar7[1]);
          if ((uVar13 & 1) == 0) break;
          lVar12 = *plVar11;
          uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
          if (uVar13 != 0) {
            piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
            do {
              if (*(long *)(piVar14 + -2) == *unaff_x23) {
                puVar7 = (undefined8 *)(lVar12 + (long)(*piVar14 + 1) * 0x10 + 0x138);
                goto LAB_02f8dd68;
              }
              uVar13 = uVar13 - 1;
              piVar14 = piVar14 + 4;
            } while (uVar13 != 0);
          }
          puVar7 = (undefined8 *)FUN_01a472ec(plVar11,*unaff_x23,1);
LAB_02f8dd68:
          plVar8 = (long *)(*(code *)*puVar7)(plVar11,puVar7[1]);
          if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c3c();
          }
          if (*(long *)(*plVar8 + 0x40) != *(long *)(*unaff_x22 + 0x40)) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6ee0();
          }
          plVar9 = (long *)thunk_FUN_01a89fbc();
          plVar8 = (long *)*plVar9;
          plVar9 = (long *)plVar9[1];
          if ((plVar8 != (long *)0x0) && (*plVar8 != *(long *)PTR_DAT_03cbebc0)) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6ee0(plVar8);
          }
          if (unaff_x24 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c3c();
          }
          lVar12 = FUN_02ea0efc();
          uVar10 = FUN_02f87380(plVar8);
          if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c3c(uVar10,uVar10);
          }
          uVar13 = FUN_025bd594(lVar12,uVar10,0);
          if ((uVar13 & 1) != 0) {
            if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01ab6c3c();
            }
            bVar1 = *(byte *)(*(long *)PTR_DAT_03d256f0 + 0x130);
            if ((*(byte *)(*plVar9 + 0x130) < bVar1) ||
               (*(long *)(*(long *)(*plVar9 + 200) + (ulong)bVar1 * 8 + -8) !=
                *(long *)PTR_DAT_03d256f0)) {
                    /* WARNING: Subroutine does not return */
              FUN_01ab6ee0(plVar9);
            }
            FUN_02f89f1c(plVar9,1);
            FUN_02f8e2fc(in_stack_00000030,in_stack_00000008,plVar9,uStack0000000000000004,
                         uStack0000000000000000 & 1,in_stack_00000010._4_4_ & 1);
            uVar13 = thunk_FUN_025bd1c0(plVar8,*(undefined8 *)PTR_DAT_03cc16b8,0);
            bVar3 = true;
            if ((uVar13 & 1) != 0) {
              bVar4 = true;
            }
            goto LAB_02f8dcb4;
          }
          bVar2 = !bVar3;
          bVar3 = false;
        } while (bVar2);
        plVar11 = (long *)thunk_FUN_01a89d6c(plVar11,*(undefined8 *)PTR_DAT_03cbed08);
        if (plVar11 != (long *)0x0) {
          lVar12 = *plVar11;
          uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
          if (uVar13 != 0) {
            piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
            do {
              if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_03cbed08) {
                puVar7 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
                goto LAB_02f8df0c;
              }
              uVar13 = uVar13 - 1;
              piVar14 = piVar14 + 4;
            } while (uVar13 != 0);
          }
          puVar7 = (undefined8 *)FUN_01a472ec(plVar11,*(long *)PTR_DAT_03cbed08,0);
LAB_02f8df0c:
          (*(code *)*puVar7)(plVar11,puVar7[1]);
        }
        if (in_stack_00000038._4_1_ != '\0') {
          OVRManager_<>c__<InitOVRManager>b__424_0(uVar6,0);
        }
        unaff_x28 = in_stack_00000018;
      } while (bVar4);
      plVar11 = (long *)unaff_x20[2];
      if (plVar11 == (long *)0x0) goto UniGLTF_MeshData__PushIndices;
      unaff_x19 = (long *)(**(code **)(*plVar11 + 0x3c8))
                                    (plVar11,*(undefined8 *)PTR_DAT_03cc16b8,
                                     *(undefined8 *)(*plVar11 + 0x3d0));
    } while (unaff_x19 == (long *)0x0);
    param_1 = *unaff_x19;
    in_w10 = (uint)*(byte *)(param_1 + 0x130);
    param_3 = *(long *)PTR_DAT_03d256f0;
    in_x9 = (ulong)*(byte *)(param_3 + 0x130);
  } while( true );
}


