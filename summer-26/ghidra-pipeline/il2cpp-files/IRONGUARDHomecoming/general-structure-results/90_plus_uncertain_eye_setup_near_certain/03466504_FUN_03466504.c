/*
FUNCTION_NAME: FUN_03466504
ENTRY_POINT: 03466504
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 135
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;frame_behavior
EVIDENCE: strong_eye_source_hits_8;weak_xr_or_state_hits_13;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_16;paired_field_refs_with_eye_source;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_8
*/


/* WARNING: Removing unreachable block (ram,0x03466c40) */
/* WARNING: Removing unreachable block (ram,0x03466d4c) */
/* WARNING: Removing unreachable block (ram,0x03466d40) */

long FUN_03466504(long *param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  byte bVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  long *plVar12;
  undefined8 *puVar13;
  long *plVar14;
  long lVar15;
  ulong uVar16;
  long lVar17;
  int *piVar18;
  long lVar19;
  undefined8 uVar20;
  
  puVar1 = Method_System_Net_Configuration_ServicePointManagerElement_get_Properties__;
  if ((DAT_048329eb & 1) == 0) {
    thunk_FUN_01efb3a4(Method_TMPro_SetPropertyUtility_SetStruct<bool>__);
    thunk_FUN_01efb3a4(Method_Gameplay_MeleeWeaponModule_<Start>b__21_0__);
    thunk_FUN_01efb3a4(Method_System_RuntimeMethodHandle_GetObjectData__);
    thunk_FUN_01efb3a4(Method_System_Net_Configuration_ServicePointManagerElement_get_Properties__);
    thunk_FUN_01efb3a4(Method_TMPro_SetPropertyUtility_SetStruct<char>__);
    thunk_FUN_01efb3a4(Method_TMPro_SetPropertyUtility_SetStruct<int>__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    DAT_048329eb = 1;
  }
  lVar6 = thunk_FUN_01f117cc(*(undefined8 *)puVar1);
  FUN_03476944(lVar6,param_1,0);
  if (param_1 == (long *)0x0) goto LAB_03466ce4;
  uVar7 = FUN_035847d8(param_1,0);
  uVar8 = FUN_0346fc50();
  if ((uVar7 & 1) == 0) {
    uVar20 = thunk_FUN_01f117cc(*(undefined8 *)Method_TMPro_SetPropertyUtility_SetStruct<bool>__);
    FUN_0346fec4(uVar20,param_2,uVar8);
    if (lVar6 == 0) goto LAB_03466ce4;
    *(undefined8 *)(lVar6 + 0x68) = uVar20;
    thunk_FUN_01f51358((undefined8 *)(lVar6 + 0x68),uVar20);
    bVar4 = 0;
    goto LAB_03466cbc;
  }
  lVar9 = thunk_FUN_01f117cc(*(undefined8 *)Method_TMPro_SetPropertyUtility_SetStruct<char>__);
  FUN_035ac8e8(lVar9,0);
  *(undefined8 *)(lVar9 + 0x10) = uVar8;
  thunk_FUN_01f51358((undefined8 *)(lVar9 + 0x10),uVar8);
  plVar10 = (long *)thunk_FUN_01f117cc(*(undefined8 *)
                                        Method_Gameplay_MeleeWeaponModule_<Start>b__21_0__);
  FUN_0353e574(plVar10,0);
  if (param_3 != 0) {
    if (plVar10 == (long *)0x0) goto LAB_03466ce4;
    (**(code **)(*plVar10 + 0x318))(plVar10,param_3,*(undefined8 *)(*plVar10 + 800));
  }
  puVar1 = Method_System_RuntimeMethodHandle_GetObjectData__;
  lVar11 = *(long *)Method_System_RuntimeMethodHandle_GetObjectData__;
  if (*(int *)(lVar11 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
    lVar11 = *(long *)puVar1;
  }
  uVar7 = thunk_FUN_0340e318(param_2,*(undefined8 *)(*(long *)(lVar11 + 0xb8) + 0x18),0);
  uVar8 = FUN_035d6f50(0);
  if ((uVar7 & 1) == 0) {
    bVar4 = 0;
  }
  else {
    if (plVar10 == (long *)0x0) goto LAB_03466ce4;
    plVar12 = (long *)(**(code **)(*plVar10 + 0x388))(plVar10,*(undefined8 *)(*plVar10 + 0x390));
    puVar3 = Method_TMPro_SetPropertyUtility_SetStruct<int>__;
    puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
    if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    do {
      lVar15 = *plVar12;
      lVar11 = *(long *)puVar1;
      uVar7 = (ulong)*(ushort *)(lVar15 + 0x12e);
      if (uVar7 != 0) {
        piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar18 + -2) == lVar11) {
            puVar13 = (undefined8 *)(lVar15 + (long)*piVar18 * 0x10 + 0x138);
            goto LAB_03466710;
          }
          uVar7 = uVar7 - 1;
          piVar18 = piVar18 + 4;
        } while (uVar7 != 0);
      }
      puVar13 = (undefined8 *)FUN_01ecb238(plVar12,lVar11,0);
LAB_03466710:
      bVar4 = (*(code *)*puVar13)(plVar12,puVar13[1]);
      if ((bVar4 & 1) == 0) break;
      lVar15 = *plVar12;
      lVar11 = *(long *)puVar1;
      uVar7 = (ulong)*(ushort *)(lVar15 + 0x12e);
      if (uVar7 != 0) {
        piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar18 + -2) == lVar11) {
            puVar13 = (undefined8 *)(lVar15 + (long)(*piVar18 + 1) * 0x10 + 0x138);
            goto LAB_03466774;
          }
          uVar7 = uVar7 - 1;
          piVar18 = piVar18 + 4;
        } while (uVar7 != 0);
      }
      puVar13 = (undefined8 *)FUN_01ecb238(plVar12,lVar11,1);
