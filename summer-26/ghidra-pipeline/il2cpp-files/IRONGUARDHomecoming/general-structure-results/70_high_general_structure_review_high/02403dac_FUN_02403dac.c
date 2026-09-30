/*
FUNCTION_NAME: FUN_02403dac
ENTRY_POINT: 02403dac
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ray_interaction;ui_interaction;frame_behavior
EVIDENCE: weak_xr_or_state_hits_8;validity_or_gating_hits_21;ray_or_cast_sink_hits_2;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior
*/


void FUN_02403dac(undefined8 param_1,float param_2,undefined8 param_3,undefined8 param_4,
                 long *param_5,long param_6,undefined4 param_7,uint param_8,long param_9)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined8 *puVar7;
  long *plVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  int *piVar16;
  int iVar17;
  float fVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined1 local_a0 [16];
  undefined8 local_88;
  
  if (*(long *)(param_9 + 0x38) == 0) {
    thunk_FUN_01efb3a4(Method_System_Console_SetError__);
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_Rendering_ConstantBuffer_UpdateData<Hammersley_Hammersley2dSeq16>__
                      );
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_Rendering_ConstantBuffer_UpdateData<Hammersley_Hammersley2dSeq256>__
                      );
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_Rendering_ConstantBuffer_UpdateData<Hammersley_Hammersley2dSeq32>__
                      );
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_Rendering_ConstantBuffer_UpdateData<Hammersley_Hammersley2dSeq64>__
                      );
    thunk_FUN_01efb3a4(Method_System_Net_Configuration_ConnectionManagementSection_get_Properties__)
    ;
    thunk_FUN_01efb3a4(
                      Method_System_Runtime_Remoting_Messaging_ConstructionCall_get_ActivationType__
                      );
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_UIElements_CallbackEventHandler_UnregisterCallback<NavigationSubmitEvent>__
                      );
    if (*(long *)(param_9 + 0x38) == 0) {
      FUN_01ecafa0(param_9);
    }
  }
  local_88 = 0;
  local_a8 = 0;
  if (param_6 != 0) {
    FUN_04054ca4(param_6,0);
    local_a0 = FUN_04053798(1,0);
    local_88 = FUN_04055ce4(local_a0,0,0);
    FUN_04055a80(&local_88,1,0);
    if (param_5 != (long *)0x0) {
      lVar10 = *(long *)(*(long *)(param_9 + 0x38) + 8);
      if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
        lVar10 = FUN_01ecaf44(lVar10);
      }
      lVar11 = *param_5;
      uVar14 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar14 != 0) {
        piVar16 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == lVar10) {
            puVar7 = (undefined8 *)(lVar11 + (long)*piVar16 * 0x10 + 0x138);
            goto LAB_02403f28;
          }
          uVar14 = uVar14 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar14 != 0);
      }
      puVar7 = (undefined8 *)FUN_01ecb238(param_5,lVar10,0);
LAB_02403f28:
      uVar3 = (*(code *)*puVar7)(param_5,puVar7[1]);
      lVar10 = FUN_01f08890(*(undefined8 *)
                             Method_UnityEngine_Rendering_ConstantBuffer_UpdateData<Hammersley_Hammersley2dSeq64>__
                            ,uVar3);
      lVar11 = *(long *)(*(long *)(param_9 + 0x38) + 8);
      if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
        lVar11 = FUN_01ecaf44(lVar11);
      }
      lVar12 = *param_5;
      uVar14 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar14 != 0) {
        piVar16 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == lVar11) {
            puVar7 = (undefined8 *)(lVar12 + (long)*piVar16 * 0x10 + 0x138);
            goto LAB_02403fb4;
          }
          uVar14 = uVar14 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar14 != 0);
      }
      puVar7 = (undefined8 *)FUN_01ecb238(param_5,lVar11,0);
LAB_02403fb4:
      uVar3 = (*(code *)*puVar7)(param_5,puVar7[1]);
      lVar11 = FUN_01f08890(*(undefined8 *)
                             Method_System_Runtime_Remoting_Messaging_ConstructionCall_get_ActivationType__
                            ,uVar3);
      puVar2 = Method_System_Console_SetError__;
      uVar14 = 0;
      iVar17 = 0;
      iVar6 = 0;
      plVar8 = (long *)Method_System_Net_Configuration_ConnectionManagementSection_get_Properties__;
      do {
        lVar12 = *(long *)(*(long *)(param_9 + 0x38) + 8);
        if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
          lVar12 = FUN_01ecaf44(lVar12);
        }
        lVar13 = *param_5;
        uVar15 = (ulong)*(ushort *)(lVar13 + 0x12e);
        if (uVar15 != 0) {
          piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
          do {
            if (*(long *)(piVar16 + -2) == lVar12) {
              puVar7 = (undefined8 *)(lVar13 + (long)*piVar16 * 0x10 + 0x138);
              goto LAB_02404064;
            }
            uVar15 = uVar15 - 1;
            piVar16 = piVar16 + 4;
          } while (uVar15 != 0);
        }
        puVar7 = (undefined8 *)FUN_01ecb238(param_5,lVar12,0);
