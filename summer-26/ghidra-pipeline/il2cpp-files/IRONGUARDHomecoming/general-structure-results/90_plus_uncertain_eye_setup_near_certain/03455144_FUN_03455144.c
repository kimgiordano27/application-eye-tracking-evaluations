/*
FUNCTION_NAME: FUN_03455144
ENTRY_POINT: 03455144
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 129
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_6;validity_or_gating_hits_13;strong_pose_or_ray_construction_hits_8;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x03455c68) */
/* WARNING: Removing unreachable block (ram,0x03455604) */
/* WARNING: Removing unreachable block (ram,0x03455bcc) */
/* WARNING: Removing unreachable block (ram,0x03455818) */
/* WARNING: Removing unreachable block (ram,0x03455bd4) */

void FUN_03455144(long *param_1,ulong param_2)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long *plVar6;
  undefined8 *puVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  ulong uVar15;
  int *piVar16;
  
  if ((DAT_04832918 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_System_RuntimeTypeHandle_GetTypeByName__);
    thunk_FUN_01efb3a4(Method_System_RuntimeMethodHandle_GetObjectData__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    thunk_FUN_01efb3a4(Method_System_Runtime_CompilerServices_RuntimeWrappedException__ctor__);
    thunk_FUN_01efb3a4(Method_System_RuntimeType_IsEnumDefined__);
    thunk_FUN_01efb3a4(Method_UnityEngine_InputSystem_InputManager_OnNativeDeviceDiscovered__);
    DAT_04832918 = 1;
  }
  puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
  if (param_1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  plVar6 = (long *)(**(code **)(*param_1 + 0x388))(param_1,*(undefined8 *)(*param_1 + 0x390));
  puVar5 = Method_System_Runtime_CompilerServices_RuntimeWrappedException__ctor__;
  puVar4 = Method_System_RuntimeType_IsEnumDefined__;
  puVar3 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
LAB_0345520c:
  lVar14 = *plVar6;
  uVar15 = (ulong)*(ushort *)(lVar14 + 0x12e);
  if (uVar15 != 0) {
    piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
    do {
      if (*(long *)(piVar16 + -2) == *(long *)puVar3) {
        puVar7 = (undefined8 *)(lVar14 + (long)*piVar16 * 0x10 + 0x138);
        goto LAB_03455258;
      }
      uVar15 = uVar15 - 1;
      piVar16 = piVar16 + 4;
    } while (uVar15 != 0);
  }
  puVar7 = (undefined8 *)FUN_01ecb238(plVar6,*(long *)puVar3,0);
LAB_03455258:
  uVar15 = (*(code *)*puVar7)(plVar6,puVar7[1]);
  if ((uVar15 & 1) != 0) {
    lVar14 = *plVar6;
    uVar15 = (ulong)*(ushort *)(lVar14 + 0x12e);
    if (uVar15 != 0) {
      piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == *(long *)puVar3) {
          puVar7 = (undefined8 *)(lVar14 + (long)(*piVar16 + 1) * 0x10 + 0x138);
          goto LAB_034552b8;
        }
        uVar15 = uVar15 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar15 != 0);
    }
    puVar7 = (undefined8 *)FUN_01ecb238(plVar6,*(long *)puVar3,1);
LAB_034552b8:
    plVar8 = (long *)(*(code *)*puVar7)(plVar6,puVar7[1]);
    if (plVar8 != (long *)0x0) goto code_r0x034552cc;
    if ((param_2 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    goto LAB_03455328;
  }
  plVar6 = (long *)thunk_FUN_01f116d0(plVar6,*(undefined8 *)puVar2);
  if (plVar6 == (long *)0x0) {
    return;
  }
  lVar14 = *plVar6;
  uVar15 = (ulong)*(ushort *)(lVar14 + 0x12e);
  if (uVar15 == 0) goto LAB_03455a78;
  piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
  goto LAB_03455a60;
code_r0x034552cc:
  bVar1 = *(byte *)(*(long *)Method_System_RuntimeTypeHandle_GetTypeByName__ + 0x130);
  if ((*(byte *)(*plVar8 + 0x130) < bVar1) ||
     (*(long *)(*(long *)(*plVar8 + 200) + (ulong)bVar1 * 8 + -8) !=
      *(long *)Method_System_RuntimeTypeHandle_GetTypeByName__)) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08cfc(plVar8);
  }
  if (((param_2 & 1) == 0) ||
     (uVar15 = FUN_0340e600(plVar8[5],
                            *(undefined8 *)
                             Method_UnityEngine_InputSystem_InputManager_OnNativeDeviceDiscovered__,
                            0), (uVar15 & 1) == 0)) {
LAB_03455328:
    lVar14 = *(long *)puVar4;
    if (*(int *)(lVar14 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
      lVar14 = *(long *)puVar4;
    }
    if (*(char *)(*(long *)(lVar14 + 0xb8) + 0x19) == '\0') {
      if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
    }
    else {
      if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      uVar15 = thunk_FUN_0340e318(plVar8[5],
                                  *(undefined8 *)
                                   Method_UnityEngine_InputSystem_InputManager_OnNativeDeviceDiscovered__
                                  ,0);
      if ((uVar15 & 1) != 0) goto LAB_0345520c;
    }
    if (plVar8[2] != 0) {
      lVar14 = *(long *)puVar4;
      if (*(int *)(lVar14 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
        lVar14 = *(long *)puVar4;
      }
      plVar9 = *(long **)(*(long *)(lVar14 + 0xb8) + 0x40);
      if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      plVar9 = (long *)(**(code **)(*plVar9 + 0x308))
                                 (plVar9,plVar8[2],*(undefined8 *)(*plVar9 + 0x310));
      if (plVar9 == (long *)0x0) {
        lVar14 = plVar8[2];
        uVar12 = thunk_FUN_01efb3a4(Method_System_Security_Cryptography_SHA1Managed__ctor__);
        uVar13 = thunk_FUN_01efb3a4(Method_System_SByte_Parse__);
        uVar12 = FUN_0340ebc0(uVar12,lVar14,uVar13,0);
        thunk_FUN_01efb3a4(Method_System_Reflection_RuntimeMethodInfo_GetGenericMethodDefinition__);
        uVar13 = thunk_FUN_01f117cc();
        FUN_03579ad0(uVar13,uVar12,0);
        uVar12 = thunk_FUN_01efb3a4(Method_System_SByte_System_IConvertible_ToDateTime__);
                    /* WARNING: Subroutine does not return */
        FUN_01f08910(uVar13,uVar12);
      }
      bVar1 = *(byte *)(*(long *)Method_System_RuntimeTypeHandle_GetTypeByName__ + 0x130);
      if ((*(byte *)(*plVar9 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*plVar9 + 200) + (ulong)bVar1 * 8 + -8) !=
          *(long *)Method_System_RuntimeTypeHandle_GetTypeByName__)) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08cfc(plVar9);
      }
      FUN_03455da4(plVar8,plVar9);
    }
    plVar9 = (long *)FUN_034566fc(plVar8);
    if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    plVar9 = (long *)(**(code **)(*plVar9 + 0x388))(plVar9,*(undefined8 *)(*plVar9 + 0x390));
    if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
LAB_03455418:
    lVar14 = *plVar9;
    uVar15 = (ulong)*(ushort *)(lVar14 + 0x12e);
    if (uVar15 != 0) {
      piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == *(long *)puVar3) {
          puVar7 = (undefined8 *)(lVar14 + (long)*piVar16 * 0x10 + 0x138);
          goto LAB_03455464;
        }
        uVar15 = uVar15 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar15 != 0);
    }
    puVar7 = (undefined8 *)FUN_01ecb238(plVar9,*(long *)puVar3,0);
