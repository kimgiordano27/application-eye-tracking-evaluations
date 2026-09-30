/*
FUNCTION_NAME: FUN_03a69024
ENTRY_POINT: 03a69024
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 117
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_9;weak_xr_or_state_hits_13;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_18;functionality_eye_api_context_without_clear_sink_hits_9
*/


/* WARNING: Removing unreachable block (ram,0x03a69d48) */
/* WARNING: Removing unreachable block (ram,0x03a68f34) */
/* WARNING: Removing unreachable block (ram,0x03a69d10) */
/* WARNING: Removing unreachable block (ram,0x03a69af0) */
/* WARNING: Removing unreachable block (ram,0x03a69a20) */

ulong FUN_03a69024(long param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  byte bVar3;
  undefined *puVar4;
  int iVar5;
  int iVar6;
  long *plVar7;
  long *plVar8;
  ulong uVar9;
  undefined8 *puVar10;
  long *plVar11;
  uint extraout_w8;
  uint uVar12;
  long lVar13;
  long in_x9;
  int *piVar14;
  long *in_x10;
  long unaff_x19;
  long lVar15;
  long unaff_x21;
  long *unaff_x22;
  undefined8 unaff_x24;
  int unaff_w26;
  int unaff_w28;
  int unaff_w29;
  float unaff_s8;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000030;
  long in_stack_00000038;
  long in_stack_00000040;
  long *in_stack_00000048;
  long *in_stack_00000050;
  char cStack0000000000000068;
  byte bStack000000000000006c;
  
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 03a68fc8 with catch @ 03a69024
                        */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 03a68fdc with catch @ 03a69028
                        */
  if (in_x9 != 0) {
    piVar14 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar14 + -2) == *in_x10) {
        puVar10 = (undefined8 *)(param_1 + (long)*piVar14 * 0x10 + 0x138);
        goto LAB_03a69068;
      }
                    /* try { // try from 03a69040 to 03b69057 has its CatchHandler @ 03a69088 */
      in_x9 = in_x9 + -1;
      piVar14 = piVar14 + 4;
    } while (in_x9 != 0);
  }
  puVar10 = (undefined8 *)FUN_01ecb238();
                    /* try { // try from 03a69058 to 03b69077 has its CatchHandler @ 03a68f3c */
