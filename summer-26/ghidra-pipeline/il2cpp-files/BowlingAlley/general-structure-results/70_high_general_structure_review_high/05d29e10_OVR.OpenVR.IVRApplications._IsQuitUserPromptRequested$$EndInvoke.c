/*
FUNCTION_NAME: OVR.OpenVR.IVRApplications._IsQuitUserPromptRequested$$EndInvoke
ENTRY_POINT: 05d29e10
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_5;ui_or_gameplay_sink_hits_6;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x05d29f4c) */

void OVR_OpenVR_IVRApplications__IsQuitUserPromptRequested__EndInvoke
               (long param_1,undefined8 param_2,long param_3)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  ulong in_x9;
  int *in_x10;
  int *piVar4;
  long *unaff_x19;
  long *unaff_x22;
  long *unaff_x23;
  long *unaff_x24;
  
code_r0x05d29e10:
  in_x10 = in_x10 + 4;
  if (!(bool)in_ZR) goto LAB_05d29e00;
LAB_05d29e18:
  puVar1 = (undefined8 *)FUN_032937ac();
  do {
    uVar2 = (*(code *)*puVar1)();
    if ((uVar2 & 1) == 0) {
      if (unaff_x19 == (long *)0x0) {
        return;
      }
      lVar3 = *unaff_x19;
      uVar2 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar2 == 0) goto OVR_OpenVR_IVRApplications__LaunchInternalProcess__BeginInvoke;
      piVar4 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      break;
    }
    lVar3 = *unaff_x19;
    uVar2 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar2 != 0) {
      piVar4 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar4 + -2) == *unaff_x24) {
          puVar1 = (undefined8 *)(lVar3 + (long)*piVar4 * 0x10 + 0x138);
          goto LAB_05d29e90;
        }
        uVar2 = uVar2 - 1;
        piVar4 = piVar4 + 4;
      } while (uVar2 != 0);
    }
    puVar1 = (undefined8 *)FUN_032937ac();
LAB_05d29e90:
    lVar3 = (*(code *)*puVar1)();
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_032d5ee8();
    }
    OVR_OpenVR_IVRApplications__GetCurrentSceneProcessId__BeginInvoke();
    OVR_OpenVR_IVRApplications__GetCurrentSceneProcessId__BeginInvoke();
    param_1 = *unaff_x19;
    param_3 = *unaff_x23;
    in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
    if (in_x9 == 0) goto LAB_05d29e18;
    in_x10 = (int *)(*(long *)(param_1 + 0xb0) + 8);
LAB_05d29e00:
    if (*(long *)(in_x10 + -2) != param_3) {
      in_x9 = in_x9 - 1;
      in_ZR = in_x9 == 0;
      goto code_r0x05d29e10;
    }
    puVar1 = (undefined8 *)(param_1 + (long)*in_x10 * 0x10 + 0x138);
  } while( true );
  while( true ) {
    uVar2 = uVar2 - 1;
    piVar4 = piVar4 + 4;
    if (uVar2 == 0) break;
    if (*(long *)(piVar4 + -2) == *unaff_x22) {
      puVar1 = (undefined8 *)(lVar3 + (long)*piVar4 * 0x10 + 0x138);
      goto LAB_05d29f1c;
    }
  }
OVR_OpenVR_IVRApplications__LaunchInternalProcess__BeginInvoke:
  puVar1 = (undefined8 *)FUN_032937ac();
LAB_05d29f1c:
  (*(code *)*puVar1)();
  return;
}


