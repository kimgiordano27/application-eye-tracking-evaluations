/*
FUNCTION_NAME: FUN_03e336b0
ENTRY_POINT: 03e336b0
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_18;ui_or_gameplay_sink_hits_4;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


undefined8 FUN_03e336b0(long *param_1,ulong param_2,ulong param_3)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  undefined4 uVar10;
  int iVar11;
  undefined8 *puVar12;
  long *plVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined8 uVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  ulong uVar23;
  ulong uVar24;
  long lVar25;
  int *piVar26;
  int iVar27;
  int iVar28;
  uint uVar29;
  undefined8 local_180;
  undefined8 uStack_178;
  long lStack_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined4 local_150;
  undefined8 local_140;
  undefined8 uStack_138;
  long lStack_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined4 local_110;
  undefined8 local_100;
  undefined8 uStack_f8;
  long local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined4 local_d0;
  undefined8 local_c0;
  undefined8 uStack_b8;
  long local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined4 local_90;
  undefined8 local_80;
  undefined8 uStack_78;
  long local_70;
  
  if ((DAT_0483a884 & 1) == 0) {
    thunk_FUN_01efb3a4(PTR_DAT_04579cb0);
    thunk_FUN_01efb3a4(PTR_DAT_04579cb8);
    thunk_FUN_01efb3a4(PTR_DAT_04579cc0);
    thunk_FUN_01efb3a4(PTR_DAT_04579cc8);
    thunk_FUN_01efb3a4(Method_System_Reflection_Emit_ConstructorBuilder_Invoke__);
    thunk_FUN_01efb3a4(Method_System_Reflection_Emit_ConstructorBuilder_IsDefined__);
    thunk_FUN_01efb3a4(Method_System_Reflection_Emit_ConstructorBuilder_GetCustomAttributes__);
    thunk_FUN_01efb3a4(PTR_DAT_04579cd0);
    thunk_FUN_01efb3a4(PTR_DAT_04579cd8);
    thunk_FUN_01efb3a4(PTR_DAT_04579ce0);
    thunk_FUN_01efb3a4(PTR_DAT_04579ce8);
    thunk_FUN_01efb3a4(PTR_DAT_04579cf0);
    thunk_FUN_01efb3a4(PTR_DAT_04579cf8);
    thunk_FUN_01efb3a4(PTR_DAT_04579d00);
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<DetachFromPanelEvent>__
                      );
    thunk_FUN_01efb3a4(PTR_DAT_04579d08);
    thunk_FUN_01efb3a4(PTR_DAT_04579d20);
    thunk_FUN_01efb3a4(PTR_DAT_04579d10);
    DAT_0483a884 = 1;
  }
  iVar27 = (int)param_2;
  iVar28 = (int)param_3;
  local_80 = 0;
  uStack_78 = 0;
  local_70 = 0;
  if (iVar27 == iVar28) {
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<NetSyncConnection>_get_Data__);
    uVar14 = thunk_FUN_01f117cc();
    uVar15 = thunk_FUN_01efb3a4(PTR_DAT_04579d38);
    FUN_034f6754(uVar14,uVar15,0);
    uVar15 = thunk_FUN_01efb3a4(PTR_DAT_04579d40);
                    /* WARNING: Subroutine does not return */
    FUN_01f08910(uVar14,uVar15);
  }
  if (iVar27 < 0) {
LAB_03e344f8:
    local_c0 = CONCAT44(local_c0._4_4_,iVar27);
  }
  else {
    if (param_1 == (long *)0x0) goto LAB_03e344f0;
    lVar19 = *param_1;
    uVar23 = (ulong)*(ushort *)(lVar19 + 0x12e);
    if (uVar23 != 0) {
      piVar26 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
      do {
        if (*(long *)(piVar26 + -2) ==
            *(long *)Method_System_Reflection_Emit_ConstructorBuilder_GetCustomAttributes__) {
          puVar12 = (undefined8 *)(lVar19 + (long)*piVar26 * 0x10 + 0x138);
          goto LAB_03e33830;
        }
        uVar23 = uVar23 - 1;
        piVar26 = piVar26 + 4;
      } while (uVar23 != 0);
    }
    puVar12 = (undefined8 *)
              FUN_01ecb238(param_1,*(long *)
                                    Method_System_Reflection_Emit_ConstructorBuilder_GetCustomAttributes__
                           ,0);
LAB_03e33830:
    plVar13 = (long *)(*(code *)*puVar12)(param_1,puVar12[1]);
    puVar16 = Method_System_Reflection_Emit_ConstructorBuilder_Invoke__;
    if (plVar13 == (long *)0x0) goto LAB_03e344f0;
    lVar19 = *plVar13;
    uVar23 = (ulong)*(ushort *)(lVar19 + 0x12e);
    if (uVar23 != 0) {
      piVar26 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
      do {
        if (*(long *)(piVar26 + -2) ==
            *(long *)Method_System_Reflection_Emit_ConstructorBuilder_Invoke__) {
          puVar12 = (undefined8 *)(lVar19 + (long)*piVar26 * 0x10 + 0x138);
          goto LAB_03e33898;
        }
        uVar23 = uVar23 - 1;
        piVar26 = piVar26 + 4;
      } while (uVar23 != 0);
    }
    puVar12 = (undefined8 *)
              FUN_01ecb238(plVar13,*(long *)
                                    Method_System_Reflection_Emit_ConstructorBuilder_Invoke__,0);
LAB_03e33898:
    iVar5 = (*(code *)*puVar12)(plVar13,puVar12[1]);
    if (iVar5 < iVar27) goto LAB_03e344f8;
    if (-1 < iVar28) {
      lVar19 = *param_1;
      uVar23 = (ulong)*(ushort *)(lVar19 + 0x12e);
      if (uVar23 != 0) {
        piVar26 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
        do {
          if (*(long *)(piVar26 + -2) ==
              *(long *)Method_System_Reflection_Emit_ConstructorBuilder_GetCustomAttributes__) {
            puVar12 = (undefined8 *)(lVar19 + (long)*piVar26 * 0x10 + 0x138);
            goto LAB_03e33904;
          }
          uVar23 = uVar23 - 1;
          piVar26 = piVar26 + 4;
        } while (uVar23 != 0);
      }
      puVar12 = (undefined8 *)
                FUN_01ecb238(param_1,*(long *)
                                      Method_System_Reflection_Emit_ConstructorBuilder_GetCustomAttributes__
                             ,0);
LAB_03e33904:
      plVar13 = (long *)(*(code *)*puVar12)(param_1,puVar12[1]);
      if (plVar13 == (long *)0x0) goto LAB_03e344f0;
      lVar19 = *plVar13;
      uVar23 = (ulong)*(ushort *)(lVar19 + 0x12e);
      if (uVar23 != 0) {
        piVar26 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
        do {
          if (*(long *)(piVar26 + -2) == *(long *)puVar16) {
            puVar12 = (undefined8 *)(lVar19 + (long)*piVar26 * 0x10 + 0x138);
            goto LAB_03e33964;
          }
          uVar23 = uVar23 - 1;
          piVar26 = piVar26 + 4;
        } while (uVar23 != 0);
      }
      puVar12 = (undefined8 *)FUN_01ecb238(plVar13,*(long *)puVar16,0);
LAB_03e33964:
      iVar5 = (*(code *)*puVar12)(plVar13,puVar12[1]);
      if (iVar28 <= iVar5) {
        iVar5 = (int)(param_2 >> 0x20);
        if ((long)param_2 < 0) {
LAB_03e34538:
          puVar16 = Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__;
          local_c0 = CONCAT44(local_c0._4_4_,iVar5);
          uVar14 = thunk_FUN_01efb3a4(
                                     Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__
                                     );
          uVar14 = thunk_FUN_01f113fc(uVar14,&local_c0);
          local_100 = CONCAT44(local_100._4_4_,iVar27);
        }
        else {
          lVar19 = *param_1;
          uVar23 = (ulong)*(ushort *)(lVar19 + 0x12e);
          if (uVar23 != 0) {
            piVar26 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
            do {
              if (*(long *)(piVar26 + -2) ==
                  *(long *)Method_System_Reflection_Emit_ConstructorBuilder_GetCustomAttributes__) {
                puVar12 = (undefined8 *)(lVar19 + (long)*piVar26 * 0x10 + 0x138);
                goto LAB_03e339d8;
              }
              uVar23 = uVar23 - 1;
              piVar26 = piVar26 + 4;
            } while (uVar23 != 0);
          }
          puVar12 = (undefined8 *)
                    FUN_01ecb238(param_1,*(long *)
                                          Method_System_Reflection_Emit_ConstructorBuilder_GetCustomAttributes__
                                 ,0);
LAB_03e339d8:
          plVar13 = (long *)(*(code *)*puVar12)(param_1,puVar12[1]);
          puVar16 = Method_System_Reflection_Emit_ConstructorBuilder_IsDefined__;
          if (plVar13 == (long *)0x0) goto LAB_03e344f0;
          lVar19 = *plVar13;
          uVar23 = (ulong)*(ushort *)(lVar19 + 0x12e);
          if (uVar23 != 0) {
            piVar26 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
            do {
              if (*(long *)(piVar26 + -2) ==
                  *(long *)Method_System_Reflection_Emit_ConstructorBuilder_IsDefined__) {
                puVar12 = (undefined8 *)(lVar19 + (long)*piVar26 * 0x10 + 0x138);
                goto LAB_03e33a40;
              }
              uVar23 = uVar23 - 1;
              piVar26 = piVar26 + 4;
            } while (uVar23 != 0);
          }
          puVar12 = (undefined8 *)
                    FUN_01ecb238(plVar13,*(long *)
                                          Method_System_Reflection_Emit_ConstructorBuilder_IsDefined__
                                 ,0);
LAB_03e33a40:
          lVar19 = (*(code *)*puVar12)(plVar13,param_2 & 0xffffffff,puVar12[1]);
          if (lVar19 == 0) goto LAB_03e344f0;
          iVar6 = FUN_03e1cbb8(lVar19,0);
          if (iVar6 < iVar5) goto LAB_03e34538;
          iVar6 = (int)(param_3 >> 0x20);
          if (-1 < (long)param_3) {
            lVar19 = *param_1;
            uVar23 = (ulong)*(ushort *)(lVar19 + 0x12e);
            if (uVar23 != 0) {
              piVar26 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
              do {
                if (*(long *)(piVar26 + -2) ==
                    *(long *)Method_System_Reflection_Emit_ConstructorBuilder_GetCustomAttributes__)
                {
                  puVar12 = (undefined8 *)(lVar19 + (long)*piVar26 * 0x10 + 0x138);
                  goto LAB_03e33ac4;
                }
                uVar23 = uVar23 - 1;
                piVar26 = piVar26 + 4;
              } while (uVar23 != 0);
            }
            puVar12 = (undefined8 *)
                      FUN_01ecb238(param_1,*(long *)
                                            Method_System_Reflection_Emit_ConstructorBuilder_GetCustomAttributes__
                                   ,0);
LAB_03e33ac4:
            plVar13 = (long *)(*(code *)*puVar12)(param_1,puVar12[1]);
            if (plVar13 == (long *)0x0) goto LAB_03e344f0;
            lVar19 = *plVar13;
            uVar23 = (ulong)*(ushort *)(lVar19 + 0x12e);
            if (uVar23 != 0) {
              piVar26 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
              do {
                if (*(long *)(piVar26 + -2) == *(long *)puVar16) {
                  puVar12 = (undefined8 *)(lVar19 + (long)*piVar26 * 0x10 + 0x138);
                  goto LAB_03e33b24;
                }
                uVar23 = uVar23 - 1;
                piVar26 = piVar26 + 4;
              } while (uVar23 != 0);
            }
            puVar12 = (undefined8 *)FUN_01ecb238(plVar13,*(long *)puVar16,0);
LAB_03e33b24:
            lVar19 = (*(code *)*puVar12)(plVar13,param_3 & 0xffffffff,puVar12[1]);
            if (lVar19 == 0) goto LAB_03e344f0;
            iVar7 = FUN_03e1cbb8(lVar19,0);
            if (iVar6 <= iVar7) {
              if (iVar5 == 0) {
LAB_03e33c30:
                if (iVar6 != 0) {
                  lVar19 = *param_1;
                  uVar23 = (ulong)*(ushort *)(lVar19 + 0x12e);
                  if (uVar23 != 0) {
                    piVar26 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar26 + -2) ==
                          *(long *)
                           Method_System_Reflection_Emit_ConstructorBuilder_GetCustomAttributes__) {
                        puVar12 = (undefined8 *)(lVar19 + (long)*piVar26 * 0x10 + 0x138);
                        goto LAB_03e33c88;
                      }
                      uVar23 = uVar23 - 1;
                      piVar26 = piVar26 + 4;
                    } while (uVar23 != 0);
                  }
                  puVar12 = (undefined8 *)
                            FUN_01ecb238(param_1,*(long *)
                                                  Method_System_Reflection_Emit_ConstructorBuilder_GetCustomAttributes__
                                         ,0);
LAB_03e33c88:
                  plVar13 = (long *)(*(code *)*puVar12)(param_1,puVar12[1]);
                  if (plVar13 == (long *)0x0) goto LAB_03e344f0;
                  lVar19 = *plVar13;
                  uVar23 = (ulong)*(ushort *)(lVar19 + 0x12e);
                  if (uVar23 != 0) {
                    piVar26 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar26 + -2) == *(long *)puVar16) {
                        puVar12 = (undefined8 *)(lVar19 + (long)*piVar26 * 0x10 + 0x138);
                        goto LAB_03e33ce8;
                      }
                      uVar23 = uVar23 - 1;
                      piVar26 = piVar26 + 4;
                    } while (uVar23 != 0);
                  }
                  puVar12 = (undefined8 *)FUN_01ecb238(plVar13,*(long *)puVar16,0);
LAB_03e33ce8:
                  lVar19 = (*(code *)*puVar12)(plVar13,param_3 & 0xffffffff,puVar12[1]);
                  if (lVar19 == 0) goto LAB_03e344f0;
                  iVar7 = FUN_03e1cbb8(lVar19,0);
                  puVar17 = Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__;
                  if (iVar7 + -1 != iVar6) {
                    local_c0 = CONCAT44(local_c0._4_4_,iVar6);
                    uVar14 = thunk_FUN_01efb3a4(
                                               Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__
                                               );
                    uVar14 = thunk_FUN_01f113fc(uVar14,&local_c0);
                    local_100 = CONCAT44(local_100._4_4_,iVar28);
                    goto LAB_03e34660;
                  }
                }
                puVar3 = PTR_DAT_04579d00;
                puVar17 = PTR_DAT_04579ce0;
                if ((iVar5 == 0) != (iVar6 != 0)) {
                  local_c0 = 0;
                  uStack_b8 = 0;
                  local_b0 = 0;
                  FUN_03e28bec(&local_c0,param_1,param_3 & 0xffffffff,0);
                  uStack_f8 = uStack_b8;
                  local_100 = local_c0;
                  local_f0 = local_b0;
                  FUN_03e326dc(&local_100);
                }
                lVar19 = thunk_FUN_01f117cc(*(undefined8 *)puVar3);
                FUN_030f2380(lVar19,*(undefined8 *)puVar17);
                lVar20 = *param_1;
                uVar23 = (ulong)*(ushort *)(lVar20 + 0x12e);
                if (uVar23 != 0) {
                  piVar26 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar26 + -2) ==
                        *(long *)
                         Method_System_Reflection_Emit_ConstructorBuilder_GetCustomAttributes__) {
                      puVar12 = (undefined8 *)(lVar20 + (long)*piVar26 * 0x10 + 0x138);
                      goto LAB_03e33dd8;
                    }
                    uVar23 = uVar23 - 1;
                    piVar26 = piVar26 + 4;
                  } while (uVar23 != 0);
                }
                puVar12 = (undefined8 *)
                          FUN_01ecb238(param_1,*(long *)
                                                Method_System_Reflection_Emit_ConstructorBuilder_GetCustomAttributes__
                                       ,0);
