/*
FUNCTION_NAME: Unity.Netcode.FallbackSerializer<Quaternion>$$ThrowArgumentError
ENTRY_POINT: 05345284
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 78
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_4
*/


long * Unity_Netcode_FallbackSerializer<Quaternion>__ThrowArgumentError(long param_1)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  undefined8 *puVar11;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar12;
  undefined8 uVar13;
  
  FUN_03d2d2b0(*(undefined8 *)(param_1 + 0xde8));
  FUN_03d2d2b0(PTR_StringLiteral_49672_091ade58);
  FUN_03d2d2b0(PTR_StringLiteral_49925_091fbdf0);
  FUN_03d2d2b0(PTR_DAT_091a1bb0);
  FUN_03d2d2b0(PTR_StringLiteral_50016_091fbdf8);
  FUN_03d2d2b0(PTR_StringLiteral_50152_091fbe00);
  FUN_03d2d2b0(PTR_DAT_091fbe08);
  FUN_03d2d2b0(PTR_StringLiteral_50383_091fbe10);
  FUN_03d2d2b0(PTR_StringLiteral_50482_091fbe18);
  FUN_03d2d2b0(PTR_StringLiteral_50483_091fbe20);
  FUN_03d2d2b0(PTR_DAT_091fb138);
  FUN_03d2d2b0(PTR_StringLiteral_50731_091fbe28);
  FUN_03d2d2b0(PTR_StringLiteral_50783_091fbe30);
  FUN_03d2d2b0(PTR_StringLiteral_50861_091adf38);
  FUN_03d2d2b0(PTR_DAT_091ab540);
  FUN_03d2d2b0(PTR_DAT_091a1be8);
  *(undefined1 *)(unaff_x20 + 0x61f) = 1;
  puVar2 = PTR_DAT_091a1be8;
  lVar5 = *(long *)(unaff_x19 + 0x20);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_03d8f26c();
  }
  uVar12 = *(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x20);
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_03db619c(*(long *)puVar2);
  }
  puVar3 = PTR_DAT_091fb138;
  plVar6 = (long *)FUN_07186ef4(uVar12,0);
  if (plVar6 != (long *)0x0) {
    bVar1 = *(byte *)(*(long *)puVar3 + 0x130);
    if ((*(byte *)(*plVar6 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*plVar6 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar3))
    goto LAB_05345880;
  }
  uVar12 = FUN_07186ef4(*(undefined8 *)PTR_StringLiteral_49672_091ade58,0);
  uVar7 = FUN_07190474(plVar6,uVar12,0);
  if ((uVar7 & 1) == 0) {
    uVar12 = *(undefined8 *)PTR_StringLiteral_50861_091adf38;
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_03db619c();
    }
    uVar12 = FUN_07186ef4(uVar12,0);
    uVar7 = FUN_07190474(plVar6,uVar12,0);
    if ((uVar7 & 1) != 0) {
      plVar6 = (long *)thunk_FUN_03d2ef40(*(undefined8 *)PTR_DAT_091fbe08);
      FUN_0715429c(plVar6,0);
      goto Unity_Netcode_FallbackSerializer<Quaternion>__Write;
    }
    lVar5 = *(long *)(unaff_x19 + 0x20);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_03d8f26c();
    }
    uVar12 = *(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x28);
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_03db619c(*(long *)puVar2);
    }
    plVar10 = (long *)FUN_07186ef4(uVar12,0);
    if (plVar10 == (long *)0x0) {
LAB_05345888:
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    uVar7 = (**(code **)(*plVar10 + 0x2b8))(plVar10,plVar6,*(undefined8 *)(*plVar10 + 0x2c0));
    if ((uVar7 & 1) == 0) {
      if (plVar6 == (long *)0x0) goto LAB_05345888;
      uVar7 = (**(code **)(*plVar6 + 0x3d8))(plVar6,*(undefined8 *)(*plVar6 + 0x3e0));
      if ((uVar7 & 1) == 0) {
LAB_05345764:
        uVar7 = (**(code **)(*plVar6 + 0x5c8))(plVar6,*(undefined8 *)(*plVar6 + 0x5d0));
        if ((uVar7 & 1) == 0) {
switchD_053457e4_default:
          lVar5 = *(long *)(unaff_x19 + 0x20);
          if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
            lVar5 = FUN_03d8f26c();
          }
          if ((*(byte *)(*(long *)(*(long *)(lVar5 + 0xc0) + 0x30) + 0x135) & 1) == 0) {
            FUN_03d8f26c();
          }
          plVar6 = (long *)thunk_FUN_03d2ef40();
          lVar5 = *(long *)(unaff_x19 + 0x20);
          if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
            lVar5 = FUN_03d8f26c(lVar5);
          }
          FUN_05f8e138(plVar6,*(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x38));
          return plVar6;
        }
        if (*(int *)(*(long *)PTR_DAT_091a1bb0 + 0xe0) == 0) {
          thunk_FUN_03db619c();
        }
        uVar12 = FUN_071ad060(plVar6,0);
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_03db619c(*(long *)puVar2);
        }
        uVar4 = FUN_07193098(uVar12,0);
        switch(uVar4) {
        case 5:
          lVar5 = *(long *)puVar2;
          puVar11 = (undefined8 *)PTR_StringLiteral_50731_091fbe28;
          break;
        case 6:
        case 8:
        case 9:
        case 10:
          lVar5 = *(long *)puVar2;
          puVar11 = (undefined8 *)PTR_StringLiteral_49925_091fbdf0;
          break;
        case 7:
          lVar5 = *(long *)puVar2;
          puVar11 = (undefined8 *)PTR_StringLiteral_50783_091fbe30;
          break;
        case 0xb:
        case 0xc:
          lVar5 = *(long *)puVar2;
          puVar11 = (undefined8 *)PTR_StringLiteral_50383_091fbe10;
          break;
        default:
          goto switchD_053457e4_default;
        }
        goto LAB_053454dc;
      }
      uVar12 = (**(code **)(*plVar6 + 0x468))(plVar6,*(undefined8 *)(*plVar6 + 0x470));
      uVar13 = *(undefined8 *)PTR_StringLiteral_50483_091fbe20;
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_03db619c(*(long *)puVar2);
      }
      uVar13 = FUN_07186ef4(uVar13,0);
      uVar7 = FUN_07190474(uVar12,uVar13,0);
      if ((uVar7 & 1) == 0) goto LAB_05345764;
      lVar5 = (**(code **)(*plVar6 + 0x488))(plVar6,*(undefined8 *)(*plVar6 + 0x490));
      if (lVar5 == 0) goto LAB_05345888;
      if (*(int *)(lVar5 + 0x18) == 0) {
LAB_0534588c:
                    /* WARNING: Subroutine does not return */
        FUN_03d2d550();
      }
      plVar10 = *(long **)(lVar5 + 0x20);
      if (plVar10 != (long *)0x0) {
        bVar1 = *(byte *)(*(long *)puVar3 + 0x130);
        if ((*(byte *)(*plVar10 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar3)) {
                    /* WARNING: Subroutine does not return */
          FUN_03d2d8e4(plVar10);
        }
      }
      uVar12 = *(undefined8 *)PTR_StringLiteral_50152_091fbe00;
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_03db619c();
      }
      plVar8 = (long *)FUN_07186ef4(uVar12,0);
      plVar9 = (long *)FUN_03d2d394(*(undefined8 *)PTR_DAT_091ab540,1);
      if (plVar9 == (long *)0x0) goto LAB_05345888;
      if ((plVar10 != (long *)0x0) &&
         (lVar5 = thunk_FUN_03d2ee44(plVar10,*(undefined8 *)(*plVar9 + 0x40)), lVar5 == 0)) {
        uVar12 = thunk_FUN_03d3c630();
                    /* WARNING: Subroutine does not return */
        FUN_03d2d414(uVar12,0);
      }
      if ((int)plVar9[3] == 0) goto LAB_0534588c;
      plVar9[4] = (long)plVar10;
      thunk_FUN_03d1023c(plVar9 + 4,plVar10);
      if ((plVar8 == (long *)0x0) ||
         (plVar8 = (long *)(**(code **)(*plVar8 + 0x9a8))
                                     (plVar8,plVar9,*(undefined8 *)(*plVar8 + 0x9b0)),
         plVar8 == (long *)0x0)) goto LAB_05345888;
      uVar7 = (**(code **)(*plVar8 + 0x2b8))(plVar8,plVar10,*(undefined8 *)(*plVar8 + 0x2c0));
      if ((uVar7 & 1) == 0) goto LAB_05345764;
      uVar12 = *(undefined8 *)PTR_StringLiteral_50482_091fbe18;
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_03db619c();
      }
      uVar12 = FUN_07186ef4(uVar12,0);
      plVar6 = plVar10;
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_03db619c(*(long *)puVar3);
      }
    }
    else {
      lVar5 = *(long *)puVar2;
      puVar11 = (undefined8 *)PTR_StringLiteral_50016_091fbdf8;
LAB_053454dc:
      uVar12 = *puVar11;
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_03db619c();
      }
      uVar12 = FUN_07186ef4(uVar12,0);
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_03db619c(*(long *)puVar3);
      }
    }
    plVar6 = (long *)FUN_071bb0f0(uVar12,plVar6,0);
    lVar5 = *(long *)(unaff_x19 + 0x20);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_03d8f26c(lVar5);
    }
    plVar10 = *(long **)(lVar5 + 0xc0);
  }
  else {
    plVar6 = (long *)thunk_FUN_03d2ef40(*(undefined8 *)PTR_DAT_091fbde8);
    FUN_0715419c(plVar6,0);
Unity_Netcode_FallbackSerializer<Quaternion>__Write:
    lVar5 = *(long *)(unaff_x19 + 0x20);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_03d8f26c();
    }
    plVar10 = *(long **)(lVar5 + 0xc0);
  }
  lVar5 = *plVar10;
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_03d8f26c(lVar5);
  }
  if (plVar6 != (long *)0x0) {
    if ((*(byte *)(*plVar6 + 0x130) < *(byte *)(lVar5 + 0x130)) ||
       (*(long *)(*(long *)(*plVar6 + 200) + (ulong)*(byte *)(lVar5 + 0x130) * 8 + -8) != lVar5)) {
LAB_05345880:
                    /* WARNING: Subroutine does not return */
      FUN_03d2d8e4(plVar6);
    }
  }
  return plVar6;
}