LAB_02404064:
        iVar4 = (*(code *)*puVar7)(param_5,puVar7[1]);
        if ((long)iVar4 <= (long)uVar14) {
          FUN_040557b0(&local_88,iVar17,0xfffe < iVar6,0);
          lVar12 = *plVar8;
          if (*(int *)(lVar12 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
            lVar12 = *plVar8;
          }
          FUN_0405575c(&local_88,iVar6,**(undefined8 **)(lVar12 + 0xb8),0);
          auVar19 = FUN_02469a30(&local_88,0,
                                 *(undefined8 *)
                                  Method_UnityEngine_Rendering_ConstantBuffer_UpdateData<Hammersley_Hammersley2dSeq32>__
                                );
          if (0xfffe < iVar6) {
            auVar20 = System_Linq_Enumerable_<CastIterator>d__99<object>__System_Collections_Generic_IEnumerable<TResult>_GetEnumerator
                                (&local_88,
                                 *(undefined8 *)
                                  Method_UnityEngine_Rendering_ConstantBuffer_UpdateData<Hammersley_Hammersley2dSeq256>__
                                );
            uVar14 = 0;
            goto LAB_02404364;
          }
          auVar20 = FUN_024692dc(&local_88,
                                 *(undefined8 *)
                                  Method_UnityEngine_Rendering_ConstantBuffer_UpdateData<Hammersley_Hammersley2dSeq16>__
                                );
          uVar14 = 0;
          goto LAB_02404510;
        }
        lVar12 = **(long **)(param_9 + 0x38);
        if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
          lVar12 = FUN_01ecaf44(lVar12);
        }
        lVar13 = *param_5;
        uVar15 = (ulong)*(ushort *)(lVar13 + 0x12e);
        if (uVar15 != 0) {
          piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
          do {
            if (*(long *)(piVar16 + -2) == lVar12) {
              puVar7 = (undefined8 *)(lVar13 + (long)*piVar16 * 0x10 + 0x138);
              goto LAB_024040dc;
            }
            uVar15 = uVar15 - 1;
            piVar16 = piVar16 + 4;
          } while (uVar15 != 0);
        }
        puVar7 = (undefined8 *)FUN_01ecb238(param_5,lVar12,0);
LAB_024040dc:
        plVar8 = (long *)(*(code *)*puVar7)(param_5,uVar14 & 0xffffffff,puVar7[1]);
        if (plVar8 == (long *)0x0) break;
        lVar13 = *plVar8;
        lVar12 = *(long *)puVar2;
        uVar15 = (ulong)*(ushort *)(lVar13 + 0x12e);
        if (uVar15 != 0) {
          piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
          do {
            if (*(long *)(piVar16 + -2) == lVar12) {
              puVar7 = (undefined8 *)(lVar13 + (long)(*piVar16 + 1) * 0x10 + 0x138);
              goto LAB_02404144;
            }
            uVar15 = uVar15 - 1;
            piVar16 = piVar16 + 4;
          } while (uVar15 != 0);
        }
        puVar7 = (undefined8 *)FUN_01ecb238(plVar8,lVar12,1);
LAB_02404144:
        fVar18 = (float)(*(code *)*puVar7)(plVar8,puVar7[1]);
        lVar13 = *plVar8;
        fVar18 = ABS((float)param_4 - (float)param_3) * fVar18 * param_2;
        uVar15 = (ulong)*(ushort *)(lVar13 + 0x12e);
        lVar12 = *(long *)puVar2;
        iVar4 = -0x80000000;
        if ((float)(int)fVar18 != INFINITY) {
          iVar4 = (int)fVar18;
        }
        if (iVar4 < 2) {
          iVar4 = 1;
        }
        if (uVar15 != 0) {
          piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
          do {
            if (*(long *)(piVar16 + -2) == lVar12) {
              puVar7 = (undefined8 *)(lVar13 + (long)*piVar16 * 0x10 + 0x138);
              goto LAB_024041c8;
            }
            uVar15 = uVar15 - 1;
            piVar16 = piVar16 + 4;
          } while (uVar15 != 0);
        }
        puVar7 = (undefined8 *)FUN_01ecb238(plVar8,lVar12,0);