LAB_03e33dd8:
                plVar13 = (long *)(*(code *)*puVar12)(param_1,puVar12[1]);
                if (plVar13 != (long *)0x0) {
                  lVar20 = *plVar13;
                  uVar23 = (ulong)*(ushort *)(lVar20 + 0x12e);
                  if (uVar23 != 0) {
                    piVar26 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar26 + -2) == *(long *)puVar16) {
                        puVar12 = (undefined8 *)(lVar20 + (long)*piVar26 * 0x10 + 0x138);
                        goto LAB_03e33e38;
                      }
                      uVar23 = uVar23 - 1;
                      piVar26 = piVar26 + 4;
                    } while (uVar23 != 0);
                  }
                  puVar12 = (undefined8 *)FUN_01ecb238(plVar13,*(long *)puVar16,0);
LAB_03e33e38:
                  lVar20 = (*(code *)*puVar12)(plVar13,param_2 & 0xffffffff,puVar12[1]);
                  if (lVar20 != 0) {
                    uVar8 = FUN_03e1cbb8(lVar20,0);
                    lVar21 = *param_1;
                    uVar23 = (ulong)*(ushort *)(lVar21 + 0x12e);
                    if (uVar23 != 0) {
                      piVar26 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar26 + -2) ==
                            *(long *)
                             Method_System_Reflection_Emit_ConstructorBuilder_GetCustomAttributes__)
                        {
                          puVar12 = (undefined8 *)(lVar21 + (long)*piVar26 * 0x10 + 0x138);
                          goto LAB_03e33eb4;
                        }
                        uVar23 = uVar23 - 1;
                        piVar26 = piVar26 + 4;
                      } while (uVar23 != 0);
                    }
                    puVar12 = (undefined8 *)
                              FUN_01ecb238(param_1,*(long *)
                                                  Method_System_Reflection_Emit_ConstructorBuilder_GetCustomAttributes__
                                           ,0);
