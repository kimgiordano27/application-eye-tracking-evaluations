/*
FUNCTION_NAME: Photon.Pun.PhotonTransformViewPositionControl$$OnPhotonSerializeView
ENTRY_POINT: 051475e0
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


undefined8
Photon_Pun_PhotonTransformViewPositionControl__OnPhotonSerializeView
          (code *param_1,long *param_2,undefined8 param_3)

{
  int iVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long *plVar15;
  long lVar16;
  int *piVar17;
  long *plVar18;
  long *unaff_x21;
  long unaff_x22;
  long *unaff_x23;
  long *unaff_x24;
  long *unaff_x25;
  long in_stack_00000000;
  undefined8 in_stack_00000010;
  long in_stack_00000018;
  
  do {
                    /* catch() { ... } // from try @ 051475d0 with catch @ 051475e0 */
    uVar9 = (*param_1)(param_2,param_3);
                    /* try { // try from 051475e4 to 052475eb has its CatchHandler @ 051475f4 */
                    /* try { // try from 051475ec to 052475f7 has its CatchHandler @ 05147464 */
    if ((uVar9 & 1) == 0) {
      FUN_05147cb4();
      *(undefined8 *)(in_stack_00000018 + 0x50) = 0;
      thunk_FUN_02dc1ef0((undefined8 *)(in_stack_00000018 + 0x50),0);
      uVar11 = 0;
LAB_05147984:
      if (in_stack_00000000 != 0) {
        FUN_02cb88d0(&stack0x00000008);
                    /* WARNING: Subroutine does not return */
        FUN_02d4dee0(in_stack_00000000);
      }
      return uVar11;
    }
    plVar18 = *(long **)(in_stack_00000018 + 0x50);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 051475e4 with catch @ 051475f4
                        */
    if (plVar18 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d4dee8();
    }
    lVar16 = *plVar18;
    uVar9 = (ulong)*(ushort *)(lVar16 + 0x12e);
    if (uVar9 != 0) {
      piVar17 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) == *unaff_x23) {
          puVar10 = (undefined8 *)(lVar16 + (long)*piVar17 * 0x10 + 0x138);
          goto LAB_05147644;
        }
        uVar9 = uVar9 - 1;
        piVar17 = piVar17 + 4;
      } while (uVar9 != 0);
    }
    puVar10 = (undefined8 *)FUN_02d87540(plVar18,*unaff_x23,0);
