/*
FUNCTION_NAME: FUN_0345cb78
ENTRY_POINT: 0345cb78
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;ui_interaction
EVIDENCE: validity_or_gating_hits_20;strong_pose_or_ray_construction_hits_8;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_2
*/


undefined8 FUN_0345cb78(long param_1,long *param_2)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined8 uVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  uint uVar14;
  long lVar15;
  ulong uVar16;
  int *piVar17;
  uint uVar18;
  uint uVar19;
  long local_58;
  
  if ((DAT_04832937 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_System_Runtime_Serialization_SerializationInfo_SetType__);
    thunk_FUN_01efb3a4(Method_UnityEngine_Component_GetComponent<TeleportInputHandlerHMD>__);
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                      );
    thunk_FUN_01efb3a4(Method_System_RuntimeType_InvokeMember__);
    thunk_FUN_01efb3a4(Method_System_Runtime_Serialization_SerializationInfoEnumerator_get_Current__
                      );
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__);
    DAT_04832937 = 1;
  }
  local_58 = 0;
  if ((param_1 == 0) ||
     (uVar5 = thunk_FUN_01ecaf38(param_1,0),
     puVar3 = Method_System_Runtime_Serialization_SerializationInfo_SetType__,
     param_2 == (long *)0x0)) goto LAB_0345d428;
  lVar15 = *param_2;
  uVar16 = (ulong)*(ushort *)(lVar15 + 0x12e);
  if (uVar16 != 0) {
    piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
    do {
      if (*(long *)(piVar17 + -2) ==
          *(long *)Method_System_Runtime_Serialization_SerializationInfo_SetType__) {
        puVar6 = (undefined8 *)(lVar15 + (long)(*piVar17 + 3) * 0x10 + 0x138);
        goto LAB_0345cc68;
      }
      uVar16 = uVar16 - 1;
      piVar17 = piVar17 + 4;
    } while (uVar16 != 0);
  }
  puVar6 = (undefined8 *)
           FUN_01ecb238(param_2,*(long *)
                                 Method_System_Runtime_Serialization_SerializationInfo_SetType__,3);
LAB_0345cc68:
  plVar7 = (long *)(*(code *)*puVar6)(param_2,puVar6[1]);
  puVar2 = Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__;
  if (plVar7 == (long *)0x0) goto LAB_0345d428;
  uVar8 = (**(code **)(*plVar7 + 0x1b8))(plVar7,*(undefined8 *)(*plVar7 + 0x1c0));
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c(*(long *)puVar2);
  }
  puVar2 = Method_System_RuntimeType_InvokeMember__;
  uVar16 = FUN_03582560(uVar8,uVar5,0);
  if ((uVar16 & 1) == 0) {
    lVar15 = *param_2;
    uVar16 = (ulong)*(ushort *)(lVar15 + 0x12e);
    if (uVar16 != 0) {
      piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) == *(long *)puVar3) {
          puVar6 = (undefined8 *)(lVar15 + (long)(*piVar17 + 3) * 0x10 + 0x138);
          goto LAB_0345cd10;
        }
        uVar16 = uVar16 - 1;
        piVar17 = piVar17 + 4;
      } while (uVar16 != 0);
    }
    puVar6 = (undefined8 *)FUN_01ecb238(param_2,*(long *)puVar3,3);
LAB_0345cd10:
    uVar8 = (*(code *)*puVar6)(param_2,puVar6[1]);
    lVar15 = *(long *)puVar2;
    if (*(int *)(lVar15 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c(lVar15);
      lVar15 = *(long *)puVar2;
    }
    uVar16 = FUN_034b27d8(uVar8,*(undefined8 *)(*(long *)(lVar15 + 0xb8) + 0x30),0);
    if ((uVar16 & 1) != 0) goto LAB_0345cde0;
    lVar15 = *param_2;
    uVar16 = (ulong)*(ushort *)(lVar15 + 0x12e);
    if (uVar16 != 0) {
      piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) == *(long *)puVar3) {
          puVar6 = (undefined8 *)(lVar15 + (long)(*piVar17 + 3) * 0x10 + 0x138);
          goto LAB_0345cda0;
        }
        uVar16 = uVar16 - 1;
        piVar17 = piVar17 + 4;
      } while (uVar16 != 0);
    }
    puVar6 = (undefined8 *)FUN_01ecb238(param_2,*(long *)puVar3,3);
