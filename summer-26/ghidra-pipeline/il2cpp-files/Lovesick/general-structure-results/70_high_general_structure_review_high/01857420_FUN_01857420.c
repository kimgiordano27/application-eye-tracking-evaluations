/*
FUNCTION_NAME: FUN_01857420
ENTRY_POINT: 01857420
PROGRAM: Lovesick-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_16;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_4;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure;functionality_data_collection_or_telemetry_hits_4
*/


void FUN_01857420(undefined8 param_1,undefined8 param_2,long param_3,ulong param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined4 uVar8;
  uint uVar9;
  int iVar10;
  ulong uVar11;
  long lVar12;
  undefined8 uVar13;
  long lVar14;
  char *pcVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  ulong uVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  long local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  puVar1 = Method_Obi_ObiUtils_Swap<float>__;
  puVar3 = System_Collections_Generic_List<HashSet<Face>>_TypeInfo;
  if ((DAT_03779647 & 1) == 0) {
    thunk_FUN_00d48444(Newtonsoft_Json_JsonReader_State_TypeInfo);
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vpmaxqd_f64__);
    thunk_FUN_00d48444(Method_System_Xml_XmlSqlBinaryReader_ScanOverAnyValue__);
    thunk_FUN_00d48444(System_IO_DriveNotFoundException_TypeInfo);
    thunk_FUN_00d48444(
                      Method_UnityEngine_Playables_PlayableExtensions_IsValid<ScriptPlayable<ActivationControlPlayable>>__
                      );
    thunk_FUN_00d48444(PTR_DAT_033f1958);
    thunk_FUN_00d48444(DG_Tweening_Core_DOSetter<Vector2>_TypeInfo);
    thunk_FUN_00d48444(Method_Meta_WitAi_Requests_VRequest_DecodeSuccess__);
    thunk_FUN_00d48444(StringLiteral_13482);
    thunk_FUN_00d48444(System_Collections_Generic_List<HashSet<Face>>_TypeInfo);
    thunk_FUN_00d48444(Method_Obi_ObiUtils_Swap<float>__);
    DAT_03779647 = 1;
  }
  local_80 = 0;
  FUN_01865608(param_1,*(undefined8 *)puVar1,0);
  FUN_01865608(param_3,*(undefined8 *)puVar3,0);
  uVar11 = FUN_01866238(param_1,0);
  puVar1 = Method_Meta_WitAi_Requests_VRequest_DecodeSuccess__;
  puVar3 = System_IO_DriveNotFoundException_TypeInfo;
  if ((uVar11 & 1) == 0) {
    thunk_FUN_00d48444(Method_OVRLocatable_TrackingSpacePose_ComputeWorldRotation__);
    uVar16 = thunk_FUN_00d62348();
    FUN_00ac2be8();
    uVar13 = thunk_FUN_00d48444(HandMirror_<ShowReflectionCoroutine>d__17_TypeInfo);
    uVar17 = thunk_FUN_00d48444(Method_Obi_ObiUtils_Swap<float>__);
    FUN_016ec624(uVar16,uVar13,uVar17,0);
LAB_01857730:
    uVar13 = thunk_FUN_00d48444(Method_Meta_XR_ImmersiveDebugger_Manager_WatchUtils_Register<bool>__
                               );
                    /* WARNING: Subroutine does not return */
    FUN_00da5038(uVar16,uVar13);
  }
  lVar12 = *(long *)System_IO_DriveNotFoundException_TypeInfo;
  if (*(int *)(lVar12 + 0xe0) == 0) {
    thunk_FUN_00d32864();
    lVar12 = *(long *)puVar3;
  }
  lVar12 = **(long **)(lVar12 + 0xb8);
  local_90 = 0;
  uStack_88 = 0;
  FUN_013b2b50(&local_90,param_1,param_2,*(undefined8 *)puVar1);
  if (lVar12 != 0) {
    local_70 = local_90;
    uStack_68 = uStack_88;
    FUN_013c9004(lVar12,&local_70,&local_78,*(undefined8 *)StringLiteral_13482);
    puVar1 = PTR_DAT_033f1958;
    if ((local_78 != 0) && (param_3 != 0)) {
      lVar12 = *(long *)(local_78 + 0x18);
      uVar16 = *(undefined8 *)(local_78 + 0x20);
      uVar13 = *(undefined8 *)(local_78 + 0x28);
      local_80 = FUN_01857cc4(uVar13,param_3,0,*(undefined4 *)(param_3 + 0x10),4);
      lVar14 = *(long *)(*(long *)puVar1 + 0x20);
      if ((*(byte *)(lVar14 + 0x132) & 1) == 0) {
        lVar14 = FUN_00d5941c();
      }
      lVar14 = *(long *)(*(long *)(lVar14 + 0xc0) + 8);
      if ((*(byte *)(lVar14 + 0x132) & 1) == 0) {
        lVar14 = FUN_00d5941c();
      }
      puVar5 = 
      Method_UnityEngine_Playables_PlayableExtensions_IsValid<ScriptPlayable<ActivationControlPlayable>>__
      ;
      puVar2 = DG_Tweening_Core_DOSetter<Vector2>_TypeInfo;
      pcVar15 = (char *)thunk_FUN_00d32ed4(&local_80,*(undefined8 *)(lVar14 + 0x80));
      puVar7 = Method_Unity_Burst_Intrinsics_Arm_Neon_vpmaxqd_f64__;
      puVar6 = Method_System_Xml_XmlSqlBinaryReader_ScanOverAnyValue__;
      puVar4 = Newtonsoft_Json_JsonReader_State_TypeInfo;
      if (*pcVar15 == '\0') {
        if (0 < *(int *)(param_3 + 0x10)) {
          iVar20 = 0;
          do {
            uVar8 = FUN_015fa29c(param_3,iVar20,0);
            if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
              thunk_FUN_00d32864(*(long *)puVar4);
            }
            uVar11 = FUN_016f68bc(uVar8,0);
            if ((uVar11 & 1) == 0) {
              uVar9 = FUN_015fa29c(param_3,iVar20,0);
              if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
                thunk_FUN_00d32864(*(long *)puVar4);
              }
              uVar11 = FUN_016f25d8(uVar9,0);
              if ((((uVar11 & 1) != 0) || ((uVar9 & 0xffff) == 0x2d)) || ((uVar9 & 0xffff) == 0x2b))
              {
                if (*(int *)(*(long *)
                              Method_UnityEngine_Playables_PlayableExtensions_IsValid<ScriptPlayable<ActivationControlPlayable>>__
                            + 0xe0) == 0) {
                  thunk_FUN_00d32864();
                }
                uVar17 = FUN_017a5e58(param_1,0);
                param_3 = FUN_01604318(param_3,0);
                if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
                  thunk_FUN_00d32864(*(long *)puVar6);
                }
                uVar18 = FUN_01731954(0);
                if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
                  thunk_FUN_00d32864();
                }
                lVar14 = FUN_016fbcdc(param_3,uVar17,uVar18,0);
                if (lVar14 != 0) {
                  if ((param_4 & 1) == 0) {
                    if (*(int *)(*(long *)
                                  Method_UnityEngine_Playables_PlayableExtensions_IsValid<ScriptPlayable<ActivationControlPlayable>>__
                                + 0xe0) == 0) {
                      thunk_FUN_00d32864();
                    }
                    FUN_017a5f20(param_1,lVar14,0);
                    return;
                  }
                  thunk_FUN_00d48444(Method_System_Xml_XmlSqlBinaryReader_ScanOverAnyValue__);
                  FUN_00acb0a4();
                  uVar16 = FUN_01731954(0);
                  uVar13 = thunk_FUN_00d48444(
                                             Method_System_Dynamic_Utils_ContractUtils_RequiresNotNull__
                                             );
                  uVar16 = FUN_018651d4(uVar13,uVar16,param_3,0);
                  thunk_FUN_00d48444(
                                    Method_System_Collections_Generic_List<WitResponseNode>_Remove__
                                    );
                  uVar13 = thunk_FUN_00d62348();
                  FUN_00ac2be8();
                  FUN_01757644(uVar13,uVar16,0);
                  goto LAB_018578fc;
                }
                if (param_3 == 0) goto LAB_01857c20;
              }
              if (*(int *)(param_3 + 0x10) < iVar20) {
                uVar11 = 0;
                goto LAB_01857b54;
              }
              uVar11 = 0;
              goto LAB_01857970;
            }
            iVar20 = iVar20 + 1;
          } while (iVar20 < *(int *)(param_3 + 0x10));
        }
        thunk_FUN_00d48444(Method_OVRLocatable_TrackingSpacePose_ComputeWorldRotation__);
        uVar16 = thunk_FUN_00d62348();
        FUN_00ac2be8();
        uVar13 = thunk_FUN_00d48444(StringLiteral_4203);
        FUN_016f2f28(uVar16,uVar13,0);
        goto LAB_01857730;
      }
      FUN_01347408(&local_80,&local_70,*(undefined8 *)puVar2);
      if (lVar12 != 0) {
        if (*(uint *)(lVar12 + 0x18) <= (uint)local_70) {
LAB_01857c24:
                    /* WARNING: Subroutine does not return */
          FUN_00da5194();
        }
        lVar14 = *(long *)puVar5;
LAB_01857648:
        uVar11 = *(ulong *)(lVar12 + (long)(int)(uint)local_70 * 8 + 0x20);
        if (*(int *)(lVar14 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        goto LAB_01857664;
      }
    }
  }
