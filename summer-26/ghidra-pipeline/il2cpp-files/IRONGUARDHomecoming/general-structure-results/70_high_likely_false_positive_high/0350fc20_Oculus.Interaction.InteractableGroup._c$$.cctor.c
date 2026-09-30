/*
FUNCTION_NAME: Oculus.Interaction.InteractableGroup.<>c$$.cctor
ENTRY_POINT: 0350fc20
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 82
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_18;ui_or_gameplay_sink_hits_3;telemetry_or_network_hits_8;frame_or_lifecycle_behavior
*/


undefined8 Oculus_Interaction_InteractableGroup_<>c___cctor(long param_1)

{
  undefined2 uVar1;
  short sVar2;
  uint uVar3;
  undefined *puVar4;
  ushort uVar5;
  short sVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  long *plVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  long *unaff_x19;
  long unaff_x20;
  uint uVar14;
  long *unaff_x21;
  uint *unaff_x22;
  long lVar15;
  long lVar16;
  undefined4 *unaff_x23;
  uint unaff_w24;
  long lVar17;
  long lVar18;
  int iVar19;
  uint uStack000000000000001c;
  long in_stack_00000020;
  char cStack000000000000002c;
  
  thunk_FUN_01efb3a4(*(undefined8 *)(param_1 + 0x2f0));
                    /* try { // try from 0350fc30 to 0360fc33 has its CatchHandler @ 0350fc48 */
  thunk_FUN_01efb3a4(Method_Unity_VisualScripting_UnityOnButtonClickMessageListener_<Start>b__0_0__)
  ;
  thunk_FUN_01efb3a4(Method_Unity_VisualScripting_AdditionHandler_<>c_<_ctor>b__0_26__);
  *(undefined1 *)(unaff_x20 + 0xfd9) = 1;
                    /* catch() { ... } // from try @ 0350fc30 with catch @ 0350fc48 */
  cStack000000000000002c = '\0';
  *unaff_x22 = 0xb;
  *unaff_x23 = 0;
  uVar5 = *(ushort *)((long)unaff_x19 + 0x14);
  if (*(int *)(*unaff_x21 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  uStack000000000000001c = FUN_034fc34c(uVar5,0);
                    /* try { // try from 0350fc80 to 0360fca7 has its CatchHandler @ 0350fcbc */
  if ((uStack000000000000001c & 1) != 0) {
    plVar10 = (long *)FUN_0350a594(in_stack_00000020);
    if ((plVar10 == (long *)0x0) ||
       (plVar10 = (long *)(**(code **)(*plVar10 + 0x1d8))(plVar10,*(undefined8 *)(*plVar10 + 0x1e0))
       , plVar10 == (long *)0x0)) goto LAB_03510150;
    uVar5 = (**(code **)(*plVar10 + 0x1a8))(plVar10,uVar5,*(undefined8 *)(*plVar10 + 0x1b0));
    puVar4 = 
    Method_Unity_VisualScripting_FullSerializer_fsBaseConverter_SerializeMember<Texture2D>__;
    if (*(int *)(*(long *)
                  Method_Unity_VisualScripting_FullSerializer_fsBaseConverter_SerializeMember<Texture2D>__
                + 0xe0) == 0) {
      thunk_FUN_01ee6d7c(*(long *)
                          Method_Unity_VisualScripting_FullSerializer_fsBaseConverter_SerializeMember<Texture2D>__
                        );
    }
    if (DAT_04833019 == '\0') {
      thunk_FUN_01efb3a4(
                        Method_Unity_VisualScripting_FullSerializer_fsBaseConverter_SerializeMember<Texture2D>__
                        );
      DAT_04833019 = '\x01';
    }
    lVar11 = *(long *)puVar4;
    if (*(int *)(lVar11 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
      lVar11 = *(long *)puVar4;
    }
    puVar4 = Method_ftLightmaps_OnSceneChangedPlay__;
    if (**(char **)(lVar11 + 0xb8) == '\0') {
      if (*(int *)(*(long *)Method_ftLightmaps_OnSceneChangedPlay__ + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      if ((unaff_w24 == 0xff) && ((ushort)(uVar5 - 0x590) < 0x70)) {
        if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        uVar12 = FUN_0350f6c8();
        if ((uVar12 & 1) != 0) {
          if (cStack000000000000002c == '\0') {
            *unaff_x22 = 0xc;
            return 1;
          }
          *unaff_x22 = 0xb;
          return 0;
        }
      }
    }
  }
  if (*(int *)(*(long *)Method_Unity_VisualScripting_AdditionHandler_<>c_<_ctor>b__0_26__ + 0xe0) ==
      0) {
    thunk_FUN_01ee6d7c();
  }
  iVar7 = FUN_035614b8();
  lVar11 = unaff_x19[2];
  lVar18 = *(long *)(in_stack_00000020 + 0x158);
  if ((lVar18 != 0) ||
     (lVar18 = Oculus_Interaction_FirstHoverInteractorGroup__get_HasSelectedInteractable
                         (in_stack_00000020), lVar18 != 0)) {
    uVar14 = (uint)uVar5 % 199;
    iVar19 = 199;
    do {
      if (*(uint *)(lVar18 + 0x18) <= uVar14) goto LAB_03510154;
      lVar17 = *(long *)(lVar18 + (long)(int)uVar14 * 8 + 0x20);
      if (lVar17 == 0) {
        return 0;
      }
      if (0 < (int)(*(uint *)(lVar17 + 0x18) & unaff_w24)) {
        if (*(long *)(lVar17 + 0x10) == 0) break;
        iVar8 = *(int *)(*(long *)(lVar17 + 0x10) + 0x10);
        if (iVar8 <= iVar7 - (int)lVar11) {
          if ((uStack000000000000001c & 1) == 0) {
LAB_0350fea8:
            lVar13 = *(long *)(lVar17 + 0x10);
            if (lVar13 != 0) {
              if (*(int *)(lVar13 + 0x10) == 1) {
                if (*(uint *)(unaff_x19 + 1) <= *(uint *)(unaff_x19 + 2)) {
LAB_03510154:
                    /* WARNING: Subroutine does not return */
                  FUN_01f08a44();
                }
                sVar2 = *(short *)(*unaff_x19 + (long)(int)*(uint *)(unaff_x19 + 2) * 2);
                sVar6 = FUN_03409f80(lVar13,0,0);
                if (sVar2 != sVar6) goto LAB_0350fee8;
              }
              else {
LAB_0350fee8:
                plVar10 = (long *)FUN_0350a594(in_stack_00000020);
                if (plVar10 == (long *)0x0) break;
                lVar13 = (**(code **)(*plVar10 + 0x1f8))(plVar10,*(undefined8 *)(*plVar10 + 0x200));
                if (*(long *)(lVar17 + 0x10) == 0) break;
                uVar9 = *(uint *)(*(long *)(lVar17 + 0x10) + 0x10);
                uVar3 = *(uint *)(unaff_x19 + 2);
                lVar15 = *(long *)
                          Method_Unity_VisualScripting_UnityOnButtonClickMessageListener_<Start>b__0_0__
                ;
                if ((*(uint *)(unaff_x19 + 1) < uVar3) || (*(uint *)(unaff_x19 + 1) - uVar3 < uVar9)
                   ) {
                  FUN_0358adfc(0);
                }
                lVar16 = *unaff_x19;
                if ((*(byte *)(*(long *)(lVar15 + 0x20) + 0x135) & 1) == 0) {
                  FUN_01ecaf44();
                }
                if (lVar13 == 0) break;
                iVar8 = FUN_03506bcc(lVar13,lVar16 + (long)(int)uVar3 * 2,uVar9,
                                     *(undefined8 *)(lVar17 + 0x10),1);
                if (iVar8 != 0) goto LAB_0350ff74;
              }
              *unaff_x22 = *(uint *)(lVar17 + 0x18) & unaff_w24;
              *unaff_x23 = *(undefined4 *)(lVar17 + 0x1c);
              if (*(long *)(lVar17 + 0x10) != 0) {
                iVar7 = *(int *)(*(long *)
                                  Method_Unity_VisualScripting_AdditionHandler_<>c_<_ctor>b__0_26__
                                + 0xe0);
                goto joined_r0x035100d0;
              }
            }
            break;
          }
          lVar13 = unaff_x19[2];
          if (*(int *)(*(long *)Method_Unity_VisualScripting_AdditionHandler_<>c_<_ctor>b__0_26__ +
                      0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          uVar9 = (int)lVar13 + iVar8;
          iVar8 = FUN_035614b8();
          if ((int)uVar9 <= iVar8) {
            if (*(int *)(*(long *)Method_Unity_VisualScripting_AdditionHandler_<>c_<_ctor>b__0_26__
                        + 0xe0) == 0) {
              thunk_FUN_01ee6d7c();
            }
            iVar8 = FUN_035614b8();
            if ((int)uVar9 < iVar8) {
              if (*(uint *)(unaff_x19 + 1) <= uVar9) goto LAB_03510154;
              uVar1 = *(undefined2 *)(*unaff_x19 + (long)(int)uVar9 * 2);
              if (*(int *)(*(long *)Method_System_IO_CStreamReader_Read__ + 0xe0) == 0) {
                thunk_FUN_01ee6d7c();
              }
              uVar12 = FUN_034fc34c(uVar1,0);
              if (((uVar12 & 1) != 0) &&
                 (uVar12 = FUN_0351c1ac(in_stack_00000020,*(undefined8 *)(lVar17 + 0x10),uVar1,0),
                 (uVar12 & 1) == 0)) goto LAB_0350ff74;
            }
            goto LAB_0350fea8;
          }
LAB_0350ff74:
          iVar8 = *(int *)(lVar17 + 0x18);
          if (iVar8 == 5) {
            uVar9 = *(uint *)(in_stack_00000020 + 0x144);
            if (uVar9 == 0xffffffff) {
              uVar9 = FUN_0350d5f8(in_stack_00000020);
            }
            if ((uVar9 >> 2 & 1) == 0) {
              iVar8 = *(int *)(lVar17 + 0x18);
              goto LAB_0350ffa8;
            }
LAB_0350ffd4:
            if (*(int *)(*(long *)Method_Unity_VisualScripting_AdditionHandler_<>c_<_ctor>b__0_26__
                        + 0xe0) == 0) {
              thunk_FUN_01ee6d7c();
            }
            uVar12 = FUN_03561ef8();
            if ((uVar12 & 1) != 0) {
              *unaff_x22 = *(uint *)(lVar17 + 0x18) & unaff_w24;
              *unaff_x23 = *(undefined4 *)(lVar17 + 0x1c);
              iVar7 = *(int *)(*(long *)
                                Method_Unity_VisualScripting_AdditionHandler_<>c_<_ctor>b__0_26__ +
                              0xe0);
joined_r0x035100d0:
              if (iVar7 == 0) {
                thunk_FUN_01ee6d7c();
              }
              FUN_03561778();
              return 1;
            }
          }
          else {
LAB_0350ffa8:
            if (iVar8 == 7) {
              uVar9 = *(uint *)(in_stack_00000020 + 0x144);
              if (uVar9 == 0xffffffff) {
                uVar9 = FUN_0350d5f8(in_stack_00000020);
              }
              if ((uVar9 >> 4 & 1) != 0) goto LAB_0350ffd4;
            }
          }
        }
      }
      uVar14 = uVar14 + (uint)uVar5 % 0xc5 + 1;
      if (0xc6 < (int)uVar14) {
        uVar14 = uVar14 - 199;
      }
      iVar19 = iVar19 + -1;
      if (iVar19 == 0) {
        return 0;
      }
    } while( true );
  }
LAB_03510150:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


