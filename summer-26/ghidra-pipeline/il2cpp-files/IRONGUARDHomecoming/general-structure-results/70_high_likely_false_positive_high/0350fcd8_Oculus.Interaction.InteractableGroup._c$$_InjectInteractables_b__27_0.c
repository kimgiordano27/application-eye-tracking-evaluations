/*
FUNCTION_NAME: Oculus.Interaction.InteractableGroup.<>c$$<InjectInteractables>b__27_0
ENTRY_POINT: 0350fcd8
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 74
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_19;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


undefined8 Oculus_Interaction_InteractableGroup_<>c__<InjectInteractables>b__27_0(void)

{
  undefined2 uVar1;
  short sVar2;
  uint uVar3;
  undefined *puVar4;
  short sVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  long *plVar12;
  int in_w8;
  long *unaff_x19;
  long *unaff_x20;
  uint uVar13;
  long unaff_x21;
  uint *unaff_x22;
  long lVar14;
  long lVar15;
  undefined4 *unaff_x23;
  uint unaff_w24;
  long lVar16;
  long lVar17;
  ushort unaff_w26;
  int iVar18;
  ulong in_stack_00000018;
  long in_stack_00000020;
  undefined8 in_stack_00000028;
  
  if (in_w8 == 0) {
    thunk_FUN_01efb3a4(
                      Method_Unity_VisualScripting_FullSerializer_fsBaseConverter_SerializeMember<Texture2D>__
                      );
    *(undefined1 *)(unaff_x21 + 0x19) = 1;
  }
  lVar9 = *unaff_x20;
  if (*(int *)(lVar9 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
    lVar9 = *unaff_x20;
  }
  puVar4 = Method_ftLightmaps_OnSceneChangedPlay__;
  if (**(char **)(lVar9 + 0xb8) == '\0') {
    if (*(int *)(*(long *)Method_ftLightmaps_OnSceneChangedPlay__ + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    if ((unaff_w24 == 0xff) && ((ushort)(unaff_w26 - 0x590) < 0x70)) {
      if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      uVar10 = FUN_0350f6c8();
      if ((uVar10 & 1) != 0) {
        if (in_stack_00000028._4_1_ == '\0') {
          *unaff_x22 = 0xc;
          return 1;
        }
        *unaff_x22 = 0xb;
        return 0;
      }
    }
  }
  if (*(int *)(*(long *)Method_Unity_VisualScripting_AdditionHandler_<>c_<_ctor>b__0_26__ + 0xe0) ==
      0) {
    thunk_FUN_01ee6d7c();
  }
  iVar6 = FUN_035614b8();
  lVar9 = unaff_x19[2];
  lVar17 = *(long *)(in_stack_00000020 + 0x158);
  if ((lVar17 == 0) &&
     (lVar17 = Oculus_Interaction_FirstHoverInteractorGroup__get_HasSelectedInteractable
                         (in_stack_00000020), lVar17 == 0)) {
LAB_03510150:
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  uVar13 = (uint)unaff_w26 % 199;
  iVar18 = 199;
  do {
    if (*(uint *)(lVar17 + 0x18) <= uVar13) goto LAB_03510154;
    lVar16 = *(long *)(lVar17 + (long)(int)uVar13 * 8 + 0x20);
    if (lVar16 == 0) {
      return 0;
    }
    if (0 < (int)(*(uint *)(lVar16 + 0x18) & unaff_w24)) {
      if (*(long *)(lVar16 + 0x10) == 0) goto LAB_03510150;
      iVar7 = *(int *)(*(long *)(lVar16 + 0x10) + 0x10);
      if (iVar7 <= iVar6 - (int)lVar9) {
        if ((in_stack_00000018 & 0x100000000) == 0) {
LAB_0350fea8:
          lVar11 = *(long *)(lVar16 + 0x10);
          if (lVar11 != 0) {
            if (*(int *)(lVar11 + 0x10) == 1) {
              if (*(uint *)(unaff_x19 + 1) <= *(uint *)(unaff_x19 + 2)) {
LAB_03510154:
                    /* WARNING: Subroutine does not return */
                FUN_01f08a44();
              }
              sVar2 = *(short *)(*unaff_x19 + (long)(int)*(uint *)(unaff_x19 + 2) * 2);
              sVar5 = FUN_03409f80(lVar11,0,0);
              if (sVar2 != sVar5) goto LAB_0350fee8;
            }
            else {
LAB_0350fee8:
              plVar12 = (long *)FUN_0350a594(in_stack_00000020);
              if (plVar12 == (long *)0x0) goto LAB_03510150;
              lVar11 = (**(code **)(*plVar12 + 0x1f8))(plVar12,*(undefined8 *)(*plVar12 + 0x200));
              if (*(long *)(lVar16 + 0x10) == 0) goto LAB_03510150;
              uVar8 = *(uint *)(*(long *)(lVar16 + 0x10) + 0x10);
              uVar3 = *(uint *)(unaff_x19 + 2);
              lVar14 = *(long *)
                        Method_Unity_VisualScripting_UnityOnButtonClickMessageListener_<Start>b__0_0__
              ;
              if ((*(uint *)(unaff_x19 + 1) < uVar3) || (*(uint *)(unaff_x19 + 1) - uVar3 < uVar8))
              {
                FUN_0358adfc(0);
              }
              lVar15 = *unaff_x19;
              if ((*(byte *)(*(long *)(lVar14 + 0x20) + 0x135) & 1) == 0) {
                FUN_01ecaf44();
              }
              if (lVar11 == 0) goto LAB_03510150;
              iVar7 = FUN_03506bcc(lVar11,lVar15 + (long)(int)uVar3 * 2,uVar8,
                                   *(undefined8 *)(lVar16 + 0x10),1);
              if (iVar7 != 0) goto LAB_0350ff74;
            }
            *unaff_x22 = *(uint *)(lVar16 + 0x18) & unaff_w24;
            *unaff_x23 = *(undefined4 *)(lVar16 + 0x1c);
            if (*(long *)(lVar16 + 0x10) != 0) {
              iVar6 = *(int *)(*(long *)
                                Method_Unity_VisualScripting_AdditionHandler_<>c_<_ctor>b__0_26__ +
                              0xe0);
              goto joined_r0x035100d0;
            }
          }
          goto LAB_03510150;
        }
        lVar11 = unaff_x19[2];
        if (*(int *)(*(long *)Method_Unity_VisualScripting_AdditionHandler_<>c_<_ctor>b__0_26__ +
                    0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        uVar8 = (int)lVar11 + iVar7;
        iVar7 = FUN_035614b8();
        if ((int)uVar8 <= iVar7) {
          if (*(int *)(*(long *)Method_Unity_VisualScripting_AdditionHandler_<>c_<_ctor>b__0_26__ +
                      0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          iVar7 = FUN_035614b8();
          if ((int)uVar8 < iVar7) {
            if (*(uint *)(unaff_x19 + 1) <= uVar8) goto LAB_03510154;
            uVar1 = *(undefined2 *)(*unaff_x19 + (long)(int)uVar8 * 2);
            if (*(int *)(*(long *)Method_System_IO_CStreamReader_Read__ + 0xe0) == 0) {
              thunk_FUN_01ee6d7c();
            }
            uVar10 = FUN_034fc34c(uVar1,0);
            if (((uVar10 & 1) != 0) &&
               (uVar10 = FUN_0351c1ac(in_stack_00000020,*(undefined8 *)(lVar16 + 0x10),uVar1,0),
               (uVar10 & 1) == 0)) goto LAB_0350ff74;
          }
          goto LAB_0350fea8;
        }
LAB_0350ff74:
        iVar7 = *(int *)(lVar16 + 0x18);
        if (iVar7 == 5) {
          uVar8 = *(uint *)(in_stack_00000020 + 0x144);
          if (uVar8 == 0xffffffff) {
            uVar8 = FUN_0350d5f8(in_stack_00000020);
          }
          if ((uVar8 >> 2 & 1) == 0) {
            iVar7 = *(int *)(lVar16 + 0x18);
            goto LAB_0350ffa8;
          }
LAB_0350ffd4:
          if (*(int *)(*(long *)Method_Unity_VisualScripting_AdditionHandler_<>c_<_ctor>b__0_26__ +
                      0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          uVar10 = FUN_03561ef8();
          if ((uVar10 & 1) != 0) {
            *unaff_x22 = *(uint *)(lVar16 + 0x18) & unaff_w24;
            *unaff_x23 = *(undefined4 *)(lVar16 + 0x1c);
            iVar6 = *(int *)(*(long *)
                              Method_Unity_VisualScripting_AdditionHandler_<>c_<_ctor>b__0_26__ +
                            0xe0);
joined_r0x035100d0:
            if (iVar6 == 0) {
              thunk_FUN_01ee6d7c();
            }
            FUN_03561778();
            return 1;
          }
        }
        else {
LAB_0350ffa8:
          if (iVar7 == 7) {
            uVar8 = *(uint *)(in_stack_00000020 + 0x144);
            if (uVar8 == 0xffffffff) {
              uVar8 = FUN_0350d5f8(in_stack_00000020);
            }
            if ((uVar8 >> 4 & 1) != 0) goto LAB_0350ffd4;
          }
        }
      }
    }
    uVar13 = uVar13 + (uint)unaff_w26 % 0xc5 + 1;
    if (0xc6 < (int)uVar13) {
      uVar13 = uVar13 - 199;
    }
    iVar18 = iVar18 + -1;
    if (iVar18 == 0) {
      return 0;
    }
  } while( true );
}


