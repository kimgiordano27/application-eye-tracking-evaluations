/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_evt_session_updated_t_base__set
ENTRY_POINT: 0789d73c
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_5;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


/* WARNING: Removing unreachable block (ram,0x0789d834) */

void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_evt_session_updated_t_base__set
               (long param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  ulong in_x9;
  int *in_x10;
  int *piVar4;
  long *unaff_x20;
  long *unaff_x21;
  long *unaff_x22;
  long *in_stack_00000018;
  
code_r0x0789d73c:
  in_x9 = in_x9 - 1;
  in_x10 = in_x10 + 4;
  if (in_x9 != 0) goto LAB_0789d730;
LAB_0789d748:
  puVar1 = (undefined8 *)FUN_03ac43c4(unaff_x20,param_3,0);
  do {
    (*(code *)*puVar1)(unaff_x20,puVar1[1]);
    FUN_05fa052c();
    if (in_stack_00000018 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    lVar2 = *in_stack_00000018;
    uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar3 != 0) {
      piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar4 + -2) == *unaff_x21) {
          puVar1 = (undefined8 *)(lVar2 + (long)*piVar4 * 0x10 + 0x138);
          goto LAB_0789d700;
        }
        uVar3 = uVar3 - 1;
        piVar4 = piVar4 + 4;
      } while (uVar3 != 0);
    }
    puVar1 = (undefined8 *)FUN_03ac43c4(in_stack_00000018,*unaff_x21,0);
LAB_0789d700:
    uVar3 = (*(code *)*puVar1)(in_stack_00000018,puVar1[1]);
    if ((uVar3 & 1) == 0) {
      if (in_stack_00000018 == (long *)0x0) {
        return;
      }
      lVar2 = *in_stack_00000018;
      uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
      if (uVar3 == 0) goto LAB_0789d7d8;
      piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      break;
    }
    if (in_stack_00000018 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    param_1 = *in_stack_00000018;
    param_3 = *unaff_x22;
    in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
    unaff_x20 = in_stack_00000018;
    if (in_x9 == 0) goto LAB_0789d748;
    in_x10 = (int *)(*(long *)(param_1 + 0xb0) + 8);
LAB_0789d730:
    if (*(long *)(in_x10 + -2) != param_3) goto code_r0x0789d73c;
    puVar1 = (undefined8 *)(param_1 + (long)*in_x10 * 0x10 + 0x138);
  } while( true );
  while( true ) {
    uVar3 = uVar3 - 1;
    piVar4 = piVar4 + 4;
    if (uVar3 == 0) break;
    if (*(long *)(piVar4 + -2) == *(long *)PTR_DAT_08488550) {
      puVar1 = (undefined8 *)(lVar2 + (long)*piVar4 * 0x10 + 0x138);
      goto LAB_0789d7f4;
    }
  }
LAB_0789d7d8:
  puVar1 = (undefined8 *)FUN_03ac43c4(in_stack_00000018,*(long *)PTR_DAT_08488550,0);
LAB_0789d7f4:
  (*(code *)*puVar1)(in_stack_00000018,puVar1[1]);
  return;
}