LAB_03455464:
    uVar15 = (*(code *)*puVar7)(plVar9,puVar7[1]);
    if ((uVar15 & 1) != 0) {
      lVar14 = *plVar9;
      uVar15 = (ulong)*(ushort *)(lVar14 + 0x12e);
      if (uVar15 != 0) {
        piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == *(long *)puVar3) {
            puVar7 = (undefined8 *)(lVar14 + (long)(*piVar16 + 1) * 0x10 + 0x138);
            goto LAB_034554c4;
          }
          uVar15 = uVar15 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar15 != 0);
      }
      puVar7 = (undefined8 *)FUN_01ecb238(plVar9,*(long *)puVar3,1);
LAB_034554c4:
      plVar10 = (long *)(*(code *)*puVar7)(plVar9,puVar7[1]);
      if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      bVar1 = *(byte *)(*(long *)puVar5 + 0x130);
      if ((*(byte *)(*plVar10 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar5)) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08cfc(plVar10);
      }
      if (plVar10[2] != 0) {
        lVar14 = *(long *)puVar4;
        if (*(int *)(lVar14 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
          lVar14 = *(long *)puVar4;
        }
        plVar11 = *(long **)(*(long *)(lVar14 + 0xb8) + 0x50);
        if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        plVar11 = (long *)(**(code **)(*plVar11 + 0x308))
                                    (plVar11,plVar10[2],*(undefined8 *)(*plVar11 + 0x310));
        if (plVar11 == (long *)0x0) {
          lVar14 = plVar10[2];
          uVar12 = thunk_FUN_01efb3a4(Method_System_SByte_CompareTo__);
          uVar13 = thunk_FUN_01efb3a4(Method_System_SByte_Parse__);
          uVar12 = FUN_0340ebc0(uVar12,lVar14,uVar13,0);
          thunk_FUN_01efb3a4(Method_System_Reflection_RuntimeMethodInfo_GetGenericMethodDefinition__
                            );
          uVar13 = thunk_FUN_01f117cc();
          FUN_03579ad0(uVar13,uVar12,0);
          uVar12 = thunk_FUN_01efb3a4(Method_System_SByte_System_IConvertible_ToDateTime__);
                    /* WARNING: Subroutine does not return */
          FUN_01f08910(uVar13,uVar12);
        }
        bVar1 = *(byte *)(*(long *)puVar5 + 0x130);
        if ((*(byte *)(*plVar11 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar5)) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08cfc(plVar11);
        }
        FUN_0345676c(plVar10,plVar11);
      }
      goto LAB_03455418;
    }
    plVar9 = (long *)thunk_FUN_01f116d0(plVar9,*(undefined8 *)puVar2);
    if (plVar9 != (long *)0x0) {
      lVar14 = *plVar9;
      uVar15 = (ulong)*(ushort *)(lVar14 + 0x12e);
      if (uVar15 != 0) {
        piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == *(long *)puVar2) {
            puVar7 = (undefined8 *)(lVar14 + (long)*piVar16 * 0x10 + 0x138);
            goto LAB_034555ec;
          }
          uVar15 = uVar15 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar15 != 0);
      }
      puVar7 = (undefined8 *)FUN_01ecb238(plVar9,*(long *)puVar2,0);
