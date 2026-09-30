/*
FUNCTION_NAME: OVRPlugin$$DestroyPassthroughColorLut
ENTRY_POINT: 03684f68
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 135
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;frame_behavior
EVIDENCE: strong_eye_source_hits_16;weak_xr_or_state_hits_17;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_21;paired_field_refs_with_eye_source;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_16
*/


/* WARNING: Removing unreachable block (ram,0x0368572c) */
/* WARNING: Removing unreachable block (ram,0x03685840) */
/* WARNING: Removing unreachable block (ram,0x03685548) */
/* WARNING: Removing unreachable block (ram,0x03685860) */
/* WARNING: Removing unreachable block (ram,0x03685858) */

void OVRPlugin__DestroyPassthroughColorLut(void)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long lVar9;
  undefined4 *puVar10;
  ulong uVar11;
  ulong uVar12;
  int *piVar13;
  long unaff_x19;
  undefined8 unaff_x21;
  long lVar14;
  undefined8 uVar15;
  long *plVar16;
  long *unaff_x23;
  float fVar17;
  undefined8 unaff_d9;
  ulong unaff_d10;
  undefined8 uStack0000000000000010;
  undefined8 in_stack_00000028;
  
  *(undefined8 *)(*(long *)(*unaff_x23 + 0xb8) + 8) = unaff_x21;
  thunk_FUN_01f51358();
  uVar5 = FUN_022f9efc();
  lVar9 = *unaff_x23;
  if (*(int *)(lVar9 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c(lVar9);
    lVar9 = *unaff_x23;
  }
  puVar2 = Method_OVRControllerTest_<>c_<Start>b__4_10__;
  lVar14 = *(long *)(*(long *)(lVar9 + 0xb8) + 0x18);
  if (lVar14 == 0) {
    if (*(int *)(lVar9 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c(lVar9);
      lVar9 = *unaff_x23;
    }
    uVar15 = **(undefined8 **)(lVar9 + 0xb8);
    lVar14 = thunk_FUN_01f117cc(*(undefined8 *)Method_OVRControllerTest_<>c_<Start>b__4_11__);
    FUN_02e6c748(lVar14,uVar15,*(undefined8 *)Method_OVRControllerTest_<>c_<Start>b__4_2__,0);
    plVar6 = (long *)(*(long *)(*unaff_x23 + 0xb8) + 0x18);
    *plVar6 = lVar14;
    thunk_FUN_01f51358(plVar6,lVar14);
  }
  plVar6 = (long *)FUN_02300e64(uVar5,lVar14,*(undefined8 *)puVar2);
  if (plVar6 != (long *)0x0) {
    lVar9 = *plVar6;
    uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar11 != 0) {
      piVar13 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *(long *)Method_OVRControllerTest_<>c_<Start>b__4_15__) {
          puVar7 = (undefined8 *)(lVar9 + (long)*piVar13 * 0x10 + 0x138);
          goto LAB_03685084;
        }
        uVar11 = uVar11 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar11 != 0);
    }
    puVar7 = (undefined8 *)
             FUN_01ecb238(plVar6,*(long *)Method_OVRControllerTest_<>c_<Start>b__4_15__,0);
LAB_03685084:
    plVar6 = (long *)(*(code *)*puVar7)(plVar6,puVar7[1]);
    puVar4 = Method_OVRControllerTest_<>c_<Start>b__4_13__;
    puVar3 = Method_UnityEngine_Splines_SplineDataDictionary<float>_TryGetValue__;
    puVar2 = Method_Oculus_Platform_Message<LaunchReportFlowResult>__ctor__;
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
LAB_036850b8:
    lVar9 = *plVar6;
    uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar11 != 0) {
      piVar13 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__) {
          puVar7 = (undefined8 *)(lVar9 + (long)*piVar13 * 0x10 + 0x138);
          goto LAB_03685110;
        }
        uVar11 = uVar11 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar11 != 0);
    }
    puVar7 = (undefined8 *)
             FUN_01ecb238(plVar6,*(long *)
                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__
                          ,0);
