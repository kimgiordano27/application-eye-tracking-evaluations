/*
FUNCTION_NAME: Unity.Mathematics.Random$$NextFloat3Direction
ENTRY_POINT: 058cfd18
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 88
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_17;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2
*/


void Unity_Mathematics_Random__NextFloat3Direction(void)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  uint uVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  undefined8 *puVar12;
  undefined4 uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long unaff_x19;
  undefined8 *unaff_x20;
  long unaff_x21;
  undefined8 uVar17;
  int iVar18;
  uint uVar19;
  uint uVar20;
  undefined1 auVar21 [16];
  long lStack0000000000000018;
  undefined4 uStack0000000000000020;
  undefined4 uStack0000000000000024;
  long in_stack_00000028;
  undefined4 uStack0000000000000030;
  uint uStack0000000000000034;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  long in_stack_00000058;
  undefined8 in_stack_00000060;
  
  FUN_02d6084c(System_Linq_Expressions_Interpreter_NotEqualInstruction_NotEqualReference_TypeInfo);
  FUN_02d6084c(System_Linq_Expressions_Interpreter_NotEqualInstruction_NotEqualSByte_TypeInfo);
  FUN_02d6084c(
              System_Linq_Expressions_Interpreter_NotEqualInstruction_NotEqualSByteLiftedToNull_TypeInfo
              );
  FUN_02d6084c(System_Linq_Expressions_Interpreter_NotEqualInstruction_NotEqualSingle_TypeInfo);
  FUN_02d6084c(PTR_DAT_067683e8);
  FUN_02d6084c(PTR_DAT_06768438);
  FUN_02d6084c(PTR_DAT_0675eb70);
  FUN_02d6084c(PTR_DAT_06770978);
  FUN_02d6084c(PTR_DAT_06763510);
  FUN_02d6084c(
              System_Linq_Expressions_Interpreter_NotEqualInstruction_NotEqualSingleLiftedToNull_TypeInfo
              );
  FUN_02d6084c(PTR_DAT_0675eb68);
  FUN_02d6084c(System_Linq_Expressions_Interpreter_NotEqualInstruction_NotEqualUInt16_TypeInfo);
  FUN_02d6084c(
              System_Linq_Expressions_Interpreter_NotEqualInstruction_NotEqualInt64LiftedToNull_TypeInfo
              );
  FUN_02d6084c(PTR_DAT_0675eb60);
  FUN_02d6084c(PTR_DAT_067769b0);
  FUN_02d6084c(System_Linq_Expressions_Interpreter_NotEqualInstruction_NotEqualInt16_TypeInfo);
  FUN_02d6084c(
              System_Linq_Expressions_Interpreter_NotEqualInstruction_NotEqualUInt16LiftedToNull_TypeInfo
              );
  FUN_02d6084c(OVR_OpenVR_IVRCompositor__GetMirrorTextureD3D11_TypeInfo);
  FUN_02d6084c(System_Linq_Expressions_Interpreter_NotEqualInstruction_NotEqualUInt32_TypeInfo);
  FUN_02d6084c(Unity_VisualScripting_InvokeMember_<>c_TypeInfo);
  FUN_02d6084c(
              System_Linq_Expressions_Interpreter_NotEqualInstruction_NotEqualUInt32LiftedToNull_TypeInfo
              );
  FUN_02d6084c(System_Linq_Expressions_Interpreter_NotEqualInstruction_NotEqualUInt64_TypeInfo);
  FUN_02d6084c(
              System_Linq_Expressions_Interpreter_NotEqualInstruction_NotEqualUInt64LiftedToNull_TypeInfo
              );
  FUN_02d6084c(
              System_Linq_Expressions_Interpreter_NotEqualInstruction_NotEqualInt16LiftedToNull_TypeInfo
              );
  FUN_02d6084c(OVRSimpleJSON_JSONNode_<get_DeepChildren>d__45_TypeInfo);
  FUN_02d6084c(PTR_DAT_067623d0);
  FUN_02d6084c(
              Newtonsoft_Json_Serialization_JsonSerializerInternalBase_ReferenceEqualsEqualityComparer_TypeInfo
              );
  FUN_02d6084c(System_Collections_Generic_ICollection<CustomAttributeData>_TypeInfo);
  *(undefined1 *)(unaff_x21 + 0xab8) = 1;
  in_stack_00000050 = 0;
  in_stack_00000058 = 0;
  in_stack_00000060 = 0;
  in_stack_00000040 = 0;
  in_stack_00000048 = 0;
  lVar8 = thunk_FUN_02d9d534(*unaff_x20);
  FUN_0590b8c8(lVar8,0);
  uStack0000000000000020 = 0;
  Unity_Mathematics_math__uint2x2(&stack0x00000020,0x58,0x52,0x53,0x30,0);
  if (lVar8 != 0) {
    *(undefined4 *)(lVar8 + 0x28) = uStack0000000000000020;
    puVar4 = PTR_DAT_067769b0;
    puVar3 = PTR_DAT_0675eb68;
    puVar2 = PTR_DAT_0675eb60;
    FUN_0590b3cc(lVar8,*(undefined8 *)(unaff_x19 + 0x10),0);
    in_stack_00000038._4_2_ = 0;
    FUN_03dc8178((long)&stack0x00000038 + 4,1,*(undefined8 *)puVar4);
    *(undefined2 *)(lVar8 + 0x38) = in_stack_00000038._4_2_;
    uVar9 = FUN_04e8cf70(*(undefined8 *)(unaff_x19 + 0x10),0);
    lStack0000000000000018 = 0;
    if ((uVar9 & 1) == 0) {
      uVar17 = *(undefined8 *)(unaff_x19 + 0x10);
      if (*(int *)(*(long *)PTR_DAT_06768438 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      lStack0000000000000018 = FUN_058550d0(uVar17,0);
    }
    lVar10 = thunk_FUN_02d9d534(*(undefined8 *)puVar2);
    FUN_03aabc60(lVar10,*(undefined8 *)puVar3);
    lVar11 = thunk_FUN_02d9d534(*(undefined8 *)puVar2);
    FUN_03aabc60(lVar11,*(undefined8 *)puVar3);
    puVar4 = 
    System_Linq_Expressions_Interpreter_NotEqualInstruction_NotEqualSByteLiftedToNull_TypeInfo;
    puVar3 = PTR_DAT_067683e8;
    puVar2 = PTR_DAT_0675eb70;
    lVar14 = *(long *)(unaff_x19 + 0x20);
    if (lVar14 != 0) {
      uVar19 = 0;
      iVar18 = 0;
      do {
        lVar14 = *(long *)(lVar14 + 0x30);
        if (lVar14 == 0) break;
        if (*(int *)(lVar14 + 0x18) <= iVar18) {
          FUN_0590b698(lVar8,0);
          return;
        }
        FUN_03b3eaa8(&stack0x00000020,lVar14,iVar18,
                     *(undefined8 *)
                      System_Linq_Expressions_Interpreter_NotEqualInstruction_NotEqualInt64LiftedToNull_TypeInfo
                    );
        uVar6 = uStack0000000000000034;
        uVar13 = uStack0000000000000030;
        lVar14 = in_stack_00000028;
        if (lVar11 == 0) break;
        iVar1 = *(int *)(lVar11 + 0x18);
        uVar17 = CONCAT44(uStack0000000000000024,uStack0000000000000020);
        *(undefined4 *)(lVar11 + 0x18) = 0;
        *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
        if (0 < iVar1) {
          FUN_05029664(*(undefined8 *)(lVar11 + 0x10),0,iVar1,0);
        }
        if (lVar14 != 0) {
          FUN_03b27de4(&stack0x00000020,lVar14,
                       *(undefined8 *)
                        System_Linq_Expressions_Interpreter_NotEqualInstruction_NotEqualSingleLiftedToNull_TypeInfo
                      );
          in_stack_00000050 = CONCAT44(uStack0000000000000024,uStack0000000000000020);
          in_stack_00000060 = CONCAT44(uStack0000000000000034,uStack0000000000000030);
          in_stack_00000058 = in_stack_00000028;
          while( true ) {
            uVar9 = FUN_04a971e4(&stack0x00000050,*(undefined8 *)puVar4);
            uVar7 = in_stack_00000060;
            if ((uVar9 & 1) == 0) break;
            uVar9 = FUN_04e8cf70(in_stack_00000060,0);
            if ((uVar9 & 1) == 0) {
              lVar14 = *(long *)(lVar11 + 0x10);
              lVar15 = *(long *)puVar2;
              *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
              if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02d60ae8();
              }
              uVar20 = *(uint *)(lVar11 + 0x18);
              if (uVar20 < *(uint *)(lVar14 + 0x18)) {
                *(uint *)(lVar11 + 0x18) = uVar20 + 1;
                puVar12 = (undefined8 *)(lVar14 + (long)(int)uVar20 * 8 + 0x20);
                *puVar12 = uVar7;
                thunk_FUN_02dd37b4(puVar12,uVar7);
              }
              else {
                FUN_03aac494(lVar11,uVar7,
                             *(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
              }
            }
          }
          FUN_04a971e0(&stack0x00000050,
                       *(undefined8 *)
                        System_Linq_Expressions_Interpreter_NotEqualInstruction_NotEqualSByte_TypeInfo
                      );
        }
        if (*(int *)(*(long *)
                      System_Linq_Expressions_Interpreter_NotEqualInstruction_NotEqualInt16_TypeInfo
                    + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        lVar14 = FUN_058cf420(uVar17,1);
        if (lStack0000000000000018 != 0) {
          if (*(int *)(*(long *)
                        System_Linq_Expressions_Interpreter_NotEqualInstruction_NotEqualInt16_TypeInfo
                      + 0xe4) == 0) {
            thunk_FUN_02dbd7b4();
          }
          lVar14 = FUN_058cf9c0(lStack0000000000000018,lVar14);
        }
        if (lVar14 == 0) break;
        lVar14 = FUN_04e91abc(lVar14,0);
        if (lVar14 == 0) break;
        uVar9 = FUN_04e921d0(lVar14,0x2f,0);
        if ((uVar9 & 1) != 0) {
          uVar17 = FUN_058cfb58(uVar9,lVar14);
          if (lVar10 == 0) break;
          uVar9 = FUN_03aac824(lVar10,uVar17,*(undefined8 *)PTR_DAT_06763510);
          if ((uVar9 & 1) == 0) {
            if (*(long *)(unaff_x19 + 0x20) == 0) break;
            uVar9 = FUN_058cfb90(uVar9,*(undefined8 *)(*(long *)(unaff_x19 + 0x20) + 0x30),iVar18);
            if ((uVar9 & 1) != 0) {
              auVar21 = FUN_0590b48c(lVar8,uVar17,0);
              _in_stack_00000040 = auVar21;
              auVar21 = FUN_0590b91c(&stack0x00000040,
                                     *(undefined8 *)
                                      System_Linq_Expressions_Interpreter_NotEqualInstruction_NotEqualUInt32_TypeInfo
                                     ,0);
              _in_stack_00000040 = auVar21;
              FUN_0590ba88(&stack0x00000040,0,0);
              lVar16 = *(long *)puVar2;
              lVar15 = *(long *)(lVar10 + 0x10);
              *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
              if (lVar15 == 0) break;
              uVar20 = *(uint *)(lVar10 + 0x18);
              if (uVar20 < *(uint *)(lVar15 + 0x18)) {
                *(uint *)(lVar10 + 0x18) = uVar20 + 1;
                puVar12 = (undefined8 *)(lVar15 + (long)(int)uVar20 * 8 + 0x20);
                *puVar12 = uVar17;
                thunk_FUN_02dd37b4(puVar12,uVar17);
              }
              else {
                FUN_03aac494(lVar10,uVar17,
                             *(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
              }
            }
          }
        }
        if (*(int *)(*(long *)
                      System_Linq_Expressions_Interpreter_NotEqualInstruction_NotEqualInt16_TypeInfo
                    + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        uVar20 = 4;
        switch(uVar13) {
        case 0:
          uVar20 = uVar6;
          break;
        case 1:
          uVar20 = 1;
          break;
        case 2:
        case 3:
          break;
        case 4:
          uVar20 = 8;
          break;
        case 5:
          uVar20 = 0xc;
          break;
        case 6:
          uVar20 = 0x10;
          break;
        case 7:
          uVar20 = 0x68;
          break;
        case 8:
          uVar20 = 0x20;
          break;
        case 9:
          uVar20 = 0x4c;
          break;
        default:
          uVar20 = 0;
        }
        uVar9 = thunk_FUN_04e8bd3c(*(undefined8 *)(unaff_x19 + 0x18),
                                   *(undefined8 *)
                                    System_Linq_Expressions_Interpreter_NotEqualInstruction_NotEqualInt16LiftedToNull_TypeInfo
                                   ,0);
        if ((uVar9 & 1) == 0) {
          if ((3 < uVar20) && ((uVar19 & 3) != 0)) {
            uVar19 = uVar19 + 4 & 0xfffffffc;
          }
        }
        else if (uVar20 < 5) {
          uVar20 = 4;
        }
        switch(uVar13) {
        case 1:
          auVar21 = FUN_0590b48c(lVar8,lVar14,0);
          _in_stack_00000040 = auVar21;
          auVar21 = FUN_0590b91c(&stack0x00000040,*(undefined8 *)PTR_DAT_067623d0,0);
          _in_stack_00000040 = auVar21;
          auVar21 = FUN_0590ba88(&stack0x00000040,uVar19,0);
          lVar14 = *(long *)puVar3;
          _in_stack_00000040 = auVar21;
          if (*(int *)(lVar14 + 0xe4) == 0) {
            thunk_FUN_02dbd7b4();
            lVar14 = *(long *)puVar3;
          }
          uVar13 = *(undefined4 *)(*(long *)(lVar14 + 0xb8) + 4);
          break;
        case 2:
          auVar21 = FUN_0590b48c(lVar8,lVar14,0);
          _in_stack_00000040 = auVar21;
          auVar21 = FUN_0590b91c(&stack0x00000040,
                                 *(undefined8 *)
                                  System_Collections_Generic_ICollection<CustomAttributeData>_TypeInfo
                                 ,0);
          _in_stack_00000040 = auVar21;
          auVar21 = FUN_0590ba88(&stack0x00000040,uVar19,0);
          lVar14 = *(long *)puVar3;
          _in_stack_00000040 = auVar21;
          if (*(int *)(lVar14 + 0xe4) == 0) {
            thunk_FUN_02dbd7b4();
            lVar14 = *(long *)puVar3;
          }
          uVar13 = *(undefined4 *)(*(long *)(lVar14 + 0xb8) + 0xc);
          break;
        case 3:
          auVar21 = FUN_0590b48c(lVar8,lVar14,0);
          _in_stack_00000040 = auVar21;
          auVar21 = FUN_0590b91c(&stack0x00000040,
                                 *(undefined8 *)
                                  OVR_OpenVR_IVRCompositor__GetMirrorTextureD3D11_TypeInfo,0);
          _in_stack_00000040 = auVar21;
          auVar21 = FUN_0590bc80(0xbf800000,0x3f800000,&stack0x00000040,0);
          _in_stack_00000040 = auVar21;
          auVar21 = FUN_0590ba88(&stack0x00000040,uVar19,0);
          lVar14 = *(long *)puVar3;
          _in_stack_00000040 = auVar21;
          if (*(int *)(lVar14 + 0xe4) == 0) {
            thunk_FUN_02dbd7b4();
            lVar14 = *(long *)puVar3;
          }
          uVar13 = *(undefined4 *)(*(long *)(lVar14 + 0xb8) + 0x2c);
          break;
        case 4:
          auVar21 = FUN_0590b48c(lVar8,lVar14,0);
          _in_stack_00000040 = auVar21;
          auVar21 = FUN_0590b91c(&stack0x00000040,
                                 *(undefined8 *)
                                  OVRSimpleJSON_JSONNode_<get_DeepChildren>d__45_TypeInfo,0);
          _in_stack_00000040 = auVar21;
          auVar21 = FUN_0590ba88(&stack0x00000040,uVar19,0);
          lVar15 = *(long *)puVar3;
          _in_stack_00000040 = auVar21;
          if (*(int *)(lVar15 + 0xe4) == 0) {
            thunk_FUN_02dbd7b4();
            lVar15 = *(long *)puVar3;
          }
          auVar21 = FUN_0590ba0c(&stack0x00000040,*(undefined4 *)(*(long *)(lVar15 + 0xb8) + 0x34),0
                                );
          _in_stack_00000040 = auVar21;
          FUN_0590bef4(&stack0x00000040,lVar11,0);
          uVar17 = FUN_04e83184(lVar14,*(undefined8 *)
                                        System_Linq_Expressions_Interpreter_NotEqualInstruction_NotEqualUInt64LiftedToNull_TypeInfo
                                ,0);
          auVar21 = FUN_0590b48c(lVar8,uVar17,0);
          puVar5 = OVR_OpenVR_IVRCompositor__GetMirrorTextureD3D11_TypeInfo;
          _in_stack_00000040 = auVar21;
          auVar21 = FUN_0590b91c(&stack0x00000040,
                                 *(undefined8 *)
                                  OVR_OpenVR_IVRCompositor__GetMirrorTextureD3D11_TypeInfo,0);
          _in_stack_00000040 = auVar21;
          FUN_0590bc80(0xbf800000,0x3f800000,&stack0x00000040,0);
          uVar17 = FUN_04e83184(lVar14,*(undefined8 *)
                                        System_Linq_Expressions_Interpreter_NotEqualInstruction_NotEqualUInt16LiftedToNull_TypeInfo
                                ,0);
          auVar21 = FUN_0590b48c(lVar8,uVar17,0);
          _in_stack_00000040 = auVar21;
          auVar21 = FUN_0590b91c(&stack0x00000040,*(undefined8 *)puVar5,0);
          _in_stack_00000040 = auVar21;
          FUN_0590bc80(0xbf800000,0x3f800000,&stack0x00000040,0);
          goto switchD_058d0300_caseD_7;
        case 5:
          auVar21 = FUN_0590b48c(lVar8,lVar14,0);
          _in_stack_00000040 = auVar21;
          auVar21 = FUN_0590b91c(&stack0x00000040,
                                 *(undefined8 *)
                                  Newtonsoft_Json_Serialization_JsonSerializerInternalBase_ReferenceEqualsEqualityComparer_TypeInfo
                                 ,0);
          _in_stack_00000040 = auVar21;
          auVar21 = FUN_0590ba88(&stack0x00000040,uVar19,0);
          lVar14 = *(long *)puVar3;
          _in_stack_00000040 = auVar21;
          if (*(int *)(lVar14 + 0xe4) == 0) {
            thunk_FUN_02dbd7b4();
            lVar14 = *(long *)puVar3;
          }
          uVar13 = *(undefined4 *)(*(long *)(lVar14 + 0xb8) + 0x38);
          break;
        case 6:
          auVar21 = FUN_0590b48c(lVar8,lVar14,0);
          _in_stack_00000040 = auVar21;
          auVar21 = FUN_0590b91c(&stack0x00000040,
                                 *(undefined8 *)Unity_VisualScripting_InvokeMember_<>c_TypeInfo,0);
          _in_stack_00000040 = auVar21;
          auVar21 = FUN_0590ba88(&stack0x00000040,uVar19,0);
          lVar14 = *(long *)puVar3;
          _in_stack_00000040 = auVar21;
          if (*(int *)(lVar14 + 0xe4) == 0) {
            thunk_FUN_02dbd7b4();
            lVar14 = *(long *)puVar3;
          }
          uVar13 = *(undefined4 *)(*(long *)(lVar14 + 0xb8) + 0x3c);
          break;
        default:
          goto switchD_058d0300_caseD_7;
        case 8:
          auVar21 = FUN_0590b48c(lVar8,lVar14,0);
          puVar12 = (undefined8 *)
                    System_Linq_Expressions_Interpreter_NotEqualInstruction_NotEqualUInt64_TypeInfo;
          goto LAB_058d047c;
        case 9:
          auVar21 = FUN_0590b48c(lVar8,lVar14,0);
          puVar12 = (undefined8 *)
                    System_Linq_Expressions_Interpreter_NotEqualInstruction_NotEqualUInt32LiftedToNull_TypeInfo
          ;
LAB_058d047c:
          _in_stack_00000040 = auVar21;
          auVar21 = FUN_0590b91c(&stack0x00000040,*puVar12,0);
          _in_stack_00000040 = auVar21;
          auVar21 = FUN_0590ba88(&stack0x00000040,uVar19,0);
          goto LAB_058d06ec;
        }
        auVar21 = FUN_0590ba0c(&stack0x00000040,uVar13,0);
LAB_058d06ec:
        _in_stack_00000040 = auVar21;
        FUN_0590bef4(&stack0x00000040,lVar11,0);
switchD_058d0300_caseD_7:
        lVar14 = *(long *)(unaff_x19 + 0x20);
        uVar19 = uVar19 + uVar20;
        iVar18 = iVar18 + 1;
      } while (lVar14 != 0);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


