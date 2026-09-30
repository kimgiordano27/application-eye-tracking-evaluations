/*
FUNCTION_NAME: Oculus.Interaction.GrabStrengthIndicator$$get_FingerGlowColorHover
ENTRY_POINT: 018575c8
PROGRAM: Lovesick-libil2cpp.so
SCORE: 85
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_13;strong_pose_or_ray_construction_hits_3;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure
*/


void Oculus_Interaction_GrabStrengthIndicator__get_FingerGlowColorHover(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  long lVar9;
  char *pcVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  ulong uVar13;
  long *unaff_x19;
  long unaff_x20;
  ulong uVar14;
  int iVar15;
  int iVar16;
  ulong unaff_x24;
  int iVar17;
  long *unaff_x28;
  long unaff_x29;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 uStack0000000000000018;
  undefined8 in_stack_00000030;
  uint in_stack_00000040;
  
  uStack0000000000000018 = param_1;
  in_stack_00000030 = FUN_01857cc4();
  lVar9 = *(long *)(*unaff_x19 + 0x20);
  if ((*(byte *)(lVar9 + 0x132) & 1) == 0) {
    lVar9 = FUN_00d5941c();
  }
  lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 8);
  if ((*(byte *)(lVar9 + 0x132) & 1) == 0) {
    lVar9 = FUN_00d5941c();
  }
  puVar3 = 
  Method_UnityEngine_Playables_PlayableExtensions_IsValid<ScriptPlayable<ActivationControlPlayable>>__
  ;
  puVar1 = DG_Tweening_Core_DOSetter<Vector2>_TypeInfo;
  pcVar10 = (char *)thunk_FUN_00d32ed4(&stack0x00000030,*(undefined8 *)(lVar9 + 0x80));
  puVar5 = Method_Unity_Burst_Intrinsics_Arm_Neon_vpmaxqd_f64__;
  puVar4 = Method_System_Xml_XmlSqlBinaryReader_ScanOverAnyValue__;
  puVar2 = Newtonsoft_Json_JsonReader_State_TypeInfo;
  if (*pcVar10 == '\0') {
    if (0 < *(int *)(unaff_x20 + 0x10)) {
      iVar15 = 0;
      do {
        uVar6 = FUN_015fa29c();
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_00d32864(*(long *)puVar2);
        }
        uVar14 = FUN_016f68bc(uVar6,0);
        if ((uVar14 & 1) == 0) {
          uVar7 = FUN_015fa29c();
          if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
            thunk_FUN_00d32864(*(long *)puVar2);
          }
          uVar14 = FUN_016f25d8(uVar7,0);
          if ((((uVar14 & 1) != 0) || ((uVar7 & 0xffff) == 0x2d)) || ((uVar7 & 0xffff) == 0x2b)) {
            if (*(int *)(*(long *)
                          Method_UnityEngine_Playables_PlayableExtensions_IsValid<ScriptPlayable<ActivationControlPlayable>>__
                        + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            uVar11 = FUN_017a5e58(in_stack_00000008,0);
            unaff_x20 = FUN_01604318();
            if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
              thunk_FUN_00d32864(*(long *)puVar4);
            }
            uVar12 = FUN_01731954(0);
            if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            lVar9 = FUN_016fbcdc(unaff_x20,uVar11,uVar12,0);
            if (lVar9 != 0) {
              if ((unaff_x24 & 1) == 0) {
                if (*(int *)(*(long *)
                              Method_UnityEngine_Playables_PlayableExtensions_IsValid<ScriptPlayable<ActivationControlPlayable>>__
                            + 0xe0) == 0) {
                  thunk_FUN_00d32864();
                }
                FUN_017a5f20(in_stack_00000008,lVar9,0);
                return;
              }
              thunk_FUN_00d48444(Method_System_Xml_XmlSqlBinaryReader_ScanOverAnyValue__);
              FUN_00acb0a4();
              uVar11 = FUN_01731954(0);
              uVar12 = thunk_FUN_00d48444(
                                         Method_System_Dynamic_Utils_ContractUtils_RequiresNotNull__
                                         );
              uVar11 = FUN_018651d4(uVar12,uVar11,unaff_x20,0);
              thunk_FUN_00d48444(Method_System_Collections_Generic_List<WitResponseNode>_Remove__);
              uVar12 = thunk_FUN_00d62348();
              FUN_00ac2be8();
              FUN_01757644(uVar12,uVar11,0);
              goto LAB_018578fc;
            }
            if (unaff_x20 == 0) goto LAB_01857c20;
          }
          if (*(int *)(unaff_x20 + 0x10) < iVar15) {
            uVar14 = 0;
            goto LAB_01857b54;
          }
          uVar14 = 0;
          goto LAB_01857970;
        }
        iVar15 = iVar15 + 1;
      } while (iVar15 < *(int *)(unaff_x20 + 0x10));
    }
    thunk_FUN_00d48444(Method_OVRLocatable_TrackingSpacePose_ComputeWorldRotation__);
    uVar11 = thunk_FUN_00d62348();
    FUN_00ac2be8();
    uVar12 = thunk_FUN_00d48444(StringLiteral_4203);
    FUN_016f2f28(uVar11,uVar12,0);
    uVar12 = thunk_FUN_00d48444(Method_Meta_XR_ImmersiveDebugger_Manager_WatchUtils_Register<bool>__
                               );
                    /* WARNING: Subroutine does not return */
    FUN_00da5038(uVar11,uVar12);
  }
  FUN_01347408(&stack0x00000030,&stack0x00000040,*(undefined8 *)puVar1);
  if (unaff_x29 == 0) {
LAB_01857c20:
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  if (*(uint *)(unaff_x29 + 0x18) <= in_stack_00000040) {
LAB_01857c24:
                    /* WARNING: Subroutine does not return */
    FUN_00da5194();
  }
  lVar9 = *(long *)puVar3;
LAB_01857648:
  uVar14 = *(ulong *)(unaff_x29 + (long)(int)in_stack_00000040 * 8 + 0x20);
  if (*(int *)(lVar9 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  goto LAB_01857664;
  while( true ) {
    FUN_01347408(&stack0x00000030,&stack0x00000040,*(undefined8 *)puVar1);
    if (unaff_x29 == 0) goto LAB_01857c20;
    if (*(uint *)(unaff_x29 + 0x18) <= in_stack_00000040) goto LAB_01857c24;
    iVar15 = iVar8 + 1;
    uVar14 = *(ulong *)(unaff_x29 + (long)(int)in_stack_00000040 * 8 + 0x20) | uVar14;
    if (*(int *)(unaff_x20 + 0x10) < iVar15) break;
LAB_01857970:
    iVar8 = FUN_016047b8(unaff_x20,0x2c,iVar15,0);
    if (iVar8 == -1) {
      iVar8 = *(int *)(unaff_x20 + 0x10);
    }
    iVar17 = iVar8;
    iVar16 = iVar15;
    if (iVar15 < iVar8) {
      do {
        uVar6 = FUN_015fa29c(unaff_x20,iVar15,0);
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_00d32864(*(long *)puVar2);
        }
        uVar13 = FUN_016f68bc(uVar6,0);
        iVar16 = iVar15;
      } while (((uVar13 & 1) != 0) && (iVar15 = iVar15 + 1, iVar16 = iVar8, iVar8 != iVar15));
    }
    do {
      iVar15 = iVar17 - iVar16;
      if (iVar15 == 0 || iVar17 < iVar16) break;
      uVar6 = FUN_015fa29c(unaff_x20,iVar17 + -1,0);
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_00d32864(*(long *)puVar2);
      }
      uVar13 = FUN_016f68bc(uVar6,0);
      iVar17 = iVar17 + -1;
    } while ((uVar13 & 1) != 0);
    if (*(int *)(*unaff_x28 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    in_stack_00000030 =
         FUN_01857dc0(unaff_x20,in_stack_00000010,uStack0000000000000018,iVar16,iVar15,4);
    lVar9 = *(long *)(*unaff_x19 + 0x20);
    if ((*(byte *)(lVar9 + 0x132) & 1) == 0) {
      lVar9 = FUN_00d5941c();
    }
    puVar1 = DG_Tweening_Core_DOSetter<Vector2>_TypeInfo;
    lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 8);
    if ((*(byte *)(lVar9 + 0x132) & 1) == 0) {
      lVar9 = FUN_00d5941c();
    }
    pcVar10 = (char *)thunk_FUN_00d32ed4(&stack0x00000030,*(undefined8 *)(lVar9 + 0x80));
    if (*pcVar10 == '\0') {
      if (*(int *)(*unaff_x28 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      in_stack_00000030 =
           FUN_01857dc0(unaff_x20,in_stack_00000010,uStack0000000000000018,iVar16,iVar15,5);
    }
    lVar9 = *(long *)(*unaff_x19 + 0x20);
    if ((*(byte *)(lVar9 + 0x132) & 1) == 0) {
      lVar9 = FUN_00d5941c();
    }
    lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 8);
    if ((*(byte *)(lVar9 + 0x132) & 1) == 0) {
      lVar9 = FUN_00d5941c();
    }
    pcVar10 = (char *)thunk_FUN_00d32ed4(&stack0x00000030,*(undefined8 *)(lVar9 + 0x80));
    if (*pcVar10 == '\0') {
      uVar6 = *(undefined4 *)(unaff_x20 + 0x10);
      if (*(int *)(*unaff_x28 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      in_stack_00000030 = FUN_01857cc4(uStack0000000000000018,unaff_x20,0,uVar6,5);
      lVar9 = *(long *)(*unaff_x19 + 0x20);
      if ((*(byte *)(lVar9 + 0x132) & 1) == 0) {
        lVar9 = FUN_00d5941c();
      }
      puVar1 = 
      Method_UnityEngine_Playables_PlayableExtensions_IsValid<ScriptPlayable<ActivationControlPlayable>>__
      ;
      lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 8);
      if ((*(byte *)(lVar9 + 0x132) & 1) == 0) {
        lVar9 = FUN_00d5941c();
      }
      pcVar10 = (char *)thunk_FUN_00d32ed4(&stack0x00000030,*(undefined8 *)(lVar9 + 0x80));
      if (*pcVar10 == '\0') {
        thunk_FUN_00d48444(Method_System_Xml_XmlSqlBinaryReader_ScanOverAnyValue__);
        FUN_00acb0a4();
        uVar11 = FUN_01731954(0);
        uVar12 = thunk_FUN_00d48444(UnityEngine_Timeline_TimelineClip_TypeInfo);
        uVar11 = FUN_018651d4(uVar12,uVar11,unaff_x20,0);
        thunk_FUN_00d48444(Method_OVRLocatable_TrackingSpacePose_ComputeWorldRotation__);
        uVar12 = thunk_FUN_00d62348();
        FUN_00ac2be8();
        FUN_016f2f28(uVar12,uVar11,0);
LAB_018578fc:
        uVar11 = thunk_FUN_00d48444(
                                   Method_Meta_XR_ImmersiveDebugger_Manager_WatchUtils_Register<bool>__
                                   );
                    /* WARNING: Subroutine does not return */
        FUN_00da5038(uVar12,uVar11);
      }
      FUN_01347408(&stack0x00000030,&stack0x00000040,
                   *(undefined8 *)DG_Tweening_Core_DOSetter<Vector2>_TypeInfo);
      if (unaff_x29 == 0) goto LAB_01857c20;
      if (*(uint *)(unaff_x29 + 0x18) <= in_stack_00000040) goto LAB_01857c24;
      lVar9 = *(long *)puVar1;
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
  FUN_017a63ec(in_stack_00000008,uVar14,0);
  return;
}