LAB_0345cda0:
    uVar8 = (*(code *)*puVar6)(param_2,puVar6[1]);
    lVar15 = *(long *)puVar2;
    if (*(int *)(lVar15 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c(lVar15);
      lVar15 = *(long *)puVar2;
    }
    uVar16 = FUN_034b27d8(uVar8,*(undefined8 *)(*(long *)(lVar15 + 0xb8) + 0x38),0);
    if ((uVar16 & 1) != 0) goto LAB_0345cde0;
    lVar15 = *param_2;
    uVar16 = (ulong)*(ushort *)(lVar15 + 0x12e);
    if (uVar16 != 0) {
      piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) == *(long *)puVar3) {
          puVar6 = (undefined8 *)(lVar15 + (long)(*piVar17 + 3) * 0x10 + 0x138);
          goto LAB_0345d340;
        }
        uVar16 = uVar16 - 1;
        piVar17 = piVar17 + 4;
      } while (uVar16 != 0);
    }
    puVar6 = (undefined8 *)FUN_01ecb238(param_2,*(long *)puVar3,3);
LAB_0345d340:
    uVar8 = (*(code *)*puVar6)(param_2,puVar6[1]);
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c(*(long *)puVar2);
    }
    plVar7 = (long *)FUN_01ed1100(uVar5,uVar8);
    uVar16 = FUN_034b27d8(plVar7,0,0);
    if ((uVar16 & 1) != 0) {
      FUN_01bc50c0(param_2);
      uVar8 = thunk_FUN_01efb3a4(Method_System_Runtime_Serialization_SerializationInfo_SetType__);
      uVar8 = FUN_01bc5a04(4,uVar8,param_2);
      uVar12 = thunk_FUN_01efb3a4(
                                 Method_System_Runtime_Serialization_SerializationInfoEnumerator_get_Name__
                                 );
      uVar5 = FUN_0340f2f0(uVar12,uVar5,uVar8,0);
      thunk_FUN_01efb3a4(Method_System_Reflection_RuntimeMethodInfo_GetGenericMethodDefinition__);
      uVar8 = thunk_FUN_01f117cc();
      FUN_03454990(uVar8,uVar5);
      uVar5 = thunk_FUN_01efb3a4(
                                Method_System_Runtime_Serialization_SerializationInfoEnumerator_get_ObjectType__
                                );
                    /* WARNING: Subroutine does not return */
      FUN_01f08910(uVar8,uVar5);
    }
  }
  else {
LAB_0345cde0:
    lVar15 = *param_2;
    uVar16 = (ulong)*(ushort *)(lVar15 + 0x12e);
    if (uVar16 != 0) {
      piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) == *(long *)puVar3) {
          puVar6 = (undefined8 *)(lVar15 + (long)(*piVar17 + 3) * 0x10 + 0x138);
          goto LAB_0345ce30;
        }
        uVar16 = uVar16 - 1;
        piVar17 = piVar17 + 4;
      } while (uVar16 != 0);
    }
    puVar6 = (undefined8 *)FUN_01ecb238(param_2,*(long *)puVar3,3);
LAB_0345ce30:
    plVar7 = (long *)(*(code *)*puVar6)(param_2,puVar6[1]);
  }
  lVar15 = *param_2;
  uVar16 = (ulong)*(ushort *)(lVar15 + 0x12e);
  if (uVar16 != 0) {
    piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
    do {
      if (*(long *)(piVar17 + -2) == *(long *)puVar3) {
        puVar6 = (undefined8 *)(lVar15 + (long)(*piVar17 + 3) * 0x10 + 0x138);
        goto LAB_0345ce90;
      }
      uVar16 = uVar16 - 1;
      piVar17 = piVar17 + 4;
    } while (uVar16 != 0);
  }
  puVar6 = (undefined8 *)FUN_01ecb238(param_2,*(long *)puVar3,3);
