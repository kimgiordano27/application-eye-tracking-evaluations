/*
FUNCTION_NAME: OVRPlugin.OVRP_1_49_0$$ovrp_Media_EncodeMrcFrameWithPoseTime
ENTRY_POINT: 076dbd70
PROGRAM: m3ar-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


bool OVRPlugin_OVRP_1_49_0__ovrp_Media_EncodeMrcFrameWithPoseTime(long param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long unaff_x20;
  long *unaff_x21;
  int unaff_w22;
  int unaff_w23;
  long *unaff_x24;
  long *unaff_x26;
  long *unaff_x27;
  long *unaff_x28;
  
  do {
    uVar1 = FUN_085849e0(param_1,0);
    lVar3 = *unaff_x24;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x28) {
          puVar2 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_076dbdc8;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined8 *)FUN_0406ae20(unaff_x24,*unaff_x28,0);
LAB_076dbdc8:
    uVar4 = (*(code *)*puVar2)(unaff_x24,uVar1,&stack0x00000018,puVar2[1]);
    if ((uVar4 & 1) != 0) {
      uVar4 = FUN_076b65c8();
      if ((uVar4 & 1) == 0) {
LAB_076dbe10:
        return unaff_w23 <= unaff_w22;
      }
    }
    do {
      unaff_w22 = unaff_w22 + 1;
      lVar3 = *unaff_x21;
      uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar4 != 0) {
        piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == *unaff_x26) {
            puVar2 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
            goto LAB_076dbcec;
          }
          uVar4 = uVar4 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar4 != 0);
      }
      puVar2 = (undefined8 *)FUN_0406ae20();
LAB_076dbcec:
      unaff_w23 = (*(code *)*puVar2)();
      if (unaff_w23 <= unaff_w22) goto LAB_076dbe10;
      lVar3 = *unaff_x21;
      uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar4 != 0) {
        piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == *unaff_x27) {
            puVar2 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
            goto LAB_076dbd50;
          }
          uVar4 = uVar4 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar4 != 0);
      }
      puVar2 = (undefined8 *)FUN_0406ae20();
LAB_076dbd50:
      unaff_x24 = (long *)(*(code *)*puVar2)();
    } while (unaff_x24 == (long *)0x0);
    param_1 = *(long *)(unaff_x20 + 0x20);
    if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0403188c();
    }
  } while( true );
}


