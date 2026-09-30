/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.RuntimeSettings$$OnBeforeSerialize
ENTRY_POINT: 04d0bbec
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 92
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_13;telemetry_or_network_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_RuntimeSettings__OnBeforeSerialize(long param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  long lVar3;
  long unaff_x19;
  long *unaff_x20;
  int iVar4;
  long unaff_x21;
  long *unaff_x22;
  int unaff_w23;
  int unaff_w24;
  
  while( true ) {
    if ((param_1 == 0) ||
       (FUN_03aadb8c(param_1,*(int *)(param_1 + 0x18) + -1,
                     *(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x98)),
       unaff_x22 == (long *)0x0)) goto LAB_04d0beac;
    lVar3 = (**(code **)(*unaff_x22 + 0x178))(unaff_x22,*(undefined8 *)(*unaff_x22 + 0x180));
    if (lVar3 == 0) goto LAB_04d0beac;
    FUN_061d1254(lVar3,0);
    lVar3 = unaff_x20[5];
    unaff_w24 = unaff_w24 + 1;
    if (unaff_w23 <= unaff_w24) break;
    if (lVar3 == 0) goto LAB_04d0beac;
    if (*(int *)(lVar3 + 0x18) < 1) goto LAB_04d0bc44;
    unaff_x22 = (long *)FUN_03aac1c4(lVar3,*(int *)(lVar3 + 0x18) + -1,
                                     *(undefined8 *)
                                      (*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x88));
    if (unaff_x21 == 0) goto LAB_04d0beac;
    lVar3 = *(long *)(unaff_x21 + 0x10);
    *(int *)(unaff_x21 + 0x1c) = *(int *)(unaff_x21 + 0x1c) + 1;
    if (lVar3 == 0) goto LAB_04d0beac;
    uVar1 = *(uint *)(unaff_x21 + 0x18);
    if (uVar1 < *(uint *)(lVar3 + 0x18)) {
      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
      puVar2 = (undefined8 *)(lVar3 + (long)(int)uVar1 * 8 + 0x20);
      *puVar2 = unaff_x22;
      thunk_FUN_02dd37b4(puVar2,unaff_x22);
    }
    else {
      FUN_03aac494();
    }
    param_1 = unaff_x20[5];
  }
  if (lVar3 != 0) {
LAB_04d0bc44:
    FUN_03aad39c(lVar3,0);
    lVar3 = unaff_x20[0xd];
    if (lVar3 != 0) {
      iVar4 = *(int *)(lVar3 + 0x18);
      *(undefined4 *)(lVar3 + 0x18) = 0;
      *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
      if (0 < iVar4) {
        FUN_05029664(*(undefined8 *)(lVar3 + 0x10),0,iVar4,0);
      }
      lVar3 = unaff_x20[5];
      if (lVar3 != 0) {
        iVar4 = 0;
        goto LAB_04d0be44;
      }
    }
  }
  goto LAB_04d0beac;
  while( true ) {
    FUN_03aac1c4(unaff_x20[5],iVar4,
                 *(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x88));
    FUN_045ab1a4();
    lVar3 = unaff_x20[5];
    iVar4 = iVar4 + 1;
    if (lVar3 == 0) break;
LAB_04d0be44:
    if (*(int *)(lVar3 + 0x18) <= iVar4) {
      return;
    }
    (**(code **)(*unaff_x20 + 0x178))();
    if (unaff_x20[5] == 0) break;
  }
LAB_04d0beac:
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


