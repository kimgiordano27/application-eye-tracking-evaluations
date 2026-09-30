/*
FUNCTION_NAME: OVRPlugin$$GetPassthroughCapabilityFlags
ENTRY_POINT: 03685230
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 123
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;frame_behavior
EVIDENCE: strong_eye_source_hits_15;weak_xr_or_state_hits_16;validity_or_gating_hits_20;strong_pose_or_ray_construction_hits_21;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_15
*/


/* WARNING: Removing unreachable block (ram,0x03685548) */
/* WARNING: Removing unreachable block (ram,0x03685858) */
/* WARNING: Removing unreachable block (ram,0x03685840) */
/* WARNING: Removing unreachable block (ram,0x0368572c) */
/* WARNING: Removing unreachable block (ram,0x03685860) */

void OVRPlugin__GetPassthroughCapabilityFlags(long param_1,undefined8 param_2,long param_3)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined1 in_ZR;
  undefined8 *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined4 *puVar8;
  ulong in_x9;
  int *in_x10;
  int *piVar9;
  long unaff_x19;
  undefined8 *unaff_x20;
  long *unaff_x21;
  long *plVar10;
  long *unaff_x22;
  long unaff_x23;
  undefined8 uVar11;
  long unaff_x27;
  undefined8 *unaff_x28;
  undefined1 unaff_w29;
  float fVar12;
  ulong unaff_d8;
  undefined8 unaff_d9;
  ulong unaff_d10;
  long *in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000028;
  
  do {
    if ((bool)in_ZR) {
      puVar3 = (undefined8 *)(param_1 + (long)*in_x10 * 0x10 + 0x138);
      goto LAB_0368525c;
    }
    in_x9 = in_x9 - 1;
    in_x10 = in_x10 + 4;
    if (in_x9 == 0) {
      do {
        puVar3 = (undefined8 *)FUN_01ecb238(unaff_x22,param_3,0);
LAB_0368525c:
        uVar4 = (*(code *)*puVar3)(unaff_x22,puVar3[1]);
        if ((uVar4 & 1) == 0) {
          if (unaff_x22 != (long *)0x0) {
            lVar7 = *unaff_x22;
            uVar4 = (ulong)*(ushort *)(lVar7 + 0x12e);
            if (uVar4 != 0) {
              piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
              do {
                if (*(long *)(piVar9 + -2) ==
                    *(long *)
                     Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
                  puVar3 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
                  goto LAB_0368542c;
                }
                uVar4 = uVar4 - 1;
                piVar9 = piVar9 + 4;
              } while (uVar4 != 0);
            }
            puVar3 = (undefined8 *)
                     FUN_01ecb238(unaff_x22,
                                  *(long *)
                                   Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                                  ,0);
LAB_0368542c:
            (*(code *)*puVar3)(unaff_x22,puVar3[1]);
          }
          unaff_d9 = CONCAT44((float)((ulong)unaff_d9 >> 0x20) +
                              (float)((ulong)*(undefined8 *)(unaff_x19 + 0x70) >> 0x20),
                              (float)unaff_d9 + (float)*(undefined8 *)(unaff_x19 + 0x70));
          unaff_d8 = (ulong)(uint)((float)unaff_d10 + *(float *)(unaff_x19 + 0x78));
          lVar7 = *in_stack_00000008;
          uVar4 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar4 != 0) {
            piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(long *)(piVar9 + -2) ==
                  *(long *)
                   Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__) {
                puVar3 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
                goto LAB_03685110;
              }
              uVar4 = uVar4 - 1;
              piVar9 = piVar9 + 4;
            } while (uVar4 != 0);
          }
          puVar3 = (undefined8 *)
                   FUN_01ecb238(in_stack_00000008,
                                *(long *)
                                 Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__
                                ,0);
LAB_03685110:
          uVar4 = (*(code *)*puVar3)(in_stack_00000008,puVar3[1]);
          if ((uVar4 & 1) == 0) {
            if (in_stack_00000008 == (long *)0x0) goto LAB_0368553c;
            lVar7 = *in_stack_00000008;
            uVar4 = (ulong)*(ushort *)(lVar7 + 0x12e);
            if (uVar4 == 0) goto LAB_03685514;
            piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            goto LAB_036854fc;
          }
          lVar7 = *in_stack_00000008;
          uVar4 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar4 != 0) {
            piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(long *)(piVar9 + -2) == *(long *)Method_OVRControllerTest_<>c_<Start>b__4_18__)
              {
                puVar3 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
                goto LAB_03685178;
              }
              uVar4 = uVar4 - 1;
              piVar9 = piVar9 + 4;
            } while (uVar4 != 0);
          }
          puVar3 = (undefined8 *)
                   FUN_01ecb238(in_stack_00000008,
                                *(long *)Method_OVRControllerTest_<>c_<Start>b__4_18__,0);
