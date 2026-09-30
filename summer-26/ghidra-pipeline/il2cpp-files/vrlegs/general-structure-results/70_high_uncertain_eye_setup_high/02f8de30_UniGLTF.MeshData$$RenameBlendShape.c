/*
FUNCTION_NAME: UniGLTF.MeshData$$RenameBlendShape
ENTRY_POINT: 02f8de30
PROGRAM: vrlegs-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x02f8e250) */
/* WARNING: Removing unreachable block (ram,0x02f8e09c) */
/* WARNING: Removing unreachable block (ram,0x02f8df34) */
/* WARNING: Removing unreachable block (ram,0x02f8df60) */
/* WARNING: Removing unreachable block (ram,0x02f8e258) */

void UniGLTF_MeshData__RenameBlendShape(undefined8 param_1,undefined8 param_2)

{
  byte bVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  int *piVar10;
  long *unaff_x19;
  long *unaff_x20;
  long *unaff_x22;
  long *unaff_x23;
  long unaff_x24;
  int unaff_w26;
  long *unaff_x28;
  long *unaff_x29;
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
  
  do {
    FUN_02f89f1c(unaff_x19,param_2);
    FUN_02f8e2fc(in_stack_00000030,in_stack_00000008,unaff_x19,uStack0000000000000004,
                 uStack0000000000000000 & 1,in_stack_00000010._4_4_ & 1);
    uVar8 = thunk_FUN_025bd1c0(unaff_x29,*(undefined8 *)PTR_DAT_03cc16b8,0);
    bVar3 = true;
    if ((uVar8 & 1) != 0) {
      in_stack_00000028._4_1_ = '\x01';
    }
LAB_02f8dcb4:
    if (unaff_x28 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    lVar9 = *unaff_x28;
    uVar8 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar8 != 0) {
      piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *unaff_x23) {
          puVar5 = (undefined8 *)(lVar9 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_02f8dd08;
        }
        uVar8 = uVar8 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar8 != 0);
    }
    puVar5 = (undefined8 *)FUN_01a472ec(unaff_x28,*unaff_x23,0);
LAB_02f8dd08:
    uVar8 = (*(code *)*puVar5)(unaff_x28,puVar5[1]);
    if ((uVar8 & 1) == 0) goto LAB_02f8de98;
    lVar9 = *unaff_x28;
    uVar8 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar8 != 0) {
      piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *unaff_x23) {
          puVar5 = (undefined8 *)(lVar9 + (long)(*piVar10 + 1) * 0x10 + 0x138);
          goto LAB_02f8dd68;
        }
        uVar8 = uVar8 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar8 != 0);
    }
    puVar5 = (undefined8 *)FUN_01a472ec(unaff_x28,*unaff_x23,1);
LAB_02f8dd68:
    plVar6 = (long *)(*(code *)*puVar5)(unaff_x28,puVar5[1]);
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    if (*(long *)(*plVar6 + 0x40) != *(long *)(*unaff_x22 + 0x40)) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6ee0();
    }
    plVar6 = (long *)thunk_FUN_01a89fbc();
    unaff_x29 = (long *)*plVar6;
    unaff_x19 = (long *)plVar6[1];
    if ((unaff_x29 != (long *)0x0) && (*unaff_x29 != *(long *)PTR_DAT_03cbebc0)) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6ee0(unaff_x29);
    }
    if (unaff_x24 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    lVar9 = FUN_02ea0efc();
    uVar7 = FUN_02f87380(unaff_x29);
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c(uVar7,uVar7);
    }
    uVar8 = FUN_025bd594(lVar9,uVar7,0);
    if ((uVar8 & 1) == 0) break;
    if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    bVar1 = *(byte *)(*(long *)PTR_DAT_03d256f0 + 0x130);
    if ((*(byte *)(*unaff_x19 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*unaff_x19 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_03d256f0)
       ) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6ee0(unaff_x19);
    }
    param_2 = 1;
  } while( true );
  bVar2 = !bVar3;
  bVar3 = false;
  if (bVar2) goto LAB_02f8dcb4;
