/*
FUNCTION_NAME: OVRPlugin$$GetSystemHmd3DofModeEnabled
ENTRY_POINT: 051c68b8
PROGRAM: hellodot-libil2cpp.so
SCORE: 101
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_8;validity_or_gating_hits_5;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_4
*/


void OVRPlugin__GetSystemHmd3DofModeEnabled(long param_1,undefined8 param_2,long param_3)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  ulong in_x9;
  int *in_x10;
  int *piVar5;
  long unaff_x19;
  undefined4 unaff_w20;
  long *unaff_x21;
  long *plVar6;
  long *unaff_x22;
  undefined8 *unaff_x23;
  long unaff_x24;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  undefined8 in_stack_00000020;
  undefined4 uStack0000000000000028;
  undefined4 uStack000000000000002c;
  undefined4 uStack0000000000000030;
  undefined8 uStack0000000000000034;
  undefined8 in_stack_00000040;
  undefined4 uStack0000000000000048;
  undefined4 uStack000000000000004c;
  undefined4 uStack0000000000000050;
  undefined8 uStack0000000000000054;
  undefined4 in_stack_00000070;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  
code_r0x051c68b8:
  in_x10 = in_x10 + 4;
  if (!(bool)in_ZR) goto LAB_051c68a8;
LAB_051c68c0:
  puVar1 = (undefined8 *)FUN_02ce0a7c(unaff_x21,param_3,7);
  do {
    uVar2 = (*(code *)*puVar1)(unaff_x21,unaff_w20,&stack0x00000040,puVar1[1]);
    if ((uVar2 & 1) != 0) {
      lVar3 = *(long *)(unaff_x19 + 0x40);
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      in_stack_00000088 = CONCAT44(uStack000000000000004c,uStack0000000000000048);
      uVar4 = *unaff_x26;
      in_stack_00000080 = in_stack_00000040;
      *(undefined8 *)(unaff_x24 + 0x14) = uStack0000000000000054;
      *(ulong *)(unaff_x24 + 0xc) = CONCAT44(uStack0000000000000050,uStack000000000000004c);
      FUN_04611b14(lVar3,unaff_w20,&stack0x00000080,uVar4);
    }
    plVar6 = *(long **)(unaff_x19 + 0x30);
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    lVar3 = *plVar6;
    uVar2 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar2 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x22) {
          puVar1 = (undefined8 *)(lVar3 + (long)(*piVar5 + 8) * 0x10 + 0x138);
          goto OVRPlugin__SetClientColorDesc;
        }
        uVar2 = uVar2 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar2 != 0);
    }
    puVar1 = (undefined8 *)FUN_02ce0a7c(plVar6,*unaff_x22,8);
OVRPlugin__SetClientColorDesc:
    uVar2 = (*(code *)*puVar1)(plVar6,unaff_w20,&stack0x00000020,puVar1[1]);
    if ((uVar2 & 1) != 0) {
      lVar3 = *(long *)(unaff_x19 + 0x48);
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      in_stack_00000088 = CONCAT44(uStack000000000000002c,uStack0000000000000028);
      uVar4 = *unaff_x26;
      in_stack_00000080 = in_stack_00000020;
      *(undefined8 *)(unaff_x24 + 0x14) = uStack0000000000000034;
      *(ulong *)(unaff_x24 + 0xc) = CONCAT44(uStack0000000000000030,uStack000000000000002c);
      FUN_04611b14(lVar3,unaff_w20,&stack0x00000080,uVar4);
    }
    uVar2 = FUN_04812268(&stack0x00000060,*unaff_x25);
    if ((uVar2 & 1) == 0) {
      FUN_04812264(&stack0x00000060,*unaff_x23);
      lVar3 = *(long *)(unaff_x19 + 0x20);
      if (lVar3 != 0) {
        (**(code **)(lVar3 + 0x18))(*(undefined8 *)(lVar3 + 0x40),*(undefined8 *)(lVar3 + 0x28));
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    unaff_x21 = *(long **)(unaff_x19 + 0x30);
    if (unaff_x21 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    param_1 = *unaff_x21;
    param_3 = *unaff_x22;
    in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
    unaff_w20 = in_stack_00000070;
    if (in_x9 == 0) goto LAB_051c68c0;
    in_x10 = (int *)(*(long *)(param_1 + 0xb0) + 8);
LAB_051c68a8:
    if (*(long *)(in_x10 + -2) != param_3) {
      in_x9 = in_x9 - 1;
      in_ZR = in_x9 == 0;
      goto code_r0x051c68b8;
    }
    puVar1 = (undefined8 *)(param_1 + (long)(*in_x10 + 7) * 0x10 + 0x138);
  } while( true );
}


