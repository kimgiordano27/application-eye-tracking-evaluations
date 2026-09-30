/*
FUNCTION_NAME: UnityEngine.Rendering.Universal.PostProcessingData$$get_supportScreenSpaceLensFlare
ENTRY_POINT: 05b97e90
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 75
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_1;telemetry_or_network_hits_3
*/


void UnityEngine_Rendering_Universal_PostProcessingData__get_supportScreenSpaceLensFlare(void)

{
  undefined4 uVar1;
  char cVar2;
  long lVar3;
  long unaff_x19;
  undefined8 *unaff_x20;
  long unaff_x21;
  undefined8 unaff_x22;
  int unaff_w23;
  void *unaff_x25;
  undefined8 uVar4;
  undefined8 *unaff_x27;
  long *unaff_x28;
  int unaff_w29;
  undefined1 auVar5 [16];
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000050;
  undefined4 uStack0000000000000058;
  undefined4 uStack000000000000005c;
  long in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  ulong in_stack_000000d8;
  ulong in_stack_000000e0;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_000000f8;
  undefined8 in_stack_00000100;
  undefined8 in_stack_00000108;
  undefined8 in_stack_00000110;
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
  undefined8 in_stack_00000190;
  undefined8 in_stack_00000198;
  undefined8 in_stack_000001a0;
  undefined8 in_stack_000001a8;
  undefined8 in_stack_000001b0;
  undefined4 in_stack_000001d0;
  
  do {
    FUN_05f110e0(unaff_x25,0,0);
    FUN_05b8b238(&stack0x00000070);
    if ((unaff_w23 == 0) && (*(char *)(unaff_x19 + 0x2c0) != '\0')) {
      FUN_05f110d8(0x3f800000,in_stack_000000d8._4_4_,in_stack_000000e0 & 0xffffffff,
                   in_stack_000000e0._4_4_,unaff_x25,0);
    }
    else {
      FUN_05f110cc(in_stack_000000d8 & 0xffffffff,unaff_x25,0);
    }
    do {
      unaff_w23 = unaff_w23 + 1;
      if (unaff_w29 == unaff_w23) {
        auVar5 = FUN_038c9db4(unaff_x22,
                              *(undefined8 *)Method_UnityEngine_GraphicsBuffer_SetData<Vector4>__);
        cVar2 = *(char *)(unaff_x19 + 0x2c0);
        FUN_03bb8324(*(undefined8 *)Method_UnityEngine_GraphicsBuffer_SetData__);
        if (in_stack_00000060 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d4dee8();
        }
        if (*(long *)(in_stack_00000060 + 0x18) != 0) {
          FUN_05f0be84(*(long *)(in_stack_00000060 + 0x18),in_stack_00000038._4_4_,
                       uStack000000000000005c,uStack0000000000000058,in_stack_00000050._4_4_,
                       auVar5._0_8_,auVar5._8_8_,cVar2 + -1);
          **(undefined1 **)(*(long *)Method_System_Net_FtpWebRequest_set_ContentOffset__ + 0xb8) = 1
          ;
          FUN_05b0719c(&stack0x000001dc,0);
          return;
        }
                    /* WARNING: Subroutine does not return */
        FUN_02d4dee8();
      }
      if (*(int *)(*unaff_x28 + 0xe4) == 0) {
        thunk_FUN_02dabd98();
      }
      FUN_04bedb68(unaff_x19 + 0x194,unaff_w23,*unaff_x20);
      if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d4dee8();
      }
      FUN_05b8ae34();
      unaff_x25 = (void *)FUN_038c9600(unaff_x22,unaff_w23,*unaff_x27);
      in_stack_000000e0 = 0;
      in_stack_00000088 = 0;
      in_stack_00000080 = 0;
      in_stack_00000098 = 0;
      in_stack_00000090 = 0;
      in_stack_000000a8 = 0;
      in_stack_000000a0 = 0;
      in_stack_000000b8 = 0;
      in_stack_000000b0 = 0;
      in_stack_000000c8 = 0;
      in_stack_000000c0 = 0;
      in_stack_000000d8 = 0;
      in_stack_000000d0 = 0;
      in_stack_00000078 = 0;
      in_stack_00000070 = 0;
      FUN_05f11174(&stack0x00000070,in_stack_000001d0,0);
      memcpy(unaff_x25,&stack0x00000070,0x78);
      lVar3 = FUN_04bedb68(unaff_x19 + 0x194,unaff_w23,*unaff_x20);
      if (*(char *)(lVar3 + 0x14) == '\0') {
        if (*(int *)(*(long *)PTR_DAT_0664e7d8 + 0xe4) == 0) {
          thunk_FUN_02dabd98();
        }
        lVar3 = FUN_05b87cb0();
        if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d4dee8();
        }
        uVar4 = *(undefined8 *)(lVar3 + 0xb8);
        FUN_05b47864(&stack0x00000070,uVar4,0);
        in_stack_00000198 = in_stack_00000078;
        in_stack_00000190 = in_stack_00000070;
        in_stack_000001a8 = in_stack_00000088;
        in_stack_000001a0 = in_stack_00000080;
        in_stack_000001b0 = in_stack_00000090;
        if (*(int *)(*unaff_x28 + 0xe4) == 0) {
          thunk_FUN_02dabd98();
        }
        lVar3 = FUN_04bedb68(unaff_x19 + 0x194,unaff_w23,*unaff_x20);
        uVar1 = *(undefined4 *)(lVar3 + 0x18);
        lVar3 = FUN_04bedb68(unaff_x19 + 0x194,unaff_w23,*unaff_x20);
        in_stack_00000090 = 0;
        in_stack_00000170 = in_stack_000001b0;
        in_stack_00000078 = 0;
        in_stack_00000070 = 0;
        in_stack_00000088 = 0;
        in_stack_00000080 = 0;
        in_stack_00000158 = in_stack_00000198;
        in_stack_00000150 = in_stack_00000190;
        in_stack_00000168 = in_stack_000001a8;
        in_stack_00000160 = in_stack_000001a0;
        FUN_05efc77c(&stack0x00000070,&stack0x00000150,uVar1,0xffffffff,
                     *(undefined4 *)(lVar3 + 0x1c),0);
        in_stack_00000140 = in_stack_00000090;
        in_stack_00000128 = in_stack_00000078;
        in_stack_00000120 = in_stack_00000070;
        in_stack_00000138 = in_stack_00000088;
        in_stack_00000130 = in_stack_00000080;
        FUN_05f110a0(unaff_x25,&stack0x00000120,0);
        lVar3 = FUN_04bedb68(unaff_x19 + 0x194,unaff_w23,*unaff_x20);
        unaff_x22 = in_stack_00000068;
        if (*(int *)(lVar3 + 0x10) != 1) {
          if (*(int *)(*unaff_x28 + 0xe4) == 0) {
            thunk_FUN_02dabd98();
          }
          lVar3 = FUN_04bedb68(unaff_x19 + 0x194,unaff_w23,*unaff_x20);
          if (*(int *)(lVar3 + 0x10) != 2) goto LAB_05b97df8;
        }
        FUN_05b47864(&stack0x00000070,uVar4,0);
        in_stack_00000110 = in_stack_00000090;
        in_stack_000000f8 = in_stack_00000078;
        in_stack_000000f0 = in_stack_00000070;
        in_stack_00000108 = in_stack_00000088;
        in_stack_00000100 = in_stack_00000080;
        FUN_05f110b4(unaff_x25,&stack0x000000f0,0);
      }
LAB_05b97df8:
      if (*(int *)(*unaff_x28 + 0xe4) == 0) {
        thunk_FUN_02dabd98();
      }
      lVar3 = FUN_04bedb68(unaff_x19 + 0x194,unaff_w23,*unaff_x20);
      FUN_05f11074(unaff_x25,*(undefined4 *)(lVar3 + 0xc),0);
      lVar3 = FUN_04bedb68(unaff_x19 + 0x194,unaff_w23,*unaff_x20);
      FUN_05f1107c(unaff_x25,*(undefined4 *)(lVar3 + 0x10),0);
      lVar3 = FUN_04bedb68(unaff_x19 + 0x194,unaff_w23,*unaff_x20);
    } while (*(int *)(lVar3 + 0xc) != 1);
    FUN_05f110cc(0x3f800000,0,0,0x3f800000,unaff_x25,0);
    FUN_05f110d8(0x3f800000,unaff_x25,0);
  } while( true );
}


