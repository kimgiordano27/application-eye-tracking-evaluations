/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.ScrollView$$RefreshLayoutPostChildren
ENTRY_POINT: 04c1bd44
PROGRAM: hellodot-libil2cpp.so
SCORE: 92
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_21;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x04c1c3b4) */

long Meta_XR_ImmersiveDebugger_UserInterface_Generic_ScrollView__RefreshLayoutPostChildren(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  short sVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  int *piVar14;
  uint unaff_w19;
  undefined8 *unaff_x20;
  long unaff_x21;
  long *plVar15;
  undefined8 uVar16;
  long *unaff_x23;
  undefined8 uVar17;
  long *unaff_x24;
  undefined8 unaff_x25;
  long unaff_x26;
  long unaff_x27;
  undefined8 unaff_x28;
  undefined8 unaff_x29;
  undefined1 auVar18 [16];
  long in_stack_00000010;
  long in_stack_00000018;
  long *in_stack_00000020;
  int iStack0000000000000028;
  undefined2 uStack000000000000002c;
  
LAB_04c1be8c:
  plVar15 = *(long **)(unaff_x21 + 0x10);
  if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02ce7c7c();
  }
  lVar11 = *plVar15;
  uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
  if (uVar13 != 0) {
    piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
    do {
      if (*(long *)(piVar14 + -2) == *unaff_x23) {
        puVar9 = (undefined8 *)(lVar11 + (long)(*piVar14 + 4) * 0x10 + 0x138);
        goto LAB_04c1bee4;
      }
      uVar13 = uVar13 - 1;
      piVar14 = piVar14 + 4;
    } while (uVar13 != 0);
  }
  puVar9 = (undefined8 *)FUN_02ce0a7c(plVar15,*unaff_x23,4);
LAB_04c1bee4:
  uVar13 = (*(code *)*puVar9)(plVar15,unaff_x27,puVar9[1]);
  if ((uVar13 & 1) == 0) {
    uVar16 = *(undefined8 *)(unaff_x21 + 0x28);
    uVar10 = thunk_FUN_02c7737c(PTR_DAT_065e58e8);
    uVar10 = FUN_04db9ab4(uVar10,uVar16,unaff_x27,0);
    uVar17 = *(undefined8 *)(unaff_x21 + 0x28);
    thunk_FUN_02c7737c(PTR_DAT_065c96d8);
    uVar16 = thunk_FUN_02cea894();
    FUN_04e97fd8(uVar16,uVar10,uVar17,0);
    uVar10 = thunk_FUN_02c7737c(PTR_DAT_065e58f0);
                    /* WARNING: Subroutine does not return */
    FUN_02ce7b54(uVar16,uVar10);
  }
  plVar15 = *(long **)(unaff_x21 + 0x10);
  if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02ce7c7c();
  }
  lVar11 = *plVar15;
  uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
  if (uVar13 != 0) {
    piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
    do {
      if (*(long *)(piVar14 + -2) == *unaff_x23) {
        puVar9 = (undefined8 *)(lVar11 + (long)*piVar14 * 0x10 + 0x138);
        goto LAB_04c1bf4c;
      }
      uVar13 = uVar13 - 1;
      piVar14 = piVar14 + 4;
    } while (uVar13 != 0);
  }
  puVar9 = (undefined8 *)FUN_02ce0a7c(plVar15,*unaff_x23,0);
