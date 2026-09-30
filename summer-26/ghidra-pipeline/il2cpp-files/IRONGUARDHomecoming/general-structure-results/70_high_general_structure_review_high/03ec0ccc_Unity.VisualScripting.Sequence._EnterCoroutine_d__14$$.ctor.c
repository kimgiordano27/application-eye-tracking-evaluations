/*
FUNCTION_NAME: Unity.VisualScripting.Sequence.<EnterCoroutine>d__14$$.ctor
ENTRY_POINT: 03ec0ccc
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 84
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ray_interaction;telemetry;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_19;strong_pose_or_ray_construction_hits_8;ray_or_cast_sink_hits_1;telemetry_or_network_hits_1;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;negative_generic_transform_raycast_without_eye_source_or_attempt
*/


long * Unity_VisualScripting_Sequence_<EnterCoroutine>d__14___ctor
                 (long param_1,undefined8 param_2,long param_3)

{
  byte bVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  int iVar6;
  long *plVar7;
  undefined8 *puVar8;
  long *plVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  ulong in_x9;
  ulong uVar14;
  int *piVar15;
  long in_x10;
  long *unaff_x19;
  int unaff_w20;
  long *unaff_x21;
  long *unaff_x22;
  long *unaff_x23;
  int unaff_w24;
  long *unaff_x26;
  long *unaff_x27;
  long *unaff_x28;
  long *unaff_x29;
  undefined4 uStack0000000000000008;
  undefined4 uStack000000000000000c;
  
code_r0x03ec0ccc:
  piVar15 = (int *)(in_x10 + 8);
  do {
    if (*(long *)(piVar15 + -2) == param_3) {
      puVar8 = (undefined8 *)(param_1 + (long)(*piVar15 + 1) * 0x10 + 0x138);
      goto LAB_03ec0d08;
    }
    in_x9 = in_x9 - 1;
    piVar15 = piVar15 + 4;
  } while (in_x9 != 0);
LAB_03ec0ce8:
  puVar8 = (undefined8 *)FUN_01ecb238(unaff_x23,param_3,1);
LAB_03ec0d08:
  iVar6 = (*(code *)*puVar8)(unaff_x23,puVar8[1]);
  if (unaff_w24 < iVar6) {
    lVar12 = *unaff_x23;
    uVar14 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar14 != 0) {
      piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == *unaff_x27) {
          puVar8 = (undefined8 *)(lVar12 + (long)*piVar15 * 0x10 + 0x138);
          goto Unity_VisualScripting_Sequence_<EnterCoroutine>d__14__MoveNext;
        }
        uVar14 = uVar14 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar14 != 0);
    }
    puVar8 = (undefined8 *)FUN_01ecb238(unaff_x23,*unaff_x27,0);
