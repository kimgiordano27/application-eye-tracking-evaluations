/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$SerializeMultidimensionalArray
ENTRY_POINT: 0178653c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 76
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;data_collection;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_structure_only;strong_file_logging_hits_2;telemetry_or_network_hits_4;source_validity_pose_sink_structure;negative_known_unity_or_il2cpp_false_positive_family;functionality_data_collection_or_telemetry_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__SerializeMultidimensionalArray
               (void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  undefined8 *puVar9;
  int iVar10;
  short unaff_w20;
  int iVar11;
  undefined8 unaff_x21;
  long lVar12;
  long lVar13;
  undefined8 unaff_x22;
  long *unaff_x24;
  long *unaff_x25;
  short *psVar14;
  short *unaff_x26;
  long unaff_x27;
  uint unaff_w28;
  short *unaff_x29;
  short *in_stack_00000000;
  long in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 *in_stack_00000028;
  undefined8 *in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  short sStack0000000000000068;
  undefined6 uStack000000000000006a;
  undefined8 in_stack_00000070;
  long in_stack_00000078;
  
  while( true ) {
    lVar7 = *(long *)(unaff_x27 + 0x20);
    if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
      lVar7 = FUN_00d5941c();
    }
    lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 8);
    if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
      lVar7 = FUN_00d5941c();
    }
    in_stack_00000018 = *(undefined8 *)(*(long *)(lVar7 + 0xb8) + 0x10);
    in_stack_00000010 = *(undefined8 *)(*(long *)(lVar7 + 0xb8) + 8);
    uVar8 = System_Linq_Lookup<__Il2CppFullySharedGenericType,___Il2CppFullySharedGenericType>__InternalGetHashCode
                      (&stack0x00000010,unaff_x21,unaff_x22,
                       *(undefined8 *)Method_System_Threading_ManualResetEventSlim_set_Waiters__);
    if ((uVar8 & 1) == 0) break;
    if (*(int *)(*unaff_x24 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    lVar12 = *unaff_x25;
    lVar7 = *(long *)(lVar12 + 0x20);
    if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
      lVar7 = FUN_00d5941c();
    }
    lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 8);
    if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
      lVar7 = FUN_00d5941c();
    }
    if (*(int *)(lVar7 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    lVar7 = *(long *)(lVar12 + 0x20);
    if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
      lVar7 = FUN_00d5941c();
    }
    lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 8);
    if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
      lVar7 = FUN_00d5941c();
    }
    lVar13 = *unaff_x25;
    lVar12 = *(long *)(lVar13 + 0x20);
    iVar11 = **(int **)(lVar7 + 0xb8);
    if ((*(byte *)(lVar12 + 0x132) & 1) == 0) {
      lVar12 = FUN_00d5941c(lVar12);
    }
    lVar7 = *(long *)(*(long *)(lVar12 + 0xc0) + 8);
    if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
      lVar7 = FUN_00d5941c();
    }
    if (*(int *)(lVar7 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    lVar7 = *(long *)(lVar13 + 0x20);
    unaff_x26 = unaff_x26 + -(long)iVar11;
    if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
      lVar7 = FUN_00d5941c();
    }
    lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 8);
    if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
      lVar7 = FUN_00d5941c();
    }
    unaff_w28 = unaff_w28 - **(int **)(lVar7 + 0xb8);
    while (puVar4 = Method_System_Linq_Expressions_Expression_ValidateVariables__,
          (int)unaff_w28 < 1) {
      uVar8 = (long)unaff_x26 - (long)in_stack_00000000;
      if (unaff_x26 < in_stack_00000000 || uVar8 == 0) {
LAB_01786878:
        uVar8 = 0xffffffff;
        goto LAB_017868c4;
      }
      if ((long)uVar8 < 0) {
        uVar8 = uVar8 + 1;
      }
      uVar8 = uVar8 >> 1;
      psVar14 = unaff_x26;
      while (iVar11 = (int)uVar8, 3 < iVar11) {
        unaff_x26 = psVar14 + -4;
        if (psVar14[-1] == unaff_w20) {
          uVar8 = (long)unaff_x26 - (long)in_stack_00000000;
          if ((long)uVar8 < 0) {
            uVar8 = uVar8 + 1;
          }
          uVar8 = (ulong)((int)(uVar8 >> 1) + 3);
          goto LAB_017868c4;
        }
        if (psVar14[-2] == unaff_w20) {
          uVar8 = (long)unaff_x26 - (long)in_stack_00000000;
          if ((long)uVar8 < 0) {
            uVar8 = uVar8 + 1;
          }
          uVar8 = (ulong)((int)(uVar8 >> 1) + 2);
          goto LAB_017868c4;
        }
        if (psVar14[-3] == unaff_w20) {
          uVar8 = (long)unaff_x26 - (long)in_stack_00000000;
          if ((long)uVar8 < 0) {
            uVar8 = uVar8 + 1;
          }
          uVar8 = (ulong)((int)(uVar8 >> 1) + 1);
          goto LAB_017868c4;
        }
        uVar8 = (ulong)(iVar11 - 4);
        psVar14 = unaff_x26;
        if (*unaff_x26 == unaff_w20) goto LAB_01786698;
      }
      iVar11 = iVar11 + 1;
      unaff_x26 = psVar14;
      while (iVar11 = iVar11 + -1, 0 < iVar11) {
        unaff_x26 = unaff_x26 + -1;
        if (*unaff_x26 == unaff_w20) goto LAB_01786698;
      }
      uVar8 = System_MonoCustomAttrs__GetPseudoCustomAttributesData(0);
      if (((uVar8 & 1) == 0) ||
         (uVar8 = (long)unaff_x26 - (long)in_stack_00000000,
         unaff_x26 < in_stack_00000000 || uVar8 == 0)) goto LAB_01786878;
      if (*(int *)(*unaff_x24 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      lVar12 = *unaff_x25;
      lVar7 = *(long *)(lVar12 + 0x20);
      if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
        lVar7 = FUN_00d5941c();
      }
      lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 8);
      if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
        lVar7 = FUN_00d5941c();
      }
      if (*(int *)(lVar7 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      lVar7 = *(long *)(lVar12 + 0x20);
      if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
        lVar7 = FUN_00d5941c();
      }
      lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 8);
      if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
        lVar7 = FUN_00d5941c();
      }
      if ((long)uVar8 < 0) {
        uVar8 = uVar8 + 1;
      }
      iVar11 = **(int **)(lVar7 + 0xb8);
      sStack0000000000000068 = unaff_w20;
      FUN_01221df4(&stack0x00000038,&stack0x00000068,*(undefined8 *)puVar4);
      unaff_w28 = -iVar11 & (uint)(uVar8 >> 1);
    }
    if (*(int *)(*unaff_x24 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    lVar12 = *unaff_x25;
    lVar7 = *(long *)(lVar12 + 0x20);
    if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
      lVar7 = FUN_00d5941c();
    }
    lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 8);
    if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
      lVar7 = FUN_00d5941c();
    }
    if (*(int *)(lVar7 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    lVar7 = *(long *)(lVar12 + 0x20);
    if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
      lVar7 = FUN_00d5941c();
    }
    lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 8);
    if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
      lVar7 = FUN_00d5941c();
    }
    uVar6 = in_stack_00000040;
    uVar5 = in_stack_00000038;
    lVar13 = *(long *)StringLiteral_9614;
    lVar12 = *(long *)(lVar13 + 0x38);
    unaff_x29 = unaff_x26 + -(long)**(int **)(lVar7 + 0xb8);
    uVar1 = *(undefined8 *)unaff_x29;
    uVar2 = *(undefined8 *)(unaff_x29 + 4);
    if (lVar12 == 0) {
      FUN_00d59478(lVar13);
      lVar12 = *(long *)(lVar13 + 0x38);
    }
    lVar7 = *(long *)(lVar12 + 0x10);
    if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
      lVar7 = FUN_00d5941c();
    }
    if (*(int *)(lVar7 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    puVar9 = *(undefined8 **)(*(long *)(lVar13 + 0x38) + 8);
    in_stack_00000030 = &stack0x00000048;
    in_stack_00000028 = &stack0x00000058;
    in_stack_00000058 = uVar5;
    in_stack_00000060 = uVar6;
    in_stack_00000048 = uVar1;
    in_stack_00000050 = uVar2;
    (*(code *)puVar9[2])(*puVar9,puVar9,0,&stack0x00000028,&stack0x00000068);
    unaff_x22 = in_stack_00000070;
    unaff_x21 = CONCAT62(uStack000000000000006a,sStack0000000000000068);
    unaff_x27 = *(long *)UnityEngine_UIElements_UIR_LinkedPool<MeshHandle>_TypeInfo;
    lVar7 = *(long *)(unaff_x27 + 0x20);
    if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
      lVar7 = FUN_00d5941c();
    }
    lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 8);
    if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
      lVar7 = FUN_00d5941c();
    }
    if (*(int *)(lVar7 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
  }
  if (DAT_03778f16 == '\0') {
    thunk_FUN_00d48444(StringLiteral_1052);
    thunk_FUN_00d48444(Oculus_Platform_Models_LaunchReportFlowResult_TypeInfo);
    thunk_FUN_00d48444(
                      Method_RCG_Lovesick_Powers_Wavelength_WavelengthMover_<MoveCoroutine>d__24_System_Collections_IEnumerator_Reset__
                      );
    thunk_FUN_00d48444(OVRPassthroughLayer_MonoToRgbaStyleHandler_TypeInfo);
    DAT_03778f16 = '\x01';
  }
  in_stack_00000048 = 0;
  in_stack_00000050 = 0;
  lVar12 = *(long *)OVRPassthroughLayer_MonoToRgbaStyleHandler_TypeInfo;
  lVar7 = *(long *)(lVar12 + 0x38);
  if (lVar7 == 0) {
    FUN_00d59478(lVar12);
    lVar7 = *(long *)(lVar12 + 0x38);
  }
  lVar7 = *(long *)(lVar7 + 0x10);
  if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
    lVar7 = FUN_00d5941c();
  }
  if (*(int *)(lVar7 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  puVar9 = *(undefined8 **)(*(long *)(lVar12 + 0x38) + 8);
  in_stack_00000028 = &stack0x00000058;
  in_stack_00000058 = unaff_x21;
  in_stack_00000060 = unaff_x22;
  (*(code *)puVar9[2])(*puVar9,puVar9,0,&stack0x00000028,&stack0x00000068);
  puVar4 = 
  Method_RCG_Lovesick_Powers_Wavelength_WavelengthMover_<MoveCoroutine>d__24_System_Collections_IEnumerator_Reset__
  ;
  in_stack_00000048 = CONCAT62(uStack000000000000006a,sStack0000000000000068);
  in_stack_00000050 = in_stack_00000070;
  if (*(int *)(*(long *)
                Method_RCG_Lovesick_Powers_Wavelength_WavelengthMover_<MoveCoroutine>d__24_System_Collections_IEnumerator_Reset__
              + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  lVar12 = *(long *)StringLiteral_1052;
  lVar7 = *(long *)(lVar12 + 0x20);
  if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
    lVar7 = FUN_00d5941c();
  }
  lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 8);
  if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
    lVar7 = FUN_00d5941c();
  }
  if (*(int *)(lVar7 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  lVar7 = *(long *)(lVar12 + 0x20);
  if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
    lVar7 = FUN_00d5941c();
  }
  lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 8);
  if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
    lVar7 = FUN_00d5941c();
  }
  puVar3 = Oculus_Platform_Models_LaunchReportFlowResult_TypeInfo;
  iVar11 = **(int **)(lVar7 + 0xb8);
  iVar10 = iVar11 * 4;
  do {
    iVar10 = iVar10 + -4;
    iVar11 = iVar11 + -1;
    if (iVar11 < 0) goto LAB_01786858;
    if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    FUN_01225ba8(&stack0x00000048,iVar11,&stack0x00000068,*(undefined8 *)puVar3);
    lVar7 = CONCAT62(uStack000000000000006a,sStack0000000000000068);
  } while (lVar7 == 0);
  if (lVar7 < 1) {
LAB_01786858:
    iVar11 = 3;
  }
  else {
    iVar11 = 3;
    do {
      lVar7 = lVar7 * 0x10000;
      iVar11 = iVar11 + -1;
    } while (0 < lVar7);
  }
  uVar8 = (long)unaff_x29 - (long)in_stack_00000000;
  if ((long)uVar8 < 0) {
    uVar8 = uVar8 + 1;
  }
  uVar8 = (ulong)(uint)(iVar11 + (int)(uVar8 >> 1) + iVar10);
LAB_017868c4:
  if (*(long *)(in_stack_00000008 + 0x28) != in_stack_00000078) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar8);
  }
  return;
LAB_01786698:
  uVar8 = (long)unaff_x26 - (long)in_stack_00000000;
  if ((long)uVar8 < 0) {
    uVar8 = uVar8 + 1;
  }
  uVar8 = uVar8 >> 1;
  goto LAB_017868c4;
}