LAB_03a69068:
  (*(code *)*puVar10)();
  if (unaff_x21 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01eed990();
  }
                    /* try { // try from 03a69078 to 03b69087 has its CatchHandler @ 03a69088 */
  if (unaff_w26 == 1) {
    plVar11 = (long *)__cxa_begin_catch();
                    /* catch() { ... } // from try @ 03a69040 with catch @ 03a69088
                       catch() { ... } // from try @ 03a69078 with catch @ 03a69088 */
    lVar15 = *plVar11;
                    /* try { // try from 03a6908c to 03b6908f has its CatchHandler @ 03a69098 */
    __cxa_end_catch();
    iVar6 = 0;
                    /* try { // try from 03a69090 to 03b6909b has its CatchHandler @ 03a68f3c */
    while( true ) {
      if (cStack0000000000000068 != '\0') {
        Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_HingeJoint_op_Implicit
                  (in_stack_00000030,0);
      }
      if (lVar15 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01eed990(lVar15);
      }
      if ((iVar6 != 0xb) && (iVar6 != 0)) break;
      uVar1 = *(undefined4 *)(unaff_x19 + 0x1c);
      uVar2 = *(undefined4 *)(unaff_x19 + 0x20);
      if (*(int *)(*(long *)Method_Oculus_Platform_Message<LeaderboardList>__ctor__ + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      iVar5 = FUN_0356bd30(uVar2,uVar1,0);
      iVar6 = -0x80000000;
      if (unaff_s8 * (float)unaff_w29 != INFINITY) {
        iVar6 = (int)(unaff_s8 * (float)unaff_w29);
      }
      iVar6 = FUN_0356bd30(iVar6,iVar5 + -1,0);
      if (iVar6 < unaff_w29) {
        uVar9 = FUN_03a690a0();
        return uVar9;
      }
      if (in_stack_00000050 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar15 = *in_stack_00000050;
      uVar9 = (ulong)*(ushort *)(lVar15 + 0x12e);
      if (uVar9 != 0) {
        piVar14 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == *unaff_x22) {
            puVar10 = (undefined8 *)(lVar15 + (long)*piVar14 * 0x10 + 0x138);
            goto LAB_03a689fc;
          }
          uVar9 = uVar9 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar9 != 0);
      }
      puVar10 = (undefined8 *)FUN_01ecb238(in_stack_00000050,*unaff_x22,0);
LAB_03a689fc:
      uVar9 = (*(code *)*puVar10)(in_stack_00000050,puVar10[1]);
      if ((uVar9 & 1) == 0) {
        lVar15 = 0;
        iVar6 = 0x17;
        goto LAB_03a69820;
      }
      lVar15 = *in_stack_00000050;
      uVar9 = (ulong)*(ushort *)(lVar15 + 0x12e);
      if (uVar9 != 0) {
        piVar14 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == *unaff_x22) {
            puVar10 = (undefined8 *)(lVar15 + (long)(*piVar14 + 1) * 0x10 + 0x138);
            goto LAB_03a68a60;
          }
          uVar9 = uVar9 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar9 != 0);
      }
      puVar10 = (undefined8 *)FUN_01ecb238(in_stack_00000050,*unaff_x22,1);
LAB_03a68a60:
      plVar11 = (long *)(*(code *)*puVar10)(in_stack_00000050,puVar10[1]);
      if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      if (*(long *)(*plVar11 + 0x40) !=
          *(long *)(*(long *)Method_System_Linq_Enumerable_ToList<BezierKnot>__ + 0x40)) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08cfc();
      }
      lVar15 = thunk_FUN_01f11920();
      if (in_stack_00000038 == 0) {
        plVar11 = *(long **)(lVar15 + 8);
        if (plVar11 == (long *)0x0) goto LAB_03a69a34;
        bVar3 = *(byte *)(*(long *)StringLiteral_7780 + 0x130);
        if ((*(byte *)(*plVar11 + 0x130) < bVar3) ||
           (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar3 * 8 + -8) !=
            *(long *)StringLiteral_7780)) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08cfc(plVar11);
        }
      }
      else {
        plVar11 = *(long **)(unaff_x19 + 0x10);
        if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        plVar11 = (long *)(**(code **)(*plVar11 + 0x308))
                                    (plVar11,in_stack_00000038,*(undefined8 *)(*plVar11 + 0x310));
        if (plVar11 == (long *)0x0) {
LAB_03a69a34:
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        bVar3 = *(byte *)(*(long *)StringLiteral_7780 + 0x130);
        if (*(byte *)(*plVar11 + 0x130) < bVar3) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08cfc(plVar11);
        }
        if (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar3 * 8 + -8) !=
            *(long *)StringLiteral_7780) {
          uVar9 = FUN_03a69a28();
          return uVar9;
        }
      }
      plVar7 = (long *)plVar11[2];
      if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      in_stack_00000030 = (**(code **)(*plVar7 + 0x308))(plVar7,*(undefined8 *)(*plVar7 + 0x310));
      cStack0000000000000068 = '\0';
      FUN_035ce230(in_stack_00000030,&stack0x00000068,0);
      plVar11 = (long *)plVar11[2];
      if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      plVar11 = (long *)(**(code **)(*plVar11 + 0x2c8))(plVar11,*(undefined8 *)(*plVar11 + 0x2d0));
      if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar15 = *plVar11;
      uVar9 = (ulong)*(ushort *)(lVar15 + 0x12e);
      if (uVar9 != 0) {
        piVar14 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) ==
              *(long *)
               Method_System_Collections_Generic_CollectionExtensions_GetValueOrDefault<string,_LocalDataStoreSlot>__
             ) {
            puVar10 = (undefined8 *)(lVar15 + (long)*piVar14 * 0x10 + 0x138);
            goto LAB_03a68be0;
          }
          uVar9 = uVar9 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar9 != 0);
      }
      puVar10 = (undefined8 *)
                FUN_01ecb238(plVar11,*(long *)
                                      Method_System_Collections_Generic_CollectionExtensions_GetValueOrDefault<string,_LocalDataStoreSlot>__
                             ,0);
LAB_03a68be0:
      plVar7 = (long *)(*(code *)*puVar10)(plVar11,puVar10[1]);
      unaff_w29 = 0;
      plVar11 = in_stack_00000048;
      lVar15 = in_stack_00000040;
LAB_03a68c00:
      in_stack_00000040 = lVar15;
      in_stack_00000048 = plVar11;
      if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar15 = *plVar7;
      uVar9 = (ulong)*(ushort *)(lVar15 + 0x12e);
      if (uVar9 != 0) {
        piVar14 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == *unaff_x22) {
            puVar10 = (undefined8 *)(lVar15 + (long)*piVar14 * 0x10 + 0x138);
            goto LAB_03a68c50;
          }
          uVar9 = uVar9 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar9 != 0);
      }
      puVar10 = (undefined8 *)FUN_01ecb238(plVar7,*unaff_x22,0);