LAB_05147644:
    plVar18 = (long *)(*(code *)*puVar10)(plVar18,puVar10[1]);
    if (plVar18 == (long *)0x0) {
      *(undefined8 *)(in_stack_00000018 + 0x58) = 0;
      plVar15 = (long *)0x0;
    }
    else {
      lVar16 = *unaff_x24;
      bVar2 = *(byte *)(lVar16 + 0x130);
      plVar15 = (long *)0x0;
      if ((bVar2 <= *(byte *)(*plVar18 + 0x130)) &&
         (plVar15 = plVar18, *(long *)(*(long *)(*plVar18 + 200) + (ulong)bVar2 * 8 + -8) != lVar16)
         ) {
        plVar15 = (long *)0x0;
      }
      *(long **)(in_stack_00000018 + 0x58) = plVar15;
      if (*(byte *)(*plVar18 + 0x130) < bVar2) {
        plVar15 = (long *)0x0;
      }
      else {
        plVar15 = plVar18;
        if (*(long *)(*(long *)(*plVar18 + 200) + (ulong)bVar2 * 8 + -8) != lVar16) {
          plVar15 = (long *)0x0;
        }
      }
    }
    thunk_FUN_02dc1ef0(in_stack_00000018 + 0x58,plVar15);
    if (*(long *)(in_stack_00000018 + 0x58) == 0) {
      if ((*(long *)(in_stack_00000018 + 0x40) != 0) &&
         (*(char *)(*(long *)(in_stack_00000018 + 0x40) + 0x20) != '\0')) {
        lVar16 = thunk_FUN_02db45e8(PTR_DAT_06649f98);
        if (*(int *)(lVar16 + 0xe4) == 0) {
          thunk_FUN_02dabd98();
        }
        uVar11 = FUN_04f9d780(0);
        if (plVar18 != (long *)0x0) {
          plVar18 = (long *)thunk_FUN_02d5dae8(plVar18,0);
          if (plVar18 != (long *)0x0) {
            uVar12 = (**(code **)(*plVar18 + 0x1b8))(plVar18,*(undefined8 *)(*plVar18 + 0x1c0));
            uVar13 = thunk_FUN_02db45e8(UnityEngine_InputSystem_Controls_ButtonControl_var);
            uVar11 = FUN_050ec388(uVar13,uVar11,uVar12,0);
            thunk_FUN_02db45e8(PTR_DAT_0665d8f0);
            uVar12 = thunk_FUN_02d8a638();
            FUN_0508e50c(uVar12,uVar11,0);
            uVar11 = thunk_FUN_02db45e8(Unity_Burst_BurstRuntime_var);
                    /* WARNING: Subroutine does not return */
            FUN_02d4ddac(uVar12,uVar11);
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
      iVar5 = (int)(*(ulong *)(unaff_x22 + 0x20) >> 0x20);
      if ((*(ulong *)(unaff_x22 + 0x20) & 0xff) == 0) {
        iVar5 = 1;
      }
      *(int *)(in_stack_00000018 + 0x60) = iVar5;
      uVar9 = *(ulong *)(unaff_x22 + 0x10) >> 0x20;
      if (((*(ulong *)(unaff_x22 + 0x10) & 0xff) == 0) && (uVar9 = 0, iVar5 < 1)) {
        iVar5 = FUN_05129090(*(long *)(in_stack_00000018 + 0x58),0);
        uVar9 = (ulong)(iVar5 - 1);
      }
      lVar16 = in_stack_00000018;
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
      *(undefined4 *)(lVar16 + 100) = uVar6;
      in_stack_00000010._4_4_ = 0;
      if (((long)*(ulong *)(unaff_x22 + 0x10) < 0) && ((*(ulong *)(unaff_x22 + 0x10) & 0xff) != 0))
      {
        if (*(long *)(in_stack_00000018 + 0x58) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d4dee8();
        }
        iVar5 = FUN_05129090(*(long *)(in_stack_00000018 + 0x58),0);
        uVar9 = (ulong)(uint)(iVar5 + (int)uVar9);
      }
      in_stack_00000010._4_4_ = 0;
      if (((long)*(ulong *)(unaff_x22 + 0x18) < 0) && ((*(ulong *)(unaff_x22 + 0x18) & 0xff) != 0))
      {
        if (*(long *)(in_stack_00000018 + 0x58) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d4dee8();
        }
        iVar5 = FUN_05129090(*(long *)(in_stack_00000018 + 0x58),0);
        *(int *)(in_stack_00000018 + 100) = *(int *)(in_stack_00000018 + 100) + iVar5;
      }
      iVar5 = *(int *)(in_stack_00000018 + 0x60);
      if (*(int *)(*unaff_x25 + 0xe4) == 0) {
        thunk_FUN_02dabd98();
      }
      uVar6 = FUN_05003fd0(uVar9,(uint)(iVar5 < 1) << 0x1f,0);
      lVar16 = *(long *)(in_stack_00000018 + 0x58);
      if (*(int *)(in_stack_00000018 + 0x60) < 1) {
        if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d4dee8();
        }
        iVar5 = FUN_05129090(lVar16,0);
        iVar5 = iVar5 + -1;
      }
      else {
        if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d4dee8();
        }
        iVar5 = FUN_05129090(lVar16,0);
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
          goto LAB_05147984;
        }
      }
      else if ((*(long *)(in_stack_00000018 + 0x40) != 0) &&
              (*(char *)(*(long *)(in_stack_00000018 + 0x40) + 0x20) != '\0')) {
        lVar16 = thunk_FUN_02db45e8(PTR_DAT_06649f98);
        if (*(int *)(lVar16 + 0xe4) == 0) {
          thunk_FUN_02dabd98();
        }
        uVar11 = FUN_04f9d780(0);
        cVar3 = *(char *)(unaff_x22 + 0x10);
        thunk_FUN_02db45e8(PTR_DAT_0664a2a0);
        if (cVar3 == '\0') {
          uVar12 = thunk_FUN_02db45e8(UnityEngine_UI_Button_var);
          uVar13 = thunk_FUN_02db45e8(PTR_DAT_06655200);
        }
        else {
          uVar12 = thunk_FUN_02db45e8(UnityEngine_UI_Button_var);
          uVar13 = *(undefined8 *)(unaff_x22 + 0x10);
          thunk_FUN_02db45e8(PTR_DAT_0664a298);
          in_stack_00000010._4_4_ = (undefined4)((ulong)uVar13 >> 0x20);
          lVar16 = thunk_FUN_02db45e8(PTR_DAT_06649f98);
          if (*(int *)(lVar16 + 0xe4) == 0) {
            thunk_FUN_02dabd98();
          }
          uVar13 = FUN_04f9d780(0);
          uVar13 = FUN_05000798((long)&stack0x00000010 + 4,uVar13,0);
        }
        cVar3 = *(char *)(unaff_x22 + 0x18);
        thunk_FUN_02db45e8(PTR_DAT_0664a2a0);
        if (cVar3 == '\0') {
          uVar14 = thunk_FUN_02db45e8(PTR_DAT_06655200);
        }
        else {
          uVar14 = *(undefined8 *)(unaff_x22 + 0x18);
          thunk_FUN_02db45e8(PTR_DAT_0664a298);
          in_stack_00000010._4_4_ = (undefined4)((ulong)uVar14 >> 0x20);
          lVar16 = thunk_FUN_02db45e8(PTR_DAT_06649f98);
          if (*(int *)(lVar16 + 0xe4) == 0) {
            thunk_FUN_02dabd98();
          }
          uVar14 = FUN_04f9d780(0);
          uVar14 = FUN_05000798((long)&stack0x00000010 + 4,uVar14,0);
        }
        uVar11 = FUN_050ec4a8(uVar12,uVar11,uVar13,uVar14,0);
        thunk_FUN_02db45e8(PTR_DAT_0665d8f0);
        uVar12 = thunk_FUN_02d8a638();
        FUN_0508e50c(uVar12,uVar11,0);
        uVar11 = thunk_FUN_02db45e8(Unity_Burst_BurstRuntime_var);
                    /* WARNING: Subroutine does not return */
        FUN_02d4ddac(uVar12,uVar11);
      }
    }
    *(undefined8 *)(in_stack_00000018 + 0x58) = 0;
    thunk_FUN_02dc1ef0((undefined8 *)(in_stack_00000018 + 0x58),0);
    param_2 = *(long **)(in_stack_00000018 + 0x50);
    if (param_2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d4dee8();
    }
    lVar16 = *param_2;
    uVar9 = (ulong)*(ushort *)(lVar16 + 0x12e);
    if (uVar9 != 0) {
      piVar17 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) == *unaff_x21) {
          puVar10 = (undefined8 *)(lVar16 + (long)*piVar17 * 0x10 + 0x138);
          goto LAB_051475d8;
        }
        uVar9 = uVar9 - 1;
        piVar17 = piVar17 + 4;
      } while (uVar9 != 0);
    }
    puVar10 = (undefined8 *)FUN_02d87540(param_2,*unaff_x21,0);
LAB_051475d8:
    param_1 = (code *)*puVar10;
    param_3 = puVar10[1];
  } while( true );
}


