/*
FUNCTION_NAME: OVRPlugin$$set_systemDisplayFrequency
ENTRY_POINT: 03686a98
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 123
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;frame_behavior
EVIDENCE: strong_eye_source_hits_10;weak_xr_or_state_hits_11;validity_or_gating_hits_13;strong_pose_or_ray_construction_hits_16;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_10
*/


/* WARNING: Removing unreachable block (ram,0x03686e44) */
/* WARNING: Removing unreachable block (ram,0x03686c8c) */

void OVRPlugin__set_systemDisplayFrequency(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined4 *puVar5;
  ulong uVar6;
  int *piVar7;
  undefined **in_x10;
  undefined1 unaff_w19;
  long unaff_x20;
  long *unaff_x21;
  long *unaff_x22;
  long *plVar8;
  long *unaff_x23;
  long unaff_x24;
  undefined8 uVar9;
  long unaff_x27;
  long unaff_x28;
  long unaff_x29;
  long *in_stack_00000008;
  
code_r0x03686a98:
  uVar6 = (ulong)*(ushort *)(param_1 + 0x12e);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == *(long *)in_x10[0x13b]) {
        puVar1 = (undefined8 *)(param_1 + (long)*piVar7 * 0x10 + 0x138);
        goto LAB_03686ae4;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  puVar1 = (undefined8 *)FUN_01ecb238(unaff_x23,*(long *)in_x10[0x13b],0);
LAB_03686ae4:
  uVar2 = (*(code *)*puVar1)(unaff_x23,puVar1[1]);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x28);
  if (*(int *)(*(long *)Method_Oculus_Platform_Message<LivestreamingStatus>_get_Data__ + 0xe0) == 0)
  {
    thunk_FUN_01ee6d7c();
  }
  lVar3 = FUN_023aa7e0(uVar9,*(undefined8 *)
                              Method_UnityEngine_UIElements_PointerEventBase<PointerUpEvent>__ctor__
                      );
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar4 = FUN_023361c8(lVar3,*(undefined8 *)Method_OVRControllerTest_<>c_<Start>b__4_7__);
  if (*(long *)(unaff_x20 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  FUN_0368465c(lVar4,*(undefined8 *)(*(long *)(unaff_x20 + 0x20) + 0x28),
               *(undefined4 *)(unaff_x24 + 0x10),uVar2);
  lVar3 = FUN_04073258(lVar3,0);
  uVar2 = FUN_04070398();
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c(uVar2,uVar2);
  }
  FUN_0407db5c(lVar3,uVar2,0);
  if (*(char *)(unaff_x27 + 0xe10) == '\0') {
    thunk_FUN_01efb3a4();
    *(undefined1 *)(unaff_x27 + 0xe10) = unaff_w19;
  }
  lVar4 = *(long *)(*unaff_x21 + 0xb8);
  FUN_0407da88(*(undefined4 *)(lVar4 + 0xc),*(undefined4 *)(lVar4 + 0x10),
               *(undefined4 *)(lVar4 + 0x14),lVar3,0);
  if (*(char *)(unaff_x29 + 0xe0f) == '\0') {
    thunk_FUN_01efb3a4();
    *(undefined1 *)(unaff_x29 + 0xe0f) = unaff_w19;
  }
  puVar5 = *(undefined4 **)(*unaff_x22 + 0xb8);
  FUN_0407d6f4(*puVar5,puVar5[1],puVar5[2],puVar5[3],lVar3,0);
  if (*(char *)(unaff_x28 + 0xe12) == '\0') {
    thunk_FUN_01efb3a4();
    *(undefined1 *)(unaff_x28 + 0xe12) = unaff_w19;
  }
  puVar5 = *(undefined4 **)(*unaff_x21 + 0xb8);
  FUN_0407c958(*puVar5,puVar5[1],puVar5[2],lVar3,0);
  do {
    lVar3 = *unaff_x23;
    uVar6 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__) {
          puVar1 = (undefined8 *)(lVar3 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_03686a80;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar1 = (undefined8 *)
             FUN_01ecb238(unaff_x23,
                          *(long *)
                           Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__
                          ,0);
LAB_03686a80:
    uVar6 = (*(code *)*puVar1)(unaff_x23,puVar1[1]);
    if ((uVar6 & 1) != 0) break;
    if (unaff_x23 != (long *)0x0) {
      lVar3 = *unaff_x23;
      uVar6 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) ==
              *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
            puVar1 = (undefined8 *)(lVar3 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_03686c7c;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar1 = (undefined8 *)
               FUN_01ecb238(unaff_x23,
                            *(long *)
                             Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                            ,0);
LAB_03686c7c:
      (*(code *)*puVar1)(unaff_x23,puVar1[1]);
    }
    if (in_stack_00000008 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar3 = *in_stack_00000008;
    uVar6 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__) {
          puVar1 = (undefined8 *)(lVar3 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_03686940;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar1 = (undefined8 *)
             FUN_01ecb238(in_stack_00000008,
                          *(long *)
                           Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__
                          ,0);
LAB_03686940:
    uVar6 = (*(code *)*puVar1)(in_stack_00000008,puVar1[1]);
    if ((uVar6 & 1) == 0) {
      if (in_stack_00000008 == (long *)0x0) {
        return;
      }
      lVar3 = *in_stack_00000008;
      uVar6 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar6 == 0) goto LAB_03686d68;
      piVar7 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      goto LAB_03686d50;
    }
    lVar3 = *in_stack_00000008;
    uVar6 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)Method_OVRControllerTest_<>c_<Start>b__4_18__) {
          puVar1 = (undefined8 *)(lVar3 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_036869a8;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar1 = (undefined8 *)
             FUN_01ecb238(in_stack_00000008,*(long *)Method_OVRControllerTest_<>c_<Start>b__4_18__,0
                         );
LAB_036869a8:
    unaff_x24 = (*(code *)*puVar1)(in_stack_00000008,puVar1[1]);
    if (unaff_x24 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    plVar8 = *(long **)(unaff_x24 + 0x18);
    if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar3 = *plVar8;
    uVar6 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) ==
            *(long *)Method_Unity_VisualScripting_MultiplicationHandler_<>c_<_ctor>b__0_85__) {
          puVar1 = (undefined8 *)(lVar3 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_03686a18;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar1 = (undefined8 *)
             FUN_01ecb238(plVar8,*(long *)
                                  Method_Unity_VisualScripting_MultiplicationHandler_<>c_<_ctor>b__0_85__
                          ,0);
LAB_03686a18:
    unaff_x23 = (long *)(*(code *)*puVar1)(plVar8,puVar1[1]);
    if (unaff_x23 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
  } while( true );
  param_1 = *unaff_x23;
  in_x10 = &Method_System_Collections_ListDictionaryInternal_NodeEnumerator_get_Key__;
  goto code_r0x03686a98;
  while( true ) {
    uVar6 = uVar6 - 1;
    piVar7 = piVar7 + 4;
    if (uVar6 == 0) break;
LAB_03686d50:
    if (*(long *)(piVar7 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar1 = (undefined8 *)(lVar3 + (long)*piVar7 * 0x10 + 0x138);
      goto LAB_03686d84;
    }
  }
LAB_03686d68:
  puVar1 = (undefined8 *)
           FUN_01ecb238(in_stack_00000008,
                        *(long *)
                         Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__,0)
  ;
LAB_03686d84:
  (*(code *)*puVar1)(in_stack_00000008,puVar1[1]);
  return;
}


