/*
FUNCTION_NAME: OVRPlugin$$GetBoundaryDimensions
ENTRY_POINT: 036854b0
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 123
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;frame_behavior
EVIDENCE: strong_eye_source_hits_19;weak_xr_or_state_hits_20;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_21;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_19
*/


/* WARNING: Removing unreachable block (ram,0x0368572c) */
/* WARNING: Removing unreachable block (ram,0x036859fc) */
/* WARNING: Removing unreachable block (ram,0x03685860) */
/* WARNING: Removing unreachable block (ram,0x03685830) */

void OVRPlugin__GetBoundaryDimensions(void)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined4 *puVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  long unaff_x19;
  int iVar11;
  int iVar12;
  undefined8 *unaff_x20;
  long *unaff_x21;
  long *unaff_x22;
  int unaff_w24;
  long lVar13;
  undefined8 uVar14;
  long unaff_x27;
  undefined8 *unaff_x28;
  undefined1 unaff_w29;
  float fVar15;
  float fVar16;
  undefined8 unaff_d9;
  float unaff_s10;
  long *in_stack_00000008;
  undefined8 uStack0000000000000010;
  undefined8 in_stack_00000028;
  
  if (unaff_w24 == 1) {
    plVar5 = (long *)__cxa_begin_catch();
    lVar13 = *plVar5;
    __cxa_end_catch();
code_r0x036853d4:
    if (unaff_x22 != (long *)0x0) {
      lVar8 = *unaff_x22;
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) ==
              *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
            puVar4 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_0368542c;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar4 = (undefined8 *)
               FUN_01ecb238(unaff_x22,
                            *(long *)
                             Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                            ,0);
LAB_0368542c:
      (*(code *)*puVar4)(unaff_x22,puVar4[1]);
    }
    if (lVar13 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01eed990(lVar13);
    }
    unaff_d9 = CONCAT44((float)((ulong)unaff_d9 >> 0x20) +
                        (float)((ulong)*(undefined8 *)(unaff_x19 + 0x70) >> 0x20),
                        (float)unaff_d9 + (float)*(undefined8 *)(unaff_x19 + 0x70));
    unaff_s10 = unaff_s10 + *(float *)(unaff_x19 + 0x78);
    lVar13 = *in_stack_00000008;
    uVar9 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__) {
          puVar4 = (undefined8 *)(lVar13 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_03685110;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar4 = (undefined8 *)
             FUN_01ecb238(in_stack_00000008,
                          *(long *)
                           Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__
                          ,0);
LAB_03685110:
    uVar9 = (*(code *)*puVar4)(in_stack_00000008,puVar4[1]);
    if ((uVar9 & 1) != 0) {
      lVar13 = *in_stack_00000008;
      uVar9 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)Method_OVRControllerTest_<>c_<Start>b__4_18__) {
            puVar4 = (undefined8 *)(lVar13 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_03685178;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar4 = (undefined8 *)
               FUN_01ecb238(in_stack_00000008,*(long *)Method_OVRControllerTest_<>c_<Start>b__4_18__
                            ,0);
LAB_03685178:
      lVar13 = (*(code *)*puVar4)(in_stack_00000008,puVar4[1]);
      if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      plVar5 = *(long **)(lVar13 + 0x18);
      if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar8 = *plVar5;
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) ==
              *(long *)Method_Unity_VisualScripting_MultiplicationHandler_<>c_<_ctor>b__0_85__) {
            puVar4 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_036851e8;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar4 = (undefined8 *)
               FUN_01ecb238(plVar5,*(long *)
                                    Method_Unity_VisualScripting_MultiplicationHandler_<>c_<_ctor>b__0_85__
                            ,0);
LAB_036851e8:
      unaff_x22 = (long *)(*(code *)*puVar4)(plVar5,puVar4[1]);
      uStack0000000000000010 = unaff_d9;
      fVar16 = unaff_s10;
      if (unaff_x22 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      do {
        lVar8 = *unaff_x22;
        uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) ==
                *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__)
            {
              puVar4 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
              goto LAB_0368525c;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        puVar4 = (undefined8 *)
                 FUN_01ecb238(unaff_x22,
                              *(long *)
                               Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__
                              ,0);
LAB_0368525c:
        uVar9 = (*(code *)*puVar4)(unaff_x22,puVar4[1]);
        if ((uVar9 & 1) == 0) goto LAB_036853d0;
        lVar8 = *unaff_x22;
        uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) ==
                *(long *)Method_Unity_VisualScripting_MultiplicationHandler_<>c_<_ctor>b__0_86__) {
              puVar4 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
              goto LAB_036852c0;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        puVar4 = (undefined8 *)
                 FUN_01ecb238(unaff_x22,
                              *(long *)
                               Method_Unity_VisualScripting_MultiplicationHandler_<>c_<_ctor>b__0_86__
                              ,0);
LAB_036852c0:
        uVar3 = (*(code *)*puVar4)(unaff_x22,puVar4[1]);
        uVar14 = *(undefined8 *)(unaff_x19 + 0x60);
        uVar6 = *(undefined8 *)(unaff_x19 + 0x68);
        if (*(int *)(*(long *)Method_Oculus_Platform_Message<LivestreamingStatus>_get_Data__ + 0xe0)
            == 0) {
          thunk_FUN_01ee6d7c();
        }
        lVar8 = FUN_023aa90c(uVar14,uVar6,*unaff_x20);
        if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        lVar8 = FUN_023361c8(lVar8,*unaff_x28);
        if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        uVar1 = *(undefined4 *)(lVar13 + 0x10);
        uVar14 = *(undefined8 *)(unaff_x19 + 0x28);
        *(undefined8 *)(lVar8 + 0x68) = uVar3;
        *(undefined1 *)(lVar8 + 0x70) = unaff_w29;
        *(undefined4 *)(lVar8 + 100) = uVar1;
        thunk_FUN_01f51358((undefined8 *)(lVar8 + 0x68),uVar3);
        *(undefined8 *)(lVar8 + 0x50) = uVar14;
        thunk_FUN_01f51358((undefined8 *)(lVar8 + 0x50),uVar14);
        lVar8 = FUN_04070398(lVar8,0);
        if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        FUN_0407da88(*(undefined4 *)(unaff_x19 + 0x88),*(undefined4 *)(unaff_x19 + 0x8c),
                     *(undefined4 *)(unaff_x19 + 0x90),lVar8,0);
        if (*(char *)(unaff_x27 + 0xe0f) == '\0') {
          thunk_FUN_01efb3a4();
          *(undefined1 *)(unaff_x27 + 0xe0f) = unaff_w29;
        }
        puVar7 = *(undefined4 **)(*unaff_x21 + 0xb8);
        FUN_0407d6f4(*puVar7,puVar7[1],puVar7[2],puVar7[3],lVar8,0);
        fVar15 = (float)((ulong)uStack0000000000000010 >> 0x20);
        FUN_0407c958(uStack0000000000000010,fVar15,fVar16,lVar8,0);
        fVar16 = fVar16 + *(float *)(unaff_x19 + 0x84);
        uStack0000000000000010 =
             CONCAT44(fVar15 + (float)((ulong)*(undefined8 *)(unaff_x19 + 0x7c) >> 0x20),
                      (float)uStack0000000000000010 + (float)*(undefined8 *)(unaff_x19 + 0x7c));
      } while( true );
    }
    lVar13 = 0;
    iVar12 = 9;
    iVar11 = 9;
    goto joined_r0x036854d8;
  }
  if (unaff_x22 != (long *)0x0) {
    lVar13 = *unaff_x22;
    uVar9 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar4 = (undefined8 *)(lVar13 + (long)*piVar10 * 0x10 + 0x138);
          goto code_r0x03685820;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar4 = (undefined8 *)FUN_01ecb238();
code_r0x03685820:
    (*(code *)*puVar4)();
  }
  if (unaff_w24 != 1) {
    if (in_stack_00000008 != (long *)0x0) {
      lVar13 = *in_stack_00000008;
      uVar9 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) ==
              *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
            puVar4 = (undefined8 *)(lVar13 + (long)*piVar10 * 0x10 + 0x138);
            goto code_r0x036859e4;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar4 = (undefined8 *)
               FUN_01ecb238(in_stack_00000008,
                            *(long *)
                             Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                            ,0);
code_r0x036859e4:
      (*(code *)*puVar4)(in_stack_00000008,puVar4[1]);
    }
                    /* WARNING: Subroutine does not return */
    FUN_01fbfd14();
  }
  plVar5 = (long *)__cxa_begin_catch();
  lVar13 = *plVar5;
  __cxa_end_catch();
  iVar12 = 0;
  iVar11 = 0;