LAB_03466774:
      lVar11 = (*(code *)*puVar13)(plVar12,puVar13[1]);
      if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      uVar20 = *(undefined8 *)puVar3;
      lVar15 = thunk_FUN_01f116d0(lVar11,uVar20);
      if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08cfc(lVar11,uVar20);
      }
      lVar15 = *(long *)puVar3;
      plVar14 = (long *)thunk_FUN_01f116d0(lVar11,lVar15);
      if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08cfc(lVar11,lVar15);
      }
      lVar11 = *plVar14;
      uVar7 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar7 != 0) {
        piVar18 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar18 + -2) == lVar15) {
            puVar13 = (undefined8 *)(lVar11 + (long)(*piVar18 + 1) * 0x10 + 0x138);
            goto LAB_03466804;
          }
          uVar7 = uVar7 - 1;
          piVar18 = piVar18 + 4;
        } while (uVar7 != 0);
      }
      puVar13 = (undefined8 *)FUN_01ecb238(plVar14,lVar15,1);
LAB_03466804:
      uVar7 = (*(code *)*puVar13)(plVar14,uVar8,lVar6,puVar13[1]);
    } while ((uVar7 & 1) != 0);
    puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
    bVar4 = bVar4 ^ 1;
    plVar12 = (long *)thunk_FUN_01f116d0(plVar12,*(undefined8 *)
                                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                                        );
    if (plVar12 != (long *)0x0) {
      lVar11 = *plVar12;
      uVar7 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar7 != 0) {
        piVar18 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar18 + -2) == *(long *)puVar1) {
            puVar13 = (undefined8 *)(lVar11 + (long)*piVar18 * 0x10 + 0x138);
            goto LAB_034668d0;
          }
          uVar7 = uVar7 - 1;
          piVar18 = piVar18 + 4;
        } while (uVar7 != 0);
      }
      puVar13 = (undefined8 *)FUN_01ecb238(plVar12,*(long *)puVar1,0);
