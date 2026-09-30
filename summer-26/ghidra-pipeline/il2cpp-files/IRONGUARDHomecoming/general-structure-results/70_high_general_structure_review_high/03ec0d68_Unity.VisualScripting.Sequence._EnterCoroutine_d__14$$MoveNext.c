/*
FUNCTION_NAME: Unity.VisualScripting.Sequence.<EnterCoroutine>d__14$$MoveNext
ENTRY_POINT: 03ec0d68
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


long * Unity_VisualScripting_Sequence_<EnterCoroutine>d__14__MoveNext(undefined8 *param_1)

{
  byte bVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  int iVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  long lVar12;
  ulong uVar13;
  int *piVar14;
  long *unaff_x19;
  int unaff_w20;
  long *unaff_x21;
  undefined8 uVar15;
  long *unaff_x22;
  long *unaff_x23;
  int unaff_w24;
  long *unaff_x26;
  long *unaff_x27;
  long *unaff_x28;
  long *unaff_x29;
  undefined4 uStack0000000000000008;
  undefined4 uStack000000000000000c;
  
code_r0x03ec0d68:
  plVar8 = (long *)(*(code *)*param_1)(unaff_x23,unaff_w24,param_1[1]);
  if (plVar8 != (long *)0x0) {
    bVar2 = *(byte *)(*unaff_x29 + 0x130);
    if ((*(byte *)(*plVar8 + 0x130) < bVar2) ||
       (*(long *)(*(long *)(*plVar8 + 200) + (ulong)bVar2 * 8 + -8) != *unaff_x29)) {
LAB_03ec10b4:
                    /* WARNING: Subroutine does not return */
      FUN_01f08cfc(plVar8);
    }
    if (unaff_x21 == (long *)0x0) goto LAB_03ec10ac;
    iVar6 = *(int *)((long)unaff_x21 + 0x14);
    if (iVar6 == *(int *)((long)plVar8 + 0x14)) {
      plVar7 = plVar8 + 3;
      lVar9 = Unity_VisualScripting_SwitchOnEnum__Enter(plVar8,*unaff_x22,*plVar7);
      *plVar7 = lVar9;
      thunk_FUN_01f51358(plVar7,lVar9);
      lVar9 = *unaff_x19;
      uVar13 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar13 != 0) {
        piVar14 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == *unaff_x27) {
            puVar10 = (undefined8 *)(lVar9 + (long)(*piVar14 + 1) * 0x10 + 0x138);
            goto LAB_03ec0e40;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
      puVar10 = (undefined8 *)FUN_01ecb238();
LAB_03ec0e40:
      (*(code *)*puVar10)();
    }
    else if ((*(int *)((long)plVar8 + 0x14) <= iVar6) && (iVar6 <= (int)plVar8[5])) {
      uVar15 = thunk_FUN_01efb3a4(
                                 Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                                 );
      uVar15 = FUN_01f08890(uVar15,4);
      FUN_01bc50c0();
      puVar3 = PTR_DAT_0457bb18;
      uVar11 = thunk_FUN_01efb3a4(PTR_DAT_0457bb18);
      FUN_01bc56ec(uVar15,uVar11);
      uVar11 = thunk_FUN_01efb3a4(puVar3);
      FUN_01bc5408(uVar15,0,uVar11);
      FUN_01bc50c0(uVar15);
      FUN_01bc56ec(uVar15,unaff_x21);
      FUN_01bc5408(uVar15,1,unaff_x21);
      FUN_01bc50c0(uVar15);
      puVar3 = PTR_DAT_0457bb20;
      uVar11 = thunk_FUN_01efb3a4(PTR_DAT_0457bb20);
      FUN_01bc56ec(uVar15,uVar11);
      uVar11 = thunk_FUN_01efb3a4(puVar3);
      FUN_01bc5408(uVar15,2,uVar11);
      FUN_01bc50c0(uVar15);
      FUN_01bc56ec(uVar15,plVar8);
      FUN_01bc5408(uVar15,3,plVar8);
      uVar15 = FUN_0340ec80(uVar15,0);
      thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__);
      uVar11 = thunk_FUN_01f117cc();
      FUN_034f7db4(uVar11,uVar15,0);
      uVar15 = thunk_FUN_01efb3a4(PTR_DAT_0457bb28);
                    /* WARNING: Subroutine does not return */
      FUN_01f08910(uVar11,uVar15);
    }
    unaff_w24 = unaff_w24 + 1;
