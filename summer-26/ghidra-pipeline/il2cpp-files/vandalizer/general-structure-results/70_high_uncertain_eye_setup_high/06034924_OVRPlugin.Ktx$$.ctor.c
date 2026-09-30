/*
FUNCTION_NAME: OVRPlugin.Ktx$$.ctor
ENTRY_POINT: 06034924
PROGRAM: vandalizer-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_Ktx___ctor(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  ulong unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  long unaff_x22;
  undefined8 in_stack_00000020;
  undefined4 in_stack_00000028;
  undefined4 uStack0000000000000030;
  undefined8 uStack0000000000000034;
  undefined8 in_stack_00000040;
  undefined4 uStack0000000000000048;
  undefined4 uStack000000000000004c;
  undefined4 uStack0000000000000050;
  undefined8 uStack0000000000000054;
  undefined8 in_stack_00000060;
  undefined4 uStack0000000000000068;
  undefined4 uStack000000000000006c;
  undefined4 uStack0000000000000070;
  undefined8 uStack0000000000000074;
  undefined8 in_stack_00000080;
  undefined4 in_stack_00000088;
  undefined4 uStack000000000000008c;
  undefined4 in_stack_00000090;
  undefined4 uStack0000000000000094;
  undefined4 in_stack_00000098;
  
  FUN_031f20f4(*(undefined8 *)(param_1 + 0x670));
  *(undefined1 *)(unaff_x22 + 0xc19) = 1;
  in_stack_00000080 = 0;
  in_stack_00000088 = 0;
  uStack000000000000008c = 0;
  in_stack_00000098 = 0;
  in_stack_00000090 = 0;
  uStack0000000000000094 = 0;
  if (unaff_x20 != (long *)0x0) {
    lVar5 = *unaff_x20;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_075f7680) {
          puVar4 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_06034998;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar4 = (undefined8 *)FUN_0322c1e8();
LAB_06034998:
    iVar3 = (*(code *)*puVar4)();
    puVar2 = PTR_DAT_075f7670;
    puVar1 = PTR_DAT_075f2eb0;
    if (iVar3 == 0x1a) {
      iVar3 = 0;
      do {
        lVar5 = *unaff_x20;
        uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar6 != 0) {
          piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == *(long *)puVar2) {
              puVar4 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
              goto LAB_06034a10;
            }
            uVar6 = uVar6 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar6 != 0);
        }
        puVar4 = (undefined8 *)FUN_0322c1e8();
LAB_06034a10:
        (*(code *)*puVar4)(&stack0x00000060);
        in_stack_00000088 = uStack0000000000000068;
        in_stack_00000080 = in_stack_00000060;
        uStack0000000000000094 = (undefined4)uStack0000000000000074;
        in_stack_00000098 = SUB84(uStack0000000000000074,4);
        uStack000000000000008c = uStack000000000000006c;
        in_stack_00000090 = uStack0000000000000070;
        if ((unaff_x19 & 1) != 0) {
          if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
            Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
          }
          in_stack_00000028 = uStack0000000000000068;
          in_stack_00000020 = in_stack_00000060;
          uStack0000000000000034 = uStack0000000000000074;
          uStack0000000000000030 = uStack0000000000000070;
          FUN_06030a30(&stack0x00000040,&stack0x00000020,0);
          in_stack_00000088 = uStack0000000000000048;
          in_stack_00000080 = in_stack_00000040;
          uStack0000000000000094 = (undefined4)uStack0000000000000054;
          in_stack_00000098 = SUB84(uStack0000000000000054,4);
          uStack000000000000008c = uStack000000000000004c;
          in_stack_00000090 = uStack0000000000000050;
        }
        uStack0000000000000074 = CONCAT44(in_stack_00000098,uStack0000000000000094);
        uStack0000000000000068 = in_stack_00000088;
        in_stack_00000060 = in_stack_00000080;
        uStack000000000000006c = uStack000000000000008c;
        uStack0000000000000070 = in_stack_00000090;
        if (unaff_x21 == 0) goto LAB_06034ae0;
        FUN_0603422c();
        iVar3 = iVar3 + 1;
      } while (iVar3 != 0x1a);
    }
    return;
  }
LAB_06034ae0:
                    /* WARNING: Subroutine does not return */
  FUN_031f2390();
}