joined_r0x036854d8:
  if (in_stack_00000008 != (long *)0x0) {
    lVar8 = *in_stack_00000008;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar4 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_03685530;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar4 = (undefined8 *)
             FUN_01ecb238(in_stack_00000008,
                          *(long *)
                           Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__,
                          0);
LAB_03685530:
    (*(code *)*puVar4)(in_stack_00000008,puVar4[1]);
    iVar11 = iVar12;
  }
  if (lVar13 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01eed990(lVar13);
  }
  if ((iVar11 != 9) && (iVar11 != 0)) {
    return;
  }
  if ((*(long *)(unaff_x19 + 0x30) != 0) &&
     (plVar5 = *(long **)(*(long *)(unaff_x19 + 0x30) + 0x40), plVar5 != (long *)0x0)) {
    lVar13 = *plVar5;
    uVar14 = *(undefined8 *)Method_System_Nullable<InputControlScheme_MatchResult>_get_HasValue__;
    uVar9 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)Method_OVRControllerTest_<>c_<Start>b__4_16__) {
          puVar4 = (undefined8 *)(lVar13 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_036855bc;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar4 = (undefined8 *)
             FUN_01ecb238(plVar5,*(long *)Method_OVRControllerTest_<>c_<Start>b__4_16__,0);
LAB_036855bc:
    puVar2 = Method_OVRControllerTest_<>c_<Start>b__4_17__;
    plVar5 = (long *)(*(code *)*puVar4)(plVar5,puVar4[1]);
    do {
      if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar13 = *plVar5;
      uVar9 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) ==
              *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__) {
            puVar4 = (undefined8 *)(lVar13 + (long)*piVar10 * 0x10 + 0x138);
            goto OVRPlugin__SetBoundaryVisible;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar4 = (undefined8 *)
               FUN_01ecb238(plVar5,*(long *)
                                    Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__
                            ,0);
OVRPlugin__SetBoundaryVisible:
      uVar9 = (*(code *)*puVar4)(plVar5,puVar4[1]);
      if ((uVar9 & 1) == 0) {
        if (plVar5 == (long *)0x0) goto LAB_03685720;
        lVar13 = *plVar5;
        uVar9 = (ulong)*(ushort *)(lVar13 + 0x12e);
        if (uVar9 == 0) goto LAB_036856f8;
        piVar10 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        goto LAB_036856e0;
      }
      lVar13 = *plVar5;
      uVar9 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)puVar2) {
            puVar4 = (undefined8 *)(lVar13 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_03685690;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar4 = (undefined8 *)FUN_01ecb238(plVar5,*(long *)puVar2,0);
LAB_03685690:
      lVar13 = (*(code *)*puVar4)(plVar5,puVar4[1]);
      if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      uVar14 = FUN_03405678(uVar14,*(undefined8 *)(lVar13 + 0x18),0);
    } while( true );
  }
  goto LAB_03685850;
