/*
FUNCTION_NAME: FUN_0346039c
ENTRY_POINT: 0346039c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 129
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_10;weak_xr_or_state_hits_13;validity_or_gating_hits_12;strong_pose_or_ray_construction_hits_21;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_10
*/


/* WARNING: Removing unreachable block (ram,0x034609ac) */
/* WARNING: Removing unreachable block (ram,0x03460928) */
/* WARNING: Removing unreachable block (ram,0x034609d4) */
/* WARNING: Removing unreachable block (ram,0x034609c4) */

long FUN_0346039c(undefined8 param_1,long param_2,undefined8 *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  undefined8 *puVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  int *piVar13;
  undefined8 uVar14;
  uint uVar15;
  undefined8 uVar16;
  char local_64 [4];
  
  if ((DAT_048329cd & 1) == 0) {
    thunk_FUN_01efb3a4(Method_System_RuntimeMethodHandle_GetObjectData__);
    thunk_FUN_01efb3a4(Method_Sirenix_Serialization_SerializationUtility_CreateReader__);
    thunk_FUN_01efb3a4(Method_System_Runtime_InteropServices_SafeBuffer_ReleasePointer__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                      );
    thunk_FUN_01efb3a4(Method_System_RuntimeType_IsEnumDefined__);
    DAT_048329cd = 1;
  }
  if (param_2 == 0) {
    lVar5 = 0;
  }
  else {
    uVar14 = *(undefined8 *)
              Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__;
    lVar5 = thunk_FUN_01f116d0(param_2,uVar14);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08cfc(param_2,uVar14);
    }
  }
  puVar2 = Method_System_RuntimeMethodHandle_GetObjectData__;
  lVar6 = *(long *)Method_System_RuntimeMethodHandle_GetObjectData__;
  if (*(int *)(lVar6 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
    lVar6 = *(long *)puVar2;
  }
  plVar7 = (long *)**(long **)(lVar6 + 0xb8);
  if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  uVar14 = (**(code **)(*plVar7 + 0x2d8))(plVar7,*(undefined8 *)(*plVar7 + 0x2e0));
  local_64[0] = '\0';
  FUN_035ce230(uVar14,local_64,0);
  lVar6 = *(long *)puVar2;
  if (*(int *)(lVar6 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
    lVar6 = *(long *)puVar2;
  }
  plVar7 = (long *)**(long **)(lVar6 + 0xb8);
  if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  plVar7 = (long *)(**(code **)(*plVar7 + 0x388))(plVar7,*(undefined8 *)(*plVar7 + 0x390));
  puVar4 = Method_Sirenix_Serialization_SerializationUtility_CreateReader__;
  puVar3 = Method_System_Runtime_InteropServices_SafeBuffer_ReleasePointer__;
  puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  do {
    do {
      lVar10 = *plVar7;
      lVar6 = *(long *)puVar1;
      uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar12 != 0) {
        piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == lVar6) {
            puVar8 = (undefined8 *)(lVar10 + (long)*piVar13 * 0x10 + 0x138);
            goto LAB_03460548;
          }
          uVar12 = uVar12 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar12 != 0);
      }
      puVar8 = (undefined8 *)FUN_01ecb238(plVar7,lVar6,0);
LAB_03460548:
      uVar12 = (*(code *)*puVar8)(plVar7,puVar8[1]);
      if ((uVar12 & 1) == 0) {
        lVar6 = 0;
        uVar15 = 5;
        goto LAB_0346062c;
      }
      lVar10 = *plVar7;
      lVar6 = *(long *)puVar1;
      uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar12 != 0) {
        piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == lVar6) {
            puVar8 = (undefined8 *)(lVar10 + (long)(*piVar13 + 1) * 0x10 + 0x138);
            goto LAB_034605a8;
          }
          uVar12 = uVar12 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar12 != 0);
      }
      puVar8 = (undefined8 *)FUN_01ecb238(plVar7,lVar6,1);
LAB_034605a8:
      lVar6 = (*(code *)*puVar8)(plVar7,puVar8[1]);
      if (lVar6 == 0) {
        lVar10 = 0;
      }
      else {
        uVar16 = *(undefined8 *)puVar3;
        lVar10 = thunk_FUN_01f116d0(lVar6,uVar16);
        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08cfc(lVar6,uVar16);
        }
      }
      lVar6 = thunk_FUN_01f116d0(lVar10,*(undefined8 *)puVar4);
    } while (lVar6 == 0);
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    lVar6 = FUN_0346cfb8(lVar6,param_1,lVar5,param_3);
  } while (lVar6 == 0);
  uVar15 = 4;
