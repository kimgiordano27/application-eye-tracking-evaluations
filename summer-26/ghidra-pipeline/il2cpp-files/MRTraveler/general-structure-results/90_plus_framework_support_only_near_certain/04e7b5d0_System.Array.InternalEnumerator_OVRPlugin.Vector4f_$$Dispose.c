/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.Vector4f>$$Dispose
ENTRY_POINT: 04e7b5d0
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 97
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_10;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x04e7b670) */
/* WARNING: Removing unreachable block (ram,0x04e7b724) */

void System_Array_InternalEnumerator<OVRPlugin_Vector4f>__Dispose(void)

{
  undefined8 *puVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  int *piVar6;
  long unaff_x19;
  long unaff_x20;
  ulong unaff_x21;
  long unaff_x22;
  long *unaff_x23;
  long unaff_x24;
  long *unaff_x26;
  long unaff_x27;
  long *unaff_x28;
  long unaff_x29;
  
  do {
    if (unaff_x24 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    uVar2 = FUN_077e9ba0();
    if ((uVar2 & 1) == 0) {
      if (unaff_x22 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30();
      }
      FUN_077e9b24();
    }
LAB_04e7b4ac:
    do {
      lVar4 = *unaff_x23;
      uVar2 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar2 != 0) {
        piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *unaff_x28) {
            puVar1 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
            goto LAB_04e7b4f8;
          }
          uVar2 = uVar2 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar2 != 0);
      }
      puVar1 = (undefined8 *)FUN_03cf1348();
LAB_04e7b4f8:
      uVar2 = (*(code *)*puVar1)();
      if ((uVar2 & 1) == 0) {
        if (unaff_x23 == (long *)0x0) goto LAB_04e7b674;
        lVar4 = *unaff_x23;
        uVar2 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar2 == 0) goto LAB_04e7b63c;
        piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        goto System_Array_InternalEnumerator<OVRPlugin_Vector4f>__get_Current;
      }
      lVar4 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xe8);
      if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_03cf1244(lVar4);
      }
      lVar5 = *unaff_x23;
      uVar2 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar2 != 0) {
        piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == lVar4) {
            puVar1 = (undefined8 *)(lVar5 + (long)*piVar6 * 0x10 + 0x138);
            goto LAB_04e7b570;
          }
          uVar2 = uVar2 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar2 != 0);
      }
      puVar1 = (undefined8 *)FUN_03cf1348();
LAB_04e7b570:
      (*(code *)*puVar1)();
      *(undefined4 *)(unaff_x29 + -0xc) = 0;
      uVar2 = FUN_04e7b7f8();
      if ((uVar2 & 1) != 0) {
        if (unaff_x24 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03c8fb30();
        }
        FUN_077e9b24();
        goto LAB_04e7b4ac;
      }
    } while ((int)unaff_x21 <= *(int *)(unaff_x29 + -0xc));
  } while( true );
  while( true ) {
    uVar2 = uVar2 - 1;
    piVar6 = piVar6 + 4;
    if (uVar2 == 0) break;
System_Array_InternalEnumerator<OVRPlugin_Vector4f>__get_Current:
    if (*(long *)(piVar6 + -2) == *unaff_x26) {
      puVar1 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
      goto LAB_04e7b658;
    }
  }
LAB_04e7b63c:
  puVar1 = (undefined8 *)FUN_03cf1348();
LAB_04e7b658:
  (*(code *)*puVar1)();
LAB_04e7b674:
  if (0 < (int)unaff_x21) {
    if (unaff_x22 == 0) {
LAB_04e7b710:
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    uVar2 = 0;
    do {
      uVar3 = FUN_077e9ba0();
      if ((uVar3 & 1) != 0) {
        if (*(long *)(unaff_x20 + 0x18) == 0) goto LAB_04e7b710;
        if (*(uint *)(*(long *)(unaff_x20 + 0x18) + 0x18) <= uVar2) {
                    /* WARNING: Subroutine does not return */
          FUN_03c8fb38();
        }
        FUN_04e77a20();
      }
      uVar2 = uVar2 + 1;
    } while (unaff_x21 != uVar2);
  }
  if (*(long *)(unaff_x27 + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


