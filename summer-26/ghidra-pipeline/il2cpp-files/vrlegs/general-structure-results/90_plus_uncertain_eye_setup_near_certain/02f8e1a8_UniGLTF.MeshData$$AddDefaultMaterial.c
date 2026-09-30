/*
FUNCTION_NAME: UniGLTF.MeshData$$AddDefaultMaterial
ENTRY_POINT: 02f8e1a8
PROGRAM: vrlegs-libil2cpp.so
SCORE: 103
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_6;validity_or_gating_hits_10;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_6
*/


/* WARNING: Removing unreachable block (ram,0x02f8e09c) */
/* WARNING: Removing unreachable block (ram,0x02f8e250) */
/* WARNING: Removing unreachable block (ram,0x02f8e2c8) */

void UniGLTF_MeshData__AddDefaultMaterial(long param_1)

{
  byte bVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  undefined8 uVar5;
  long *plVar6;
  long *plVar7;
  undefined8 *puVar8;
  long *plVar9;
  ulong uVar10;
  long in_x9;
  int *piVar11;
  long *in_x10;
  long lVar12;
  long *unaff_x20;
  long *unaff_x22;
  long *unaff_x23;
  long unaff_x24;
  int unaff_w26;
  int unaff_w27;
  long unaff_x29;
  uint uStack0000000000000000;
  undefined4 uStack0000000000000004;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  long in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  long in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  
  if (in_x9 != 0) {
    piVar11 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar11 + -2) == *in_x10) {
        puVar8 = (undefined8 *)(param_1 + (long)*piVar11 * 0x10 + 0x138);
        goto code_r0x02f8e1ec;
      }
      in_x9 = in_x9 + -1;
      piVar11 = piVar11 + 4;
    } while (in_x9 != 0);
  }
  puVar8 = (undefined8 *)FUN_01a472ec();
code_r0x02f8e1ec:
  (*(code *)*puVar8)();
  if (unaff_x29 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01a28d1c();
  }
  in_stack_00000028._4_1_ = in_stack_00000028._4_1_ & 1;
  if (unaff_w27 != 1) {
    if (in_stack_00000038._4_1_ != '\0') {
      OVRManager_<>c__<InitOVRManager>b__424_0(in_stack_00000020,0);
    }
                    /* WARNING: Subroutine does not return */
    FUN_01b3fef0();
  }
  plVar9 = (long *)__cxa_begin_catch();
  lVar12 = *plVar9;
  __cxa_end_catch();
  iVar4 = 0;
  while( true ) {
    if (in_stack_00000038._4_1_ != '\0') {
      OVRManager_<>c__<InitOVRManager>b__424_0(in_stack_00000020,0);
    }
    if (lVar12 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01a28d1c(lVar12);
    }
    if ((iVar4 != 9) && (iVar4 != 0)) {
      return;
    }
    if (in_stack_00000028._4_1_ == 0) {
      plVar9 = (long *)unaff_x20[2];
      if (plVar9 == (long *)0x0) break;
      plVar9 = (long *)(**(code **)(*plVar9 + 0x3c8))
                                 (plVar9,*(undefined8 *)PTR_DAT_03cc16b8,
                                  *(undefined8 *)(*plVar9 + 0x3d0));
      if (plVar9 != (long *)0x0) {
        bVar1 = *(byte *)(*(long *)PTR_DAT_03d256f0 + 0x130);
        if ((*(byte *)(*plVar9 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*plVar9 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_03d256f0
           )) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6ee0(plVar9);
        }
        FUN_02f89f1c(plVar9,1);
        FUN_02f8e2fc(in_stack_00000030,in_stack_00000008,plVar9,uStack0000000000000004,
                     uStack0000000000000000 & 1,in_stack_00000010._4_4_ & 1);
      }
    }
    plVar9 = (long *)unaff_x20[2];
    if (plVar9 == (long *)0x0) break;
    iVar4 = (**(code **)(*plVar9 + 0x2a8))(plVar9,*(undefined8 *)(*plVar9 + 0x2b0));
    if (iVar4 == 0) {
      FUN_02215a88(in_stack_00000018,unaff_w26,&stack0x00000048,*(undefined8 *)PTR_DAT_03cbfc10);
      FUN_02f8a7e0(in_stack_00000030,in_stack_00000048,0);
    }
    do {
      unaff_w26 = unaff_w26 + 1;
      if (*(int *)(in_stack_00000018 + 0x18) <= unaff_w26) {
        return;
      }
      plVar9 = *(long **)(in_stack_00000030 + 0x10);
      if (plVar9 == (long *)0x0) goto UniGLTF_MeshData__PushIndices;
      uVar5 = (**(code **)(*plVar9 + 0x3b8))(plVar9,*(undefined8 *)(*plVar9 + 0x3c0));
      in_stack_00000038._4_1_ = '\0';
      FUN_027e0bd8(uVar5,(long)&stack0x00000038 + 4,0);
      plVar9 = *(long **)(in_stack_00000030 + 0x10);
      FUN_02215a88(in_stack_00000018,unaff_w26,&stack0x00000040,*(undefined8 *)PTR_DAT_03cbfc10);
      if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      unaff_x20 = (long *)(**(code **)(*plVar9 + 0x308))
                                    (plVar9,in_stack_00000040,*(undefined8 *)(*plVar9 + 0x310));
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
        OVRManager_<>c__<InitOVRManager>b__424_0(uVar5,0);
      }
    } while (unaff_x20 == (long *)0x0);
    plVar9 = (long *)unaff_x20[2];
    if (plVar9 == (long *)0x0) break;
    in_stack_00000020 = (**(code **)(*plVar9 + 0x308))(plVar9,*(undefined8 *)(*plVar9 + 0x310));
    in_stack_00000038._4_1_ = '\0';
    FUN_027e0bd8(in_stack_00000020,(long)&stack0x00000038 + 4,0);
    plVar9 = (long *)unaff_x20[2];
    if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    plVar9 = (long *)(**(code **)(*plVar9 + 0x388))(plVar9,*(undefined8 *)(*plVar9 + 0x390));
    in_stack_00000028._4_1_ = 0;
    bVar3 = false;
