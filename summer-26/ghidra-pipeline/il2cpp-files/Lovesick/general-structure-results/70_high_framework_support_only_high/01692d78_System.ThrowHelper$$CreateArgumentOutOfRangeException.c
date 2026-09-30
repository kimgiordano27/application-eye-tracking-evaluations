/*
FUNCTION_NAME: System.ThrowHelper$$CreateArgumentOutOfRangeException
ENTRY_POINT: 01692d78
PROGRAM: Lovesick-libil2cpp.so
SCORE: 86
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_21;paired_field_refs_with_eye_source;telemetry_or_network_hits_1;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_data_collection_or_telemetry_hits_1
*/


void System_ThrowHelper__CreateArgumentOutOfRangeException(void)

{
  uint uVar1;
  undefined4 uVar2;
  byte bVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long *plVar9;
  ulong uVar10;
  long lVar11;
  undefined8 uVar12;
  bool bVar13;
  long lVar14;
  long unaff_x19;
  int iVar15;
  long unaff_x20;
  long unaff_x21;
  long lVar16;
  undefined4 uStack000000000000000c;
  
  thunk_FUN_00d48444();
  thunk_FUN_00d48444(StringLiteral_3033);
  thunk_FUN_00d48444(
                    Method_System_Collections_Generic_Dictionary_Enumerator<TrackableId,_AREnvironmentProbe>_MoveNext__
                    );
  thunk_FUN_00d48444(Method_UnityEngine_InputSystem_InputControlExtensions_AccumulateValueInEvent__)
  ;
  thunk_FUN_00d48444(DG_Tweening_ShortcutExtensions_<>c__DisplayClass17_0_TypeInfo);
  thunk_FUN_00d48444(PTR_DAT_033ea8a0);
  *(undefined1 *)(unaff_x21 + 0x512) = 1;
  puVar6 = 
  Method_System_Collections_Generic_List<ProbeVolumeSceneData_SerializablePVBakeSettings>_Add__;
  puVar5 = 
  Method_System_Collections_Generic_Dictionary_Enumerator<TrackableId,_AREnvironmentProbe>_MoveNext__
  ;
  if (unaff_x19 == 0) goto LAB_016932dc;
  iVar15 = *(int *)(unaff_x19 + 0x18);
  if (iVar15 == 4) {
    lVar16 = *(long *)(unaff_x19 + 0x30);
    if (lVar16 == 0) goto LAB_016932dc;
    if (*(int *)(lVar16 + 0x10) < 1) {
      uVar8 = FUN_00da4fb8(*(undefined8 *)
                            Method_System_ComponentModel_DateTimeConverter_ConvertFrom__,0);
    }
    else {
      if (*(int *)(*(long *)Method_Unity_Burst_Intrinsics_Arm_Neon_vpmaxqd_f64__ + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar8 = FUN_01702364(lVar16,0);
    }
    *(undefined8 *)(unaff_x19 + 0xe8) = uVar8;
    if (*(long *)(unaff_x20 + 0x88) == 0) goto LAB_016932dc;
    lVar16 = FUN_016999c0(*(long *)(unaff_x20 + 0x88),0);
    if (lVar16 == unaff_x19) {
      if (*(long *)(unaff_x20 + 0x88) == 0) goto LAB_016932dc;
      FUN_01699970(*(long *)(unaff_x20 + 0x88),0);
    }
LAB_01692ef0:
    if (*(int *)(unaff_x19 + 0x24) == 1) {
      uVar8 = *(undefined8 *)(unaff_x19 + 0xe8);
      *(undefined8 *)(unaff_x20 + 0x60) = uVar8;
      if (*(long *)(unaff_x20 + 0x30) != 0) {
        *(undefined8 *)(*(long *)(unaff_x20 + 0x30) + 0x28) = uVar8;
      }
    }
    if (*(long *)(unaff_x20 + 0x88) != 0) {
      plVar9 = (long *)FUN_016999c0(*(long *)(unaff_x20 + 0x88),0);
      if ((plVar9 != (long *)0x0) && (*plVar9 != *(long *)puVar5)) {
                    /* WARNING: Subroutine does not return */
        FUN_00da544c(plVar9);
      }
      FUN_01693c98();
      return;
    }
    goto LAB_016932dc;
  }
  if (*(long *)(unaff_x19 + 0xe8) != 0) {
    uVar1 = *(uint *)(unaff_x19 + 0x7c);
    if (*(int *)(*(long *)
                  Method_System_Collections_Generic_List<ProbeVolumeSceneData_SerializablePVBakeSettings>_Add__
                + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    if ((uVar1 < 0x11) && ((1 << (ulong)(uVar1 & 0x1f) & 0x1cfceU) != 0)) goto LAB_01692ef0;
    iVar15 = *(int *)(unaff_x19 + 0x18);
  }
  puVar7 = StringLiteral_3033;
  puVar5 = Method_Unity_Burst_Intrinsics_Arm_Neon_vmaxnmv_f32__;
  if (1 < iVar15 - 1U) {
    if (iVar15 != 3) {
      uVar8 = thunk_FUN_00d48444(StringLiteral_3033);
      uVar8 = FUN_00da4fb8(uVar8,1);
      FUN_00ac2be8();
      uStack000000000000000c = *(undefined4 *)(unaff_x19 + 0x18);
      uVar12 = thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vcgez_f64__);
      uVar12 = thunk_FUN_00d61fa0(uVar12,&stack0x0000000c);
      FUN_00ac2be8(uVar8);
      FUN_00acb0b4(uVar8,uVar12);
      FUN_00adb25c(uVar8,0,uVar12);
      uVar12 = thunk_FUN_00d48444(OVRPlugin_OVRP_1_38_0_TypeInfo);
      uVar8 = FUN_017b63dc(uVar12,uVar8,0);
      thunk_FUN_00d48444(
                        UnityEngine_XR_Interaction_Toolkit_Inputs_XRTransformStabilizer_CalculateRotationParams_00000D70_PostfixBurstDelegate_var
                        );
      uVar12 = thunk_FUN_00d62348();
      FUN_00ac2be8();
      FUN_01679968(uVar12,uVar8,0);
      uVar8 = thunk_FUN_00d48444(PTR_DAT_033f2328);
                    /* WARNING: Subroutine does not return */
      FUN_00da5038(uVar12,uVar8);
    }
    lVar16 = *(long *)(unaff_x19 + 0x98);
    *(undefined1 *)(unaff_x19 + 0xc0) = 0;
    if ((lVar16 == 0) || (*(int *)(unaff_x19 + 0x80) < 1)) {
      bVar13 = false;
    }
    else {
      uVar1 = *(uint *)(lVar16 + 0x18);
      bVar13 = false;
      uVar10 = 0;
      do {
        if (uVar1 == uVar10) goto LAB_016932e0;
        if (*(int *)(lVar16 + 0x20 + uVar10 * 4) != 0) {
          bVar13 = true;
          *(undefined1 *)(unaff_x19 + 0xc0) = 1;
        }
        uVar10 = uVar10 + 1;
      } while ((long)uVar10 < (long)*(int *)(unaff_x19 + 0x80));
    }
    if (*(long *)(unaff_x19 + 0x70) != 0) {
      if (bVar13) {
        uVar8 = thunk_FUN_01798248();
      }
      else {
        uVar8 = thunk_FUN_01794c38(*(long *)(unaff_x19 + 0x70),*(undefined8 *)(unaff_x19 + 0x88),0);
      }
      *(undefined8 *)(unaff_x19 + 0xe8) = uVar8;
    }
    if (*(int *)(unaff_x19 + 0x80) < 1) {
      iVar15 = 1;
    }
    else {
      lVar16 = *(long *)(unaff_x19 + 0x88);
      if (lVar16 == 0) goto LAB_016932dc;
      uVar10 = 0;
      iVar15 = 1;
      do {
        if (*(uint *)(lVar16 + 0x18) <= uVar10) goto LAB_016932e0;
        lVar11 = uVar10 * 4;
        uVar10 = uVar10 + 1;
        iVar15 = *(int *)(lVar16 + 0x20 + lVar11) * iVar15;
      } while ((long)uVar10 < (long)*(int *)(unaff_x19 + 0x80));
    }
    uVar8 = FUN_00da4fb8(*(undefined8 *)puVar5);
    *(undefined8 *)(unaff_x19 + 0xa8) = uVar8;
    uVar8 = FUN_00da4fb8(*(undefined8 *)puVar5,*(undefined4 *)(unaff_x19 + 0x80));
    *(undefined8 *)(unaff_x19 + 0xb8) = uVar8;
    *(int *)(unaff_x19 + 0xb4) = iVar15;
    return;
  }
  lVar16 = *(long *)(unaff_x19 + 0x98);
  if (lVar16 == 0) {
LAB_01692f5c:
    lVar16 = *(long *)puVar6;
    lVar11 = *(long *)(unaff_x19 + 0x70);
    if (*(int *)(lVar16 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      lVar16 = *(long *)puVar6;
    }
    lVar14 = *(long *)(lVar16 + 0xb8);
    if (lVar11 == *(long *)(lVar14 + 0x38)) {
      lVar16 = *(long *)(unaff_x19 + 0x88);
      if (lVar16 == 0) goto LAB_016932dc;
      if (*(int *)(lVar16 + 0x18) == 0) goto LAB_016932e0;
      uVar2 = *(undefined4 *)(lVar16 + 0x20);
      uVar8 = *(undefined8 *)PTR_DAT_033ea8a0;
    }
    else {
      lVar11 = *(long *)(unaff_x19 + 0x70);
      if (*(int *)(lVar16 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar14 = *(long *)(*(long *)puVar6 + 0xb8);
      }
      if (lVar11 != *(long *)(lVar14 + 0xc0)) {
        lVar16 = *(long *)(unaff_x19 + 0x70);
        if (lVar16 == 0) {
          bVar13 = false;
        }
        else {
          lVar11 = FUN_00da4fb8(*(undefined8 *)puVar5,1);
          lVar14 = *(long *)(unaff_x19 + 0x88);
          if (lVar14 == 0) goto LAB_016932dc;
          if (*(int *)(lVar14 + 0x18) == 0) {
LAB_016932e0:
                    /* WARNING: Subroutine does not return */
            FUN_00da5194();
          }
          if (lVar11 == 0) goto LAB_016932dc;
          if (*(int *)(lVar11 + 0x18) == 0) goto LAB_016932e0;
          *(undefined4 *)(lVar11 + 0x20) = *(undefined4 *)(lVar14 + 0x20);
          uVar8 = thunk_FUN_01794c38(lVar16,lVar11,0);
          bVar13 = false;
          *(undefined8 *)(unaff_x19 + 0xe8) = uVar8;
        }
        goto LAB_01693144;
      }
      lVar16 = *(long *)(unaff_x19 + 0x88);
      if (lVar16 == 0) goto LAB_016932dc;
      if (*(int *)(lVar16 + 0x18) == 0) goto LAB_016932e0;
      uVar2 = *(undefined4 *)(lVar16 + 0x20);
      uVar8 = *(undefined8 *)puVar7;
    }
    uVar8 = FUN_00da4fb8(uVar8,uVar2);
    bVar13 = false;
    bVar4 = false;
    *(undefined8 *)(unaff_x19 + 0xe8) = uVar8;
    *(undefined8 *)(unaff_x19 + 0xf0) = uVar8;
  }
  else {
    if (*(int *)(lVar16 + 0x18) == 0) goto LAB_016932e0;
    if (*(int *)(lVar16 + 0x20) == 0) goto LAB_01692f5c;
    if (*(long *)(unaff_x19 + 0x70) != 0) {
      uVar8 = thunk_FUN_01798248(*(long *)(unaff_x19 + 0x70),*(undefined8 *)(unaff_x19 + 0x88),
                                 lVar16,0);
      *(undefined8 *)(unaff_x19 + 0xe8) = uVar8;
    }
    bVar13 = true;
LAB_01693144:
    bVar4 = true;
  }
  *(bool *)(unaff_x19 + 0xc0) = bVar13;
  if (*(int *)(unaff_x19 + 0x18) == 1) {
    if (!bVar13) {
      uVar1 = *(uint *)(unaff_x19 + 0x7c);
      if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      if ((uVar1 < 0x11) && ((1 << (ulong)(uVar1 & 0x1f) & 0x1cfceU) != 0)) {
        uVar2 = *(undefined4 *)(unaff_x19 + 0x7c);
        plVar9 = *(long **)(unaff_x19 + 0xe8);
        lVar16 = thunk_FUN_00d62348(*(undefined8 *)
                                     Method_UnityEngine_InputSystem_InputControlExtensions_AccumulateValueInEvent__
                                   );
        if (lVar16 == 0) {
LAB_016932dc:
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        if (plVar9 != (long *)0x0) {
          bVar3 = *(byte *)(*(long *)DG_Tweening_ShortcutExtensions_<>c__DisplayClass17_0_TypeInfo +
                           300);
          if ((*(byte *)(*plVar9 + 300) < bVar3) ||
             (*(long *)(*(long *)(*plVar9 + 200) + (ulong)bVar3 * 8 + -8) !=
              *(long *)DG_Tweening_ShortcutExtensions_<>c__DisplayClass17_0_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
            FUN_00da544c(plVar9);
          }
        }
        FUN_0169ae50(lVar16,uVar2,plVar9,0);
        *(long *)(unaff_x19 + 0xf8) = lVar16;
        goto LAB_01693258;
      }
    }
    if ((((bVar4) && (*(long *)(unaff_x19 + 0x70) != 0)) &&
        (uVar10 = FUN_0178be4c(*(long *)(unaff_x19 + 0x70),0), (uVar10 & 1) == 0)) &&
       (*(char *)(unaff_x19 + 0xc0) == '\0')) {
      lVar16 = *(long *)(unaff_x19 + 0xe8);
      if (lVar16 == 0) {
        *(undefined8 *)(unaff_x19 + 0xf0) = 0;
      }
      else {
        uVar8 = *(undefined8 *)puVar7;
        lVar11 = thunk_FUN_00d6225c(lVar16,uVar8);
        if (lVar11 == 0) goto LAB_016933ac;
        *(long *)(unaff_x19 + 0xf0) = lVar11;
        uVar8 = *(undefined8 *)puVar7;
        lVar11 = thunk_FUN_00d6225c(lVar16,uVar8);
        if (lVar11 == 0) goto LAB_016933ac;
      }
    }
  }
LAB_01693258:
  puVar6 = Method_System_Linq_Enumerable_SelectMany<ConnectFaceRebuildData,_Edge>__;
  if (*(int *)(unaff_x19 + 0x24) == 3) {
    lVar16 = *(long *)(unaff_x19 + 0xe8);
    if (lVar16 == 0) {
      *(undefined8 *)(unaff_x20 + 0x68) = 0;
    }
    else {
      uVar8 = *(undefined8 *)
               Method_System_Linq_Enumerable_SelectMany<ConnectFaceRebuildData,_Edge>__;
      lVar11 = thunk_FUN_00d6225c(lVar16,uVar8);
      if (lVar11 == 0) {
LAB_016933ac:
                    /* WARNING: Subroutine does not return */
        FUN_00da544c(lVar16,uVar8);
      }
      *(long *)(unaff_x20 + 0x68) = lVar11;
      uVar8 = *(undefined8 *)puVar6;
      lVar11 = thunk_FUN_00d6225c(lVar16,uVar8);
      if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da544c(lVar16,uVar8);
      }
    }
  }
  uVar8 = FUN_00da4fb8(*(undefined8 *)puVar5,1);
  *(undefined8 *)(unaff_x19 + 0xa8) = uVar8;
  return;
}