LAB_0346062c:
  plVar7 = (long *)thunk_FUN_01f116d0(plVar7,*(undefined8 *)
                                              Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                                     );
  if (plVar7 != (long *)0x0) {
    lVar10 = *plVar7;
    uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar8 = (undefined8 *)(lVar10 + (long)*piVar13 * 0x10 + 0x138);
          goto LAB_0346069c;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    puVar8 = (undefined8 *)
             FUN_01ecb238(plVar7,*(long *)
                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                          ,0);
LAB_0346069c:
    (*(code *)*puVar8)(plVar7,puVar8[1]);
  }
  if ((uVar15 == 5) || (uVar15 == 0)) {
    if (*(int *)(*(long *)Method_System_RuntimeType_IsEnumDefined__ + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    FUN_03453e94();
    lVar10 = *(long *)puVar2;
    if (*(int *)(lVar10 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
      lVar10 = *(long *)puVar2;
    }
    plVar7 = *(long **)(*(long *)(lVar10 + 0xb8) + 8);
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    plVar7 = (long *)(**(code **)(*plVar7 + 0x388))(plVar7,*(undefined8 *)(*plVar7 + 0x390));
    puVar3 = Method_Sirenix_Serialization_SerializationUtility_CreateReader__;
    puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    do {
      lVar11 = *plVar7;
      lVar10 = *(long *)puVar1;
      uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar12 != 0) {
        piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == lVar10) {
            puVar8 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
            goto LAB_0346076c;
          }
          uVar12 = uVar12 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar12 != 0);
      }
      puVar8 = (undefined8 *)FUN_01ecb238(plVar7,lVar10,0);
LAB_0346076c:
      uVar12 = (*(code *)*puVar8)(plVar7,puVar8[1]);
      if ((uVar12 & 1) == 0) {
        uVar15 = 8;
        goto LAB_034608a0;
      }
      lVar11 = *plVar7;
      lVar10 = *(long *)puVar1;
      uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar12 != 0) {
        piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == lVar10) {
            puVar8 = (undefined8 *)(lVar11 + (long)(*piVar13 + 1) * 0x10 + 0x138);
            goto LAB_034607cc;
          }
          uVar12 = uVar12 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar12 != 0);
      }
      puVar8 = (undefined8 *)FUN_01ecb238(plVar7,lVar10,1);
LAB_034607cc:
      lVar10 = (*(code *)*puVar8)(plVar7,puVar8[1]);
      if (lVar10 == 0) {
        lVar11 = 0;
      }
      else {
        uVar16 = *(undefined8 *)puVar3;
        lVar11 = thunk_FUN_01f116d0(lVar10,uVar16);
        if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08cfc(lVar10,uVar16);
        }
      }
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      lVar10 = FUN_0346cfb8(lVar11,param_1,lVar5,param_3);
    } while (lVar10 == 0);
    lVar5 = *(long *)puVar2;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
      lVar5 = *(long *)puVar2;
    }
    plVar9 = *(long **)(*(long *)(lVar5 + 0xb8) + 8);
    if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    (**(code **)(*plVar9 + 0x3c8))(plVar9,lVar11,*(undefined8 *)(*plVar9 + 0x3d0));
    FUN_0346d1d4(lVar11);
    uVar15 = 4;
    lVar6 = lVar10;
LAB_034608a0:
    plVar7 = (long *)thunk_FUN_01f116d0(plVar7,*(undefined8 *)
                                                Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                                       );
    if (plVar7 != (long *)0x0) {
      lVar5 = *plVar7;
      uVar12 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar12 != 0) {
        piVar13 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) ==
              *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
            puVar8 = (undefined8 *)(lVar5 + (long)*piVar13 * 0x10 + 0x138);
            goto LAB_03460910;
          }
          uVar12 = uVar12 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar12 != 0);
      }
      puVar8 = (undefined8 *)
               FUN_01ecb238(plVar7,*(long *)
                                    Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                            ,0);
LAB_03460910:
      (*(code *)*puVar8)(plVar7,puVar8[1]);
    }
  }
  if (local_64[0] != '\0') {
    Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_HingeJoint_op_Implicit(uVar14,0);
  }
  if ((uVar15 | 8) == 8) {
    *param_3 = 0;
    thunk_FUN_01f51358(param_3,0);
    lVar6 = 0;
  }
  return lVar6;
}