LAB_03ec0cb8:
    lVar9 = *unaff_x23;
    uVar13 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar13 != 0) {
      piVar14 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *unaff_x26) {
          puVar10 = (undefined8 *)(lVar9 + (long)(*piVar14 + 1) * 0x10 + 0x138);
          goto LAB_03ec0d08;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    puVar10 = (undefined8 *)FUN_01ecb238(unaff_x23,*unaff_x26,1);
LAB_03ec0d08:
    iVar6 = (*(code *)*puVar10)(unaff_x23,puVar10[1]);
    if (iVar6 <= unaff_w24) {
      do {
        do {
          unaff_w20 = unaff_w20 + 1;
          lVar9 = *unaff_x19;
          uVar13 = (ulong)*(ushort *)(lVar9 + 0x12e);
          if (uVar13 != 0) {
            piVar14 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
            do {
              if (*(long *)(piVar14 + -2) == *unaff_x26) {
                puVar10 = (undefined8 *)(lVar9 + (long)(*piVar14 + 1) * 0x10 + 0x138);
                goto LAB_03ec0928;
              }
              uVar13 = uVar13 - 1;
              piVar14 = piVar14 + 4;
            } while (uVar13 != 0);
          }
          puVar10 = (undefined8 *)FUN_01ecb238();
LAB_03ec0928:
          iVar6 = (*(code *)*puVar10)();
          if (iVar6 <= unaff_w20) {
            plVar8 = (long *)thunk_FUN_01f117cc(*(undefined8 *)
                                                 Method_System_RuntimeType_CreateInstanceImpl__);
            FUN_03546db4(plVar8,0);
            puVar4 = Method_UnityEngine_Component_GetComponents<BaseRaycaster>__;
            puVar3 = Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__;
            iVar6 = 0;
            goto LAB_03ec0e8c;
          }
          lVar9 = *unaff_x19;
          uVar13 = (ulong)*(ushort *)(lVar9 + 0x12e);
          if (uVar13 != 0) {
            piVar14 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
            do {
              if (*(long *)(piVar14 + -2) == *unaff_x27) {
                puVar10 = (undefined8 *)(lVar9 + (long)*piVar14 * 0x10 + 0x138);
                goto LAB_03ec0988;
              }
              uVar13 = uVar13 - 1;
              piVar14 = piVar14 + 4;
            } while (uVar13 != 0);
          }
          puVar10 = (undefined8 *)FUN_01ecb238();
LAB_03ec0988:
          plVar8 = (long *)(*(code *)*puVar10)();
        } while (plVar8 == (long *)0x0);
        bVar2 = *(byte *)(*plVar8 + 0x130);
        bVar1 = *(byte *)(*(long *)PTR_DAT_0457baf0 + 0x130);
        if ((bVar2 < bVar1) ||
           (lVar9 = *(long *)(*plVar8 + 200),
           *(long *)(lVar9 + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_0457baf0))
        goto LAB_03ec10b4;
        bVar1 = *(byte *)(*unaff_x28 + 0x130);
      } while ((bVar2 < bVar1) || (*(long *)(lVar9 + (ulong)bVar1 * 8 + -8) != *unaff_x28));
      lVar9 = *unaff_x19;
      uVar13 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar13 != 0) {
        piVar14 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == *unaff_x27) {
            puVar10 = (undefined8 *)(lVar9 + (long)*piVar14 * 0x10 + 0x138);
            goto LAB_03ec0a44;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
      puVar10 = (undefined8 *)FUN_01ecb238();
LAB_03ec0a44:
      unaff_x21 = (long *)(*(code *)*puVar10)();
      if (unaff_x21 != (long *)0x0) {
        bVar2 = *(byte *)(*unaff_x28 + 0x130);
        if ((*(byte *)(*unaff_x21 + 0x130) < bVar2) ||
           (*(long *)(*(long *)(*unaff_x21 + 200) + (ulong)bVar2 * 8 + -8) != *unaff_x28)) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08cfc(unaff_x21);
        }
      }
      uVar15 = *(undefined8 *)PTR_DAT_0457baf8;
      if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__ + 0xe0) == 0)
      {
        thunk_FUN_01ee6d7c();
      }
      FUN_03579868(uVar15,0);
      plVar7 = (long *)FUN_03ec1308();
      if (plVar7 != (long *)0x0) {
        iVar6 = 0;
        unaff_x22 = unaff_x21 + 3;
        do {
          lVar9 = *plVar7;
          uVar13 = (ulong)*(ushort *)(lVar9 + 0x12e);
          if (uVar13 != 0) {
            piVar14 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
            do {
              if (*(long *)(piVar14 + -2) == *unaff_x26) {
                puVar10 = (undefined8 *)(lVar9 + (long)(*piVar14 + 1) * 0x10 + 0x138);
                goto LAB_03ec0b28;
              }
              uVar13 = uVar13 - 1;
              piVar14 = piVar14 + 4;
            } while (uVar13 != 0);
          }
          puVar10 = (undefined8 *)FUN_01ecb238(plVar7,*unaff_x26,1);
LAB_03ec0b28:
          iVar5 = (*(code *)*puVar10)(plVar7,puVar10[1]);
          if (iVar5 <= iVar6) goto LAB_03ec0c6c;
          lVar9 = *plVar7;
          uVar13 = (ulong)*(ushort *)(lVar9 + 0x12e);
          if (uVar13 != 0) {
            piVar14 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
            do {
              if (*(long *)(piVar14 + -2) == *unaff_x27) {
                puVar10 = (undefined8 *)(lVar9 + (long)*piVar14 * 0x10 + 0x138);
                goto LAB_03ec0b88;
              }
              uVar13 = uVar13 - 1;
              piVar14 = piVar14 + 4;
            } while (uVar13 != 0);
          }
          puVar10 = (undefined8 *)FUN_01ecb238(plVar7,*unaff_x27,0);
LAB_03ec0b88:
          plVar8 = (long *)(*(code *)*puVar10)(plVar7,iVar6,puVar10[1]);
          if (plVar8 == (long *)0x0) break;
          bVar2 = *(byte *)(*unaff_x28 + 0x130);
          if ((*(byte *)(*plVar8 + 0x130) < bVar2) ||
             (*(long *)(*(long *)(*plVar8 + 200) + (ulong)bVar2 * 8 + -8) != *unaff_x28))
          goto LAB_03ec10b4;
          if (unaff_x21 == (long *)0x0) break;
          if (*(int *)((long)plVar8 + 0x14) == *(int *)((long)unaff_x21 + 0x14)) {
            lVar9 = Unity_VisualScripting_SwitchOnEnum__Enter(plVar8,*unaff_x22,plVar8[3]);
            *unaff_x22 = lVar9;
            thunk_FUN_01f51358(unaff_x22,lVar9);
            lVar9 = *unaff_x19;
            uVar13 = (ulong)*(ushort *)(lVar9 + 0x12e);
            if (uVar13 != 0) {
              piVar14 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
              do {
                if (*(long *)(piVar14 + -2) == *unaff_x27) {
                  puVar10 = (undefined8 *)(lVar9 + (long)(*piVar14 + 1) * 0x10 + 0x138);
                  goto LAB_03ec0c50;
                }
                uVar13 = uVar13 - 1;
                piVar14 = piVar14 + 4;
              } while (uVar13 != 0);
            }
            puVar10 = (undefined8 *)FUN_01ecb238();
LAB_03ec0c50:
            (*(code *)*puVar10)();
          }
          iVar6 = iVar6 + 1;
        } while( true );
      }
      goto LAB_03ec10ac;
    }
    lVar9 = *unaff_x23;
    uVar13 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar13 != 0) {
      piVar14 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *unaff_x27) {
          param_1 = (undefined8 *)(lVar9 + (long)*piVar14 * 0x10 + 0x138);
          goto code_r0x03ec0d68;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    param_1 = (undefined8 *)FUN_01ecb238(unaff_x23,*unaff_x27,0);
    goto code_r0x03ec0d68;
  }
