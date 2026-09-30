/*
FUNCTION_NAME: Sirenix.Serialization.SerializationNodeDataWriter$$WritePrimitiveArray<__Il2CppFullySharedGenericStructType>
ENTRY_POINT: 022f5480
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 117
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;frame_behavior
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_10;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_3
*/


/* WARNING: Removing unreachable block (ram,0x022f5778) */
/* WARNING: Removing unreachable block (ram,0x022f5820) */

void Sirenix_Serialization_SerializationNodeDataWriter__WritePrimitiveArray<__Il2CppFullySharedGenericStructType>
               (void)

{
  bool bVar1;
  undefined *puVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  void *unaff_x19;
  ulong __n;
  undefined1 *__src;
  undefined1 *__s;
  long *unaff_x23;
  long unaff_x24;
  int unaff_w25;
  long lVar9;
  long unaff_x27;
  long unaff_x29;
  
  lVar9 = *(long *)(unaff_x24 + 0x38);
  if (lVar9 == 0) {
    FUN_01ecafa0();
    lVar9 = *(long *)(unaff_x24 + 0x38);
  }
  __n = (ulong)*(uint *)(*(long *)(lVar9 + 0x18) + 0xfc);
  uVar7 = __n + 0xf & 0x1fffffff0;
  __src = &stack0x00000000 + -uVar7;
  __s = __src + -uVar7;
  memset(__s,0,__n);
  if (unaff_x23 == (long *)0x0) {
    uVar5 = thunk_FUN_01efb3a4(Method_UnityEngine_UIElements_BoundsIntField_<_ctor>b__10_1__);
    FUN_03971094(uVar5,0);
LAB_022f5814:
                    /* WARNING: Subroutine does not return */
    FUN_01f08910();
  }
  if ((*(byte *)(*(long *)(lVar9 + 8) + 0x135) & 1) == 0) {
    FUN_01ecaf44(*(long *)(lVar9 + 8));
  }
  plVar3 = (long *)thunk_FUN_01f116d0();
  if (plVar3 == (long *)0x0) {
    if (unaff_w25 < 0) {
      uVar5 = thunk_FUN_01efb3a4(
                                Method_Oculus_Platform_Callback_SetNotificationCallback<PartyUpdateNotification>__
                                );
      FUN_039710f0(uVar5,0);
      goto LAB_022f5814;
    }
    lVar9 = **(long **)(unaff_x24 + 0x38);
    if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_01ecaf44(lVar9);
    }
    lVar6 = *unaff_x23;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == lVar9) {
          puVar4 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_022f55ec;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined8 *)FUN_01ecb238();
LAB_022f55ec:
    plVar3 = (long *)(*(code *)*puVar4)();
    puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
    if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    do {
      lVar9 = *plVar3;
      uVar7 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *(long *)puVar2) {
            puVar4 = (undefined8 *)(lVar9 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_022f5658;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar4 = (undefined8 *)FUN_01ecb238(plVar3,*(long *)puVar2,0);
LAB_022f5658:
      uVar7 = (*(code *)*puVar4)(plVar3,puVar4[1]);
      if ((uVar7 & 1) == 0) {
        uVar5 = thunk_FUN_01efb3a4(
                                  Method_Oculus_Platform_Callback_SetNotificationCallback<PartyUpdateNotification>__
                                  );
        FUN_039710f0(uVar5,0);
                    /* WARNING: Subroutine does not return */
        FUN_01f08910();
      }
      bVar1 = unaff_w25 != 0;
      unaff_w25 = unaff_w25 + -1;
    } while (bVar1);
    lVar9 = *(long *)(*(long *)(unaff_x24 + 0x38) + 0x28);
    if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_01ecaf44(lVar9);
    }
    lVar6 = *plVar3;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == lVar9) {
          lVar9 = lVar6 + (long)*piVar8 * 0x10 + 0x138;
          goto LAB_022f56d4;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    lVar9 = FUN_01ecb238(plVar3,lVar9,0);
LAB_022f56d4:
    *(undefined1 **)(unaff_x29 + -0x20) = __src;
    lVar9 = *(long *)(lVar9 + 8);
    (**(code **)(lVar9 + 0x10))(*(undefined8 *)(lVar9 + 8),lVar9,plVar3,unaff_x29 + -0x20,__src);
    memcpy(__s,__src,__n);
    if (plVar3 != (long *)0x0) {
      lVar9 = *plVar3;
      uVar7 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) ==
              *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
            puVar4 = (undefined8 *)(lVar9 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_022f5760;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar4 = (undefined8 *)
               FUN_01ecb238(plVar3,*(long *)
                                    Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                            ,0);
LAB_022f5760:
      (*(code *)*puVar4)(plVar3,puVar4[1]);
    }
    memcpy(__src,__s,__n);
  }
  else {
    lVar9 = *(long *)(*(long *)(unaff_x24 + 0x38) + 8);
    if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_01ecaf44(lVar9);
    }
    *(int *)(unaff_x29 + -0xc) = unaff_w25;
    lVar6 = *plVar3;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == lVar9) {
          lVar9 = lVar6 + (long)*piVar8 * 0x10 + 0x138;
          goto LAB_022f55bc;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    lVar9 = FUN_01ecb238(plVar3,lVar9,0);
LAB_022f55bc:
    *(long *)(unaff_x29 + -0x20) = unaff_x29 + -0xc;
    *(undefined1 **)(unaff_x29 + -0x18) = __src;
    lVar9 = *(long *)(lVar9 + 8);
    (**(code **)(lVar9 + 0x10))(*(undefined8 *)(lVar9 + 8),lVar9,plVar3,unaff_x29 + -0x20,__src);
  }
  memcpy(unaff_x19,__src,__n);
  if (*(long *)(unaff_x27 + 0x28) == *(long *)(unaff_x29 + -8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