LAB_034668d0:
      (*(code *)*puVar13)(plVar12,puVar13[1]);
    }
  }
  lVar11 = (**(code **)(*param_1 + 0x1f8))(param_1,1,*(undefined8 *)(*param_1 + 0x200));
  puVar1 = Method_TMPro_SetPropertyUtility_SetStruct<int>__;
  if (lVar11 == 0) goto LAB_03466ce4;
  if (0 < (int)*(ulong *)(lVar11 + 0x18)) {
    uVar7 = 0;
    uVar16 = *(ulong *)(lVar11 + 0x18) & 0xffffffff;
    do {
      if (uVar16 <= uVar7) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a44();
      }
      lVar19 = *(long *)(lVar11 + uVar7 * 8 + 0x20);
      lVar15 = thunk_FUN_01f116d0(lVar19,*(undefined8 *)puVar1);
      if (lVar15 != 0) {
        if ((bVar4 & 1) == 0) {
          uVar5 = 0;
        }
        else {
          if (lVar19 == 0) goto LAB_03466ce4;
          uVar20 = *(undefined8 *)puVar1;
          lVar15 = thunk_FUN_01f116d0(lVar19,uVar20);
          if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08cfc(lVar19,uVar20);
          }
          lVar15 = *(long *)puVar1;
          plVar12 = (long *)thunk_FUN_01f116d0(lVar19,lVar15);
          if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08cfc(lVar19,lVar15);
          }
          lVar17 = *plVar12;
          uVar16 = (ulong)*(ushort *)(lVar17 + 0x12e);
          if (uVar16 != 0) {
            piVar18 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
            do {
              if (*(long *)(piVar18 + -2) == lVar15) {
                puVar13 = (undefined8 *)(lVar17 + (long)(*piVar18 + 1) * 0x10 + 0x138);
                goto LAB_034669c4;
              }
              uVar16 = uVar16 - 1;
              piVar18 = piVar18 + 4;
            } while (uVar16 != 0);
          }
          puVar13 = (undefined8 *)FUN_01ecb238(plVar12,lVar15,1);
LAB_034669c4:
          uVar5 = (*(code *)*puVar13)(plVar12,uVar8,lVar6,puVar13[1]);
          uVar5 = uVar5 & 1;
        }
        if (plVar10 == (long *)0x0) goto LAB_03466ce4;
        bVar4 = uVar5 != 0;
        (**(code **)(*plVar10 + 0x308))(plVar10,lVar19,*(undefined8 *)(*plVar10 + 0x310));
      }
      uVar16 = (ulong)*(uint *)(lVar11 + 0x18);
      uVar7 = uVar7 + 1;
    } while ((long)uVar7 < (long)(int)*(uint *)(lVar11 + 0x18));
  }
  if ((bVar4 & 1) == 0) {
    if ((plVar10 != (long *)0x0) &&
       (uVar8 = (**(code **)(*plVar10 + 0x3f8))(plVar10,*(undefined8 *)(*plVar10 + 0x400)),
       lVar6 != 0)) {
      *(undefined8 *)(lVar6 + 0x70) = uVar8;
      thunk_FUN_01f51358();
      plVar10 = (long *)(**(code **)(*plVar10 + 0x388))(plVar10,*(undefined8 *)(*plVar10 + 0x390));
      puVar3 = Method_TMPro_SetPropertyUtility_SetStruct<int>__;
      puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
      if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      do {
        lVar15 = *plVar10;
        lVar11 = *(long *)puVar1;
        uVar7 = (ulong)*(ushort *)(lVar15 + 0x12e);
        if (uVar7 != 0) {
          piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(long *)(piVar18 + -2) == lVar11) {
              puVar13 = (undefined8 *)(lVar15 + (long)*piVar18 * 0x10 + 0x138);
              goto LAB_03466ab8;
            }
            uVar7 = uVar7 - 1;
            piVar18 = piVar18 + 4;
          } while (uVar7 != 0);
        }
        puVar13 = (undefined8 *)FUN_01ecb238(plVar10,lVar11,0);
LAB_03466ab8:
        uVar7 = (*(code *)*puVar13)(plVar10,puVar13[1]);
        puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
        if ((uVar7 & 1) == 0) {
          plVar10 = (long *)thunk_FUN_01f116d0(plVar10,*(undefined8 *)
                                                                                                                
                                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                                              );
          if (plVar10 == (long *)0x0) goto LAB_03466c44;
          lVar11 = *plVar10;
          uVar7 = (ulong)*(ushort *)(lVar11 + 0x12e);
          if (uVar7 == 0) goto LAB_03466c0c;
          piVar18 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          goto LAB_03466bf4;
        }
        lVar15 = *plVar10;
        lVar11 = *(long *)puVar1;
        uVar7 = (ulong)*(ushort *)(lVar15 + 0x12e);
        if (uVar7 != 0) {
          piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(long *)(piVar18 + -2) == lVar11) {
              puVar13 = (undefined8 *)(lVar15 + (long)(*piVar18 + 1) * 0x10 + 0x138);
              goto LAB_03466b18;
            }
            uVar7 = uVar7 - 1;
            piVar18 = piVar18 + 4;
          } while (uVar7 != 0);
        }
        puVar13 = (undefined8 *)FUN_01ecb238(plVar10,lVar11,1);