LAB_03ec10ac:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
LAB_03ec0e8c:
  lVar9 = *unaff_x19;
  uVar13 = (ulong)*(ushort *)(lVar9 + 0x12e);
  if (uVar13 != 0) {
    piVar14 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
    do {
      if (*(long *)(piVar14 + -2) == *unaff_x26) {
        puVar10 = (undefined8 *)(lVar9 + (long)(*piVar14 + 1) * 0x10 + 0x138);
        goto LAB_03ec0edc;
      }
      uVar13 = uVar13 - 1;
      piVar14 = piVar14 + 4;
    } while (uVar13 != 0);
  }
  puVar10 = (undefined8 *)FUN_01ecb238();
LAB_03ec0edc:
  iVar5 = (*(code *)*puVar10)();
  if (iVar5 <= iVar6) {
    return plVar8;
  }
  lVar9 = *unaff_x19;
  uVar13 = (ulong)*(ushort *)(lVar9 + 0x12e);
  if (uVar13 != 0) {
    piVar14 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
    do {
      if (*(long *)(piVar14 + -2) == *unaff_x27) {
        puVar10 = (undefined8 *)(lVar9 + (long)*piVar14 * 0x10 + 0x138);
        goto LAB_03ec0f3c;
      }
      uVar13 = uVar13 - 1;
      piVar14 = piVar14 + 4;
    } while (uVar13 != 0);
  }
  puVar10 = (undefined8 *)FUN_01ecb238();