LAB_03e33eb4:
                    plVar13 = (long *)(*(code *)*puVar12)(param_1,puVar12[1]);
                    if (plVar13 != (long *)0x0) {
                      lVar21 = *plVar13;
                      uVar23 = (ulong)*(ushort *)(lVar21 + 0x12e);
                      if (uVar23 != 0) {
                        piVar26 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
                        do {
                          if (*(long *)(piVar26 + -2) == *(long *)puVar16) {
                            puVar12 = (undefined8 *)(lVar21 + (long)*piVar26 * 0x10 + 0x138);
                            goto LAB_03e33f14;
                          }
                          uVar23 = uVar23 - 1;
                          piVar26 = piVar26 + 4;
                        } while (uVar23 != 0);
                      }
                      puVar12 = (undefined8 *)FUN_01ecb238(plVar13,*(long *)puVar16,0);
LAB_03e33f14:
                      lVar21 = (*(code *)*puVar12)(plVar13,param_3,puVar12[1]);
                      puVar3 = PTR_DAT_04579cd0;
                      puVar17 = PTR_DAT_04579cb0;
                      puVar16 = 
                      Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<DetachFromPanelEvent>__
                      ;
                      if (lVar21 != 0) {
                        uVar9 = FUN_03e1cbb8(lVar21,0);
                        if (0 < (int)uVar8) {
                          uVar23 = 0;
                          do {
                            if (*(int *)(*(long *)puVar16 + 0xe0) == 0) {
                              thunk_FUN_01ee6d7c();
                            }
                            lVar22 = *param_1;
                            uVar24 = (ulong)*(ushort *)(lVar22 + 0x12e);
                            if (uVar24 != 0) {
                              piVar26 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
                              do {
                                if (*(long *)(piVar26 + -2) ==
                                    *(long *)
                                     Method_System_Reflection_Emit_ConstructorBuilder_GetCustomAttributes__
                                   ) {
                                  puVar12 = (undefined8 *)
                                            (lVar22 + (long)(*piVar26 + 2) * 0x10 + 0x138);
                                  goto LAB_03e33fd4;
                                }
                                uVar24 = uVar24 - 1;
                                piVar26 = piVar26 + 4;
                              } while (uVar24 != 0);
                            }
                            puVar12 = (undefined8 *)
                                      FUN_01ecb238(param_1,*(long *)
                                                  Method_System_Reflection_Emit_ConstructorBuilder_GetCustomAttributes__
                                                  ,2);
LAB_03e33fd4:
                            lVar22 = (*(code *)*puVar12)(param_1,puVar12[1]);
                            if (lVar22 == 0) goto LAB_03e344f0;
                            uVar14 = FUN_03e1a3f0(lVar22,param_2 & 0xffffffff | uVar23 << 0x20,0);
                            uVar14 = FUN_0230ac84(uVar14,*(undefined8 *)puVar17);
                            if (lVar19 == 0) goto LAB_03e344f0;
                            lVar22 = *(long *)(lVar19 + 0x10);
                            lVar25 = *(long *)puVar3;
                            *(int *)(lVar19 + 0x1c) = *(int *)(lVar19 + 0x1c) + 1;
                            if (lVar22 == 0) goto LAB_03e344f0;
                            uVar29 = *(uint *)(lVar19 + 0x18);
                            if (uVar29 < *(uint *)(lVar22 + 0x18)) {
                              *(uint *)(lVar19 + 0x18) = uVar29 + 1;
                              *(undefined8 *)(lVar22 + (long)(int)uVar29 * 8 + 0x20) = uVar14;
                              thunk_FUN_01f51358();
                            }
                            else {
                              FUN_030f2bb4(lVar19,uVar14,
                                           *(undefined8 *)
                                            (*(long *)(*(long *)(lVar25 + 0x20) + 0xc0) + 0x70));
                            }
                            uVar23 = uVar23 + 1;
                          } while (uVar23 != uVar8);
                        }
                        iVar6 = uVar9 - 1;
                        if ((int)uVar9 < 1) {
                          if (lVar19 == 0) goto LAB_03e344f0;
                        }
                        else {
                          uVar23 = 0;
                          do {
                            if (*(int *)(*(long *)puVar16 + 0xe0) == 0) {
                              thunk_FUN_01ee6d7c();
                            }
                            lVar22 = *param_1;
                            uVar24 = (ulong)*(ushort *)(lVar22 + 0x12e);
                            if (uVar24 != 0) {
                              piVar26 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
                              do {
                                if (*(long *)(piVar26 + -2) ==
                                    *(long *)
                                     Method_System_Reflection_Emit_ConstructorBuilder_GetCustomAttributes__
                                   ) {
                                  puVar12 = (undefined8 *)
                                            (lVar22 + (long)(*piVar26 + 2) * 0x10 + 0x138);
                                  goto LAB_03e340e8;
                                }
                                uVar24 = uVar24 - 1;
                                piVar26 = piVar26 + 4;
                              } while (uVar24 != 0);
                            }
                            puVar12 = (undefined8 *)
                                      FUN_01ecb238(param_1,*(long *)
                                                  Method_System_Reflection_Emit_ConstructorBuilder_GetCustomAttributes__
                                                  ,2);
LAB_03e340e8:
                            lVar22 = (*(code *)*puVar12)(param_1,puVar12[1]);
                            if (lVar22 == 0) goto LAB_03e344f0;
                            uVar14 = FUN_03e1a3f0(lVar22,param_3 & 0xffffffff | uVar23 << 0x20,0);
                            uVar14 = FUN_0230ac84(uVar14,*(undefined8 *)puVar17);
                            if (lVar19 == 0) goto LAB_03e344f0;
                            lVar22 = *(long *)(lVar19 + 0x10);
                            lVar25 = *(long *)puVar3;
                            *(int *)(lVar19 + 0x1c) = *(int *)(lVar19 + 0x1c) + 1;
                            if (lVar22 == 0) goto LAB_03e344f0;
                            uVar29 = *(uint *)(lVar19 + 0x18);
                            if (uVar29 < *(uint *)(lVar22 + 0x18)) {
                              *(uint *)(lVar19 + 0x18) = uVar29 + 1;
                              *(undefined8 *)(lVar22 + (long)(int)uVar29 * 8 + 0x20) = uVar14;
                              thunk_FUN_01f51358();
                            }
                            else {
                              FUN_030f2bb4(lVar19,uVar14,
                                           *(undefined8 *)
                                            (*(long *)(*(long *)(lVar25 + 0x20) + 0xc0) + 0x70));
                            }
                            uVar23 = uVar23 + 1;
                          } while (uVar23 != uVar9);
                        }
                        puVar4 = PTR_DAT_04579d10;
                        puVar3 = PTR_DAT_04579d08;
                        puVar17 = PTR_DAT_04579cf8;
                        puVar16 = PTR_DAT_04579cf0;
                        FUN_030f35d0(&local_c0,lVar19,*(undefined8 *)PTR_DAT_04579cd8);
                        uStack_78 = uStack_b8;
                        local_80 = local_c0;
                        local_70 = local_b0;
                        while (uVar23 = FUN_02c7ab6c(&local_80,*(undefined8 *)PTR_DAT_04579cc0),
                              (uVar23 & 1) != 0) {
                          FUN_0241266c(param_1,local_70,*(undefined8 *)puVar4);
                        }
                        FUN_02c7ab68(&local_80,*(undefined8 *)PTR_DAT_04579cb8);
                        if (1 < (int)uVar9) {
                          iVar7 = iVar6;
                          if (iVar5 == 0) {
                            do {
                              iVar7 = iVar7 + -1;
                              FUN_03e1f400(&local_100,lVar21,iVar7,0);
                              uStack_b8 = uStack_f8;
                              local_c0 = local_100;
                              uStack_a8 = uStack_e8;
                              local_b0 = local_f0;
                              uStack_98 = uStack_d8;
                              local_a0 = local_e0;
                              local_90 = local_d0;
                              uVar10 = FUN_03e1da24(lVar21,iVar7,0);
                              uStack_138 = uStack_b8;
                              local_140 = local_c0;
                              uStack_128 = uStack_a8;
                              lStack_130 = local_b0;
                              uStack_118 = uStack_98;
                              local_120 = local_a0;
                              local_110 = local_90;
                              FUN_03e1e7f8(lVar20,0,&local_140,uVar10,0);
                            } while (0 < iVar7);
                          }
                          else {
                            uVar29 = 1;
                            do {
                              FUN_03e1f400(&local_100,lVar21,uVar29,0);
                              uStack_b8 = uStack_f8;
                              local_c0 = local_100;
                              uStack_a8 = uStack_e8;
                              local_b0 = local_f0;
                              uStack_98 = uStack_d8;
                              local_a0 = local_e0;
                              local_90 = local_d0;
                              uVar10 = FUN_03e1da24(lVar21,uVar29,0);
                              uStack_178 = uStack_b8;
                              local_180 = local_c0;
                              uStack_168 = uStack_a8;
                              lStack_170 = local_b0;
                              uStack_158 = uStack_98;
                              local_160 = local_a0;
                              local_150 = local_90;
                              FUN_03e216b0(lVar20,&local_180,uVar10,0);
                              uVar29 = uVar29 + 1;
                            } while (uVar9 != uVar29);
                          }
                        }
                        FUN_02410374(param_1,param_3,*(undefined8 *)PTR_DAT_04579d20);
                        FUN_030f35d0(&local_c0,lVar19,*(undefined8 *)PTR_DAT_04579cd8);
                        uStack_78 = uStack_b8;
                        local_80 = local_c0;
                        local_70 = local_b0;
                        while( true ) {
                          uVar23 = FUN_02c7ab6c(&local_80,*(undefined8 *)PTR_DAT_04579cc0);
                          lVar19 = local_70;
                          if ((uVar23 & 1) == 0) {
                            FUN_02c7ab68(&local_80,*(undefined8 *)PTR_DAT_04579cb8);
                            if (iVar5 != 0) {
                              iVar6 = iVar5;
                            }
                            return CONCAT44(iVar6,iVar27 - (uint)(iVar28 <= iVar27));
                          }
                          if (local_70 == 0) break;
                          if (*(int *)(local_70 + 0x18) != 1) {
                            uVar14 = *(undefined8 *)puVar16;
                            if (0 < *(int *)(local_70 + 0x18)) {
                              iVar7 = 0;
                              do {
                                uVar23 = FUN_0314dd18(lVar19,iVar7,uVar14);
                                iVar11 = (int)uVar23;
                                if ((iVar11 == iVar27) || (iVar11 == iVar28)) {
                                  iVar1 = iVar6;
                                  if (iVar5 != 0 || iVar11 != iVar27) {
                                    iVar1 = 0;
                                  }
                                  iVar2 = 0;
                                  if (iVar5 != 0 && iVar11 == iVar28) {
                                    iVar2 = uVar8 - 1;
                                  }
                                  FUN_0314dd6c(lVar19,iVar7,
                                               param_2 & 0xffffffff |
                                               (ulong)(uint)(iVar1 + (int)(uVar23 >> 0x20) + iVar2)
                                               << 0x20,*(undefined8 *)puVar17);
                                }
                                else if (iVar28 < iVar11) {
                                  FUN_0314dd6c(lVar19,iVar7,
                                               (ulong)(iVar11 - 1) | uVar23 & 0xffffffff00000000,
                                               *(undefined8 *)puVar17);
                                }
                                uVar14 = *(undefined8 *)puVar16;
                                iVar7 = iVar7 + 1;
                              } while (iVar7 < *(int *)(lVar19 + 0x18));
                            }
                            uVar14 = FUN_0314dd18(lVar19,0,uVar14);
                            if (1 < *(int *)(lVar19 + 0x18)) {
                              iVar7 = 1;
                              do {
                                uVar15 = FUN_0314dd18(lVar19,iVar7,*(undefined8 *)puVar16);
                                FUN_0240f0d0(param_1,uVar14,uVar15,*(undefined8 *)puVar3);
                                iVar7 = iVar7 + 1;
                              } while (iVar7 < *(int *)(lVar19 + 0x18));
                            }
                          }
                        }
                    /* WARNING: Subroutine does not return */
                        FUN_01f08a3c();
                      }
                    }
                  }
                }