LAB_03466b18:
        lVar11 = (*(code *)*puVar13)(plVar10,puVar13[1]);
        if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        uVar8 = *(undefined8 *)puVar3;
        lVar15 = thunk_FUN_01f116d0(lVar11,uVar8);
        if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08cfc(lVar11,uVar8);
        }
        lVar15 = *(long *)puVar3;
        plVar12 = (long *)thunk_FUN_01f116d0(lVar11,lVar15);
        if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08cfc(lVar11,lVar15);
        }
        lVar11 = *plVar12;
        uVar7 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar7 != 0) {
          piVar18 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar18 + -2) == lVar15) {
              puVar13 = (undefined8 *)(lVar11 + (long)*piVar18 * 0x10 + 0x138);
              goto LAB_03466ba4;
            }
            uVar7 = uVar7 - 1;
            piVar18 = piVar18 + 4;
          } while (uVar7 != 0);
        }
        puVar13 = (undefined8 *)FUN_01ecb238(plVar12,lVar15,0);
LAB_03466ba4:
        (*(code *)*puVar13)(plVar12,lVar6,puVar13[1]);
      } while( true );
    }
    goto LAB_03466ce4;
  }
  goto LAB_03466c44;
  while( true ) {
    uVar7 = uVar7 - 1;
    piVar18 = piVar18 + 4;
    if (uVar7 == 0) break;
LAB_03466bf4:
    if (*(long *)(piVar18 + -2) == *(long *)puVar2) {
      puVar13 = (undefined8 *)(lVar11 + (long)*piVar18 * 0x10 + 0x138);
      goto LAB_03466c28;
    }
  }
LAB_03466c0c:
  puVar13 = (undefined8 *)FUN_01ecb238(plVar10,*(long *)puVar2,0);
LAB_03466c28:
  (*(code *)*puVar13)(plVar10,puVar13[1]);
LAB_03466c44:
  puVar1 = Method_System_RuntimeMethodHandle_GetObjectData__;
  lVar11 = *(long *)Method_System_RuntimeMethodHandle_GetObjectData__;
  if (*(int *)(lVar11 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
    lVar11 = *(long *)puVar1;
  }
  uVar7 = FUN_0340e600(param_2,*(undefined8 *)(*(long *)(lVar11 + 0xb8) + 0x18),0);
  if ((uVar7 & 1) != 0) {
    lVar11 = thunk_FUN_01f117cc(*(undefined8 *)Method_TMPro_SetPropertyUtility_SetStruct<bool>__);
    FUN_0346fec4(lVar11,param_2,lVar9);
    lVar9 = lVar11;
  }
  if (lVar6 == 0) {
LAB_03466ce4:
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  *(long *)(lVar6 + 0x68) = lVar9;
  thunk_FUN_01f51358();
  bVar4 = bVar4 & 1;
LAB_03466cbc:
  *(byte *)(lVar6 + 0x90) = bVar4;
  return lVar6;
}