LAB_03685110:
    uVar11 = (*(code *)*puVar7)(plVar6,puVar7[1]);
    if ((uVar11 & 1) != 0) {
      lVar9 = *plVar6;
      uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar11 != 0) {
        piVar13 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == *(long *)Method_OVRControllerTest_<>c_<Start>b__4_18__) {
            puVar7 = (undefined8 *)(lVar9 + (long)*piVar13 * 0x10 + 0x138);
            goto LAB_03685178;
          }
          uVar11 = uVar11 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar11 != 0);
      }
      puVar7 = (undefined8 *)
               FUN_01ecb238(plVar6,*(long *)Method_OVRControllerTest_<>c_<Start>b__4_18__,0);
LAB_03685178:
      lVar9 = (*(code *)*puVar7)(plVar6,puVar7[1]);
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      plVar16 = *(long **)(lVar9 + 0x18);
      if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar14 = *plVar16;
      uVar11 = (ulong)*(ushort *)(lVar14 + 0x12e);
      if (uVar11 != 0) {
        piVar13 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) ==
              *(long *)Method_Unity_VisualScripting_MultiplicationHandler_<>c_<_ctor>b__0_85__) {
            puVar7 = (undefined8 *)(lVar14 + (long)*piVar13 * 0x10 + 0x138);
            goto LAB_036851e8;
          }
          uVar11 = uVar11 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar11 != 0);
      }
      puVar7 = (undefined8 *)
               FUN_01ecb238(plVar16,*(long *)
                                     Method_Unity_VisualScripting_MultiplicationHandler_<>c_<_ctor>b__0_85__
                            ,0);
LAB_036851e8:
      plVar16 = (long *)(*(code *)*puVar7)(plVar16,puVar7[1]);
      uVar11 = unaff_d10;
      uStack0000000000000010 = unaff_d9;
      if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      do {
        lVar14 = *plVar16;
        uVar12 = (ulong)*(ushort *)(lVar14 + 0x12e);
        if (uVar12 != 0) {
          piVar13 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) ==
                *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__)
            {
              puVar7 = (undefined8 *)(lVar14 + (long)*piVar13 * 0x10 + 0x138);
              goto LAB_0368525c;
            }
            uVar12 = uVar12 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar12 != 0);
        }
        puVar7 = (undefined8 *)
                 FUN_01ecb238(plVar16,*(long *)
                                       Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__
                              ,0);
LAB_0368525c:
        uVar12 = (*(code *)*puVar7)(plVar16,puVar7[1]);
        if ((uVar12 & 1) == 0) goto LAB_036853d0;
        lVar14 = *plVar16;
        uVar12 = (ulong)*(ushort *)(lVar14 + 0x12e);
        if (uVar12 != 0) {
          piVar13 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) ==
                *(long *)Method_Unity_VisualScripting_MultiplicationHandler_<>c_<_ctor>b__0_86__) {
              puVar7 = (undefined8 *)(lVar14 + (long)*piVar13 * 0x10 + 0x138);
              goto LAB_036852c0;
            }
            uVar12 = uVar12 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar12 != 0);
        }
        puVar7 = (undefined8 *)
                 FUN_01ecb238(plVar16,*(long *)
                                       Method_Unity_VisualScripting_MultiplicationHandler_<>c_<_ctor>b__0_86__
                              ,0);