LAB_03685178:
          unaff_x23 = (*(code *)*puVar3)(in_stack_00000008,puVar3[1]);
          if (unaff_x23 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          plVar10 = *(long **)(unaff_x23 + 0x18);
          if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          lVar7 = *plVar10;
          uVar4 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar4 != 0) {
            piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(long *)(piVar9 + -2) ==
                  *(long *)Method_Unity_VisualScripting_MultiplicationHandler_<>c_<_ctor>b__0_85__)
              {
                puVar3 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
                goto LAB_036851e8;
              }
              uVar4 = uVar4 - 1;
              piVar9 = piVar9 + 4;
            } while (uVar4 != 0);
          }
          puVar3 = (undefined8 *)
                   FUN_01ecb238(plVar10,*(long *)
                                         Method_Unity_VisualScripting_MultiplicationHandler_<>c_<_ctor>b__0_85__
                                ,0);
LAB_036851e8:
          unaff_x22 = (long *)(*(code *)*puVar3)(plVar10,puVar3[1]);
          unaff_d10 = unaff_d8;
          in_stack_00000010 = unaff_d9;
          if (unaff_x22 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
        }
        else {
          lVar7 = *unaff_x22;
          uVar4 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar4 != 0) {
            piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(long *)(piVar9 + -2) ==
                  *(long *)Method_Unity_VisualScripting_MultiplicationHandler_<>c_<_ctor>b__0_86__)
              {
                puVar3 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
                goto LAB_036852c0;
              }
              uVar4 = uVar4 - 1;
              piVar9 = piVar9 + 4;
            } while (uVar4 != 0);
          }
          puVar3 = (undefined8 *)
                   FUN_01ecb238(unaff_x22,
                                *(long *)
                                 Method_Unity_VisualScripting_MultiplicationHandler_<>c_<_ctor>b__0_86__
                                ,0);
LAB_036852c0:
          uVar5 = (*(code *)*puVar3)(unaff_x22,puVar3[1]);
          uVar11 = *(undefined8 *)(unaff_x19 + 0x60);
          uVar6 = *(undefined8 *)(unaff_x19 + 0x68);
          if (*(int *)(*(long *)Method_Oculus_Platform_Message<LivestreamingStatus>_get_Data__ +
                      0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          lVar7 = FUN_023aa90c(uVar11,uVar6,*unaff_x20);
          if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          lVar7 = FUN_023361c8(lVar7,*unaff_x28);
          if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          uVar1 = *(undefined4 *)(unaff_x23 + 0x10);
          uVar11 = *(undefined8 *)(unaff_x19 + 0x28);
          *(undefined8 *)(lVar7 + 0x68) = uVar5;
          *(undefined1 *)(lVar7 + 0x70) = unaff_w29;
          *(undefined4 *)(lVar7 + 100) = uVar1;
          thunk_FUN_01f51358((undefined8 *)(lVar7 + 0x68),uVar5);
          *(undefined8 *)(lVar7 + 0x50) = uVar11;
          thunk_FUN_01f51358((undefined8 *)(lVar7 + 0x50),uVar11);
          lVar7 = FUN_04070398(lVar7,0);
          if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          FUN_0407da88(*(undefined4 *)(unaff_x19 + 0x88),*(undefined4 *)(unaff_x19 + 0x8c),
                       *(undefined4 *)(unaff_x19 + 0x90),lVar7,0);
          if (*(char *)(unaff_x27 + 0xe0f) == '\0') {
            thunk_FUN_01efb3a4();
            *(undefined1 *)(unaff_x27 + 0xe0f) = unaff_w29;
          }
          puVar8 = *(undefined4 **)(*unaff_x21 + 0xb8);
          FUN_0407d6f4(*puVar8,puVar8[1],puVar8[2],puVar8[3],lVar7,0);
          fVar12 = (float)((ulong)in_stack_00000010 >> 0x20);
          FUN_0407c958(in_stack_00000010,fVar12,unaff_d8,lVar7,0);
          unaff_d8 = (ulong)(uint)((float)unaff_d8 + *(float *)(unaff_x19 + 0x84));
          in_stack_00000010 =
               CONCAT44(fVar12 + (float)((ulong)*(undefined8 *)(unaff_x19 + 0x7c) >> 0x20),
                        (float)in_stack_00000010 + (float)*(undefined8 *)(unaff_x19 + 0x7c));
        }
        param_1 = *unaff_x22;
        in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
        param_3 = *(long *)
                   Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
      } while (in_x9 == 0);
      in_x10 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    }
    in_ZR = *(long *)(in_x10 + -2) == param_3;
  } while( true );
  while( true ) {
    uVar4 = uVar4 - 1;
    piVar9 = piVar9 + 4;
    if (uVar4 == 0) break;
LAB_036854fc:
    if (*(long *)(piVar9 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar3 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
      goto LAB_03685530;
    }
  }
LAB_03685514:
  puVar3 = (undefined8 *)
           FUN_01ecb238(in_stack_00000008,
                        *(long *)
                         Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__,0)
  ;
LAB_03685530:
  (*(code *)*puVar3)(in_stack_00000008,puVar3[1]);
LAB_0368553c:
  if ((*(long *)(unaff_x19 + 0x30) != 0) &&
     (plVar10 = *(long **)(*(long *)(unaff_x19 + 0x30) + 0x40), plVar10 != (long *)0x0)) {
    lVar7 = *plVar10;
    uVar11 = *(undefined8 *)Method_System_Nullable<InputControlScheme_MatchResult>_get_HasValue__;
    uVar4 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar4 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)Method_OVRControllerTest_<>c_<Start>b__4_16__) {
          puVar3 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_036855bc;
        }
        uVar4 = uVar4 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar4 != 0);
    }
    puVar3 = (undefined8 *)
             FUN_01ecb238(plVar10,*(long *)Method_OVRControllerTest_<>c_<Start>b__4_16__,0);
