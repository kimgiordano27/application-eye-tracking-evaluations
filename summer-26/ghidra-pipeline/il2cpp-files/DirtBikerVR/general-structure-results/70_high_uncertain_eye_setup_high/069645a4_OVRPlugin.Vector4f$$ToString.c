/*
FUNCTION_NAME: OVRPlugin.Vector4f$$ToString
ENTRY_POINT: 069645a4
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_Vector4f__ToString(long param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  int *unaff_x19;
  undefined8 *unaff_x20;
  long unaff_x21;
  int unaff_w22;
  undefined8 uVar5;
  int unaff_w23;
  int iVar6;
  int unaff_w26;
  undefined8 *unaff_x27;
  undefined8 *unaff_x29;
  
  while( true ) {
    if (((param_1 == 0) || (lVar3 = FUN_04de82e0(param_1,unaff_w23,*unaff_x27), lVar3 == 0)) ||
       (*(long *)(lVar3 + 0x28) == 0)) goto LAB_06964724;
    iVar1 = *(int *)(*(long *)(lVar3 + 0x28) + 0x18);
    if (0 < iVar1) {
      iVar6 = 0;
      do {
        if (*(long *)(lVar3 + 0x28) == 0) goto LAB_06964724;
        iVar2 = FUN_04d8be94(*(long *)(lVar3 + 0x28),iVar6,*unaff_x29);
        if (iVar2 == unaff_w22) {
          *unaff_x20 = *(undefined8 *)(lVar3 + 0x18);
          thunk_FUN_03afed3c();
          *unaff_x19 = unaff_w23;
          return;
        }
        iVar6 = iVar6 + 1;
      } while (iVar1 != iVar6);
    }
    unaff_w23 = unaff_w23 + 1;
    if (unaff_w23 == unaff_w26) break;
    if (*(long *)(unaff_x21 + 0x28) == 0) goto LAB_06964724;
    param_1 = *(long *)(*(long *)(unaff_x21 + 0x28) + 0x30);
  }
  if (*(long *)(unaff_x21 + 0x28) != 0) {
    uVar5 = *(undefined8 *)(*(long *)(unaff_x21 + 0x28) + 0x28);
    if (*(int *)(*(long *)PTR_DAT_08486738 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    uVar4 = FUN_07c9c218(uVar5,0,0);
    lVar3 = *(long *)(unaff_x21 + 0x28);
    if ((uVar4 & 1) == 0) {
      if (lVar3 != 0) {
        uVar5 = thunk_FUN_07ca227c(lVar3,0);
        uVar5 = FUN_065cddf0(*(undefined8 *)PTR_DAT_084b6e40,uVar5,*(undefined8 *)PTR_DAT_084b6e38,0
                            );
        if (*(int *)(*(long *)PTR_DAT_08486be8 + 0xe4) == 0) {
          thunk_FUN_03ae8be4(*(long *)PTR_DAT_08486be8);
        }
        FUN_07c4fb40(uVar5,0);
        *unaff_x20 = 0;
        goto LAB_069646c8;
      }
    }
    else if (lVar3 != 0) {
      *unaff_x20 = *(undefined8 *)(lVar3 + 0x28);
LAB_069646c8:
      thunk_FUN_03afed3c();
      *unaff_x19 = -1;
      return;
    }
  }
LAB_06964724:
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


