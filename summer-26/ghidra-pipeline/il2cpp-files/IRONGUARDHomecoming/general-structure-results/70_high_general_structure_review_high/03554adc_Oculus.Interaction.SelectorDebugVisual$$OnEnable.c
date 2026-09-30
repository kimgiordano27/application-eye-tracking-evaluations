/*
FUNCTION_NAME: Oculus.Interaction.SelectorDebugVisual$$OnEnable
ENTRY_POINT: 03554adc
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_11;validity_or_gating_hits_21;telemetry_or_network_hits_21;frame_or_lifecycle_behavior
*/


long Oculus_Interaction_SelectorDebugVisual__OnEnable(void)

{
  uint uVar1;
  ushort uVar2;
  undefined *puVar3;
  bool bVar4;
  bool bVar5;
  short sVar6;
  short sVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  int iVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  long lVar18;
  long unaff_x19;
  long *plVar19;
  long unaff_x20;
  long unaff_x21;
  uint unaff_w22;
  long unaff_x23;
  undefined8 unaff_x24;
  long *plVar20;
  uint uVar21;
  double dVar22;
  undefined8 in_stack_00000018;
  undefined2 in_stack_00000028;
  int iStack000000000000002c;
  int iStack0000000000000030;
  int iStack0000000000000034;
  
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03554abc with catch @ 03554adc
                       catch(type#2 @ 00000000) { ... } // from try @ 03554ad4 with catch @ 03554adc
                        */
  thunk_FUN_01efb3a4();
                    /* try { // try from 03554ae0 to 03654b37 has its CatchHandler @ 03554ae0
                       catch() { ... } // from try @ 03554ae0 with catch @ 03554ae0
                       catch() { ... } // from try @ 03554c00 with catch @ 03554ae0
                       catch() { ... } // from try @ 03554c38 with catch @ 03554ae0
                       catch() { ... } // from try @ 03554cd0 with catch @ 03554ae0
                       catch() { ... } // from try @ 03554d40 with catch @ 03554ae0 */
  thunk_FUN_01efb3a4(Method_Unity_VisualScripting_AdditionHandler_<>c_<_ctor>b__0_22__);
  *(undefined1 *)(unaff_x19 + 0x1e9) = 1;
  puVar3 = Method_Unity_VisualScripting_FullSerializer_fsBaseConverter_SerializeMember<Texture2D>__;
  iStack0000000000000030 = 0;
  iStack0000000000000034 = 0;
  iStack000000000000002c = 0;
  in_stack_00000028 = 0;
  if (unaff_x21 == 0) {
thunk_FUN_01f08a3c:
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  plVar20 = *(long **)(unaff_x21 + 0x78);
  lVar12 = unaff_x20;
  if (unaff_x20 == 0) {
    lVar12 = FUN_0341ad94(0x10,0);
  }
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
                    /* try { // try from 03554b38 to 03654b57 has its CatchHandler @ 03554cfc */
  if (DAT_04833019 == '\0') {
    thunk_FUN_01efb3a4(
                      Method_Unity_VisualScripting_FullSerializer_fsBaseConverter_SerializeMember<Texture2D>__
                      );
    DAT_04833019 = '\x01';
  }
  lVar13 = *(long *)puVar3;
  if (*(int *)(lVar13 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
    lVar13 = *(long *)puVar3;
  }
  if (**(char **)(lVar13 + 0xb8) == '\0') {
    if (plVar20 == (long *)0x0) goto thunk_FUN_01f08a3c;
                    /* try { // try from 03554b90 to 03654b93 has its CatchHandler @ 03554cdc */
    sVar7 = (**(code **)(*plVar20 + 0x1a8))(plVar20,*(undefined8 *)(*plVar20 + 0x1b0));
    lVar13 = *(long *)puVar3;
    bVar4 = sVar7 != 8;
  }
  else {
    bVar4 = true;
                    /* try { // try from 03554b7c to 03654b7f has its CatchHandler @ 03554cf0 */
  }
  if (*(int *)(lVar13 + 0xe0) == 0) {
                    /* try { // try from 03554bb4 to 03654bb7 has its CatchHandler @ 03554ce4 */
    thunk_FUN_01ee6d7c();
  }
  if (DAT_04833019 == '\0') {
                    /* try { // try from 03554bc8 to 03654bcb has its CatchHandler @ 03554cdc */
    thunk_FUN_01efb3a4(
                      Method_Unity_VisualScripting_FullSerializer_fsBaseConverter_SerializeMember<Texture2D>__
                      );
    DAT_04833019 = '\x01';
  }
  lVar13 = *(long *)puVar3;
  if (*(int *)(lVar13 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
    lVar13 = *(long *)puVar3;
  }
                    /* try { // try from 03554bec to 03654bf3 has its CatchHandler @ 03554d00 */
  if (**(char **)(lVar13 + 0xb8) == '\0') {
                    /* try { // try from 03554c00 to 03654c33 has its CatchHandler @ 03554ae0 */
    if (plVar20 == (long *)0x0) goto thunk_FUN_01f08a3c;
    sVar7 = (**(code **)(*plVar20 + 0x1a8))(plVar20,*(undefined8 *)(*plVar20 + 0x1b0));
    bVar5 = sVar7 != 3;
  }
  else {
                    /* try { // try from 03554bf8 to 03654bff has its CatchHandler @ 03554ce0 */
    bVar5 = true;
  }
  if (0 < (int)unaff_w22) {
                    /* try { // try from 03554c34 to 03654c37 has its CatchHandler @ 03554ce8 */
                    /* try { // try from 03554c38 to 03654c3f has its CatchHandler @ 03554ae0 */
                    /* try { // try from 03554c40 to 03654c43 has its CatchHandler @ 03554cf8 */
    uVar21 = 0;
                    /* try { // try from 03554c44 to 03654c47 has its CatchHandler @ 03554cf4 */
                    /* try { // try from 03554c48 to 03654c4b has its CatchHandler @ 03554cec */
    plVar19 = (long *)Method_Unity_VisualScripting_AdditionHandler_<>c_<_ctor>b__0_36__;
    do {
      if (unaff_w22 <= uVar21) goto LAB_03555afc;
                    /* try { // try from 03554c58 to 03654c5b has its CatchHandler @ 03554cd8 */
      uVar2 = *(ushort *)(unaff_x23 + (long)(int)uVar21 * 2);
                    /* try { // try from 03554c60 to 03654c8f has its CatchHandler @ 03554cd4 */
      if (uVar2 < 0x4c) {
        if (uVar2 < 0x30) {
          if (uVar2 < 0x26) {
            if (uVar2 == 0x22) {
LAB_03554fa0:
              if (*(int *)(*plVar19 + 0xe0) == 0) {
                thunk_FUN_01ee6d7c();
              }
              iStack0000000000000034 = FUN_035546b4();
              goto LAB_03555aa0;
            }
            if (uVar2 == 0x25) {
              if (*(int *)(*plVar19 + 0xe0) == 0) {
                thunk_FUN_01ee6d7c();
              }
              iVar8 = FUN_0355485c();
              if ((iVar8 < 0) || (iVar8 == 0x25)) goto LAB_03555b04;
              in_stack_00000028 = (undefined2)iVar8;
              if (*(long *)(*(long *)Method_Unity_Burst_Intrinsics_Arm_Neon_vpmax_s16__ + 0x38) == 0
                 ) {
                FUN_01ecafa0(*(long *)Method_Unity_Burst_Intrinsics_Arm_Neon_vpmax_s16__);
              }
              if (*(int *)(*plVar19 + 0xe0) == 0) {
                thunk_FUN_01ee6d7c();
              }
              FUN_03554a24(in_stack_00000018,&stack0x00000028,1);
LAB_03554d58:
              iStack0000000000000034 = 2;
              goto LAB_03555aa0;
            }
          }
          else {
            if (uVar2 == 0x27) goto LAB_03554fa0;
            if (uVar2 == 0x2f) {
              uVar16 = FUN_0350b874();
              if (lVar12 != 0) goto LAB_03555250;
              goto thunk_FUN_01f08a3c;
            }
          }
switchD_03554e74_caseD_65:
          if (lVar12 == 0) goto thunk_FUN_01f08a3c;
          FUN_03419060(lVar12,uVar2,0);
        }
        else {
          if (0x46 < uVar2) {
            if (uVar2 == 0x48) {
              if (*(int *)(*plVar19 + 0xe0) == 0) {
                thunk_FUN_01ee6d7c();
              }
              iStack0000000000000034 = FUN_03554504();
              if (*(int *)(*(long *)Method_System_Array_Resize<InputDevice_ControlBitRangeNode>__ +
                          0xe0) == 0) {
                thunk_FUN_01ee6d7c(*(long *)
                                    Method_System_Array_Resize<InputDevice_ControlBitRangeNode>__);
              }
              uVar10 = FUN_0354e488(&stack0x00000038);
              goto LAB_0355562c;
            }
            if (uVar2 == 0x4b) {
              iStack0000000000000034 = 1;
              if (*(int *)(*plVar19 + 0xe0) == 0) {
                thunk_FUN_01ee6d7c();
              }
              FUN_03555f08(in_stack_00000018,unaff_x24,lVar12);
              goto LAB_03555aa0;
            }
            goto switchD_03554e74_caseD_65;
          }
          if (uVar2 != 0x3a) {
            if (uVar2 == 0x46) goto switchD_03554e74_caseD_66;
            goto switchD_03554e74_caseD_65;
          }
          uVar16 = FUN_0350bfdc();
          if (lVar12 == 0) goto thunk_FUN_01f08a3c;
LAB_03555250:
          FUN_03418748(lVar12,uVar16,0);
        }
        iStack0000000000000034 = 1;
      }
      else if (uVar2 < 0x6e) {
        if (uVar2 < 0x5d) {
          if (uVar2 != 0x4d) {
            if (uVar2 != 0x5c) goto switchD_03554e74_caseD_65;
            if (*(int *)(*plVar19 + 0xe0) == 0) {
              thunk_FUN_01ee6d7c();
            }
            iVar8 = FUN_0355485c();
            if (iVar8 < 0) goto LAB_03555b04;
            if (lVar12 != 0) {
              FUN_03419060(lVar12,iVar8,0);
              goto LAB_03554d58;
            }
            goto thunk_FUN_01f08a3c;
          }
          if (*(int *)(*plVar19 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          iStack0000000000000034 = FUN_03554504();
          if (plVar20 == (long *)0x0) goto thunk_FUN_01f08a3c;
          iVar8 = (**(code **)(*plVar20 + 0x248))
                            (plVar20,in_stack_00000018,*(undefined8 *)(*plVar20 + 0x250));
          if (iStack0000000000000034 < 3) {
            if (!bVar4) {
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
              lVar13 = *(long *)
                        Method_Unity_VisualScripting_FullSerializer_fsBaseConverter_SerializeMember<Texture2D>__
              ;
              if (*(int *)(lVar13 + 0xe0) == 0) {
                thunk_FUN_01ee6d7c();
                lVar13 = *(long *)puVar3;
              }
              if (**(char **)(lVar13 + 0xb8) == '\0') {
LAB_03555a34:
                plVar19 = (long *)Method_Unity_VisualScripting_AdditionHandler_<>c_<_ctor>b__0_36__;
                if (*(int *)(*(long *)
                              Method_Unity_VisualScripting_AdditionHandler_<>c_<_ctor>b__0_36__ +
                            0xe0) == 0) {
                  thunk_FUN_01ee6d7c();
                }
                FUN_03554488(lVar12,iVar8);
                goto LAB_03555aa0;
              }
            }
            lVar13 = *(long *)Method_Unity_VisualScripting_AdditionHandler_<>c_<_ctor>b__0_36__;
LAB_035558a8:
            iVar9 = iStack0000000000000034;
            if (*(int *)(lVar13 + 0xe0) == 0) {
              thunk_FUN_01ee6d7c();
            }
            goto LAB_03555928;
          }
          if (!bVar4) {
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
            lVar13 = *(long *)
                      Method_Unity_VisualScripting_FullSerializer_fsBaseConverter_SerializeMember<Texture2D>__
            ;
            if (*(int *)(lVar13 + 0xe0) == 0) {
              thunk_FUN_01ee6d7c();
              lVar13 = *(long *)puVar3;
            }
            iVar9 = iStack0000000000000034;
            if (**(char **)(lVar13 + 0xb8) == '\0') {
              if (*(int *)(*(long *)
                            Method_Unity_VisualScripting_AdditionHandler_<>c_<_ctor>b__0_36__ + 0xe0
                          ) == 0) {
                thunk_FUN_01ee6d7c();
              }
              uVar16 = FUN_035545f4(in_stack_00000018,iVar8,iVar9);
              goto joined_r0x03554eec;
            }
          }
          puVar3 = Method_Unity_VisualScripting_AdditionHandler_<>c_<_ctor>b__0_36__;
          uVar15 = FUN_0350c348();
          iVar9 = iStack0000000000000034;
          lVar13 = *(long *)puVar3;
          if (((uVar15 & 1) == 0) || (iStack0000000000000034 < 4)) {
            if (*(int *)(lVar13 + 0xe0) == 0) {
              thunk_FUN_01ee6d7c(lVar13);
            }
            uVar16 = FUN_035545c0(iVar8,iVar9);
          }
          else {
            if (*(int *)(lVar13 + 0xe0) == 0) {
              thunk_FUN_01ee6d7c(lVar13);
            }
            FUN_035548cc();
            uVar16 = FUN_0350c388();
          }
          if (lVar12 == 0) goto thunk_FUN_01f08a3c;
LAB_03555a84:
          FUN_03418748(lVar12,uVar16,0);
          plVar19 = (long *)Method_Unity_VisualScripting_AdditionHandler_<>c_<_ctor>b__0_36__;
        }
        else {
          switch(uVar2) {
          case 100:
            if (*(int *)(*plVar19 + 0xe0) == 0) {
              thunk_FUN_01ee6d7c();
            }
            iStack0000000000000034 = FUN_03554504();
            if (plVar20 != (long *)0x0) {
              lVar13 = *plVar20;
              if (iStack0000000000000034 < 3) {
                iVar8 = (**(code **)(lVar13 + 0x1e8))
                                  (plVar20,in_stack_00000018,*(undefined8 *)(lVar13 + 0x1f0));
                if (!bVar4) {
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
                  lVar13 = *(long *)
                            Method_Unity_VisualScripting_FullSerializer_fsBaseConverter_SerializeMember<Texture2D>__
                  ;
                  if (*(int *)(lVar13 + 0xe0) == 0) {
                    thunk_FUN_01ee6d7c();
                    lVar13 = *(long *)puVar3;
                  }
                  plVar19 = (long *)
                            Method_Unity_VisualScripting_AdditionHandler_<>c_<_ctor>b__0_36__;
                  if (**(char **)(lVar13 + 0xb8) == '\0') goto LAB_03555a34;
                }
                lVar13 = *plVar19;
                goto LAB_035558a8;
              }
              uVar10 = (**(code **)(lVar13 + 0x1f8))
                                 (plVar20,in_stack_00000018,*(undefined8 *)(lVar13 + 0x200));
              iVar8 = iStack0000000000000034;
              if (*(int *)(*plVar19 + 0xe0) == 0) {
                thunk_FUN_01ee6d7c(*plVar19);
              }
              uVar16 = FUN_0355458c(uVar10,iVar8);
joined_r0x03554eec:
              if (lVar12 != 0) goto LAB_03555a84;
            }
            goto thunk_FUN_01f08a3c;
          default:
            goto switchD_03554e74_caseD_65;
          case 0x66:
switchD_03554e74_caseD_66:
            if (*(int *)(*plVar19 + 0xe0) == 0) {
              thunk_FUN_01ee6d7c();
            }
            iStack0000000000000034 = FUN_03554504();
            if (7 < iStack0000000000000034) {
LAB_03555b04:
              if (unaff_x20 == 0) {
                FUN_0341ae68(lVar12,0);
              }
              thunk_FUN_01efb3a4(Method_Unity_VisualScripting_Member_ReflectField__);
              uVar16 = thunk_FUN_01f117cc();
              uVar17 = thunk_FUN_01efb3a4(
                                         Method_UnityEngine_InputSystem_Utilities_Observable_Where<InputControl>__
                                         );
              FUN_03553fd0(uVar16,uVar17);
              uVar17 = thunk_FUN_01efb3a4(Method_Unity_Burst_Intrinsics_Arm_Neon_vpmax_s32__);
                    /* WARNING: Subroutine does not return */
              FUN_01f08910(uVar16,uVar17);
            }
            if (*(int *)(*(long *)Method_System_Array_Resize<InputDevice_ControlBitRangeNode>__ +
                        0xe0) == 0) {
              thunk_FUN_01ee6d7c();
            }
            lVar13 = FUN_0354e060(&stack0x00000038);
            iVar8 = iStack0000000000000034;
            if (*(int *)(*(long *)Method_Oculus_Platform_Message<LeaderboardList>__ctor__ + 0xe0) ==
                0) {
              thunk_FUN_01ee6d7c(*(long *)Method_Oculus_Platform_Message<LeaderboardList>__ctor__);
            }
            dVar22 = (double)thunk_FUN_01ec1aac(0x4024000000000000,(double)(7 - iVar8),0);
            puVar3 = Method_Unity_VisualScripting_AdditionHandler_<>c_<_ctor>b__0_36__;
            lVar14 = -0x8000000000000000;
            if (dVar22 != INFINITY) {
              lVar14 = (long)dVar22;
            }
            lVar18 = 0;
            if (lVar14 != 0) {
              lVar18 = (lVar13 % 10000000) / lVar14;
            }
            iVar8 = (int)lVar18;
            if (uVar2 == 0x66) {
              lVar13 = *(long *)Method_Unity_VisualScripting_AdditionHandler_<>c_<_ctor>b__0_36__;
              iStack000000000000002c = iVar8;
              if (*(int *)(lVar13 + 0xe0) == 0) {
                thunk_FUN_01ee6d7c();
                lVar13 = *(long *)puVar3;
              }
              lVar13 = *(long *)(*(long *)(lVar13 + 0xb8) + 0x28);
              if (lVar13 == 0) goto thunk_FUN_01f08a3c;
              if (*(uint *)(lVar13 + 0x18) <= iStack0000000000000034 - 1U) {
LAB_03555afc:
                    /* WARNING: Subroutine does not return */
                FUN_01f08a44();
              }
              lVar13 = lVar13 + (long)(int)(iStack0000000000000034 - 1U) * 8;
              lVar14 = *(long *)Method_System_Nullable<AxisAlignedBox_BoxSurface>__ctor__;
            }
            else {
              iVar9 = iStack0000000000000034;
              if ((0 < iStack0000000000000034) && (iVar11 = iStack0000000000000034, iVar8 % 10 == 0)
                 ) {
                do {
                  lVar18 = lVar18 / 10;
                  iVar9 = iVar11 + -1;
                  if (iVar11 < 2) break;
                  iVar11 = iVar9;
                } while (lVar18 == (lVar18 / 10) * 10);
              }
              if (iVar9 < 1) {
                if (lVar12 != 0) {
                  iVar8 = FUN_0341792c(lVar12,0);
                  plVar19 = (long *)
                            Method_Unity_VisualScripting_AdditionHandler_<>c_<_ctor>b__0_36__;
                  if (0 < iVar8) {
                    iVar8 = FUN_0341792c(lVar12,0);
                    sVar7 = FUN_034181cc(lVar12,iVar8 + -1,0);
                    if (sVar7 == 0x2e) {
                      iVar8 = FUN_0341792c(lVar12,0);
                      FUN_03418d9c(lVar12,iVar8 + -1,1,0);
                    }
                  }
                  break;
                }
                goto thunk_FUN_01f08a3c;
              }
              iStack000000000000002c = (int)lVar18;
              lVar13 = *(long *)Method_Unity_VisualScripting_AdditionHandler_<>c_<_ctor>b__0_36__;
              if (*(int *)(lVar13 + 0xe0) == 0) {
                thunk_FUN_01ee6d7c();
                lVar13 = *(long *)puVar3;
              }
              lVar13 = *(long *)(*(long *)(lVar13 + 0xb8) + 0x28);
              if (lVar13 == 0) goto thunk_FUN_01f08a3c;
              if (*(uint *)(lVar13 + 0x18) <= iVar9 - 1U) goto LAB_03555afc;
              lVar13 = lVar13 + (ulong)(iVar9 - 1U) * 8;
              lVar14 = *(long *)Method_System_Nullable<AxisAlignedBox_BoxSurface>__ctor__;
            }
            uVar16 = *(undefined8 *)(lVar13 + 0x20);
            if (*(int *)(lVar14 + 0xe0) == 0) {
              thunk_FUN_01ee6d7c();
            }
            uVar17 = FUN_03532f80(0);
            uVar16 = FUN_035685ac(&stack0x0000002c,uVar16,uVar17,0);
            if (lVar12 == 0) goto thunk_FUN_01f08a3c;
            FUN_03418748(lVar12,uVar16,0);
            plVar19 = (long *)Method_Unity_VisualScripting_AdditionHandler_<>c_<_ctor>b__0_36__;
            break;
          case 0x67:
            if (*(int *)(*plVar19 + 0xe0) == 0) {
              thunk_FUN_01ee6d7c();
            }
            iStack0000000000000034 = FUN_03554504();
            if (plVar20 == (long *)0x0) goto thunk_FUN_01f08a3c;
            (**(code **)(*plVar20 + 0x228))
                      (plVar20,in_stack_00000018,*(undefined8 *)(*plVar20 + 0x230));
            uVar16 = FUN_0350b5e4();
joined_r0x03555804:
            if (lVar12 == 0) goto thunk_FUN_01f08a3c;
            FUN_03418748(lVar12,uVar16,0);
            break;
          case 0x68:
            if (*(int *)(*plVar19 + 0xe0) == 0) {
              thunk_FUN_01ee6d7c();
            }
            iStack0000000000000034 = FUN_03554504();
            if (*(int *)(*(long *)Method_System_Array_Resize<InputDevice_ControlBitRangeNode>__ +
                        0xe0) == 0) {
              thunk_FUN_01ee6d7c(*(long *)
                                  Method_System_Array_Resize<InputDevice_ControlBitRangeNode>__);
            }
            iVar11 = FUN_0354e488(&stack0x00000038);
            iVar9 = iStack0000000000000034;
            iVar8 = 0xc;
            if (iVar11 % 0xc != 0) {
              iVar8 = iVar11 % 0xc;
            }
            if (*(int *)(*plVar19 + 0xe0) == 0) {
              thunk_FUN_01ee6d7c();
            }
            FUN_03554320(lVar12,iVar8,iVar9);
            plVar19 = (long *)Method_Unity_VisualScripting_AdditionHandler_<>c_<_ctor>b__0_36__;
            break;
          case 0x6d:
            if (*(int *)(*plVar19 + 0xe0) == 0) {
              thunk_FUN_01ee6d7c();
            }
            iStack0000000000000034 = FUN_03554504();
            if (*(int *)(*(long *)Method_System_Array_Resize<InputDevice_ControlBitRangeNode>__ +
                        0xe0) == 0) {
              thunk_FUN_01ee6d7c(*(long *)
                                  Method_System_Array_Resize<InputDevice_ControlBitRangeNode>__);
            }
            uVar10 = FUN_0354e604(&stack0x00000038);
            goto LAB_0355562c;
          }
        }
      }
      else if (uVar2 < 0x75) {
        if (uVar2 == 0x73) {
          if (*(int *)(*plVar19 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          iStack0000000000000034 = FUN_03554504();
          if (*(int *)(*(long *)Method_System_Array_Resize<InputDevice_ControlBitRangeNode>__ + 0xe0
                      ) == 0) {
            thunk_FUN_01ee6d7c(*(long *)
                                Method_System_Array_Resize<InputDevice_ControlBitRangeNode>__);
          }
          uVar10 = FUN_0354e868(&stack0x00000038);
LAB_0355562c:
          FUN_03554320(lVar12,uVar10,iStack0000000000000034);
        }
        else {
          if (uVar2 != 0x74) goto switchD_03554e74_caseD_65;
          if (*(int *)(*plVar19 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          iVar8 = FUN_03554504();
          iStack0000000000000034 = iVar8;
          if (*(int *)(*(long *)Method_System_Array_Resize<InputDevice_ControlBitRangeNode>__ + 0xe0
                      ) == 0) {
            thunk_FUN_01ee6d7c(*(long *)
                                Method_System_Array_Resize<InputDevice_ControlBitRangeNode>__);
          }
          iVar9 = FUN_0354e488(&stack0x00000038);
          plVar19 = (long *)Method_Unity_VisualScripting_AdditionHandler_<>c_<_ctor>b__0_36__;
          if (iVar8 != 1) {
            if (iVar9 < 0xc) {
              uVar16 = FUN_0350b424();
            }
            else {
              uVar16 = Oculus_Interaction_BestSelectInteractorGroup__get_HasInteractable();
            }
            goto joined_r0x03555804;
          }
          if (iVar9 < 0xc) {
            lVar13 = FUN_0350b424();
            if (lVar13 == 0) goto thunk_FUN_01f08a3c;
            if (0 < *(int *)(lVar13 + 0x10)) {
              lVar13 = FUN_0350b424();
              if (lVar13 != 0) goto LAB_035557d8;
              goto thunk_FUN_01f08a3c;
            }
          }
          else {
            lVar13 = Oculus_Interaction_BestSelectInteractorGroup__get_HasInteractable();
            if (lVar13 == 0) goto thunk_FUN_01f08a3c;
            if (0 < *(int *)(lVar13 + 0x10)) {
              lVar13 = Oculus_Interaction_BestSelectInteractorGroup__get_HasInteractable();
              if (lVar13 == 0) goto thunk_FUN_01f08a3c;
LAB_035557d8:
              uVar10 = FUN_03409f80(lVar13,0,0);
              if (lVar12 == 0) goto thunk_FUN_01f08a3c;
              FUN_03419060(lVar12,uVar10,0);
            }
          }
        }
      }
      else {
        if (uVar2 != 0x79) {
          if (uVar2 == 0x7a) {
            if (*(int *)(*plVar19 + 0xe0) == 0) {
              thunk_FUN_01ee6d7c();
            }
            iStack0000000000000034 = FUN_03554504();
            FUN_03555b5c(in_stack_00000018,unaff_x24);
            goto LAB_03555aa0;
          }
          goto switchD_03554e74_caseD_65;
        }
        if (plVar20 == (long *)0x0) goto thunk_FUN_01f08a3c;
        uVar10 = (**(code **)(*plVar20 + 0x268))
                           (plVar20,in_stack_00000018,*(undefined8 *)(*plVar20 + 0x270));
        _iStack0000000000000030 = CONCAT44(iStack0000000000000034,uVar10);
        if (*(int *)(*plVar19 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c(*plVar19);
        }
        iVar8 = FUN_03554504();
        iStack0000000000000034 = iVar8;
        if ((((!bVar5) &&
             (*(char *)(*(long *)(*(long *)
                                   Method_Unity_VisualScripting_AdditionHandler_<>c_<_ctor>b__0_107__
                                 + 0xb8) + 1) == '\0')) && (iStack0000000000000030 == 1)) &&
           (uVar1 = iVar8 + uVar21, (int)uVar1 < (int)(unaff_w22 - 1))) {
          if (unaff_w22 <= uVar1) goto LAB_03555afc;
          if (*(short *)(unaff_x23 + (long)(int)uVar1 * 2) == 0x27) {
            if (unaff_w22 <= uVar1 + 1) goto LAB_03555afc;
            if (*(long *)Method_Unity_VisualScripting_AdditionHandler_<>c_<_ctor>b__0_22__ == 0)
            goto thunk_FUN_01f08a3c;
            sVar7 = *(short *)(unaff_x23 + (long)(int)(uVar1 + 1) * 2);
            sVar6 = FUN_03409f80(*(long *)
                                  Method_Unity_VisualScripting_AdditionHandler_<>c_<_ctor>b__0_22__,
                                 0,0);
            plVar19 = (long *)Method_Unity_VisualScripting_AdditionHandler_<>c_<_ctor>b__0_36__;
            if (sVar7 == sVar6) {
              if ((*(long *)Method_Unity_VisualScripting_AdditionHandler_<>c_<_ctor>b__0_21__ != 0)
                 && (uVar10 = FUN_03409f80(*(long *)
                                            Method_Unity_VisualScripting_AdditionHandler_<>c_<_ctor>b__0_21__
                                           ,0,0), lVar12 != 0)) {
                FUN_03419060(lVar12,uVar10,0);
                goto LAB_03555aa0;
              }
              goto thunk_FUN_01f08a3c;
            }
          }
        }
        uVar15 = FUN_0350d874();
        iVar8 = iStack0000000000000030;
        if ((uVar15 & 1) == 0) {
          if (!bVar4) {
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
            lVar13 = *(long *)
                      Method_Unity_VisualScripting_FullSerializer_fsBaseConverter_SerializeMember<Texture2D>__
            ;
            if (*(int *)(lVar13 + 0xe0) == 0) {
              thunk_FUN_01ee6d7c();
              lVar13 = *(long *)puVar3;
            }
            iVar8 = iStack0000000000000030;
            if (**(char **)(lVar13 + 0xb8) == '\0') {
              if (*(int *)(*(long *)
                            Method_Unity_VisualScripting_AdditionHandler_<>c_<_ctor>b__0_36__ + 0xe0
                          ) == 0) {
                thunk_FUN_01ee6d7c();
              }
              FUN_03554488(lVar12,iVar8);
              plVar19 = (long *)Method_Unity_VisualScripting_AdditionHandler_<>c_<_ctor>b__0_36__;
              goto LAB_03555aa0;
            }
          }
          iVar9 = iStack0000000000000034;
          iVar8 = iStack0000000000000030;
          if (2 < iStack0000000000000034) {
            uVar16 = FUN_035683d0((long)&stack0x00000030 + 4,0);
            uVar16 = FUN_03405678(*(undefined8 *)
                                   Method_System_Text_RegularExpressions_RegexReplacement_Replace__,
                                  uVar16,0);
            if (*(int *)(*(long *)Method_System_Nullable<AxisAlignedBox_BoxSurface>__ctor__ + 0xe0)
                == 0) {
              thunk_FUN_01ee6d7c(*(long *)Method_System_Nullable<AxisAlignedBox_BoxSurface>__ctor__)
              ;
            }
            uVar17 = FUN_03532f80(0);
            uVar16 = FUN_035685ac(&stack0x00000030,uVar16,uVar17,0);
            goto joined_r0x03554eec;
          }
          if (*(int *)(*(long *)Method_Unity_VisualScripting_AdditionHandler_<>c_<_ctor>b__0_36__ +
                      0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          iVar8 = iVar8 % 100;
        }
        else {
          iVar9 = iStack0000000000000034;
          if (1 < iStack0000000000000034) {
            iVar9 = 2;
          }
          if (*(int *)(*plVar19 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
        }
LAB_03555928:
        FUN_03554320(lVar12,iVar8,iVar9);
        plVar19 = (long *)Method_Unity_VisualScripting_AdditionHandler_<>c_<_ctor>b__0_36__;
      }
LAB_03555aa0:
      uVar21 = iStack0000000000000034 + uVar21;
    } while ((int)uVar21 < (int)unaff_w22);
  }
  return lVar12;
}


