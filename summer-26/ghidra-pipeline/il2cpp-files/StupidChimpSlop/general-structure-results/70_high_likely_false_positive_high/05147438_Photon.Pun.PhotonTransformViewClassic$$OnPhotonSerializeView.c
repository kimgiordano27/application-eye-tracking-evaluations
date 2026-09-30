/*
FUNCTION_NAME: Photon.Pun.PhotonTransformViewClassic$$OnPhotonSerializeView
ENTRY_POINT: 05147438
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 71
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_21;ui_or_gameplay_sink_hits_3;telemetry_or_network_hits_2
*/


undefined8 Photon_Pun_PhotonTransformViewClassic__OnPhotonSerializeView(void)

{
  char cVar1;
  byte bVar2;
  bool bVar3;
  bool in_ZR;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long *plVar13;
  int in_w8;
  long lVar14;
  ulong uVar15;
  int *piVar16;
  long unaff_x19;
  long *plVar17;
  long *unaff_x21;
  long unaff_x22;
  long *unaff_x23;
  long *unaff_x24;
  long *unaff_x25;
  long lStack0000000000000000;
  undefined8 in_stack_00000010;
  long in_stack_00000018;
  
  lStack0000000000000000 = 0;
  if (in_ZR) {
    *(undefined4 *)(unaff_x19 + 0x10) = 0xfffffffd;
                    /* try { // try from 051474cc to 052474d3 has its CatchHandler @ 051475b0 */
    iVar4 = *(int *)(unaff_x19 + 0x60) + *(int *)(unaff_x19 + 0x6c);
    *(int *)(unaff_x19 + 0x6c) = iVar4;
    if (unaff_x22 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d4dee8();
    }
    iVar7 = *(int *)(unaff_x19 + 100);
                    /* try { // try from 051474dc to 052474e3 has its CatchHandler @ 051475ac */
    cVar1 = *(char *)(unaff_x19 + 0x68);
    goto LAB_051478f8;
  }
  uVar8 = 0;
  if (in_w8 != 0) {
LAB_05147984:
    lVar14 = lStack0000000000000000;
    if (lStack0000000000000000 != 0) {
      FUN_02cb88d0(&stack0x00000008);
                    /* WARNING: Subroutine does not return */
      FUN_02d4dee0(lVar14);
    }
    return uVar8;
  }
  *(undefined4 *)(unaff_x19 + 0x10) = 0xffffffff;
  if (unaff_x22 == 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0514751c to 05247533 has its CatchHandler @ 051475a8 */
    FUN_02d4dee8(0);
  }
  in_stack_00000010._4_4_ = 0;
                    /* try { // try from 05147464 to 052474cb has its CatchHandler @ 05147464
                       catch() { ... } // from try @ 05147464 with catch @ 05147464
                       catch() { ... } // from try @ 05147534 with catch @ 05147464
                       catch() { ... } // from try @ 05147580 with catch @ 05147464
                       catch() { ... } // from try @ 051475a4 with catch @ 05147464
                       catch() { ... } // from try @ 051475ec with catch @ 05147464 */
  if ((*(ulong *)(unaff_x22 + 0x20) >> 0x20 == 0) && ((*(ulong *)(unaff_x22 + 0x20) & 0xff) != 0)) {
    thunk_FUN_02db45e8(PTR_DAT_0665d8f0);
    uVar8 = thunk_FUN_02d8a638();
                    /* try { // try from 05147534 to 05247577 has its CatchHandler @ 05147464 */
    uVar10 = thunk_FUN_02db45e8(Unity_Burst_LowLevel_BurstCompilerService_var);
    FUN_0508e50c(uVar8,uVar10,0);
    uVar10 = thunk_FUN_02db45e8(Unity_Burst_BurstRuntime_var);
                    /* WARNING: Subroutine does not return */
    FUN_02d4ddac(uVar8,uVar10);
  }
  plVar17 = *(long **)(unaff_x19 + 0x30);
  if (plVar17 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d4dee8(0);
  }
  lVar14 = *plVar17;
  uVar15 = (ulong)*(ushort *)(lVar14 + 0x12e);
  if (uVar15 != 0) {
    piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
    do {
      if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_06660a78) {
        puVar9 = (undefined8 *)(lVar14 + (long)*piVar16 * 0x10 + 0x138);
        goto LAB_051474f0;
      }
      uVar15 = uVar15 - 1;
      piVar16 = piVar16 + 4;
    } while (uVar15 != 0);
  }
  puVar9 = (undefined8 *)FUN_02d87540(plVar17,*(long *)PTR_DAT_06660a78,0);