LAB_034555ec:
      (*(code *)*puVar7)(plVar9,puVar7[1]);
    }
    plVar9 = (long *)FUN_03456e90(plVar8);
    if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    plVar9 = (long *)(**(code **)(*plVar9 + 0x388))(plVar9,*(undefined8 *)(*plVar9 + 0x390));
    if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
LAB_0345562c:
    lVar14 = *plVar9;
    uVar15 = (ulong)*(ushort *)(lVar14 + 0x12e);
    if (uVar15 != 0) {
      piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == *(long *)puVar3) {
          puVar7 = (undefined8 *)(lVar14 + (long)*piVar16 * 0x10 + 0x138);
          goto LAB_03455678;
        }
        uVar15 = uVar15 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar15 != 0);
    }
    puVar7 = (undefined8 *)FUN_01ecb238(plVar9,*(long *)puVar3,0);
LAB_03455678:
    uVar15 = (*(code *)*puVar7)(plVar9,puVar7[1]);
    if ((uVar15 & 1) != 0) {
      lVar14 = *plVar9;
      uVar15 = (ulong)*(ushort *)(lVar14 + 0x12e);
      if (uVar15 != 0) {
        piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == *(long *)puVar3) {
            puVar7 = (undefined8 *)(lVar14 + (long)(*piVar16 + 1) * 0x10 + 0x138);
            goto LAB_034556d8;
          }
          uVar15 = uVar15 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar15 != 0);
      }
      puVar7 = (undefined8 *)FUN_01ecb238(plVar9,*(long *)puVar3,1);