LAB_03e344f0:
                    /* WARNING: Subroutine does not return */
                FUN_01f08a3c();
              }
              lVar19 = *param_1;
              uVar23 = (ulong)*(ushort *)(lVar19 + 0x12e);
              if (uVar23 != 0) {
                piVar26 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar26 + -2) ==
                      *(long *)
                       Method_System_Reflection_Emit_ConstructorBuilder_GetCustomAttributes__) {
                    puVar12 = (undefined8 *)(lVar19 + (long)*piVar26 * 0x10 + 0x138);
                    goto LAB_03e33ba4;
                  }
                  uVar23 = uVar23 - 1;
                  piVar26 = piVar26 + 4;
                } while (uVar23 != 0);
              }
              puVar12 = (undefined8 *)
                        FUN_01ecb238(param_1,*(long *)
                                              Method_System_Reflection_Emit_ConstructorBuilder_GetCustomAttributes__
                                     ,0);
LAB_03e33ba4:
              plVar13 = (long *)(*(code *)*puVar12)(param_1,puVar12[1]);
              if (plVar13 == (long *)0x0) goto LAB_03e344f0;
              lVar19 = *plVar13;
              uVar23 = (ulong)*(ushort *)(lVar19 + 0x12e);
              if (uVar23 != 0) {
                piVar26 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar26 + -2) == *(long *)puVar16) {
                    puVar12 = (undefined8 *)(lVar19 + (long)*piVar26 * 0x10 + 0x138);
                    goto LAB_03e33c04;
                  }
                  uVar23 = uVar23 - 1;
                  piVar26 = piVar26 + 4;
                } while (uVar23 != 0);
              }
              puVar12 = (undefined8 *)FUN_01ecb238(plVar13,*(long *)puVar16,0);