Unity_VisualScripting_Sequence_<EnterCoroutine>d__14__MoveNext:
    plVar9 = (long *)(*(code *)*puVar8)(unaff_x23,unaff_w24,puVar8[1]);
    if (plVar9 != (long *)0x0) {
      bVar2 = *(byte *)(*unaff_x29 + 0x130);
      if ((*(byte *)(*plVar9 + 0x130) < bVar2) ||
         (*(long *)(*(long *)(*plVar9 + 200) + (ulong)bVar2 * 8 + -8) != *unaff_x29)) {
LAB_03ec10b4:
                    /* WARNING: Subroutine does not return */
        FUN_01f08cfc(plVar9);
      }
      if (unaff_x21 != (long *)0x0) {
        iVar6 = *(int *)((long)unaff_x21 + 0x14);
        if (iVar6 == *(int *)((long)plVar9 + 0x14)) {
          plVar7 = plVar9 + 3;
          lVar12 = Unity_VisualScripting_SwitchOnEnum__Enter(plVar9,*unaff_x22,*plVar7);
          *plVar7 = lVar12;
          thunk_FUN_01f51358(plVar7,lVar12);
          lVar12 = *unaff_x19;
          uVar14 = (ulong)*(ushort *)(lVar12 + 0x12e);
          if (uVar14 != 0) {
            piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
            do {
              if (*(long *)(piVar15 + -2) == *unaff_x27) {
                puVar8 = (undefined8 *)(lVar12 + (long)(*piVar15 + 1) * 0x10 + 0x138);
                goto LAB_03ec0e40;
              }
              uVar14 = uVar14 - 1;
              piVar15 = piVar15 + 4;
            } while (uVar14 != 0);
          }
          puVar8 = (undefined8 *)FUN_01ecb238();
LAB_03ec0e40:
          (*(code *)*puVar8)();
        }
        else if ((*(int *)((long)plVar9 + 0x14) <= iVar6) && (iVar6 <= (int)plVar9[5])) {
          uVar10 = thunk_FUN_01efb3a4(
                                     Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                                     );
          uVar10 = FUN_01f08890(uVar10,4);
          FUN_01bc50c0();
          puVar3 = PTR_DAT_0457bb18;
          uVar11 = thunk_FUN_01efb3a4(PTR_DAT_0457bb18);
          FUN_01bc56ec(uVar10,uVar11);
          uVar11 = thunk_FUN_01efb3a4(puVar3);
          FUN_01bc5408(uVar10,0,uVar11);
          FUN_01bc50c0(uVar10);
          FUN_01bc56ec(uVar10,unaff_x21);
          FUN_01bc5408(uVar10,1,unaff_x21);
          FUN_01bc50c0(uVar10);
          puVar3 = PTR_DAT_0457bb20;
          uVar11 = thunk_FUN_01efb3a4(PTR_DAT_0457bb20);
          FUN_01bc56ec(uVar10,uVar11);
          uVar11 = thunk_FUN_01efb3a4(puVar3);
          FUN_01bc5408(uVar10,2,uVar11);
          FUN_01bc50c0(uVar10);
          FUN_01bc56ec(uVar10,plVar9);
          FUN_01bc5408(uVar10,3,plVar9);
          uVar10 = FUN_0340ec80(uVar10,0);
          thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__);
          uVar11 = thunk_FUN_01f117cc();
          FUN_034f7db4(uVar11,uVar10,0);
          uVar10 = thunk_FUN_01efb3a4(PTR_DAT_0457bb28);
                    /* WARNING: Subroutine does not return */
          FUN_01f08910(uVar11,uVar10);
        }
        unaff_w24 = unaff_w24 + 1;
        goto LAB_03ec0cb8;
      }
    }
  }
  else {
    do {
      do {
        unaff_w20 = unaff_w20 + 1;
        lVar12 = *unaff_x19;
        uVar14 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar14 != 0) {
          piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar15 + -2) == *unaff_x26) {
              puVar8 = (undefined8 *)(lVar12 + (long)(*piVar15 + 1) * 0x10 + 0x138);
              goto LAB_03ec0928;
            }
            uVar14 = uVar14 - 1;
            piVar15 = piVar15 + 4;
          } while (uVar14 != 0);
        }
        puVar8 = (undefined8 *)FUN_01ecb238();
LAB_03ec0928:
        iVar6 = (*(code *)*puVar8)();
        if (iVar6 <= unaff_w20) {
          plVar9 = (long *)thunk_FUN_01f117cc(*(undefined8 *)
                                               Method_System_RuntimeType_CreateInstanceImpl__);
          FUN_03546db4(plVar9,0);
          puVar4 = Method_UnityEngine_Component_GetComponents<BaseRaycaster>__;
          puVar3 = Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__;
          iVar6 = 0;
          goto LAB_03ec0e8c;
        }
        lVar12 = *unaff_x19;
        uVar14 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar14 != 0) {
          piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar15 + -2) == *unaff_x27) {
              puVar8 = (undefined8 *)(lVar12 + (long)*piVar15 * 0x10 + 0x138);
              goto LAB_03ec0988;
            }
            uVar14 = uVar14 - 1;
            piVar15 = piVar15 + 4;
          } while (uVar14 != 0);
        }
        puVar8 = (undefined8 *)FUN_01ecb238();
LAB_03ec0988:
        plVar9 = (long *)(*(code *)*puVar8)();
      } while (plVar9 == (long *)0x0);
      bVar2 = *(byte *)(*plVar9 + 0x130);
      bVar1 = *(byte *)(*(long *)PTR_DAT_0457baf0 + 0x130);
      if ((bVar2 < bVar1) ||
         (lVar12 = *(long *)(*plVar9 + 200),
         *(long *)(lVar12 + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_0457baf0)) goto LAB_03ec10b4;
      bVar1 = *(byte *)(*unaff_x28 + 0x130);
    } while ((bVar2 < bVar1) || (*(long *)(lVar12 + (ulong)bVar1 * 8 + -8) != *unaff_x28));
    lVar12 = *unaff_x19;
    uVar14 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar14 != 0) {
      piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == *unaff_x27) {
          puVar8 = (undefined8 *)(lVar12 + (long)*piVar15 * 0x10 + 0x138);
          goto LAB_03ec0a44;
        }
        uVar14 = uVar14 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar14 != 0);
    }
    puVar8 = (undefined8 *)FUN_01ecb238();
