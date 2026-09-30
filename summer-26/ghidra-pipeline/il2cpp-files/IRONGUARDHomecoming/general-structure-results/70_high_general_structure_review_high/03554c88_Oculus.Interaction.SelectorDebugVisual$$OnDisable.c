/*
FUNCTION_NAME: Oculus.Interaction.SelectorDebugVisual$$OnDisable
ENTRY_POINT: 03554c88
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_11;validity_or_gating_hits_21;telemetry_or_network_hits_21
*/


void Oculus_Interaction_SelectorDebugVisual__OnDisable(long param_1)

{
  uint uVar1;
  ushort uVar2;
  undefined *puVar3;
  short sVar4;
  short sVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  undefined8 uVar12;
  long lVar13;
  int iVar14;
  long *unaff_x19;
  undefined8 uVar15;
  undefined8 unaff_x20;
  uint unaff_w22;
  long unaff_x23;
  undefined8 unaff_x24;
  long unaff_x25;
  long *unaff_x26;
  long unaff_x27;
  uint unaff_w28;
  double dVar16;
  long in_stack_00000000;
  undefined8 in_stack_00000008;
  ulong in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined2 uStack0000000000000028;
  int iStack000000000000002c;
  int iStack0000000000000030;
  int iStack0000000000000034;
  
code_r0x03554c88:
  if (*(int *)(param_1 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
                    /* try { // try from 03554c94 to 03654ccb has its CatchHandler @ 03554cd0 */
  iVar6 = FUN_0355485c();
  if ((iVar6 < 0) || (iVar6 == 0x25)) {
LAB_03555b04:
    if (in_stack_00000000 == 0) {
      FUN_0341ae68();
    }
    thunk_FUN_01efb3a4(Method_Unity_VisualScripting_Member_ReflectField__);
    uVar15 = thunk_FUN_01f117cc();
    uVar12 = thunk_FUN_01efb3a4(
                               Method_UnityEngine_InputSystem_Utilities_Observable_Where<InputControl>__
                               );
    FUN_03553fd0(uVar15,uVar12);
    uVar12 = thunk_FUN_01efb3a4(Method_Unity_Burst_Intrinsics_Arm_Neon_vpmax_s32__);
                    /* WARNING: Subroutine does not return */
    FUN_01f08910(uVar15,uVar12);
  }
  uStack0000000000000028 = (undefined2)iVar6;
  if (*(long *)(*(long *)Method_Unity_Burst_Intrinsics_Arm_Neon_vpmax_s16__ + 0x38) == 0) {
                    /* try { // try from 03554ccc to 03654ccf has its CatchHandler @ 03554d00 */
    FUN_01ecafa0(*(long *)Method_Unity_Burst_Intrinsics_Arm_Neon_vpmax_s16__);
  }
                    /* catch() { ... } // from try @ 03554c94 with catch @ 03554cd0
                       try { // try from 03554cd0 to 03654d17 has its CatchHandler @ 03554ae0 */
                    /* catch() { ... } // from try @ 03554c60 with catch @ 03554cd4 */
                    /* catch() { ... } // from try @ 03554c58 with catch @ 03554cd8 */
  if (*(int *)(*unaff_x19 + 0xe0) == 0) {
                    /* catch() { ... } // from try @ 03554b90 with catch @ 03554cdc
                       catch() { ... } // from try @ 03554bc8 with catch @ 03554cdc */
    thunk_FUN_01ee6d7c();
  }
                    /* catch() { ... } // from try @ 03554bf8 with catch @ 03554ce0 */
                    /* catch() { ... } // from try @ 03554bb4 with catch @ 03554ce4 */
                    /* catch() { ... } // from try @ 03554c34 with catch @ 03554ce8 */
                    /* catch() { ... } // from try @ 03554c48 with catch @ 03554cec */
                    /* catch() { ... } // from try @ 03554b7c with catch @ 03554cf0 */
                    /* catch() { ... } // from try @ 03554c44 with catch @ 03554cf4 */
                    /* catch() { ... } // from try @ 03554c40 with catch @ 03554cf8 */
  FUN_03554a24(unaff_x20,&stack0x00000028,1);
                    /* catch() { ... } // from try @ 03554b38 with catch @ 03554cfc */
LAB_03554d58:
                    /* try { // try from 03554d58 to 03654dbb has its CatchHandler @ 03554d58
                       catch() { ... } // from try @ 03554d58 with catch @ 03554d58
                       catch() { ... } // from try @ 03554e38 with catch @ 03554d58
                       catch() { ... } // from try @ 03554e74 with catch @ 03554d58
                       catch() { ... } // from try @ 03554ec4 with catch @ 03554d58 */
  iStack0000000000000034 = 2;
LAB_03555aa0:
  unaff_w28 = iStack0000000000000034 + unaff_w28;
  if ((int)unaff_w22 <= (int)unaff_w28) {
    return;
  }
  if (unaff_w22 <= unaff_w28) goto LAB_03555afc;
  uVar2 = *(ushort *)(unaff_x23 + (long)(int)unaff_w28 * 2);
  if (uVar2 < 0x4c) {
    if (0x2f < uVar2) {
      if (uVar2 < 0x47) {
        if (uVar2 != 0x3a) {
          if (uVar2 == 0x46) goto switchD_03554e74_caseD_66;
          goto switchD_03554e74_caseD_65;
        }
        FUN_0350bfdc();
joined_r0x0355524c:
        if (unaff_x25 != 0) {
          FUN_03418748();
          goto LAB_03555260;
        }
        goto thunk_FUN_01f08a3c;
      }
      if (uVar2 == 0x48) {
        if (*(int *)(*unaff_x19 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        iStack0000000000000034 = FUN_03554504();
        if (*(int *)(*(long *)Method_System_Array_Resize<InputDevice_ControlBitRangeNode>__ + 0xe0)
            == 0) {
          thunk_FUN_01ee6d7c(*(long *)Method_System_Array_Resize<InputDevice_ControlBitRangeNode>__)
          ;
        }
        FUN_0354e488(&stack0x00000038);
        goto LAB_0355562c;
      }
      if (uVar2 != 0x4b) goto switchD_03554e74_caseD_65;
      iStack0000000000000034 = 1;
      if (*(int *)(*unaff_x19 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      FUN_03555f08(unaff_x20,unaff_x24);
      goto LAB_03555aa0;
    }
    if (uVar2 < 0x26) {
      if (uVar2 != 0x22) {
        if (uVar2 != 0x25) goto switchD_03554e74_caseD_65;
        param_1 = *unaff_x19;
        goto code_r0x03554c88;
      }
LAB_03554fa0:
      if (*(int *)(*unaff_x19 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      iStack0000000000000034 = FUN_035546b4();
      goto LAB_03555aa0;
    }
    if (uVar2 == 0x27) goto LAB_03554fa0;
                    /* try { // try from 03554e38 to 03654e6b has its CatchHandler @ 03554d58 */
    if (uVar2 == 0x2f) {
      FUN_0350b874();
      goto joined_r0x0355524c;
    }
  }
  else {
                    /* catch() { ... } // from try @ 03554bec with catch @ 03554d00
                       catch() { ... } // from try @ 03554ccc with catch @ 03554d00 */
    if (uVar2 < 0x6e) {
      if (uVar2 < 0x5d) {
        if (uVar2 == 0x4d) {
          if (*(int *)(*unaff_x19 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          iStack0000000000000034 = FUN_03554504();
          if (unaff_x26 == (long *)0x0) goto thunk_FUN_01f08a3c;
          uVar8 = (**(code **)(*unaff_x26 + 0x248))();
          if (2 < iStack0000000000000034) {
            if ((in_stack_00000010 & 0x100000000) == 0) {
              if (*(int *)(*(long *)
                            Method_Unity_VisualScripting_FullSerializer_fsBaseConverter_SerializeMember<Texture2D>__
                          + 0xe0) == 0) {
                thunk_FUN_01ee6d7c();
              }
              if (DAT_04833019 == '\0') {
                thunk_FUN_01efb3a4(
                                  Method_Unity_VisualScripting_FullSerializer_fsBaseConverter_SerializeMember<Texture2D>__
                                  );
                DAT_04833019 = '\x01';
              }
              puVar3 = 
              Method_Unity_VisualScripting_FullSerializer_fsBaseConverter_SerializeMember<Texture2D>__
              ;
              lVar9 = *(long *)
                       Method_Unity_VisualScripting_FullSerializer_fsBaseConverter_SerializeMember<Texture2D>__
              ;
              if (*(int *)(lVar9 + 0xe0) == 0) {
                thunk_FUN_01ee6d7c();
                lVar9 = *(long *)puVar3;
              }
              iVar6 = iStack0000000000000034;
              if (**(char **)(lVar9 + 0xb8) == '\0') {
                if (*(int *)(*(long *)
                              Method_Unity_VisualScripting_AdditionHandler_<>c_<_ctor>b__0_36__ +
                            0xe0) == 0) {
                  thunk_FUN_01ee6d7c();
                }
                FUN_035545f4(unaff_x20,uVar8,iVar6);
                goto joined_r0x03554eec;
              }
            }
            puVar3 = Method_Unity_VisualScripting_AdditionHandler_<>c_<_ctor>b__0_36__;
            uVar11 = FUN_0350c348();
            iVar6 = iStack0000000000000034;
            lVar9 = *(long *)puVar3;
            if (((uVar11 & 1) == 0) || (iStack0000000000000034 < 4)) {
              if (*(int *)(lVar9 + 0xe0) == 0) {
                thunk_FUN_01ee6d7c(lVar9);
              }
              FUN_035545c0(uVar8,iVar6);
            }
            else {
              if (*(int *)(lVar9 + 0xe0) == 0) {
                thunk_FUN_01ee6d7c(lVar9);
              }
              FUN_035548cc();
              FUN_0350c388();
            }
            if (unaff_x25 == 0) goto thunk_FUN_01f08a3c;
LAB_03555a84:
            FUN_03418748();
            unaff_x19 = (long *)Method_Unity_VisualScripting_AdditionHandler_<>c_<_ctor>b__0_36__;
            goto LAB_03555aa0;
          }
          if ((in_stack_00000010 & 0x100000000) == 0) {
            if (*(int *)(*(long *)
                          Method_Unity_VisualScripting_FullSerializer_fsBaseConverter_SerializeMember<Texture2D>__
                        + 0xe0) == 0) {
              thunk_FUN_01ee6d7c();
            }
            if (DAT_04833019 == '\0') {
              thunk_FUN_01efb3a4(
                                Method_Unity_VisualScripting_FullSerializer_fsBaseConverter_SerializeMember<Texture2D>__
                                );
              DAT_04833019 = '\x01';
            }
            puVar3 = 
            Method_Unity_VisualScripting_FullSerializer_fsBaseConverter_SerializeMember<Texture2D>__
            ;
            lVar9 = *(long *)
                     Method_Unity_VisualScripting_FullSerializer_fsBaseConverter_SerializeMember<Texture2D>__
            ;
            if (*(int *)(lVar9 + 0xe0) == 0) {
              thunk_FUN_01ee6d7c();
              lVar9 = *(long *)puVar3;
            }
            if (**(char **)(lVar9 + 0xb8) == '\0') {
LAB_03555a34:
              unaff_x19 = (long *)Method_Unity_VisualScripting_AdditionHandler_<>c_<_ctor>b__0_36__;
              if (*(int *)(*(long *)
                            Method_Unity_VisualScripting_AdditionHandler_<>c_<_ctor>b__0_36__ + 0xe0
                          ) == 0) {
                thunk_FUN_01ee6d7c();
              }
              FUN_03554488();
              goto LAB_03555aa0;
            }
          }
          lVar9 = *(long *)Method_Unity_VisualScripting_AdditionHandler_<>c_<_ctor>b__0_36__;
LAB_035558a8:
          if (*(int *)(lVar9 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
LAB_03555928:
          FUN_03554320();
          unaff_x19 = (long *)Method_Unity_VisualScripting_AdditionHandler_<>c_<_ctor>b__0_36__;
          goto LAB_03555aa0;
        }
                    /* try { // try from 03554d18 to 03654d1b has its CatchHandler @ 03554d28 */
        if (uVar2 == 0x5c) goto code_r0x03554d20;
      }
      else {
        switch(uVar2) {
        case 100:
          if (*(int *)(*unaff_x19 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          iStack0000000000000034 = FUN_03554504();
          if (unaff_x26 != (long *)0x0) {
            if (iStack0000000000000034 < 3) {
              (**(code **)(*unaff_x26 + 0x1e8))();
              if ((in_stack_00000010 & 0x100000000) == 0) {
                if (*(int *)(*(long *)
                              Method_Unity_VisualScripting_FullSerializer_fsBaseConverter_SerializeMember<Texture2D>__
                            + 0xe0) == 0) {
                  thunk_FUN_01ee6d7c();
                }
                if (DAT_04833019 == '\0') {
                  thunk_FUN_01efb3a4(
                                    Method_Unity_VisualScripting_FullSerializer_fsBaseConverter_SerializeMember<Texture2D>__
                                    );
                  DAT_04833019 = '\x01';
                }
                puVar3 = 
                Method_Unity_VisualScripting_FullSerializer_fsBaseConverter_SerializeMember<Texture2D>__
                ;
                lVar9 = *(long *)
                         Method_Unity_VisualScripting_FullSerializer_fsBaseConverter_SerializeMember<Texture2D>__
                ;
                if (*(int *)(lVar9 + 0xe0) == 0) {
                  thunk_FUN_01ee6d7c();
                  lVar9 = *(long *)puVar3;
                }
                unaff_x19 = (long *)
                            Method_Unity_VisualScripting_AdditionHandler_<>c_<_ctor>b__0_36__;
                if (**(char **)(lVar9 + 0xb8) == '\0') goto LAB_03555a34;
              }
              lVar9 = *unaff_x19;
              goto LAB_035558a8;
            }
            uVar8 = (**(code **)(*unaff_x26 + 0x1f8))();
            iVar6 = iStack0000000000000034;
            if (*(int *)(*unaff_x19 + 0xe0) == 0) {
              thunk_FUN_01ee6d7c(*unaff_x19);
            }
            FUN_0355458c(uVar8,iVar6);
joined_r0x03554eec:
            if (unaff_x25 != 0) goto LAB_03555a84;
          }
          goto thunk_FUN_01f08a3c;
        case 0x66:
switchD_03554e74_caseD_66:
          if (*(int *)(*unaff_x19 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          iStack0000000000000034 = FUN_03554504();
          if (7 < iStack0000000000000034) goto LAB_03555b04;
          if (*(int *)(*(long *)Method_System_Array_Resize<InputDevice_ControlBitRangeNode>__ + 0xe0
                      ) == 0) {
            thunk_FUN_01ee6d7c();
          }
          lVar9 = FUN_0354e060(&stack0x00000038);
          iVar6 = iStack0000000000000034;
          if (*(int *)(*(long *)Method_Oculus_Platform_Message<LeaderboardList>__ctor__ + 0xe0) == 0
             ) {
            thunk_FUN_01ee6d7c(*(long *)Method_Oculus_Platform_Message<LeaderboardList>__ctor__);
          }
          dVar16 = (double)thunk_FUN_01ec1aac(0x4024000000000000,(double)(7 - iVar6),0);
          puVar3 = Method_Unity_VisualScripting_AdditionHandler_<>c_<_ctor>b__0_36__;
          lVar10 = -0x8000000000000000;
          if (dVar16 != INFINITY) {
            lVar10 = (long)dVar16;
          }
          lVar13 = 0;
          if (lVar10 != 0) {
            lVar13 = (lVar9 % 10000000) / lVar10;
          }
          iVar6 = (int)lVar13;
          unaff_x20 = in_stack_00000018;
          if (uVar2 == 0x66) {
            lVar9 = *(long *)Method_Unity_VisualScripting_AdditionHandler_<>c_<_ctor>b__0_36__;
            iStack000000000000002c = iVar6;
            if (*(int *)(lVar9 + 0xe0) == 0) {
              thunk_FUN_01ee6d7c();
              lVar9 = *(long *)puVar3;
            }
            lVar9 = *(long *)(*(long *)(lVar9 + 0xb8) + 0x28);
            if (lVar9 == 0) goto thunk_FUN_01f08a3c;
            if (*(uint *)(lVar9 + 0x18) <= iStack0000000000000034 - 1U) {
LAB_03555afc:
                    /* WARNING: Subroutine does not return */
              FUN_01f08a44();
            }
            lVar9 = lVar9 + (long)(int)(iStack0000000000000034 - 1U) * 8;
            lVar10 = *(long *)Method_System_Nullable<AxisAlignedBox_BoxSurface>__ctor__;
          }
          else {
            iVar7 = iStack0000000000000034;
            if ((0 < iStack0000000000000034) && (iVar14 = iStack0000000000000034, iVar6 % 10 == 0))
            {
              do {
                lVar9 = SUB168(SEXT816(lVar13) * SEXT816(unaff_x27),8);
                lVar13 = (lVar9 >> 2) - (lVar9 >> 0x3f);
                iVar7 = iVar14 + -1;
                if (iVar14 < 2) break;
                lVar9 = SUB168(SEXT816(lVar13) * SEXT816(unaff_x27),8);
                iVar14 = iVar7;
              } while (lVar13 == ((lVar9 >> 2) - (lVar9 >> 0x3f)) * 10);
            }
            if (iVar7 < 1) {
              if (unaff_x25 == 0) goto thunk_FUN_01f08a3c;
              iVar6 = FUN_0341792c();
              unaff_x19 = (long *)Method_Unity_VisualScripting_AdditionHandler_<>c_<_ctor>b__0_36__;
              if (0 < iVar6) {
                FUN_0341792c();
                sVar5 = FUN_034181cc();
                if (sVar5 == 0x2e) {
                  FUN_0341792c();
                  FUN_03418d9c();
                }
              }
              goto LAB_03555aa0;
            }
            iStack000000000000002c = (int)lVar13;
            lVar9 = *(long *)Method_Unity_VisualScripting_AdditionHandler_<>c_<_ctor>b__0_36__;
            if (*(int *)(lVar9 + 0xe0) == 0) {
              thunk_FUN_01ee6d7c();
              lVar9 = *(long *)puVar3;
            }
            lVar9 = *(long *)(*(long *)(lVar9 + 0xb8) + 0x28);
            if (lVar9 == 0) goto thunk_FUN_01f08a3c;
            if (*(uint *)(lVar9 + 0x18) <= iVar7 - 1U) goto LAB_03555afc;
            lVar9 = lVar9 + (ulong)(iVar7 - 1U) * 8;
            lVar10 = *(long *)Method_System_Nullable<AxisAlignedBox_BoxSurface>__ctor__;
          }
          uVar15 = *(undefined8 *)(lVar9 + 0x20);
          if (*(int *)(lVar10 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          uVar12 = FUN_03532f80(0);
          FUN_035685ac((long)&stack0x00000028 + 4,uVar15,uVar12,0);
          if (unaff_x25 == 0) goto thunk_FUN_01f08a3c;
          FUN_03418748();
          unaff_x19 = (long *)Method_Unity_VisualScripting_AdditionHandler_<>c_<_ctor>b__0_36__;
          goto LAB_03555aa0;
        case 0x67:
          if (*(int *)(*unaff_x19 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          iStack0000000000000034 = FUN_03554504();
          if (unaff_x26 == (long *)0x0) goto thunk_FUN_01f08a3c;
          (**(code **)(*unaff_x26 + 0x228))();
          FUN_0350b5e4();
          if (unaff_x25 == 0) goto thunk_FUN_01f08a3c;
LAB_03555808:
          FUN_03418748();
          goto LAB_03555aa0;
        case 0x68:
          if (*(int *)(*unaff_x19 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          iStack0000000000000034 = FUN_03554504();
          if (*(int *)(*(long *)Method_System_Array_Resize<InputDevice_ControlBitRangeNode>__ + 0xe0
                      ) == 0) {
            thunk_FUN_01ee6d7c(*(long *)
                                Method_System_Array_Resize<InputDevice_ControlBitRangeNode>__);
          }
          FUN_0354e488(&stack0x00000038);
          if (*(int *)(*unaff_x19 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          FUN_03554320();
          unaff_x19 = (long *)Method_Unity_VisualScripting_AdditionHandler_<>c_<_ctor>b__0_36__;
          goto LAB_03555aa0;
        case 0x6d:
          if (*(int *)(*unaff_x19 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          iStack0000000000000034 = FUN_03554504();
          if (*(int *)(*(long *)Method_System_Array_Resize<InputDevice_ControlBitRangeNode>__ + 0xe0
                      ) == 0) {
            thunk_FUN_01ee6d7c(*(long *)
                                Method_System_Array_Resize<InputDevice_ControlBitRangeNode>__);
          }
          FUN_0354e604(&stack0x00000038);
LAB_0355562c:
          FUN_03554320();
          goto LAB_03555aa0;
        }
      }
    }
    else if (uVar2 < 0x75) {
      if (uVar2 == 0x73) {
        if (*(int *)(*unaff_x19 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        iStack0000000000000034 = FUN_03554504();
        if (*(int *)(*(long *)Method_System_Array_Resize<InputDevice_ControlBitRangeNode>__ + 0xe0)
            == 0) {
          thunk_FUN_01ee6d7c(*(long *)Method_System_Array_Resize<InputDevice_ControlBitRangeNode>__)
          ;
        }
        FUN_0354e868(&stack0x00000038);
        goto LAB_0355562c;
      }
      if (uVar2 == 0x74) {
        if (*(int *)(*unaff_x19 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        iVar6 = FUN_03554504();
                    /* try { // try from 03554dbc to 03654ddb has its CatchHandler @ 03554e80 */
        iStack0000000000000034 = iVar6;
        if (*(int *)(*(long *)Method_System_Array_Resize<InputDevice_ControlBitRangeNode>__ + 0xe0)
            == 0) {
          thunk_FUN_01ee6d7c(*(long *)Method_System_Array_Resize<InputDevice_ControlBitRangeNode>__)
          ;
        }
        iVar7 = FUN_0354e488(&stack0x00000038);
        unaff_x19 = (long *)Method_Unity_VisualScripting_AdditionHandler_<>c_<_ctor>b__0_36__;
        if (iVar6 != 1) {
          if (iVar7 < 0xc) {
            FUN_0350b424();
          }
          else {
            Oculus_Interaction_BestSelectInteractorGroup__get_HasInteractable();
          }
          if (unaff_x25 != 0) goto LAB_03555808;
          goto thunk_FUN_01f08a3c;
        }
                    /* try { // try from 03554e00 to 03654e07 has its CatchHandler @ 03554e84 */
        if (iVar7 < 0xc) {
          lVar9 = FUN_0350b424();
          if (lVar9 == 0) goto thunk_FUN_01f08a3c;
          if (*(int *)(lVar9 + 0x10) < 1) goto LAB_03555aa0;
          lVar9 = FUN_0350b424();
        }
        else {
          lVar9 = Oculus_Interaction_BestSelectInteractorGroup__get_HasInteractable();
          if (lVar9 == 0) goto thunk_FUN_01f08a3c;
          if (*(int *)(lVar9 + 0x10) < 1) goto LAB_03555aa0;
                    /* try { // try from 03554e24 to 03654e27 has its CatchHandler @ 03554e74 */
          lVar9 = Oculus_Interaction_BestSelectInteractorGroup__get_HasInteractable();
                    /* try { // try from 03554e28 to 03654e37 has its CatchHandler @ 03554e78 */
        }
        if ((lVar9 == 0) || (FUN_03409f80(lVar9,0,0), unaff_x25 == 0)) goto thunk_FUN_01f08a3c;
        FUN_03419060();
        goto LAB_03555aa0;
      }
    }
    else {
      if (uVar2 == 0x79) {
        if (unaff_x26 == (long *)0x0) goto thunk_FUN_01f08a3c;
        iStack0000000000000030 = (**(code **)(*unaff_x26 + 0x268))();
        if (*(int *)(*unaff_x19 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c(*unaff_x19);
        }
        iStack0000000000000034 = FUN_03554504();
        if (((((in_stack_00000010 & 1) == 0) &&
             (*(char *)(*(long *)(*(long *)
                                   Method_Unity_VisualScripting_AdditionHandler_<>c_<_ctor>b__0_107__
                                 + 0xb8) + 1) == '\0')) && (iStack0000000000000030 == 1)) &&
           (uVar1 = iStack0000000000000034 + unaff_w28, (int)uVar1 < in_stack_00000008._4_4_)) {
          if (unaff_w22 <= uVar1) goto LAB_03555afc;
          if (*(short *)(unaff_x23 + (long)(int)uVar1 * 2) == 0x27) {
            if (unaff_w22 <= uVar1 + 1) goto LAB_03555afc;
            if (*(long *)Method_Unity_VisualScripting_AdditionHandler_<>c_<_ctor>b__0_22__ == 0)
            goto thunk_FUN_01f08a3c;
            sVar5 = *(short *)(unaff_x23 + (long)(int)(uVar1 + 1) * 2);
            sVar4 = FUN_03409f80(*(long *)
                                  Method_Unity_VisualScripting_AdditionHandler_<>c_<_ctor>b__0_22__,
                                 0,0);
            unaff_x19 = (long *)Method_Unity_VisualScripting_AdditionHandler_<>c_<_ctor>b__0_36__;
            if (sVar5 == sVar4) {
              if ((*(long *)Method_Unity_VisualScripting_AdditionHandler_<>c_<_ctor>b__0_21__ == 0)
                 || (FUN_03409f80(*(long *)
                                   Method_Unity_VisualScripting_AdditionHandler_<>c_<_ctor>b__0_21__
                                  ,0,0), unaff_x25 == 0)) goto thunk_FUN_01f08a3c;
              FUN_03419060();
              goto LAB_03555aa0;
            }
          }
        }
        uVar11 = FUN_0350d874();
        if ((uVar11 & 1) != 0) {
          if (*(int *)(*unaff_x19 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          goto LAB_03555928;
        }
        if ((in_stack_00000010 & 0x100000000) == 0) {
          if (*(int *)(*(long *)
                        Method_Unity_VisualScripting_FullSerializer_fsBaseConverter_SerializeMember<Texture2D>__
                      + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          if (DAT_04833019 == '\0') {
            thunk_FUN_01efb3a4(
                              Method_Unity_VisualScripting_FullSerializer_fsBaseConverter_SerializeMember<Texture2D>__
                              );
            DAT_04833019 = '\x01';
          }
          puVar3 = 
          Method_Unity_VisualScripting_FullSerializer_fsBaseConverter_SerializeMember<Texture2D>__;
          lVar9 = *(long *)
                   Method_Unity_VisualScripting_FullSerializer_fsBaseConverter_SerializeMember<Texture2D>__
          ;
          if (*(int *)(lVar9 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
            lVar9 = *(long *)puVar3;
          }
          if (**(char **)(lVar9 + 0xb8) == '\0') {
            if (*(int *)(*(long *)Method_Unity_VisualScripting_AdditionHandler_<>c_<_ctor>b__0_36__
                        + 0xe0) == 0) {
              thunk_FUN_01ee6d7c();
            }
            FUN_03554488();
            unaff_x19 = (long *)Method_Unity_VisualScripting_AdditionHandler_<>c_<_ctor>b__0_36__;
            goto LAB_03555aa0;
          }
        }
        if (2 < iStack0000000000000034) {
          uVar15 = FUN_035683d0((long)&stack0x00000030 + 4,0);
          uVar15 = FUN_03405678(*(undefined8 *)
                                 Method_System_Text_RegularExpressions_RegexReplacement_Replace__,
                                uVar15,0);
          if (*(int *)(*(long *)Method_System_Nullable<AxisAlignedBox_BoxSurface>__ctor__ + 0xe0) ==
              0) {
            thunk_FUN_01ee6d7c(*(long *)Method_System_Nullable<AxisAlignedBox_BoxSurface>__ctor__);
          }
          uVar12 = FUN_03532f80(0);
          FUN_035685ac(&stack0x00000030,uVar15,uVar12,0);
          goto joined_r0x03554eec;
        }
        if (*(int *)(*(long *)Method_Unity_VisualScripting_AdditionHandler_<>c_<_ctor>b__0_36__ +
                    0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        goto LAB_03555928;
      }
      if (uVar2 == 0x7a) {
        if (*(int *)(*unaff_x19 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        iStack0000000000000034 = FUN_03554504();
        FUN_03555b5c(unaff_x20,unaff_x24);
        goto LAB_03555aa0;
      }
    }
  }
switchD_03554e74_caseD_65:
  if (unaff_x25 == 0) goto thunk_FUN_01f08a3c;
  FUN_03419060();
LAB_03555260:
  iStack0000000000000034 = 1;
  goto LAB_03555aa0;
code_r0x03554d20:
                    /* catch() { ... } // from try @ 03554d18 with catch @ 03554d28 */
  if (*(int *)(*unaff_x19 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
                    /* try { // try from 03554d34 to 03654d3f has its CatchHandler @ 03554d54 */
  iVar6 = FUN_0355485c();
                    /* try { // try from 03554d40 to 03654d4b has its CatchHandler @ 03554ae0 */
  if (iVar6 < 0) goto LAB_03555b04;
  if (unaff_x25 == 0) {
thunk_FUN_01f08a3c:
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
                    /* try { // try from 03554d4c to 03654d53 has its CatchHandler @ 03554d54 */
                    /* catch() { ... } // from try @ 03554d34 with catch @ 03554d54
                       catch() { ... } // from try @ 03554d4c with catch @ 03554d54 */
  FUN_03419060();
  goto LAB_03554d58;
}


