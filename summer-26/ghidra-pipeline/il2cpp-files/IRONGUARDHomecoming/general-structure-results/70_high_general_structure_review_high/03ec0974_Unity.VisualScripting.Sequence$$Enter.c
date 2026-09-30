/*
FUNCTION_NAME: Unity.VisualScripting.Sequence$$Enter
ENTRY_POINT: 03ec0974
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 84
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ray_interaction;telemetry;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_8;ray_or_cast_sink_hits_1;telemetry_or_network_hits_1;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;negative_generic_transform_raycast_without_eye_source_or_attempt
*/


long * Unity_VisualScripting_Sequence__Enter(void)

{
  long *plVar1;
  byte bVar2;
  byte bVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  int iVar7;
  undefined8 *puVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  int *piVar17;
  long *unaff_x19;
  int unaff_w20;
  long *plVar18;
  long *unaff_x26;
  long *unaff_x27;
  long *unaff_x28;
  long *unaff_x29;
  undefined4 uStack0000000000000008;
  undefined4 uStack000000000000000c;
  
code_r0x03ec0974:
  puVar8 = (undefined8 *)FUN_01ecb238();
  do {
    plVar9 = (long *)(*(code *)*puVar8)();
    if (plVar9 != (long *)0x0) {
      bVar2 = *(byte *)(*plVar9 + 0x130);
      bVar3 = *(byte *)(*(long *)PTR_DAT_0457baf0 + 0x130);
      if ((bVar2 < bVar3) ||
         (lVar16 = *(long *)(*plVar9 + 200),
         *(long *)(lVar16 + (ulong)bVar3 * 8 + -8) != *(long *)PTR_DAT_0457baf0)) {
LAB_03ec10b4:
                    /* WARNING: Subroutine does not return */
        FUN_01f08cfc(plVar9);
      }
      bVar3 = *(byte *)(*unaff_x28 + 0x130);
      if ((bVar3 <= bVar2) && (*(long *)(lVar16 + (ulong)bVar3 * 8 + -8) == *unaff_x28)) {
        lVar16 = *unaff_x19;
        uVar15 = (ulong)*(ushort *)(lVar16 + 0x12e);
        if (uVar15 != 0) {
          piVar17 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
          do {
            if (*(long *)(piVar17 + -2) == *unaff_x27) {
              puVar8 = (undefined8 *)(lVar16 + (long)*piVar17 * 0x10 + 0x138);
              goto LAB_03ec0a44;
            }
            uVar15 = uVar15 - 1;
            piVar17 = piVar17 + 4;
          } while (uVar15 != 0);
        }
        puVar8 = (undefined8 *)FUN_01ecb238();
LAB_03ec0a44:
        plVar11 = (long *)(*(code *)*puVar8)();
        if (plVar11 != (long *)0x0) {
          bVar2 = *(byte *)(*unaff_x28 + 0x130);
          if ((*(byte *)(*plVar11 + 0x130) < bVar2) ||
             (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar2 * 8 + -8) != *unaff_x28)) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08cfc(plVar11);
          }
        }
        uVar12 = *(undefined8 *)PTR_DAT_0457baf8;
        if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__ + 0xe0) == 0
           ) {
          thunk_FUN_01ee6d7c();
        }
        FUN_03579868(uVar12,0);
        plVar10 = (long *)FUN_03ec1308();
        if (plVar10 != (long *)0x0) {
          iVar6 = 0;
          plVar1 = plVar11 + 3;
          do {
            lVar16 = *plVar10;
            uVar15 = (ulong)*(ushort *)(lVar16 + 0x12e);
            if (uVar15 != 0) {
              piVar17 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
              do {
                if (*(long *)(piVar17 + -2) == *unaff_x26) {
                  puVar8 = (undefined8 *)(lVar16 + (long)(*piVar17 + 1) * 0x10 + 0x138);
                  goto LAB_03ec0b28;
                }
                uVar15 = uVar15 - 1;
                piVar17 = piVar17 + 4;
              } while (uVar15 != 0);
            }
            puVar8 = (undefined8 *)FUN_01ecb238(plVar10,*unaff_x26,1);
LAB_03ec0b28:
            iVar7 = (*(code *)*puVar8)(plVar10,puVar8[1]);
            if (iVar7 <= iVar6) goto LAB_03ec0c6c;
            lVar16 = *plVar10;
            uVar15 = (ulong)*(ushort *)(lVar16 + 0x12e);
            if (uVar15 != 0) {
              piVar17 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
              do {
                if (*(long *)(piVar17 + -2) == *unaff_x27) {
                  puVar8 = (undefined8 *)(lVar16 + (long)*piVar17 * 0x10 + 0x138);
                  goto LAB_03ec0b88;
                }
                uVar15 = uVar15 - 1;
                piVar17 = piVar17 + 4;
              } while (uVar15 != 0);
            }
            puVar8 = (undefined8 *)FUN_01ecb238(plVar10,*unaff_x27,0);
LAB_03ec0b88:
            plVar9 = (long *)(*(code *)*puVar8)(plVar10,iVar6,puVar8[1]);
            if (plVar9 == (long *)0x0) break;
            bVar2 = *(byte *)(*unaff_x28 + 0x130);
            if ((*(byte *)(*plVar9 + 0x130) < bVar2) ||
               (*(long *)(*(long *)(*plVar9 + 200) + (ulong)bVar2 * 8 + -8) != *unaff_x28))
            goto LAB_03ec10b4;
            if (plVar11 == (long *)0x0) break;
            if (*(int *)((long)plVar9 + 0x14) == *(int *)((long)plVar11 + 0x14)) {
              lVar16 = Unity_VisualScripting_SwitchOnEnum__Enter(plVar9,*plVar1,plVar9[3]);
              *plVar1 = lVar16;
              thunk_FUN_01f51358(plVar1,lVar16);
              lVar16 = *unaff_x19;
              uVar15 = (ulong)*(ushort *)(lVar16 + 0x12e);
              if (uVar15 != 0) {
                piVar17 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar17 + -2) == *unaff_x27) {
                    puVar8 = (undefined8 *)(lVar16 + (long)(*piVar17 + 1) * 0x10 + 0x138);
                    goto LAB_03ec0c50;
                  }
                  uVar15 = uVar15 - 1;
                  piVar17 = piVar17 + 4;
                } while (uVar15 != 0);
              }
              puVar8 = (undefined8 *)FUN_01ecb238();
