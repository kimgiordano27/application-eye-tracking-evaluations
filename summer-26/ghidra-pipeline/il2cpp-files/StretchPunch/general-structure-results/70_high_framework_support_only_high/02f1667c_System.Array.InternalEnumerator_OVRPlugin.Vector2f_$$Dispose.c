/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.Vector2f>$$Dispose
ENTRY_POINT: 02f1667c
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x02f167dc) */

undefined8 System_Array_InternalEnumerator<OVRPlugin_Vector2f>__Dispose(void)

{
  int iVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  int *piVar6;
  long unaff_x19;
  long *unaff_x20;
  ulong unaff_x21;
  long unaff_x23;
  int unaff_w25;
  long unaff_x26;
  long *unaff_x27;
  int unaff_w28;
  long unaff_x29;
  
code_r0x02f1667c:
  puVar2 = (undefined8 *)FUN_01dde8fc();
  do {
    uVar3 = (*(code *)*puVar2)();
    if ((uVar3 & 1) == 0) {
LAB_02f16770:
      if (unaff_x20 == (long *)0x0) goto LAB_02f167d8;
      lVar4 = *unaff_x20;
      uVar3 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar3 == 0) goto LAB_02f167b0;
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      break;
    }
    lVar4 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xe8);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_01dde7f8(lVar4);
    }
    lVar5 = *unaff_x20;
    uVar3 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar3 != 0) {
      piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == lVar4) {
          puVar2 = (undefined8 *)(lVar5 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_02f1670c;
        }
        uVar3 = uVar3 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar3 != 0);
    }
    puVar2 = (undefined8 *)FUN_01dde8fc();
LAB_02f1670c:
    (*(code *)*puVar2)();
    iVar1 = FUN_02f15810();
    if (iVar1 < 0) {
      unaff_w25 = unaff_w25 + 1;
      if ((unaff_x21 & 1) != 0) goto LAB_02f16770;
    }
    else {
      if (unaff_x23 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01d7db70();
      }
      uVar3 = FUN_03604bc4();
      if ((uVar3 & 1) == 0) {
        FUN_03604b48();
        unaff_w28 = unaff_w28 + 1;
      }
    }
    if (unaff_x20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01d7db70();
    }
    lVar4 = *unaff_x20;
    uVar3 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar3 == 0) goto code_r0x02f1667c;
    piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    while (*(long *)(piVar6 + -2) != *unaff_x27) {
      uVar3 = uVar3 - 1;
      piVar6 = piVar6 + 4;
      if (uVar3 == 0) goto code_r0x02f1667c;
    }
    puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
  } while( true );
  while( true ) {
    uVar3 = uVar3 - 1;
    piVar6 = piVar6 + 4;
    if (uVar3 == 0) break;
    if (*(long *)(piVar6 + -2) ==
        *(long *)Field_UnityEngine_UIElements_UIR_RenderChain_DepthOrderedDirtyTracking_heads) {
      puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
      goto LAB_02f167cc;
    }
  }
LAB_02f167b0:
  puVar2 = (undefined8 *)FUN_01dde8fc();
LAB_02f167cc:
  (*(code *)*puVar2)();
LAB_02f167d8:
  if (*(long *)(unaff_x26 + 0x28) == *(long *)(unaff_x29 + -8)) {
    return CONCAT44(unaff_w25,unaff_w28);
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