LAB_03e33c04:
              lVar19 = (*(code *)*puVar12)(plVar13,param_2 & 0xffffffff,puVar12[1]);
              if (lVar19 == 0) goto LAB_03e344f0;
              iVar7 = FUN_03e1cbb8(lVar19,0);
              puVar17 = Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__;
              if (iVar7 + -1 == iVar5) goto LAB_03e33c30;
              local_c0 = CONCAT44(local_c0._4_4_,iVar5);
              uVar14 = thunk_FUN_01efb3a4(
                                         Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__
                                         );
              uVar14 = thunk_FUN_01f113fc(uVar14,&local_c0);
              local_100 = CONCAT44(local_100._4_4_,iVar27);
LAB_03e34660:
              uVar15 = thunk_FUN_01efb3a4(puVar17);
              uVar15 = thunk_FUN_01f113fc(uVar15,&local_100);
              uVar18 = thunk_FUN_01efb3a4(PTR_DAT_04579d48);
              uVar14 = FUN_0340f2f0(uVar18,uVar14,uVar15,0);
              uVar15 = thunk_FUN_01efb3a4(PTR_DAT_04579d50);
              uVar14 = FUN_03405678(uVar14,uVar15,0);
              goto LAB_03e346ac;
            }
          }
          puVar16 = Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__;
          local_c0 = CONCAT44(local_c0._4_4_,iVar6);
          uVar14 = thunk_FUN_01efb3a4(
                                     Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__
                                     );
          uVar14 = thunk_FUN_01f113fc(uVar14,&local_c0);
          local_100 = CONCAT44(local_100._4_4_,iVar28);
        }
        uVar15 = thunk_FUN_01efb3a4(puVar16);
        uVar15 = thunk_FUN_01f113fc(uVar15,&local_100);
        uVar18 = thunk_FUN_01efb3a4(PTR_DAT_04579d30);
        uVar14 = FUN_0340f2f0(uVar18,uVar14,uVar15,0);
        goto LAB_03e346ac;
      }
    }
    local_c0 = CONCAT44(local_c0._4_4_,iVar28);
  }
  uVar14 = thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__);
  uVar14 = thunk_FUN_01f113fc(uVar14,&local_c0);
  uVar15 = thunk_FUN_01efb3a4(PTR_DAT_04579d28);
  uVar14 = FUN_03406290(uVar15,uVar14,0);
LAB_03e346ac:
  thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<NetSyncConnection>_get_Data__);
  uVar15 = thunk_FUN_01f117cc();
  FUN_034f6754(uVar15,uVar14,0);
  uVar14 = thunk_FUN_01efb3a4(PTR_DAT_04579d40);
                    /* WARNING: Subroutine does not return */
  FUN_01f08910(uVar15,uVar14);
}


