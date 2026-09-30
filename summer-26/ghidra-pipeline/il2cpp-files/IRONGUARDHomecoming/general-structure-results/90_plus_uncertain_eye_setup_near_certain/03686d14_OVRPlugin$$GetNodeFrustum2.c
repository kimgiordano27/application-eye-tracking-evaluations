/*
FUNCTION_NAME: OVRPlugin$$GetNodeFrustum2
ENTRY_POINT: 03686d14
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 123
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;frame_behavior
EVIDENCE: strong_eye_source_hits_10;weak_xr_or_state_hits_11;validity_or_gating_hits_14;strong_pose_or_ray_construction_hits_16;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_10
*/


/* WARNING: Removing unreachable block (ram,0x03686e44) */

void OVRPlugin__GetNodeFrustum2(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined4 *puVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  undefined1 unaff_w19;
  long unaff_x20;
  long *unaff_x21;
  long *unaff_x22;
  long *unaff_x23;
  undefined8 uVar9;
  long lVar10;
  long unaff_x27;
  long unaff_x28;
  long unaff_x29;
  long *in_stack_00000008;
  
  plVar4 = (long *)__cxa_begin_catch();
  lVar10 = *plVar4;
  __cxa_end_catch();
code_r0x03686c24:
  if (unaff_x23 != (long *)0x0) {
    lVar6 = *unaff_x23;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_03686c7c;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar3 = (undefined8 *)
             FUN_01ecb238(unaff_x23,
                          *(long *)
                           Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__,
                          0);
LAB_03686c7c:
    (*(code *)*puVar3)(unaff_x23,puVar3[1]);
  }
  if (lVar10 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01eed990(lVar10);
  }
  if (in_stack_00000008 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar10 = *in_stack_00000008;
  uVar7 = (ulong)*(ushort *)(lVar10 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) ==
          *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__) {
        puVar3 = (undefined8 *)(lVar10 + (long)*piVar8 * 0x10 + 0x138);
        goto LAB_03686940;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar3 = (undefined8 *)
           FUN_01ecb238(in_stack_00000008,
                        *(long *)
                         Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__,
                        0);
LAB_03686940:
  uVar7 = (*(code *)*puVar3)(in_stack_00000008,puVar3[1]);
  if ((uVar7 & 1) != 0) {
    lVar10 = *in_stack_00000008;
    uVar7 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)Method_OVRControllerTest_<>c_<Start>b__4_18__) {
          puVar3 = (undefined8 *)(lVar10 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_036869a8;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar3 = (undefined8 *)
             FUN_01ecb238(in_stack_00000008,*(long *)Method_OVRControllerTest_<>c_<Start>b__4_18__,0
                         );
LAB_036869a8:
    lVar10 = (*(code *)*puVar3)(in_stack_00000008,puVar3[1]);
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    plVar4 = *(long **)(lVar10 + 0x18);
    if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar6 = *plVar4;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) ==
            *(long *)Method_Unity_VisualScripting_MultiplicationHandler_<>c_<_ctor>b__0_85__) {
          puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_03686a18;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar3 = (undefined8 *)
             FUN_01ecb238(plVar4,*(long *)
                                  Method_Unity_VisualScripting_MultiplicationHandler_<>c_<_ctor>b__0_85__
                          ,0);
LAB_03686a18:
    unaff_x23 = (long *)(*(code *)*puVar3)(plVar4,puVar3[1]);
    if (unaff_x23 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    do {
      lVar6 = *unaff_x23;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) ==
              *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__) {
            puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_03686a80;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar3 = (undefined8 *)
               FUN_01ecb238(unaff_x23,
                            *(long *)
                             Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__
                            ,0);
LAB_03686a80:
      uVar7 = (*(code *)*puVar3)(unaff_x23,puVar3[1]);
      if ((uVar7 & 1) == 0) goto LAB_03686c20;
      lVar6 = *unaff_x23;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) ==
              *(long *)Method_Unity_VisualScripting_MultiplicationHandler_<>c_<_ctor>b__0_86__) {
            puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_03686ae4;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar3 = (undefined8 *)
               FUN_01ecb238(unaff_x23,
                            *(long *)
                             Method_Unity_VisualScripting_MultiplicationHandler_<>c_<_ctor>b__0_86__
                            ,0);
LAB_03686ae4:
      uVar1 = (*(code *)*puVar3)(unaff_x23,puVar3[1]);
      uVar9 = *(undefined8 *)(unaff_x20 + 0x28);
      if (*(int *)(*(long *)Method_Oculus_Platform_Message<LivestreamingStatus>_get_Data__ + 0xe0)
          == 0) {
        thunk_FUN_01ee6d7c();
      }
      lVar6 = FUN_023aa7e0(uVar9,*(undefined8 *)
                                  Method_UnityEngine_UIElements_PointerEventBase<PointerUpEvent>__ctor__
                          );
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar2 = FUN_023361c8(lVar6,*(undefined8 *)Method_OVRControllerTest_<>c_<Start>b__4_7__);
      if (*(long *)(unaff_x20 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      FUN_0368465c(lVar2,*(undefined8 *)(*(long *)(unaff_x20 + 0x20) + 0x28),
                   *(undefined4 *)(lVar10 + 0x10),uVar1);
      lVar6 = FUN_04073258(lVar6,0);
      uVar1 = FUN_04070398();
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c(uVar1,uVar1);
      }
      FUN_0407db5c(lVar6,uVar1,0);
      if (*(char *)(unaff_x27 + 0xe10) == '\0') {
        thunk_FUN_01efb3a4();
        *(undefined1 *)(unaff_x27 + 0xe10) = unaff_w19;
      }
      lVar2 = *(long *)(*unaff_x21 + 0xb8);
      FUN_0407da88(*(undefined4 *)(lVar2 + 0xc),*(undefined4 *)(lVar2 + 0x10),
                   *(undefined4 *)(lVar2 + 0x14),lVar6,0);
      if (*(char *)(unaff_x29 + 0xe0f) == '\0') {
        thunk_FUN_01efb3a4();
        *(undefined1 *)(unaff_x29 + 0xe0f) = unaff_w19;
      }
      puVar5 = *(undefined4 **)(*unaff_x22 + 0xb8);
      FUN_0407d6f4(*puVar5,puVar5[1],puVar5[2],puVar5[3],lVar6,0);
      if (*(char *)(unaff_x28 + 0xe12) == '\0') {
        thunk_FUN_01efb3a4();
        *(undefined1 *)(unaff_x28 + 0xe12) = unaff_w19;
      }
      puVar5 = *(undefined4 **)(*unaff_x21 + 0xb8);
      FUN_0407c958(*puVar5,puVar5[1],puVar5[2],lVar6,0);
    } while( true );
  }
  if (in_stack_00000008 == (long *)0x0) {
    return;
  }
  lVar10 = *in_stack_00000008;
  uVar7 = (ulong)*(ushort *)(lVar10 + 0x12e);
  if (uVar7 == 0) goto LAB_03686d68;
  piVar8 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
  goto LAB_03686d50;
LAB_03686c20:
  lVar10 = 0;
  goto code_r0x03686c24;
  while( true ) {
    uVar7 = uVar7 - 1;
    piVar8 = piVar8 + 4;
    if (uVar7 == 0) break;
LAB_03686d50:
    if (*(long *)(piVar8 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar3 = (undefined8 *)(lVar10 + (long)*piVar8 * 0x10 + 0x138);
      goto LAB_03686d84;
    }
  }
LAB_03686d68:
  puVar3 = (undefined8 *)
           FUN_01ecb238(in_stack_00000008,
                        *(long *)
                         Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__,0)
  ;
LAB_03686d84:
  (*(code *)*puVar3)(in_stack_00000008,puVar3[1]);
  return;
}


