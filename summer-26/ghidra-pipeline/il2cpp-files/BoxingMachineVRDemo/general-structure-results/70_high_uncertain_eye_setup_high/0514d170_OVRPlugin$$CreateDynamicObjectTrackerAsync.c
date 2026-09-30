/*
FUNCTION_NAME: OVRPlugin$$CreateDynamicObjectTrackerAsync
ENTRY_POINT: 0514d170
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_18;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin__CreateDynamicObjectTrackerAsync(long param_1)

{
  byte bVar1;
  bool bVar2;
  undefined *puVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined8 *puVar8;
  long *plVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  ulong uVar15;
  int *piVar16;
  long in_x10;
  uint in_w11;
  long *plVar17;
  long *unaff_x20;
  long unaff_x22;
  undefined8 in_stack_00000018;
  long in_stack_00000028;
  
code_r0x0514d170:
  bVar1 = *(byte *)(param_1 + 0x130);
  if (in_w11 < bVar1) {
    plVar17 = (long *)0x0;
  }
  else {
                    /* try { // try from 0514d194 to 0524d1b3 has its CatchHandler @ 0514d194
                       catch() { ... } // from try @ 0514d194 with catch @ 0514d194
                       catch() { ... } // from try @ 0514d1c4 with catch @ 0514d194
                       catch() { ... } // from try @ 0514d210 with catch @ 0514d194
                       catch() { ... } // from try @ 0514d244 with catch @ 0514d194 */
    plVar17 = unaff_x20;
    if (*(long *)(*(long *)(in_x10 + 200) + (ulong)bVar1 * 8 + -8) != param_1) {
      plVar17 = (long *)0x0;
    }
  }
  plVar9 = (long *)(in_stack_00000028 + 0x58);
  *plVar9 = (long)plVar17;
                    /* try { // try from 0514d1b4 to 0524d1bf has its CatchHandler @ 0514d1f4 */
  if ((uint)*(byte *)(*unaff_x20 + 0x130) < (uint)bVar1) {
                    /* try { // try from 0514d1c0 to 0524d1c3 has its CatchHandler @ 0514d1f0 */
    plVar17 = (long *)0x0;
                    /* try { // try from 0514d1c4 to 0524d20b has its CatchHandler @ 0514d194 */
  }
  else {
    plVar17 = unaff_x20;
    if (*(long *)(*(long *)(*unaff_x20 + 200) + (ulong)bVar1 * 8 + -8) != param_1) {
      plVar17 = (long *)0x0;
    }
  }
  do {
    thunk_FUN_02dd37b4(plVar9,plVar17);
    if (*(long *)(in_stack_00000028 + 0x58) == 0) {
                    /* try { // try from 0514d210 to 0524d237 has its CatchHandler @ 0514d194 */
      lVar10 = *(long *)(in_stack_00000028 + 0x40);
      if (lVar10 != 0) {
        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d60ae8();
        }
        if (*(char *)(lVar10 + 0x20) != '\0') {
          lVar10 = thunk_FUN_02dc61f4(PTR_DAT_0675eef8);
          if (*(int *)(lVar10 + 0xe4) == 0) {
            thunk_FUN_02dbd7b4();
          }
          uVar11 = FUN_04f8e414(0);
          if (unaff_x20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d60ae8();
          }
          plVar17 = (long *)thunk_FUN_02d709fc(unaff_x20,0);
          if (plVar17 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d60ae8();
          }
          uVar12 = (**(code **)(*plVar17 + 0x1b8))(plVar17,*(undefined8 *)(*plVar17 + 0x1c0));
          uVar13 = thunk_FUN_02dc61f4(PTR_DAT_06781d28);
          uVar11 = FUN_050f0ec0(uVar13,uVar11,uVar12,0);
          thunk_FUN_02dc61f4(PTR_DAT_0677d960);
          uVar12 = thunk_FUN_02d9d534();
          FUN_050931fc(uVar12,uVar11,0);
          uVar11 = thunk_FUN_02dc61f4(PTR_DAT_06781d18);
                    /* WARNING: Subroutine does not return */
          FUN_02d609b4(uVar12,uVar11);
        }
      }
    }
    else {
      if (unaff_x22 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
                    /* catch(type#1 @ 0638da48) { ... } // from try @ 0514d1c0 with catch @ 0514d1f0
                        */
      iVar6 = *(int *)(unaff_x22 + 0x24);
                    /* catch(type#1 @ 0638da48) { ... } // from try @ 0514d1b4 with catch @ 0514d1f4
                        */
      if ((*(uint *)(unaff_x22 + 0x20) & 0xff) == 0) {
        iVar6 = 1;
      }
      *(int *)(in_stack_00000028 + 0x60) = iVar6;
      if (*(char *)(unaff_x22 + 0x10) == '\0') {
        if (iVar6 < 1) {
          iVar6 = FUN_0512edb8(*(long *)(in_stack_00000028 + 0x58),0);
          iVar6 = iVar6 + -1;
        }
        else {
          iVar6 = 0;
        }
      }
      else {
        iVar6 = *(int *)(unaff_x22 + 0x14);
                    /* try { // try from 0514d20c to 0524d20f has its CatchHandler @ 0514d234 */
      }
      lVar10 = in_stack_00000028;
      if (*(char *)(unaff_x22 + 0x18) == '\0') {
        if (*(int *)(in_stack_00000028 + 0x60) < 1) {
          uVar5 = 0xffffffff;
        }
        else {
          if (*(long *)(in_stack_00000028 + 0x58) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d60ae8();
          }
          uVar5 = FUN_0512edb8(*(long *)(in_stack_00000028 + 0x58),0);
        }
      }
      else {
        uVar5 = *(undefined4 *)(unaff_x22 + 0x1c);
      }
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      *(undefined4 *)(lVar10 + 100) = uVar5;
      in_stack_00000018._4_4_ = 0;
      if ((*(char *)(unaff_x22 + 0x10) != '\0') && (*(int *)(unaff_x22 + 0x14) < 0)) {
        if (*(long *)(in_stack_00000028 + 0x58) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d60ae8();
        }
        iVar4 = FUN_0512edb8(*(long *)(in_stack_00000028 + 0x58),0);
        iVar6 = iVar4 + iVar6;
      }
      in_stack_00000018._4_4_ = 0;
      if ((*(char *)(unaff_x22 + 0x18) != '\0') && (*(int *)(unaff_x22 + 0x1c) < 0)) {
        if (*(long *)(in_stack_00000028 + 0x58) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d60ae8();
        }
        iVar4 = FUN_0512edb8(*(long *)(in_stack_00000028 + 0x58),0);
        *(int *)(in_stack_00000028 + 100) = *(int *)(in_stack_00000028 + 100) + iVar4;
      }
      puVar3 = PTR_DAT_0675e6d8;
      iVar4 = *(int *)(in_stack_00000028 + 0x60);
      if (*(int *)(*(long *)PTR_DAT_0675e6d8 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      uVar5 = FUN_0500808c(iVar6,(uint)(iVar4 < 1) << 0x1f,0);
      lVar10 = *(long *)(in_stack_00000028 + 0x58);
      if (*(int *)(in_stack_00000028 + 0x60) < 1) {
        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d60ae8();
        }
        iVar6 = FUN_0512edb8(lVar10,0);
        iVar6 = iVar6 + -1;
      }
      else {
        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d60ae8();
        }
        iVar6 = FUN_0512edb8(lVar10,0);
      }
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      iVar6 = FUN_050081d4(uVar5,iVar6,0);
      uVar5 = FUN_0500808c(*(undefined4 *)(in_stack_00000028 + 100),0xffffffff,0);
      *(undefined4 *)(in_stack_00000028 + 100) = uVar5;
      if (*(long *)(in_stack_00000028 + 0x58) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      uVar7 = FUN_0512edb8(*(long *)(in_stack_00000028 + 0x58),0);
      iVar4 = FUN_050081d4(uVar5,uVar7,0);
      *(int *)(in_stack_00000028 + 100) = iVar4;
      bVar2 = iVar6 < iVar4;
      if (*(int *)(in_stack_00000028 + 0x60) < 1) {
        bVar2 = iVar4 < iVar6;
      }
      *(bool *)(in_stack_00000028 + 0x68) = 0 < *(int *)(in_stack_00000028 + 0x60);
      if (bVar2) {
        *(int *)(in_stack_00000028 + 0x6c) = iVar6;
        bVar2 = iVar4 < iVar6;
        if (*(char *)(in_stack_00000028 + 0x68) != '\0') {
          bVar2 = iVar6 < iVar4;
        }
        if (bVar2) {
          if (*(long *)(in_stack_00000028 + 0x58) != 0) {
            uVar11 = FUN_05128104(*(long *)(in_stack_00000028 + 0x58),iVar6,0);
            *(undefined8 *)(in_stack_00000028 + 0x18) = uVar11;
            thunk_FUN_02dd37b4();
            *(undefined4 *)(in_stack_00000028 + 0x10) = 1;
            return 1;
          }
                    /* WARNING: Subroutine does not return */
          FUN_02d60ae8();
        }
      }
      else {
        lVar10 = *(long *)(in_stack_00000028 + 0x40);
        if (lVar10 != 0) {
          if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d60ae8();
          }
          if (*(char *)(lVar10 + 0x20) != '\0') {
            lVar10 = thunk_FUN_02dc61f4(PTR_DAT_0675eef8);
            if (*(int *)(lVar10 + 0xe4) == 0) {
              thunk_FUN_02dbd7b4();
            }
            uVar11 = FUN_04f8e414(0);
            uVar15 = *(ulong *)(unaff_x22 + 0x10);
            thunk_FUN_02dc61f4(PTR_DAT_067675e8);
            if ((uVar15 & 0xff) == 0) {
              uVar12 = thunk_FUN_02dc61f4(PTR_DAT_06781d20);
              uVar13 = thunk_FUN_02dc61f4(PTR_DAT_06775140);
            }
            else {
              uVar12 = thunk_FUN_02dc61f4(PTR_DAT_06781d20);
              uVar13 = *(undefined8 *)(unaff_x22 + 0x10);
              thunk_FUN_02dc61f4(PTR_DAT_067675d8);
              in_stack_00000018._4_4_ = (undefined4)((ulong)uVar13 >> 0x20);
              lVar10 = thunk_FUN_02dc61f4(PTR_DAT_0675eef8);
              if (*(int *)(lVar10 + 0xe4) == 0) {
                thunk_FUN_02dbd7b4();
              }
              uVar13 = FUN_04f8e414(0);
              uVar13 = FUN_05004a00((long)&stack0x00000018 + 4,uVar13,0);
            }
            uVar15 = *(ulong *)(unaff_x22 + 0x18);
            thunk_FUN_02dc61f4(PTR_DAT_067675e8);
            if ((uVar15 & 0xff) == 0) {
              uVar14 = thunk_FUN_02dc61f4(PTR_DAT_06775140);
            }
            else {
              uVar14 = *(undefined8 *)(unaff_x22 + 0x18);
              thunk_FUN_02dc61f4(PTR_DAT_067675d8);
              in_stack_00000018._4_4_ = (undefined4)((ulong)uVar14 >> 0x20);
              lVar10 = thunk_FUN_02dc61f4(PTR_DAT_0675eef8);
              if (*(int *)(lVar10 + 0xe4) == 0) {
                thunk_FUN_02dbd7b4();
              }
              uVar14 = FUN_04f8e414(0);
              uVar14 = FUN_05004a00((long)&stack0x00000018 + 4,uVar14,0);
            }
            uVar11 = FUN_050f0fe0(uVar12,uVar11,uVar13,uVar14,0);
            thunk_FUN_02dc61f4(PTR_DAT_0677d960);
            uVar12 = thunk_FUN_02d9d534();
            FUN_050931fc(uVar12,uVar11,0);
            uVar11 = thunk_FUN_02dc61f4(PTR_DAT_06781d18);
                    /* WARNING: Subroutine does not return */
            FUN_02d609b4(uVar12,uVar11);
          }
        }
      }
    }
    *(undefined8 *)(in_stack_00000028 + 0x58) = 0;
    thunk_FUN_02dd37b4((undefined8 *)(in_stack_00000028 + 0x58),0);
    plVar17 = *(long **)(in_stack_00000028 + 0x50);
    if (plVar17 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    lVar10 = *plVar17;
    uVar15 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar15 != 0) {
      piVar16 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_0675f3d8) {
          puVar8 = (undefined8 *)(lVar10 + (long)*piVar16 * 0x10 + 0x138);
          goto LAB_0514d0d4;
        }
        uVar15 = uVar15 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar15 != 0);
    }
    puVar8 = (undefined8 *)FUN_02d9a5d4(plVar17,*(long *)PTR_DAT_0675f3d8,0);