LAB_0345ce90:
  plVar9 = (long *)(*(code *)*puVar6)(param_2,puVar6[1]);
  if (plVar9 != (long *)0x0) {
    uVar16 = (**(code **)(*plVar9 + 0x308))(plVar9,*(undefined8 *)(*plVar9 + 0x310));
    if ((uVar16 & 1) == 0) {
LAB_0345cf8c:
      lVar15 = *param_2;
      uVar16 = (ulong)*(ushort *)(lVar15 + 0x12e);
      if (uVar16 != 0) {
        piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == *(long *)puVar3) {
            puVar6 = (undefined8 *)(lVar15 + (long)(*piVar17 + 2) * 0x10 + 0x138);
            goto LAB_0345cfdc;
          }
          uVar16 = uVar16 - 1;
          piVar17 = piVar17 + 4;
        } while (uVar16 != 0);
      }
      puVar6 = (undefined8 *)FUN_01ecb238(param_2,*(long *)puVar3,2);
LAB_0345cfdc:
      (*(code *)*puVar6)(param_2,puVar6[1]);
      uVar5 = FUN_0345d564();
      lVar15 = *param_2;
      uVar16 = (ulong)*(ushort *)(lVar15 + 0x12e);
      if (uVar16 != 0) {
        piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == *(long *)puVar3) {
            puVar6 = (undefined8 *)(lVar15 + (long)(*piVar17 + 1) * 0x10 + 0x138);
            goto LAB_0345d040;
          }
          uVar16 = uVar16 - 1;
          piVar17 = piVar17 + 4;
        } while (uVar16 != 0);
      }
      puVar6 = (undefined8 *)FUN_01ecb238(param_2,*(long *)puVar3,1);
LAB_0345d040:
      uVar8 = (*(code *)*puVar6)(param_2,puVar6[1]);
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      uVar8 = FUN_01ed1118(plVar7,param_1,uVar8,&local_58);
      if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar15 = (**(code **)(*plVar7 + 0x248))(plVar7,*(undefined8 *)(*plVar7 + 0x250));
      if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      plVar7 = (long *)FUN_01f08890(*(undefined8 *)
                                     Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                                    ,*(undefined4 *)(lVar15 + 0x18));
      uVar14 = *(uint *)(lVar15 + 0x18);
      if ((int)uVar14 < 1) {
        uVar18 = 0;
      }
      else {
        uVar18 = 0;
        uVar19 = 0;
        do {
          if (uVar14 <= uVar18) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a44();
          }
          plVar9 = *(long **)(lVar15 + (long)(int)uVar18 * 8 + 0x20);
          if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          uVar16 = FUN_034b3c14(plVar9,0);
          if ((uVar16 & 1) == 0) {
LAB_0345d10c:
            lVar10 = (**(code **)(*plVar9 + 0x1d8))(plVar9,*(undefined8 *)(*plVar9 + 0x1e0));
            if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a3c();
            }
            uVar16 = FUN_035841f4(lVar10,0);
            if ((uVar16 & 1) == 0) {
              if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01f08a3c();
              }
              if (*(uint *)(plVar7 + 3) <= uVar18) {
                    /* WARNING: Subroutine does not return */
                FUN_01f08a44();
              }
              plVar7[(long)(int)uVar18 + 4] = 0;
              thunk_FUN_01f51358(plVar7 + (long)(int)uVar18 + 4,0);
            }
            else {
              if (local_58 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_01f08a3c();
              }
              if (*(uint *)(local_58 + 0x18) <= uVar19) {
                    /* WARNING: Subroutine does not return */
                FUN_01f08a44();
              }
              if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01f08a3c();
              }
              lVar10 = *(long *)(local_58 + (long)(int)uVar19 * 8 + 0x20);
              if ((lVar10 != 0) &&
                 (lVar11 = thunk_FUN_01f116d0(lVar10,*(undefined8 *)(*plVar7 + 0x40)), lVar11 == 0))
              {
                uVar5 = PrefabSceneManager__LoadSceneAsync();
                    /* WARNING: Subroutine does not return */
                FUN_01f08910(uVar5,0);
              }
              if (*(uint *)(plVar7 + 3) <= uVar18) {
                    /* WARNING: Subroutine does not return */
                FUN_01f08a44();
              }
              plVar7[(long)(int)uVar18 + 4] = lVar10;
              thunk_FUN_01f51358(plVar7 + (long)(int)uVar18 + 4,lVar10);
              uVar19 = uVar19 + 1;
            }
          }
          else {
            lVar10 = (**(code **)(*plVar9 + 0x1d8))(plVar9,*(undefined8 *)(*plVar9 + 0x1e0));
            if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a3c();
            }
            uVar16 = FUN_035841f4(lVar10,0);
            if ((uVar16 & 1) != 0) goto LAB_0345d10c;
            uVar4 = (**(code **)(*plVar9 + 0x1e8))(plVar9,*(undefined8 *)(*plVar9 + 0x1f0));
            lVar10 = *param_2;
            uVar16 = (ulong)*(ushort *)(lVar10 + 0x12e);
            if (uVar16 != 0) {
              piVar17 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
              do {
                if (*(long *)(piVar17 + -2) == *(long *)puVar3) {
                  puVar6 = (undefined8 *)(lVar10 + (long)(*piVar17 + 8) * 0x10 + 0x138);
                  goto LAB_0345d210;
                }
                uVar16 = uVar16 - 1;
                piVar17 = piVar17 + 4;
              } while (uVar16 != 0);
            }
            puVar6 = (undefined8 *)FUN_01ecb238(param_2,*(long *)puVar3,8);
