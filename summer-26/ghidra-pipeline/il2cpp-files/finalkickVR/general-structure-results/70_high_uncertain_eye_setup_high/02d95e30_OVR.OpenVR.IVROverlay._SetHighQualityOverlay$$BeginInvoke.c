/*
FUNCTION_NAME: OVR.OpenVR.IVROverlay._SetHighQualityOverlay$$BeginInvoke
ENTRY_POINT: 02d95e30
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;paired_state_refs;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_3;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Heritage AFTER dead removal. Example location: s0x0000027c : 0x02d96028 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

byte OVR_OpenVR_IVROverlay__SetHighQualityOverlay__BeginInvoke(long param_1,undefined1 param_2 [16])

{
  byte bVar1;
  long in_x9;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x29;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uStack000000000000002c;
  undefined4 uStack0000000000000034;
  undefined1 *puStack0000000000000088;
  undefined8 in_stack_00000090;
  uint uStack00000000000000b4;
  uint uStack00000000000000bc;
  undefined4 uStack00000000000000d4;
  undefined8 *in_stack_000000f8;
  undefined4 uStack0000000000000114;
  undefined4 uStack000000000000011c;
  undefined4 uStack0000000000000120;
  undefined4 uStack0000000000000124;
  undefined4 uStack0000000000000128;
  undefined4 uStack000000000000012c;
  ulong in_stack_00000170;
  undefined4 in_stack_00000178;
  undefined8 in_stack_00000180;
  undefined4 in_stack_00000188;
  undefined4 uStack000000000000018c;
  undefined4 in_stack_00000190;
  byte in_stack_000001a8;
  byte bStack00000000000001a9;
  byte bStack00000000000001aa;
  byte bStack00000000000001ab;
  byte bStack00000000000001ac;
  byte bStack00000000000001ad;
  byte bStack00000000000001ae;
  byte bStack00000000000001af;
  byte bStack00000000000001d3;
  undefined4 in_stack_00000220;
  undefined4 in_stack_00000224;
  undefined8 in_stack_0000027c;
  
  *(long *)(param_1 + 0x14) = param_2._8_8_;
  *(long *)(param_1 + 0xc) = param_2._0_8_;
  *(undefined8 *)(in_x9 + 0x1d8) = *(undefined8 *)(in_x9 + 0x108);
  *(undefined8 *)(in_x9 + 0x1d0) = *(undefined8 *)(in_x9 + 0x100);
  uVar2 = *(undefined8 *)(param_1 + 0xc);
  *(undefined8 *)(unaff_x29 + -0x3c) = *(undefined8 *)(param_1 + 0x14);
  *(undefined8 *)(unaff_x29 + -0x44) = uVar2;
  puStack0000000000000088 = &stack0x00000254;
  OVRPose_ToPosef_Legacy_mD9CEB204C7B417176FD6A32CD9E6F9CEA9E565C3();
  in_stack_000000f8[0x19] = *(undefined8 *)((long)in_stack_000000f8 + 0xac);
  in_stack_000000f8[0x18] = *(undefined8 *)((long)in_stack_000000f8 + 0xa4);
  in_stack_000000f8[0x13] = in_stack_000000f8[0x42];
  uVar5 = *(undefined4 *)(unaff_x29 + -8);
  in_stack_000000f8[0xe] = in_stack_000000f8[0x13];
  uVar4 = OVRExtensions_ToVector3f_m21A8631A98D29AED03A5ED3FF46475646703F4DC
                    (in_stack_00000220,in_stack_00000090);
  in_stack_000000f8[0x11] = CONCAT44(in_stack_00000224,uVar4);
  memcpy(&stack0x000001d4,(void *)(in_stack_000000f8[0x41] + 0x6c),0x40);
  bStack00000000000001d3 = *(byte *)(in_stack_000000f8[0x41] + 0xad) & 1;
  uVar2 = *(undefined8 *)(in_stack_000000f8[0x41] + 0xb0);
  in_stack_000000f8[3] = *(undefined8 *)(in_stack_000000f8[0x41] + 0xb8);
  in_stack_000000f8[2] = uVar2;
  uVar2 = *(undefined8 *)(in_stack_000000f8[0x41] + 0xc0);
  in_stack_000000f8[1] = *(undefined8 *)(in_stack_000000f8[0x41] + 200);
  *in_stack_000000f8 = uVar2;
  bStack00000000000001af = *(byte *)(in_stack_000000f8[0x41] + 0xd0) & 1;
  bStack00000000000001ae = *(byte *)(in_stack_000000f8[0x41] + 0x101) & 1;
  bStack00000000000001ad = *(byte *)(unaff_x29 + -0x2e) & 1;
  bStack00000000000001ac = *(byte *)(unaff_x29 + -0x2d) & 1;
  bStack00000000000001ab = *(byte *)(in_stack_000000f8[0x41] + 0xd1) & 1;
  bStack00000000000001aa = *(byte *)(in_stack_000000f8[0x41] + 0xd2) & 1;
  bStack00000000000001a9 = *(byte *)(in_stack_000000f8[0x41] + 0x25) & 1;
  in_stack_000001a8 = *(byte *)(in_stack_000000f8[0x41] + 0x105) & 1;
  il2cpp_codegen_runtime_class_init_inline
            (*(Il2CppClass **)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__)
  ;
  uStack00000000000000b4 = (uint)*(byte *)(unaff_x29 + -0xa3);
  bVar1 = *(byte *)(unaff_x29 + -0xa2);
  uStack00000000000000bc = (uint)*(byte *)(unaff_x29 + -0xa1);
  uVar2 = in_stack_000000f8[0x30];
  uVar3 = in_stack_000000f8[0x31];
  uVar4 = *(undefined4 *)(unaff_x29 + -0xfc);
  uStack00000000000000d4 = *(undefined4 *)(unaff_x29 + -0x100);
  in_stack_00000180 = in_stack_000000f8[0x18];
  in_stack_00000188 = (undefined4)in_stack_000000f8[0x19];
  uStack000000000000018c = (undefined4)in_stack_0000027c;
  in_stack_00000190 = (undefined4)((ulong)in_stack_0000027c >> 0x20);
  in_stack_00000170 = in_stack_000000f8[0x11];
  in_stack_00000178 = uVar5;
  memcpy(&stack0x00000130,&stack0x000001d4,0x40);
  uStack0000000000000120 = (undefined4)in_stack_000000f8[2];
  uStack0000000000000124 = (undefined4)((ulong)in_stack_000000f8[2] >> 0x20);
  uStack0000000000000128 = (undefined4)in_stack_000000f8[3];
  uStack000000000000012c = (undefined4)((ulong)in_stack_000000f8[3] >> 0x20);
  uStack0000000000000114 = (undefined4)((ulong)*in_stack_000000f8 >> 0x20);
  uStack000000000000011c = (undefined4)((ulong)in_stack_000000f8[1] >> 0x20);
  uStack000000000000002c = uStack0000000000000114;
  uStack0000000000000034 = uStack000000000000011c;
  bVar1 = OVRPlugin_EnqueueSubmitLayer_mCAB4C8E7194B009F4F37376C8898C633452EB54F
                    (in_stack_00000170 & 0xffffffff,in_stack_00000170._4_4_,in_stack_00000178,
                     uStack0000000000000120,uStack0000000000000124,uStack0000000000000128,
                     uStack000000000000012c,uStack00000000000000b4 & 1,bVar1 & 1,
                     uStack00000000000000bc & 1,uVar2,uVar3,uVar4,uStack00000000000000d4,
                     &stack0x00000180);
  *(undefined4 *)(in_stack_000000f8[0x41] + 0xf0) = *(undefined4 *)(in_stack_000000f8[0x41] + 0xec);
  *(byte *)(unaff_x29 + -1) = bVar1 & 1;
  return *(byte *)(unaff_x29 + -1) & 1;
}


