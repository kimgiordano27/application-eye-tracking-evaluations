/*
FUNCTION_NAME: Unity.VisualScripting.Sequence$$EnterCoroutine
ENTRY_POINT: 03ec0c44
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 84
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ray_interaction;telemetry;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_20;strong_pose_or_ray_construction_hits_8;ray_or_cast_sink_hits_1;telemetry_or_network_hits_1;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;negative_generic_transform_raycast_without_eye_source_or_attempt
*/


long * Unity_VisualScripting_Sequence__EnterCoroutine(long param_1)

{
  byte bVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  int iVar6;
  undefined8 *puVar7;
  long *plVar8;
  long *plVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  int in_w9;
  ulong uVar13;
  int *piVar14;
  long *unaff_x19;
  int unaff_w20;
  long *unaff_x21;
  long *unaff_x22;
  long *unaff_x23;
  undefined8 uVar15;
  int unaff_w24;
  long *plVar16;
  long *unaff_x26;
  long *unaff_x27;
  long *unaff_x28;
  long *unaff_x29;
  undefined4 uStack0000000000000008;
  undefined4 uStack000000000000000c;
  
code_r0x03ec0c44:
  puVar7 = (undefined8 *)(param_1 + (long)(in_w9 + 1) * 0x10 + 0x138);
  do {
    (*(code *)*puVar7)();
    do {
      unaff_w24 = unaff_w24 + 1;
LAB_03ec0ad8:
      lVar11 = *unaff_x23;
      uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar13 != 0) {
        piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == *unaff_x26) {
            puVar7 = (undefined8 *)(lVar11 + (long)(*piVar14 + 1) * 0x10 + 0x138);
            goto LAB_03ec0b28;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
      puVar7 = (undefined8 *)FUN_01ecb238(unaff_x23,*unaff_x26,1);
LAB_03ec0b28:
      iVar5 = (*(code *)*puVar7)(unaff_x23,puVar7[1]);
      if (iVar5 <= unaff_w24) {
        uVar15 = *(undefined8 *)PTR_DAT_0457bb00;
        if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__ + 0xe0) == 0
           ) {
          thunk_FUN_01ee6d7c();
        }
        FUN_03579868(uVar15,0);
        plVar9 = (long *)FUN_03ec1308();
        if (plVar9 != (long *)0x0) {
          iVar5 = 0;
          do {
            lVar11 = *plVar9;
            uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
            if (uVar13 != 0) {
              piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
              do {
                if (*(long *)(piVar14 + -2) == *unaff_x26) {
                  puVar7 = (undefined8 *)(lVar11 + (long)(*piVar14 + 1) * 0x10 + 0x138);
                  goto LAB_03ec0d08;
                }
                uVar13 = uVar13 - 1;
                piVar14 = piVar14 + 4;
              } while (uVar13 != 0);
            }
            puVar7 = (undefined8 *)FUN_01ecb238(plVar9,*unaff_x26,1);
LAB_03ec0d08:
            iVar6 = (*(code *)*puVar7)(plVar9,puVar7[1]);
            if (iVar6 <= iVar5) goto LAB_03ec08d8;
            lVar11 = *plVar9;
            uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
            if (uVar13 != 0) {
              piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
              do {
                if (*(long *)(piVar14 + -2) == *unaff_x27) {
                  puVar7 = (undefined8 *)(lVar11 + (long)*piVar14 * 0x10 + 0x138);
                  goto Unity_VisualScripting_Sequence_<EnterCoroutine>d__14__MoveNext;
                }
                uVar13 = uVar13 - 1;
                piVar14 = piVar14 + 4;
              } while (uVar13 != 0);
            }
            puVar7 = (undefined8 *)FUN_01ecb238(plVar9,*unaff_x27,0);
Unity_VisualScripting_Sequence_<EnterCoroutine>d__14__MoveNext:
            plVar8 = (long *)(*(code *)*puVar7)(plVar9,iVar5,puVar7[1]);
            if (plVar8 == (long *)0x0) break;
            bVar2 = *(byte *)(*unaff_x29 + 0x130);
            if ((*(byte *)(*plVar8 + 0x130) < bVar2) ||
               (*(long *)(*(long *)(*plVar8 + 200) + (ulong)bVar2 * 8 + -8) != *unaff_x29))
            goto LAB_03ec10b4;
            if (unaff_x21 == (long *)0x0) break;
            iVar6 = *(int *)((long)unaff_x21 + 0x14);
            if (iVar6 == *(int *)((long)plVar8 + 0x14)) {
              plVar16 = plVar8 + 3;
              lVar11 = Unity_VisualScripting_SwitchOnEnum__Enter(plVar8,*unaff_x22,*plVar16);
              *plVar16 = lVar11;
              thunk_FUN_01f51358(plVar16,lVar11);
              lVar11 = *unaff_x19;
              uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
              if (uVar13 != 0) {
                piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar14 + -2) == *unaff_x27) {
                    puVar7 = (undefined8 *)(lVar11 + (long)(*piVar14 + 1) * 0x10 + 0x138);
                    goto LAB_03ec0e40;
                  }
                  uVar13 = uVar13 - 1;
                  piVar14 = piVar14 + 4;
                } while (uVar13 != 0);
              }
              puVar7 = (undefined8 *)FUN_01ecb238();
LAB_03ec0e40:
              (*(code *)*puVar7)();
            }
            else if ((*(int *)((long)plVar8 + 0x14) <= iVar6) && (iVar6 <= (int)plVar8[5])) {
              uVar15 = thunk_FUN_01efb3a4(
                                         Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                                         );
              uVar15 = FUN_01f08890(uVar15,4);
              FUN_01bc50c0();
              puVar3 = PTR_DAT_0457bb18;
              uVar10 = thunk_FUN_01efb3a4(PTR_DAT_0457bb18);
              FUN_01bc56ec(uVar15,uVar10);
              uVar10 = thunk_FUN_01efb3a4(puVar3);
              FUN_01bc5408(uVar15,0,uVar10);
              FUN_01bc50c0(uVar15);
              FUN_01bc56ec(uVar15,unaff_x21);
              FUN_01bc5408(uVar15,1,unaff_x21);
              FUN_01bc50c0(uVar15);
              puVar3 = PTR_DAT_0457bb20;
              uVar10 = thunk_FUN_01efb3a4(PTR_DAT_0457bb20);
              FUN_01bc56ec(uVar15,uVar10);
              uVar10 = thunk_FUN_01efb3a4(puVar3);
              FUN_01bc5408(uVar15,2,uVar10);
              FUN_01bc50c0(uVar15);
              FUN_01bc56ec(uVar15,plVar8);
              FUN_01bc5408(uVar15,3,plVar8);
              uVar15 = FUN_0340ec80(uVar15,0);
              thunk_FUN_01efb3a4(
                                Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__
                                );
              uVar10 = thunk_FUN_01f117cc();
              FUN_034f7db4(uVar10,uVar15,0);
              uVar15 = thunk_FUN_01efb3a4(PTR_DAT_0457bb28);
                    /* WARNING: Subroutine does not return */
              FUN_01f08910(uVar10,uVar15);
            }
            iVar5 = iVar5 + 1;
          } while( true );
        }
        goto LAB_03ec10ac;
      }
      lVar11 = *unaff_x23;
      uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar13 != 0) {
        piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == *unaff_x27) {
            puVar7 = (undefined8 *)(lVar11 + (long)*piVar14 * 0x10 + 0x138);
            goto LAB_03ec0b88;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
      puVar7 = (undefined8 *)FUN_01ecb238(unaff_x23,*unaff_x27,0);
LAB_03ec0b88:
      plVar8 = (long *)(*(code *)*puVar7)(unaff_x23,unaff_w24,puVar7[1]);
      if (plVar8 == (long *)0x0) goto LAB_03ec10ac;
      bVar2 = *(byte *)(*unaff_x28 + 0x130);
      if ((*(byte *)(*plVar8 + 0x130) < bVar2) ||
         (*(long *)(*(long *)(*plVar8 + 200) + (ulong)bVar2 * 8 + -8) != *unaff_x28)) {
LAB_03ec10b4:
                    /* WARNING: Subroutine does not return */
        FUN_01f08cfc(plVar8);
      }
      if (unaff_x21 == (long *)0x0) goto LAB_03ec10ac;
    } while (*(int *)((long)plVar8 + 0x14) != *(int *)((long)unaff_x21 + 0x14));
    lVar11 = Unity_VisualScripting_SwitchOnEnum__Enter(plVar8,*unaff_x22,plVar8[3]);
    *unaff_x22 = lVar11;
    thunk_FUN_01f51358(unaff_x22,lVar11);
    param_1 = *unaff_x19;
    uVar13 = (ulong)*(ushort *)(param_1 + 0x12e);
    if (uVar13 != 0) {
      piVar14 = (int *)(*(long *)(param_1 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *unaff_x27) {
          in_w9 = *piVar14;
          goto code_r0x03ec0c44;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    puVar7 = (undefined8 *)FUN_01ecb238();
  } while( true );
  while( true ) {
    bVar2 = *(byte *)(*plVar8 + 0x130);
    bVar1 = *(byte *)(*(long *)PTR_DAT_0457baf0 + 0x130);
    if ((bVar2 < bVar1) ||
       (lVar11 = *(long *)(*plVar8 + 200),
       *(long *)(lVar11 + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_0457baf0)) goto LAB_03ec10b4;
    bVar1 = *(byte *)(*unaff_x28 + 0x130);
    if ((bVar1 <= bVar2) && (*(long *)(lVar11 + (ulong)bVar1 * 8 + -8) == *unaff_x28)) break;
LAB_03ec08d8:
    do {
      unaff_w20 = unaff_w20 + 1;
      lVar11 = *unaff_x19;
      uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar13 != 0) {
        piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == *unaff_x26) {
            puVar7 = (undefined8 *)(lVar11 + (long)(*piVar14 + 1) * 0x10 + 0x138);
            goto LAB_03ec0928;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
      puVar7 = (undefined8 *)FUN_01ecb238();
LAB_03ec0928:
      iVar5 = (*(code *)*puVar7)();
      if (iVar5 <= unaff_w20) {
        plVar9 = (long *)thunk_FUN_01f117cc(*(undefined8 *)
                                             Method_System_RuntimeType_CreateInstanceImpl__);
        FUN_03546db4(plVar9,0);
        puVar4 = Method_UnityEngine_Component_GetComponents<BaseRaycaster>__;
        puVar3 = Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__;
        iVar5 = 0;
        goto LAB_03ec0e8c;
      }
      lVar11 = *unaff_x19;
      uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar13 != 0) {
        piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == *unaff_x27) {
            puVar7 = (undefined8 *)(lVar11 + (long)*piVar14 * 0x10 + 0x138);
            goto LAB_03ec0988;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
      puVar7 = (undefined8 *)FUN_01ecb238();
LAB_03ec0988:
      plVar8 = (long *)(*(code *)*puVar7)();
    } while (plVar8 == (long *)0x0);
  }
  lVar11 = *unaff_x19;
  uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
  if (uVar13 != 0) {
    piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
    do {
      if (*(long *)(piVar14 + -2) == *unaff_x27) {
        puVar7 = (undefined8 *)(lVar11 + (long)*piVar14 * 0x10 + 0x138);
        goto LAB_03ec0a44;
      }
      uVar13 = uVar13 - 1;
      piVar14 = piVar14 + 4;
    } while (uVar13 != 0);
  }
  puVar7 = (undefined8 *)FUN_01ecb238();
LAB_03ec0a44:
  unaff_x21 = (long *)(*(code *)*puVar7)();
  if (unaff_x21 != (long *)0x0) {
    bVar2 = *(byte *)(*unaff_x28 + 0x130);
    if ((*(byte *)(*unaff_x21 + 0x130) < bVar2) ||
       (*(long *)(*(long *)(*unaff_x21 + 200) + (ulong)bVar2 * 8 + -8) != *unaff_x28)) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08cfc(unaff_x21);
    }
  }
  uVar15 = *(undefined8 *)PTR_DAT_0457baf8;
  if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__ + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  FUN_03579868(uVar15,0);
  unaff_x23 = (long *)FUN_03ec1308();
  if (unaff_x23 == (long *)0x0) goto LAB_03ec10ac;
  unaff_w24 = 0;
  unaff_x22 = unaff_x21 + 3;
  goto LAB_03ec0ad8;
LAB_03ec0e8c:
  lVar11 = *unaff_x19;
  uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
  if (uVar13 != 0) {
    piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
    do {
      if (*(long *)(piVar14 + -2) == *unaff_x26) {
        puVar7 = (undefined8 *)(lVar11 + (long)(*piVar14 + 1) * 0x10 + 0x138);
        goto LAB_03ec0edc;
      }
      uVar13 = uVar13 - 1;
      piVar14 = piVar14 + 4;
    } while (uVar13 != 0);
  }
  puVar7 = (undefined8 *)FUN_01ecb238();
LAB_03ec0edc:
  iVar6 = (*(code *)*puVar7)();
  if (iVar6 <= iVar5) {
    return plVar9;
  }
  lVar11 = *unaff_x19;
  uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
  if (uVar13 != 0) {
    piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
    do {
      if (*(long *)(piVar14 + -2) == *unaff_x27) {
        puVar7 = (undefined8 *)(lVar11 + (long)*piVar14 * 0x10 + 0x138);
        goto LAB_03ec0f3c;
      }
      uVar13 = uVar13 - 1;
      piVar14 = piVar14 + 4;
    } while (uVar13 != 0);
  }
  puVar7 = (undefined8 *)FUN_01ecb238();
LAB_03ec0f3c:
  plVar8 = (long *)(*(code *)*puVar7)();
  if (plVar8 != (long *)0x0) {
    bVar2 = *(byte *)(*(long *)PTR_DAT_0457baf0 + 0x130);
    if ((*(byte *)(*plVar8 + 0x130) < bVar2) ||
       (*(long *)(*(long *)(*plVar8 + 200) + (ulong)bVar2 * 8 + -8) != *(long *)PTR_DAT_0457baf0)) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08cfc(plVar8);
    }
    uStack000000000000000c = *(undefined4 *)((long)plVar8 + 0x14);
    uVar15 = thunk_FUN_01f113fc(*(undefined8 *)puVar3,(long)&stack0x00000008 + 4);
    if (plVar9 == (long *)0x0) {
LAB_03ec10ac:
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar12 = *plVar9;
    lVar11 = *(long *)puVar4;
    uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar13 != 0) {
      piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == lVar11) {
          puVar7 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
          goto LAB_03ec0ff0;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    puVar7 = (undefined8 *)FUN_01ecb238(plVar9,lVar11,0);
LAB_03ec0ff0:
    lVar11 = (*(code *)*puVar7)(plVar9,uVar15,puVar7[1]);
    if (lVar11 != 0) {
      thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<AssetFileDeleteResult>_get_Data__);
      uVar15 = thunk_FUN_01f117cc();
      uVar10 = thunk_FUN_01efb3a4(PTR_DAT_0457bb30);
      Oculus_Interaction_Input_SyntheticHand__SetJointFreedom(uVar15,uVar10,0);
      uVar10 = thunk_FUN_01efb3a4(PTR_DAT_0457bb28);
                    /* WARNING: Subroutine does not return */
      FUN_01f08910(uVar15,uVar10);
    }
    uStack0000000000000008 = *(undefined4 *)((long)plVar8 + 0x14);
    uVar15 = thunk_FUN_01f113fc(*(undefined8 *)puVar3,&stack0x00000008);
    lVar12 = *plVar9;
    lVar11 = *(long *)puVar4;
    uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar13 != 0) {
      piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == lVar11) {
          puVar7 = (undefined8 *)(lVar12 + (long)(*piVar14 + 1) * 0x10 + 0x138);
          goto LAB_03ec106c;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    puVar7 = (undefined8 *)FUN_01ecb238(plVar9,lVar11,1);
LAB_03ec106c:
    (*(code *)*puVar7)(plVar9,uVar15,plVar8,puVar7[1]);
  }
  iVar5 = iVar5 + 1;
  goto LAB_03ec0e8c;
}