LAB_03ec0c50:
              (*(code *)*puVar8)();
            }
            iVar6 = iVar6 + 1;
          } while( true );
        }
        goto LAB_03ec10ac;
      }
    }
LAB_03ec08d8:
    unaff_w20 = unaff_w20 + 1;
    lVar16 = *unaff_x19;
    uVar15 = (ulong)*(ushort *)(lVar16 + 0x12e);
    if (uVar15 != 0) {
      piVar17 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) == *unaff_x26) {
          puVar8 = (undefined8 *)(lVar16 + (long)(*piVar17 + 1) * 0x10 + 0x138);
          goto LAB_03ec0928;
        }
        uVar15 = uVar15 - 1;
        piVar17 = piVar17 + 4;
      } while (uVar15 != 0);
    }
    puVar8 = (undefined8 *)FUN_01ecb238();
LAB_03ec0928:
    iVar6 = (*(code *)*puVar8)();
    if (iVar6 <= unaff_w20) {
      plVar9 = (long *)thunk_FUN_01f117cc(*(undefined8 *)
                                           Method_System_RuntimeType_CreateInstanceImpl__);
      FUN_03546db4(plVar9,0);
      puVar5 = Method_UnityEngine_Component_GetComponents<BaseRaycaster>__;
      puVar4 = Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__;
      iVar6 = 0;
      goto LAB_03ec0e8c;
    }
    lVar16 = *unaff_x19;
    uVar15 = (ulong)*(ushort *)(lVar16 + 0x12e);
    if (uVar15 == 0) goto code_r0x03ec0974;
    piVar17 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
    while (*(long *)(piVar17 + -2) != *unaff_x27) {
      uVar15 = uVar15 - 1;
      piVar17 = piVar17 + 4;
      if (uVar15 == 0) goto code_r0x03ec0974;
    }
    puVar8 = (undefined8 *)(lVar16 + (long)*piVar17 * 0x10 + 0x138);
  } while( true );
LAB_03ec0c6c:
  uVar12 = *(undefined8 *)PTR_DAT_0457bb00;
  if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__ + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  FUN_03579868(uVar12,0);
  plVar10 = (long *)FUN_03ec1308();
  if (plVar10 != (long *)0x0) {
    iVar6 = 0;
    do {
      lVar16 = *plVar10;
      uVar15 = (ulong)*(ushort *)(lVar16 + 0x12e);
      if (uVar15 != 0) {
        piVar17 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == *unaff_x26) {
            puVar8 = (undefined8 *)(lVar16 + (long)(*piVar17 + 1) * 0x10 + 0x138);
            goto LAB_03ec0d08;
          }
          uVar15 = uVar15 - 1;
          piVar17 = piVar17 + 4;
        } while (uVar15 != 0);
      }
      puVar8 = (undefined8 *)FUN_01ecb238(plVar10,*unaff_x26,1);