LAB_02f8de98:
  plVar6 = (long *)thunk_FUN_01a89d6c(unaff_x28,*(undefined8 *)PTR_DAT_03cbed08);
  if (plVar6 != (long *)0x0) {
    lVar9 = *plVar6;
    uVar8 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar8 != 0) {
      piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_03cbed08) {
          puVar5 = (undefined8 *)(lVar9 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_02f8df0c;
        }
        uVar8 = uVar8 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar8 != 0);
    }
    puVar5 = (undefined8 *)FUN_01a472ec(plVar6,*(long *)PTR_DAT_03cbed08,0);
LAB_02f8df0c:
    (*(code *)*puVar5)(plVar6,puVar5[1]);
  }
  if (in_stack_00000038._4_1_ != '\0') {
    OVRManager_<>c__<InitOVRManager>b__424_0(in_stack_00000020,0);
  }
  if (in_stack_00000028._4_1_ == '\0') {
    plVar6 = (long *)unaff_x20[2];
    if (plVar6 == (long *)0x0) goto UniGLTF_MeshData__PushIndices;
    plVar6 = (long *)(**(code **)(*plVar6 + 0x3c8))
                               (plVar6,*(undefined8 *)PTR_DAT_03cc16b8,
                                *(undefined8 *)(*plVar6 + 0x3d0));
    if (plVar6 != (long *)0x0) {
      bVar1 = *(byte *)(*(long *)PTR_DAT_03d256f0 + 0x130);
      if ((*(byte *)(*plVar6 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*plVar6 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_03d256f0))
      {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6ee0(plVar6);
      }
      FUN_02f89f1c(plVar6,1);
      FUN_02f8e2fc(in_stack_00000030,in_stack_00000008,plVar6,uStack0000000000000004,
                   uStack0000000000000000 & 1,in_stack_00000010._4_4_ & 1);
    }
  }
  plVar6 = (long *)unaff_x20[2];
  if (plVar6 != (long *)0x0) {
    iVar4 = (**(code **)(*plVar6 + 0x2a8))(plVar6,*(undefined8 *)(*plVar6 + 0x2b0));
    if (iVar4 == 0) {
      FUN_02215a88(in_stack_00000018,unaff_w26,&stack0x00000048,*(undefined8 *)PTR_DAT_03cbfc10);
      FUN_02f8a7e0(in_stack_00000030,in_stack_00000048,0);
    }
    do {
      unaff_w26 = unaff_w26 + 1;
      if (*(int *)(in_stack_00000018 + 0x18) <= unaff_w26) {
        return;
      }
      plVar6 = *(long **)(in_stack_00000030 + 0x10);
      if (plVar6 == (long *)0x0) goto UniGLTF_MeshData__PushIndices;
      uVar7 = (**(code **)(*plVar6 + 0x3b8))(plVar6,*(undefined8 *)(*plVar6 + 0x3c0));
      in_stack_00000038._4_1_ = '\0';
      FUN_027e0bd8(uVar7,(long)&stack0x00000038 + 4,0);
      plVar6 = *(long **)(in_stack_00000030 + 0x10);
      FUN_02215a88(in_stack_00000018,unaff_w26,&stack0x00000040,*(undefined8 *)PTR_DAT_03cbfc10);
      if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      unaff_x20 = (long *)(**(code **)(*plVar6 + 0x308))
                                    (plVar6,in_stack_00000040,*(undefined8 *)(*plVar6 + 0x310));
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
        OVRManager_<>c__<InitOVRManager>b__424_0(uVar7,0);
      }
    } while (unaff_x20 == (long *)0x0);
    plVar6 = (long *)unaff_x20[2];
    if (plVar6 != (long *)0x0) {
      in_stack_00000020 = (**(code **)(*plVar6 + 0x308))(plVar6,*(undefined8 *)(*plVar6 + 0x310));
      in_stack_00000038._4_1_ = '\0';
      FUN_027e0bd8(in_stack_00000020,(long)&stack0x00000038 + 4,0);
      plVar6 = (long *)unaff_x20[2];
      if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      unaff_x28 = (long *)(**(code **)(*plVar6 + 0x388))(plVar6,*(undefined8 *)(*plVar6 + 0x390));
      bVar3 = false;
      in_stack_00000028._4_1_ = '\0';
      goto LAB_02f8dcb4;
    }
  }
UniGLTF_MeshData__PushIndices:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


