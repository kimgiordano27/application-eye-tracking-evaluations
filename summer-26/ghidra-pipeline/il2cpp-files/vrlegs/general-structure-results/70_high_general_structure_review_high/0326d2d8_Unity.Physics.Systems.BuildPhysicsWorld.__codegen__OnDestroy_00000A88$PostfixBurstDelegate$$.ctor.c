/*
FUNCTION_NAME: Unity.Physics.Systems.BuildPhysicsWorld.__codegen__OnDestroy_00000A88$PostfixBurstDelegate$$.ctor
ENTRY_POINT: 0326d2d8
PROGRAM: vrlegs-libil2cpp.so
SCORE: 78
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_21;ray_or_cast_sink_hits_4;telemetry_or_network_hits_2
*/


undefined8
Unity_Physics_Systems_BuildPhysicsWorld___codegen__OnDestroy_00000A88_PostfixBurstDelegate___ctor
          (undefined4 param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  uint uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  long lVar16;
  byte *pbVar17;
  undefined8 uVar18;
  ulong uVar19;
  undefined8 uVar20;
  byte *unaff_x19;
  byte *unaff_x21;
  int unaff_w23;
  uint unaff_w24;
  long unaff_x25;
  long unaff_x26;
  long unaff_x27;
  int iVar21;
  byte *unaff_x28;
  undefined8 *unaff_x29;
  byte *in_stack_00000010;
  long in_stack_00000018;
  long in_stack_00000020;
  undefined8 in_stack_00000028;
  long in_stack_00000030;
  undefined8 *in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  long in_stack_000000b0;
  int iStack00000000000000bc;
  uint uStack00000000000000c0;
  undefined4 uStack00000000000000c4;
  int iStack00000000000000c8;
  int iStack00000000000000cc;
  int iStack00000000000000d0;
  int iStack00000000000000d4;
  undefined4 uStack00000000000000d8;
  undefined4 uStack00000000000000dc;
  undefined4 uStack00000000000000e0;
  undefined4 uStack00000000000000e4;
  int iStack00000000000000e8;
  int iStack00000000000000ec;
  int iStack00000000000000f0;
  undefined4 uStack00000000000000f4;
  undefined8 in_stack_00000108;
  int iStack0000000000000110;
  int iStack0000000000000114;
  int iStack0000000000000118;
  int iStack000000000000011c;
  int iStack0000000000000120;
  undefined4 uStack0000000000000124;
  int iStack0000000000000128;
  int iStack000000000000012c;
  undefined8 in_stack_00000130;
  undefined4 uStack0000000000000138;
  undefined4 uStack000000000000013c;
  undefined4 uStack0000000000000140;
  int iStack0000000000000144;
  undefined4 uStack0000000000000148;
  undefined4 uStack000000000000014c;
  undefined8 in_stack_00000180;
  int in_stack_00000188;
  undefined8 in_stack_00000190;
  undefined8 in_stack_00000198;
  undefined8 in_stack_000001a0;
  undefined8 in_stack_000001a8;
  undefined8 in_stack_000001b0;
  undefined8 in_stack_000001b8;
  undefined8 in_stack_000001c0;
  undefined8 in_stack_000001c8;
  undefined8 in_stack_000001d0;
  undefined8 in_stack_000001d8;
  undefined8 in_stack_000001e8;
  int in_stack_0000023c;
  
code_r0x0326d2d8:
  FUN_0326dc2c(&stack0x000001e0,param_1);
LAB_0326d9fc:
  unaff_x28 = unaff_x28 + 5;
  if (unaff_w24 != 3) {
    unaff_x28 = unaff_x19 + unaff_w24;
  }
  if (unaff_x21 <= unaff_x28) {
    if (in_stack_000000b0 == 0) goto LAB_0326db10;
    uVar18 = FUN_022195a8(in_stack_000000b0,
                          *(undefined8 *)
                           System_Linq_Expressions_Interpreter_BranchFalseInstruction_TypeInfo);
    *(undefined8 *)(unaff_x27 + 0x20) = uVar18;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
    puVar7 = Newtonsoft_Json_Bson_BsonType_TypeInfo;
    puVar6 = Newtonsoft_Json_Bson_BsonRegex_TypeInfo;
    puVar5 = Newtonsoft_Json_Bson_BsonProperty_TypeInfo;
    puVar4 = Newtonsoft_Json_Converters_BsonObjectIdConverter_TypeInfo;
    if (unaff_x25 != 0) {
      uVar18 = FUN_022195a8(unaff_x25,*(undefined8 *)Newtonsoft_Json_Bson_BsonValue_TypeInfo);
      *(undefined8 *)(unaff_x27 + 0x28) = uVar18;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      Animancer_FadeGroup__get_TargetWeight(unaff_x25,&stack0x00000150,*(undefined8 *)puVar7);
      goto LAB_0326da94;
    }
    goto LAB_0326db10;
  }
  uVar10 = (uint)*unaff_x28;
  if (uVar10 == 0xfe) {
    thunk_FUN_01a6ca08(PTR_DAT_03cc74c8);
    uVar18 = thunk_FUN_01a89e68();
    uVar20 = thunk_FUN_01a6ca08(Photon_Voice_BufferReaderPushAdapterAsyncPoolFloatToShort_TypeInfo);
    FUN_0276e9b0(uVar18,uVar20,0);
    uVar20 = thunk_FUN_01a6ca08(Photon_Voice_BufferReaderPushAdapterAsyncPoolShortToFloat_TypeInfo);
                    /* WARNING: Subroutine does not return */
    FUN_01ab6b14(uVar18,uVar20);
  }
  uVar2 = uVar10 & 0xfc;
  unaff_w24 = uVar10 & 3;
  unaff_x19 = unaff_x28 + 1;
  if (uVar2 < 0x55) {
    if (0x18 < uVar2) {
      if (uVar2 < 0x29) {
        if (uVar2 == 0x24) {
          in_stack_0000023c = FUN_0326dbc4(unaff_w24,unaff_x19,unaff_x21);
          iStack0000000000000120 = 0;
          uStack0000000000000124 = 0;
          FUN_02241190(&stack0x00000120,&stack0x0000023c,*unaff_x29);
          in_stack_000001a0 = CONCAT44(uStack0000000000000124,iStack0000000000000120);
        }
        else if (uVar2 == 0x28) {
          in_stack_0000023c = FUN_0326dbc4(unaff_w24,unaff_x19,unaff_x21);
          iStack0000000000000120 = 0;
          uStack0000000000000124 = 0;
          FUN_02241190(&stack0x00000120,&stack0x0000023c,*unaff_x29);
        }
      }
      else if (uVar2 == 0x34) {
        in_stack_0000023c = FUN_0326dbc4(unaff_w24,unaff_x19,unaff_x21);
        iStack0000000000000120 = 0;
        uStack0000000000000124 = 0;
        FUN_02241190(&stack0x00000120,&stack0x0000023c,*unaff_x29);
        in_stack_000001a8 = CONCAT44(uStack0000000000000124,iStack0000000000000120);
      }
      else if (uVar2 == 0x44) {
        in_stack_0000023c = FUN_0326dbc4(unaff_w24,unaff_x19,unaff_x21);
        iStack0000000000000120 = 0;
        uStack0000000000000124 = 0;
        FUN_02241190(&stack0x00000120,&stack0x0000023c,*unaff_x29);
        in_stack_000001b0 = CONCAT44(uStack0000000000000124,iStack0000000000000120);
      }
      else if (uVar2 == 0x54) {
        in_stack_0000023c = FUN_0326dbc4(unaff_w24,unaff_x19,unaff_x21);
        iStack0000000000000120 = 0;
        uStack0000000000000124 = 0;
        FUN_02241190(&stack0x00000120,&stack0x0000023c,*unaff_x29);
        in_stack_000001b8 = CONCAT44(uStack0000000000000124,iStack0000000000000120);
      }
      goto LAB_0326d9fc;
    }
    if (8 < uVar2) {
      if (uVar2 == 0x14) {
        in_stack_0000023c = FUN_0326dbc4(unaff_w24,unaff_x19,unaff_x21);
        iStack0000000000000120 = 0;
        uStack0000000000000124 = 0;
        FUN_02241190(&stack0x00000120,&stack0x0000023c,*unaff_x29);
        in_stack_00000198 = CONCAT44(uStack0000000000000124,iStack0000000000000120);
      }
      else if (uVar2 == 0x18) {
        in_stack_0000023c = FUN_0326dbc4(unaff_w24,unaff_x19,unaff_x21);
        iStack0000000000000120 = 0;
        uStack0000000000000124 = 0;
        FUN_02241190(&stack0x00000120,&stack0x0000023c,*unaff_x29);
        in_stack_000001e8 = CONCAT44(uStack0000000000000124,iStack0000000000000120);
      }
      goto LAB_0326d9fc;
    }
    if (uVar2 == 4) {
      in_stack_0000023c = FUN_0326dbc4(unaff_w24,unaff_x19,unaff_x21);
      iStack0000000000000120 = 0;
      uStack0000000000000124 = 0;
      FUN_02241190(&stack0x00000120,&stack0x0000023c,*unaff_x29);
      in_stack_00000190 = CONCAT44(uStack0000000000000124,iStack0000000000000120);
      goto LAB_0326d9fc;
    }
    if (uVar2 != 8) goto LAB_0326d9fc;
    param_1 = FUN_0326dbc4(unaff_w24,unaff_x19,unaff_x21);
    goto code_r0x0326d2d8;
  }
  if (uVar2 < 0x85) {
    if (uVar2 < 0x75) {
      if (uVar2 == 100) {
        in_stack_0000023c = FUN_0326dbc4(unaff_w24,unaff_x19,unaff_x21);
        iStack0000000000000120 = 0;
        uStack0000000000000124 = 0;
        FUN_02241190(&stack0x00000120,&stack0x0000023c,*unaff_x29);
        in_stack_000001c0 = CONCAT44(uStack0000000000000124,iStack0000000000000120);
      }
      else if (uVar2 == 0x74) {
        in_stack_0000023c = FUN_0326dbc4(unaff_w24,unaff_x19,unaff_x21);
        iStack0000000000000120 = 0;
        uStack0000000000000124 = 0;
        FUN_02241190(&stack0x00000120,&stack0x0000023c,*unaff_x29);
        in_stack_000001c8 = CONCAT44(uStack0000000000000124,iStack0000000000000120);
      }
      goto LAB_0326d9fc;
    }
    if (uVar2 != 0x80) {
      if (uVar2 == 0x84) {
        in_stack_0000023c = FUN_0326dbc4(unaff_w24,unaff_x19,unaff_x21);
        iStack0000000000000120 = 0;
        uStack0000000000000124 = 0;
        FUN_02241190(&stack0x00000120,&stack0x0000023c,*unaff_x29);
        in_stack_000001d8 = CONCAT44(uStack0000000000000124,iStack0000000000000120);
      }
      goto LAB_0326d9fc;
    }
    uVar14 = 1;
  }
  else if (uVar2 < 0x95) {
    if (uVar2 != 0x90) {
      if (uVar2 == 0x94) {
        in_stack_0000023c = FUN_0326dbc4(unaff_w24,unaff_x19,unaff_x21);
        iStack0000000000000120 = 0;
        uStack0000000000000124 = 0;
        FUN_02241190(&stack0x00000120,&stack0x0000023c,*unaff_x29);
        in_stack_000001d0 = CONCAT44(uStack0000000000000124,iStack0000000000000120);
      }
      goto LAB_0326d9fc;
    }
    uVar14 = 2;
  }
  else {
    if (uVar2 == 0xa0) {
      if (unaff_x25 == 0) goto LAB_0326db10;
      iVar3 = *(int *)(unaff_x25 + 0x18);
      uVar14 = FUN_0326dbc4(unaff_w24,unaff_x19,unaff_x21);
      uVar8 = FUN_0326dd98(&stack0x00000190,0,&stack0x000001e0);
      uVar15 = FUN_0326de5c(&stack0x000001e0,0);
      if (in_stack_000000b0 != 0) {
        uStack000000000000014c = *(undefined4 *)(in_stack_000000b0 + 0x18);
        uStack0000000000000148 = 0;
        uStack0000000000000138 = uVar14;
        uStack000000000000013c = uVar15;
        uStack0000000000000140 = uVar8;
        iStack0000000000000144 = unaff_w23;
        FUN_01b5f01c(unaff_x25,&stack0x00000138,
                     *(undefined8 *)Newtonsoft_Json_Bson_BsonString_TypeInfo);
        FUN_0326e010(&stack0x000001e0);
        unaff_x26 = in_stack_00000030;
        unaff_x29 = (undefined8 *)PTR_DAT_03cc1828;
        unaff_w23 = iVar3;
        goto LAB_0326d9fc;
      }
      goto LAB_0326db10;
    }
    if (uVar2 != 0xb0) {
      if (uVar2 != 0xc0) goto LAB_0326d9fc;
      if (unaff_w23 == -1) {
        return 0;
      }
      if (unaff_x25 == 0) goto LAB_0326db10;
      FUN_02215a88(unaff_x25,unaff_w23,&stack0x00000120,
                   *(undefined8 *)Mono_Net_Security_BufferOffsetSize_TypeInfo);
      iVar3 = iStack000000000000012c;
      in_stack_00000180 = CONCAT44(uStack0000000000000124,iStack0000000000000120);
      in_stack_00000188 = iStack0000000000000128;
      if (in_stack_000000b0 != 0) {
        iStack0000000000000118 = *(int *)(in_stack_000000b0 + 0x18) - in_stack_00000130._4_4_;
        iStack0000000000000110 = iStack0000000000000128;
        iStack0000000000000114 = iStack000000000000012c;
        iStack000000000000011c = in_stack_00000130._4_4_;
        in_stack_00000108 = in_stack_00000180;
        FUN_02215b6c(unaff_x25,unaff_w23,&stack0x00000108,
                     *(undefined8 *)System_Net_BufferOffsetSize_TypeInfo);
        FUN_0326e010(&stack0x000001e0);
        unaff_w23 = iVar3;
        goto LAB_0326d9fc;
      }
      goto LAB_0326db10;
    }
    uVar14 = 3;
  }
  uVar8 = FUN_0326e0d0(in_stack_000001d8,uVar14,unaff_x26);
  if (unaff_x26 != 0) {
    FUN_02215a88(unaff_x26,uVar8,&stack0x00000120,*(undefined8 *)UniGLTF_BufferAccessor_TypeInfo);
    uVar15 = uStack0000000000000124;
    iVar3 = iStack0000000000000120;
    iStack00000000000000bc = iStack0000000000000128;
    if (iStack0000000000000128 == 0) {
      lVar16 = *(long *)(*(long *)PTR_DAT_03cc1790 + 0x20);
      if ((*(byte *)(lVar16 + 0x135) & 1) == 0) {
        lVar16 = FUN_01a46ff8();
      }
      pbVar17 = (byte *)thunk_FUN_01a59484(in_stack_00000098,
                                           *(undefined8 *)
                                            (*(long *)(*(long *)(lVar16 + 0xc0) + 8) + 0x80));
      iStack00000000000000bc = (uint)*pbVar17 << 3;
    }
    iStack0000000000000120 = 1;
    FUN_022414f4(in_stack_00000028,&stack0x00000120,&stack0x0000023c,*(undefined8 *)PTR_DAT_03cce9f8
                );
    uVar9 = FUN_0326dbc4(unaff_w24,unaff_x19,unaff_x21);
    if (0 < in_stack_0000023c) {
      iVar21 = 0;
      do {
        uVar10 = FUN_0326de5c(&stack0x000001e0,iVar21);
        uVar11 = FUN_0326dd98(&stack0x00000190,iVar21,&stack0x000001e0);
        puVar4 = PTR_DAT_03cce9f8;
        iStack0000000000000120 = 8;
        FUN_022414f4(in_stack_00000090,&stack0x00000120,&stack0x0000023c,
                     *(undefined8 *)PTR_DAT_03cce9f8);
        iStack0000000000000120 = 1;
        FUN_022414f4(in_stack_00000098,&stack0x00000120,&stack0x0000023c,*(undefined8 *)puVar4);
        iStack0000000000000120 = 0;
        FUN_022414f4(in_stack_00000088,&stack0x00000120,&stack0x0000023c,*(undefined8 *)puVar4);
        iStack0000000000000120 = 0;
        FUN_022414f4(in_stack_00000080,&stack0x00000120,&stack0x0000023c,*(undefined8 *)puVar4);
        uVar12 = FUN_0326e250(&stack0x00000190);
        uVar13 = FUN_0326e38c(&stack0x00000190);
        iStack0000000000000120 = 0;
        FUN_022414f4(in_stack_00000078,&stack0x00000120,&stack0x0000023c,*(undefined8 *)puVar4);
        iStack0000000000000120 = 0;
        FUN_022414f4(in_stack_00000070,&stack0x00000120,&stack0x0000023c,*(undefined8 *)puVar4);
        iStack0000000000000120 = 0;
        uStack0000000000000124 = 0;
        iStack0000000000000128 = 0;
        iStack000000000000012c = 0;
        if (in_stack_000000b0 == 0) goto LAB_0326db10;
        uStack00000000000000c0 = uVar10 & 0xffff;
        uStack00000000000000e4 = 0;
        iVar1 = in_stack_0000023c + iStack00000000000000bc;
        uVar18 = *(undefined8 *)Newtonsoft_Json_Utilities_BoxedPrimitives_TypeInfo;
        iStack00000000000000f0 = iStack00000000000000bc;
        in_stack_00000068[1] = 0;
        *in_stack_00000068 = 0;
        uStack00000000000000c4 = uVar11;
        iStack00000000000000c8 = in_stack_0000023c;
        iStack00000000000000cc = in_stack_0000023c;
        iStack00000000000000d0 = in_stack_0000023c;
        iStack00000000000000d4 = in_stack_0000023c;
        uStack00000000000000d8 = uVar12;
        uStack00000000000000dc = uVar13;
        uStack00000000000000e0 = uVar14;
        iStack00000000000000e8 = in_stack_0000023c;
        iStack00000000000000ec = in_stack_0000023c;
        uStack00000000000000f4 = uVar9;
        FUN_01b5f01c(in_stack_000000b0,&stack0x000000c0,uVar18);
        iVar21 = iVar21 + 1;
        iStack00000000000000bc = iVar1;
      } while (in_stack_0000023c != iVar21);
    }
    iStack0000000000000120 = iVar3;
    uStack0000000000000124 = uVar15;
    iStack0000000000000128 = iStack00000000000000bc;
    FUN_02215b6c(in_stack_00000030,uVar8,&stack0x00000120,
                 *(undefined8 *)Mono_Net_Security_BufferOffsetSize2_TypeInfo);
    FUN_0326e010(&stack0x000001e0);
    unaff_x21 = in_stack_00000010;
    unaff_x25 = in_stack_00000018;
    unaff_x26 = in_stack_00000030;
    unaff_x27 = in_stack_00000020;
    unaff_x29 = (undefined8 *)PTR_DAT_03cc1828;
    goto LAB_0326d9fc;
  }
LAB_0326db10:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
  while ((FUN_01b7a454(&stack0x00000150,&stack0x00000120,*(undefined8 *)puVar6),
         iStack0000000000000120 != 1 || (iStack000000000000012c != -1))) {
LAB_0326da94:
    uVar19 = FUN_021b51c8(&stack0x00000150,*(undefined8 *)puVar5);
    if ((uVar19 & 1) == 0) goto LAB_0326dad8;
  }
  *(ulong *)(unaff_x27 + 8) = CONCAT44(iStack0000000000000128,uStack0000000000000124);
LAB_0326dad8:
  FUN_021b51c4(&stack0x00000150,*(undefined8 *)puVar4);
  return 1;
}