LAB_03ec0d08:
      iVar7 = (*(code *)*puVar8)(plVar10,puVar8[1]);
      if (iVar7 <= iVar6) goto LAB_03ec08d8;
      lVar16 = *plVar10;
      uVar15 = (ulong)*(ushort *)(lVar16 + 0x12e);
      if (uVar15 != 0) {
        piVar17 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == *unaff_x27) {
            puVar8 = (undefined8 *)(lVar16 + (long)*piVar17 * 0x10 + 0x138);
            goto Unity_VisualScripting_Sequence_<EnterCoroutine>d__14__MoveNext;
          }
          uVar15 = uVar15 - 1;
          piVar17 = piVar17 + 4;
        } while (uVar15 != 0);
      }
      puVar8 = (undefined8 *)FUN_01ecb238(plVar10,*unaff_x27,0);
Unity_VisualScripting_Sequence_<EnterCoroutine>d__14__MoveNext:
      plVar9 = (long *)(*(code *)*puVar8)(plVar10,iVar6,puVar8[1]);
      if (plVar9 == (long *)0x0) break;
      bVar2 = *(byte *)(*unaff_x29 + 0x130);
      if ((*(byte *)(*plVar9 + 0x130) < bVar2) ||
         (*(long *)(*(long *)(*plVar9 + 200) + (ulong)bVar2 * 8 + -8) != *unaff_x29))
      goto LAB_03ec10b4;
      if (plVar11 == (long *)0x0) break;
      iVar7 = *(int *)((long)plVar11 + 0x14);
      if (iVar7 == *(int *)((long)plVar9 + 0x14)) {
        plVar18 = plVar9 + 3;
        lVar16 = Unity_VisualScripting_SwitchOnEnum__Enter(plVar9,*plVar1,*plVar18);
        *plVar18 = lVar16;
        thunk_FUN_01f51358(plVar18,lVar16);
        lVar16 = *unaff_x19;
        uVar15 = (ulong)*(ushort *)(lVar16 + 0x12e);
        if (uVar15 != 0) {
          piVar17 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
          do {
            if (*(long *)(piVar17 + -2) == *unaff_x27) {
              puVar8 = (undefined8 *)(lVar16 + (long)(*piVar17 + 1) * 0x10 + 0x138);
              goto LAB_03ec0e40;
            }
            uVar15 = uVar15 - 1;
            piVar17 = piVar17 + 4;
          } while (uVar15 != 0);
        }
        puVar8 = (undefined8 *)FUN_01ecb238();
LAB_03ec0e40:
        (*(code *)*puVar8)();
      }
      else if ((*(int *)((long)plVar9 + 0x14) <= iVar7) && (iVar7 <= (int)plVar9[5])) {
        uVar12 = thunk_FUN_01efb3a4(
                                   Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                                   );
        uVar12 = FUN_01f08890(uVar12,4);
        FUN_01bc50c0();
        puVar4 = PTR_DAT_0457bb18;
        uVar13 = thunk_FUN_01efb3a4(PTR_DAT_0457bb18);
        FUN_01bc56ec(uVar12,uVar13);
        uVar13 = thunk_FUN_01efb3a4(puVar4);
        FUN_01bc5408(uVar12,0,uVar13);
        FUN_01bc50c0(uVar12);
        FUN_01bc56ec(uVar12,plVar11);
        FUN_01bc5408(uVar12,1,plVar11);
        FUN_01bc50c0(uVar12);
        puVar4 = PTR_DAT_0457bb20;
        uVar13 = thunk_FUN_01efb3a4(PTR_DAT_0457bb20);
        FUN_01bc56ec(uVar12,uVar13);
        uVar13 = thunk_FUN_01efb3a4(puVar4);
        FUN_01bc5408(uVar12,2,uVar13);
        FUN_01bc50c0(uVar12);
        FUN_01bc56ec(uVar12,plVar9);
        FUN_01bc5408(uVar12,3,plVar9);
        uVar12 = FUN_0340ec80(uVar12,0);
        thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__);
        uVar13 = thunk_FUN_01f117cc();
        FUN_034f7db4(uVar13,uVar12,0);
        uVar12 = thunk_FUN_01efb3a4(PTR_DAT_0457bb28);
                    /* WARNING: Subroutine does not return */
        FUN_01f08910(uVar13,uVar12);
      }
      iVar6 = iVar6 + 1;
    } while( true );
  }
  goto LAB_03ec10ac;