LAB_051474f0:
  uVar8 = (*(code *)*puVar9)(plVar17,puVar9[1]);
  *(undefined8 *)(in_stack_00000018 + 0x50) = uVar8;
  thunk_FUN_02dc1ef0();
  *(undefined4 *)(in_stack_00000018 + 0x10) = 0xfffffffd;
  do {
    plVar17 = *(long **)(in_stack_00000018 + 0x50);
                    /* try { // try from 05147588 to 0524758b has its CatchHandler @ 051475b4 */
    if (plVar17 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d4dee8();
    }
                    /* try { // try from 0514758c to 052475a3 has its CatchHandler @ 051475a4 */
    lVar14 = *plVar17;
    uVar15 = (ulong)*(ushort *)(lVar14 + 0x12e);
    if (uVar15 != 0) {
      piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      do {
                    /* catch(type#1 @ 06204328) { ... } // from try @ 0514758c with catch @ 051475a4
                       try { // try from 051475a4 to 052475cf has its CatchHandler @ 05147464 */
                    /* catch(type#1 @ 06204328) { ... } // from try @ 0514751c with catch @ 051475a8
                        */
                    /* catch(type#1 @ 06204328) { ... } // from try @ 051474dc with catch @ 051475ac
                        */
        if (*(long *)(piVar16 + -2) == *unaff_x21) {
                    /* try { // try from 051475d0 to 052475d3 has its CatchHandler @ 051475e0 */
          puVar9 = (undefined8 *)(lVar14 + (long)*piVar16 * 0x10 + 0x138);
          goto LAB_051475d8;
        }
                    /* catch(type#1 @ 06204328) { ... } // from try @ 051474cc with catch @ 051475b0
                        */
        uVar15 = uVar15 - 1;
                    /* catch(type#1 @ 06204328) { ... } // from try @ 05147578 with catch @ 051475b4
                       catch(type#1 @ 06204328) { ... } // from try @ 05147588 with catch @ 051475b4
                        */
        piVar16 = piVar16 + 4;
      } while (uVar15 != 0);
    }
    puVar9 = (undefined8 *)FUN_02d87540(plVar17,*unaff_x21,0);
LAB_051475d8:
    uVar15 = (*(code *)*puVar9)(plVar17,puVar9[1]);
    if ((uVar15 & 1) == 0) {
      FUN_05147cb4();
      *(undefined8 *)(in_stack_00000018 + 0x50) = 0;
      thunk_FUN_02dc1ef0((undefined8 *)(in_stack_00000018 + 0x50),0);
      uVar8 = 0;
      goto LAB_05147984;
    }
    plVar17 = *(long **)(in_stack_00000018 + 0x50);
    if (plVar17 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d4dee8();
    }
    lVar14 = *plVar17;
    uVar15 = (ulong)*(ushort *)(lVar14 + 0x12e);
    if (uVar15 != 0) {
      piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == *unaff_x23) {
          puVar9 = (undefined8 *)(lVar14 + (long)*piVar16 * 0x10 + 0x138);
          goto LAB_05147644;
        }
        uVar15 = uVar15 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar15 != 0);
    }
    puVar9 = (undefined8 *)FUN_02d87540(plVar17,*unaff_x23,0);