LAB_03ec0f3c:
  plVar7 = (long *)(*(code *)*puVar10)();
  if (plVar7 != (long *)0x0) {
    bVar2 = *(byte *)(*(long *)PTR_DAT_0457baf0 + 0x130);
    if ((*(byte *)(*plVar7 + 0x130) < bVar2) ||
       (*(long *)(*(long *)(*plVar7 + 200) + (ulong)bVar2 * 8 + -8) != *(long *)PTR_DAT_0457baf0)) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08cfc(plVar7);
    }
    uStack000000000000000c = *(undefined4 *)((long)plVar7 + 0x14);
    uVar15 = thunk_FUN_01f113fc(*(undefined8 *)puVar3,(long)&stack0x00000008 + 4);
    if (plVar8 == (long *)0x0) goto LAB_03ec10ac;
    lVar12 = *plVar8;
    lVar9 = *(long *)puVar4;
    uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar13 != 0) {
      piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == lVar9) {
          puVar10 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
          goto LAB_03ec0ff0;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    puVar10 = (undefined8 *)FUN_01ecb238(plVar8,lVar9,0);
LAB_03ec0ff0:
    lVar9 = (*(code *)*puVar10)(plVar8,uVar15,puVar10[1]);
    if (lVar9 != 0) {
      thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<AssetFileDeleteResult>_get_Data__);
      uVar15 = thunk_FUN_01f117cc();
      uVar11 = thunk_FUN_01efb3a4(PTR_DAT_0457bb30);
      Oculus_Interaction_Input_SyntheticHand__SetJointFreedom(uVar15,uVar11,0);
      uVar11 = thunk_FUN_01efb3a4(PTR_DAT_0457bb28);
                    /* WARNING: Subroutine does not return */
      FUN_01f08910(uVar15,uVar11);
    }
    uStack0000000000000008 = *(undefined4 *)((long)plVar7 + 0x14);
    uVar15 = thunk_FUN_01f113fc(*(undefined8 *)puVar3,&stack0x00000008);
    lVar12 = *plVar8;
    lVar9 = *(long *)puVar4;
    uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar13 != 0) {
      piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == lVar9) {
          puVar10 = (undefined8 *)(lVar12 + (long)(*piVar14 + 1) * 0x10 + 0x138);
          goto LAB_03ec106c;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    puVar10 = (undefined8 *)FUN_01ecb238(plVar8,lVar9,1);
LAB_03ec106c:
    (*(code *)*puVar10)(plVar8,uVar15,plVar7,puVar10[1]);
  }
  iVar6 = iVar6 + 1;
  goto LAB_03ec0e8c;
LAB_03ec0c6c:
  uVar15 = *(undefined8 *)PTR_DAT_0457bb00;
  if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__ + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  FUN_03579868(uVar15,0);
  unaff_x23 = (long *)FUN_03ec1308();
  if (unaff_x23 == (long *)0x0) goto LAB_03ec10ac;
  unaff_w24 = 0;
  goto LAB_03ec0cb8;
}