LAB_03ec0a44:
    unaff_x21 = (long *)(*(code *)*puVar8)();
    if (unaff_x21 != (long *)0x0) {
      bVar2 = *(byte *)(*unaff_x28 + 0x130);
      if ((*(byte *)(*unaff_x21 + 0x130) < bVar2) ||
         (*(long *)(*(long *)(*unaff_x21 + 200) + (ulong)bVar2 * 8 + -8) != *unaff_x28)) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08cfc(unaff_x21);
      }
    }
    uVar10 = *(undefined8 *)PTR_DAT_0457baf8;
    if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__ + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    FUN_03579868(uVar10,0);
    plVar7 = (long *)FUN_03ec1308();
    if (plVar7 != (long *)0x0) {
      iVar6 = 0;
      unaff_x22 = unaff_x21 + 3;
      do {
        lVar12 = *plVar7;
        uVar14 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar14 != 0) {
          piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar15 + -2) == *unaff_x26) {
              puVar8 = (undefined8 *)(lVar12 + (long)(*piVar15 + 1) * 0x10 + 0x138);
              goto LAB_03ec0b28;
            }
            uVar14 = uVar14 - 1;
            piVar15 = piVar15 + 4;
          } while (uVar14 != 0);
        }
        puVar8 = (undefined8 *)FUN_01ecb238(plVar7,*unaff_x26,1);
LAB_03ec0b28:
        iVar5 = (*(code *)*puVar8)(plVar7,puVar8[1]);
        if (iVar5 <= iVar6) goto LAB_03ec0c6c;
        lVar12 = *plVar7;
        uVar14 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar14 != 0) {
          piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar15 + -2) == *unaff_x27) {
              puVar8 = (undefined8 *)(lVar12 + (long)*piVar15 * 0x10 + 0x138);
              goto LAB_03ec0b88;
            }
            uVar14 = uVar14 - 1;
            piVar15 = piVar15 + 4;
          } while (uVar14 != 0);
        }
        puVar8 = (undefined8 *)FUN_01ecb238(plVar7,*unaff_x27,0);
LAB_03ec0b88:
        plVar9 = (long *)(*(code *)*puVar8)(plVar7,iVar6,puVar8[1]);
        if (plVar9 == (long *)0x0) break;
        bVar2 = *(byte *)(*unaff_x28 + 0x130);
        if ((*(byte *)(*plVar9 + 0x130) < bVar2) ||
           (*(long *)(*(long *)(*plVar9 + 200) + (ulong)bVar2 * 8 + -8) != *unaff_x28))
        goto LAB_03ec10b4;
        if (unaff_x21 == (long *)0x0) break;
        if (*(int *)((long)plVar9 + 0x14) == *(int *)((long)unaff_x21 + 0x14)) {
          lVar12 = Unity_VisualScripting_SwitchOnEnum__Enter(plVar9,*unaff_x22,plVar9[3]);
          *unaff_x22 = lVar12;
          thunk_FUN_01f51358(unaff_x22,lVar12);
          lVar12 = *unaff_x19;
          uVar14 = (ulong)*(ushort *)(lVar12 + 0x12e);
          if (uVar14 != 0) {
            piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
            do {
              if (*(long *)(piVar15 + -2) == *unaff_x27) {
                puVar8 = (undefined8 *)(lVar12 + (long)(*piVar15 + 1) * 0x10 + 0x138);
                goto LAB_03ec0c50;
              }
              uVar14 = uVar14 - 1;
              piVar15 = piVar15 + 4;
            } while (uVar14 != 0);
          }
          puVar8 = (undefined8 *)FUN_01ecb238();
LAB_03ec0c50:
          (*(code *)*puVar8)();
        }
        iVar6 = iVar6 + 1;
      } while( true );
    }
  }
  goto LAB_03ec10ac;
LAB_03ec0e8c:
  lVar12 = *unaff_x19;
  uVar14 = (ulong)*(ushort *)(lVar12 + 0x12e);
  if (uVar14 != 0) {
    piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
    do {
      if (*(long *)(piVar15 + -2) == *unaff_x26) {
        puVar8 = (undefined8 *)(lVar12 + (long)(*piVar15 + 1) * 0x10 + 0x138);
        goto LAB_03ec0edc;
      }
      uVar14 = uVar14 - 1;
      piVar15 = piVar15 + 4;
    } while (uVar14 != 0);
  }
  puVar8 = (undefined8 *)FUN_01ecb238();