LAB_0514d0d4:
    uVar15 = (*(code *)*puVar8)(plVar17,puVar8[1]);
    if ((uVar15 & 1) == 0) {
      FUN_0514d810();
      *(undefined8 *)(in_stack_00000028 + 0x50) = 0;
      thunk_FUN_02dd37b4((undefined8 *)(in_stack_00000028 + 0x50),0);
      return 0;
    }
    plVar17 = *(long **)(in_stack_00000028 + 0x50);
    if (plVar17 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    lVar10 = *plVar17;
    uVar15 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar15 != 0) {
      piVar16 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_0676aab8) {
          puVar8 = (undefined8 *)(lVar10 + (long)*piVar16 * 0x10 + 0x138);
          goto LAB_0514d148;
        }
        uVar15 = uVar15 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar15 != 0);
    }
    puVar8 = (undefined8 *)FUN_02d9a5d4(plVar17,*(long *)PTR_DAT_0676aab8,0);
LAB_0514d148:
    unaff_x20 = (long *)(*(code *)*puVar8)(plVar17,puVar8[1]);
    if (unaff_x20 != (long *)0x0) break;
    plVar9 = (long *)(in_stack_00000028 + 0x58);
    *plVar9 = 0;
    plVar17 = (long *)0x0;
  } while( true );
  in_x10 = *unaff_x20;
  param_1 = *(long *)PTR_DAT_06780ff8;
  in_w11 = (uint)*(byte *)(in_x10 + 0x130);
  goto code_r0x0514d170;
}


