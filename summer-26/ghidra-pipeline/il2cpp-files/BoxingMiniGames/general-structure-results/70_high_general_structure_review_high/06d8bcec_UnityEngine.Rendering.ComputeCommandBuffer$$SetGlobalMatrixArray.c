/*
FUNCTION_NAME: UnityEngine.Rendering.ComputeCommandBuffer$$SetGlobalMatrixArray
ENTRY_POINT: 06d8bcec
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: validity_gate;pose_vector;data_collection;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_4;strong_file_logging_hits_3;telemetry_or_network_hits_1;frame_or_lifecycle_behavior;negative_framework_namespace_without_eye_use_flow;functionality_data_collection_or_telemetry_hits_4
*/


undefined8 UnityEngine_Rendering_ComputeCommandBuffer__SetGlobalMatrixArray(void)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  undefined4 uVar10;
  uint uVar11;
  undefined4 uVar12;
  int iVar13;
  undefined4 uVar14;
  int iVar15;
  int iVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined8 uVar21;
  ulong uVar22;
  undefined8 uVar23;
  long lVar24;
  long lVar25;
  byte *unaff_x20;
  int unaff_w21;
  int iVar26;
  long unaff_x22;
  int iVar27;
  undefined8 *unaff_x23;
  long unaff_x24;
  byte *unaff_x25;
  long unaff_x27;
  byte *unaff_x28;
  ulong unaff_x29;
  undefined1 auVar28 [12];
  byte *in_stack_00000010;
  long in_stack_00000018;
  long in_stack_00000020;
  long in_stack_00000028;
  long in_stack_00000070;
  undefined4 uStack0000000000000090;
  undefined8 uStack0000000000000094;
  undefined4 uStack000000000000009c;
  ulong in_stack_000000b0;
  undefined4 in_stack_000000b8;
  ulong in_stack_000000c0;
  ulong in_stack_000000c8;
  ulong in_stack_000000d0;
  ulong in_stack_000000d8;
  ulong in_stack_000000e0;
  ulong in_stack_000000e8;
  ulong in_stack_000000f0;
  ulong in_stack_000000f8;
  ulong in_stack_00000100;
  char cStack0000000000000108;
  ulong in_stack_00000118;
  ulong in_stack_00000120;
  ulong in_stack_00000168;
  undefined4 uStack0000000000000170;
  int iStack0000000000000174;
  int iStack0000000000000178;
  int iStack000000000000017c;
  undefined4 uStack0000000000000180;
  undefined4 uStack0000000000000184;
  undefined4 uStack0000000000000188;
  undefined4 uStack000000000000018c;
  undefined4 uStack0000000000000190;
  int iStack0000000000000194;
  int iStack0000000000000198;
  undefined4 uStack000000000000019c;
  undefined8 in_stack_000001a0;
  undefined8 in_stack_000001a8;
  
  while( true ) {
    unaff_x28 = unaff_x28 + 5;
    if ((int)unaff_x29 != 3) {
      unaff_x28 = unaff_x20 + unaff_x29;
    }
    if (unaff_x25 <= unaff_x28) break;
    bVar2 = *unaff_x28;
    if (bVar2 == 0xfe) {
      thunk_FUN_036aa1c8(PTR_DAT_079f5660);
      uVar21 = thunk_FUN_0367fe20();
      uVar23 = thunk_FUN_036aa1c8(Oculus_Platform_Models_HttpTransferUpdate_TypeInfo);
      FUN_05e1a2c8(uVar21,uVar23,0);
      uVar23 = thunk_FUN_036aa1c8(System_Net_HttpValidationHelpers_TypeInfo);
                    /* WARNING: Subroutine does not return */
      FUN_03642acc(uVar21,uVar23);
    }
    bVar1 = bVar2 & 0xfc;
    unaff_x29 = (ulong)bVar2 & 3;
    unaff_x20 = unaff_x28 + 1;
    if (bVar1 < 0x55) {
      if (bVar1 < 0x19) {
        if (bVar1 < 9) {
          if (bVar1 == 4) {
            uVar7 = FUN_06d8c478(unaff_x29,unaff_x20,unaff_x25);
            in_stack_00000168 = 0;
            FUN_0493bdd8(&stack0x00000168,uVar7,*unaff_x23);
            in_stack_000000c0 = in_stack_00000168;
          }
          else if (bVar1 == 8) {
            uVar7 = FUN_06d8c478(unaff_x29,unaff_x20,unaff_x25);
            FUN_06d8c4e0(&stack0x00000110,uVar7);
          }
        }
        else if (bVar1 == 0x14) {
          uVar7 = FUN_06d8c478(unaff_x29,unaff_x20,unaff_x25);
          in_stack_00000168 = 0;
          FUN_0493bdd8(&stack0x00000168,uVar7,*unaff_x23);
          in_stack_000000c8 = in_stack_00000168;
        }
        else if (bVar1 == 0x18) {
          uVar7 = FUN_06d8c478(unaff_x29,unaff_x20,unaff_x25);
          in_stack_00000168 = 0;
          FUN_0493bdd8(&stack0x00000168,uVar7,*unaff_x23);
          in_stack_00000118 = in_stack_00000168;
        }
      }
      else if (bVar1 < 0x29) {
        if (bVar1 == 0x24) {
          uVar7 = FUN_06d8c478(unaff_x29,unaff_x20,unaff_x25);
          in_stack_00000168 = 0;
          FUN_0493bdd8(&stack0x00000168,uVar7,*unaff_x23);
          in_stack_000000d0 = in_stack_00000168;
        }
        else if (bVar1 == 0x28) {
          uVar7 = FUN_06d8c478(unaff_x29,unaff_x20,unaff_x25);
          in_stack_00000168 = 0;
          FUN_0493bdd8(&stack0x00000168,uVar7,*unaff_x23);
          in_stack_00000120 = in_stack_00000168;
        }
      }
      else if (bVar1 == 0x34) {
        uVar7 = FUN_06d8c478(unaff_x29,unaff_x20,unaff_x25);
        in_stack_00000168 = 0;
        FUN_0493bdd8(&stack0x00000168,uVar7,*unaff_x23);
        in_stack_000000d8 = in_stack_00000168;
      }
      else if (bVar1 == 0x44) {
        uVar7 = FUN_06d8c478(unaff_x29,unaff_x20,unaff_x25);
        in_stack_00000168 = 0;
        FUN_0493bdd8(&stack0x00000168,uVar7,*unaff_x23);
        in_stack_000000e0 = in_stack_00000168;
      }
      else if (bVar1 == 0x54) {
        uVar7 = FUN_06d8c478(unaff_x29,unaff_x20,unaff_x25);
        in_stack_00000168 = 0;
        FUN_0493bdd8(&stack0x00000168,uVar7,*unaff_x23);
        in_stack_000000e8 = in_stack_00000168;
      }
    }
    else if (bVar1 < 0x85) {
      if (bVar1 < 0x75) {
        if (bVar1 == 100) {
          uVar7 = FUN_06d8c478(unaff_x29,unaff_x20,unaff_x25);
          in_stack_00000168 = 0;
          FUN_0493bdd8(&stack0x00000168,uVar7,*unaff_x23);
          in_stack_000000f0 = in_stack_00000168;
        }
        else if (bVar1 == 0x74) {
          uVar7 = FUN_06d8c478(unaff_x29,unaff_x20,unaff_x25);
          in_stack_00000168 = 0;
          FUN_0493bdd8(&stack0x00000168,uVar7,*unaff_x23);
          in_stack_000000f8 = in_stack_00000168;
        }
      }
      else if (bVar1 == 0x80) {
        uVar7 = 1;
LAB_06d8bf2c:
        uVar8 = FUN_06d8c86c(_cStack0000000000000108,uVar7,unaff_x24);
        if (unaff_x24 == 0) goto LAB_06d8c3dc;
        auVar28 = FUN_046cd514(unaff_x24,uVar8,*(undefined8 *)System_Xml_HtmlTernaryTree_TypeInfo);
        iVar27 = (uint)(cStack0000000000000108 != '\0') << 3;
        if (auVar28._8_4_ != 0) {
          iVar27 = auVar28._8_4_;
        }
        iVar9 = FUN_0493be1c(&stack0x00000100,1,*(undefined8 *)System_Net_HttpStatusCode_TypeInfo);
        uVar10 = FUN_06d8c478(unaff_x29,unaff_x20,unaff_x25);
        if (0 < iVar9) {
          iVar26 = 0;
          do {
            uVar11 = FUN_06d8c6ec(&stack0x00000110,iVar26);
            uVar12 = FUN_06d8c660(&stack0x000000c0,iVar26,&stack0x00000110);
            puVar4 = System_Net_HttpStatusCode_TypeInfo;
            iVar13 = FUN_0493be1c(&stack0x000000f8,8,
                                  *(undefined8 *)System_Net_HttpStatusCode_TypeInfo);
            uVar14 = FUN_0493be1c(&stack0x00000108,1,*(undefined8 *)puVar4);
            iVar15 = FUN_0493be1c((ulong)&stack0x000000c0 | 8,0,*(undefined8 *)puVar4);
            iVar16 = FUN_0493be1c(&stack0x000000d0,0,*(undefined8 *)puVar4);
            uVar17 = UnityEngine_Rendering_ComputeCommandBuffer__SetRayTracingIntParams
                               (&stack0x000000c0);
            uVar18 = FUN_06d8cab8(&stack0x000000c0);
            uVar19 = FUN_0493be1c(&stack0x000000e8,0,*(undefined8 *)puVar4);
            uVar20 = FUN_0493be1c(&stack0x000000f0,0,*(undefined8 *)puVar4);
            if (in_stack_00000070 == 0) goto LAB_06d8c3dc;
            lVar24 = *(long *)(in_stack_00000070 + 0x10);
            lVar25 = *(long *)Oculus_Interaction_Input_HandJointUtils_TypeInfo;
            *(int *)(in_stack_00000070 + 0x1c) = *(int *)(in_stack_00000070 + 0x1c) + 1;
            if (lVar24 == 0) goto LAB_06d8c3dc;
            uVar3 = *(uint *)(in_stack_00000070 + 0x18);
            if (uVar3 < *(uint *)(lVar24 + 0x18)) {
              lVar24 = lVar24 + (long)(int)uVar3 * 0x48;
              *(uint *)(in_stack_00000070 + 0x18) = uVar3 + 1;
              *(int *)(lVar24 + 0x30) = iVar15;
              *(int *)(lVar24 + 0x34) = iVar16;
              *(uint *)(lVar24 + 0x20) = uVar11 & 0xffff;
              *(undefined4 *)(lVar24 + 0x24) = uVar12;
              *(undefined4 *)(lVar24 + 0x28) = uVar20;
              *(undefined4 *)(lVar24 + 0x2c) = uVar19;
              *(undefined4 *)(lVar24 + 0x38) = uVar17;
              *(undefined4 *)(lVar24 + 0x3c) = uVar18;
              *(undefined4 *)(lVar24 + 0x40) = uVar7;
              *(undefined4 *)(lVar24 + 0x44) = 0;
              *(undefined4 *)(lVar24 + 0x48) = uVar14;
              *(int *)(lVar24 + 0x4c) = iVar13;
              *(int *)(lVar24 + 0x50) = iVar27;
              *(undefined4 *)(lVar24 + 0x54) = uVar10;
              *(undefined8 *)(lVar24 + 0x58) = 0;
              *(undefined8 *)(lVar24 + 0x60) = 0;
            }
            else {
              in_stack_00000168 = CONCAT44(uVar12,uVar11) & 0xffffffff0000ffff;
              _uStack0000000000000170 = (undefined1 *)CONCAT44(uVar19,uVar20);
              uStack000000000000018c = 0;
              in_stack_000001a0 = 0;
              in_stack_000001a8 = 0;
              iStack0000000000000178 = iVar15;
              iStack000000000000017c = iVar16;
              uStack0000000000000180 = uVar17;
              uStack0000000000000184 = uVar18;
              uStack0000000000000188 = uVar7;
              uStack0000000000000190 = uVar14;
              iStack0000000000000194 = iVar13;
              iStack0000000000000198 = iVar27;
              uStack000000000000019c = uVar10;
              FUN_046caac8(in_stack_00000070,&stack0x00000168,
                           *(undefined8 *)(*(long *)(*(long *)(lVar25 + 0x20) + 0xc0) + 0x70));
            }
            iVar26 = iVar26 + 1;
            iVar27 = iVar13 + iVar27;
          } while (iVar9 != iVar26);
        }
        FUN_046cd570(in_stack_00000018,uVar8,auVar28._0_8_,iVar27,
                     *(undefined8 *)System_Net_HttpRequestCreator_TypeInfo);
        FUN_06d8c7fc(&stack0x00000110);
        unaff_x22 = in_stack_00000020;
        unaff_x23 = (undefined8 *)PTR_DAT_079f5e18;
        unaff_x24 = in_stack_00000018;
        unaff_x25 = in_stack_00000010;
        unaff_x27 = in_stack_00000028;
      }
      else if (bVar1 == 0x84) {
        uVar7 = FUN_06d8c478(unaff_x29,unaff_x20,unaff_x25);
        in_stack_00000168 = 0;
        FUN_0493bdd8(&stack0x00000168,uVar7,*unaff_x23);
        _cStack0000000000000108 = in_stack_00000168;
      }
    }
    else if (bVar1 < 0x95) {
      if (bVar1 == 0x90) {
        uVar7 = 2;
        goto LAB_06d8bf2c;
      }
      if (bVar1 == 0x94) {
        uVar7 = FUN_06d8c478(unaff_x29,unaff_x20,unaff_x25);
        in_stack_00000168 = 0;
        FUN_0493bdd8(&stack0x00000168,uVar7,*unaff_x23);
        in_stack_00000100 = in_stack_00000168;
      }
    }
    else if (bVar1 == 0xa0) {
      if (unaff_x22 == 0) goto LAB_06d8c3dc;
      iVar27 = *(int *)(unaff_x22 + 0x18);
      uVar7 = FUN_06d8c478(unaff_x29,unaff_x20,unaff_x25);
      uVar8 = FUN_06d8c660(&stack0x000000c0,0,&stack0x00000110);
      uVar10 = FUN_06d8c6ec(&stack0x00000110,0);
      if (in_stack_00000070 == 0) goto LAB_06d8c3dc;
      lVar24 = *(long *)(unaff_x22 + 0x10);
      iVar9 = *(int *)(in_stack_00000070 + 0x18);
      lVar25 = *(long *)Sirenix_OdinInspector_HorizontalGroupAttribute_TypeInfo;
      *(int *)(unaff_x22 + 0x1c) = *(int *)(unaff_x22 + 0x1c) + 1;
      if (lVar24 == 0) goto LAB_06d8c3dc;
      uVar11 = *(uint *)(unaff_x22 + 0x18);
      if (uVar11 < *(uint *)(lVar24 + 0x18)) {
        lVar24 = lVar24 + (long)(int)uVar11 * 0x18;
        *(uint *)(unaff_x22 + 0x18) = uVar11 + 1;
        *(undefined4 *)(lVar24 + 0x20) = uVar7;
        *(undefined4 *)(lVar24 + 0x24) = uVar10;
        *(undefined4 *)(lVar24 + 0x28) = uVar8;
        *(int *)(lVar24 + 0x2c) = unaff_w21;
        *(undefined4 *)(lVar24 + 0x30) = 0;
        *(int *)(lVar24 + 0x34) = iVar9;
      }
      else {
        in_stack_00000168 = CONCAT44(uVar10,uVar7);
        _uStack0000000000000170 = (undefined1 *)CONCAT44(unaff_w21,uVar8);
        iStack0000000000000178 = 0;
        iStack000000000000017c = iVar9;
        FUN_046c7dc0(unaff_x22,&stack0x00000168,
                     *(undefined8 *)(*(long *)(*(long *)(lVar25 + 0x20) + 0xc0) + 0x70));
      }
      FUN_06d8c7fc(&stack0x00000110);
      unaff_x27 = in_stack_00000028;
      unaff_w21 = iVar27;
    }
    else {
      if (bVar1 == 0xb0) {
        uVar7 = 3;
        goto LAB_06d8bf2c;
      }
      if (bVar1 == 0xc0) {
        if (unaff_w21 == -1) {
          return 0;
        }
        if (unaff_x22 == 0) goto LAB_06d8c3dc;
        FUN_046c7a50(&stack0x00000168,unaff_x22,unaff_w21,
                     *(undefined8 *)System_Xml_HtmlUtf8RawTextWriter_TypeInfo);
        in_stack_000000b0 = in_stack_00000168;
        in_stack_000000b8 = uStack0000000000000170;
        if (in_stack_00000070 == 0) goto LAB_06d8c3dc;
        iVar27 = iStack0000000000000174;
        iStack0000000000000178 = *(int *)(in_stack_00000070 + 0x18) - iStack000000000000017c;
        FUN_046c7ab8(unaff_x22,unaff_w21,&stack0x00000168,
                     *(undefined8 *)System_Xml_HtmlUtf8RawTextWriterIndent_TypeInfo);
        FUN_06d8c7fc(&stack0x00000110);
        unaff_w21 = iVar27;
      }
    }
  }
  if (in_stack_00000070 != 0) {
    uVar21 = FUN_046cc95c(in_stack_00000070,
                          *(undefined8 *)
                           Oculus_Interaction_Input_Compatibility_OVR_HandJointUtils_TypeInfo);
    *(undefined8 *)(unaff_x27 + 0x20) = uVar21;
    thunk_FUN_036b7ad0();
    puVar6 = System_Xml_HtmlEncodedRawTextWriter_TypeInfo;
    puVar5 = HomeSpace_MVVM_HomeSpaceScreen_TypeInfo;
    puVar4 = OVR_OpenVR_HmdVector2_t_TypeInfo;
    if (unaff_x22 != 0) {
      uVar21 = FUN_046c9bac(unaff_x22,*(undefined8 *)Oculus_Interaction_Input_HmdDataAsset_TypeInfo)
      ;
      *(undefined8 *)(unaff_x27 + 0x28) = uVar21;
      thunk_FUN_036b7ad0();
      FUN_046c8ab0(&stack0x00000080,unaff_x22,*(undefined8 *)puVar6);
      in_stack_00000168 = 0;
      _uStack0000000000000170 = &stack0x00000080;
      goto LAB_06d8c374;
    }
  }
LAB_06d8c3dc:
                    /* WARNING: Subroutine does not return */
  FUN_03642c18();
LAB_06d8c374:
  do {
    uVar22 = FUN_058d60b8(&stack0x00000080,*(undefined8 *)puVar5);
    if ((uVar22 & 1) == 0) goto LAB_06d8c3a4;
  } while ((uStack000000000000009c != -1) || (uStack0000000000000090 != 1));
  *(undefined8 *)(unaff_x27 + 8) = uStack0000000000000094;
LAB_06d8c3a4:
  FUN_058d60b4(&stack0x00000080,*(undefined8 *)puVar4);
  return 1;
}