LAB_036855bc:
    puVar2 = Method_OVRControllerTest_<>c_<Start>b__4_17__;
    plVar10 = (long *)(*(code *)*puVar3)(plVar10,puVar3[1]);
    do {
      if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar7 = *plVar10;
      uVar4 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar4 != 0) {
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) ==
              *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__) {
            puVar3 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
            goto OVRPlugin__SetBoundaryVisible;
          }
          uVar4 = uVar4 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar4 != 0);
      }
      puVar3 = (undefined8 *)
               FUN_01ecb238(plVar10,*(long *)
                                     Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__
                            ,0);
OVRPlugin__SetBoundaryVisible:
      uVar4 = (*(code *)*puVar3)(plVar10,puVar3[1]);
      if ((uVar4 & 1) == 0) {
        if (plVar10 == (long *)0x0) goto LAB_03685720;
        lVar7 = *plVar10;
        uVar4 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar4 == 0) goto LAB_036856f8;
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        goto LAB_036856e0;
      }
      lVar7 = *plVar10;
      uVar4 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar4 != 0) {
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *(long *)puVar2) {
            puVar3 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_03685690;
          }
          uVar4 = uVar4 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar4 != 0);
      }
      puVar3 = (undefined8 *)FUN_01ecb238(plVar10,*(long *)puVar2,0);
LAB_03685690:
      lVar7 = (*(code *)*puVar3)(plVar10,puVar3[1]);
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      uVar11 = FUN_03405678(uVar11,*(undefined8 *)(lVar7 + 0x18),0);
    } while( true );
  }
  goto LAB_03685850;
  while( true ) {
    uVar4 = uVar4 - 1;
    piVar9 = piVar9 + 4;
    if (uVar4 == 0) break;
LAB_036856e0:
    if (*(long *)(piVar9 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar3 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
      goto LAB_03685714;
    }
  }
LAB_036856f8:
  puVar3 = (undefined8 *)
           FUN_01ecb238(plVar10,*(long *)
                                 Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                        ,0);
LAB_03685714:
  (*(code *)*puVar3)(plVar10,puVar3[1]);
LAB_03685720:
  if (*(long *)(unaff_x19 + 0x30) != 0) {
    plVar10 = *(long **)(unaff_x19 + 0x98);
    in_stack_00000028._4_4_ = FUN_0367e580();
    uVar6 = thunk_FUN_01f113fc(*(undefined8 *)Method_OVRControllerTest_<>c_<Start>b__4_14__,
                               (long)&stack0x00000028 + 4);
    uVar11 = FUN_0340f2f0(*(undefined8 *)Method_OVRControllerTest_<>c_<Start>b__4_23__,uVar6,uVar11,
                          0);
    if (plVar10 != (long *)0x0) {
      (**(code **)(*plVar10 + 0x558))(plVar10,uVar11,*(undefined8 *)(*plVar10 + 0x560));
      return;
    }
  }
LAB_03685850:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


