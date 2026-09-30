/*
FUNCTION_NAME: Unity.AppUI.UI.ExVisualElement.UxmlSerializedData$$CreateInstance
ENTRY_POINT: 05891254
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_1;telemetry_or_network_hits_2
*/


void Unity_AppUI_UI_ExVisualElement_UxmlSerializedData__CreateInstance(void)

{
  ushort *puVar1;
  byte bVar2;
  undefined1 uVar3;
  ushort uVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  undefined *puVar7;
  short sVar8;
  uint uVar9;
  int iVar10;
  undefined8 uVar11;
  ulong uVar12;
  long *plVar13;
  int in_w8;
  long lVar14;
  undefined2 in_w9;
  undefined4 uVar15;
  int iVar16;
  int unaff_w19;
  int unaff_w20;
  long unaff_x21;
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
  int unaff_w25;
  uint uVar17;
  long lVar18;
  int iStack0000000000000018;
  int iStack000000000000001c;
  char in_stack_00000020;
  int iStack0000000000000024;
  long in_stack_00000028;
  
  do {
    unaff_w25 = unaff_w25 + 1;
    iStack0000000000000024 = in_w8 + 1;
    *(undefined2 *)(unaff_x24 + (long)in_w8 * 2) = in_w9;
    iVar16 = unaff_w19;
    if (unaff_w19 < unaff_w25) {
LAB_05890e8c:
      do {
        unaff_w25 = iVar16 + 1;
        if (unaff_w20 <= unaff_w25) {
          if (in_stack_00000028 != 0) {
            FUN_05003ff8(&stack0x00000028,0);
          }
          FUN_04f754a0(0,unaff_x22,0,iStack0000000000000024,0);
          return;
        }
        puVar1 = (ushort *)(unaff_x21 + (long)unaff_w25 * 2);
        in_stack_00000020 = '\0';
        uVar4 = *puVar1;
        if (uVar4 != 0x25) {
          uVar9 = (uint)uVar4;
          if (uVar4 < 0x80) {
            *(ushort *)(unaff_x24 + (long)iStack0000000000000024 * 2) = uVar4;
          }
          else {
            if (*(int *)(*(long *)(PTR_DAT_067c9338 + 0x88) + 0xe4) == 0) {
              thunk_FUN_02f6670c();
            }
            uVar17 = (uint)uVar4;
            uVar12 = FUN_0505c420(uVar4,0);
            if (((uVar12 & 1) != 0) && (iVar16 = iVar16 + 2, iVar16 < unaff_w20)) {
              uVar12 = FUN_0589034c(uVar17,*(undefined2 *)(unaff_x21 + (long)iVar16 * 2),
                                    &stack0x00000020,iStack0000000000000018 == 0x20);
              if ((uVar12 & 1) == 0) goto LAB_05890d60;
              *(ushort *)(unaff_x24 + (long)iStack0000000000000024 * 2) = *puVar1;
              *(undefined2 *)(unaff_x24 + (long)(iStack0000000000000024 + 1) * 2) =
                   *(undefined2 *)(unaff_x21 + (long)iVar16 * 2);
              iStack0000000000000024 = iStack0000000000000024 + 2;
              goto LAB_05890e8c;
            }
            if ((0x6ba < (uVar17 - 0xa0 >> 5 & 0x7ff)) && (0x4cf < (uVar17 + 0x700 & 0xffff))) {
              if ((iStack0000000000000018 == 0x20) && (0x1ff < (uVar9 + 0x210 & 0xffff))) {
                if (0x18 < (uVar9 + 0x2000 >> 8 & 0xff)) {
LAB_05890d60:
                  if (iStack000000000000001c < 0xc) {
                    if (unaff_x22 == 0) goto LAB_058912c4;
                    if (0x7fffffa5 < *(int *)(unaff_x22 + 0x18)) {
                      uVar11 = FUN_02f089d8();
                    /* WARNING: Subroutine does not return */
                      FUN_02f0888c(uVar11,*(undefined8 *)
                                           Method_UnityEngine_InputSystem_InputControl<Vector3>_FinishSetup__
                                  );
                    }
                    unaff_x22 = FUN_02f0880c(*(undefined8 *)PTR_DAT_067ca110,
                                             *(int *)(unaff_x22 + 0x18) + 0x5a);
                    lVar14 = unaff_x22;
                    if (unaff_x22 != 0) {
                      lVar14 = 0;
                      if (*(int *)(unaff_x22 + 0x18) != 0) {
                        lVar14 = unaff_x22 + 0x20;
                      }
                    }
                    FUN_05101c6c(lVar14,unaff_x24,iStack0000000000000024 << 1,0);
                    if (in_stack_00000028 != 0) {
                      FUN_05003ff8(&stack0x00000028,0);
                    }
                    iStack000000000000001c = iStack000000000000001c + 0x5a;
                    in_stack_00000028 = FUN_05003fe4(unaff_x22,3,0);
                    uVar11 = FUN_05003f14(&stack0x00000028,0);
                    unaff_x24 = FUN_0511fb5c(uVar11,0);
                  }
                  lVar14 = FUN_02f0880c(*(undefined8 *)PTR_DAT_067c9320,4);
                  if (lVar14 == 0) {
                    lVar18 = 0;
                  }
                  else {
                    lVar18 = 0;
                    if (*(int *)(lVar14 + 0x18) != 0) {
                      lVar18 = lVar14 + 0x20;
                    }
                  }
                  plVar13 = (long *)FUN_04f87cb4(0);
                  if (plVar13 != (long *)0x0) {
                    uVar15 = 1;
                    if (in_stack_00000020 != '\0') {
                      uVar15 = 2;
                    }
                    uVar9 = (**(code **)(*plVar13 + 0x278))
                                      (plVar13,puVar1,uVar15,lVar18,4,
                                       *(undefined8 *)(*plVar13 + 0x280));
                    iStack000000000000001c = uVar9 * -3 + iStack000000000000001c;
                    iVar16 = unaff_w25;
                    if ((int)uVar9 < 1) goto LAB_05890e8c;
                    if (lVar14 != 0) {
                      uVar12 = 0;
                      do {
                        if (*(uint *)(lVar14 + 0x18) <= uVar12) goto LAB_058912c0;
                        uVar3 = *(undefined1 *)(lVar14 + 0x20 + uVar12);
                        if (*(int *)(*(long *)
                                      Method_Unity_AppUI_Core_GestureRecognizer<float>__ctor__ +
                                    0xe4) == 0) {
                          thunk_FUN_02f6670c();
                        }
                        FUN_058918a0(uVar3,unaff_x22,&stack0x00000024);
                        uVar12 = uVar12 + 1;
                      } while (uVar9 != uVar12);
                      goto LAB_05890e8c;
                    }
                  }
LAB_058912c4:
                    /* WARNING: Subroutine does not return */
                  FUN_02f089c8();
                }
              }
              else if (0x1ff < (uVar9 + 0x210 & 0xffff)) goto LAB_05890d60;
            }
            if (*(int *)(*(long *)UnityEngine_UIElements_ChangeEvent<Color>_TypeInfo + 0xe4) == 0) {
              thunk_FUN_02f6670c();
            }
            uVar12 = FUN_0586b398(uVar9,0);
            iVar16 = unaff_w25;
            if ((uVar12 & 1) != 0) goto LAB_05890e8c;
            *(ushort *)(unaff_x24 + (long)iStack0000000000000024 * 2) = *puVar1;
          }
          iVar16 = unaff_w25;
          iStack0000000000000024 = iStack0000000000000024 + 1;
          goto LAB_05890e8c;
        }
        unaff_w19 = iVar16 + 3;
        if (unaff_w20 <= unaff_w19) {
          *(undefined2 *)(unaff_x24 + (long)iStack0000000000000024 * 2) = 0x25;
          iVar16 = unaff_w25;
          iStack0000000000000024 = iStack0000000000000024 + 1;
          goto LAB_05890e8c;
        }
        uVar5 = *(undefined2 *)(unaff_x21 + (long)(iVar16 + 2) * 2);
        uVar6 = *(undefined2 *)(unaff_x21 + (long)unaff_w19 * 2);
        if (*(int *)(*(long *)Method_Unity_AppUI_Core_GestureRecognizer<float>__ctor__ + 0xe4) == 0)
        {
          thunk_FUN_02f6670c();
        }
        uVar11 = FUN_058912e4(uVar5,uVar6);
        uVar9 = (uint)uVar11;
        if ((((uVar9 & 0xffff) == 0x25) || ((uVar9 & 0xffff) == 0xffff)) ||
           (uVar12 = FUN_05890968(uVar11,iStack0000000000000018), (uVar12 & 1) != 0)) {
LAB_05890c38:
          *(ushort *)(unaff_x24 + (long)iStack0000000000000024 * 2) = *puVar1;
          *(undefined2 *)(unaff_x24 + (long)(iStack0000000000000024 + 1) * 2) =
               *(undefined2 *)(unaff_x21 + (long)(iVar16 + 2) * 2);
          *(undefined2 *)(unaff_x24 + (long)(iStack0000000000000024 + 2) * 2) =
               *(undefined2 *)(unaff_x21 + (long)unaff_w19 * 2);
          iVar16 = unaff_w19;
          iStack0000000000000024 = iStack0000000000000024 + 3;
          goto LAB_05890e8c;
        }
        if (*(int *)(*(long *)Method_Unity_AppUI_Core_GestureRecognizer<float>__ctor__ + 0xe4) == 0)
        {
          thunk_FUN_02f6670c();
        }
        if ((((uVar9 & 0xffff) < 0x20) || (0xffde < (uVar9 - 0xa0 & 0xffff))) ||
           (((uVar9 - 0x23 & 0xffff) < 4 ||
            ((uVar9 - 0x3b & 0xffff) < 6 && (uVar9 & 0xfffd) != 0x3c)))) goto LAB_05890c38;
        uVar17 = (uVar9 & 0xffff) - 0x2b;
        if ((uVar17 < 0x32) && ((1L << ((ulong)uVar17 & 0x3f) & 0x2000000000013U) != 0))
        goto LAB_05890c38;
        if ((uVar9 & 0xffff) < 0x80) {
          lVar14 = (long)iStack0000000000000024;
          iStack0000000000000024 = iStack0000000000000024 + 1;
          *(short *)(unaff_x24 + lVar14 * 2) = (short)uVar11;
          iVar16 = unaff_w19;
          goto LAB_05890e8c;
        }
        if ((unaff_x23 == 0) &&
           (unaff_x23 = FUN_02f0880c(*(undefined8 *)PTR_DAT_067c9320,unaff_w20 - unaff_w25),
           unaff_x23 == 0)) goto LAB_058912c4;
        puVar7 = PTR_DAT_067cbf00;
        if (*(int *)(unaff_x23 + 0x18) == 0) {
LAB_058912c0:
                    /* WARNING: Subroutine does not return */
          FUN_02f089d0();
        }
        *(char *)(unaff_x23 + 0x20) = (char)uVar11;
        if (iVar16 + 4 < unaff_w20) {
          iVar16 = unaff_w25;
          uVar17 = 1;
          do {
            uVar9 = uVar17;
            if (*(short *)(unaff_x21 + (long)(iVar16 + 3) * 2) != 0x25 || unaff_w20 <= iVar16 + 5)
            break;
            uVar5 = *(undefined2 *)(unaff_x21 + (long)(iVar16 + 5) * 2);
            uVar6 = *(undefined2 *)(unaff_x21 + (long)(iVar16 + 4) * 2);
            if (*(int *)(*(long *)Method_Unity_AppUI_Core_GestureRecognizer<float>__ctor__ + 0xe4)
                == 0) {
              thunk_FUN_02f6670c();
            }
            sVar8 = FUN_058912e4(uVar6,uVar5);
            if ((ushort)(sVar8 + 1U) < 0x81) break;
            if (*(uint *)(unaff_x23 + 0x18) <= uVar17) goto LAB_058912c0;
            iVar10 = iVar16 + 6;
            uVar9 = uVar17 + 1;
            iVar16 = iVar16 + 3;
            *(char *)(unaff_x23 + (int)uVar17 + 0x20) = (char)sVar8;
            uVar17 = uVar9;
          } while (iVar10 < unaff_w20);
          unaff_w19 = iVar16 + 2;
        }
        else {
          uVar9 = 1;
        }
        plVar13 = (long *)FUN_04f87cb4(0);
        if (plVar13 == (long *)0x0) goto LAB_058912c4;
        plVar13 = (long *)(**(code **)(*plVar13 + 0x1d8))(plVar13,*(undefined8 *)(*plVar13 + 0x1e0))
        ;
        if (plVar13 != (long *)0x0) {
          bVar2 = *(byte *)(*(long *)PTR_DAT_067d5f48 + 0x130);
          if ((*(byte *)(*plVar13 + 0x130) < bVar2) ||
             (*(long *)(*(long *)(*plVar13 + 200) + (ulong)bVar2 * 8 + -8) !=
              *(long *)PTR_DAT_067d5f48)) {
                    /* WARNING: Subroutine does not return */
            FUN_02f08d48(plVar13);
          }
        }
        uVar11 = thunk_FUN_02f45270(*(undefined8 *)PTR_DAT_067d5e60);
        FUN_04f75784(uVar11,*(undefined8 *)puVar7,0);
        if (plVar13 == (long *)0x0) goto LAB_058912c4;
        FUN_04f89a78(plVar13,uVar11,0);
        uVar11 = thunk_FUN_02f45270(*(undefined8 *)PTR_DAT_067d6190);
        FUN_05156f14(uVar11,*(undefined8 *)puVar7,0);
        FUN_04f89b34(plVar13,uVar11,0);
        uVar11 = FUN_02f0880c(*(undefined8 *)PTR_DAT_067ca110,*(undefined4 *)(unaff_x23 + 0x18));
        iVar10 = (**(code **)(*plVar13 + 0x2c8))
                           (plVar13,unaff_x23,0,uVar9,uVar11,0,*(undefined8 *)(*plVar13 + 0x2d0));
        iVar16 = unaff_w19;
        if (iVar10 != 0) {
          if (*(int *)(*(long *)Method_Unity_AppUI_Core_GestureRecognizer<float>__ctor__ + 0xe4) ==
              0) {
            thunk_FUN_02f6670c();
          }
          FUN_058913e4(unaff_x24,unaff_x22,&stack0x00000024,uVar11,iVar10,unaff_x23,uVar9,
                       iStack0000000000000018 == 0x20);
          goto LAB_05890e8c;
        }
      } while (unaff_w19 < unaff_w25);
    }
    in_w9 = *(undefined2 *)(unaff_x21 + (long)unaff_w25 * 2);
    in_w8 = iStack0000000000000024;
  } while( true );
}