LAB_024041c8:
        uVar5 = (*(code *)*puVar7)(plVar8,puVar7[1]);
        local_140 = 0;
        uStack_138 = 0;
        local_130 = 0;
        FUN_03e2e084(param_3,param_4,param_1,&local_140,param_7,iVar4,param_8 & 1,uVar5 & 1,0);
        plVar8 = (long *)
                 Method_System_Net_Configuration_ConnectionManagementSection_get_Properties__;
        if (lVar10 == 0) break;
        uStack_b8 = uStack_138;
        local_c0 = local_140;
        local_b0 = local_130;
        if (*(uint *)(lVar10 + 0x18) <= uVar14) goto LAB_0240473c;
        lVar12 = lVar10 + uVar14 * 0x18;
        *(undefined8 *)(lVar12 + 0x28) = uStack_138;
        *(undefined8 *)(lVar12 + 0x20) = local_140;
        *(undefined8 *)(lVar12 + 0x30) = local_130;
        uStack_d8 = *(undefined8 *)(lVar12 + 0x28);
        local_e0 = *(undefined8 *)(lVar12 + 0x20);
        local_d0 = local_130;
        if (*(int *)(*plVar8 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        uStack_f8 = uStack_d8;
        local_100 = local_e0;
        local_f0 = local_d0;
        FUN_03e2e158(&local_100,(long)&local_a8 + 4,&local_a8,0);
        local_108 = 0;
        FUN_0288a474(&local_108,iVar17,iVar6,
                     *(undefined8 *)
                      Method_UnityEngine_UIElements_CallbackEventHandler_UnregisterCallback<NavigationSubmitEvent>__
                    );
        if (lVar11 == 0) break;
        if (*(uint *)(lVar11 + 0x18) <= uVar14) goto LAB_0240473c;
        lVar12 = uVar14 * 8;
        uVar14 = uVar14 + 1;
        *(undefined8 *)(lVar11 + lVar12 + 0x20) = local_108;
        iVar6 = local_a8._4_4_ + iVar6;
        iVar17 = (int)local_a8 + iVar17;
      } while( true );
    }
  }
LAB_02404738:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
LAB_02404510:
  lVar12 = *(long *)(*(long *)(param_9 + 0x38) + 8);
  if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
    lVar12 = FUN_01ecaf44(lVar12);
  }
  lVar13 = *param_5;
  uVar15 = (ulong)*(ushort *)(lVar13 + 0x12e);
  if (uVar15 != 0) {
    piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
    do {
      if (*(long *)(piVar16 + -2) == lVar12) {
        puVar7 = (undefined8 *)(lVar13 + (long)*piVar16 * 0x10 + 0x138);
        goto LAB_02404574;
      }
      uVar15 = uVar15 - 1;
      piVar16 = piVar16 + 4;
    } while (uVar15 != 0);
  }
  puVar7 = (undefined8 *)FUN_01ecb238(param_5,lVar12,0);
LAB_02404574:
  iVar6 = (*(code *)*puVar7)(param_5,puVar7[1]);
  if ((long)iVar6 <= (long)uVar14) goto LAB_0240469c;
  lVar12 = **(long **)(param_9 + 0x38);
  if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
    lVar12 = FUN_01ecaf44(lVar12);
  }
  lVar13 = *param_5;
  uVar15 = (ulong)*(ushort *)(lVar13 + 0x12e);
  if (uVar15 != 0) {
    piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
    do {
      if (*(long *)(piVar16 + -2) == lVar12) {
        puVar7 = (undefined8 *)(lVar13 + (long)*piVar16 * 0x10 + 0x138);
        goto LAB_024045ec;
      }
      uVar15 = uVar15 - 1;
      piVar16 = piVar16 + 4;
    } while (uVar15 != 0);
  }
  puVar7 = (undefined8 *)FUN_01ecb238(param_5,lVar12,0);