LAB_034556d8:
      plVar10 = (long *)(*(code *)*puVar7)(plVar9,puVar7[1]);
      if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      bVar1 = *(byte *)(*(long *)puVar5 + 0x130);
      if ((*(byte *)(*plVar10 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar5)) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08cfc(plVar10);
      }
      if (plVar10[2] != 0) {
        lVar14 = *(long *)puVar4;
        if (*(int *)(lVar14 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
          lVar14 = *(long *)puVar4;
        }
        plVar11 = *(long **)(*(long *)(lVar14 + 0xb8) + 0x48);
        if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        plVar11 = (long *)(**(code **)(*plVar11 + 0x308))
                                    (plVar11,plVar10[2],*(undefined8 *)(*plVar11 + 0x310));
        if (plVar11 == (long *)0x0) {
          lVar14 = plVar10[2];
          uVar12 = thunk_FUN_01efb3a4(Method_System_SByte_CompareTo__);
          uVar13 = thunk_FUN_01efb3a4(Method_System_SByte_Parse__);
          uVar12 = FUN_0340ebc0(uVar12,lVar14,uVar13,0);
          thunk_FUN_01efb3a4(Method_System_Reflection_RuntimeMethodInfo_GetGenericMethodDefinition__
                            );
          uVar13 = thunk_FUN_01f117cc();
          FUN_03579ad0(uVar13,uVar12,0);
          uVar12 = thunk_FUN_01efb3a4(Method_System_SByte_System_IConvertible_ToDateTime__);
                    /* WARNING: Subroutine does not return */
          FUN_01f08910(uVar13,uVar12);
        }
        bVar1 = *(byte *)(*(long *)puVar5 + 0x130);
        if ((*(byte *)(*plVar11 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar5)) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08cfc(plVar11);
        }
        FUN_0345676c(plVar10,plVar11);
      }
      goto LAB_0345562c;
    }
    plVar9 = (long *)thunk_FUN_01f116d0(plVar9,*(undefined8 *)puVar2);
    if (plVar9 != (long *)0x0) {
      lVar14 = *plVar9;
      uVar15 = (ulong)*(ushort *)(lVar14 + 0x12e);
      if (uVar15 != 0) {
        piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == *(long *)puVar2) {
            puVar7 = (undefined8 *)(lVar14 + (long)*piVar16 * 0x10 + 0x138);
            goto LAB_03455800;
          }
          uVar15 = uVar15 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar15 != 0);
      }
      puVar7 = (undefined8 *)FUN_01ecb238(plVar9,*(long *)puVar2,0);
LAB_03455800:
      (*(code *)*puVar7)(plVar9,puVar7[1]);
    }
    if (*(int *)(*(long *)Method_System_RuntimeMethodHandle_GetObjectData__ + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    FUN_03456f00(plVar8);
  }
  goto LAB_0345520c;
  while( true ) {
    uVar15 = uVar15 - 1;
    piVar16 = piVar16 + 4;
    if (uVar15 == 0) break;
LAB_03455a60:
    if (*(long *)(piVar16 + -2) == *(long *)puVar2) {
      puVar7 = (undefined8 *)(lVar14 + (long)*piVar16 * 0x10 + 0x138);
      goto LAB_03455a94;
    }
  }
LAB_03455a78:
  puVar7 = (undefined8 *)FUN_01ecb238(plVar6,*(long *)puVar2,0);
LAB_03455a94:
  (*(code *)*puVar7)(plVar6,puVar7[1]);
  return;
}