LAB_01857c20:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
  while( true ) {
    FUN_01347408(&local_80,&local_70,*(undefined8 *)puVar2);
    if (lVar12 == 0) goto LAB_01857c20;
    if (*(uint *)(lVar12 + 0x18) <= (uint)local_70) goto LAB_01857c24;
    iVar20 = iVar10 + 1;
    uVar11 = *(ulong *)(lVar12 + (long)(int)(uint)local_70 * 8 + 0x20) | uVar11;
    if (*(int *)(param_3 + 0x10) < iVar20) break;
LAB_01857970:
    iVar10 = FUN_016047b8(param_3,0x2c,iVar20,0);
    if (iVar10 == -1) {
      iVar10 = *(int *)(param_3 + 0x10);
    }
    iVar22 = iVar10;
    iVar21 = iVar20;
    if (iVar20 < iVar10) {
      do {
        uVar8 = FUN_015fa29c(param_3,iVar20,0);
        if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
          thunk_FUN_00d32864(*(long *)puVar4);
        }
        uVar19 = FUN_016f68bc(uVar8,0);
        iVar21 = iVar20;
      } while (((uVar19 & 1) != 0) && (iVar20 = iVar20 + 1, iVar21 = iVar10, iVar10 != iVar20));
    }
    do {
      iVar20 = iVar22 - iVar21;
      if (iVar20 == 0 || iVar22 < iVar21) break;
      uVar8 = FUN_015fa29c(param_3,iVar22 + -1,0);
      if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
        thunk_FUN_00d32864(*(long *)puVar4);
      }
      uVar19 = FUN_016f68bc(uVar8,0);
      iVar22 = iVar22 + -1;
    } while ((uVar19 & 1) != 0);
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    local_80 = FUN_01857dc0(param_3,uVar16,uVar13,iVar21,iVar20,4);
    lVar14 = *(long *)(*(long *)puVar1 + 0x20);
    if ((*(byte *)(lVar14 + 0x132) & 1) == 0) {
      lVar14 = FUN_00d5941c();
    }
    puVar2 = DG_Tweening_Core_DOSetter<Vector2>_TypeInfo;
    lVar14 = *(long *)(*(long *)(lVar14 + 0xc0) + 8);
    if ((*(byte *)(lVar14 + 0x132) & 1) == 0) {
      lVar14 = FUN_00d5941c();
    }
    pcVar15 = (char *)thunk_FUN_00d32ed4(&local_80,*(undefined8 *)(lVar14 + 0x80));
    if (*pcVar15 == '\0') {
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      local_80 = FUN_01857dc0(param_3,uVar16,uVar13,iVar21,iVar20,5);
    }
    lVar14 = *(long *)(*(long *)puVar1 + 0x20);
    if ((*(byte *)(lVar14 + 0x132) & 1) == 0) {
      lVar14 = FUN_00d5941c();
    }
    lVar14 = *(long *)(*(long *)(lVar14 + 0xc0) + 8);
    if ((*(byte *)(lVar14 + 0x132) & 1) == 0) {
      lVar14 = FUN_00d5941c();
    }
    pcVar15 = (char *)thunk_FUN_00d32ed4(&local_80,*(undefined8 *)(lVar14 + 0x80));
    if (*pcVar15 == '\0') {
      uVar8 = *(undefined4 *)(param_3 + 0x10);
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      local_80 = FUN_01857cc4(uVar13,param_3,0,uVar8,5);
      lVar14 = *(long *)(*(long *)puVar1 + 0x20);
      if ((*(byte *)(lVar14 + 0x132) & 1) == 0) {
        lVar14 = FUN_00d5941c();
      }
      puVar3 = 
      Method_UnityEngine_Playables_PlayableExtensions_IsValid<ScriptPlayable<ActivationControlPlayable>>__
      ;
      lVar14 = *(long *)(*(long *)(lVar14 + 0xc0) + 8);
      if ((*(byte *)(lVar14 + 0x132) & 1) == 0) {
        lVar14 = FUN_00d5941c();
      }
      pcVar15 = (char *)thunk_FUN_00d32ed4(&local_80,*(undefined8 *)(lVar14 + 0x80));
      if (*pcVar15 == '\0') {
        thunk_FUN_00d48444(Method_System_Xml_XmlSqlBinaryReader_ScanOverAnyValue__);
        FUN_00acb0a4();
        uVar16 = FUN_01731954(0);
        uVar13 = thunk_FUN_00d48444(UnityEngine_Timeline_TimelineClip_TypeInfo);
        uVar16 = FUN_018651d4(uVar13,uVar16,param_3,0);
        thunk_FUN_00d48444(Method_OVRLocatable_TrackingSpacePose_ComputeWorldRotation__);
        uVar13 = thunk_FUN_00d62348();
        FUN_00ac2be8();
        FUN_016f2f28(uVar13,uVar16,0);
LAB_018578fc:
        uVar16 = thunk_FUN_00d48444(
                                   Method_Meta_XR_ImmersiveDebugger_Manager_WatchUtils_Register<bool>__
                                   );
                    /* WARNING: Subroutine does not return */
        FUN_00da5038(uVar13,uVar16);
      }
      FUN_01347408(&local_80,&local_70,*(undefined8 *)DG_Tweening_Core_DOSetter<Vector2>_TypeInfo);
      if (lVar12 == 0) goto LAB_01857c20;
      if (*(uint *)(lVar12 + 0x18) <= (uint)local_70) goto LAB_01857c24;
      lVar14 = *(long *)puVar3;
      goto LAB_01857648;
    }
  }
LAB_01857b54:
  if (*(int *)(*(long *)
                Method_UnityEngine_Playables_PlayableExtensions_IsValid<ScriptPlayable<ActivationControlPlayable>>__
              + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
LAB_01857664:
  FUN_017a63ec(param_1,uVar11,0);
  return;
}