LAB_03a68c50:
      uVar9 = (*(code *)*puVar10)(plVar7,puVar10[1]);
      if ((uVar9 & 1) != 0) {
        lVar15 = *plVar7;
        uVar9 = (ulong)*(ushort *)(lVar15 + 0x12e);
        if (uVar9 != 0) {
          piVar14 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == *unaff_x22) {
              puVar10 = (undefined8 *)(lVar15 + (long)(*piVar14 + 1) * 0x10 + 0x138);
              goto LAB_03a68cb0;
            }
            uVar9 = uVar9 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar9 != 0);
        }
        puVar10 = (undefined8 *)FUN_01ecb238(plVar7,*unaff_x22,1);
LAB_03a68cb0:
        plVar8 = (long *)(*(code *)*puVar10)(plVar7,puVar10[1]);
        if (plVar8 != (long *)0x0) {
          bVar3 = *(byte *)(*(long *)StringLiteral_7779 + 0x130);
          if ((*(byte *)(*plVar8 + 0x130) < bVar3) ||
             (*(long *)(*(long *)(*plVar8 + 200) + (ulong)bVar3 * 8 + -8) !=
              *(long *)StringLiteral_7779)) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08cfc(plVar8);
          }
        }
        iVar6 = FUN_03a69d80(plVar8,plVar8);
        unaff_w28 = iVar6 + unaff_w28;
        *(int *)(unaff_x19 + 0x24) = *(int *)(unaff_x19 + 0x24) - iVar6;
        if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        plVar11 = (long *)plVar8[3];
        if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        iVar6 = (**(code **)(*plVar11 + 0x298))(plVar11,*(undefined8 *)(*plVar11 + 0x2a0));
        plVar11 = (long *)plVar8[3];
        unaff_w29 = iVar6 + unaff_w29;
        if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        iVar6 = (**(code **)(*plVar11 + 0x298))(plVar11,*(undefined8 *)(*plVar11 + 0x2a0));
        plVar11 = in_stack_00000048;
        lVar15 = in_stack_00000040;
        if (0 < iVar6) {
          if ((DAT_04838d78 & 1) == 0) {
            thunk_FUN_01efb3a4(Method_System_Array_Resize<InputDevice_ControlBitRangeNode>__);
            DAT_04838d78 = 1;
          }
          lVar15 = plVar8[4];
          if (*(int *)(*(long *)Method_System_Array_Resize<InputDevice_ControlBitRangeNode>__ + 0xe0
                      ) == 0) {
            thunk_FUN_01ee6d7c();
          }
          uVar9 = FUN_0354ff9c(lVar15,in_stack_00000040,0);
          plVar11 = plVar8;
          if ((uVar9 & 1) == 0) {
            plVar11 = in_stack_00000048;
            lVar15 = in_stack_00000040;
          }
        }
        goto LAB_03a68c00;
      }
      lVar15 = 0;
      iVar6 = 0xb;
      plVar11 = (long *)thunk_FUN_01f116d0(plVar7,*(undefined8 *)
                                                                                                      
                                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                                          );
      if (plVar11 != (long *)0x0) {
        lVar13 = *plVar11;
        uVar9 = (ulong)*(ushort *)(lVar13 + 0x12e);
        if (uVar9 != 0) {
          piVar14 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) ==
                *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
              puVar10 = (undefined8 *)(lVar13 + (long)*piVar14 * 0x10 + 0x138);
              goto LAB_03a68e44;
            }
            uVar9 = uVar9 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar9 != 0);
        }
        puVar10 = (undefined8 *)
                  FUN_01ecb238(plVar11,*(long *)
                                        Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                               ,0);
LAB_03a68e44:
        (*(code *)*puVar10)(plVar11,puVar10[1]);
      }
    }
    lVar15 = 0;
LAB_03a69820:
    plVar11 = (long *)thunk_FUN_01f116d0(in_stack_00000050,
                                         *(undefined8 *)
                                          Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                                        );
    if (plVar11 != (long *)0x0) {
      lVar13 = *plVar11;
      uVar9 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar9 != 0) {
        piVar14 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) ==
              *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
            puVar10 = (undefined8 *)(lVar13 + (long)*piVar14 * 0x10 + 0x138);
            goto LAB_03a69894;
          }
          uVar9 = uVar9 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar9 != 0);
      }
      puVar10 = (undefined8 *)
                FUN_01ecb238(plVar11,*(long *)
                                      Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                             ,0);