LAB_0345d210:
            lVar10 = (*(code *)*puVar6)(param_2,uVar4,puVar6[1]);
            if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a3c();
            }
            if ((lVar10 != 0) &&
               (lVar11 = thunk_FUN_01f116d0(lVar10,*(undefined8 *)(*plVar7 + 0x40)), lVar11 == 0)) {
              uVar5 = PrefabSceneManager__LoadSceneAsync();
                    /* WARNING: Subroutine does not return */
              FUN_01f08910(uVar5,0);
            }
            if (*(uint *)(plVar7 + 3) <= uVar18) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a44();
            }
            plVar7[(long)(int)uVar18 + 4] = lVar10;
            thunk_FUN_01f51358(plVar7 + (long)(int)uVar18 + 4,lVar10);
          }
          uVar14 = *(uint *)(lVar15 + 0x18);
          uVar18 = uVar18 + 1;
        } while ((int)uVar18 < (int)uVar14);
      }
      lVar15 = FUN_035d3824(0);
      if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar15 = FUN_035d5af0(lVar15,0);
      if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      uVar12 = FUN_035d4504(lVar15,0);
      uVar13 = thunk_FUN_01f117cc(*(undefined8 *)
                                   Method_System_Runtime_Serialization_SerializationInfoEnumerator_get_Current__
                                 );
      FUN_0347e9d0(uVar13,uVar8,plVar7,uVar18,uVar12,param_2,0);
      FUN_0345d564(uVar5);
      return uVar13;
    }
    lVar15 = *param_2;
    uVar16 = (ulong)*(ushort *)(lVar15 + 0x12e);
    if (uVar16 != 0) {
      piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) == *(long *)puVar3) {
          puVar6 = (undefined8 *)(lVar15 + (long)(*piVar17 + 3) * 0x10 + 0x138);
          goto LAB_0345cf04;
        }
        uVar16 = uVar16 - 1;
        piVar17 = piVar17 + 4;
      } while (uVar16 != 0);
    }
    puVar6 = (undefined8 *)FUN_01ecb238(param_2,*(long *)puVar3,3);
LAB_0345cf04:
    plVar9 = (long *)(*(code *)*puVar6)(param_2,puVar6[1]);
    if ((plVar9 != (long *)0x0) &&
       (uVar5 = (**(code **)(*plVar9 + 0x328))(plVar9,*(undefined8 *)(*plVar9 + 0x330)),
       plVar7 != (long *)0x0)) {
      lVar15 = *plVar7;
      bVar1 = *(byte *)(*(long *)
                         Method_UnityEngine_Component_GetComponent<TeleportInputHandlerHMD>__ +
                       0x130);
      if ((*(byte *)(lVar15 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(lVar15 + 200) + (ulong)bVar1 * 8 + -8) !=
          *(long *)Method_UnityEngine_Component_GetComponent<TeleportInputHandlerHMD>__)) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08cfc(plVar7);
      }
      plVar7 = (long *)(**(code **)(lVar15 + 0x3f8))(plVar7,*(undefined8 *)(lVar15 + 0x400));
      if (plVar7 != (long *)0x0) {
        plVar7 = (long *)(**(code **)(*plVar7 + 0x408))
                                   (plVar7,uVar5,*(undefined8 *)(*plVar7 + 0x410));
        goto LAB_0345cf8c;
      }
    }
  }
LAB_0345d428:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