LAB_036852c0:
        uVar8 = (*(code *)*puVar7)(plVar16,puVar7[1]);
        uVar5 = *(undefined8 *)(unaff_x19 + 0x60);
        uVar15 = *(undefined8 *)(unaff_x19 + 0x68);
        if (*(int *)(*(long *)Method_Oculus_Platform_Message<LivestreamingStatus>_get_Data__ + 0xe0)
            == 0) {
          thunk_FUN_01ee6d7c();
        }
        lVar14 = FUN_023aa90c(uVar5,uVar15,*(undefined8 *)puVar3);
        if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        lVar14 = FUN_023361c8(lVar14,*(undefined8 *)puVar4);
        if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        uVar1 = *(undefined4 *)(lVar9 + 0x10);
        uVar5 = *(undefined8 *)(unaff_x19 + 0x28);
        *(undefined8 *)(lVar14 + 0x68) = uVar8;
        *(undefined1 *)(lVar14 + 0x70) = 1;
        *(undefined4 *)(lVar14 + 100) = uVar1;
        thunk_FUN_01f51358((undefined8 *)(lVar14 + 0x68),uVar8);
        *(undefined8 *)(lVar14 + 0x50) = uVar5;
        thunk_FUN_01f51358((undefined8 *)(lVar14 + 0x50),uVar5);
        lVar14 = FUN_04070398(lVar14,0);
        if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        FUN_0407da88(*(undefined4 *)(unaff_x19 + 0x88),*(undefined4 *)(unaff_x19 + 0x8c),
                     *(undefined4 *)(unaff_x19 + 0x90),lVar14,0);
        if (DAT_0482ee0f == '\0') {
          thunk_FUN_01efb3a4(puVar2);
          DAT_0482ee0f = '\x01';
        }
        puVar10 = *(undefined4 **)(*(long *)puVar2 + 0xb8);
        FUN_0407d6f4(*puVar10,puVar10[1],puVar10[2],puVar10[3],lVar14,0);
        fVar17 = (float)((ulong)uStack0000000000000010 >> 0x20);
        FUN_0407c958(uStack0000000000000010,fVar17,uVar11,lVar14,0);
        uVar11 = (ulong)(uint)((float)uVar11 + *(float *)(unaff_x19 + 0x84));
        uStack0000000000000010 =
             CONCAT44(fVar17 + (float)((ulong)*(undefined8 *)(unaff_x19 + 0x7c) >> 0x20),
                      (float)uStack0000000000000010 + (float)*(undefined8 *)(unaff_x19 + 0x7c));
      } while( true );
    }
    if (plVar6 == (long *)0x0) goto LAB_0368553c;
    lVar9 = *plVar6;
    uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar11 == 0) goto LAB_03685514;
    piVar13 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
    goto LAB_036854fc;
  }
  goto LAB_03685850;
LAB_036853d0:
  if (plVar16 != (long *)0x0) {
    lVar9 = *plVar16;
    uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar11 != 0) {
      piVar13 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar7 = (undefined8 *)(lVar9 + (long)*piVar13 * 0x10 + 0x138);
          goto LAB_0368542c;
        }
        uVar11 = uVar11 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar11 != 0);
    }
    puVar7 = (undefined8 *)
             FUN_01ecb238(plVar16,*(long *)
                                   Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                          ,0);
LAB_0368542c:
    (*(code *)*puVar7)(plVar16,puVar7[1]);
  }
  unaff_d9 = CONCAT44((float)((ulong)unaff_d9 >> 0x20) +
                      (float)((ulong)*(undefined8 *)(unaff_x19 + 0x70) >> 0x20),
                      (float)unaff_d9 + (float)*(undefined8 *)(unaff_x19 + 0x70));
  unaff_d10 = (ulong)(uint)((float)unaff_d10 + *(float *)(unaff_x19 + 0x78));
  goto LAB_036850b8;
  while( true ) {
    uVar11 = uVar11 - 1;
    piVar13 = piVar13 + 4;
    if (uVar11 == 0) break;
LAB_036854fc:
    if (*(long *)(piVar13 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar7 = (undefined8 *)(lVar9 + (long)*piVar13 * 0x10 + 0x138);
      goto LAB_03685530;
    }
  }
LAB_03685514:
  puVar7 = (undefined8 *)
           FUN_01ecb238(plVar6,*(long *)
                                Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                        ,0);
LAB_03685530:
  (*(code *)*puVar7)(plVar6,puVar7[1]);
LAB_0368553c:
  if ((*(long *)(unaff_x19 + 0x30) != 0) &&
     (plVar6 = *(long **)(*(long *)(unaff_x19 + 0x30) + 0x40), plVar6 != (long *)0x0)) {
    lVar9 = *plVar6;
    uVar5 = *(undefined8 *)Method_System_Nullable<InputControlScheme_MatchResult>_get_HasValue__;
    uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar11 != 0) {
      piVar13 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *(long *)Method_OVRControllerTest_<>c_<Start>b__4_16__) {
          puVar7 = (undefined8 *)(lVar9 + (long)*piVar13 * 0x10 + 0x138);
          goto LAB_036855bc;
        }
        uVar11 = uVar11 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar11 != 0);
    }
    puVar7 = (undefined8 *)
             FUN_01ecb238(plVar6,*(long *)Method_OVRControllerTest_<>c_<Start>b__4_16__,0);