LAB_04c1bf4c:
  uVar10 = (*(code *)*puVar9)(plVar15,unaff_x27,puVar9[1]);
  lVar11 = FUN_04dba1c8(unaff_x29,uVar10,0);
  if (iStack0000000000000028 != 0) {
    if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    if (iStack0000000000000028 < *(int *)(lVar11 + 0x10)) {
      lVar11 = FUN_04dbaed4(lVar11,0,iStack0000000000000028,0);
    }
  }
  uVar13 = FUN_04db8dd0(unaff_x25,*unaff_x20,0);
  if (((uVar13 & 1) != 0) &&
     (uVar13 = FUN_04db8dd0(unaff_x25,*(undefined8 *)PTR_DAT_065e2660,0), (uVar13 & 1) != 0)) {
    plVar15 = *(long **)(unaff_x21 + 0x10);
    if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    lVar12 = *plVar15;
    uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar13 != 0) {
      piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *unaff_x23) {
          puVar9 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
          goto LAB_04c1c020;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    puVar9 = (undefined8 *)FUN_02ce0a7c(plVar15,*unaff_x23,0);
LAB_04c1c020:
    plVar15 = (long *)(*(code *)*puVar9)(plVar15,unaff_x27,puVar9[1]);
    if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    lVar12 = *plVar15;
    uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar13 != 0) {
      piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_065c8e90) {
          puVar9 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
          goto LAB_04c1c08c;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    puVar9 = (undefined8 *)FUN_02ce0a7c(plVar15,*(long *)PTR_DAT_065c8e90,0);
LAB_04c1c08c:
    iVar8 = (*(code *)*puVar9)(plVar15,puVar9[1]);
    if (iVar8 == 1) {
      if (*(int *)(*(long *)PTR_DAT_065c8a78 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
      }
      lVar11 = FUN_0568f04c(lVar11,0);
    }
  }
  uVar10 = FUN_04db00f0(unaff_x28,lVar11,0);
  if (unaff_x24 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02ce7c7c(uVar10,uVar10);
  }
  FUN_04dc7640(unaff_x24,uVar10,0);
  uVar7 = *(uint *)(unaff_x26 + 0x18);
  unaff_w19 = unaff_w19 + 1;
  if ((int)uVar7 <= (int)unaff_w19) {
    do {
      uVar13 = thunk_FUN_04db8ae0(unaff_x25,*(undefined8 *)PTR_DAT_065e3d88,0);
      puVar3 = PTR_DAT_065c8d08;
      if ((uVar13 & 1) != 0) {
        if (unaff_x24 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02ce7c7c();
        }
        iVar8 = FUN_04dc686c(unaff_x24,0);
        sVar5 = FUN_04dc70e8(unaff_x24,iVar8 + -1,0);
        if (sVar5 == 0x3d) {
          iVar8 = FUN_04dc686c(unaff_x24,0);
          unaff_x24 = (long *)FUN_04dc7c94(unaff_x24,iVar8 + -1,1,0);
        }
        if (unaff_x24 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02ce7c7c();
        }
        unaff_x24 = (long *)FUN_04dc90f4(unaff_x24,*(undefined8 *)PTR_DAT_065e58e0,
                                         *(undefined8 *)PTR_DAT_065e3d88,0);
      }
      if (unaff_x24 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      auVar18 = (**(code **)(*unaff_x24 + 0x168))(unaff_x24,*(undefined8 *)(*unaff_x24 + 0x170));
      puVar4 = PTR_DAT_065ce360;
      puVar1 = PTR_DAT_065c8688;
      if (in_stack_00000018 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c(0,auVar18._8_8_,auVar18._0_8_);
      }
      in_stack_00000018 = FUN_04dc90f4(in_stack_00000018,in_stack_00000010,auVar18._0_8_,0);
      if (in_stack_00000020 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      lVar12 = *in_stack_00000020;
      lVar11 = *(long *)puVar3;
      uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar13 != 0) {
        piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == lVar11) {
            puVar9 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
            goto LAB_04c1b978;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
      puVar9 = (undefined8 *)FUN_02ce0a7c(in_stack_00000020,lVar11,0);
LAB_04c1b978:
      uVar13 = (*(code *)*puVar9)(in_stack_00000020,puVar9[1]);
      puVar2 = PTR_DAT_065c8a48;
      if ((uVar13 & 1) == 0) {
        plVar15 = (long *)thunk_FUN_02cea798(in_stack_00000020,*(undefined8 *)PTR_DAT_065c8a48);
        if (plVar15 == (long *)0x0) {
          return in_stack_00000018;
        }
        lVar11 = *plVar15;
        uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar13 == 0) goto LAB_04c1c240;
        piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        goto LAB_04c1c228;
      }
      lVar11 = *(long *)puVar3;
      lVar12 = *in_stack_00000020;
      uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar13 != 0) {
        piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == lVar11) {
            puVar9 = (undefined8 *)(lVar12 + (long)(*piVar14 + 1) * 0x10 + 0x138);
            goto LAB_04c1b9dc;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
      puVar9 = (undefined8 *)FUN_02ce0a7c(in_stack_00000020,lVar11,1);
LAB_04c1b9dc:
      plVar15 = (long *)(*(code *)*puVar9)(in_stack_00000020,puVar9[1]);
      if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      in_stack_00000010 = (**(code **)(*plVar15 + 0x168))(plVar15,*(undefined8 *)(*plVar15 + 0x170))
      ;
      if (in_stack_00000010 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      lVar11 = FUN_04dbaed4(in_stack_00000010,1,*(int *)(in_stack_00000010 + 0x10) + -2,0);
      if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      unaff_x25 = **(undefined8 **)(*(long *)puVar1 + 0xb8);
      uStack000000000000002c = FUN_04db48b0(lVar11,0,0);
      if (*(int *)(*(long *)PTR_DAT_065c9808 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
      }
      uVar10 = FUN_04e945d8((long)&stack0x00000028 + 4,0);
      if (*(long *)PTR_DAT_065e58d8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c(0,uVar10);
      }
      uVar13 = FUN_04dbd9cc(*(long *)PTR_DAT_065e58d8,uVar10,0);
      if ((uVar13 & 1) != 0) {
        uStack000000000000002c = FUN_04db48b0(lVar11,0,0);
        if (*(int *)(*(long *)PTR_DAT_065c9808 + 0xe0) == 0) {
          thunk_FUN_02cd038c();
        }
        unaff_x25 = FUN_04e945d8((long)&stack0x00000028 + 4,0);
        lVar11 = FUN_04dbd134(lVar11,1,0);
      }
      unaff_x24 = (long *)thunk_FUN_02cea894(*(undefined8 *)puVar4);
      FUN_04dc5d24(unaff_x24,0);
      lVar12 = FUN_02ce7ad4(*(undefined8 *)PTR_DAT_065ce570,1);
      if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      if (*(int *)(lVar12 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c84();
      }
      *(undefined2 *)(lVar12 + 0x20) = 0x2c;
      if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      unaff_x26 = FUN_04dbbb18(lVar11,lVar12,0);
      if (unaff_x26 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      uVar7 = *(uint *)(unaff_x26 + 0x18);
    } while ((int)uVar7 < 1);
    unaff_w19 = 0;
  }
  if (uVar7 <= unaff_w19) {
                    /* WARNING: Subroutine does not return */
    FUN_02ce7c84();
  }
  unaff_x27 = *(long *)(unaff_x26 + (long)(int)unaff_w19 * 8 + 0x20);
  iStack0000000000000028 = 0;
  if (unaff_x27 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02ce7c7c();
  }
  sVar5 = FUN_04db48b0(unaff_x27,*(int *)(unaff_x27 + 0x10) + -1,0);
  if ((sVar5 == 0x2a) &&
     (unaff_x27 = FUN_04dbaed4(unaff_x27,0,*(int *)(unaff_x27 + 0x10) + -1,0), unaff_x27 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_02ce7c7c();
  }
  uVar13 = FUN_04dbd9cc(unaff_x27,*(undefined8 *)PTR_DAT_065db1f0,0);
  if ((uVar13 & 1) != 0) {
    iVar8 = FUN_04dbda48(unaff_x27,0x3a,0);
    uVar10 = FUN_04dbd134(unaff_x27,iVar8 + 1,0);
    uVar13 = FUN_04f2ed74(uVar10,&stack0x00000028,0);
    if ((uVar13 & 1) == 0) {
      uVar16 = *(undefined8 *)(unaff_x21 + 0x28);
      uVar10 = thunk_FUN_02c7737c(PTR_DAT_065e58f8);
      uVar10 = FUN_04db9ab4(uVar10,uVar16,unaff_x27,0);
      uVar17 = *(undefined8 *)(unaff_x21 + 0x28);
      thunk_FUN_02c7737c(PTR_DAT_065c96d8);
      uVar16 = thunk_FUN_02cea894();
      FUN_04e97fd8(uVar16,uVar10,uVar17,0);
      uVar10 = thunk_FUN_02c7737c(PTR_DAT_065e58f0);
                    /* WARNING: Subroutine does not return */
      FUN_02ce7b54(uVar16,uVar10);
    }
    uVar6 = FUN_04dbda48(unaff_x27,0x3a,0);
    unaff_x27 = FUN_04dbaed4(unaff_x27,0,uVar6,0);
  }
  uVar7 = FUN_04c1c7a4(unaff_x25);
  unaff_x28 = unaff_x25;
  if (uVar7 < 0x2a0c975f) {
    if (uVar7 == 0x230c8c59) {
                    /* try { // try from 04c1bd50 to 04d1be6f has its CatchHandler @ 04c1bd50
                       catch() { ... } // from try @ 04c1bd50 with catch @ 04c1bd50
                       catch() { ... } // from try @ 04c1bf34 with catch @ 04c1bd50
                       catch() { ... } // from try @ 04c1bff4 with catch @ 04c1bd50
                       catch() { ... } // from try @ 04c1c098 with catch @ 04c1bd50 */
      uVar13 = thunk_FUN_04db8ae0(unaff_x25,*(undefined8 *)PTR_DAT_065e3e50,0);
LAB_04c1bd60:
      if ((uVar13 & 1) != 0) {
        unaff_x28 = FUN_04db9398(unaff_x25,unaff_x27,*(undefined8 *)PTR_DAT_065e3778,0);
        if (sVar5 == 0x2a) {
          unaff_x29 = FUN_04db9398(unaff_x25,unaff_x27,*(undefined8 *)PTR_DAT_065e3778,0);
        }
        else {
LAB_04c1c100:
          unaff_x29 = *(undefined8 *)PTR_DAT_065dfbf8;
        }
        goto LAB_04c1be8c;
      }
    }
    else {
      if (uVar7 != 0x260c9112) {
        if (uVar7 != 0x2a0c975e) goto LAB_04c1be78;
        uVar13 = thunk_FUN_04db8ae0(unaff_x25,*(undefined8 *)PTR_DAT_065cf7b8,0);
        goto LAB_04c1bdc8;
      }
      uVar13 = thunk_FUN_04db8ae0(unaff_x25,*(undefined8 *)PTR_DAT_065e2660,0);
      puVar9 = (undefined8 *)PTR_DAT_065e2660;
joined_r0x04c1bcbc:
      if ((uVar13 & 1) != 0) {
        unaff_x29 = *(undefined8 *)PTR_DAT_065dfbf8;
        unaff_x28 = *puVar9;
        if (unaff_w19 != 0) {
          unaff_x28 = unaff_x29;
        }
        goto LAB_04c1be8c;
      }
    }
  }
  else {
    if (uVar7 < 0x2e0c9dab) {
      if (uVar7 != 0x2b0c98f1) {
        if (uVar7 == 0x2e0c9daa) {
          uVar13 = thunk_FUN_04db8ae0(unaff_x25,*unaff_x20,0);
          puVar9 = (undefined8 *)PTR_DAT_065c8668;
          goto joined_r0x04c1bcbc;
        }
        goto LAB_04c1be78;
      }
      uVar13 = thunk_FUN_04db8ae0(unaff_x25,*(undefined8 *)PTR_DAT_065c92a0,0);
LAB_04c1bdc8:
      if ((uVar13 & 1) == 0) goto LAB_04c1be78;
      unaff_x29 = unaff_x25;
      if (sVar5 != 0x2a) {
        unaff_x29 = *(undefined8 *)PTR_DAT_065dfbf8;
      }
      goto LAB_04c1be8c;
    }
    if (uVar7 == 0x3a0cb08e) {
      uVar13 = thunk_FUN_04db8ae0(unaff_x25,*(undefined8 *)PTR_DAT_065e3e90,0);
      if ((uVar13 & 1) == 0) goto LAB_04c1be78;
      puVar9 = (undefined8 *)PTR_DAT_065e3e90;
      if (unaff_w19 != 0) {
        puVar9 = (undefined8 *)PTR_DAT_065e3e50;
      }
      unaff_x28 = FUN_04db9398(*puVar9,unaff_x27,*(undefined8 *)PTR_DAT_065e3778,0);
      if (sVar5 != 0x2a) goto LAB_04c1c100;
      unaff_x29 = FUN_04db9398(*(undefined8 *)PTR_DAT_065e3e50,unaff_x27,
                               *(undefined8 *)PTR_DAT_065e3778,0);
      goto LAB_04c1be8c;
    }
    if (uVar7 == 0x3e0cb6da) {
      uVar13 = thunk_FUN_04db8ae0(unaff_x25,*(undefined8 *)PTR_DAT_065e3d88,0);
      goto LAB_04c1bd60;
    }
  }
LAB_04c1be78:
  unaff_x29 = *(undefined8 *)PTR_DAT_065dfbf8;
  if (unaff_w19 != 0) {
    unaff_x28 = unaff_x29;
  }
  goto LAB_04c1be8c;
  while( true ) {
    uVar13 = uVar13 - 1;
    piVar14 = piVar14 + 4;
    if (uVar13 == 0) break;
LAB_04c1c228:
    if (*(long *)(piVar14 + -2) == *(long *)puVar2) {
      puVar9 = (undefined8 *)(lVar11 + (long)*piVar14 * 0x10 + 0x138);
      goto LAB_04c1c25c;
    }
  }
LAB_04c1c240:
  puVar9 = (undefined8 *)FUN_02ce0a7c(plVar15,*(long *)puVar2,0);
LAB_04c1c25c:
  (*(code *)*puVar9)(plVar15,puVar9[1]);
  return in_stack_00000018;
}