LAB_036853d0:
  lVar13 = 0;
  goto code_r0x036853d4;
  while( true ) {
    uVar9 = uVar9 - 1;
    piVar10 = piVar10 + 4;
    if (uVar9 == 0) break;
LAB_036856e0:
    if (*(long *)(piVar10 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar4 = (undefined8 *)(lVar13 + (long)*piVar10 * 0x10 + 0x138);
      goto LAB_03685714;
    }
  }
LAB_036856f8:
  puVar4 = (undefined8 *)
           FUN_01ecb238(plVar5,*(long *)
                                Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                        ,0);
LAB_03685714:
  (*(code *)*puVar4)(plVar5,puVar4[1]);
LAB_03685720:
  if (*(long *)(unaff_x19 + 0x30) != 0) {
    plVar5 = *(long **)(unaff_x19 + 0x98);
    in_stack_00000028._4_4_ = FUN_0367e580();
    uVar6 = thunk_FUN_01f113fc(*(undefined8 *)Method_OVRControllerTest_<>c_<Start>b__4_14__,
                               (long)&stack0x00000028 + 4);
    uVar14 = FUN_0340f2f0(*(undefined8 *)Method_OVRControllerTest_<>c_<Start>b__4_23__,uVar6,uVar14,
                          0);
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 0x558))(plVar5,uVar14,*(undefined8 *)(*plVar5 + 0x560));
      return;
    }
  }
LAB_03685850:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