LAB_036855bc:
    puVar2 = Method_OVRControllerTest_<>c_<Start>b__4_17__;
    plVar6 = (long *)(*(code *)*puVar7)(plVar6,puVar7[1]);
    do {
      if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar9 = *plVar6;
      uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar11 != 0) {
        piVar13 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) ==
              *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__) {
            puVar7 = (undefined8 *)(lVar9 + (long)*piVar13 * 0x10 + 0x138);
            goto OVRPlugin__SetBoundaryVisible;
          }
          uVar11 = uVar11 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar11 != 0);
      }
      puVar7 = (undefined8 *)
               FUN_01ecb238(plVar6,*(long *)
                                    Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__
                            ,0);
OVRPlugin__SetBoundaryVisible:
      uVar11 = (*(code *)*puVar7)(plVar6,puVar7[1]);
      if ((uVar11 & 1) == 0) {
        if (plVar6 == (long *)0x0) goto LAB_03685720;
        lVar9 = *plVar6;
        uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar11 == 0) goto LAB_036856f8;
        piVar13 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        goto LAB_036856e0;
      }
      lVar9 = *plVar6;
      uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar11 != 0) {
        piVar13 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == *(long *)puVar2) {
            puVar7 = (undefined8 *)(lVar9 + (long)*piVar13 * 0x10 + 0x138);
            goto LAB_03685690;
          }
          uVar11 = uVar11 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar11 != 0);
      }
      puVar7 = (undefined8 *)FUN_01ecb238(plVar6,*(long *)puVar2,0);
LAB_03685690:
      lVar9 = (*(code *)*puVar7)(plVar6,puVar7[1]);
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      uVar5 = FUN_03405678(uVar5,*(undefined8 *)(lVar9 + 0x18),0);
    } while( true );
  }
  goto LAB_03685850;
  while( true ) {
    uVar11 = uVar11 - 1;
    piVar13 = piVar13 + 4;
    if (uVar11 == 0) break;
LAB_036856e0:
    if (*(long *)(piVar13 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar7 = (undefined8 *)(lVar9 + (long)*piVar13 * 0x10 + 0x138);
      goto LAB_03685714;
    }
  }
LAB_036856f8:
  puVar7 = (undefined8 *)
           FUN_01ecb238(plVar6,*(long *)
                                Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                        ,0);
LAB_03685714:
  (*(code *)*puVar7)(plVar6,puVar7[1]);
LAB_03685720:
  if (*(long *)(unaff_x19 + 0x30) != 0) {
    plVar6 = *(long **)(unaff_x19 + 0x98);
    in_stack_00000028._4_4_ = FUN_0367e580();
    uVar15 = thunk_FUN_01f113fc(*(undefined8 *)Method_OVRControllerTest_<>c_<Start>b__4_14__,
                                (long)&stack0x00000028 + 4);
    uVar5 = FUN_0340f2f0(*(undefined8 *)Method_OVRControllerTest_<>c_<Start>b__4_23__,uVar15,uVar5,0
                        );
    if (plVar6 != (long *)0x0) {
      (**(code **)(*plVar6 + 0x558))(plVar6,uVar5,*(undefined8 *)(*plVar6 + 0x560));
      return;
    }
  }
LAB_03685850:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


