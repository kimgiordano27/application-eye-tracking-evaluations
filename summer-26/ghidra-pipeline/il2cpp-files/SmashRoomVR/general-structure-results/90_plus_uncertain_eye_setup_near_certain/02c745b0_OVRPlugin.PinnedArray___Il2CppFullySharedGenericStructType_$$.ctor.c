/*
FUNCTION_NAME: OVRPlugin.PinnedArray<__Il2CppFullySharedGenericStructType>$$.ctor
ENTRY_POINT: 02c745b0
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 103
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x02c74800) */

void OVRPlugin_PinnedArray<__Il2CppFullySharedGenericStructType>___ctor
               (undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined1 (*pauVar6) [16];
  long lVar7;
  uint uVar8;
  ulong uVar9;
  int *piVar10;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  undefined1 auVar11 [16];
  
  lVar3 = FUN_01ae9e74(param_2);
  lVar7 = *unaff_x19;
  uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar9 != 0) {
    piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar10 + -2) == lVar3) {
        puVar4 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
        goto UnityEngine_UIElements_PointerCaptureEventBase<object>__get_pointerId;
      }
      uVar9 = uVar9 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar9 != 0);
  }
  puVar4 = (undefined8 *)FUN_01ae9f78();
UnityEngine_UIElements_PointerCaptureEventBase<object>__get_pointerId:
  puVar1 = Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_19__;
  plVar5 = (long *)(*(code *)*puVar4)();
  puVar2 = Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_2__;
  if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01b48178();
  }
  do {
    lVar3 = *plVar5;
    uVar9 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)puVar2) {
          puVar4 = (undefined8 *)(lVar3 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_02c74674;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar4 = (undefined8 *)FUN_01ae9f78(plVar5,*(long *)puVar2,0);
LAB_02c74674:
    uVar9 = (*(code *)*puVar4)(plVar5,puVar4[1]);
    if ((uVar9 & 1) == 0) {
      if (plVar5 == (long *)0x0) {
        return;
      }
      lVar3 = *plVar5;
      uVar9 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar9 == 0) goto LAB_02c747ac;
      piVar10 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      break;
    }
    lVar3 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x140);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_01ae9e74(lVar3);
    }
    lVar7 = *plVar5;
    uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == lVar3) {
          puVar4 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_02c746ec;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar4 = (undefined8 *)FUN_01ae9f78(plVar5,lVar3,0);
LAB_02c746ec:
    auVar11 = (*(code *)*puVar4)(plVar5,puVar4[1]);
    lVar3 = *(long *)(unaff_x21 + 0x10);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    uVar8 = *(uint *)(unaff_x21 + 0x18);
    if (uVar8 == *(uint *)(lVar3 + 0x18)) {
      FUN_02c72ef4();
      uVar8 = *(uint *)(unaff_x21 + 0x18);
      lVar3 = *(long *)(unaff_x21 + 0x10);
      *(uint *)(unaff_x21 + 0x18) = uVar8 + 1;
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01b48178();
      }
    }
    else {
      *(uint *)(unaff_x21 + 0x18) = uVar8 + 1;
    }
    if (*(uint *)(lVar3 + 0x18) <= uVar8) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48180();
    }
    pauVar6 = (undefined1 (*) [16])(lVar3 + (long)(int)uVar8 * 0x10 + 0x20);
    *pauVar6 = auVar11;
    thunk_FUN_01b4f09c(pauVar6,0);
  } while( true );
  while( true ) {
    uVar9 = uVar9 - 1;
    piVar10 = piVar10 + 4;
    if (uVar9 == 0) break;
    if (*(long *)(piVar10 + -2) == *(long *)puVar1) {
      puVar4 = (undefined8 *)(lVar3 + (long)*piVar10 * 0x10 + 0x138);
      goto LAB_02c747c8;
    }
  }
LAB_02c747ac:
  puVar4 = (undefined8 *)FUN_01ae9f78(plVar5,*(long *)puVar1,0);
LAB_02c747c8:
  (*(code *)*puVar4)(plVar5,puVar4[1]);
  return;
}