LAB_03a69894:
      (*(code *)*puVar10)(plVar11,puVar10[1]);
    }
    if (lVar15 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01eed990(lVar15);
    }
    lVar13 = 0;
    lVar15 = 0;
    if (iVar6 == 0) goto LAB_03a698b0;
  }
  else {
    if (cStack0000000000000068 != '\0') {
      Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_HingeJoint_op_Implicit
                (in_stack_00000030,0);
    }
    if (unaff_w26 == 1) {
      plVar11 = (long *)__cxa_begin_catch(unaff_x24);
      lVar15 = *plVar11;
      __cxa_end_catch();
      iVar6 = 0;
      goto LAB_03a69820;
    }
    plVar11 = (long *)thunk_FUN_01f116d0(in_stack_00000050,
                                         *(undefined8 *)
                                          Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                                        );
    if (plVar11 != (long *)0x0) {
      lVar15 = *plVar11;
      uVar9 = (ulong)*(ushort *)(lVar15 + 0x12e);
      if (uVar9 != 0) {
        piVar14 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) ==
              *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
            puVar10 = (undefined8 *)(lVar15 + (long)*piVar14 * 0x10 + 0x138);
            goto LAB_03a69cd8;
          }
          uVar9 = uVar9 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar9 != 0);
      }
      puVar10 = (undefined8 *)
                FUN_01ecb238(plVar11,*(long *)
                                      Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                             ,0);
LAB_03a69cd8:
      (*(code *)*puVar10)(plVar11,puVar10[1]);
    }
    if (unaff_w26 != 1) {
      if (bStack000000000000006c != 0) {
        Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_HingeJoint_op_Implicit
                  (in_stack_00000008,0);
      }
                    /* WARNING: Subroutine does not return */
      FUN_01fbfd14(unaff_x24);
    }
    plVar11 = (long *)__cxa_begin_catch(unaff_x24);
    lVar13 = *plVar11;
    __cxa_end_catch();
LAB_03a698b0:
    iVar6 = 0;
    lVar15 = lVar13;
  }
  uVar12 = (uint)bStack000000000000006c;
  if (bStack000000000000006c != 0) {
    Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_HingeJoint_op_Implicit
              (in_stack_00000008,0);
    uVar12 = extraout_w8;
  }
  puVar4 = Method_System_Array_Resize<InputDevice_ControlBitRangeNode>__;
  if (lVar15 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01eed990(lVar15);
  }
  if (iVar6 != 0x17) {
    if (iVar6 == 0x16) {
      uVar12 = (uint)(cStack0000000000000068 != '\0');
      goto LAB_03a697e8;
    }
    if (iVar6 != 0) goto LAB_03a697e8;
  }
  uVar12 = 1;
  if ((in_stack_00000038 == 0) && (unaff_w28 == 0)) {
    lVar15 = *(long *)Method_System_Array_Resize<InputDevice_ControlBitRangeNode>__;
    if (*(int *)(lVar15 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
      lVar15 = *(long *)puVar4;
    }
    uVar9 = FUN_0354fecc(in_stack_00000040,*(undefined8 *)(*(long *)(lVar15 + 0xb8) + 0x18),0);
    if ((uVar9 & 1) == 0) {
      bStack000000000000006c = '\0';
      FUN_035ce230(in_stack_00000048,(long)&stack0x00000068 + 4,0);
      if (*(int *)(unaff_x19 + 0x1c) <= *(int *)(unaff_x19 + 0x24)) {
        if (in_stack_00000048 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        do {
          plVar11 = (long *)in_stack_00000048[3];
          if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          iVar6 = (**(code **)(*plVar11 + 0x298))(plVar11,*(undefined8 *)(*plVar11 + 0x2a0));
          if (iVar6 < 1) break;
          plVar11 = (long *)in_stack_00000048[3];
          if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          (**(code **)(*plVar11 + 0x3d8))(plVar11,0,*(undefined8 *)(*plVar11 + 0x3e0));
          iVar6 = *(int *)(unaff_x19 + 0x24) + -1;
          *(int *)(unaff_x19 + 0x24) = iVar6;
        } while (*(int *)(unaff_x19 + 0x1c) <= iVar6);
      }
      if (bStack000000000000006c != '\0') {
        Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_HingeJoint_op_Implicit
                  (in_stack_00000048,0);
      }
      uVar12 = 1;
    }
    else {
      uVar12 = 0;
    }
  }
LAB_03a697e8:
  return (ulong)(uVar12 & 1);
}


