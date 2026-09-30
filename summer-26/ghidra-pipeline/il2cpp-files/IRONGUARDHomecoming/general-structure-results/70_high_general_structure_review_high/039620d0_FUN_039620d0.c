/*
FUNCTION_NAME: FUN_039620d0
ENTRY_POINT: 039620d0
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_15;strong_pose_or_ray_construction_hits_14;ui_or_gameplay_sink_hits_7;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


long FUN_039620d0(long *param_1,long *param_2,long param_3,undefined1 *param_4)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long *plVar10;
  long *plVar11;
  undefined *puVar12;
  undefined8 uVar13;
  long lVar14;
  uint uVar15;
  long lVar16;
  undefined8 local_f0;
  long *plStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined4 local_c4;
  undefined8 local_c0;
  long *plStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 local_90;
  long *plStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  if ((DAT_04838425 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_UnityEngine_Rendering_VolumeParameter<TonemappingMode>__ctor__);
    thunk_FUN_01efb3a4(Method_Internal_Cryptography_Pal_CertificateData_FindAltNameMatch__);
    thunk_FUN_01efb3a4(Method_Meta_WitAi_ComponentExtensions_PreloadCopyData<AudioSource>__);
    thunk_FUN_01efb3a4(Method_UnityEngine_InputSystem_LowLevel_InputEvent_set_sizeInBytes__);
    thunk_FUN_01efb3a4(StringLiteral_4291);
    thunk_FUN_01efb3a4(StringLiteral_4292);
    thunk_FUN_01efb3a4(StringLiteral_4293);
    thunk_FUN_01efb3a4(Method_System_Convert_ToUInt64__);
    thunk_FUN_01efb3a4(Method_System_Collections_CollectionBase_OnValidate__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__);
    thunk_FUN_01efb3a4(Method_UnityEngine_Component_GetComponent<Point>__);
    thunk_FUN_01efb3a4(Method_System_DBNull_System_IConvertible_ToBoolean__);
    thunk_FUN_01efb3a4(
                      Method_Unity_VisualScripting_StaticFunctionInvoker<Vector2,_Vector2,_Vector2>__ctor__
                      );
    thunk_FUN_01efb3a4(
                      Method_Unity_VisualScripting_StaticFunctionInvoker<Vector3,_float,_Vector3>__ctor__
                      );
    DAT_04838425 = 1;
  }
  local_c4 = 0;
  uVar6 = FUN_03956cc8(param_3);
  puVar12 = StringLiteral_4293;
  if ((uVar6 & 1) != 0) {
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<NetSyncConnection>_get_Data__);
    uVar9 = thunk_FUN_01f117cc();
    uVar13 = thunk_FUN_01efb3a4(StringLiteral_4300);
    FUN_034f6754(uVar9,uVar13,0);
    uVar13 = thunk_FUN_01efb3a4(StringLiteral_4298);
                    /* WARNING: Subroutine does not return */
    FUN_01f08910(uVar9,uVar13);
  }
  *param_4 = 0;
  puVar3 = StringLiteral_4292;
  puVar2 = Method_UnityEngine_Rendering_VolumeParameter<TonemappingMode>__ctor__;
  lVar7 = thunk_FUN_01f117cc(*(undefined8 *)puVar12);
  FUN_031b7424(lVar7,*(undefined8 *)puVar3);
  lVar8 = FUN_01f08890(*(undefined8 *)puVar2,1);
  if (lVar8 != 0) {
    if (*(int *)(lVar8 + 0x18) == 0) {
System_Net_TimerThread__OnDomainUnload:
                    /* WARNING: Subroutine does not return */
      FUN_01f08a44();
    }
    *(undefined2 *)(lVar8 + 0x20) = 0x2e;
    if ((param_3 != 0) &&
       (lVar8 = FUN_03411150(param_3,lVar8,0), puVar4 = StringLiteral_4291,
       puVar3 = Method_System_Collections_CollectionBase_OnValidate__,
       puVar2 = 
       Method_Unity_VisualScripting_StaticFunctionInvoker<Vector2,_Vector2,_Vector2>__ctor__,
       puVar12 = Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__, lVar8 != 0)) {
      uVar5 = *(uint *)(lVar8 + 0x18);
      plVar10 = param_1;
      if (0 < (int)uVar5) {
        uVar15 = 0;
        do {
          if (uVar5 <= uVar15) goto System_Net_TimerThread__OnDomainUnload;
          lVar16 = *(long *)(lVar8 + (long)(int)uVar15 * 8 + 0x20);
          if (lVar16 == 0) goto LAB_039627c8;
          uVar6 = FUN_0340e6c4(lVar16,*(undefined8 *)puVar2,2,0);
          if (((uVar6 & 1) == 0) ||
             (uVar6 = FUN_0340dc94(lVar16,*(undefined8 *)
                                           Method_Unity_VisualScripting_StaticFunctionInvoker<Vector3,_float,_Vector3>__ctor__
                                   ,2,0), (uVar6 & 1) == 0)) {
            uVar5 = FUN_0340dc94(lVar16,*(undefined8 *)
                                         Method_System_DBNull_System_IConvertible_ToBoolean__,2,0);
            if ((uVar5 & 1) != 0) {
              lVar16 = FUN_03410500(lVar16,0,*(int *)(lVar16 + 0x10) + -2,0);
            }
            if (*(int *)(*(long *)
                          Method_Internal_Cryptography_Pal_CertificateData_FindAltNameMatch__ + 0xe0
                        ) == 0) {
              thunk_FUN_01ee6d7c();
            }
            plVar11 = (long *)FUN_03963b60(plVar10,lVar16,uVar5 & 1);
            uVar6 = FUN_03954014();
            if ((uVar6 & 1) != 0) {
              if (*(int *)(*(long *)puVar12 + 0xe0) == 0) {
                thunk_FUN_01ee6d7c();
              }
              uVar6 = FUN_03582560(plVar10,param_1,0);
              if ((uVar6 & 1) == 0) {
                uVar9 = thunk_FUN_01efb3a4(StringLiteral_4296);
                puVar12 = StringLiteral_4297;
                goto LAB_0396284c;
              }
              *param_4 = 1;
            }
            if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
              thunk_FUN_01ee6d7c();
            }
            plVar10 = (long *)FUN_03954b34(plVar11);
            if ((uVar5 & 1) != 0) {
              if (*(int *)(*(long *)puVar12 + 0xe0) == 0) {
                thunk_FUN_01ee6d7c();
              }
              uVar6 = FUN_03582560(plVar10,0,0);
              if ((uVar6 & 1) == 0) {
                uVar9 = *(undefined8 *)Method_UnityEngine_Component_GetComponent<Point>__;
                if (*(int *)(*(long *)puVar12 + 0xe0) == 0) {
                  thunk_FUN_01ee6d7c();
                }
                uVar9 = FUN_03579868(uVar9,0);
                uVar6 = FUN_03582560(plVar10,uVar9,0);
                if ((uVar6 & 1) == 0) goto LAB_03962450;
              }
              FUN_01bc50c0(plVar11);
              lVar16 = (**(code **)(*plVar11 + 0x1a8))(plVar11,*(undefined8 *)(*plVar11 + 0x1b0));
              uVar9 = thunk_FUN_01efb3a4(StringLiteral_4294);
              puVar12 = StringLiteral_4295;
LAB_03962804:
              uVar13 = thunk_FUN_01efb3a4(puVar12);
              goto LAB_0396285c;
            }
LAB_03962450:
            local_d0 = 0;
            plStack_e8 = (long *)0x0;
            local_f0 = 0;
            uStack_d8 = 0;
            uStack_e0 = 0;
            FUN_03964118(&local_f0,plVar11);
            if (lVar7 == 0) goto LAB_039627c8;
LAB_0396246c:
            lVar14 = *(long *)puVar4;
            plStack_b8 = plStack_e8;
            local_c0 = local_f0;
            uStack_a8 = uStack_d8;
            uStack_b0 = uStack_e0;
            local_a0 = local_d0;
            lVar16 = *(long *)(lVar7 + 0x10);
            *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
            if (lVar16 == 0) goto LAB_039627c8;
            uVar5 = *(uint *)(lVar7 + 0x18);
            if (uVar5 < *(uint *)(lVar16 + 0x18)) {
              *(uint *)(lVar7 + 0x18) = uVar5 + 1;
              lVar16 = lVar16 + (long)(int)uVar5 * 0x28;
              *(undefined8 *)(lVar16 + 0x40) = local_d0;
              *(long **)(lVar16 + 0x28) = plStack_e8;
              *(undefined8 *)(lVar16 + 0x20) = local_f0;
              *(undefined8 *)(lVar16 + 0x38) = uStack_d8;
              *(undefined8 *)(lVar16 + 0x30) = uStack_e0;
              thunk_FUN_01f51358(lVar16 + 0x28,0);
            }
            else {
              plStack_88 = plStack_e8;
              local_90 = local_f0;
              uStack_78 = uStack_d8;
              uStack_80 = uStack_e0;
              local_70 = local_d0;
              FUN_031b7d48(lVar7,&local_90,
                           *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
            }
          }
          else {
            uVar9 = FUN_03410500(lVar16,1,*(int *)(lVar16 + 0x10) + -2,0);
            uVar6 = FUN_03568ae4(uVar9,&local_c4,0);
            if ((uVar6 & 1) == 0) {
              uVar9 = thunk_FUN_01efb3a4(StringLiteral_3517);
              puVar12 = Method_Unity_Collections_ConcurrentMask_TryFree<Long1024>__;
LAB_0396284c:
              uVar13 = thunk_FUN_01efb3a4(puVar12);
LAB_0396285c:
              uVar9 = FUN_0340ebc0(uVar9,lVar16,uVar13,0);
              goto LAB_03962864;
            }
            if (plVar10 == (long *)0x0) goto LAB_039627c8;
            uVar6 = FUN_035841e4(plVar10,0);
            if ((uVar6 & 1) != 0) {
              plVar10 = (long *)(**(code **)(*plVar10 + 0x438))
                                          (plVar10,*(undefined8 *)(*plVar10 + 0x440));
              uVar9 = 1;
LAB_039625d8:
              local_d0 = 0;
              uStack_d8 = 0;
              uStack_e0 = 0;
              plStack_e8 = (long *)0x0;
              local_f0 = 0;
              FUN_0396398c(&local_f0,local_c4,plVar10,uVar9);
              if (lVar7 != 0) goto LAB_0396246c;
              goto LAB_039627c8;
            }
            uVar9 = *(undefined8 *)
                     Method_Meta_WitAi_ComponentExtensions_PreloadCopyData<AudioSource>__;
            if (*(int *)(*(long *)puVar12 + 0xe0) == 0) {
              thunk_FUN_01ee6d7c();
            }
            uVar9 = FUN_03579868(uVar9,0);
            if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
              thunk_FUN_01ee6d7c(*(long *)puVar3);
            }
            uVar6 = FUN_03958e9c(plVar10,uVar9);
            if ((uVar6 & 1) != 0) {
              uVar9 = *(undefined8 *)
                       Method_Meta_WitAi_ComponentExtensions_PreloadCopyData<AudioSource>__;
              if (*(int *)(*(long *)puVar12 + 0xe0) == 0) {
                thunk_FUN_01ee6d7c();
              }
              uVar9 = FUN_03579868(uVar9,0);
              if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
                thunk_FUN_01ee6d7c(*(long *)puVar3);
              }
              lVar16 = FUN_039591c4(plVar10,uVar9);
              if (lVar16 != 0) {
                if (*(int *)(lVar16 + 0x18) != 0) {
                  plVar10 = *(long **)(lVar16 + 0x20);
                  uVar9 = 0;
                  goto LAB_039625d8;
                }
                goto System_Net_TimerThread__OnDomainUnload;
              }
              goto LAB_039627c8;
            }
            uVar9 = *(undefined8 *)
                     Method_UnityEngine_InputSystem_LowLevel_InputEvent_set_sizeInBytes__;
            if (*(int *)(*(long *)puVar12 + 0xe0) == 0) {
              thunk_FUN_01ee6d7c();
            }
            plVar11 = (long *)FUN_03579868(uVar9,0);
            if (plVar11 == (long *)0x0) goto LAB_039627c8;
            uVar6 = (**(code **)(*plVar11 + 0x2a8))
                              (plVar11,plVar10,*(undefined8 *)(*plVar11 + 0x2b0));
            if ((uVar6 & 1) == 0) {
              FUN_01bc50c0(plVar10);
              lVar16 = (**(code **)(*plVar10 + 0x1a8))(plVar10,*(undefined8 *)(*plVar10 + 0x1b0));
              uVar9 = thunk_FUN_01efb3a4(StringLiteral_4299);
              puVar12 = Method_Unity_Collections_ConcurrentMask_TryFree<Long1024>__;
              goto LAB_03962804;
            }
            local_d0 = 0;
            plStack_e8 = (long *)0x0;
            local_f0 = 0;
            uStack_d8 = 0;
            uStack_e0 = 0;
            FUN_03963b10(&local_f0,local_c4);
            if (lVar7 == 0) goto LAB_039627c8;
            lVar14 = *(long *)puVar4;
            plStack_b8 = plStack_e8;
            local_c0 = local_f0;
            uStack_a8 = uStack_d8;
            uStack_b0 = uStack_e0;
            local_a0 = local_d0;
            lVar16 = *(long *)(lVar7 + 0x10);
            *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
            if (lVar16 == 0) goto LAB_039627c8;
            uVar5 = *(uint *)(lVar7 + 0x18);
            if (uVar5 < *(uint *)(lVar16 + 0x18)) {
              *(uint *)(lVar7 + 0x18) = uVar5 + 1;
              lVar16 = lVar16 + (long)(int)uVar5 * 0x28;
              *(undefined8 *)(lVar16 + 0x40) = local_d0;
              *(long **)(lVar16 + 0x28) = plStack_e8;
              *(undefined8 *)(lVar16 + 0x20) = local_f0;
              *(undefined8 *)(lVar16 + 0x38) = uStack_d8;
              *(undefined8 *)(lVar16 + 0x30) = uStack_e0;
              thunk_FUN_01f51358(lVar16 + 0x28,0);
            }
            else {
              plStack_88 = plStack_e8;
              local_90 = local_f0;
              uStack_78 = uStack_d8;
              uStack_80 = uStack_e0;
              local_70 = local_d0;
              FUN_031b7d48(lVar7,&local_90,
                           *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
            }
            uVar9 = *(undefined8 *)Method_System_Convert_ToUInt64__;
            if (*(int *)(*(long *)puVar12 + 0xe0) == 0) {
              thunk_FUN_01ee6d7c();
            }
            plVar10 = (long *)FUN_03579868(uVar9,0);
          }
          uVar5 = *(uint *)(lVar8 + 0x18);
          uVar15 = uVar15 + 1;
        } while ((int)uVar15 < (int)uVar5);
      }
      lVar8 = *param_2;
      if (*(int *)(*(long *)puVar12 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      uVar6 = FUN_03582560(lVar8,0,0);
      if ((uVar6 & 1) == 0) {
        uVar9 = *(undefined8 *)Method_System_Convert_ToUInt64__;
        if (*(int *)(*(long *)puVar12 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        uVar9 = FUN_03579868(uVar9,0);
        uVar6 = FUN_03583338(plVar10,uVar9,0);
        if ((uVar6 & 1) != 0) {
          plVar11 = (long *)*param_2;
          if (plVar11 == (long *)0x0) goto LAB_039627c8;
          uVar6 = (**(code **)(*plVar11 + 0x2a8))(plVar11,plVar10,*(undefined8 *)(*plVar11 + 0x2b0))
          ;
          if ((uVar6 & 1) == 0) {
            uVar9 = thunk_FUN_01efb3a4(
                                      Method_UnityEngine_UIElements_PointerEventBase<PointerUpEvent>_get_localPosition__
                                      );
            uVar9 = FUN_01f08890(uVar9,9);
            FUN_01bc50c0();
            uVar13 = thunk_FUN_01efb3a4(StringLiteral_4301);
            FUN_01bc5408(uVar9,0,uVar13);
            FUN_01bc50c0(lVar7);
            thunk_FUN_01efb3a4(StringLiteral_4302);
            iVar1 = *(int *)(lVar7 + 0x18);
            FUN_01bc50c0(lVar7);
            uVar13 = thunk_FUN_01efb3a4(StringLiteral_4303);
            thunk_FUN_031b7988(&local_90,lVar7,iVar1 + -1,uVar13);
            plVar11 = plStack_88;
            FUN_01bc50c0(plStack_88);
            lVar7 = *plVar11;
            uVar13 = (**(code **)(lVar7 + 0x1a8))(plVar11,*(undefined8 *)(lVar7 + 0x1b0));
            FUN_01bc50c0(uVar9);
            FUN_01bc5408(uVar9,1,uVar13);
            FUN_01bc50c0(uVar9);
            uVar13 = thunk_FUN_01efb3a4(StringLiteral_4304);
            FUN_01bc5408(uVar9,2,uVar13);
            FUN_01bc50c0(uVar9);
            FUN_01bc5408(uVar9,3,param_3);
            FUN_01bc50c0(uVar9);
            uVar13 = thunk_FUN_01efb3a4(StringLiteral_4305);
            FUN_01bc5408(uVar9,4,uVar13);
            FUN_01bc50c0(plVar10);
            uVar13 = (**(code **)(*plVar10 + 0x2d8))(plVar10,*(undefined8 *)(*plVar10 + 0x2e0));
            FUN_01bc50c0(uVar9);
            FUN_01bc5408(uVar9,5,uVar13);
            FUN_01bc50c0(uVar9);
            uVar13 = thunk_FUN_01efb3a4(StringLiteral_4306);
            FUN_01bc5408(uVar9,6,uVar13);
            param_2 = (long *)*param_2;
            FUN_01bc50c0(param_2);
            uVar13 = (**(code **)(*param_2 + 0x2d8))(param_2,*(undefined8 *)(*param_2 + 0x2e0));
            FUN_01bc50c0(uVar9);
            FUN_01bc5408(uVar9,7,uVar13);
            FUN_01bc50c0(uVar9);
            uVar13 = thunk_FUN_01efb3a4(Method_Unity_Collections_ConcurrentMask_TryFree<Long1024>__)
            ;
            FUN_01bc5408(uVar9,8,uVar13);
            uVar9 = FUN_0340efe8(uVar9,0);
LAB_03962864:
            thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<NetSyncConnection>_get_Data__);
            uVar13 = thunk_FUN_01f117cc();
            FUN_034f6754(uVar13,uVar9,0);
            uVar9 = thunk_FUN_01efb3a4(StringLiteral_4298);
                    /* WARNING: Subroutine does not return */
            FUN_01f08910(uVar13,uVar9);
          }
        }
      }
      else {
        *param_2 = (long)plVar10;
        thunk_FUN_01f51358(param_2,plVar10);
      }
      return lVar7;
    }
  }
LAB_039627c8:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