LAB_02f8dcb4:
    do {
      if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      lVar12 = *plVar9;
      uVar10 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *unaff_x23) {
            puVar8 = (undefined8 *)(lVar12 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_02f8dd08;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar8 = (undefined8 *)FUN_01a472ec(plVar9,*unaff_x23,0);
LAB_02f8dd08:
      uVar10 = (*(code *)*puVar8)(plVar9,puVar8[1]);
      if ((uVar10 & 1) == 0) break;
      lVar12 = *plVar9;
      uVar10 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *unaff_x23) {
            puVar8 = (undefined8 *)(lVar12 + (long)(*piVar11 + 1) * 0x10 + 0x138);
            goto LAB_02f8dd68;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar8 = (undefined8 *)FUN_01a472ec(plVar9,*unaff_x23,1);
LAB_02f8dd68:
      plVar6 = (long *)(*(code *)*puVar8)(plVar9,puVar8[1]);
      if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      if (*(long *)(*plVar6 + 0x40) != *(long *)(*unaff_x22 + 0x40)) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6ee0();
      }
      plVar7 = (long *)thunk_FUN_01a89fbc();
      plVar6 = (long *)*plVar7;
      plVar7 = (long *)plVar7[1];
      if ((plVar6 != (long *)0x0) && (*plVar6 != *(long *)PTR_DAT_03cbebc0)) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6ee0(plVar6);
      }
      if (unaff_x24 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      lVar12 = FUN_02ea0efc();
      uVar5 = FUN_02f87380(plVar6);
      if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c(uVar5,uVar5);
      }
      uVar10 = FUN_025bd594(lVar12,uVar5,0);
      if ((uVar10 & 1) != 0) {
        if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        bVar1 = *(byte *)(*(long *)PTR_DAT_03d256f0 + 0x130);
        if ((*(byte *)(*plVar7 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*plVar7 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_03d256f0
           )) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6ee0(plVar7);
        }
        FUN_02f89f1c(plVar7,1);
        FUN_02f8e2fc(in_stack_00000030,in_stack_00000008,plVar7,uStack0000000000000004,
                     uStack0000000000000000 & 1,in_stack_00000010._4_4_ & 1);
        uVar10 = thunk_FUN_025bd1c0(plVar6,*(undefined8 *)PTR_DAT_03cc16b8,0);
        bVar3 = true;
        if ((uVar10 & 1) != 0) {
          in_stack_00000028._4_1_ = 1;
        }
        goto LAB_02f8dcb4;
      }
      bVar2 = !bVar3;
      bVar3 = false;
    } while (bVar2);
    iVar4 = 9;
    plVar9 = (long *)thunk_FUN_01a89d6c(plVar9,*(undefined8 *)PTR_DAT_03cbed08);
    if (plVar9 != (long *)0x0) {
      lVar12 = *plVar9;
      uVar10 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_03cbed08) {
            puVar8 = (undefined8 *)(lVar12 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_02f8df0c;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar8 = (undefined8 *)FUN_01a472ec(plVar9,*(long *)PTR_DAT_03cbed08,0);
LAB_02f8df0c:
      (*(code *)*puVar8)(plVar9,puVar8[1]);
    }
    lVar12 = 0;
  }
UniGLTF_MeshData__PushIndices:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


