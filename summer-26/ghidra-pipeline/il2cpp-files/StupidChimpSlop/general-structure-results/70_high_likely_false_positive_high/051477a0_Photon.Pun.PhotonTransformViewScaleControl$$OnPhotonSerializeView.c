/*
FUNCTION_NAME: Photon.Pun.PhotonTransformViewScaleControl$$OnPhotonSerializeView
ENTRY_POINT: 051477a0
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 71
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_19;ui_or_gameplay_sink_hits_3;telemetry_or_network_hits_2
*/


undefined8 Photon_Pun_PhotonTransformViewScaleControl__OnPhotonSerializeView(long param_1)

{
  int iVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long *plVar15;
  ulong uVar16;
  ulong in_x9;
  int *piVar17;
  long *plVar18;
  ulong unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  long *unaff_x23;
  long *unaff_x24;
  long *unaff_x25;
  long in_stack_00000000;
  undefined8 in_stack_00000010;
  long in_stack_00000018;
  
  do {
    if (((long)in_x9 < 0) && ((in_x9 & 0xff) != 0)) {
      if (*(long *)(param_1 + 0x58) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d4dee8();
      }
      iVar5 = FUN_05129090(*(long *)(param_1 + 0x58),0);
      unaff_x20 = (ulong)(uint)(iVar5 + (int)unaff_x20);
      param_1 = in_stack_00000018;
    }
    in_stack_00000010._4_4_ = 0;
    if (((long)*(ulong *)(unaff_x22 + 0x18) < 0) && ((*(ulong *)(unaff_x22 + 0x18) & 0xff) != 0)) {
      if (*(long *)(param_1 + 0x58) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d4dee8();
      }
      iVar5 = FUN_05129090(*(long *)(param_1 + 0x58),0);
      *(int *)(in_stack_00000018 + 100) = *(int *)(in_stack_00000018 + 100) + iVar5;
      param_1 = in_stack_00000018;
    }
    iVar5 = *(int *)(param_1 + 0x60);
    if (*(int *)(*unaff_x25 + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    uVar6 = FUN_05003fd0(unaff_x20 & 0xffffffff,(uint)(iVar5 < 1) << 0x1f,0);
    lVar10 = *(long *)(in_stack_00000018 + 0x58);
    if (*(int *)(in_stack_00000018 + 0x60) < 1) {
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d4dee8();
      }
      iVar5 = FUN_05129090(lVar10,0);
      iVar5 = iVar5 + -1;
    }
    else {
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d4dee8();
      }
      iVar5 = FUN_05129090(lVar10,0);
    }
    if (*(int *)(*unaff_x25 + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    iVar5 = FUN_05004120(uVar6,iVar5,0);
    uVar6 = FUN_05003fd0(*(undefined4 *)(in_stack_00000018 + 100),0xffffffff,0);
    *(undefined4 *)(in_stack_00000018 + 100) = uVar6;
    if (*(long *)(in_stack_00000018 + 0x58) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d4dee8();
    }
    uVar7 = FUN_05129090(*(long *)(in_stack_00000018 + 0x58),0);
    iVar8 = FUN_05004120(uVar6,uVar7,0);
    iVar1 = *(int *)(in_stack_00000018 + 0x60);
    *(int *)(in_stack_00000018 + 100) = iVar8;
    bVar4 = iVar5 < iVar8;
    if (iVar1 < 1) {
      bVar4 = iVar8 < iVar5;
    }
    *(bool *)(in_stack_00000018 + 0x68) = 0 < iVar1;
    if (bVar4) {
      *(int *)(in_stack_00000018 + 0x6c) = iVar5;
      bVar4 = iVar8 < iVar5;
      if (0 < iVar1) {
        bVar4 = iVar5 < iVar8;
      }
      if (bVar4) {
        if (*(long *)(in_stack_00000018 + 0x58) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d4dee8();
        }
        uVar11 = FUN_05122550(*(long *)(in_stack_00000018 + 0x58),iVar5,0);
        *(undefined8 *)(in_stack_00000018 + 0x18) = uVar11;
        thunk_FUN_02dc1ef0();
        uVar11 = 1;
        *(undefined4 *)(in_stack_00000018 + 0x10) = 1;
LAB_05147984:
        if (in_stack_00000000 != 0) {
          FUN_02cb88d0(&stack0x00000008);
                    /* WARNING: Subroutine does not return */
          FUN_02d4dee0(in_stack_00000000);
        }
        return uVar11;
      }
    }
    else if ((*(long *)(in_stack_00000018 + 0x40) != 0) &&
            (*(char *)(*(long *)(in_stack_00000018 + 0x40) + 0x20) != '\0')) {
      lVar10 = thunk_FUN_02db45e8(PTR_DAT_06649f98);
      if (*(int *)(lVar10 + 0xe4) == 0) {
        thunk_FUN_02dabd98();
      }
      uVar11 = FUN_04f9d780(0);
      cVar3 = *(char *)(unaff_x22 + 0x10);
      thunk_FUN_02db45e8(PTR_DAT_0664a2a0);
      if (cVar3 == '\0') {
        uVar13 = thunk_FUN_02db45e8(UnityEngine_UI_Button_var);
        uVar14 = thunk_FUN_02db45e8(PTR_DAT_06655200);
      }
      else {
        uVar13 = thunk_FUN_02db45e8(UnityEngine_UI_Button_var);
        uVar14 = *(undefined8 *)(unaff_x22 + 0x10);
        thunk_FUN_02db45e8(PTR_DAT_0664a298);
        in_stack_00000010._4_4_ = (undefined4)((ulong)uVar14 >> 0x20);
        lVar10 = thunk_FUN_02db45e8(PTR_DAT_06649f98);
        if (*(int *)(lVar10 + 0xe4) == 0) {
          thunk_FUN_02dabd98();
        }
        uVar14 = FUN_04f9d780(0);
        uVar14 = FUN_05000798((long)&stack0x00000010 + 4,uVar14,0);
      }
      cVar3 = *(char *)(unaff_x22 + 0x18);
      thunk_FUN_02db45e8(PTR_DAT_0664a2a0);
      if (cVar3 == '\0') {
        uVar12 = thunk_FUN_02db45e8(PTR_DAT_06655200);
      }
      else {
        uVar12 = *(undefined8 *)(unaff_x22 + 0x18);
        thunk_FUN_02db45e8(PTR_DAT_0664a298);
        in_stack_00000010._4_4_ = (undefined4)((ulong)uVar12 >> 0x20);
        lVar10 = thunk_FUN_02db45e8(PTR_DAT_06649f98);
        if (*(int *)(lVar10 + 0xe4) == 0) {
          thunk_FUN_02dabd98();
        }
        uVar12 = FUN_04f9d780(0);
        uVar12 = FUN_05000798((long)&stack0x00000010 + 4,uVar12,0);
      }
      uVar11 = FUN_050ec4a8(uVar13,uVar11,uVar14,uVar12,0);
      thunk_FUN_02db45e8(PTR_DAT_0665d8f0);
      uVar13 = thunk_FUN_02d8a638();
      FUN_0508e50c(uVar13,uVar11,0);
      uVar11 = thunk_FUN_02db45e8(Unity_Burst_BurstRuntime_var);
                    /* WARNING: Subroutine does not return */
      FUN_02d4ddac(uVar13,uVar11);
    }
LAB_05147584:
    *(undefined8 *)(in_stack_00000018 + 0x58) = 0;
    thunk_FUN_02dc1ef0((undefined8 *)(in_stack_00000018 + 0x58),0);
    plVar18 = *(long **)(in_stack_00000018 + 0x50);
    if (plVar18 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d4dee8();
    }
    lVar10 = *plVar18;
    uVar16 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar16 != 0) {
      piVar17 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) == *unaff_x21) {
          puVar9 = (undefined8 *)(lVar10 + (long)*piVar17 * 0x10 + 0x138);
          goto LAB_051475d8;
        }
        uVar16 = uVar16 - 1;
        piVar17 = piVar17 + 4;
      } while (uVar16 != 0);
    }
    puVar9 = (undefined8 *)FUN_02d87540(plVar18,*unaff_x21,0);