LAB_03ec0edc:
  iVar5 = (*(code *)*puVar8)();
  if (iVar5 <= iVar6) {
    return plVar9;
  }
  lVar12 = *unaff_x19;
  uVar14 = (ulong)*(ushort *)(lVar12 + 0x12e);
  if (uVar14 != 0) {
    piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
    do {
      if (*(long *)(piVar15 + -2) == *unaff_x27) {
        puVar8 = (undefined8 *)(lVar12 + (long)*piVar15 * 0x10 + 0x138);
        goto LAB_03ec0f3c;
      }
      uVar14 = uVar14 - 1;
      piVar15 = piVar15 + 4;
    } while (uVar14 != 0);
  }
  puVar8 = (undefined8 *)FUN_01ecb238();
LAB_03ec0f3c:
  plVar7 = (long *)(*(code *)*puVar8)();
  if (plVar7 != (long *)0x0) {
    bVar2 = *(byte *)(*(long *)PTR_DAT_0457baf0 + 0x130);
    if ((*(byte *)(*plVar7 + 0x130) < bVar2) ||
       (*(long *)(*(long *)(*plVar7 + 200) + (ulong)bVar2 * 8 + -8) != *(long *)PTR_DAT_0457baf0)) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08cfc(plVar7);
    }
    uStack000000000000000c = *(undefined4 *)((long)plVar7 + 0x14);
    uVar10 = thunk_FUN_01f113fc(*(undefined8 *)puVar3,(long)&stack0x00000008 + 4);
    if (plVar9 == (long *)0x0) {
LAB_03ec10ac:
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar13 = *plVar9;
    lVar12 = *(long *)puVar4;
    uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar14 != 0) {
      piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == lVar12) {
          puVar8 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
          goto LAB_03ec0ff0;
        }
        uVar14 = uVar14 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar14 != 0);
    }
    puVar8 = (undefined8 *)FUN_01ecb238(plVar9,lVar12,0);
LAB_03ec0ff0:
    lVar12 = (*(code *)*puVar8)(plVar9,uVar10,puVar8[1]);
    if (lVar12 != 0) {
      thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<AssetFileDeleteResult>_get_Data__);
      uVar10 = thunk_FUN_01f117cc();
      uVar11 = thunk_FUN_01efb3a4(PTR_DAT_0457bb30);
      Oculus_Interaction_Input_SyntheticHand__SetJointFreedom(uVar10,uVar11,0);
      uVar11 = thunk_FUN_01efb3a4(PTR_DAT_0457bb28);
                    /* WARNING: Subroutine does not return */
      FUN_01f08910(uVar10,uVar11);
    }
    uStack0000000000000008 = *(undefined4 *)((long)plVar7 + 0x14);
    uVar10 = thunk_FUN_01f113fc(*(undefined8 *)puVar3,&stack0x00000008);
    lVar13 = *plVar9;
    lVar12 = *(long *)puVar4;
    uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar14 != 0) {
      piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == lVar12) {
          puVar8 = (undefined8 *)(lVar13 + (long)(*piVar15 + 1) * 0x10 + 0x138);
          goto LAB_03ec106c;
        }
        uVar14 = uVar14 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar14 != 0);
    }
    puVar8 = (undefined8 *)FUN_01ecb238(plVar9,lVar12,1);
LAB_03ec106c:
    (*(code *)*puVar8)(plVar9,uVar10,plVar7,puVar8[1]);
  }
  iVar6 = iVar6 + 1;
  goto LAB_03ec0e8c;
LAB_03ec0c6c:
  uVar10 = *(undefined8 *)PTR_DAT_0457bb00;
  if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__ + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  FUN_03579868(uVar10,0);
  unaff_x23 = (long *)FUN_03ec1308();
  if (unaff_x23 == (long *)0x0) goto LAB_03ec10ac;
  unaff_w24 = 0;
LAB_03ec0cb8:
  param_1 = *unaff_x23;
  param_3 = *unaff_x26;
  in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
  if (in_x9 != 0) goto code_r0x03ec0cc8;
  goto LAB_03ec0ce8;
code_r0x03ec0cc8:
  in_x10 = *(long *)(param_1 + 0xb0);
  goto code_r0x03ec0ccc;
}