LAB_03ec0e8c:
  lVar16 = *unaff_x19;
  uVar15 = (ulong)*(ushort *)(lVar16 + 0x12e);
  if (uVar15 != 0) {
    piVar17 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
    do {
      if (*(long *)(piVar17 + -2) == *unaff_x26) {
        puVar8 = (undefined8 *)(lVar16 + (long)(*piVar17 + 1) * 0x10 + 0x138);
        goto LAB_03ec0edc;
      }
      uVar15 = uVar15 - 1;
      piVar17 = piVar17 + 4;
    } while (uVar15 != 0);
  }
  puVar8 = (undefined8 *)FUN_01ecb238();
LAB_03ec0edc:
  iVar7 = (*(code *)*puVar8)();
  if (iVar7 <= iVar6) {
    return plVar9;
  }
  lVar16 = *unaff_x19;
  uVar15 = (ulong)*(ushort *)(lVar16 + 0x12e);
  if (uVar15 != 0) {
    piVar17 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
    do {
      if (*(long *)(piVar17 + -2) == *unaff_x27) {
        puVar8 = (undefined8 *)(lVar16 + (long)*piVar17 * 0x10 + 0x138);
        goto LAB_03ec0f3c;
      }
      uVar15 = uVar15 - 1;
      piVar17 = piVar17 + 4;
    } while (uVar15 != 0);
  }
  puVar8 = (undefined8 *)FUN_01ecb238();
LAB_03ec0f3c:
  plVar11 = (long *)(*(code *)*puVar8)();
  if (plVar11 != (long *)0x0) {
    bVar2 = *(byte *)(*(long *)PTR_DAT_0457baf0 + 0x130);
    if ((*(byte *)(*plVar11 + 0x130) < bVar2) ||
       (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar2 * 8 + -8) != *(long *)PTR_DAT_0457baf0))
    {
                    /* WARNING: Subroutine does not return */
      FUN_01f08cfc(plVar11);
    }
    uStack000000000000000c = *(undefined4 *)((long)plVar11 + 0x14);
    uVar12 = thunk_FUN_01f113fc(*(undefined8 *)puVar4,(long)&stack0x00000008 + 4);
    if (plVar9 == (long *)0x0) {
LAB_03ec10ac:
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar14 = *plVar9;
    lVar16 = *(long *)puVar5;
    uVar15 = (ulong)*(ushort *)(lVar14 + 0x12e);
    if (uVar15 != 0) {
      piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) == lVar16) {
          puVar8 = (undefined8 *)(lVar14 + (long)*piVar17 * 0x10 + 0x138);
          goto LAB_03ec0ff0;
        }
        uVar15 = uVar15 - 1;
        piVar17 = piVar17 + 4;
      } while (uVar15 != 0);
    }
    puVar8 = (undefined8 *)FUN_01ecb238(plVar9,lVar16,0);
LAB_03ec0ff0:
    lVar16 = (*(code *)*puVar8)(plVar9,uVar12,puVar8[1]);
    if (lVar16 != 0) {
      thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<AssetFileDeleteResult>_get_Data__);
      uVar12 = thunk_FUN_01f117cc();
      uVar13 = thunk_FUN_01efb3a4(PTR_DAT_0457bb30);
      Oculus_Interaction_Input_SyntheticHand__SetJointFreedom(uVar12,uVar13,0);
      uVar13 = thunk_FUN_01efb3a4(PTR_DAT_0457bb28);
                    /* WARNING: Subroutine does not return */
      FUN_01f08910(uVar12,uVar13);
    }
    uStack0000000000000008 = *(undefined4 *)((long)plVar11 + 0x14);
    uVar12 = thunk_FUN_01f113fc(*(undefined8 *)puVar4,&stack0x00000008);
    lVar14 = *plVar9;
    lVar16 = *(long *)puVar5;
    uVar15 = (ulong)*(ushort *)(lVar14 + 0x12e);
    if (uVar15 != 0) {
      piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) == lVar16) {
          puVar8 = (undefined8 *)(lVar14 + (long)(*piVar17 + 1) * 0x10 + 0x138);
          goto LAB_03ec106c;
        }
        uVar15 = uVar15 - 1;
        piVar17 = piVar17 + 4;
      } while (uVar15 != 0);
    }
    puVar8 = (undefined8 *)FUN_01ecb238(plVar9,lVar16,1);
LAB_03ec106c:
    (*(code *)*puVar8)(plVar9,uVar12,plVar11,puVar8[1]);
  }
  iVar6 = iVar6 + 1;
  goto LAB_03ec0e8c;
}