LAB_051475d8:
    uVar16 = (*(code *)*puVar9)(plVar18,puVar9[1]);
    if ((uVar16 & 1) == 0) {
      FUN_05147cb4();
      *(undefined8 *)(in_stack_00000018 + 0x50) = 0;
      thunk_FUN_02dc1ef0((undefined8 *)(in_stack_00000018 + 0x50),0);
      uVar11 = 0;
      goto LAB_05147984;
    }
    plVar18 = *(long **)(in_stack_00000018 + 0x50);
    if (plVar18 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d4dee8();
    }
    lVar10 = *plVar18;
    uVar16 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar16 != 0) {
      piVar17 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) == *unaff_x23) {
          puVar9 = (undefined8 *)(lVar10 + (long)*piVar17 * 0x10 + 0x138);
          goto LAB_05147644;
        }
        uVar16 = uVar16 - 1;
        piVar17 = piVar17 + 4;
      } while (uVar16 != 0);
    }
    puVar9 = (undefined8 *)FUN_02d87540(plVar18,*unaff_x23,0);
LAB_05147644:
    plVar18 = (long *)(*(code *)*puVar9)(plVar18,puVar9[1]);
    if (plVar18 == (long *)0x0) {
      *(undefined8 *)(in_stack_00000018 + 0x58) = 0;
      plVar15 = (long *)0x0;
    }
    else {
      lVar10 = *unaff_x24;
      bVar2 = *(byte *)(lVar10 + 0x130);
      plVar15 = (long *)0x0;
      if ((bVar2 <= *(byte *)(*plVar18 + 0x130)) &&
         (plVar15 = plVar18, *(long *)(*(long *)(*plVar18 + 200) + (ulong)bVar2 * 8 + -8) != lVar10)
         ) {
        plVar15 = (long *)0x0;
      }
      *(long **)(in_stack_00000018 + 0x58) = plVar15;
      if (*(byte *)(*plVar18 + 0x130) < bVar2) {
        plVar15 = (long *)0x0;
      }
      else {
        plVar15 = plVar18;
        if (*(long *)(*(long *)(*plVar18 + 200) + (ulong)bVar2 * 8 + -8) != lVar10) {
          plVar15 = (long *)0x0;
        }
      }
    }
    thunk_FUN_02dc1ef0(in_stack_00000018 + 0x58,plVar15);
    if (*(long *)(in_stack_00000018 + 0x58) == 0) {
      if ((*(long *)(in_stack_00000018 + 0x40) != 0) &&
         (*(char *)(*(long *)(in_stack_00000018 + 0x40) + 0x20) != '\0')) {
        lVar10 = thunk_FUN_02db45e8(PTR_DAT_06649f98);
        if (*(int *)(lVar10 + 0xe4) == 0) {
          thunk_FUN_02dabd98();
        }
        uVar11 = FUN_04f9d780(0);
        if (plVar18 != (long *)0x0) {
          plVar18 = (long *)thunk_FUN_02d5dae8(plVar18,0);
          if (plVar18 != (long *)0x0) {
            uVar13 = (**(code **)(*plVar18 + 0x1b8))(plVar18,*(undefined8 *)(*plVar18 + 0x1c0));
            uVar14 = thunk_FUN_02db45e8(UnityEngine_InputSystem_Controls_ButtonControl_var);
            uVar11 = FUN_050ec388(uVar14,uVar11,uVar13,0);
            thunk_FUN_02db45e8(PTR_DAT_0665d8f0);
            uVar13 = thunk_FUN_02d8a638();
            FUN_0508e50c(uVar13,uVar11,0);
            uVar11 = thunk_FUN_02db45e8(Unity_Burst_BurstRuntime_var);
                    /* WARNING: Subroutine does not return */
            FUN_02d4ddac(uVar13,uVar11);
          }
                    /* WARNING: Subroutine does not return */
          FUN_02d4dee8();
        }
                    /* WARNING: Subroutine does not return */
        FUN_02d4dee8();
      }
      goto LAB_05147584;
    }
    if (unaff_x22 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d4dee8();
    }
    iVar5 = (int)(*(ulong *)(unaff_x22 + 0x20) >> 0x20);
    if ((*(ulong *)(unaff_x22 + 0x20) & 0xff) == 0) {
      iVar5 = 1;
    }
    *(int *)(in_stack_00000018 + 0x60) = iVar5;
    unaff_x20 = *(ulong *)(unaff_x22 + 0x10) >> 0x20;
    if (((*(ulong *)(unaff_x22 + 0x10) & 0xff) == 0) && (unaff_x20 = 0, iVar5 < 1)) {
      iVar5 = FUN_05129090(*(long *)(in_stack_00000018 + 0x58),0);
      unaff_x20 = (ulong)(iVar5 - 1);
    }
    lVar10 = in_stack_00000018;
    if ((*(ulong *)(unaff_x22 + 0x18) & 0xff) == 0) {
      uVar6 = 0xffffffff;
      if (0 < *(int *)(in_stack_00000018 + 0x60)) {
        if (*(long *)(in_stack_00000018 + 0x58) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d4dee8();
        }
        uVar6 = FUN_05129090(*(long *)(in_stack_00000018 + 0x58),0);
      }
    }
    else {
      uVar6 = (undefined4)(*(ulong *)(unaff_x22 + 0x18) >> 0x20);
      if (in_stack_00000018 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d4dee8();
      }
    }
    *(undefined4 *)(lVar10 + 100) = uVar6;
    in_x9 = *(ulong *)(unaff_x22 + 0x10);
    in_stack_00000010._4_4_ = 0;
    param_1 = in_stack_00000018;
  } while( true );
}