LAB_024045ec:
  uVar9 = (*(code *)*puVar7)(param_5,uVar14 & 0xffffffff,puVar7[1]);
  if (lVar10 == 0) goto LAB_02404738;
  if (*(uint *)(lVar10 + 0x18) <= uVar14) goto LAB_0240473c;
  lVar12 = lVar10 + uVar14 * 0x18;
  local_d0 = *(undefined8 *)(lVar12 + 0x30);
  uStack_d8 = *(undefined8 *)(lVar12 + 0x28);
  local_e0 = *(undefined8 *)(lVar12 + 0x20);
  if (lVar11 == 0) goto LAB_02404738;
  if (*(uint *)(lVar11 + 0x18) <= uVar14) goto LAB_0240473c;
  lVar12 = lVar11 + uVar14 * 8;
  uVar3 = *(undefined4 *)(lVar12 + 0x20);
  uVar1 = *(undefined4 *)(lVar12 + 0x24);
  if (*(int *)(*(long *)Method_System_Net_Configuration_ConnectionManagementSection_get_Properties__
              + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  uStack_138 = uStack_d8;
  local_140 = local_e0;
  local_130 = local_d0;
  System_Array__InternalArray__ICollection_Remove<TrackedDeviceRaycaster_RaycastHitData>
            (uVar9,auVar19._0_8_,auVar19._8_8_,auVar20._0_8_,auVar20._8_8_,&local_140,uVar1,uVar3,
             *(undefined8 *)(*(long *)(param_9 + 0x38) + 0x38));
  uVar14 = uVar14 + 1;
  goto LAB_02404510;
LAB_02404364:
  lVar12 = *(long *)(*(long *)(param_9 + 0x38) + 8);
  if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
    lVar12 = FUN_01ecaf44(lVar12);
  }
  lVar13 = *param_5;
  uVar15 = (ulong)*(ushort *)(lVar13 + 0x12e);
  if (uVar15 != 0) {
    piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
    do {
      if (*(long *)(piVar16 + -2) == lVar12) {
        puVar7 = (undefined8 *)(lVar13 + (long)*piVar16 * 0x10 + 0x138);
        goto LAB_024043c8;
      }
      uVar15 = uVar15 - 1;
      piVar16 = piVar16 + 4;
    } while (uVar15 != 0);
  }
  puVar7 = (undefined8 *)FUN_01ecb238(param_5,lVar12,0);
LAB_024043c8:
  iVar6 = (*(code *)*puVar7)(param_5,puVar7[1]);
  if ((long)iVar6 <= (long)uVar14) {
LAB_0240469c:
    uStack_128 = 0;
    local_130 = 0;
    uStack_118 = 0;
    local_120 = 0;
    uStack_138 = 0;
    local_140 = 0;
    FUN_04088198(&local_140,0,iVar17,0,0);
    uStack_168 = uStack_138;
    local_170 = local_140;
    uStack_158 = uStack_128;
    uStack_160 = local_130;
    uStack_148 = uStack_118;
    local_150 = local_120;
    FUN_04055b48(&local_88,0,&local_170,0,0);
    FUN_0405390c(local_a0._0_8_,local_a0._8_8_,param_6,0,0);
    FUN_04054ce4(param_6,0);
    return;
  }
  lVar12 = **(long **)(param_9 + 0x38);
  if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
    lVar12 = FUN_01ecaf44(lVar12);
  }
  lVar13 = *param_5;
  uVar15 = (ulong)*(ushort *)(lVar13 + 0x12e);
  if (uVar15 != 0) {
    piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
    do {
      if (*(long *)(piVar16 + -2) == lVar12) {
        puVar7 = (undefined8 *)(lVar13 + (long)*piVar16 * 0x10 + 0x138);
        goto LAB_02404440;
      }
      uVar15 = uVar15 - 1;
      piVar16 = piVar16 + 4;
    } while (uVar15 != 0);
  }
  puVar7 = (undefined8 *)FUN_01ecb238(param_5,lVar12,0);
LAB_02404440:
  uVar9 = (*(code *)*puVar7)(param_5,uVar14 & 0xffffffff,puVar7[1]);
  if (lVar10 == 0) goto LAB_02404738;
  if (*(uint *)(lVar10 + 0x18) <= uVar14) {
LAB_0240473c:
                    /* WARNING: Subroutine does not return */
    FUN_01f08a44();
  }
  lVar12 = lVar10 + uVar14 * 0x18;
  local_d0 = *(undefined8 *)(lVar12 + 0x30);
  uStack_d8 = *(undefined8 *)(lVar12 + 0x28);
  local_e0 = *(undefined8 *)(lVar12 + 0x20);
  if (lVar11 == 0) goto LAB_02404738;
  if (*(uint *)(lVar11 + 0x18) <= uVar14) goto LAB_0240473c;
  lVar12 = lVar11 + uVar14 * 8;
  uVar3 = *(undefined4 *)(lVar12 + 0x20);
  uVar1 = *(undefined4 *)(lVar12 + 0x24);
  if (*(int *)(*(long *)Method_System_Net_Configuration_ConnectionManagementSection_get_Properties__
              + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  uStack_138 = uStack_d8;
  local_140 = local_e0;
  local_130 = local_d0;
  FUN_02401e28(uVar9,auVar19._0_8_,auVar19._8_8_,auVar20._0_8_,auVar20._8_8_,&local_140,uVar1,uVar3,
               *(undefined8 *)(*(long *)(param_9 + 0x38) + 0x40));
  uVar14 = uVar14 + 1;
  goto LAB_02404364;
}