LAB_05147644:
    plVar17 = (long *)(*(code *)*puVar9)(plVar17,puVar9[1]);
    if (plVar17 == (long *)0x0) {
      *(undefined8 *)(in_stack_00000018 + 0x58) = 0;
      plVar13 = (long *)0x0;
    }
    else {
      lVar14 = *unaff_x24;
      bVar2 = *(byte *)(lVar14 + 0x130);
      plVar13 = (long *)0x0;
      if ((bVar2 <= *(byte *)(*plVar17 + 0x130)) &&
         (plVar13 = plVar17, *(long *)(*(long *)(*plVar17 + 200) + (ulong)bVar2 * 8 + -8) != lVar14)
         ) {
        plVar13 = (long *)0x0;
      }
      *(long **)(in_stack_00000018 + 0x58) = plVar13;
      if (*(byte *)(*plVar17 + 0x130) < bVar2) {
        plVar13 = (long *)0x0;
      }
      else {
        plVar13 = plVar17;
        if (*(long *)(*(long *)(*plVar17 + 200) + (ulong)bVar2 * 8 + -8) != lVar14) {
          plVar13 = (long *)0x0;
        }
      }
    }
    thunk_FUN_02dc1ef0(in_stack_00000018 + 0x58,plVar13);
    if (*(long *)(in_stack_00000018 + 0x58) == 0) {
      unaff_x19 = in_stack_00000018;
      if ((*(long *)(in_stack_00000018 + 0x40) != 0) &&
         (*(char *)(*(long *)(in_stack_00000018 + 0x40) + 0x20) != '\0')) {
        lVar14 = thunk_FUN_02db45e8(PTR_DAT_06649f98);
        if (*(int *)(lVar14 + 0xe4) == 0) {
          thunk_FUN_02dabd98();
        }
        uVar8 = FUN_04f9d780(0);
        if (plVar17 != (long *)0x0) {
          plVar17 = (long *)thunk_FUN_02d5dae8(plVar17,0);
          if (plVar17 != (long *)0x0) {
            uVar10 = (**(code **)(*plVar17 + 0x1b8))(plVar17,*(undefined8 *)(*plVar17 + 0x1c0));
            uVar11 = thunk_FUN_02db45e8(UnityEngine_InputSystem_Controls_ButtonControl_var);
            uVar8 = FUN_050ec388(uVar11,uVar8,uVar10,0);
            thunk_FUN_02db45e8(PTR_DAT_0665d8f0);
            uVar10 = thunk_FUN_02d8a638();
            FUN_0508e50c(uVar10,uVar8,0);
            uVar8 = thunk_FUN_02db45e8(Unity_Burst_BurstRuntime_var);
                    /* WARNING: Subroutine does not return */
            FUN_02d4ddac(uVar10,uVar8);
          }
                    /* WARNING: Subroutine does not return */
          FUN_02d4dee8();
        }
                    /* WARNING: Subroutine does not return */
        FUN_02d4dee8();
      }
    }
    else {
      if (unaff_x22 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d4dee8();
      }
      iVar4 = (int)(*(ulong *)(unaff_x22 + 0x20) >> 0x20);
      if ((*(ulong *)(unaff_x22 + 0x20) & 0xff) == 0) {
        iVar4 = 1;
      }
      *(int *)(in_stack_00000018 + 0x60) = iVar4;
      uVar15 = *(ulong *)(unaff_x22 + 0x10) >> 0x20;
      if (((*(ulong *)(unaff_x22 + 0x10) & 0xff) == 0) && (uVar15 = 0, iVar4 < 1)) {
        iVar4 = FUN_05129090(*(long *)(in_stack_00000018 + 0x58),0);
        uVar15 = (ulong)(iVar4 - 1);
      }
      lVar14 = in_stack_00000018;
      if ((*(ulong *)(unaff_x22 + 0x18) & 0xff) == 0) {
        uVar5 = 0xffffffff;
        if (0 < *(int *)(in_stack_00000018 + 0x60)) {
          if (*(long *)(in_stack_00000018 + 0x58) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d4dee8();
          }
          uVar5 = FUN_05129090(*(long *)(in_stack_00000018 + 0x58),0);
        }
      }
      else {
        uVar5 = (undefined4)(*(ulong *)(unaff_x22 + 0x18) >> 0x20);
        if (in_stack_00000018 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d4dee8();
        }
      }
      *(undefined4 *)(lVar14 + 100) = uVar5;
      in_stack_00000010._4_4_ = 0;
      if (((long)*(ulong *)(unaff_x22 + 0x10) < 0) && ((*(ulong *)(unaff_x22 + 0x10) & 0xff) != 0))
      {
        if (*(long *)(in_stack_00000018 + 0x58) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d4dee8();
        }
        iVar4 = FUN_05129090(*(long *)(in_stack_00000018 + 0x58),0);
        uVar15 = (ulong)(uint)(iVar4 + (int)uVar15);
      }
      in_stack_00000010._4_4_ = 0;
      if (((long)*(ulong *)(unaff_x22 + 0x18) < 0) && ((*(ulong *)(unaff_x22 + 0x18) & 0xff) != 0))
      {
        if (*(long *)(in_stack_00000018 + 0x58) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d4dee8();
        }
        iVar4 = FUN_05129090(*(long *)(in_stack_00000018 + 0x58),0);
        *(int *)(in_stack_00000018 + 100) = *(int *)(in_stack_00000018 + 100) + iVar4;
      }
      iVar4 = *(int *)(in_stack_00000018 + 0x60);
      if (*(int *)(*unaff_x25 + 0xe4) == 0) {
        thunk_FUN_02dabd98();
      }
      uVar5 = FUN_05003fd0(uVar15,(uint)(iVar4 < 1) << 0x1f,0);
      lVar14 = *(long *)(in_stack_00000018 + 0x58);
      if (*(int *)(in_stack_00000018 + 0x60) < 1) {
        if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d4dee8();
        }
        iVar4 = FUN_05129090(lVar14,0);
        iVar4 = iVar4 + -1;
      }
      else {
        if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d4dee8();
        }
        iVar4 = FUN_05129090(lVar14,0);
      }
      if (*(int *)(*unaff_x25 + 0xe4) == 0) {
        thunk_FUN_02dabd98();
      }
      iVar4 = FUN_05004120(uVar5,iVar4,0);
      uVar5 = FUN_05003fd0(*(undefined4 *)(in_stack_00000018 + 100),0xffffffff,0);
      *(undefined4 *)(in_stack_00000018 + 100) = uVar5;
      if (*(long *)(in_stack_00000018 + 0x58) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d4dee8();
      }
      uVar6 = FUN_05129090(*(long *)(in_stack_00000018 + 0x58),0);
      iVar7 = FUN_05004120(uVar5,uVar6,0);
      *(int *)(in_stack_00000018 + 100) = iVar7;
      cVar1 = 0 < *(int *)(in_stack_00000018 + 0x60);
      bVar3 = iVar4 < iVar7;
      if (*(int *)(in_stack_00000018 + 0x60) < 1) {
        bVar3 = iVar7 < iVar4;
      }
      *(char *)(in_stack_00000018 + 0x68) = cVar1;
      unaff_x19 = in_stack_00000018;
      if (bVar3) {
        *(int *)(in_stack_00000018 + 0x6c) = iVar4;
LAB_051478f8:
        bVar3 = iVar7 < iVar4;
        if (cVar1 != '\0') {
          bVar3 = iVar4 < iVar7;
        }
        if (bVar3) {
          if (*(long *)(unaff_x19 + 0x58) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d4dee8();
          }
          uVar8 = FUN_05122550(*(long *)(unaff_x19 + 0x58),iVar4,0);
          *(undefined8 *)(in_stack_00000018 + 0x18) = uVar8;
          thunk_FUN_02dc1ef0();
          uVar8 = 1;
          *(undefined4 *)(in_stack_00000018 + 0x10) = 1;
          goto LAB_05147984;
        }
      }
      else if ((*(long *)(in_stack_00000018 + 0x40) != 0) &&
              (*(char *)(*(long *)(in_stack_00000018 + 0x40) + 0x20) != '\0')) {
        lVar14 = thunk_FUN_02db45e8(PTR_DAT_06649f98);
        if (*(int *)(lVar14 + 0xe4) == 0) {
          thunk_FUN_02dabd98();
        }
        uVar8 = FUN_04f9d780(0);
        cVar1 = *(char *)(unaff_x22 + 0x10);
        thunk_FUN_02db45e8(PTR_DAT_0664a2a0);
        if (cVar1 == '\0') {
          uVar10 = thunk_FUN_02db45e8(UnityEngine_UI_Button_var);
          uVar11 = thunk_FUN_02db45e8(PTR_DAT_06655200);
        }
        else {
          uVar10 = thunk_FUN_02db45e8(UnityEngine_UI_Button_var);
          uVar11 = *(undefined8 *)(unaff_x22 + 0x10);
          thunk_FUN_02db45e8(PTR_DAT_0664a298);
          in_stack_00000010._4_4_ = (undefined4)((ulong)uVar11 >> 0x20);
          lVar14 = thunk_FUN_02db45e8(PTR_DAT_06649f98);
          if (*(int *)(lVar14 + 0xe4) == 0) {
            thunk_FUN_02dabd98();
          }
          uVar11 = FUN_04f9d780(0);
          uVar11 = FUN_05000798((long)&stack0x00000010 + 4,uVar11,0);
        }
        cVar1 = *(char *)(unaff_x22 + 0x18);
        thunk_FUN_02db45e8(PTR_DAT_0664a2a0);
        if (cVar1 == '\0') {
          uVar12 = thunk_FUN_02db45e8(PTR_DAT_06655200);
        }
        else {
          uVar12 = *(undefined8 *)(unaff_x22 + 0x18);
          thunk_FUN_02db45e8(PTR_DAT_0664a298);
          in_stack_00000010._4_4_ = (undefined4)((ulong)uVar12 >> 0x20);
          lVar14 = thunk_FUN_02db45e8(PTR_DAT_06649f98);
          if (*(int *)(lVar14 + 0xe4) == 0) {
            thunk_FUN_02dabd98();
          }
          uVar12 = FUN_04f9d780(0);
          uVar12 = FUN_05000798((long)&stack0x00000010 + 4,uVar12,0);
        }
        uVar8 = FUN_050ec4a8(uVar10,uVar8,uVar11,uVar12,0);
        thunk_FUN_02db45e8(PTR_DAT_0665d8f0);
        uVar10 = thunk_FUN_02d8a638();
        FUN_0508e50c(uVar10,uVar8,0);
        uVar8 = thunk_FUN_02db45e8(Unity_Burst_BurstRuntime_var);
                    /* WARNING: Subroutine does not return */
        FUN_02d4ddac(uVar10,uVar8);
      }
    }
    *(undefined8 *)(unaff_x19 + 0x58) = 0;
    thunk_FUN_02dc1ef0((undefined8 *)(unaff_x19 + 0x58),0);
  } while( true );
}


