/*
FUNCTION_NAME: Unity.VisualScripting.Serialization$$SerializeJson
ENTRY_POINT: 06762770
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_1;paired_field_refs_with_structure_only;telemetry_or_network_hits_2
*/


void Unity_VisualScripting_Serialization__SerializeJson(ulong param_1)

{
  long *plVar1;
  long *plVar2;
  uint uVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined4 uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long unaff_x19;
  long unaff_x20;
  bool bVar13;
  uint unaff_w26;
  int unaff_w29;
  uint uStack0000000000000020;
  long in_stack_00000038;
  int in_stack_00000050;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_000000f8;
  undefined8 in_stack_00000100;
  undefined8 in_stack_00000108;
  undefined4 in_stack_00000110;
  undefined8 in_stack_00000120;
  undefined8 in_stack_00000128;
  undefined8 in_stack_00000130;
  undefined8 in_stack_00000138;
  undefined8 in_stack_00000140;
  undefined8 in_stack_00000150;
  undefined8 in_stack_00000158;
  undefined8 in_stack_00000160;
  undefined8 in_stack_00000168;
  undefined8 in_stack_00000170;
  undefined8 in_stack_00000180;
  undefined8 in_stack_00000188;
  undefined8 in_stack_00000190;
  undefined8 in_stack_00000198;
  undefined8 in_stack_000001a0;
  undefined8 in_stack_000001a8;
  undefined4 in_stack_000001b0;
  undefined8 in_stack_000001c0;
  undefined8 in_stack_000001c8;
  undefined8 in_stack_000001d0;
  undefined8 in_stack_000001d8;
  undefined8 in_stack_000001e0;
  undefined8 in_stack_000001e8;
  undefined4 in_stack_000001f0;
  undefined4 in_stack_00000890;
  undefined4 in_stack_00000894;
  int in_stack_00000898;
  undefined4 in_stack_0000089c;
  undefined8 in_stack_000008a0;
  undefined8 in_stack_000008a8;
  undefined8 in_stack_000008b0;
  undefined8 in_stack_000008b8;
  undefined4 in_stack_000008c0;
  
  if ((param_1 >> 0x28 & 1) != 0) {
    FUN_068e40b4(&stack0x000005f0,0x2e,0);
    FUN_068e41c8(&stack0x000005f0,0,0);
    if (*(int *)(*(long *)System_Collections_Generic_List<TypeName>_TypeInfo + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
    }
    FUN_06748f48(0,unaff_x19 + 0x2c8,&stack0x000005f0,0,1,0,1,
                 *(undefined8 *)
                  Unity_Entities_TypeManager_SharedTypeIndex<RTSBuildingManager>_TypeInfo,0);
    FUN_068e40b4(&stack0x000005b0,0,0);
    FUN_06748f48(0,unaff_x19 + 0x2d0,&stack0x000005b0,0,1,0,1,
                 *(undefined8 *)Unity_Entities_TypeManager_SharedTypeIndex<VisualizeMesh>_TypeInfo,0
                );
    if (*(long *)(unaff_x19 + 0x1c8) == 0) goto LAB_06762e2c;
    FUN_06739310(*(long *)(unaff_x19 + 0x1c8),*(undefined8 *)(unaff_x19 + 0x2c8),
                 *(undefined8 *)(unaff_x19 + 0x2d0),0);
    FUN_067295d4();
  }
  if ((_uStack0000000000000020 & 0x100000000) != 0) {
    FUN_067295d4();
  }
  uVar5 = 0;
  if (unaff_w26 != 0) {
    uVar5 = 3;
  }
  if (unaff_w29 != 0) {
    if (*(long *)(unaff_x19 + 0x218) == 0) goto LAB_06762e2c;
    if (499 < *(int *)(*(long *)(unaff_x19 + 0x218) + 0x10)) {
      if (in_stack_00000898 < 2) {
        uVar5 = 0;
      }
      else {
        if (*(int *)(*(long *)System_Collections_Generic_List<TypeName>_TypeInfo + 0xe0) == 0) {
          thunk_FUN_02fdcff0();
        }
        uVar5 = FUN_0674de10(0);
        uVar5 = uVar5 & 1;
      }
    }
  }
  if (*(long *)(unaff_x19 + 0x230) == 0) goto LAB_06762e2c;
  FUN_0671e2d0(*(long *)(unaff_x19 + 0x230),1 < in_stack_00000898 & unaff_w26,0,0);
  if (*(long *)(unaff_x19 + 0x230) == 0) goto LAB_06762e2c;
  FUN_0671e408(*(long *)(unaff_x19 + 0x230),uVar5,0);
  FUN_067295d4();
  FUN_067295d4();
  uVar5 = FUN_06770690();
  uVar6 = FUN_0676cdd8();
  if (((uVar5 & 1) != 0) && ((uVar6 & 1) != 0)) {
    if (*(long *)(unaff_x19 + 0x260) == 0) goto LAB_06762e2c;
    FUN_06736864();
    FUN_067295d4();
  }
  uVar3 = *(long *)(unaff_x20 + 0x1a8) != 0 & unaff_w26;
  if ((uStack0000000000000020 & unaff_w26) == 0) {
LAB_06762a14:
    bVar13 = false;
  }
  else if ((*(int *)(unaff_x20 + 0x1c4) == 1) ||
          ((*(int *)(unaff_x20 + 0x168) == 1 && (*(int *)(unaff_x20 + 0x16c) != 0)))) {
    bVar13 = true;
  }
  else {
    uVar9 = FUN_0676c0e0();
    if ((uVar9 & 1) == 0) goto LAB_06762a14;
    bVar13 = 0.0 < *(float *)(unaff_x20 + 0x214);
  }
  bVar4 = bVar13 ^ 1;
  if (uVar3 != 0 || in_stack_00000038 != 0) {
    bVar4 = 0;
  }
  if (*(long *)(unaff_x19 + 0xe0) == 0) {
    uVar7 = 1;
  }
  else {
    uVar7 = FUN_0670f6ac();
    uVar7 = ~uVar7 & 1;
  }
  plVar1 = (long *)(unaff_x19 + 0x278);
  plVar2 = (long *)(unaff_x19 + 0x288);
  if (in_stack_00000050 == 0) {
    if (in_stack_00000078._4_4_ == 0) {
      return;
    }
    FUN_067600e4();
  }
  else {
    uVar8 = FUN_068e3d08(&stack0x00000890,0);
    if (*(int *)(*(long *)OVRTask<bool[]>_TypeInfo + 0xe0) == 0) {
      thunk_FUN_02fdcff0(*(long *)OVRTask<bool[]>_TypeInfo);
    }
    in_stack_00000180 = CONCAT44(in_stack_00000894,in_stack_00000890);
    in_stack_00000188 = CONCAT44(in_stack_0000089c,in_stack_00000898);
    in_stack_00000190 = in_stack_000008a0;
    in_stack_00000198 = in_stack_000008a8;
    in_stack_000001a0 = in_stack_000008b0;
    in_stack_000001a8 = in_stack_000008b8;
    in_stack_000001b0 = in_stack_000008c0;
    FUN_0673d3c8(&stack0x000001c0,&stack0x00000180,in_stack_00000890,in_stack_00000894,uVar8,0,0);
    if (*(int *)(*(long *)System_Collections_Generic_List<TypeName>_TypeInfo + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
    }
    FUN_06748f48(0,unaff_x19 + 0x368,&stack0x00000570,0,1,0,1,
                 *(undefined8 *)OVRTask<OVRResult<ulong,_Int32Enum>>_TypeInfo,0);
    if (in_stack_00000078._4_4_ == 0) {
      if (*(long *)(unaff_x19 + 0x358) == 0) goto LAB_06762e2c;
      FUN_0673ac68(*(long *)(unaff_x19 + 0x358),&stack0x00000890,plVar1,0,plVar2,&stack0x00000670,
                   unaff_x19 + 0x2c8,0);
      goto LAB_06760c28;
    }
    FUN_067600e4();
    if (*(long *)(unaff_x19 + 0x358) == 0) goto LAB_06762e2c;
    FUN_0673ac68(*(long *)(unaff_x19 + 0x358),&stack0x00000890,plVar1,bVar4,plVar2,&stack0x00000670,
                 unaff_x19 + 0x2c8,bVar13);
    FUN_067295d4();
  }
  lVar10 = *plVar1;
  if (bVar13 != false) {
    if (*(long *)(unaff_x19 + 0x360) == 0) goto LAB_06762e2c;
    FUN_0673adb0(*(long *)(unaff_x19 + 0x360),&stack0x00000568,1,uVar7,0);
    FUN_067295d4();
  }
  if (*(long *)(unaff_x20 + 0x1a8) != 0) {
    FUN_067295d4();
  }
  if ((bVar13 == false) && (((in_stack_00000050 == 0 || (in_stack_00000038 != 0)) || (uVar3 != 0))))
  {
    lVar11 = *plVar1;
    if (lVar11 == 0) goto LAB_06762e2c;
    lVar12 = *(long *)(unaff_x19 + 0x298);
    if (lVar12 == 0) goto LAB_06762e2c;
    in_stack_00000128 = *(undefined8 *)(lVar12 + 0x30);
    in_stack_00000120 = *(undefined8 *)(lVar12 + 0x28);
    in_stack_00000138 = *(undefined8 *)(lVar12 + 0x40);
    in_stack_00000130 = *(undefined8 *)(lVar12 + 0x38);
    in_stack_00000140 = *(undefined8 *)(lVar12 + 0x48);
    in_stack_00000150 = *(undefined8 *)(lVar11 + 0x28);
    in_stack_00000158 = *(undefined8 *)(lVar11 + 0x30);
    in_stack_00000160 = *(undefined8 *)(lVar11 + 0x38);
    in_stack_00000168 = *(undefined8 *)(lVar11 + 0x40);
    in_stack_00000170 = *(undefined8 *)(lVar11 + 0x48);
    uVar9 = FUN_0691198c(&stack0x00000150,&stack0x00000120,0);
    if ((uVar9 & 1) == 0) {
      if (*(long *)(unaff_x19 + 0x240) == 0) goto LAB_06762e2c;
      in_stack_000000e0 = CONCAT44(in_stack_00000894,in_stack_00000890);
      in_stack_000000e8 = CONCAT44(in_stack_0000089c,in_stack_00000898);
      in_stack_000000f0 = in_stack_000008a0;
      in_stack_000000f8 = in_stack_000008a8;
      in_stack_00000100 = in_stack_000008b0;
      in_stack_00000108 = in_stack_000008b8;
      in_stack_00000110 = in_stack_000008c0;
      FUN_0678f410(*(long *)(unaff_x19 + 0x240),&stack0x000000e0,lVar10,0);
      FUN_067295d4();
    }
  }
  if (((uVar6 | uVar5 ^ 0xffffffff) & 1) == 0) {
    FUN_067295d4();
  }
  if (*(long *)(unaff_x20 + 400) != 0) {
    uVar9 = FUN_0663aecc(*(long *)(unaff_x20 + 400),0);
    if ((uVar9 & 1) == 0) {
      return;
    }
    lVar10 = *plVar2;
    if (lVar10 != 0) {
      lVar11 = *(long *)(unaff_x20 + 400);
      if (lVar11 != 0) {
        in_stack_00000088 = *(undefined8 *)(lVar11 + 0x38);
        in_stack_00000080 = *(undefined8 *)(lVar11 + 0x30);
        in_stack_00000098 = *(undefined8 *)(lVar11 + 0x48);
        in_stack_00000090 = *(undefined8 *)(lVar11 + 0x40);
        in_stack_000000a0 = *(undefined8 *)(lVar11 + 0x50);
        in_stack_000000b0 = *(undefined8 *)(lVar10 + 0x28);
        in_stack_000000b8 = *(undefined8 *)(lVar10 + 0x30);
        in_stack_000000c0 = *(undefined8 *)(lVar10 + 0x38);
        in_stack_000000c8 = *(undefined8 *)(lVar10 + 0x40);
        in_stack_000000d0 = *(undefined8 *)(lVar10 + 0x48);
        uVar9 = FUN_0691198c(&stack0x000000b0,&stack0x00000080,0);
        if ((uVar9 & 1) != 0) {
          return;
        }
        if (*(long *)(unaff_x20 + 400) != 0) {
          if (*(char *)(*(long *)(unaff_x20 + 400) + 0x20) == '\0') {
            return;
          }
          if (*(long *)(unaff_x19 + 600) != 0) {
            Unity_XR_Oculus_Input_OculusHMD__set_deviceRotation
                      (*(long *)(unaff_x19 + 600),*(undefined8 *)(unaff_x19 + 0x288),
                       *(undefined8 *)(unaff_x19 + 0x298),0);
            if (*(long *)(unaff_x19 + 600) != 0) {
              *(undefined1 *)(*(long *)(unaff_x19 + 600) + 0xf4) = 1;
LAB_06760c28:
              FUN_067295d4();
              return;
            }
          }
        }
      }
    }
  }
LAB_06762e2c:
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}


